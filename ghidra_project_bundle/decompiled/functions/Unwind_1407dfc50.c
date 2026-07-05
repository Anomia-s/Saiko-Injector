/**
 * Function: Unwind@1407dfc50
 * Address:  1407dfc50
 * Signature: undefined Unwind@1407dfc50(void)
 * Body size: 65 bytes
 */


void Unwind_1407dfc50(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

