/**
 * Function: Unwind@140010dd0
 * Address:  140010dd0
 * Signature: undefined Unwind@140010dd0(void)
 * Body size: 95 bytes
 */


void Unwind_140010dd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x38));
    *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0xd0) = 0;
  }
  return;
}

