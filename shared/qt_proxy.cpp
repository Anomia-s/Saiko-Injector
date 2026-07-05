#include "qt_proxy.h"
#include "../shared/shared.h"

QtProxy g_qt;

static FARPROC resolveFromDLL(HMODULE hMod, const char** mangledNames, int count) {
    for (int i = 0; i < count; i++) {
        FARPROC proc = GetProcAddress(hMod, mangledNames[i]);
        if (proc) return proc;
    }
    return nullptr;
}

bool QtProxy::init() {
    hQt6Core = GetModuleHandleW(L"Qt6Core.dll");
    hQt6Widgets = GetModuleHandleW(L"Qt6Widgets.dll");
    hQt6Gui = GetModuleHandleW(L"Qt6Gui.dll");

    if (!hQt6Core || !hQt6Widgets) {
        debug_log(L"[QtProxy] Qt6 DLLs not all loaded (Core=%p Widgets=%p)\n",
                  hQt6Core, hQt6Widgets);
        return false;
    }

    if (!qApp) {
        const char* qAppExports[] = {
            "?qApp@@3PEAVQApplication@@EA",
            "?qApp@@3PEAVQCoreApplication@@EA",
            nullptr
        };
        for (int i = 0; qAppExports[i]; i++) {
            FARPROC p = GetProcAddress(hQt6Core, qAppExports[i]);
            if (p) { qApp = *(void**)p; break; }
        }
        if (!qApp) {
            debug_log(L"[QtProxy] qApp not found\n");
        } else {
            debug_log(L"[QtProxy] qApp = 0x%p\n", qApp);
        }
    }

    topLevelWidgets = (QtTopLevelWidgetsFn)GetProcAddress(hQt6Widgets,
        "?topLevelWidgets@QApplication@@SA?AVQWidgetList@@XZ");
    if (!topLevelWidgets) topLevelWidgets = (QtTopLevelWidgetsFn)GetProcAddress(hQt6Widgets,
        "?topLevelWidgets@QApplication@@SAPEAVQWidgetList@@XZ");

    windowTitle = (QtWindowTitleFn)GetProcAddress(hQt6Widgets,
        "?windowTitle@QWidget@@QEBAAEBVQString@@XZ");

    const char* setShortcutExports[] = {
        "?setShortcut@QAction@@QEAAXAEBVQKeySequence@@@Z",
        "?setShortcut@QAction@@QEAAXVQKeySequence@@@Z",
        nullptr
    };
    actionSetShortcut = (QtSetShortcutFn)resolveFromDLL(hQt6Widgets, setShortcutExports, 2);

    const char* ksCtorExports[] = {
        "??0QKeySequence@@QEAA@AEBVQString@@@Z",
        "??0QKeySequence@@QEAA@AEBVQString@@W4Format@0@@Z",
        nullptr
    };
    keySequenceCtor = (QtKeySequenceCtorFn)resolveFromDLL(hQt6Gui, ksCtorExports, 2);

    keySequenceDtor = (QtKeySequenceDtorFn)GetProcAddress(hQt6Gui,
        "??1QKeySequence@@QEAA@XZ");

    const char* invokeExports[] = {
        "?invokeMethod@QMetaObject@@SA_NPEAVQObject@@PEBDW4ConnectionType@@QEAVQGenericArgument@@3333@Z",
        "?invokeMethod@QMetaObject@@SA_NPEAVQObject@@PEBDW4ConnectionType@@QEAVQGenericReturnArgument@@QEAVQGenericArgument@@333@Z",
        nullptr
    };
    invokeMethod = (QtInvokeMethodFn)resolveFromDLL(hQt6Core, invokeExports, 2);

    debug_log(L"[QtProxy] Init complete. Functions: TLW=%p WS=%p KSC=%p IM=%p\n",
              topLevelWidgets, actionSetShortcut, keySequenceCtor, invokeMethod);

    return true;
}

void QtProxy::shutdown() {
    topLevelWidgets   = nullptr;
    findChildren      = nullptr;
    findChild         = nullptr;
    actionSetShortcut = nullptr;
    actionText        = nullptr;
    actionToolTip     = nullptr;
    keySequenceCtor   = nullptr;
    keySequenceDtor   = nullptr;
    invokeMethod      = nullptr;
    windowTitle       = nullptr;
    scintillaSetText  = nullptr;
    triggerAction     = nullptr;
    qApp              = nullptr;
    hQt6Core          = nullptr;
    hQt6Widgets       = nullptr;
    hQt6Gui           = nullptr;
    debug_log(L"[QtProxy] Shutdown complete\n");
}
