/**
 * Function: Unwind@1405b9900
 * Address:  1405b9900
 * Signature: undefined Unwind@1405b9900(void)
 * Body size: 74 bytes
 */


void Unwind_1405b9900(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
  return;
}

