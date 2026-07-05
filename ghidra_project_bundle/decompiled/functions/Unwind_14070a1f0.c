/**
 * Function: Unwind@14070a1f0
 * Address:  14070a1f0
 * Signature: undefined Unwind@14070a1f0(void)
 * Body size: 78 bytes
 */


void Unwind_14070a1f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

