/**
 * Function: Unwind@14047e6f0
 * Address:  14047e6f0
 * Signature: undefined Unwind@14047e6f0(void)
 * Body size: 81 bytes
 */


void Unwind_14047e6f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(longlong **)(param_2 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    **(undefined8 **)(param_2 + 0x1f8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

