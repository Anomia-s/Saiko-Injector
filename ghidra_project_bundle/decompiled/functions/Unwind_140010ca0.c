/**
 * Function: Unwind@140010ca0
 * Address:  140010ca0
 * Signature: undefined Unwind@140010ca0(void)
 * Body size: 108 bytes
 */


void Unwind_140010ca0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x58) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x60);
    do {
      FUN_140004b30(lVar1 + 0x2a8 + lVar2);
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  FUN_14000e840(*(undefined8 *)(param_2 + 0x28));
  return;
}

