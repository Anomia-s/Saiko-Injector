/**
 * Function: Unwind@140797bd0
 * Address:  140797bd0
 * Signature: undefined Unwind@140797bd0(void)
 * Body size: 86 bytes
 */


void Unwind_140797bd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x110);
  lVar2 = *(longlong *)(param_2 + 0x118) * 8 + *plVar1;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}

