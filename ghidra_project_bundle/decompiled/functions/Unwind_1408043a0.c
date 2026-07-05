/**
 * Function: Unwind@1408043a0
 * Address:  1408043a0
 * Signature: undefined Unwind@1408043a0(void)
 * Body size: 400 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void Unwind_1408043a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  puVar2 = *(undefined8 **)(lVar1 + 0x2c8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x288);
  }
  else {
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = *(undefined8 **)(lVar1 + 0x288);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)**(longlong **)(param_2 + 0x38);
  }
  else {
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = (undefined8 *)**(longlong **)(param_2 + 0x38);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x270);
  }
  else {
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = *(undefined8 **)(lVar1 + 0x270);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x268);
  }
  else {
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = *(undefined8 **)(lVar1 + 0x268);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x260);
  }
  else {
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = *(undefined8 **)(lVar1 + 0x260);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(lVar1 + 600);
  }
  else {
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = *(undefined8 **)(lVar1 + 600);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x250);
  }
  else {
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = *(undefined8 **)(lVar1 + 0x250);
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1400017d0(*(undefined8 *)(param_2 + 0x30));
  FUN_140004b30(*(undefined8 *)(param_2 + 0x28));
  puVar2 = *(undefined8 **)(lVar1 + 0x1f0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

