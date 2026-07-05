/**
 * Function: Unwind@1401f3f60
 * Address:  1401f3f60
 * Signature: undefined Unwind@1401f3f60(void)
 * Body size: 99 bytes
 */


void Unwind_1401f3f60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x90) = 0;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x98) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x98);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  return;
}

