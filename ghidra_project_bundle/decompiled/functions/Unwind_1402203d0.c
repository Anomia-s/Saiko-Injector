/**
 * Function: Unwind@1402203d0
 * Address:  1402203d0
 * Signature: undefined Unwind@1402203d0(void)
 * Body size: 80 bytes
 */


void Unwind_1402203d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x2c0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x2c0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

