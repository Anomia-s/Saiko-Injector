/**
 * Function: Unwind@1405663a0
 * Address:  1405663a0
 * Signature: undefined Unwind@1405663a0(void)
 * Body size: 137 bytes
 */


void Unwind_1405663a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x238);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x230) = *(undefined8 *)(param_2 + 0x240);
  return;
}

