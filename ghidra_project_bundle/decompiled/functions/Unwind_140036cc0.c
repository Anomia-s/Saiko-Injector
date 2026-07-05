/**
 * Function: Unwind@140036cc0
 * Address:  140036cc0
 * Signature: undefined Unwind@140036cc0(void)
 * Body size: 58 bytes
 */


void Unwind_140036cc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
  if (lVar1 != 0) {
    thunk_FUN_140b68ba8(lVar1,0x38);
  }
  return;
}

