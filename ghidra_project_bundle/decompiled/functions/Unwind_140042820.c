/**
 * Function: Unwind@140042820
 * Address:  140042820
 * Signature: undefined Unwind@140042820(void)
 * Body size: 65 bytes
 */


void Unwind_140042820(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)**(longlong **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

