/**
 * Function: Unwind@14009fb60
 * Address:  14009fb60
 * Signature: undefined Unwind@14009fb60(void)
 * Body size: 63 bytes
 */


void Unwind_14009fb60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  return;
}

