/**
 * Function: Unwind@14025f630
 * Address:  14025f630
 * Signature: undefined Unwind@14025f630(void)
 * Body size: 68 bytes
 */


void Unwind_14025f630(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0x70);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x58));
    *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x70) = 0;
  }
  return;
}

