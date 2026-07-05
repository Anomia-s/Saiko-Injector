/**
 * Function: Unwind@14079a690
 * Address:  14079a690
 * Signature: undefined Unwind@14079a690(void)
 * Body size: 105 bytes
 */


void Unwind_14079a690(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x80);
  lVar2 = *(longlong *)(param_2 + 0x88) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  plVar1 = *(longlong **)(param_2 + 0xb0);
  lVar2 = *(longlong *)(param_2 + 0xb8) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}

