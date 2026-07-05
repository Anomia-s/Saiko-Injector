/**
 * Function: Unwind@14096daa0
 * Address:  14096daa0
 * Signature: undefined Unwind@14096daa0(void)
 * Body size: 60 bytes
 */


void Unwind_14096daa0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    thunk_FUN_140b68ba8();
  }
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 8) = 0;
  return;
}

