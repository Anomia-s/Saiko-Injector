/**
 * Function: Unwind@140a51b00
 * Address:  140a51b00
 * Signature: undefined Unwind@140a51b00(void)
 * Body size: 62 bytes
 */


void Unwind_140a51b00(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x68);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

