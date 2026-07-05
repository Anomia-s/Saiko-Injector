/**
 * Function: Unwind@1404de730
 * Address:  1404de730
 * Signature: undefined Unwind@1404de730(void)
 * Body size: 118 bytes
 */


void Unwind_1404de730(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x750);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x750) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

