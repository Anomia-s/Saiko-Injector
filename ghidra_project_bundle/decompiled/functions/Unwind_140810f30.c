/**
 * Function: Unwind@140810f30
 * Address:  140810f30
 * Signature: undefined Unwind@140810f30(void)
 * Body size: 80 bytes
 */


void Unwind_140810f30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  puVar3 = *(undefined8 **)(lVar1 + 0x40);
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar3[2];
    puVar3[2] = 0;
    (**(code **)*puVar3)(puVar3,1);
    puVar3 = puVar2;
  }
  *(undefined8 *)(lVar1 + 0x40) = 0;
  return;
}

