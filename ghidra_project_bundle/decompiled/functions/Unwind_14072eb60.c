/**
 * Function: Unwind@14072eb60
 * Address:  14072eb60
 * Signature: undefined Unwind@14072eb60(void)
 * Body size: 67 bytes
 */


void Unwind_14072eb60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x2e8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x2e8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

