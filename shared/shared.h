#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <tlhelp32.h>
#include <psapi.h>
#include <string>
#include <string_view>
#include <cstdio>
#include <version.h>

#if defined(_DEBUG) || !defined(NDEBUG)
    #define DBG_PRINT(fmt, ...) debug_log(L"[%hs:%d] " L##fmt "\n", __FUNCTION__, __LINE__, __VA_ARGS__)
    #define DBG_TRACE(msg)      debug_log(L"[%hs:%d] %s\n", __FUNCTION__, __LINE__, msg)
#else
    #define DBG_PRINT(fmt, ...) ((void)0)
    #define DBG_TRACE(msg)      ((void)0)
#endif

std::wstring to_wstring(std::string_view s);
std::string  to_string(std::wstring_view s);
std::wstring get_executable_dir();
void         debug_log(const wchar_t* format, ...);
