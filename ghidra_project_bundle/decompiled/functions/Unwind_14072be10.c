/**
 * Function: Unwind@14072be10
 * Address:  14072be10
 * Signature: undefined Unwind@14072be10(void)
 * Body size: 65 bytes
 */


void Unwind_14072be10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x78) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

