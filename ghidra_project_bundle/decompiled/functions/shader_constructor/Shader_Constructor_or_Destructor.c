/**
 * Function: Shader_Constructor_or_Destructor
 * Address:  14072d310
 * Signature: void __fastcall Shader_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 294 bytes
 */


void nvrhi::d3d12::Shader::Shader_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = &vftable;
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    uVar4 = param_1[0x12] - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_14072d41d;
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar3,uVar4);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  uVar4 = param_1[10];
  if (0xf < uVar4) {
    lVar1 = param_1[7];
    uVar2 = uVar4 + 1;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) goto LAB_14072d41d;
      uVar2 = uVar4 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar3,uVar2);
  }
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar4 = param_1[6];
  if (0xf < uVar4) {
    lVar1 = param_1[3];
    uVar2 = uVar4 + 1;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) {
LAB_14072d41d:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = uVar4 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar3,uVar2);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

