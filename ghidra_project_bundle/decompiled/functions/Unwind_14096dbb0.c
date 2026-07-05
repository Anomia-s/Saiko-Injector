/**
 * Function: Unwind@14096dbb0
 * Address:  14096dbb0
 * Signature: undefined Unwind@14096dbb0(void)
 * Body size: 61 bytes
 */


void Unwind_14096dbb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x40) + 0x10) != 0) {
    thunk_FUN_140b68ba8();
  }
  lVar1 = *(longlong *)(param_2 + 0x40);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 8) = 0;
  return;
}

