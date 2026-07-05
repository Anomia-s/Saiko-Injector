/**
 * Function: tempallocator_out_of_memory_trying_to_allocat
 * Address:  140046df0
 * Signature: longlong __thiscall tempallocator_out_of_memory_trying_to_allocat(void * this, int param_1)
 * Body size: 68 bytes
 */


longlong __thiscall tempallocator_out_of_memory_trying_to_allocat(void *this,int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)((longlong)this + 0x18);
  uVar2 = (ulonglong)(param_1 + 0xfU & 0xfffffff0) + lVar1;
  if (uVar2 <= *(ulonglong *)((longlong)this + 0x10)) {
    *(ulonglong *)((longlong)this + 0x18) = uVar2;
    return lVar1 + *(longlong *)((longlong)this + 8);
  }
  (*(code *)PTR_vfunction4_1414f67c8)("TempAllocator: Out of memory trying to allocate %u bytes");
                    /* WARNING: Subroutine does not return */
  abort();
}

