#include "shared.h"
#include <cstdio>
#include <cstdarg>

std::wstring to_wstring(std::string_view s)
{
    if (s.empty()) return {};
    int len = MultiByteToWideChar(CP_UTF8, 0, s.data(), (int)s.size(), nullptr, 0);
    std::wstring result(len, L'\0');
    MultiByteToWideChar(CP_UTF8, 0, s.data(), (int)s.size(), result.data(), len);
    return result;
}

std::string to_string(std::wstring_view s)
{
    if (s.empty()) return {};
    int len = WideCharToMultiByte(CP_UTF8, 0, s.data(), (int)s.size(), nullptr, 0, nullptr, nullptr);
    std::string result(len, '\0');
    WideCharToMultiByte(CP_UTF8, 0, s.data(), (int)s.size(), result.data(), len, nullptr, nullptr);
    return result;
}

std::wstring get_executable_dir()
{
    wchar_t path[MAX_PATH];
    DWORD len = GetModuleFileNameW(nullptr, path, MAX_PATH);
    if (len == 0 || len >= MAX_PATH) return {};
    std::wstring full(path, len);
    size_t pos = full.rfind(L'\\');
    if (pos != std::wstring::npos) full.resize(pos + 1);
    return full;
}

void debug_log(const wchar_t* format, ...)
{
    wchar_t buf[1024];
    va_list args;
    va_start(args, format);
    int n = _vsnwprintf_s(buf, _TRUNCATE, format, args);
    va_end(args);
    if (n > 0) OutputDebugStringW(buf);
}
