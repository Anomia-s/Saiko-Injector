/**
 * Function: Unwind@1401c3e70
 * Address:  1401c3e70
 * Signature: undefined Unwind@1401c3e70(void)
 * Body size: 71 bytes
 */


void Unwind_1401c3e70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xa0));
  }
  return;
}

