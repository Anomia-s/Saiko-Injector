/**
 * Function: Unwind@140263330
 * Address:  140263330
 * Signature: undefined Unwind@140263330(void)
 * Body size: 120 bytes
 */


void Unwind_140263330(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

