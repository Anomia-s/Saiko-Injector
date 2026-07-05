/**
 * Function: Unwind@14073b960
 * Address:  14073b960
 * Signature: undefined Unwind@14073b960(void)
 * Body size: 84 bytes
 */


void Unwind_14073b960(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x2b0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x2b0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

