/**
 * Function: enter_exactly_6_digits
 * Address:  1402a9750
 * Signature: undefined enter_exactly_6_digits(void)
 * Body size: 913 bytes
 */


void enter_exactly_6_digits(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  QString local_c8 [24];
  QString local_b0 [16];
  longlong local_a0;
  QString local_98 [16];
  longlong local_88;
  bool local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60 [2];
  longlong local_50;
  ulonglong local_48;
  longlong local_40 [3];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x80) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x30) != 1) {
    QLineEdit::text(*(QLineEdit **)(param_1 + 0x38));
    QString::trimmed_helper(local_b0);
    QString::~QString((QString *)local_40);
    QLineEdit::text(*(QLineEdit **)(param_1 + 0x40));
    if ((local_a0 == 0) || (local_88 == 0)) {
      QString::QString((QString *)local_40,"Account and password are required.");
      QLabel::setText(*(QLabel **)(param_1 + 0x70),(QString *)local_40);
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x58))(*(longlong **)(param_1 + 0x70),1);
      QString::~QString((QString *)local_40);
    }
    else {
      QWidget::setEnabled(*(QWidget **)(param_1 + 0x78),false);
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x58))(*(longlong **)(param_1 + 0x70),0);
      *(undefined1 *)(param_1 + 0x80) = 1;
      QString::toStdString(local_98);
      QString::toStdString(local_b0);
      https_apiluduvocom(*(undefined8 *)(param_1 + 0x28),local_c8);
      QString::toStdString(local_c8);
      FUN_1402aa6f0(param_1,&local_80,local_60);
      if (0xf < local_68) {
        lVar1 = CONCAT71(uStack_7f,local_80);
        uVar2 = local_68 + 1;
        lVar3 = lVar1;
        if (0xfff < uVar2) {
          lVar3 = *(longlong *)(lVar1 + -8);
          if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_1402a9ac8;
          uVar2 = local_68 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar3,uVar2);
      }
      local_70 = 0;
      local_68 = 0xf;
      local_80 = false;
      QString::~QString(local_c8);
      if (0xf < local_48) {
        uVar2 = local_48 + 1;
        lVar3 = local_60[0];
        if (0xfff < uVar2) {
          lVar3 = *(longlong *)(local_60[0] + -8);
          if (0x1f < (ulonglong)((local_60[0] + -8) - lVar3)) goto LAB_1402a9ac8;
          uVar2 = local_48 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar3,uVar2);
      }
      if (0xf < local_28) {
        uVar2 = local_28 + 1;
        lVar3 = local_40[0];
        if (0xfff < uVar2) {
          lVar3 = *(longlong *)(local_40[0] + -8);
          if (0x1f < (ulonglong)((local_40[0] + -8) - lVar3)) {
LAB_1402a9ac8:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar2 = local_28 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar3,uVar2);
      }
    }
    QString::~QString(local_98);
    QString::~QString(local_b0);
    return;
  }
  QLineEdit::text(*(QLineEdit **)(param_1 + 0x48));
  QString::trimmed_helper((QString *)local_60);
  QString::~QString((QString *)local_40);
  if (local_50 == 0) {
    QString::QString((QString *)local_40,"Code is required.");
    QLabel::setText(*(QLabel **)(param_1 + 0x70),(QString *)local_40);
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x58))(*(longlong **)(param_1 + 0x70),1);
  }
  else {
    local_80 = false;
    QString::toUInt((QString *)local_60,&local_80,10);
    if ((local_50 == 6) && (local_80 != false)) {
      QWidget::setEnabled(*(QWidget **)(param_1 + 0x78),false);
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x58))(*(longlong **)(param_1 + 0x70),0);
      *(undefined1 *)(param_1 + 0x80) = 1;
      QString::toStdString((QString *)local_60);
      FUN_1402a9e80(param_1,param_1 + 0xb8,param_1 + 0x98);
      if (0xf < local_28) {
        uVar2 = local_28 + 1;
        lVar3 = local_40[0];
        if (0xfff < uVar2) {
          lVar3 = *(longlong *)(local_40[0] + -8);
          if (0x1f < (ulonglong)((local_40[0] + -8) - lVar3)) goto LAB_1402a9ac8;
          uVar2 = local_28 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar3,uVar2);
      }
      goto LAB_1402a9ab2;
    }
    QString::QString((QString *)local_40,"Enter exactly 6 digits.");
    QLabel::setText(*(QLabel **)(param_1 + 0x70),(QString *)local_40);
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x58))(*(longlong **)(param_1 + 0x70),1);
  }
  QString::~QString((QString *)local_40);
LAB_1402a9ab2:
  QString::~QString((QString *)local_60);
  return;
}

