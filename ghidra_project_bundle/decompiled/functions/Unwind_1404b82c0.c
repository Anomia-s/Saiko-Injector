/**
 * Function: Unwind@1404b82c0
 * Address:  1404b82c0
 * Signature: undefined Unwind@1404b82c0(void)
 * Body size: 83 bytes
 */


void Unwind_1404b82c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x1c0));
    *(undefined8 *)(param_2 + 0x1f8) = 0;
  }
  return;
}

