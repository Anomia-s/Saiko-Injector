/**
 * Function: Unwind@14053cfe0
 * Address:  14053cfe0
 * Signature: undefined Unwind@14053cfe0(void)
 * Body size: 94 bytes
 */


void Unwind_14053cfe0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x3b0);
  if (*(longlong **)(param_2 + 0x3b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x3b8) + 0x10))();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

