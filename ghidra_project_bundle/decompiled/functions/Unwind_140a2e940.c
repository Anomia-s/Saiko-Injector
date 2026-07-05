/**
 * Function: Unwind@140a2e940
 * Address:  140a2e940
 * Signature: undefined Unwind@140a2e940(void)
 * Body size: 58 bytes
 */


void Unwind_140a2e940(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 0x48) + 0x2c8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140802b20(*(undefined8 *)(param_2 + 0x30));
  return;
}

