#include "../shared/shared.h"
#include "find_process.h"

#include <shellapi.h>
#include <vector>
#include <cstdlib>

static std::wstring ResolveDllPath(const std::wstring& arg);
static void ListProcesses();
static bool InjectDll(DWORD pid, const std::wstring& dllPath);

int wmain(int argc, wchar_t* argv[])
{
    std::wstring dllPath;

    for (int i = 1; i < argc; ++i)
    {
        std::wstring arg(argv[i]);
        if (arg == L"-l" || arg == L"--list")
        {
            ListProcesses();
            return 0;
        }
        else if (arg == L"-h" || arg == L"--help")
        {
            wprintf(L"Usage: injector.exe [options] [dll_path]\n"
                    L"  -l, --list    List running processes\n"
                    L"  -h, --help    Show this help\n"
                    L"  dll_path       Path to DLL to inject (default: payload.dll)\n");
            return 0;
        }
        else
        {
            dllPath = arg;
        }
    }

    std::wstring resolvedDllPath = ResolveDllPath(dllPath);
    wprintf(L"Using DLL: %s\n", resolvedDllPath.c_str());

    if (GetFileAttributesW(resolvedDllPath.c_str()) == INVALID_FILE_ATTRIBUTES)
    {
        wprintf(L"ERROR: DLL not found: %s\n", resolvedDllPath.c_str());
        return 1;
    }

    DWORD pid = findProcess(L"LuduvoApp.exe");
    if (pid == 0)
    {
        wprintf(L"ERROR: LuduvoApp.exe not found. Is it running?\n");
        return 1;
    }

    wprintf(L"Found LuduvoApp.exe at PID %u\n", pid);

    if (!InjectDll(pid, resolvedDllPath))
    {
        return 1;
    }

    wprintf(L"Injection successful.\n");
    return 0;
}

static std::wstring ResolveDllPath(const std::wstring& dllName)
{
    if (dllName.empty())
    {
        return get_executable_dir() + L"\\payload.dll";
    }

    if (dllName.find(L'\\') != std::wstring::npos ||
        dllName.find(L':') != std::wstring::npos)
    {
        return dllName;
    }

    std::wstring exeDir = get_executable_dir();
    if (!exeDir.empty())
    {
        std::wstring candidate = exeDir + L"\\" + dllName;
        if (GetFileAttributesW(candidate.c_str()) != INVALID_FILE_ATTRIBUTES)
            return candidate;
    }

    WCHAR curDir[MAX_PATH];
    DWORD len = GetCurrentDirectoryW(MAX_PATH, curDir);
    if (len > 0 && len < MAX_PATH)
    {
        std::wstring candidate = std::wstring(curDir) + L"\\" + dllName;
        if (GetFileAttributesW(candidate.c_str()) != INVALID_FILE_ATTRIBUTES)
            return candidate;
    }

    return exeDir.empty() ? dllName : (exeDir + L"\\" + dllName);
}

static void ListProcesses()
{
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot == INVALID_HANDLE_VALUE)
    {
        wprintf(L"Failed to create process snapshot.\n");
        return;
    }

    PROCESSENTRY32W pe;
    pe.dwSize = sizeof(PROCESSENTRY32W);

    wprintf(L"=== Running Processes ===\n");

    if (Process32FirstW(snapshot, &pe))
    {
        do
        {
            wprintf(L"  PID: %6u  %s\n", pe.th32ProcessID, pe.szExeFile);
        } while (Process32NextW(snapshot, &pe));
    }

    wprintf(L"=== End of Process List ===\n");
    CloseHandle(snapshot);
}

static bool InjectDll(DWORD pid, const std::wstring& dllPath)
{
    size_t pathBytes = (dllPath.length() + 1) * sizeof(wchar_t);

    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    if (!hProcess)
    {
        wprintf(L"ERROR: OpenProcess failed for PID %u (GLE=%u)\n", pid, GetLastError());
        return false;
    }

    LPVOID pRemoteMem = VirtualAllocEx(hProcess, nullptr, pathBytes,
        MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (!pRemoteMem)
    {
        wprintf(L"ERROR: VirtualAllocEx failed (GLE=%u)\n", GetLastError());
        CloseHandle(hProcess);
        return false;
    }

    if (!WriteProcessMemory(hProcess, pRemoteMem, dllPath.c_str(), pathBytes, nullptr))
    {
        wprintf(L"ERROR: WriteProcessMemory failed (GLE=%u)\n", GetLastError());
        VirtualFreeEx(hProcess, pRemoteMem, 0, MEM_RELEASE);
        CloseHandle(hProcess);
        return false;
    }

    LPTHREAD_START_ROUTINE pLoadLibraryW = reinterpret_cast<LPTHREAD_START_ROUTINE>(
        GetProcAddress(GetModuleHandleW(L"kernel32.dll"), "LoadLibraryW"));
    if (!pLoadLibraryW)
    {
        wprintf(L"ERROR: Could not find LoadLibraryW (GLE=%u)\n", GetLastError());
        VirtualFreeEx(hProcess, pRemoteMem, 0, MEM_RELEASE);
        CloseHandle(hProcess);
        return false;
    }

    wprintf(L"Creating remote thread...\n");
    HANDLE hThread = CreateRemoteThread(hProcess, nullptr, 0,
        pLoadLibraryW, pRemoteMem, 0, nullptr);
    if (!hThread)
    {
        wprintf(L"ERROR: CreateRemoteThread failed (GLE=%u)\n", GetLastError());
        VirtualFreeEx(hProcess, pRemoteMem, 0, MEM_RELEASE);
        CloseHandle(hProcess);
        return false;
    }

    wprintf(L"Waiting for DLL to load (30s timeout)...\n");
    DWORD waitResult = WaitForSingleObject(hThread, 30000);
    if (waitResult == WAIT_TIMEOUT)
    {
        wprintf(L"ERROR: DLL load timed out after 30 seconds\n");
        VirtualFreeEx(hProcess, pRemoteMem, 0, MEM_RELEASE);
        CloseHandle(hThread);
        CloseHandle(hProcess);
        return false;
    }
    if (waitResult == WAIT_FAILED)
    {
        wprintf(L"ERROR: WaitForSingleObject failed (GLE=%u)\n", GetLastError());
        VirtualFreeEx(hProcess, pRemoteMem, 0, MEM_RELEASE);
        CloseHandle(hThread);
        CloseHandle(hProcess);
        return false;
    }

    DWORD exitCode = 0;
    GetExitCodeThread(hThread, &exitCode);

    if (exitCode == 0)
    {
        wprintf(L"ERROR: LoadLibraryW returned NULL. DLL may be missing dependencies or DllMain returned FALSE.\n");
        VirtualFreeEx(hProcess, pRemoteMem, 0, MEM_RELEASE);
        CloseHandle(hThread);
        CloseHandle(hProcess);
        return false;
    }

    wprintf(L"SUCCESS: Injected into PID %u, DLL loaded at 0x%p\n",
            pid, reinterpret_cast<void*>(static_cast<uintptr_t>(exitCode)));

    VirtualFreeEx(hProcess, pRemoteMem, 0, MEM_RELEASE);
    CloseHandle(hThread);
    CloseHandle(hProcess);
    return true;
}
