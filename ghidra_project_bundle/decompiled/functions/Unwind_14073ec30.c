/**
 * Function: Unwind@14073ec30
 * Address:  14073ec30
 * Signature: undefined Unwind@14073ec30(void)
 * Body size: 69 bytes
 */


void Unwind_14073ec30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0xa0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

