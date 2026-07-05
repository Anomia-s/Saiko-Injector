/**
 * Function: Unwind@140555f50
 * Address:  140555f50
 * Signature: undefined Unwind@140555f50(void)
 * Body size: 66 bytes
 */


void Unwind_140555f50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x80));
  }
  return;
}

