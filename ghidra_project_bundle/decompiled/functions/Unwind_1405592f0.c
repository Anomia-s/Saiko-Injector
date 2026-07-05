/**
 * Function: Unwind@1405592f0
 * Address:  1405592f0
 * Signature: undefined Unwind@1405592f0(void)
 * Body size: 66 bytes
 */


void Unwind_1405592f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x80));
  }
  return;
}

