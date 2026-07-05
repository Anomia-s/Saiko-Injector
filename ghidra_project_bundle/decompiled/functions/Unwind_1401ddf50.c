/**
 * Function: Unwind@1401ddf50
 * Address:  1401ddf50
 * Signature: undefined Unwind@1401ddf50(void)
 * Body size: 74 bytes
 */


void Unwind_1401ddf50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x98) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x98);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  return;
}

