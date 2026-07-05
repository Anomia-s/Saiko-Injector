/**
 * Function: Unwind@14003ad10
 * Address:  14003ad10
 * Signature: undefined Unwind@14003ad10(void)
 * Body size: 57 bytes
 */


void Unwind_14003ad10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(lVar1 + 0x18);
  if (lVar2 != 0) {
    thunk_FUN_140b68ba8(lVar2,1);
  }
  FUN_14003ae20(lVar1);
  return;
}

