/**
 * Function: Unwind@14059dd00
 * Address:  14059dd00
 * Signature: undefined Unwind@14059dd00(void)
 * Body size: 62 bytes
 */


void Unwind_14059dd00(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

