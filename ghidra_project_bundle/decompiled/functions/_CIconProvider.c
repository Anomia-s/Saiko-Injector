/**
 * Function: ~CIconProvider
 * Address:  14057ebf0
 * Signature: void __thiscall ~CIconProvider(CIconProvider * this)
 * Body size: 139 bytes
 */


void __thiscall ads::CIconProvider::~CIconProvider(CIconProvider *this)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  QIcon *this_00;
  
  this->vftablePtr = &vftable;
  lVar1 = (this->CIconProvider_data).offset_0x0;
  if (lVar1 != 0) {
    piVar2 = *(int **)(lVar1 + 8);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        if (*(longlong *)(lVar1 + 0x18) != 0) {
          this_00 = *(QIcon **)(lVar1 + 0x10);
          lVar3 = *(longlong *)(lVar1 + 0x18) << 3;
          do {
            QIcon::~QIcon(this_00);
            this_00 = this_00 + 8;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
        free(*(void **)(lVar1 + 8));
      }
    }
    thunk_FUN_140b68ba8(lVar1,0x20);
    return;
  }
  return;
}

