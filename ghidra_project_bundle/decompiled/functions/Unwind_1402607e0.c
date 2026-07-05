/**
 * Function: Unwind@1402607e0
 * Address:  1402607e0
 * Signature: undefined Unwind@1402607e0(void)
 * Body size: 168 bytes
 */


void Unwind_1402607e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x60));
  }
  return;
}

