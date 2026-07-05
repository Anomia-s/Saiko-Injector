/**
 * Function: Unwind@1402680f0
 * Address:  1402680f0
 * Signature: undefined Unwind@1402680f0(void)
 * Body size: 120 bytes
 */


void Unwind_1402680f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xe0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xa8));
  }
  return;
}

