/**
 * Function: Unwind@140268460
 * Address:  140268460
 * Signature: undefined Unwind@140268460(void)
 * Body size: 120 bytes
 */


void Unwind_140268460(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xe0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xa8));
  }
  return;
}

