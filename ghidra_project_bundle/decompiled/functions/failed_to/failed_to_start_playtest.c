/**
 * Function: failed_to_start_playtest
 * Address:  1400989c0
 * Signature: undefined failed_to_start_playtest(void)
 * Body size: 294 bytes
 */


void failed_to_start_playtest(int param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  QString local_40 [24];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_1 == 1) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    if (*(char *)(param_2 + 0x18) != '\0') {
      FUN_14029a0b0(*(undefined8 *)(lVar1 + 0x43cd0),lVar1 + 0x140);
      QWidget::setFocus(*(QWidget **)(lVar1 + 0x43cd0),7);
      FUN_14008ccf0(lVar1,0);
      cancel_playtest_start_f5(lVar1);
      return;
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x43ce8);
    QString::QString(local_40,"Failed to start playtest.");
    FUN_140282ac0(uVar2,local_40);
    QString::~QString(local_40);
    QAction::setEnabled(*(QAction **)(lVar1 + 0x43d10),true);
    QAction::setEnabled(*(QAction **)(lVar1 + 0x43d18),true);
    QAction::setEnabled(*(QAction **)(lVar1 + 0x43d98),true);
    QWidget::setEnabled(*(QWidget **)(lVar1 + 0x43d20),true);
    QWidget::setEnabled(*(QWidget **)(lVar1 + 0x43d28),true);
    QWidget::setEnabled(*(QWidget **)(lVar1 + 0x43cd8),true);
    QWidget::setEnabled(*(QWidget **)(lVar1 + 0x43ce0),true);
    cancel_playtest_start_f5(lVar1);
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    thunk_FUN_140b68ba8(param_2,0x20);
    return;
  }
  return;
}

