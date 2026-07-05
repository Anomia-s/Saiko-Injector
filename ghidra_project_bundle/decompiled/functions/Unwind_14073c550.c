/**
 * Function: Unwind@14073c550
 * Address:  14073c550
 * Signature: undefined Unwind@14073c550(void)
 * Body size: 170 bytes
 */


void Unwind_14073c550(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0xf0);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0xe8);
  }
  else {
    *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0xf0) = 0;
    (**(code **)(*plVar2 + 0x10))();
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0xe8);
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)*puVar1;
  }
  else {
    *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0xe8) = 0;
    (**(code **)(*plVar2 + 0x10))();
    plVar2 = (longlong *)*puVar1;
  }
  if (plVar2 != (longlong *)0x0) {
    *puVar1 = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_1407408f0(*(undefined8 *)(param_2 + 0x30));
  return;
}

