/**
 * Function: CDockAreaWidget_Constructor_or_Destructor
 * Address:  140573820
 * Signature: void __fastcall CDockAreaWidget_Constructor_or_Destructor(QFrame * param_1)
 * Body size: 186 bytes
 */


void ads::CDockAreaWidget::CDockAreaWidget_Constructor_or_Destructor(QFrame *param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  QPaintDevice QVar5;
  longlong lVar6;
  
  (param_1->QWidget).QObject = (QObject)&vftable;
  (param_1->QWidget).QPaintDevice = (QPaintDevice)&vftable;
  QVar5 = param_1[1].QWidget.QPaintDevice;
  lVar1 = *(longlong *)((longlong)QVar5 + 0x10);
  if (lVar1 != 0) {
    piVar2 = *(int **)(lVar1 + 8);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        lVar3 = *(longlong *)(lVar1 + 0x18);
        if (lVar3 != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x10);
          lVar6 = 0;
          do {
            piVar2 = *(int **)(lVar4 + lVar6);
            if (piVar2 != (int *)0x0) {
              LOCK();
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((*piVar2 == 0) && (*(longlong *)(lVar4 + lVar6) != 0)) {
                FUN_140b68ba8();
              }
            }
            lVar6 = lVar6 + 0x10;
          } while (lVar3 << 4 != lVar6);
        }
        free(*(void **)(lVar1 + 8));
      }
    }
    thunk_FUN_140b68ba8(lVar1,0x30);
    QVar5 = param_1[1].QWidget.QPaintDevice;
    if (QVar5 == (QPaintDevice)0x0) goto LAB_1405738d1;
  }
  thunk_FUN_140b68ba8(QVar5,0x48);
LAB_1405738d1:
                    /* WARNING: Could not recover jumptable at 0x0001405738df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QFrame::~QFrame(param_1);
  return;
}

