/**
 * Function: Unwind@140262d50
 * Address:  140262d50
 * Signature: undefined Unwind@140262d50(void)
 * Body size: 128 bytes
 */


void Unwind_140262d50(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x38);
  return;
}

