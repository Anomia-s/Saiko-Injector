/**
 * Function: Unwind@14053d3f0
 * Address:  14053d3f0
 * Signature: undefined Unwind@14053d3f0(void)
 * Body size: 48 bytes
 */


void Unwind_14053d3f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x28) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

