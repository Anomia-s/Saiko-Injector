/**
 * Function: Unwind@140b57670
 * Address:  140b57670
 * Signature: undefined Unwind@140b57670(void)
 * Body size: 72 bytes
 */


void Unwind_140b57670(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xb0));
  }
  return;
}

