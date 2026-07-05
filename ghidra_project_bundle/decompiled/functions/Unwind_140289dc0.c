/**
 * Function: Unwind@140289dc0
 * Address:  140289dc0
 * Signature: undefined Unwind@140289dc0(void)
 * Body size: 65 bytes
 */


void Unwind_140289dc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = (longlong *)plVar1[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar1);
    plVar1[7] = 0;
  }
  return;
}

