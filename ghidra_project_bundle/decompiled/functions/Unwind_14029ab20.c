/**
 * Function: Unwind@14029ab20
 * Address:  14029ab20
 * Signature: undefined Unwind@14029ab20(void)
 * Body size: 227 bytes
 */


void Unwind_14029ab20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x158);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)(param_2 + 0x148);
  return;
}

