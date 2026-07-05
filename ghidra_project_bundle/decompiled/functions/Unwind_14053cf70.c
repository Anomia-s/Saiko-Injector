/**
 * Function: Unwind@14053cf70
 * Address:  14053cf70
 * Signature: undefined Unwind@14053cf70(void)
 * Body size: 112 bytes
 */


void Unwind_14053cf70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x3a8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x3a8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined8 *)(param_2 + 0x3b8) = *(undefined8 *)(param_2 + 0x3a0);
  *(undefined8 *)(param_2 + 0x3b0) = *(undefined8 *)(param_2 + 0x3c0);
  return;
}

