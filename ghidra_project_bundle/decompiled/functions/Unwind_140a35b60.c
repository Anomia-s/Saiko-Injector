/**
 * Function: Unwind@140a35b60
 * Address:  140a35b60
 * Signature: undefined Unwind@140a35b60(void)
 * Body size: 109 bytes
 */


void Unwind_140a35b60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  puVar2 = *(undefined8 **)(lVar1 + 0x48);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)**(longlong **)(param_2 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

