/**
 * Function: Unwind@1409ce6a0
 * Address:  1409ce6a0
 * Signature: undefined Unwind@1409ce6a0(void)
 * Body size: 78 bytes
 */


void Unwind_1409ce6a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x100) + 0x70) != 0) {
    thunk_FUN_140b68ba8();
  }
  lVar1 = *(longlong *)(param_2 + 0x100);
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined4 *)(lVar1 + 0x68) = 0;
  return;
}

