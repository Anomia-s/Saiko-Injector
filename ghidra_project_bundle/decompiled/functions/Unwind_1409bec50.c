/**
 * Function: Unwind@1409bec50
 * Address:  1409bec50
 * Signature: undefined Unwind@1409bec50(void)
 * Body size: 58 bytes
 */


void Unwind_1409bec50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    thunk_FUN_140b68ba8();
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  return;
}

