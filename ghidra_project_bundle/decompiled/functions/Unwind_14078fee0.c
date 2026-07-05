/**
 * Function: Unwind@14078fee0
 * Address:  14078fee0
 * Signature: undefined Unwind@14078fee0(void)
 * Body size: 63 bytes
 */


void Unwind_14078fee0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x28) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}

