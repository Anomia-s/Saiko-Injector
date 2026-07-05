/**
 * Function: Unwind@14026c2b0
 * Address:  14026c2b0
 * Signature: undefined Unwind@14026c2b0(void)
 * Body size: 69 bytes
 */


void Unwind_14026c2b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x40);
  return;
}

