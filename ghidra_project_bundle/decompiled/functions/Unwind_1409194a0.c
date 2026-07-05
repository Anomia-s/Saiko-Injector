/**
 * Function: Unwind@1409194a0
 * Address:  1409194a0
 * Signature: undefined Unwind@1409194a0(void)
 * Body size: 86 bytes
 */


void Unwind_1409194a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x340) + 0x38) != 0) {
    thunk_FUN_140b68ba8();
  }
  lVar1 = *(longlong *)(param_2 + 0x340);
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined4 *)(lVar1 + 0x30) = 0;
  return;
}

