/**
 * Function: ShaderTable_Constructor_or_Destructor
 * Address:  140740560
 * Signature: void __fastcall ShaderTable_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 677 bytes
 */


void nvrhi::d3d12::ShaderTable::ShaderTable_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_1 = &vftable;
  uVar4 = param_1[0x25];
  if (0xf < uVar4) {
    lVar5 = param_1[0x22];
    uVar2 = uVar4 + 1;
    lVar3 = lVar5;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar5 + -8);
      if (0x1f < (ulonglong)((lVar5 + -8) - lVar3)) goto LAB_14074080d;
      uVar2 = uVar4 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar3,uVar2);
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0xf;
  *(undefined1 *)(param_1 + 0x22) = 0;
  plVar1 = (longlong *)param_1[0xf];
  if (plVar1 != (longlong *)0x0) {
    param_1[0xf] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  lVar5 = param_1[0xb];
  if (lVar5 != 0) {
    lVar3 = param_1[0xc];
    if (lVar5 == lVar3) {
      uVar4 = param_1[0xd] - lVar5;
    }
    else {
      do {
        plVar1 = *(longlong **)(lVar5 + 8);
        if (plVar1 != (longlong *)0x0) {
          *(undefined8 *)(lVar5 + 8) = 0;
          (**(code **)(*plVar1 + 0x10))();
        }
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != lVar3);
      lVar5 = param_1[0xb];
      uVar4 = param_1[0xd] - lVar5;
    }
    if (0xfff < uVar4) {
      if (0x1f < (ulonglong)((lVar5 + -8) - *(longlong *)(lVar5 + -8))) goto LAB_14074080d;
      uVar4 = uVar4 + 0x27;
      lVar5 = *(longlong *)(lVar5 + -8);
    }
    thunk_FUN_140b68ba8(lVar5,uVar4);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  lVar5 = param_1[8];
  if (lVar5 != 0) {
    lVar3 = param_1[9];
    if (lVar5 == lVar3) {
      uVar4 = param_1[10] - lVar5;
    }
    else {
      do {
        plVar1 = *(longlong **)(lVar5 + 8);
        if (plVar1 != (longlong *)0x0) {
          *(undefined8 *)(lVar5 + 8) = 0;
          (**(code **)(*plVar1 + 0x10))();
        }
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != lVar3);
      lVar5 = param_1[8];
      uVar4 = param_1[10] - lVar5;
    }
    if (0xfff < uVar4) {
      if (0x1f < (ulonglong)((lVar5 + -8) - *(longlong *)(lVar5 + -8))) goto LAB_14074080d;
      uVar4 = uVar4 + 0x27;
      lVar5 = *(longlong *)(lVar5 + -8);
    }
    thunk_FUN_140b68ba8(lVar5,uVar4);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar5 = param_1[5];
  if (lVar5 != 0) {
    lVar3 = param_1[6];
    if (lVar5 == lVar3) {
      uVar4 = param_1[7] - lVar5;
    }
    else {
      do {
        plVar1 = *(longlong **)(lVar5 + 8);
        if (plVar1 != (longlong *)0x0) {
          *(undefined8 *)(lVar5 + 8) = 0;
          (**(code **)(*plVar1 + 0x10))();
        }
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != lVar3);
      lVar5 = param_1[5];
      uVar4 = param_1[7] - lVar5;
    }
    if (0xfff < uVar4) {
      if (0x1f < (ulonglong)((lVar5 + -8) - *(longlong *)(lVar5 + -8))) {
LAB_14074080d:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar4 + 0x27;
      lVar5 = *(longlong *)(lVar5 + -8);
    }
    thunk_FUN_140b68ba8(lVar5,uVar4);
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    param_1[4] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

