/**
 * Function: Unwind@1409bec10
 * Address:  1409bec10
 * Signature: undefined Unwind@1409bec10(void)
 * Body size: 58 bytes
 */


void Unwind_1409bec10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    thunk_FUN_140b68ba8();
  }
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}

