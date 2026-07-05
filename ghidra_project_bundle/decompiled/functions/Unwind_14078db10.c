/**
 * Function: Unwind@14078db10
 * Address:  14078db10
 * Signature: undefined Unwind@14078db10(void)
 * Body size: 90 bytes
 */


void Unwind_14078db10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x160);
  lVar2 = *(longlong *)(param_2 + 0x168) * 0x28 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}

