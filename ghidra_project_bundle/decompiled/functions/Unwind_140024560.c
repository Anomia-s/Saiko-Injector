/**
 * Function: Unwind@140024560
 * Address:  140024560
 * Signature: undefined Unwind@140024560(void)
 * Body size: 76 bytes
 */


void Unwind_140024560(undefined8 param_1,longlong param_2)

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

