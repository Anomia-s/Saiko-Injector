/**
 * Function: Unwind@1401ca730
 * Address:  1401ca730
 * Signature: undefined Unwind@1401ca730(void)
 * Body size: 71 bytes
 */


void Unwind_1401ca730(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xb8));
  }
  return;
}

