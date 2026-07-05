/**
 * Function: Unwind@14078bef0
 * Address:  14078bef0
 * Signature: undefined Unwind@14078bef0(void)
 * Body size: 95 bytes
 */


void Unwind_14078bef0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x90);
  lVar2 = *(longlong *)(param_2 + 0x98) * 8 + *plVar1;
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

