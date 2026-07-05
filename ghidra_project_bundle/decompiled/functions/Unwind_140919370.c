/**
 * Function: Unwind@140919370
 * Address:  140919370
 * Signature: undefined Unwind@140919370(void)
 * Body size: 110 bytes
 */


void Unwind_140919370(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140919900(*(undefined8 *)(param_2 + 0x2e0));
  FUN_1400017d0(*(undefined8 *)(param_2 + 0x2d8));
  if (*(longlong *)(*(longlong *)(param_2 + 0x340) + 0x68) != 0) {
    thunk_FUN_140b68ba8();
  }
  lVar1 = *(longlong *)(param_2 + 0x340);
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  return;
}

