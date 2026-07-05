/**
 * Function: tempallocator_freeing_in_the_wrong_order
 * Address:  140046e40
 * Signature: void __thiscall tempallocator_freeing_in_the_wrong_order(void * this, longlong param_1, int param_2)
 * Body size: 61 bytes
 */


void __thiscall tempallocator_freeing_in_the_wrong_order(void *this,longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)((longlong)this + 0x18) - (ulonglong)(param_2 + 0xfU & 0xfffffff0);
    *(longlong *)((longlong)this + 0x18) = lVar1;
    if (lVar1 + *(longlong *)((longlong)this + 8) != param_1) {
      (*(code *)PTR_vfunction4_1414f67c8)("TempAllocator: Freeing in the wrong order");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}

