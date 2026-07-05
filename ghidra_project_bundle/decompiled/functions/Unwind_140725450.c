/**
 * Function: Unwind@140725450
 * Address:  140725450
 * Signature: undefined Unwind@140725450(void)
 * Body size: 73 bytes
 */


void Unwind_140725450(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}

