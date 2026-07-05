/**
 * Function: Unwind@140563f70
 * Address:  140563f70
 * Signature: undefined Unwind@140563f70(void)
 * Body size: 68 bytes
 */


void Unwind_140563f70(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x240);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

