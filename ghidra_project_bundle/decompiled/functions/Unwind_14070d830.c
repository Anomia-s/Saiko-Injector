/**
 * Function: Unwind@14070d830
 * Address:  14070d830
 * Signature: undefined Unwind@14070d830(void)
 * Body size: 57 bytes
 */


void Unwind_14070d830(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 200);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 200) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

