/**
 * Function: _Node_back_Constructor_or_Destructor
 * Address:  1401d3c70
 * Signature: void __fastcall _Node_back_Constructor_or_Destructor(longlong param_1, undefined4 param_2)
 * Body size: 100 bytes
 */


void std::_Node_back::_Node_back_Constructor_or_Destructor(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)FUN_140b65d30(0x28);
  *(undefined4 *)(puVar2 + 1) = 0xf;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  *puVar2 = &vftable;
  *(undefined4 *)(puVar2 + 4) = param_2;
  lVar3 = *(longlong *)(param_1 + 8);
  puVar2[3] = lVar3;
  lVar1 = *(longlong *)(lVar3 + 0x10);
  if (lVar1 != 0) {
    puVar2[2] = lVar1;
    *(undefined8 **)(lVar1 + 0x18) = puVar2;
    lVar3 = *(longlong *)(param_1 + 8);
  }
  *(undefined8 **)(lVar3 + 0x10) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2;
  return;
}

