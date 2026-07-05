/**
 * Function: Unwind@14080fc90
 * Address:  14080fc90
 * Signature: undefined Unwind@14080fc90(void)
 * Body size: 92 bytes
 */


void Unwind_14080fc90(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_2 + 0x4d8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x4d8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}

