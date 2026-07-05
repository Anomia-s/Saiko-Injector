/**
 * Function: LoginDialog_Constructor_or_Destructor
 * Address:  14008fe60
 * Signature: void __fastcall LoginDialog_Constructor_or_Destructor(QDialog * param_1)
 * Body size: 295 bytes
 */


void ldv::editor::LoginDialog::LoginDialog_Constructor_or_Destructor(QDialog *param_1)

{
  QPaintDevice QVar1;
  QPaintDevice QVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  QPaintDevice QVar6;
  longlong lVar7;
  
  (param_1->QWidget).QObject = (QObject)&vftable;
  (param_1->QWidget).QPaintDevice = (QPaintDevice)&vftable;
  QVar1 = param_1[8].QWidget.QPaintDevice;
  if (0xf < (ulonglong)QVar1) {
    QVar2 = param_1[7].QWidget.QPaintDevice;
    uVar4 = (longlong)QVar1 + 1;
    QVar6 = QVar2;
    if (0xfff < uVar4) {
      QVar6 = *(QPaintDevice *)((longlong)QVar2 + -8);
      if (0x1f < (ulonglong)(((longlong)QVar2 + -8) - (longlong)QVar6)) goto LAB_14008ff6e;
      uVar4 = (longlong)QVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(QVar6,uVar4);
  }
  *(undefined8 *)&param_1[8].QWidget.field_0x8 = 0;
  param_1[8].QWidget.QPaintDevice = (QPaintDevice)0xf;
  *(undefined1 *)&param_1[7].QWidget.QPaintDevice = 0;
  uVar4 = *(ulonglong *)&param_1[7].QWidget.field_0x8;
  if (0xf < uVar4) {
    lVar3 = *(longlong *)&param_1[6].QWidget.field_0x8;
    uVar5 = uVar4 + 1;
    lVar7 = lVar3;
    if (0xfff < uVar5) {
      lVar7 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar7)) {
LAB_14008ff6e:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar4 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar5);
  }
  param_1[7].QWidget.QObject = (QObject)0x0;
  *(undefined8 *)&param_1[7].QWidget.field_0x8 = 0xf;
  param_1[6].QWidget.field_0x8 = 0;
  QVar1 = param_1[5].QWidget.QPaintDevice;
  if (QVar1 != (QPaintDevice)0x0) {
    LOCK();
    *(int *)QVar1 = *(int *)QVar1 + -1;
    UNLOCK();
    if ((*(int *)QVar1 == 0) && (param_1[5].QWidget.QPaintDevice != (QPaintDevice)0x0)) {
      FUN_140b68ba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014008ff67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QDialog::~QDialog(param_1);
  return;
}

