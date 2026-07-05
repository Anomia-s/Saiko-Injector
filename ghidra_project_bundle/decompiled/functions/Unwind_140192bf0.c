/**
 * Function: Unwind@140192bf0
 * Address:  140192bf0
 * Signature: undefined Unwind@140192bf0(void)
 * Body size: 101 bytes
 */


void Unwind_140192bf0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0xb40);
  plVar2 = (longlong *)plVar1[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar1);
    plVar1[7] = 0;
  }
  return;
}

