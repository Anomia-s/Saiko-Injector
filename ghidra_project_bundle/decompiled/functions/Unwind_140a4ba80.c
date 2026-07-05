/**
 * Function: Unwind@140a4ba80
 * Address:  140a4ba80
 * Signature: undefined Unwind@140a4ba80(void)
 * Body size: 85 bytes
 */


void Unwind_140a4ba80(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puVar4 = (undefined8 *)**(longlong **)(param_2 + 0x38);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FUN_1400017d0(uVar1);
  FUN_140004b30(uVar2);
  FUN_140004b30(uVar3);
  return;
}

