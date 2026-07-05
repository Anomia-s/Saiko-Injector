/**
 * Function: Texture_Constructor_or_Destructor
 * Address:  140721990
 * Signature: void __fastcall Texture_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 1173 bytes
 */


void nvrhi::d3d12::Texture::Texture_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint *puVar10;
  
  *param_1 = &vftable;
  plVar1 = (longlong *)param_1[0x20];
  plVar9 = plVar1;
  while (plVar9 = (longlong *)*plVar9, plVar9 != plVar1) {
    StaticDescriptorHeap::vfunction5
              ((StaticDescriptorHeap *)param_1[0x1e],(ulonglong)*(uint *)((longlong)plVar9 + 0x24));
  }
  plVar1 = (longlong *)param_1[0x28];
  plVar9 = plVar1;
  while (plVar9 = (longlong *)*plVar9, plVar9 != plVar1) {
    StaticDescriptorHeap::vfunction5
              ((StaticDescriptorHeap *)(param_1[0x1e] + 0xc0),
               (ulonglong)*(uint *)((longlong)plVar9 + 0x24));
  }
  puVar2 = (uint *)param_1[0x40];
  for (puVar10 = (uint *)param_1[0x3f]; puVar10 != puVar2; puVar10 = puVar10 + 1) {
    StaticDescriptorHeap::vfunction5
              ((StaticDescriptorHeap *)(param_1[0x1e] + 0x180),(ulonglong)*puVar10);
  }
  plVar1 = (longlong *)param_1[0x30];
  plVar9 = plVar1;
  while (plVar9 = (longlong *)*plVar9, plVar9 != plVar1) {
    StaticDescriptorHeap::vfunction5
              ((StaticDescriptorHeap *)(param_1[0x1e] + 0x180),
               (ulonglong)*(uint *)((longlong)plVar9 + 0x24));
  }
  plVar1 = (longlong *)param_1[0x38];
  plVar9 = plVar1;
  while (plVar9 = (longlong *)*plVar9, plVar9 != plVar1) {
    StaticDescriptorHeap::vfunction5
              ((StaticDescriptorHeap *)(param_1[0x1e] + 0x180),
               (ulonglong)*(uint *)((longlong)plVar9 + 0x24));
  }
  lVar3 = param_1[0x3f];
  if (lVar3 != 0) {
    uVar8 = param_1[0x41] - lVar3;
    lVar7 = lVar3;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar7)) goto LAB_140721e0c;
      uVar8 = uVar8 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar7,uVar8);
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
  }
  lVar3 = param_1[0x3a];
  if (lVar3 != 0) {
    uVar8 = param_1[0x3c] - lVar3;
    lVar7 = lVar3;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar7)) goto LAB_140721e0c;
      uVar8 = uVar8 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar7,uVar8);
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x38];
  *(undefined8 *)puVar4[1] = 0;
  puVar4 = (undefined8 *)*puVar4;
  while (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x28);
    puVar4 = puVar5;
  }
  thunk_FUN_140b68ba8(param_1[0x38],0x28);
  lVar3 = param_1[0x32];
  if (lVar3 != 0) {
    uVar8 = param_1[0x34] - lVar3;
    lVar7 = lVar3;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar7)) goto LAB_140721e0c;
      uVar8 = uVar8 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar7,uVar8);
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x30];
  *(undefined8 *)puVar4[1] = 0;
  puVar4 = (undefined8 *)*puVar4;
  while (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x28);
    puVar4 = puVar5;
  }
  thunk_FUN_140b68ba8(param_1[0x30],0x28);
  lVar3 = param_1[0x2a];
  if (lVar3 != 0) {
    uVar8 = param_1[0x2c] - lVar3;
    lVar7 = lVar3;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar7)) goto LAB_140721e0c;
      uVar8 = uVar8 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar7,uVar8);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x28];
  *(undefined8 *)puVar4[1] = 0;
  puVar4 = (undefined8 *)*puVar4;
  while (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x28);
    puVar4 = puVar5;
  }
  thunk_FUN_140b68ba8(param_1[0x28],0x28);
  lVar3 = param_1[0x22];
  if (lVar3 != 0) {
    uVar8 = param_1[0x24] - lVar3;
    lVar7 = lVar3;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar7)) goto LAB_140721e0c;
      uVar8 = uVar8 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar7,uVar8);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x20];
  *(undefined8 *)puVar4[1] = 0;
  puVar4 = (undefined8 *)*puVar4;
  while (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x28);
    puVar4 = puVar5;
  }
  thunk_FUN_140b68ba8(param_1[0x20],0x28);
  plVar1 = (longlong *)param_1[0x1c];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x1c] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x19];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x19] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  uVar8 = param_1[0xb];
  if (0xf < uVar8) {
    lVar3 = param_1[8];
    uVar6 = uVar8 + 1;
    lVar7 = lVar3;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar7)) {
LAB_140721e0c:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = uVar8 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

