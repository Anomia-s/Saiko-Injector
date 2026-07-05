/**
 * Function: Unwind@1405625e0
 * Address:  1405625e0
 * Signature: undefined Unwind@1405625e0(void)
 * Body size: 98 bytes
 */


void Unwind_1405625e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x40));
  }
  return;
}

