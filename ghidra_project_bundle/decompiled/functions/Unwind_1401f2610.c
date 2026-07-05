/**
 * Function: Unwind@1401f2610
 * Address:  1401f2610
 * Signature: undefined Unwind@1401f2610(void)
 * Body size: 56 bytes
 */


void Unwind_1401f2610(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x28));
  }
  return;
}

