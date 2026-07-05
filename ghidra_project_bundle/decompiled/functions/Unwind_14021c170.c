/**
 * Function: Unwind@14021c170
 * Address:  14021c170
 * Signature: undefined Unwind@14021c170(void)
 * Body size: 67 bytes
 */


void Unwind_14021c170(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x210);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x210) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

