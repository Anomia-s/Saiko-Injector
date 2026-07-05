/**
 * Function: Unwind@14070d7f0
 * Address:  14070d7f0
 * Signature: undefined Unwind@14070d7f0(void)
 * Body size: 57 bytes
 */


void Unwind_14070d7f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 200);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 200) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

