#pragma once
#include <Windows.h>

// Qt function pointer types

typedef void* (*QtTopLevelWidgetsFn)();
typedef void* (*QtFindChildrenFn)(void* widget, const char* className, const char* objectName);
typedef void* (*QtFindChildFn)(void* widget, const char* className, const char* objectName);
typedef void  (*QtSetShortcutFn)(void* action, void* keySeq);
typedef const wchar_t* (*QtActionTextFn)(void* action);
typedef const wchar_t* (*QtActionToolTipFn)(void* action);
typedef void* (*QtKeySequenceCtorFn)(const wchar_t* shortcut);
typedef void  (*QtKeySequenceDtorFn)(void* keySeq);
typedef int   (*QtInvokeMethodFn)(void* obj, const char* member, int type,
                                   void* ret, void* arg1, void* arg2, void* arg3);
typedef const wchar_t* (*QtWindowTitleFn)(void* widget);
typedef void* (*QtSetTextFn)(void* scintilla, const char* text);
typedef void  (*QtTriggerActionFn)(void* action);

// Qt::ConnectionType constants
#define QtAutoConnection              0
#define QtDirectConnection            1
#define QtQueuedConnection            2
#define QtBlockingQueuedConnection    3
#define QtUniqueConnection            0x80

// Proxy struct
// Singleton. Call init() after Qt6 DLLs are loaded; call shutdown() on unload.

struct QtProxy {
    HMODULE hQt6Core     = NULL;
    HMODULE hQt6Widgets  = NULL;
    HMODULE hQt6Gui      = NULL;

    QtTopLevelWidgetsFn    topLevelWidgets  = nullptr;
    QtFindChildrenFn       findChildren     = nullptr;
    QtFindChildFn          findChild        = nullptr;
    QtSetShortcutFn        actionSetShortcut = nullptr;
    QtActionTextFn         actionText       = nullptr;
    QtActionToolTipFn      actionToolTip    = nullptr;
    QtKeySequenceCtorFn    keySequenceCtor  = nullptr;
    QtKeySequenceDtorFn    keySequenceDtor  = nullptr;
    QtInvokeMethodFn       invokeMethod     = nullptr;
    QtWindowTitleFn        windowTitle      = nullptr;
    QtSetTextFn            scintillaSetText = nullptr;
    QtTriggerActionFn      triggerAction    = nullptr;

    void* qApp = nullptr;

    bool init();
    void shutdown();
};

extern QtProxy g_qt;
