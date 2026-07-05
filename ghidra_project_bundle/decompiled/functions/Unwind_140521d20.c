/**
 * Function: Unwind@140521d20
 * Address:  140521d20
 * Signature: undefined Unwind@140521d20(void)
 * Body size: 63 bytes
 */


void Unwind_140521d20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x128);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x128) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

