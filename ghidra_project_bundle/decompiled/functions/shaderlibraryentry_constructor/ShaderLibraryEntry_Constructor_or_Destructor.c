/**
 * Function: ShaderLibraryEntry_Constructor_or_Destructor
 * Address:  14072d660
 * Signature: void __fastcall ShaderLibraryEntry_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 251 bytes
 */


void nvrhi::d3d12::ShaderLibraryEntry::ShaderLibraryEntry_Constructor_or_Destructor
               (undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_1 = &vftable;
  plVar1 = (longlong *)param_1[0x10];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x10] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  uVar2 = param_1[10];
  if (0xf < uVar2) {
    lVar3 = param_1[7];
    uVar4 = uVar2 + 1;
    lVar5 = lVar3;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar5)) goto LAB_14072d742;
      uVar4 = uVar2 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar5,uVar4);
  }
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar2 = param_1[6];
  if (0xf < uVar2) {
    lVar3 = param_1[3];
    uVar4 = uVar2 + 1;
    lVar5 = lVar3;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar5)) {
LAB_14072d742:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar2 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar5,uVar4);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

