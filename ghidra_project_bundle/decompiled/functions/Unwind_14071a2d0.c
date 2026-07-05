/**
 * Function: Unwind@14071a2d0
 * Address:  14071a2d0
 * Signature: undefined Unwind@14071a2d0(void)
 * Body size: 84 bytes
 */


void Unwind_14071a2d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x160);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x160) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

