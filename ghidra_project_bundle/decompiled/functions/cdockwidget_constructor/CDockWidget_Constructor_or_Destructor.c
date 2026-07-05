/**
 * Function: CDockWidget_Constructor_or_Destructor
 * Address:  14028ddf0
 * Signature: void __fastcall CDockWidget_Constructor_or_Destructor(QFrame * param_1)
 * Body size: 192 bytes
 */


void ads::CDockWidget::CDockWidget_Constructor_or_Destructor(QFrame *param_1)

{
  QPaintDevice QVar1;
  int *piVar2;
  
  (param_1->QWidget).QObject = (QObject)&vftable;
  (param_1->QWidget).QPaintDevice = (QPaintDevice)&vftable;
  QVar1 = param_1[1].QWidget.QPaintDevice;
  if (QVar1 != (QPaintDevice)0x0) {
    piVar2 = *(int **)((longlong)QVar1 + 0xb0);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(longlong *)((longlong)QVar1 + 0xb0) != 0)) {
        FUN_140b68ba8();
      }
    }
    piVar2 = *(int **)((longlong)QVar1 + 0x88);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        free(*(void **)((longlong)QVar1 + 0x88));
      }
    }
    piVar2 = *(int **)((longlong)QVar1 + 0x38);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(longlong *)((longlong)QVar1 + 0x38) != 0)) {
        FUN_140b68ba8();
      }
    }
    piVar2 = *(int **)((longlong)QVar1 + 0x28);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(longlong *)((longlong)QVar1 + 0x28) != 0)) {
        FUN_140b68ba8();
      }
    }
    thunk_FUN_140b68ba8(QVar1,200);
  }
                    /* WARNING: Could not recover jumptable at 0x00014028dea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QFrame::~QFrame(param_1);
  return;
}

