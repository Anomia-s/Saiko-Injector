/**
 * Function: QAccessibleTextCursorEvent_Constructor_or_Destructor
 * Address:  1407d07e0
 * Signature: void __fastcall QAccessibleTextCursorEvent_Constructor_or_Destructor(QWidget * param_1)
 * Body size: 210 bytes
 */


void QAccessibleTextCursorEvent::QAccessibleTextCursorEvent_Constructor_or_Destructor
               (QWidget *param_1)

{
  QAccessibleWidget *this;
  undefined4 uVar1;
  QWidget *pQVar2;
  longlong lVar3;
  QAccessibleTextCursorEvent local_58;
  undefined4 local_50;
  QWidget *local_48;
  undefined4 local_40;
  int local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (0 < DAT_141700cd8) {
    lVar3 = 0;
    do {
      this = *(QAccessibleWidget **)(DAT_141700cd0 + lVar3 * 8);
      pQVar2 = QAccessibleWidget::widget(this);
      if (pQVar2 == param_1) {
        uVar1 = FUN_14074b900(param_1,0x7d8,0,0);
        local_38 = FUN_14074b900(param_1,0xa49,0,uVar1);
        if (*(int *)&this[2].QAccessibleObject.QAccessibleInterface == local_38) {
          return;
        }
        *(int *)&this[2].QAccessibleObject.QAccessibleInterface = local_38;
        local_40 = 0xffffffff;
        local_58.vftablePtr = &vftable;
        local_50 = 0x11b;
        local_48 = param_1;
        QAccessible::updateAccessibility((QAccessibleEvent *)&local_58);
        QAccessibleTextCursorEvent::~QAccessibleTextCursorEvent(&local_58);
        return;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < DAT_141700cd8);
  }
  return;
}

