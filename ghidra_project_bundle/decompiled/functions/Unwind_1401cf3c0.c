/**
 * Function: Unwind@1401cf3c0
 * Address:  1401cf3c0
 * Signature: undefined Unwind@1401cf3c0(void)
 * Body size: 107 bytes
 */


void Unwind_1401cf3c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xf0) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0xf0);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xf8) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0xf8);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  return;
}

