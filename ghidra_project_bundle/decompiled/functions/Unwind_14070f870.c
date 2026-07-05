/**
 * Function: Unwind@14070f870
 * Address:  14070f870
 * Signature: undefined Unwind@14070f870(void)
 * Body size: 62 bytes
 */


void Unwind_14070f870(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

