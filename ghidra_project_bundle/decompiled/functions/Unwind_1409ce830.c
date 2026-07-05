/**
 * Function: Unwind@1409ce830
 * Address:  1409ce830
 * Signature: undefined Unwind@1409ce830(void)
 * Body size: 78 bytes
 */


void Unwind_1409ce830(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x100) + 0x20) != 0) {
    thunk_FUN_140b68ba8();
  }
  lVar1 = *(longlong *)(param_2 + 0x100);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  return;
}

