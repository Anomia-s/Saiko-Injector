/**
 * Function: BindingLayout_Constructor_or_Destructor
 * Address:  140748880
 * Signature: void __fastcall BindingLayout_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 359 bytes
 */


void nvrhi::d3d12::BindingLayout::BindingLayout_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = &vftable;
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    uVar3 = param_1[0x14] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) goto LAB_1407489ce;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    uVar3 = param_1[0x11] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) goto LAB_1407489ce;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    uVar3 = param_1[0xe] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) goto LAB_1407489ce;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    uVar3 = param_1[6] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) {
LAB_1407489ce:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return;
}

