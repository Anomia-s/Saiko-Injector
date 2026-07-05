/**
 * Function: Unwind@1401ddeb0
 * Address:  1401ddeb0
 * Signature: undefined Unwind@1401ddeb0(void)
 * Body size: 66 bytes
 */


void Unwind_1401ddeb0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x90);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140004b30(param_2 + 0x30);
  return;
}

