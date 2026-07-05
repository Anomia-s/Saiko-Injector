/**
 * Function: Unwind@140565b60
 * Address:  140565b60
 * Signature: undefined Unwind@140565b60(void)
 * Body size: 99 bytes
 */


void Unwind_140565b60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 600);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

