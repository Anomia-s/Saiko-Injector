/**
 * Function: Unwind@1406d9570
 * Address:  1406d9570
 * Signature: undefined Unwind@1406d9570(void)
 * Body size: 73 bytes
 */


void Unwind_1406d9570(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != 0; lVar2 = lVar2 + -0x48) {
    (**(code **)*puVar1)(puVar1,0);
    puVar1 = puVar1 + 9;
  }
  FUN_1406d95c0(param_2 + 0x20);
  return;
}

