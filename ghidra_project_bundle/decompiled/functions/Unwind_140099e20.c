/**
 * Function: Unwind@140099e20
 * Address:  140099e20
 * Signature: undefined Unwind@140099e20(void)
 * Body size: 53 bytes
 */


void Unwind_140099e20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)**(longlong **)(param_2 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

