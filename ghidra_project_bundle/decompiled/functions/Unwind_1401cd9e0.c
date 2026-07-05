/**
 * Function: Unwind@1401cd9e0
 * Address:  1401cd9e0
 * Signature: undefined Unwind@1401cd9e0(void)
 * Body size: 65 bytes
 */


void Unwind_1401cd9e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

