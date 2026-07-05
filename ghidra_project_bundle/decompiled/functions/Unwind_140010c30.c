/**
 * Function: Unwind@140010c30
 * Address:  140010c30
 * Signature: undefined Unwind@140010c30(void)
 * Body size: 99 bytes
 */


void Unwind_140010c30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x58) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x60);
    do {
      FUN_140004b30(lVar1 + 0x148 + lVar2);
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return;
}

