/**
 * Function: Unwind@14078adc0
 * Address:  14078adc0
 * Signature: undefined Unwind@14078adc0(void)
 * Body size: 95 bytes
 */


void Unwind_14078adc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x58);
  lVar2 = *(longlong *)(param_2 + 0x60) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  plVar1 = *(longlong **)(param_2 + 0x40);
  lVar2 = *(longlong *)(param_2 + 0x48) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}

