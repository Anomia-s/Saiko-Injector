/**
 * Function: Unwind@14059c240
 * Address:  14059c240
 * Signature: undefined Unwind@14059c240(void)
 * Body size: 81 bytes
 */


void Unwind_14059c240(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

