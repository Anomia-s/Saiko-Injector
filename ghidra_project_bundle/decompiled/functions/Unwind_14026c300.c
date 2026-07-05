/**
 * Function: Unwind@14026c300
 * Address:  14026c300
 * Signature: undefined Unwind@14026c300(void)
 * Body size: 62 bytes
 */


void Unwind_14026c300(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

