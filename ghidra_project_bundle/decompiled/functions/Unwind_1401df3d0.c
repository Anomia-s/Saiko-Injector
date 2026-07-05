/**
 * Function: Unwind@1401df3d0
 * Address:  1401df3d0
 * Signature: undefined Unwind@1401df3d0(void)
 * Body size: 78 bytes
 */


void Unwind_1401df3d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x88));
    *(undefined8 *)(param_2 + 0xc0) = 0;
  }
  return;
}

