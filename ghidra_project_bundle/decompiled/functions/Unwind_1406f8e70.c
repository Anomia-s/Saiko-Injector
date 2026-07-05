/**
 * Function: Unwind@1406f8e70
 * Address:  1406f8e70
 * Signature: undefined Unwind@1406f8e70(void)
 * Body size: 149 bytes
 */


void Unwind_1406f8e70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0xa0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

