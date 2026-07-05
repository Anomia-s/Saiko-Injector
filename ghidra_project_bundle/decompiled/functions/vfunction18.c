/**
 * Function: vfunction18
 * Address:  140a58da0
 * Signature: void __thiscall vfunction18(QsciListBoxQt * this)
 * Body size: 150 bytes
 */


void __thiscall QsciListBoxQt::vfunction18(QsciListBoxQt *this)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = *(int **)&(this->Window_data).field_0x28;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 1) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (lVar2 = *(longlong *)&(this->Window_data).field_0x28, lVar2 != 0)) {
        FUN_140a595b0(lVar2 + 8,lVar2 + 8,*(undefined8 *)(*(longlong *)(lVar2 + 8) + 8));
        thunk_FUN_140b68ba8(*(undefined8 *)(lVar2 + 8),0x40);
        thunk_FUN_140b68ba8(lVar2,0x18);
      }
      *(undefined8 *)&(this->Window_data).field_0x28 = 0;
      return;
    }
    lVar2 = *(longlong *)(piVar1 + 2);
    FUN_140a595b0(piVar1 + 2,piVar1 + 2,*(undefined8 *)(lVar2 + 8));
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    piVar1[4] = 0;
    piVar1[5] = 0;
  }
  return;
}

