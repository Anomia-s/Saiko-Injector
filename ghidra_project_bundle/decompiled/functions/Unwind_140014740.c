/**
 * Function: Unwind@140014740
 * Address:  140014740
 * Signature: undefined Unwind@140014740(void)
 * Body size: 64 bytes
 */


void Unwind_140014740(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_2 + 0xb8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0xb8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}

