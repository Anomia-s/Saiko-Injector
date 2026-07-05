/**
 * Function: Unwind@14053ccc0
 * Address:  14053ccc0
 * Signature: undefined Unwind@14053ccc0(void)
 * Body size: 84 bytes
 */


void Unwind_14053ccc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x198);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x198) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

