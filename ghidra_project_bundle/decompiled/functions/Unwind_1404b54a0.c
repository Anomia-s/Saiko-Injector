/**
 * Function: Unwind@1404b54a0
 * Address:  1404b54a0
 * Signature: undefined Unwind@1404b54a0(void)
 * Body size: 97 bytes
 */


void Unwind_1404b54a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x528);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x4f0));
    *(undefined8 *)(param_2 + 0x528) = 0;
  }
  return;
}

