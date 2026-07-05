/**
 * Function: Unwind@14054fe60
 * Address:  14054fe60
 * Signature: undefined Unwind@14054fe60(void)
 * Body size: 71 bytes
 */


void Unwind_14054fe60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x58));
  }
  return;
}

