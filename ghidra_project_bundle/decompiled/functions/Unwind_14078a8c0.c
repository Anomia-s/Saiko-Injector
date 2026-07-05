/**
 * Function: Unwind@14078a8c0
 * Address:  14078a8c0
 * Signature: undefined Unwind@14078a8c0(void)
 * Body size: 145 bytes
 */


void Unwind_14078a8c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0xd0);
  lVar2 = *(longlong *)(param_2 + 0xd8) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  plVar1 = *(longlong **)(param_2 + 0x110);
  lVar2 = *(longlong *)(param_2 + 0x118) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  lVar2 = *(longlong *)(param_2 + 0x108) + *(longlong *)(*(longlong *)(param_2 + 0x158) + 0x2b0);
  if (lVar2 != *(longlong *)(*(longlong *)(param_2 + 0x158) + 0x2b8)) {
    *(longlong *)(*(longlong *)(param_2 + 0x158) + 0x2b8) = lVar2;
  }
  return;
}

