/**
 * Function: ~LineVector<__int64>
 * Address:  1407fe3f0
 * Signature: void __thiscall ~LineVector<__int64>(LineVector<__int64> * this)
 * Body size: 148 bytes
 */


void __thiscall LineVector<__int64>::~LineVector<__int64>(LineVector<__int64> *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  this->vftablePtr = &vftable;
  LineStartIndex<__int64>::~LineStartIndex<__int64>
            ((LineStartIndex<__int64> *)&(this->LineVector<__int64>_data).field_0x48);
  LineStartIndex<__int64>::~LineStartIndex<__int64>
            ((LineStartIndex<__int64> *)&(this->LineVector<__int64>_data).field_0x20);
  plVar1 = (this->LineVector<__int64>_data).offset_0x10;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    uVar4 = plVar1[2] - lVar2;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar3)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar3,uVar4);
  }
  thunk_FUN_140b68ba8(plVar1,0x40);
  return;
}

