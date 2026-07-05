/**
 * Function: CFloatingDockContainer_Constructor_or_Destructor
 * Address:  14056f8f0
 * Signature: void __fastcall CFloatingDockContainer_Constructor_or_Destructor(QWidget * param_1)
 * Body size: 170 bytes
 */


void ads::CFloatingDockContainer::CFloatingDockContainer_Constructor_or_Destructor(QWidget *param_1)

{
  int *piVar1;
  QObject QVar2;
  
  param_1->QObject = (QObject)&vftable;
  param_1->QPaintDevice = (QPaintDevice)&vftable;
  param_1[1].QPaintDevice = (QPaintDevice)&vftable;
  QVar2 = param_1[2].QObject;
  if (((*(longlong *)((longlong)QVar2 + 0x18) != 0) &&
      (*(int *)(*(longlong *)((longlong)QVar2 + 0x18) + 4) != 0)) &&
     (*(longlong *)((longlong)QVar2 + 0x20) != 0)) {
    FUN_140278930(*(longlong *)((longlong)QVar2 + 0x20),param_1);
    QVar2 = param_1[2].QObject;
    if (QVar2 == (QObject)0x0) goto LAB_14056f989;
  }
  piVar1 = *(int **)((longlong)QVar2 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)((longlong)QVar2 + 0x18) != 0)) {
      FUN_140b68ba8(*(longlong *)((longlong)QVar2 + 0x18));
    }
  }
  thunk_FUN_140b68ba8(QVar2,0x58);
LAB_14056f989:
                    /* WARNING: Could not recover jumptable at 0x00014056f993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::~QWidget(param_1);
  return;
}

