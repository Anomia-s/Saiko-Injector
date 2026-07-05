/**
 * Function: StagingTexture_Constructor_or_Destructor
 * Address:  140727c40
 * Signature: void __fastcall StagingTexture_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 288 bytes
 */


void nvrhi::d3d12::StagingTexture::StagingTexture_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *param_1 = &vftable;
  plVar1 = (longlong *)param_1[0x1c];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x1c] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  lVar2 = param_1[0x19];
  if (lVar2 != 0) {
    uVar5 = param_1[0x1b] - lVar2;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_140727d47;
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar4,uVar5);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  plVar1 = (longlong *)param_1[0x17];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x17] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  uVar5 = param_1[9];
  if (0xf < uVar5) {
    lVar2 = param_1[6];
    uVar3 = uVar5 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_140727d47:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar5 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

