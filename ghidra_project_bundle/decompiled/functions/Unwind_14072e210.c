/**
 * Function: Unwind@14072e210
 * Address:  14072e210
 * Signature: undefined Unwind@14072e210(void)
 * Body size: 50 bytes
 */


void Unwind_14072e210(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

