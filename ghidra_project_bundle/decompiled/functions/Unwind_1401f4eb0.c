/**
 * Function: Unwind@1401f4eb0
 * Address:  1401f4eb0
 * Signature: undefined Unwind@1401f4eb0(void)
 * Body size: 71 bytes
 */


void Unwind_1401f4eb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 200);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x90));
  }
  return;
}

