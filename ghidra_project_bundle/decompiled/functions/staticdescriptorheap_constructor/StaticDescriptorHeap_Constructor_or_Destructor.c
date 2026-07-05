/**
 * Function: StaticDescriptorHeap_Constructor_or_Destructor
 * Address:  14053f450
 * Signature: void __fastcall StaticDescriptorHeap_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 1040 bytes
 */


void nvrhi::d3d12::StaticDescriptorHeap::StaticDescriptorHeap_Constructor_or_Destructor
               (undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar1 = param_1[0x7c];
  if (lVar1 != 0) {
    uVar6 = param_1[0x7e] - lVar1;
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar5)) goto LAB_14053f847;
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar5,uVar6);
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
  }
  puVar2 = (undefined8 *)param_1[0x7a];
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    thunk_FUN_140b68ba8(puVar2,0x18);
    puVar2 = puVar3;
  }
  thunk_FUN_140b68ba8(param_1[0x7a],0x18);
  lVar1 = param_1[0x73];
  if (lVar1 != 0) {
    uVar6 = param_1[0x75] - lVar1;
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar5)) goto LAB_14053f847;
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar5,uVar6);
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
  }
  puVar2 = (undefined8 *)param_1[0x71];
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    thunk_FUN_140b68ba8(puVar2,0x20);
    puVar2 = puVar3;
  }
  thunk_FUN_140b68ba8(param_1[0x71],0x20);
  lVar1 = param_1[0x61];
  if (lVar1 != 0) {
    uVar6 = param_1[99] - lVar1;
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar5)) goto LAB_14053f847;
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar5,uVar6);
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
  }
  param_1[0x48] = &vftable;
  lVar1 = param_1[0x51];
  if (lVar1 != 0) {
    uVar6 = param_1[0x53] - lVar1;
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar5)) goto LAB_14053f847;
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar5,uVar6);
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
  }
  plVar4 = (longlong *)param_1[0x4b];
  if (plVar4 != (longlong *)0x0) {
    param_1[0x4b] = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = (longlong *)param_1[0x4a];
  if (plVar4 != (longlong *)0x0) {
    param_1[0x4a] = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  param_1[0x30] = &vftable;
  lVar1 = param_1[0x39];
  if (lVar1 != 0) {
    uVar6 = param_1[0x3b] - lVar1;
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar5)) goto LAB_14053f847;
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar5,uVar6);
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
  }
  plVar4 = (longlong *)param_1[0x33];
  if (plVar4 != (longlong *)0x0) {
    param_1[0x33] = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = (longlong *)param_1[0x32];
  if (plVar4 != (longlong *)0x0) {
    param_1[0x32] = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  param_1[0x18] = &vftable;
  lVar1 = param_1[0x21];
  if (lVar1 != 0) {
    uVar6 = param_1[0x23] - lVar1;
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar5)) goto LAB_14053f847;
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar5,uVar6);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  plVar4 = (longlong *)param_1[0x1b];
  if (plVar4 != (longlong *)0x0) {
    param_1[0x1b] = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = (longlong *)param_1[0x1a];
  if (plVar4 != (longlong *)0x0) {
    param_1[0x1a] = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = &vftable;
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    uVar6 = param_1[0xb] - lVar1;
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar5)) {
LAB_14053f847:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar5,uVar6);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  plVar4 = (longlong *)param_1[3];
  if (plVar4 != (longlong *)0x0) {
    param_1[3] = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

