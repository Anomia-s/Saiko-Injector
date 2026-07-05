/**
 * Function: Unwind@140563a90
 * Address:  140563a90
 * Signature: undefined Unwind@140563a90(void)
 * Body size: 87 bytes
 */


void Unwind_140563a90(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x240);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

