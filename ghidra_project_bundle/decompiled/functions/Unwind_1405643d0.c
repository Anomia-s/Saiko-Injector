/**
 * Function: Unwind@1405643d0
 * Address:  1405643d0
 * Signature: undefined Unwind@1405643d0(void)
 * Body size: 81 bytes
 */


void Unwind_1405643d0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x250);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x248) = *(undefined8 *)(param_2 + 600);
  return;
}

