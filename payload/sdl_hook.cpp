#include "sdl_hook.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <cstdio>
#include <cstring>
#include <cctype>
#include <map>
#include <string>
#include <mutex>

static HHOOK g_kbHook = NULL;
static std::map<DWORD, DWORD> g_remapTable;
static std::mutex g_remapMutex;
static HWND g_targetHwnd = NULL;

static DWORD vkFromName(const char* name) {
    if (!name || !*name) return 0;

    if (strlen(name) == 1) {
        char c = (char)toupper((unsigned char)name[0]);
        if (c >= '0' && c <= '9') return (DWORD)c;
        if (c >= 'A' && c <= 'Z') return (DWORD)c;
    }

    if (_stricmp(name, "F1") == 0)  return VK_F1;
    if (_stricmp(name, "F2") == 0)  return VK_F2;
    if (_stricmp(name, "F3") == 0)  return VK_F3;
    if (_stricmp(name, "F4") == 0)  return VK_F4;
    if (_stricmp(name, "F5") == 0)  return VK_F5;
    if (_stricmp(name, "F6") == 0)  return VK_F6;
    if (_stricmp(name, "F7") == 0)  return VK_F7;
    if (_stricmp(name, "F8") == 0)  return VK_F8;
    if (_stricmp(name, "F9") == 0)  return VK_F9;
    if (_stricmp(name, "F10") == 0) return VK_F10;
    if (_stricmp(name, "F11") == 0) return VK_F11;
    if (_stricmp(name, "F12") == 0) return VK_F12;

    if (_stricmp(name, "Esc") == 0 || _stricmp(name, "Escape") == 0) return VK_ESCAPE;
    if (_stricmp(name, "Tab") == 0)     return VK_TAB;
    if (_stricmp(name, "Enter") == 0)   return VK_RETURN;
    if (_stricmp(name, "Space") == 0)   return VK_SPACE;
    if (_stricmp(name, "Up") == 0)      return VK_UP;
    if (_stricmp(name, "Down") == 0)    return VK_DOWN;
    if (_stricmp(name, "Left") == 0)    return VK_LEFT;
    if (_stricmp(name, "Right") == 0)   return VK_RIGHT;
    if (_stricmp(name, "Del") == 0 || _stricmp(name, "Delete") == 0) return VK_DELETE;

    return 0;
}

static bool isLuduvoViewportFocused(HWND hwnd) {
    if (!hwnd) return false;
    DWORD pid = 0;
    GetWindowThreadProcessId(hwnd, &pid);
    return (pid == GetCurrentProcessId());
}

static void injectReplacementKey(DWORD vk, bool keyDown) {
    INPUT input = {};
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = (WORD)vk;
    input.ki.dwFlags = keyDown ? 0 : KEYEVENTF_KEYUP;
    input.ki.dwExtraInfo = 0x4C554455; // 'LUDU' signature to identify our injected events
    SendInput(1, &input, sizeof(INPUT));
}

LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam) {
    if (nCode < 0) {
        return CallNextHookEx(g_kbHook, nCode, wParam, lParam);
    }

    KBDLLHOOKSTRUCT* kb = (KBDLLHOOKSTRUCT*)lParam;

    if (kb->dwExtraInfo == 0x4C554455) {
        return CallNextHookEx(g_kbHook, nCode, wParam, lParam);
    }

    if (kb->flags & LLKHF_INJECTED) {
        return CallNextHookEx(g_kbHook, nCode, wParam, lParam);
    }

    HWND fg = GetForegroundWindow();
    if (!isLuduvoViewportFocused(fg)) {
        return CallNextHookEx(g_kbHook, nCode, wParam, lParam);
    }

    g_targetHwnd = fg;

    DWORD vk = kb->vkCode;
    bool keyDown = (wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN);
    bool keyUp   = (wParam == WM_KEYUP   || wParam == WM_SYSKEYUP);

    if (!keyDown && !keyUp) {
        return CallNextHookEx(g_kbHook, nCode, wParam, lParam);
    }

    std::lock_guard<std::mutex> lock(g_remapMutex);
    auto it = g_remapTable.find(vk);
    if (it != g_remapTable.end()) {
        injectReplacementKey(it->second, keyDown);
        return 1;
    }

    return CallNextHookEx(g_kbHook, nCode, wParam, lParam);
}

void setupKeyboardHook() {
    if (g_kbHook) return;

    g_kbHook = SetWindowsHookExW(
        WH_KEYBOARD_LL,
        LowLevelKeyboardProc,
        GetModuleHandleW(NULL),
        0
    );

    if (g_kbHook) {
        wprintf(L"[Saiko] Keyboard hook installed successfully\n");
    } else {
        wprintf(L"[Saiko] Failed to install keyboard hook (error %lu)\n", GetLastError());
    }
}

void removeKeyboardHook() {
    if (g_kbHook) {
        UnhookWindowsHookEx(g_kbHook);
        g_kbHook = NULL;
        wprintf(L"[Saiko] Keyboard hook removed\n");
    }
}

void setCameraRemap(const char* key, const char* newKey) {
    DWORD fromVk = vkFromName(key);
    DWORD toVk   = vkFromName(newKey);

    std::lock_guard<std::mutex> lock(g_remapMutex);

    if (toVk == 0) {
        g_remapTable.erase(fromVk);
    } else {
        g_remapTable[fromVk] = toVk;
    }

    wprintf(L"[Saiko] Camera remap: '%S' (0x%02X) -> '%S' (0x%02X)\n",
            key, fromVk, newKey, toVk);
}
