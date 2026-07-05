#include <Windows.h>
#include "../shared/shared.h"
#include "../shared/qt_proxy.h"
#include "sdl_hook.h"
#include "keybind.h"
#include "ecs_hook.h"
#include "pipe_server.h"

static HANDLE g_workerThread = NULL;
static volatile LONG g_running = 0;

// Wait for Qt / QApplication to be ready
// Poll GetModuleHandle for Qt6Core.dll, find qApp export, resolve Qt proxy.

static bool waitForQt(int maxRetries) {
    for (int attempt = 0; attempt < maxRetries; attempt++) {
        debug_log(L"[dllmain] Qt init attempt %d/%d\n", attempt + 1, maxRetries);

        HMODULE hQtCore = GetModuleHandleW(L"Qt6Core.dll");
        if (!hQtCore) {
            debug_log(L"[dllmain] Qt6Core.dll not loaded yet\n");
            Sleep(2000);
            continue;
        }

        FARPROC qAppProc = GetProcAddress(hQtCore, "?qApp@@3PEAVQCoreApplication@@EA");
        if (!qAppProc) qAppProc = GetProcAddress(hQtCore, "?qApp@@3PEAVQApplication@@EA");
        if (!qAppProc) qAppProc = GetProcAddress(hQtCore, "?qApp@@YAPEAVQCoreApplication@@XZ");

        if (qAppProc) {
            g_qt.qApp = *(void**)qAppProc;
            if (g_qt.qApp) {
                debug_log(L"[dllmain] qApp found at 0x%p\n", g_qt.qApp);
            }
        }

        // Also try the EXE's IAT
        if (!g_qt.qApp) {
            HMODULE hExe = GetModuleHandleW(L"LuduvoApp.exe");
            if (!hExe) hExe = GetModuleHandleW(L"Luduvo.exe");
            if (hExe) {
                qAppProc = GetProcAddress(hExe, "?qApp@@3PEAVQCoreApplication@@EA");
                if (qAppProc) {
                    g_qt.qApp = *(void**)qAppProc;
                    debug_log(L"[dllmain] qApp found via EXE IAT at 0x%p\n", g_qt.qApp);
                }
            }
        }

        if (g_qt.qApp) {
            debug_log(L"[dllmain] Qt is ready (attempt %d)\n", attempt + 1);
            return true;
        }

        debug_log(L"[dllmain] qApp not available yet, sleeping...\n");
        Sleep(2000);
    }

    debug_log(L"[dllmain] Qt did not become available after %d retries\n", maxRetries);
    return false;
}



static DWORD WINAPI workerThreadProc(LPVOID) {
    debug_log(L"[dllmain] Worker thread started, PID=%lu\n", GetCurrentProcessId());
    InterlockedExchange(&g_running, 1);

    bool qtReady = waitForQt(10);

    if (qtReady) {
        g_qt.init();
        debug_log(L"[dllmain] Qt proxy initialized\n");
    } else {
        debug_log(L"[dllmain] Continuing without Qt (Qt6 not detected)\n");
    }

    applyKeybinds();

    initEcsHook();

    setupKeyboardHook();

    startPipeServer();

    debug_log(L"[dllmain] Payload fully initialized and ready\n");

    MSG msg;
    while (InterlockedCompareExchange(&g_running, 1, 1) == 1) {
        DWORD waitResult = MsgWaitForMultipleObjects(0, NULL, FALSE, 1000, QS_ALLINPUT);
        if (waitResult == WAIT_OBJECT_0) {
            while (PeekMessageW(&msg, NULL, 0, 0, PM_REMOVE)) {
                TranslateMessage(&msg);
                DispatchMessageW(&msg);
            }
        }
    }

    debug_log(L"[dllmain] Worker thread exiting\n");
    return 0;
}



BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    UNREFERENCED_PARAMETER(lpReserved);

    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        debug_log(L"[dllmain] DLL_PROCESS_ATTACH\n");

        g_workerThread = CreateThread(NULL, 0, workerThreadProc, NULL, 0, NULL);
        if (!g_workerThread) {
            debug_log(L"[dllmain] Failed to create worker thread: %lu\n", GetLastError());
        }
        break;

    case DLL_PROCESS_DETACH:
        debug_log(L"[dllmain] DLL_PROCESS_DETACH\n");
        InterlockedExchange(&g_running, 0);

        removeKeyboardHook();
        stopPipeServer();
        shutdownEcsHook();
        g_qt.shutdown();

        if (g_workerThread) {
            PostThreadMessageW(GetThreadId(g_workerThread), WM_QUIT, 0, 0);
            WaitForSingleObject(g_workerThread, 5000);
            CloseHandle(g_workerThread);
            g_workerThread = NULL;
        }

        debug_log(L"[dllmain] Cleanup complete\n");
        break;

    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
        break;
    }
    return TRUE;
}
