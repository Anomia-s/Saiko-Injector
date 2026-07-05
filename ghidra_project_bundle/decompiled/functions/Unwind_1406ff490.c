/**
 * Function: Unwind@1406ff490
 * Address:  1406ff490
 * Signature: undefined Unwind@1406ff490(void)
 * Body size: 50 bytes
 */


void Unwind_1406ff490(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x28) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

