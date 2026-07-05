/**
 * Function: Unwind@1406f96a0
 * Address:  1406f96a0
 * Signature: undefined Unwind@1406f96a0(void)
 * Body size: 75 bytes
 */


void Unwind_1406f96a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

