/**
 * Function: Unwind@14096da60
 * Address:  14096da60
 * Signature: undefined Unwind@14096da60(void)
 * Body size: 60 bytes
 */


void Unwind_14096da60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    thunk_FUN_140b68ba8();
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  return;
}

