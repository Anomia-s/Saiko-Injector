/**
 * Function: Unwind@1406f37b0
 * Address:  1406f37b0
 * Signature: undefined Unwind@1406f37b0(void)
 * Body size: 48 bytes
 */


void Unwind_1406f37b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

