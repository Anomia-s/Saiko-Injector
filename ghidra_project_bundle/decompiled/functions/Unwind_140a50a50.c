/**
 * Function: Unwind@140a50a50
 * Address:  140a50a50
 * Signature: undefined Unwind@140a50a50(void)
 * Body size: 65 bytes
 */


void Unwind_140a50a50(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x78);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

