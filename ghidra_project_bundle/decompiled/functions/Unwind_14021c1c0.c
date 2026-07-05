/**
 * Function: Unwind@14021c1c0
 * Address:  14021c1c0
 * Signature: undefined Unwind@14021c1c0(void)
 * Body size: 79 bytes
 */


void Unwind_14021c1c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x1c0));
    *(undefined8 *)(param_2 + 0x1f8) = 0;
  }
  return;
}

