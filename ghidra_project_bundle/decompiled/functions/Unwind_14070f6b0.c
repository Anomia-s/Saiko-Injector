/**
 * Function: Unwind@14070f6b0
 * Address:  14070f6b0
 * Signature: undefined Unwind@14070f6b0(void)
 * Body size: 69 bytes
 */


void Unwind_14070f6b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x78) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

