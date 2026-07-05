#include "keybind.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#include <mutex>

#include "../shared/shared.h"

struct KeyCombo {
    DWORD vkCode;
    bool  ctrl;
    bool  shift;
    bool  alt;

    KeyCombo() : vkCode(0), ctrl(false), shift(false), alt(false) {}
    KeyCombo(DWORD vk, bool c, bool s, bool a)
        : vkCode(vk), ctrl(c), shift(s), alt(a) {}
};

static std::map<std::string, KeyCombo> g_keybinds;
static std::mutex                        g_keybindsMutex;

static DWORD vkFromName(const char* name) {
    if (!name || !*name) return 0;

    if (strlen(name) == 1) {
        unsigned char uc = (unsigned char)name[0];
        if (uc >= '0' && uc <= '9') return (DWORD)uc;
        if (uc >= 'A' && uc <= 'Z') return (DWORD)uc;
        if (uc >= 'a' && uc <= 'z') return (DWORD)(uc - 32);

        switch (uc) {
            case '+': case '=': return VK_OEM_PLUS;
            case '-':           return VK_OEM_MINUS;
            case '[': case '{': return VK_OEM_4;
            case ']': case '}': return VK_OEM_6;
            case '\\': case '|': return VK_OEM_5;
            case ';': case ':': return VK_OEM_1;
            case '\'': case '"': return VK_OEM_7;
            case '.': case '>': return VK_OEM_PERIOD;
            case '/': case '?': return VK_OEM_2;
            case '`': case '~': return VK_OEM_3;
            case ',': case '<': return VK_OEM_COMMA;
            default:            return 0;
        }
    }

    if (_stricmp(name, "F1")  == 0) return VK_F1;
    if (_stricmp(name, "F2")  == 0) return VK_F2;
    if (_stricmp(name, "F3")  == 0) return VK_F3;
    if (_stricmp(name, "F4")  == 0) return VK_F4;
    if (_stricmp(name, "F5")  == 0) return VK_F5;
    if (_stricmp(name, "F6")  == 0) return VK_F6;
    if (_stricmp(name, "F7")  == 0) return VK_F7;
    if (_stricmp(name, "F8")  == 0) return VK_F8;
    if (_stricmp(name, "F9")  == 0) return VK_F9;
    if (_stricmp(name, "F10") == 0) return VK_F10;
    if (_stricmp(name, "F11") == 0) return VK_F11;
    if (_stricmp(name, "F12") == 0) return VK_F12;

    if (_stricmp(name, "Esc")         == 0) return VK_ESCAPE;
    if (_stricmp(name, "Escape")      == 0) return VK_ESCAPE;
    if (_stricmp(name, "Tab")         == 0) return VK_TAB;
    if (_stricmp(name, "Enter")       == 0) return VK_RETURN;
    if (_stricmp(name, "Return")      == 0) return VK_RETURN;
    if (_stricmp(name, "Space")       == 0) return VK_SPACE;
    if (_stricmp(name, "Up")          == 0) return VK_UP;
    if (_stricmp(name, "Down")        == 0) return VK_DOWN;
    if (_stricmp(name, "Left")        == 0) return VK_LEFT;
    if (_stricmp(name, "Right")       == 0) return VK_RIGHT;
    if (_stricmp(name, "Del")         == 0) return VK_DELETE;
    if (_stricmp(name, "Delete")      == 0) return VK_DELETE;
    if (_stricmp(name, "Ins")         == 0) return VK_INSERT;
    if (_stricmp(name, "Insert")      == 0) return VK_INSERT;
    if (_stricmp(name, "Home")        == 0) return VK_HOME;
    if (_stricmp(name, "End")         == 0) return VK_END;
    if (_stricmp(name, "PgUp")        == 0) return VK_PRIOR;
    if (_stricmp(name, "PageUp")      == 0) return VK_PRIOR;
    if (_stricmp(name, "PgDn")        == 0) return VK_NEXT;
    if (_stricmp(name, "PageDown")    == 0) return VK_NEXT;
    if (_stricmp(name, "Backspace")   == 0) return VK_BACK;
    if (_stricmp(name, "Bksp")        == 0) return VK_BACK;
    if (_stricmp(name, "PrtSc")       == 0) return VK_SNAPSHOT;
    if (_stricmp(name, "PrintScreen") == 0) return VK_SNAPSHOT;
    if (_stricmp(name, "NumLock")     == 0) return VK_NUMLOCK;
    if (_stricmp(name, "ScrollLock")  == 0) return VK_SCROLL;
    if (_stricmp(name, "CapsLock")    == 0) return VK_CAPITAL;
    if (_stricmp(name, "Pause")       == 0) return VK_PAUSE;

    return 0;
}

static KeyCombo parseShortcut(const std::string& shortcut) {
    KeyCombo result;
    size_t pos = 0;

    while (pos < shortcut.size()) {
        if (_strnicmp(shortcut.c_str() + pos, "Ctrl+", 5) == 0) {
            result.ctrl = true;
            pos += 5;
        } else if (_strnicmp(shortcut.c_str() + pos, "Shift+", 6) == 0) {
            result.shift = true;
            pos += 6;
        } else if (_strnicmp(shortcut.c_str() + pos, "Alt+", 4) == 0) {
            result.alt = true;
            pos += 4;
        } else {
            break;
        }
    }

    std::string keyName = shortcut.substr(pos);
    result.vkCode = vkFromName(keyName.c_str());

    return result;
}

class JsonParser {
public:
    JsonParser(const char* data, size_t len)
        : cur(data), end(data + len) {}

    bool parseRoot(std::vector<std::pair<std::string, std::string>>& out) {
        out.clear();
        skipWs();
        if (!expect('[')) return false;

        while (cur < end) {
            skipWs();
            if (cur >= end) break;
            if (*cur == ']') { cur++; break; }
            if (*cur == ',') { cur++; continue; }

            std::string action;
            std::string shortcut;
            if (!parseOneObject(action, shortcut)) return false;
            if (!action.empty()) {
                out.push_back({action, shortcut});
            }

            skipWs();
            if (cur < end && *cur == ',') cur++;
        }

        return true;
    }

private:
    const char* cur;
    const char* end;

    void skipWs() {
        while (cur < end) {
            unsigned char c = (unsigned char)*cur;
            if (c == ' ' || c == '\t' || c == '\n' || c == '\r') {
                cur++;
            } else {
                break;
            }
        }
    }

    bool expect(char c) {
        if (cur < end && *cur == c) { cur++; return true; }
        return false;
    }

    std::string readString() {
        std::string result;
        if (cur >= end || *cur != '\"') return result;
        cur++;

        while (cur < end) {
            if (*cur == '\"') {
                cur++;
                return result;
            }
            if (*cur == '\\' && cur + 1 < end) {
                cur++;
                switch (*cur) {
                    case 'n':  result += '\n'; break;
                    case 'r':  result += '\r'; break;
                    case 't':  result += '\t'; break;
                    case '\\': result += '\\'; break;
                    case '\"': result += '\"'; break;
                    case '/':  result += '/';  break;
                    default:   result += *cur; break;
                }
                cur++;
            } else {
                result += *cur;
                cur++;
            }
        }
        return result;
    }

    bool parseOneObject(std::string& action, std::string& shortcut) {
        action.clear();
        shortcut.clear();

        skipWs();
        if (!expect('{')) return false;

        while (cur < end) {
            skipWs();
            if (cur >= end) return false;
            if (*cur == '}') { cur++; return true; }
            if (*cur == ',') { cur++; continue; }

            std::string key = readString();
            if (key.empty()) return false;

            skipWs();
            if (!expect(':')) return false;

            skipWs();
            if (cur < end && *cur == '\"') {
                std::string val = readString();
                if (key == "action")   action   = val;
                if (key == "shortcut") shortcut = val;
            } else {
                while (cur < end && *cur != ',' && *cur != '}' && *cur != ']') cur++;
            }
        }
        return true;
    }
};

static std::wstring findKeybindsFile() {
    DWORD attr = GetFileAttributesW(L"keybinds.json");
    if (attr != INVALID_FILE_ATTRIBUTES && !(attr & FILE_ATTRIBUTE_DIRECTORY)) {
        return L"keybinds.json";
    }

    std::wstring exeDir = get_executable_dir();
    if (!exeDir.empty()) {
        std::wstring path = exeDir + L"keybinds.json";
        attr = GetFileAttributesW(path.c_str());
        if (attr != INVALID_FILE_ATTRIBUTES && !(attr & FILE_ATTRIBUTE_DIRECTORY)) {
            return path;
        }

        path = exeDir + L"..\\keybinds.json";
        wchar_t full[MAX_PATH];
        if (GetFullPathNameW(path.c_str(), MAX_PATH, full, nullptr)) {
            attr = GetFileAttributesW(full);
            if (attr != INVALID_FILE_ATTRIBUTES && !(attr & FILE_ATTRIBUTE_DIRECTORY)) {
                return full;
            }
        }
    }

    return L"";
}

static bool loadKeybindsFile(const wchar_t* path) {
    HANDLE hFile = CreateFileW(
        path,
        GENERIC_READ,
        FILE_SHARE_READ,
        nullptr,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        nullptr
    );

    if (hFile == INVALID_HANDLE_VALUE) {
        debug_log(L"[keybind] Failed to open keybinds file: %ls (error %lu)\n",
                  path, GetLastError());
        return false;
    }

    DWORD size = GetFileSize(hFile, nullptr);
    if (size == INVALID_FILE_SIZE || size == 0) {
        CloseHandle(hFile);
        debug_log(L"[keybind] Keybinds file is empty or invalid: %ls\n", path);
        return false;
    }

    std::vector<char> buffer(size + 1);
    DWORD bytesRead = 0;
    BOOL ok = ReadFile(hFile, buffer.data(), size, &bytesRead, nullptr);
    CloseHandle(hFile);

    if (!ok || bytesRead == 0) {
        debug_log(L"[keybind] Failed to read keybinds file: %ls\n", path);
        return false;
    }

    buffer[bytesRead] = '\0';

    JsonParser parser(buffer.data(), bytesRead);
    std::vector<std::pair<std::string, std::string>> entries;

    if (!parser.parseRoot(entries)) {
        debug_log(L"[keybind] Failed to parse keybinds JSON from: %ls\n", path);
        return false;
    }

    {
        std::lock_guard<std::mutex> lock(g_keybindsMutex);
        g_keybinds.clear();
        for (const auto& entry : entries) {
            KeyCombo combo = parseShortcut(entry.second);
            g_keybinds[entry.first] = combo;
            debug_log(L"[keybind] Loaded: '%S' -> vk=0x%02X ctrl=%d shift=%d alt=%d\n",
                      entry.first.c_str(), combo.vkCode, combo.ctrl, combo.shift, combo.alt);
        }
    }

    debug_log(L"[keybind] Loaded %zu keybinds from: %ls\n", entries.size(), path);
    return true;
}

void applyKeybinds() {
    std::wstring path = findKeybindsFile();
    if (path.empty()) {
        debug_log(L"[keybind] No keybinds file found\n");
        return;
    }
    loadKeybindsFile(path.c_str());
}

void applyKeybind(const char* actionName, const char* newShortcut) {
    if (!actionName || !newShortcut) return;

    KeyCombo combo = parseShortcut(newShortcut);

    {
        std::lock_guard<std::mutex> lock(g_keybindsMutex);
        g_keybinds[actionName] = combo;
    }

    debug_log(L"[keybind] Applied: '%S' -> vk=0x%02X ctrl=%d shift=%d alt=%d\n",
              actionName, combo.vkCode, combo.ctrl, combo.shift, combo.alt);
}

void reloadKeybinds() {
    debug_log(L"[keybind] Reloading keybinds...\n");
    applyKeybinds();
}
