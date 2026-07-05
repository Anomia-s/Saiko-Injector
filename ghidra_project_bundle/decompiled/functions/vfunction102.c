/**
 * Function: vfunction102
 * Address:  14058b030
 * Signature: void __thiscall vfunction102(QsciScintilla * this, int param_1, undefined4 param_2)
 * Body size: 2274 bytes
 */


void __thiscall QsciScintilla::vfunction102(QsciScintilla *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_58 [32];
  QColor local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  *(int *)&(this->QsciScintilla_data).offset_0x6c = param_1;
  *(undefined4 *)((longlong)&(this->QsciScintilla_data).offset_0x6c + 4) = param_2;
  if (param_1 == 0) {
    if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_58)) {
      FUN_14074b900(this,0x8c2,param_2,0);
      return;
    }
    goto LAB_14058b905;
  }
  uVar1 = FUN_14074b900(this,0x94a,0,0);
  FUN_14074b730(this,0x937,uVar1 | 8);
  FUN_14074b730(this,0x8b9,0x10);
  FUN_14074b900(this,0x8c0,param_2,0);
  FUN_14074b900(this,0x8c4,param_2,0xfe000000);
  FUN_14074b900(this,0x8c6,param_2,1);
  switch(param_1) {
  case 1:
    FUN_14074b900(this,0x7f8,0x1f,7);
    pcVar3 = QColor_exref;
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1f,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1f,local_38);
    uVar2 = 8;
    break;
  case 2:
    FUN_14074b900(this,0x7f8,0x1f,0x14);
    pcVar3 = QColor_exref;
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1f,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1f,local_38);
    uVar2 = 0x12;
    break;
  case 3:
    FUN_14074b900(this,0x7f8,0x1f,0xe);
    pcVar3 = QColor_exref;
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1f,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1f,local_38);
    uVar2 = 0xc;
    break;
  case 4:
    FUN_14074b900(this,0x7f8,0x1f,0x14);
    pcVar3 = QColor_exref;
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1f,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1f,local_38);
    FUN_14074b900(this,0x7f8,0x1e,0x12);
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1e,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1e,local_38);
    FUN_14074b900(this,0x7f8,0x1d,9);
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1d,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1d,local_38);
    FUN_14074b900(this,0x7f8,0x1c,0x10);
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1c,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1c,local_38);
    FUN_14074b900(this,0x7f8,0x19,0x13);
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x19,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x19,local_38);
    FUN_14074b900(this,0x7f8,0x1a,0x15);
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1a,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1a,local_38);
    uVar2 = 0x11;
    goto LAB_14058b72d;
  case 5:
    FUN_14074b900(this,0x7f8,0x1f,0xe);
    pcVar3 = QColor_exref;
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1f,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1f,local_38);
    FUN_14074b900(this,0x7f8,0x1e,0xc);
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1e,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1e,local_38);
    FUN_14074b900(this,0x7f8,0x1d,9);
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1d,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1d,local_38);
    FUN_14074b900(this,0x7f8,0x1c,10);
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1c,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1c,local_38);
    FUN_14074b900(this,0x7f8,0x19,0xd);
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x19,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x19,local_38);
    FUN_14074b900(this,0x7f8,0x1a,0xf);
    QColor::QColor(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1a,local_38);
    QColor::QColor(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1a,local_38);
    uVar2 = 0xb;
LAB_14058b72d:
    FUN_14074b900(this,0x7f8,0x1b,uVar2);
    (*pcVar3)(local_38,3);
    FUN_14074b9f0(this,0x7f9,0x1b,local_38);
    (*pcVar3)(local_38,2);
    FUN_14074b9f0(this,0x7fa,0x1b,local_38);
  default:
    goto switchD_14058b0f6_default;
  }
  FUN_14074b900(this,0x7f8,0x1e,uVar2);
  (*pcVar3)(local_38,3);
  FUN_14074b9f0(this,0x7f9,0x1e,local_38);
  (*pcVar3)(local_38,2);
  FUN_14074b9f0(this,0x7fa,0x1e,local_38);
  FUN_14074b900(this,0x7f8,0x1d,5);
  FUN_14074b900(this,0x7f8,0x1c,5);
  FUN_14074b900(this,0x7f8,0x19,5);
  FUN_14074b900(this,0x7f8,0x1a,5);
  FUN_14074b900(this,0x7f8,0x1b,5);
switchD_14058b0f6_default:
  FUN_14074b900(this,0x8c2,param_2,0xe);
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
LAB_14058b905:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_58);
}

