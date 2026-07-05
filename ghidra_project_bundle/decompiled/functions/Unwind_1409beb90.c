/**
 * Function: Unwind@1409beb90
 * Address:  1409beb90
 * Signature: undefined Unwind@1409beb90(void)
 * Body size: 58 bytes
 */


void Unwind_1409beb90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(longlong *)(lVar1 + 0x50) != 0) {
    thunk_FUN_140b68ba8();
  }
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined4 *)(lVar1 + 0x48) = 0;
  return;
}

