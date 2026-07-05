/**
 * Function: Unwind@140565a00
 * Address:  140565a00
 * Signature: undefined Unwind@140565a00(void)
 * Body size: 113 bytes
 */


void Unwind_140565a00(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x250);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 600) = *(undefined8 *)(param_2 + 0x260);
  return;
}

