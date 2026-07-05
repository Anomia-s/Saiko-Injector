/**
 * Function: Unwind@1406fda50
 * Address:  1406fda50
 * Signature: undefined Unwind@1406fda50(void)
 * Body size: 130 bytes
 */


void Unwind_1406fda50(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1b8);
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x1e0) + 0x90);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x1e0) + 0x90) = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_140196f50(uVar1);
  thunk_FUN_140b68ba8(*(undefined8 *)(param_2 + 0x1e0),0x120);
  return;
}

