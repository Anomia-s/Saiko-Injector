/**
 * Function: Unwind@1405b9170
 * Address:  1405b9170
 * Signature: undefined Unwind@1405b9170(void)
 * Body size: 77 bytes
 */


void Unwind_1405b9170(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x448);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x410));
  }
  return;
}

