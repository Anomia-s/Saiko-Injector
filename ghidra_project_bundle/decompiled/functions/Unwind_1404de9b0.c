/**
 * Function: Unwind@1404de9b0
 * Address:  1404de9b0
 * Signature: undefined Unwind@1404de9b0(void)
 * Body size: 118 bytes
 */


void Unwind_1404de9b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x790);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x790) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

