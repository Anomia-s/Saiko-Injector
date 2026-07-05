/**
 * Function: Unwind@1401f5390
 * Address:  1401f5390
 * Signature: undefined Unwind@1401f5390(void)
 * Body size: 88 bytes
 */


void Unwind_1401f5390(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x168) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x168);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  return;
}

