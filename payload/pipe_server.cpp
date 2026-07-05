#include "pipe_server.h"
#include "keybind.h"
#include "ecs_hook.h"
#include "troll.h"
#include "../shared/shared.h"
#include <Windows.h>
#include <cstdio>
#include <cstring>
#include <string>

#define PIPE_NAME L"\\\\.\\pipe\\saiko-injector"
#define BUFFER_SIZE 4096

static volatile LONG g_pipeRunning = 0;
static HANDLE g_pipeThread = NULL;

static void respond(HANDLE hPipe, const char* msg) {
    DWORD written = 0;
    WriteFile(hPipe, msg, (DWORD)strlen(msg), &written, NULL);
}

static void dispatchCommand(const char* cmd, HANDLE hPipe) {
    std::string line(cmd);
    while (!line.empty() && (line.back() == '\r' || line.back() == '\n')) {
        line.pop_back();
    }

    if (line.empty()) {
        respond(hPipe, "OK\n");
        return;
    }

    if (line == "PING" || line == "ping") {
        respond(hPipe, "PONG\n");
    }
    else if (line == "STATUS" || line == "status") {
        respond(hPipe, getStatus());
        respond(hPipe, "\n");
    }
    else if (line == "RELOAD_KEYBINDS" || line == "reload_keybinds" || line == "reload") {
        reloadKeybinds();
        respond(hPipe, "OK\n");
    }
    else if (line.rfind("KEYBIND:", 0) == 0 || line.rfind("keybind:", 0) == 0) {
        std::string payload = line.substr(8);
        size_t colon = payload.find(':');
        if (colon != std::string::npos) {
            std::string action = payload.substr(0, colon);
            std::string shortcut = payload.substr(colon + 1);
            applyKeybind(action.c_str(), shortcut.c_str());
            respond(hPipe, "OK\n");
        } else {
            respond(hPipe, "ERR: invalid KEYBIND format, expected KEYBIND:<action>:<shortcut>\n");
        }
    }
    else if (line.rfind("LUA:", 0) == 0 || line.rfind("lua:", 0) == 0) {
        std::string code = line.substr(4);
        executeLua(code.c_str());
        respond(hPipe, "OK\n");
    }
    else if (line == "TOKEN" || line == "token") {
        respond(hPipe, extractToken());
        respond(hPipe, "\n");
    }
    else if (line == "DEMO" || line == "demo") {
        runDemo();
        respond(hPipe, "OK: Demo executed - check the Luduvo window!\n");
    }
    else {
        respond(hPipe, "ERR: unknown command\n");
    }
}

static DWORD WINAPI pipeThreadProc(LPVOID) {
    while (InterlockedCompareExchange(&g_pipeRunning, 1, 1) == 1) {
        HANDLE hPipe = CreateNamedPipeW(
            PIPE_NAME,
            PIPE_ACCESS_DUPLEX,
            PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
            1,
            BUFFER_SIZE,
            BUFFER_SIZE,
            5000,
            NULL
        );

        if (hPipe == INVALID_HANDLE_VALUE) {
            debug_log(L"[pipe] CreateNamedPipe failed: %lu\n", GetLastError());
            Sleep(1000);
            continue;
        }

        BOOL connected = ConnectNamedPipe(hPipe, NULL);
        if (!connected && GetLastError() != ERROR_PIPE_CONNECTED) {
            CloseHandle(hPipe);
            Sleep(100);
            continue;
        }

        char buffer[BUFFER_SIZE];
        DWORD bytesRead = 0;
        BOOL ok = ReadFile(hPipe, buffer, sizeof(buffer) - 1, &bytesRead, NULL);
        if (ok && bytesRead > 0) {
            buffer[bytesRead] = '\0';
            dispatchCommand(buffer, hPipe);
        } else {
            respond(hPipe, "ERR: failed to read command\n");
        }

        FlushFileBuffers(hPipe);
        DisconnectNamedPipe(hPipe);
        CloseHandle(hPipe);
    }
    return 0;
}

void startPipeServer() {
    InterlockedExchange(&g_pipeRunning, 1);
    g_pipeThread = CreateThread(NULL, 0, pipeThreadProc, NULL, 0, NULL);
    if (g_pipeThread) {
        DBG_TRACE(L"[pipe] Server started");
    }
}

void stopPipeServer() {
    InterlockedExchange(&g_pipeRunning, 0);
    if (g_pipeThread) {
        WaitForSingleObject(g_pipeThread, 3000);
        CloseHandle(g_pipeThread);
        g_pipeThread = NULL;
    }
    DBG_TRACE(L"[pipe] Server stopped");
}

void handleCommand(const char* cmd) {
    std::string line(cmd);
    if (line == "PING") {
        debug_log(L"[pipe] PONG\n");
    }
    else if (line == "STATUS") {
        debug_log(L"[pipe] %hs\n", getStatus());
    }
    else if (line == "RELOAD_KEYBINDS") {
        reloadKeybinds();
    }
    else if (line.rfind("KEYBIND:", 0) == 0 || line.rfind("keybind:", 0) == 0) {
        std::string payload = line.substr(8);
        size_t colon = payload.find(':');
        if (colon != std::string::npos) {
            applyKeybind(payload.substr(0, colon).c_str(), payload.substr(colon + 1).c_str());
        }
    }
    else if (line.rfind("LUA:", 0) == 0 || line.rfind("lua:", 0) == 0) {
        executeLua(line.substr(4).c_str());
    }
}
