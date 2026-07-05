/**
 * Function: Unwind@1401c7d40
 * Address:  1401c7d40
 * Signature: undefined Unwind@1401c7d40(void)
 * Body size: 66 bytes
 */


void Unwind_1401c7d40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0xd8);
  plVar2 = (longlong *)plVar1[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar1);
    plVar1[7] = 0;
  }
  return;
}

