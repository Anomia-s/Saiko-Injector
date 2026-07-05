/**
 * Function: Unwind@140260540
 * Address:  140260540
 * Signature: undefined Unwind@140260540(void)
 * Body size: 168 bytes
 */


void Unwind_140260540(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x60));
  }
  return;
}

