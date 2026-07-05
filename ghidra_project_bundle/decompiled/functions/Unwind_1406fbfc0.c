/**
 * Function: Unwind@1406fbfc0
 * Address:  1406fbfc0
 * Signature: undefined Unwind@1406fbfc0(void)
 * Body size: 78 bytes
 */


void Unwind_1406fbfc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0xd0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

