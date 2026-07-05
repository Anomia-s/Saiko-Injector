/**
 * Function: Unwind@1406d9420
 * Address:  1406d9420
 * Signature: undefined Unwind@1406d9420(void)
 * Body size: 67 bytes
 */


void Unwind_1406d9420(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (**(longlong **)(param_2 + 0x20) != 0) {
    FUN_140b68ba8();
    puVar1 = *(undefined8 **)(param_2 + 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}

