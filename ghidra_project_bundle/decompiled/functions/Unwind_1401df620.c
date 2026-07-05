/**
 * Function: Unwind@1401df620
 * Address:  1401df620
 * Signature: undefined Unwind@1401df620(void)
 * Body size: 131 bytes
 */


void Unwind_1401df620(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x4058) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x4058);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x4050) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x4050);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  return;
}

