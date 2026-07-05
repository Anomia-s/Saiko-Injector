/**
 * Function: Unwind@1401a5430
 * Address:  1401a5430
 * Signature: undefined Unwind@1401a5430(void)
 * Body size: 67 bytes
 */


void Unwind_1401a5430(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x108);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x108) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

