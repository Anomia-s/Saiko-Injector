/**
 * Function: Unwind@14070eaa0
 * Address:  14070eaa0
 * Signature: undefined Unwind@14070eaa0(void)
 * Body size: 75 bytes
 */


void Unwind_14070eaa0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x2a0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

