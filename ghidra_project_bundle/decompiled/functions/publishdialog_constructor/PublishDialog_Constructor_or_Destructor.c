/**
 * Function: PublishDialog_Constructor_or_Destructor
 * Address:  140090570
 * Signature: void __fastcall PublishDialog_Constructor_or_Destructor(QDialog * param_1)
 * Body size: 277 bytes
 */


void ldv::editor::PublishDialog::PublishDialog_Constructor_or_Destructor(QDialog *param_1)

{
  QObject QVar1;
  QObject QVar2;
  QPaintDevice QVar3;
  QPaintDevice QVar4;
  ulonglong uVar5;
  QObject QVar6;
  QPaintDevice QVar7;
  
  (param_1->QWidget).QObject = (QObject)&vftable;
  (param_1->QWidget).QPaintDevice = (QPaintDevice)&vftable;
  QVar1 = param_1[9].QWidget.QObject;
  if (QVar1 != (QObject)0x0) {
    LOCK();
    *(int *)QVar1 = *(int *)QVar1 + -1;
    UNLOCK();
    if ((*(int *)QVar1 == 0) && (param_1[9].QWidget.QObject != (QObject)0x0)) {
      FUN_140b68ba8();
    }
  }
  FUN_140094820(param_1 + 6);
  QVar1 = param_1[4].QWidget.QObject;
  if (0xf < (ulonglong)QVar1) {
    QVar2 = param_1[3].QWidget.QObject;
    uVar5 = (longlong)QVar1 + 1;
    QVar6 = QVar2;
    if (0xfff < uVar5) {
      QVar6 = *(QObject *)((longlong)QVar2 + -8);
      if (0x1f < (ulonglong)(((longlong)QVar2 + -8) - (longlong)QVar6)) goto LAB_14009066c;
      uVar5 = (longlong)QVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(QVar6,uVar5);
  }
  param_1[3].QWidget.QPaintDevice = (QPaintDevice)0x0;
  param_1[4].QWidget.QObject = (QObject)0xf;
  *(undefined1 *)&param_1[3].QWidget.QObject = 0;
  QVar3 = param_1[2].QWidget.QPaintDevice;
  if (0xf < (ulonglong)QVar3) {
    QVar4 = param_1[1].QWidget.QPaintDevice;
    uVar5 = (longlong)QVar3 + 1;
    QVar7 = QVar4;
    if (0xfff < uVar5) {
      QVar7 = *(QPaintDevice *)((longlong)QVar4 + -8);
      if (0x1f < (ulonglong)(((longlong)QVar4 + -8) - (longlong)QVar7)) {
LAB_14009066c:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = (longlong)QVar3 + 0x28;
    }
    thunk_FUN_140b68ba8(QVar7,uVar5);
  }
  *(undefined8 *)&param_1[2].QWidget.field_0x8 = 0;
  param_1[2].QWidget.QPaintDevice = (QPaintDevice)0xf;
  *(undefined1 *)&param_1[1].QWidget.QPaintDevice = 0;
                    /* WARNING: Could not recover jumptable at 0x000140090665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QDialog::~QDialog(param_1);
  return;
}

