/**
 * Function: Unwind@1405559e0
 * Address:  1405559e0
 * Signature: undefined Unwind@1405559e0(void)
 * Body size: 66 bytes
 */


void Unwind_1405559e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x80));
  }
  return;
}

