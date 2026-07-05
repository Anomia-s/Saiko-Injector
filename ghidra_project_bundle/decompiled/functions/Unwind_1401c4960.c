/**
 * Function: Unwind@1401c4960
 * Address:  1401c4960
 * Signature: undefined Unwind@1401c4960(void)
 * Body size: 50 bytes
 */


void Unwind_1401c4960(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x28));
  }
  return;
}

