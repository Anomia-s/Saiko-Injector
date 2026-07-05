/**
 * Function: OpacityMicromap_Constructor_or_Destructor
 * Address:  140710750
 * Signature: void __fastcall OpacityMicromap_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 272 bytes
 */


void nvrhi::vulkan::OpacityMicromap::OpacityMicromap_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *param_1 = &vftable;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    uVar5 = param_1[0xe] - lVar1;
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar4)) goto LAB_140710847;
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar4,uVar5);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  uVar5 = param_1[10];
  if (0xf < uVar5) {
    lVar1 = param_1[7];
    uVar3 = uVar5 + 1;
    lVar4 = lVar1;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar4)) {
LAB_140710847:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar5 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  if (param_1[6] != 0) {
    (**(code **)(param_1[5] + 0x1310))(param_1[3],param_1[6],param_1[4]);
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

