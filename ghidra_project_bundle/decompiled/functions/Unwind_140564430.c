/**
 * Function: Unwind@140564430
 * Address:  140564430
 * Signature: undefined Unwind@140564430(void)
 * Body size: 68 bytes
 */


void Unwind_140564430(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x248);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

