/**
 * Function: Unwind@140566430
 * Address:  140566430
 * Signature: undefined Unwind@140566430(void)
 * Body size: 123 bytes
 */


void Unwind_140566430(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x230);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

