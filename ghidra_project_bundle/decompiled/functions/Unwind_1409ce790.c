/**
 * Function: Unwind@1409ce790
 * Address:  1409ce790
 * Signature: undefined Unwind@1409ce790(void)
 * Body size: 78 bytes
 */


void Unwind_1409ce790(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x100) + 0x40) != 0) {
    thunk_FUN_140b68ba8();
  }
  lVar1 = *(longlong *)(param_2 + 0x100);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  return;
}

