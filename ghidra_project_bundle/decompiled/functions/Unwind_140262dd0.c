/**
 * Function: Unwind@140262dd0
 * Address:  140262dd0
 * Signature: undefined Unwind@140262dd0(void)
 * Body size: 120 bytes
 */


void Unwind_140262dd0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

