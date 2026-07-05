/**
 * Function: Unwind@140962670
 * Address:  140962670
 * Signature: undefined Unwind@140962670(void)
 * Body size: 62 bytes
 */


void Unwind_140962670(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 8);
  if (lVar1 != 0) {
    thunk_FUN_140b68ba8(lVar1,0x40);
  }
  return;
}

