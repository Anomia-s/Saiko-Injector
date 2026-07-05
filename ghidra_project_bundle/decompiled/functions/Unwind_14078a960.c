/**
 * Function: Unwind@14078a960
 * Address:  14078a960
 * Signature: undefined Unwind@14078a960(void)
 * Body size: 74 bytes
 */


void Unwind_14078a960(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0xf0);
  lVar2 = *(longlong *)(param_2 + 0xf8) * 0x28 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}

