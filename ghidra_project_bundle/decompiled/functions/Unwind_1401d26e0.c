/**
 * Function: Unwind@1401d26e0
 * Address:  1401d26e0
 * Signature: undefined Unwind@1401d26e0(void)
 * Body size: 80 bytes
 */


void Unwind_1401d26e0(undefined8 param_1,longlong param_2)

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

