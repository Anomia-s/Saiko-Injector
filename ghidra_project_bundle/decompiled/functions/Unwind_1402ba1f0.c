/**
 * Function: Unwind@1402ba1f0
 * Address:  1402ba1f0
 * Signature: undefined Unwind@1402ba1f0(void)
 * Body size: 72 bytes
 */


void Unwind_1402ba1f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x98);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x70) = 0;
  return;
}

