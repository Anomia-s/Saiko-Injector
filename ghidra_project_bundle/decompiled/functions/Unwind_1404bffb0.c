/**
 * Function: Unwind@1404bffb0
 * Address:  1404bffb0
 * Signature: undefined Unwind@1404bffb0(void)
 * Body size: 65 bytes
 */


void Unwind_1404bffb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0xd8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

