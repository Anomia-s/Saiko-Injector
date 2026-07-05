/**
 * Function: Unwind@140b575a0
 * Address:  140b575a0
 * Signature: undefined Unwind@140b575a0(void)
 * Body size: 72 bytes
 */


void Unwind_140b575a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xb0));
  }
  return;
}

