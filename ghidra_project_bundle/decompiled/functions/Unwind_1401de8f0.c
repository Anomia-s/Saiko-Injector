/**
 * Function: Unwind@1401de8f0
 * Address:  1401de8f0
 * Signature: undefined Unwind@1401de8f0(void)
 * Body size: 77 bytes
 */


void Unwind_1401de8f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40f0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x40b8));
  }
  return;
}

