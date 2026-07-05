/**
 * Function: Unwind@140708320
 * Address:  140708320
 * Signature: undefined Unwind@140708320(void)
 * Body size: 70 bytes
 */


void Unwind_140708320(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

