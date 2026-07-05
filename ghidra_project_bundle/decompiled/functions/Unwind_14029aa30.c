/**
 * Function: Unwind@14029aa30
 * Address:  14029aa30
 * Signature: undefined Unwind@14029aa30(void)
 * Body size: 227 bytes
 */


void Unwind_14029aa30(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x158);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)(param_2 + 0x148);
  return;
}

