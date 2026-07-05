/**
 * Function: ~CDockFocusController
 * Address:  14057dcd0
 * Signature: void __thiscall ~CDockFocusController(CDockFocusController * this)
 * Body size: 141 bytes
 */


void __thiscall ads::CDockFocusController::~CDockFocusController(CDockFocusController *this)

{
  longlong lVar1;
  int *piVar2;
  
  this->vftablePtr = &vftable;
  lVar1 = (this->CDockFocusController_data).offset_0x8;
  if (lVar1 != 0) {
    piVar2 = *(int **)(lVar1 + 0x28);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(longlong *)(lVar1 + 0x28) != 0)) {
        FUN_140b68ba8();
      }
    }
    piVar2 = *(int **)(lVar1 + 0x18);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
        FUN_140b68ba8();
      }
    }
    piVar2 = *(int **)(lVar1 + 8);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        FUN_140b68ba8();
      }
    }
    thunk_FUN_140b68ba8(lVar1,0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00014057dd56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QObject::~QObject((QObject *)this);
  return;
}

