/**
 * Function: Unwind@14009f9f0
 * Address:  14009f9f0
 * Signature: undefined Unwind@14009f9f0(void)
 * Body size: 63 bytes
 */


void Unwind_14009f9f0(undefined8 param_1,longlong param_2)

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

