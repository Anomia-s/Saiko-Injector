/**
 * Function: Unwind@1407115f0
 * Address:  1407115f0
 * Signature: undefined Unwind@1407115f0(void)
 * Body size: 78 bytes
 */


void Unwind_1407115f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

