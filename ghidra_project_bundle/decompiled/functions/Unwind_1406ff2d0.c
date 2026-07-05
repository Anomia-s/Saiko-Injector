/**
 * Function: Unwind@1406ff2d0
 * Address:  1406ff2d0
 * Signature: undefined Unwind@1406ff2d0(void)
 * Body size: 58 bytes
 */


void Unwind_1406ff2d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x50) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

