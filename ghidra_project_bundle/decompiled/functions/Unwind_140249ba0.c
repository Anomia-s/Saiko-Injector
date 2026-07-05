/**
 * Function: Unwind@140249ba0
 * Address:  140249ba0
 * Signature: undefined Unwind@140249ba0(void)
 * Body size: 60 bytes
 */


void Unwind_140249ba0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x20));
  }
  return;
}

