/**
 * Function: Unwind@14054f990
 * Address:  14054f990
 * Signature: undefined Unwind@14054f990(void)
 * Body size: 71 bytes
 */


void Unwind_14054f990(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x58));
  }
  return;
}

