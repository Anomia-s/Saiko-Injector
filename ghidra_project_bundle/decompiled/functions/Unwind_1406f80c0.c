/**
 * Function: Unwind@1406f80c0
 * Address:  1406f80c0
 * Signature: undefined Unwind@1406f80c0(void)
 * Body size: 83 bytes
 */


void Unwind_1406f80c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x118);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x118) = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_140198540(uVar1);
  return;
}

