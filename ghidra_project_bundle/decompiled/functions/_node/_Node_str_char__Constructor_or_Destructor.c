/**
 * Function: _Node_str<char>_Constructor_or_Destructor
 * Address:  1401d38f0
 * Signature: void __fastcall _Node_str<char>_Constructor_or_Destructor(longlong param_1, undefined4 param_2)
 * Body size: 259 bytes
 */


void std::_Node_str<char>::_Node_str<char>_Constructor_or_Destructor
               (longlong param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  puVar8 = *(undefined8 **)(param_1 + 8);
  if ((*(int *)(puVar8 + 1) == 6) && ((*(byte *)((longlong)puVar8 + 0xc) & 4) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x11);
  }
  else {
    puVar5 = (undefined8 *)FUN_140b65d30(0x30);
    *(undefined4 *)(puVar5 + 1) = 6;
    *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
    *puVar5 = &vftable;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = puVar8;
    lVar3 = puVar8[2];
    if (lVar3 != 0) {
      puVar5[2] = lVar3;
      *(undefined8 **)(lVar3 + 0x18) = puVar5;
      puVar8 = *(undefined8 **)(param_1 + 8);
    }
    puVar8[2] = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5;
    bVar1 = *(byte *)(param_1 + 0x11);
    puVar8 = puVar5;
  }
  if ((bVar1 & 1) != 0) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    param_2 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
    puVar8 = *(undefined8 **)(param_1 + 8);
  }
  uVar2 = *(uint *)(puVar8 + 4);
  uVar7 = *(uint *)((longlong)puVar8 + 0x24);
  if (uVar7 < uVar2) {
    pvVar6 = (void *)puVar8[5];
  }
  else {
    uVar7 = 0x10;
    if (0x10 < uVar2 >> 1) {
      uVar7 = uVar2 >> 1;
    }
    uVar9 = 0xffffffff;
    if (!CARRY4(uVar7,uVar2)) {
      uVar9 = uVar7 + uVar2;
    }
    if ((uVar9 == uVar2) ||
       (pvVar6 = realloc((void *)puVar8[5],(ulonglong)uVar9), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::_Xregex_error(9);
    }
    puVar8[5] = pvVar6;
    *(uint *)(puVar8 + 4) = uVar9;
    uVar7 = *(uint *)((longlong)puVar8 + 0x24);
  }
  *(uint *)((longlong)puVar8 + 0x24) = uVar7 + 1;
  *(char *)((longlong)pvVar6 + (ulonglong)uVar7) = (char)param_2;
  return;
}

