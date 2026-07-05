/**
 * Function: Unwind@14001e320
 * Address:  14001e320
 * Signature: undefined Unwind@14001e320(void)
 * Body size: 73 bytes
 */


void Unwind_14001e320(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_2 + 0x50) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x50) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}

