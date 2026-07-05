/**
 * Function: Unwind@1409190b0
 * Address:  1409190b0
 * Signature: undefined Unwind@1409190b0(void)
 * Body size: 95 bytes
 */


void Unwind_1409190b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x340) + 0x1a00) != 0) {
    thunk_FUN_140b68ba8();
  }
  lVar1 = *(longlong *)(param_2 + 0x340);
  *(undefined8 *)(lVar1 + 0x1a00) = 0;
  *(undefined4 *)(lVar1 + 0x19f8) = 0;
  return;
}

