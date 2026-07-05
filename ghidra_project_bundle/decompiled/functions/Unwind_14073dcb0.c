/**
 * Function: Unwind@14073dcb0
 * Address:  14073dcb0
 * Signature: undefined Unwind@14073dcb0(void)
 * Body size: 69 bytes
 */


void Unwind_14073dcb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x70) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

