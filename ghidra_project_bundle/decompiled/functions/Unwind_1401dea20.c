/**
 * Function: Unwind@1401dea20
 * Address:  1401dea20
 * Signature: undefined Unwind@1401dea20(void)
 * Body size: 77 bytes
 */


void Unwind_1401dea20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x4130);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x40f8));
  }
  return;
}

