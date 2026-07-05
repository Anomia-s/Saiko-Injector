/**
 * Function: Unwind@140a30b90
 * Address:  140a30b90
 * Signature: undefined Unwind@140a30b90(void)
 * Body size: 98 bytes
 */


void Unwind_140a30b90(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x78);
  for (puVar2 = *(undefined8 **)(param_2 + 0x80); puVar2 != puVar1; puVar2 = puVar2 + 7) {
    (**(code **)*puVar2)(puVar2,0);
  }
  FUN_140a32570(param_2 + 0x28);
  return;
}

