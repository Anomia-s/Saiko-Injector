/**
 * Function: Unwind@1401db230
 * Address:  1401db230
 * Signature: undefined Unwind@1401db230(void)
 * Body size: 160 bytes
 */


void Unwind_1401db230(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  plVar2 = (longlong *)plVar1[0x1f];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != *(longlong **)(param_2 + 0x38));
    plVar1[0x1f] = 0;
  }
  plVar2 = (longlong *)plVar1[0x17];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != *(longlong **)(param_2 + 0x30));
    plVar1[0x17] = 0;
  }
  plVar2 = (longlong *)plVar1[0xf];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != *(longlong **)(param_2 + 0x28));
    plVar1[0xf] = 0;
  }
  plVar2 = (longlong *)plVar1[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar1);
    plVar1[7] = 0;
  }
  return;
}

