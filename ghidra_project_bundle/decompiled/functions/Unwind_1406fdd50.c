/**
 * Function: Unwind@1406fdd50
 * Address:  1406fdd50
 * Signature: undefined Unwind@1406fdd50(void)
 * Body size: 113 bytes
 */


void Unwind_1406fdd50(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  lVar2 = *(longlong *)(param_2 + 0x40);
  plVar3 = *(longlong **)(lVar2 + 0x90);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(lVar2 + 0x90) = 0;
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_140196f50(uVar1);
  thunk_FUN_140b68ba8(lVar2,0x120);
  return;
}

