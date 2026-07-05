/**
 * Function: Unwind@14079de10
 * Address:  14079de10
 * Signature: undefined Unwind@14079de10(void)
 * Body size: 63 bytes
 */


void Unwind_14079de10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  plVar2 = (longlong *)plVar1[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar1);
    plVar1[7] = 0;
  }
  return;
}

