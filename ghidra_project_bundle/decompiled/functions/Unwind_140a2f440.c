/**
 * Function: Unwind@140a2f440
 * Address:  140a2f440
 * Signature: undefined Unwind@140a2f440(void)
 * Body size: 89 bytes
 */


void Unwind_140a2f440(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x58);
  for (puVar2 = *(undefined8 **)(param_2 + 0x60); puVar2 != puVar1; puVar2 = puVar2 + 7) {
    (**(code **)*puVar2)(puVar2,0);
  }
  FUN_140a32570(param_2 + 0x20);
  return;
}

