/**
 * Function: Unwind@14096d510
 * Address:  14096d510
 * Signature: undefined Unwind@14096d510(void)
 * Body size: 67 bytes
 */


void Unwind_14096d510(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (*(longlong *)(lVar1 + 0x8f8) != 0) {
    thunk_FUN_140b68ba8();
  }
  *(undefined8 *)(lVar1 + 0x8f8) = 0;
  *(undefined4 *)(lVar1 + 0x8f0) = 0;
  return;
}

