/**
 * Function: Unwind@14079aa90
 * Address:  14079aa90
 * Signature: undefined Unwind@14079aa90(void)
 * Body size: 67 bytes
 */


void Unwind_14079aa90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x50);
  lVar2 = *(longlong *)(param_2 + 0x58) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}

