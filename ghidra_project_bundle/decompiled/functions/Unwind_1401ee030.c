/**
 * Function: Unwind@1401ee030
 * Address:  1401ee030
 * Signature: undefined Unwind@1401ee030(void)
 * Body size: 64 bytes
 */


void Unwind_1401ee030(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x28));
  }
  return;
}

