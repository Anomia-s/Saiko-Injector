/**
 * Function: Unwind@14009bc90
 * Address:  14009bc90
 * Signature: undefined Unwind@14009bc90(void)
 * Body size: 65 bytes
 */


void Unwind_14009bc90(undefined8 param_1,longlong param_2)

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

