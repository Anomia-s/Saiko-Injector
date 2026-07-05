/**
 * Function: Unwind@14072d260
 * Address:  14072d260
 * Signature: undefined Unwind@14072d260(void)
 * Body size: 84 bytes
 */


void Unwind_14072d260(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x80);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x80) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140287a90(*(undefined8 *)(param_2 + 0x28));
  return;
}

