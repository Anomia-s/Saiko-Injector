/**
 * Function: Unwind@1402632b0
 * Address:  1402632b0
 * Signature: undefined Unwind@1402632b0(void)
 * Body size: 128 bytes
 */


void Unwind_1402632b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x38);
  return;
}

