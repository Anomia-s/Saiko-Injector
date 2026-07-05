/**
 * Function: Unwind@140220f90
 * Address:  140220f90
 * Signature: undefined Unwind@140220f90(void)
 * Body size: 112 bytes
 */


void Unwind_140220f90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x118) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

