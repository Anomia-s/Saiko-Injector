/**
 * Function: Unwind@1407400b0
 * Address:  1407400b0
 * Signature: undefined Unwind@1407400b0(void)
 * Body size: 69 bytes
 */


void Unwind_1407400b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x68) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

