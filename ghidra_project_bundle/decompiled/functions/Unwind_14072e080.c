/**
 * Function: Unwind@14072e080
 * Address:  14072e080
 * Signature: undefined Unwind@14072e080(void)
 * Body size: 50 bytes
 */


void Unwind_14072e080(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x28) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

