/**
 * Function: Unwind@14071e800
 * Address:  14071e800
 * Signature: undefined Unwind@14071e800(void)
 * Body size: 58 bytes
 */


void Unwind_14071e800(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

