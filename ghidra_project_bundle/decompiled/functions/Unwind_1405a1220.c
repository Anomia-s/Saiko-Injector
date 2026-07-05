/**
 * Function: Unwind@1405a1220
 * Address:  1405a1220
 * Signature: undefined Unwind@1405a1220(void)
 * Body size: 69 bytes
 */


void Unwind_1405a1220(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x40);
  return;
}

