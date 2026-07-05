/**
 * Function: Unwind@1401dde60
 * Address:  1401dde60
 * Signature: undefined Unwind@1401dde60(void)
 * Body size: 70 bytes
 */


void Unwind_1401dde60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x50));
    *(undefined8 *)(param_2 + 0x88) = 0;
  }
  return;
}

