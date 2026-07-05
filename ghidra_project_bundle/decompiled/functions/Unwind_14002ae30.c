/**
 * Function: Unwind@14002ae30
 * Address:  14002ae30
 * Signature: undefined Unwind@14002ae30(void)
 * Body size: 99 bytes
 */


void Unwind_14002ae30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (lVar2 != 0) {
    do {
      FUN_1400294a0(lVar1 + -0x28 + lVar2);
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  thunk_FUN_140b68ba8(lVar1,*(undefined8 *)(param_2 + 0x20));
  return;
}

