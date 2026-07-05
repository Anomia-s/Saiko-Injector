/**
 * Function: Unwind@14053ce90
 * Address:  14053ce90
 * Signature: undefined Unwind@14053ce90(void)
 * Body size: 84 bytes
 */


void Unwind_14053ce90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x398);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x398) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

