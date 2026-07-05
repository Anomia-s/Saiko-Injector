/**
 * Function: Unwind@1405b8b20
 * Address:  1405b8b20
 * Signature: undefined Unwind@1405b8b20(void)
 * Body size: 65 bytes
 */


void Unwind_1405b8b20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

