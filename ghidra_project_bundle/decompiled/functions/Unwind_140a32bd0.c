/**
 * Function: Unwind@140a32bd0
 * Address:  140a32bd0
 * Signature: undefined Unwind@140a32bd0(void)
 * Body size: 71 bytes
 */


void Unwind_140a32bd0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != 0; lVar2 = lVar2 + -0x38) {
    (**(code **)*puVar1)(puVar1,0);
    puVar1 = puVar1 + 7;
  }
  return;
}

