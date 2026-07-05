/**
 * Function: Unwind@1407482c0
 * Address:  1407482c0
 * Signature: undefined Unwind@1407482c0(void)
 * Body size: 84 bytes
 */


void Unwind_1407482c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x330);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x330) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

