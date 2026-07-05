/**
 * Function: CDockAreaTitleBar_Constructor_or_Destructor
 * Address:  140595970
 * Signature: void __fastcall CDockAreaTitleBar_Constructor_or_Destructor(QFrame * param_1)
 * Body size: 211 bytes
 */


void ads::CDockAreaTitleBar::CDockAreaTitleBar_Constructor_or_Destructor(QFrame *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  QPaintDevice QVar3;
  
  (param_1->QWidget).QObject = (QObject)&vftable;
  (param_1->QWidget).QPaintDevice = (QPaintDevice)&vftable;
  QVar3 = param_1[1].QWidget.QPaintDevice;
  lVar1 = *(longlong *)((longlong)QVar3 + 0x38);
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
      (plVar2 = *(longlong **)((longlong)QVar3 + 0x40), plVar2 != (longlong *)0x0)) &&
     (*(int *)(lVar1 + 4) != 0)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    QVar3 = param_1[1].QWidget.QPaintDevice;
  }
  lVar1 = *(longlong *)((longlong)QVar3 + 8);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     ((plVar2 = *(longlong **)((longlong)QVar3 + 0x10), plVar2 != (longlong *)0x0 &&
      (*(int *)(lVar1 + 4) != 0)))) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    QVar3 = param_1[1].QWidget.QPaintDevice;
  }
  lVar1 = *(longlong *)((longlong)QVar3 + 0x28);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     ((plVar2 = *(longlong **)((longlong)QVar3 + 0x30), plVar2 != (longlong *)0x0 &&
      (*(int *)(lVar1 + 4) != 0)))) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    QVar3 = param_1[1].QWidget.QPaintDevice;
    if (QVar3 == (QPaintDevice)0x0) goto LAB_140595a33;
  }
  FUN_140595a50(QVar3);
  thunk_FUN_140b68ba8(QVar3,0xb8);
LAB_140595a33:
                    /* WARNING: Could not recover jumptable at 0x000140595a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QFrame::~QFrame(param_1);
  return;
}

