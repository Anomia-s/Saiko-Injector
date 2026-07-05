/**
 * Function: Unwind@140a24b90
 * Address:  140a24b90
 * Signature: undefined Unwind@140a24b90(void)
 * Body size: 74 bytes
 */


void Unwind_140a24b90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x1c0);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    thunk_FUN_140b68ba8();
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  return;
}

