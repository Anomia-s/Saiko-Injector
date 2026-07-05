/**
 * Function: Unwind@1404b5560
 * Address:  1404b5560
 * Signature: undefined Unwind@1404b5560(void)
 * Body size: 97 bytes
 */


void Unwind_1404b5560(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x528);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x4f0));
    *(undefined8 *)(param_2 + 0x528) = 0;
  }
  return;
}

