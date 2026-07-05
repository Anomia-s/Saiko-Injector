#include "ecs_hook.h"
#include "keybind.h"
#include "../shared/qt_proxy.h"
#include "../shared/shared.h"
#include <Windows.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <mutex>

#define FLECS_WORLD_MAGIC 0x65637377

static std::string g_status = "idle";
static std::mutex g_statusMutex;
static bool g_initialized = false;
static intptr_t g_worldPtr = 0;

static void setStatus(const char* s) {
    std::lock_guard<std::mutex> lock(g_statusMutex);
    g_status = s;
}

// ECS world discovery via heap scan
// Flecs world header: ecs_header_t { int32_t magic; int32_t type; ... }
// magic == 0x65637377 ("ecsw")

static intptr_t scanForFlecsWorld() {
    DBG_TRACE(L"[ecs_hook] Scanning memory for Flecs world...");
    SYSTEM_INFO si;
    GetSystemInfo(&si);
    uint8_t* addr = (uint8_t*)si.lpMinimumApplicationAddress;
    uint8_t* maxAddr = (uint8_t*)si.lpMaximumApplicationAddress;
    int found = 0;

    while (addr < maxAddr) {
        MEMORY_BASIC_INFORMATION mbi;
        if (!VirtualQuery(addr, &mbi, sizeof(mbi))) {
            addr += si.dwPageSize;
            continue;
        }
        if (mbi.State == MEM_COMMIT &&
            (mbi.Protect & (PAGE_READWRITE | PAGE_READONLY | PAGE_EXECUTE_READWRITE)) &&
            !(mbi.Protect & PAGE_GUARD) && !(mbi.Protect & PAGE_NOACCESS)) {
            size_t regionSize = mbi.RegionSize;
            uint8_t* regionEnd = (uint8_t*)mbi.BaseAddress + regionSize;
            for (uint8_t* probe = (uint8_t*)mbi.BaseAddress;
                 probe + 2 * sizeof(int32_t) <= regionEnd;
                 probe += 4) {
                __try {
                    int32_t val = *(int32_t*)probe;
                    if (val == FLECS_WORLD_MAGIC) {
                        int32_t nextVal = *(int32_t*)(probe + sizeof(int32_t));
                        if (nextVal >= 0 && nextVal < 100) {
                            intptr_t wp = reinterpret_cast<intptr_t>(probe);
                            debug_log(L"[ecs_hook] Found candidate ecs_world_t* at 0x%p (type=%d)\n", (void*)wp, nextVal);
                            found++;
                            g_worldPtr = wp;
                            return wp;
                        }
                    }
                } __except (EXCEPTION_EXECUTE_HANDLER) {
                    break;
                }
            }
        }
        addr = (uint8_t*)mbi.BaseAddress + mbi.RegionSize;
    }
    debug_log(L"[ecs_hook] Heap scan complete, found %d candidates\n", found);
    return 0;
}

// ECS world discovery via Qt top-level widgets
// Walk QList<QWidget*> returned by QApplication::topLevelWidgets()

typedef struct {
    int ref;
    int alloc;
    int begin;
    int end;
    void* array[1];
} QListData;

static intptr_t findWorldViaQtWidgets() {
    if (!g_qt.qApp || !g_qt.topLevelWidgets) return 0;
    DBG_TRACE(L"[ecs_hook] Walking Qt top-level widgets for ECS world...");

    void* result = g_qt.topLevelWidgets();
    if (!result) {
        DBG_TRACE(L"[ecs_hook] topLevelWidgets returned null");
        return 0;
    }

    QListData* d = *(QListData**)result;
    if (!d) {
        DBG_TRACE(L"[ecs_hook] QList data pointer is null");
        return 0;
    }

    int beginIdx = d->begin;
    int endIdx = d->end;
    debug_log(L"[ecs_hook] Found %d top-level widgets\n", endIdx - beginIdx);

    for (int i = beginIdx; i < endIdx; i++) {
        void* widget = d->array[i];
        if (!widget) continue;
        const wchar_t* title = g_qt.windowTitle ? g_qt.windowTitle(widget) : L"";
        debug_log(L"[ecs_hook]   Widget 0x%p title: '%ls'\n", widget, title ? title : L"");

        if (g_qt.findChild) {
            void* viewport = g_qt.findChild(widget, "ViewportWidget", "");
            if (viewport) {
                debug_log(L"[ecs_hook] Found ViewportWidget at 0x%p\n", viewport);
                return reinterpret_cast<intptr_t>(viewport);
            }
        }
    }
    return 0;
}

// Lua execution via QScintilla injection

void executeLua(const char* code) {
    debug_log(L"[ecs_hook] Executing Lua: %hs\n", code);
    setStatus("executing_lua");

    if (!g_qt.qApp || !g_qt.topLevelWidgets) {
        setStatus("error: qt not available");
        return;
    }

    void* result = g_qt.topLevelWidgets();
    if (!result) {
        setStatus("error: no widgets");
        return;
    }

    QListData* d = *(QListData**)result;
    if (!d) {
        setStatus("error: empty widget list");
        return;
    }

    int count = d->end - d->begin;

    for (int i = 0; i < count; i++) {
        void* widget = d->array[d->begin + i];
        if (!widget) continue;

        if (g_qt.findChildren) {
            const char* scintillaClasses[] = {
                "QsciScintilla",
                "QScintilla",
                "ScintillaEdit",
                NULL
            };

            for (int c = 0; scintillaClasses[c]; c++) {
                void* scintillaList = g_qt.findChildren(widget, scintillaClasses[c], "");
                if (!scintillaList) continue;

                QListData* sd = *(QListData**)scintillaList;
                if (!sd) continue;

                int sBegin = sd->begin;
                int sEnd = sd->end;
                if (sEnd > sBegin && g_qt.scintillaSetText) {
                    void* scintilla = sd->array[sBegin];
                    debug_log(L"[ecs_hook] Found %hs at 0x%p\n", scintillaClasses[c], scintilla);
                    g_qt.scintillaSetText(scintilla, code);
                    setStatus("lua_injected");
                    return;
                }
            }
        }
    }

    DBG_TRACE(L"[ecs_hook] QScintilla not found in widget tree");
    setStatus("error: scintilla not found");
}

// Status

const char* getStatus() {
    static char buf[256];
    std::lock_guard<std::mutex> lock(g_statusMutex);
    _snprintf_s(buf, sizeof(buf), _TRUNCATE,
                "ecs_world: %s | %s",
                g_worldPtr ? "found" : "not found",
                g_status.c_str());
    return buf;
}

// Init / Shutdown

void initEcsHook() {
    DBG_TRACE(L"[ecs_hook] Initializing...");
    g_worldPtr = scanForFlecsWorld();
    if (!g_worldPtr) {
        g_worldPtr = findWorldViaQtWidgets();
    }
    if (g_worldPtr) {
        debug_log(L"[ecs_hook] ECS world at 0x%p\n", (void*)g_worldPtr);
    } else {
        DBG_TRACE(L"[ecs_hook] ECS world discovery failed (will retry on first command)");
    }
    g_initialized = true;
    setStatus("initialized");
}

void shutdownEcsHook() {
    DBG_TRACE(L"[ecs_hook] Shutting down...");
    g_initialized = false;
    g_worldPtr = 0;
    setStatus("shutdown");
}
