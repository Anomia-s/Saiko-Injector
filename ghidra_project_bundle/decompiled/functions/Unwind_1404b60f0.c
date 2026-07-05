/**
 * Function: Unwind@1404b60f0
 * Address:  1404b60f0
 * Signature: undefined Unwind@1404b60f0(void)
 * Body size: 68 bytes
 */


void Unwind_1404b60f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 200);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x90));
  }
  return;
}

