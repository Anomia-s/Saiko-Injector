/**
 * Function: Unwind@1407082a0
 * Address:  1407082a0
 * Signature: undefined Unwind@1407082a0(void)
 * Body size: 70 bytes
 */


void Unwind_1407082a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

