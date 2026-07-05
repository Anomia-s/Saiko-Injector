/**
 * Function: Unwind@140563f10
 * Address:  140563f10
 * Signature: undefined Unwind@140563f10(void)
 * Body size: 81 bytes
 */


void Unwind_140563f10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x248);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x240) = *(undefined8 *)(param_2 + 0x250);
  return;
}

