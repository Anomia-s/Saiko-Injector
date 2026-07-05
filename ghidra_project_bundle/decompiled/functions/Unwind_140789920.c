/**
 * Function: Unwind@140789920
 * Address:  140789920
 * Signature: undefined Unwind@140789920(void)
 * Body size: 80 bytes
 */


void Unwind_140789920(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x138);
  lVar2 = *(longlong *)(param_2 + 0x140) * 0x28 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}

