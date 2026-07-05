/**
 * Function: Unwind@1407464c0
 * Address:  1407464c0
 * Signature: undefined Unwind@1407464c0(void)
 * Body size: 104 bytes
 */


void Unwind_1407464c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x1c0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x1c0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)(param_2 + 0x1b8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x1b8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

