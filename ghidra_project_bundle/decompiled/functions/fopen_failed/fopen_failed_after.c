/**
 * Function: fopen_failed_after
 * Address:  140040160
 * Signature: void __fastcall fopen_failed_after(longlong param_1, undefined8 * param_2, char * param_3)
 * Body size: 1656 bytes
 */


void fopen_failed_after(longlong param_1,undefined8 *param_2,char *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  BOOL BVar5;
  FILE *pFVar6;
  HANDLE pvVar7;
  char *pcVar8;
  int *piVar9;
  char ****ppppcVar10;
  size_t _Size;
  ulonglong uVar11;
  QuillError_vftable *local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  QuillError_vftable *local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  char ***local_58 [3];
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x130);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  pcVar8 = param_3;
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    pcVar8 = *(char **)param_3;
  }
  local_70 = param_2[2];
  local_78 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    local_78 = (undefined8 *)*param_2;
  }
  uVar3 = FUN_140b6625c();
  FUN_14003e640(local_58,uVar3,&local_78);
  ppppcVar10 = local_58;
  if (0xf < local_40) {
    ppppcVar10 = (char ****)local_58[0];
  }
  pFVar6 = _fsopen((char *)ppppcVar10,pcVar8,0x40);
  *(FILE **)(param_1 + 0xe8) = pFVar6;
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    ppppcVar10 = (char ****)local_58[0];
    if (0xfff < uVar11) {
      ppppcVar10 = (char ****)local_58[0][-1];
      if (0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)ppppcVar10)))
      goto LAB_140040632;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(ppppcVar10,uVar11);
    pFVar6 = *(FILE **)(param_1 + 0xe8);
  }
  if (pFVar6 != (FILE *)0x0) {
    iVar4 = _fileno(pFVar6);
    pvVar7 = (HANDLE)_get_osfhandle(iVar4);
    BVar5 = SetHandleInformation(pvVar7,1,0);
    pFVar6 = *(FILE **)(param_1 + 0xe8);
    if (BVar5 == 0) {
      fclose(pFVar6);
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    else if (pFVar6 != (FILE *)0x0) goto LAB_1400404fd;
  }
  local_58[0] = (char ***)0xc8;
  FUN_140041730(local_58);
  pcVar8 = param_3;
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    pcVar8 = *(char **)param_3;
  }
  local_70 = param_2[2];
  local_78 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    local_78 = (undefined8 *)*param_2;
  }
  uVar3 = FUN_140b6625c();
  FUN_14003e640(local_58,uVar3,&local_78);
  ppppcVar10 = local_58;
  if (0xf < local_40) {
    ppppcVar10 = (char ****)local_58[0];
  }
  pFVar6 = _fsopen((char *)ppppcVar10,pcVar8,0x40);
  *(FILE **)(param_1 + 0xe8) = pFVar6;
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    ppppcVar10 = (char ****)local_58[0];
    if (0xfff < uVar11) {
      ppppcVar10 = (char ****)local_58[0][-1];
      if (0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)ppppcVar10)))
      goto LAB_140040632;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(ppppcVar10,uVar11);
    pFVar6 = *(FILE **)(param_1 + 0xe8);
  }
  if (pFVar6 != (FILE *)0x0) {
    iVar4 = _fileno(pFVar6);
    pvVar7 = (HANDLE)_get_osfhandle(iVar4);
    BVar5 = SetHandleInformation(pvVar7,1,0);
    pFVar6 = *(FILE **)(param_1 + 0xe8);
    if (BVar5 == 0) {
      fclose(pFVar6);
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    else if (pFVar6 != (FILE *)0x0) goto LAB_1400404fd;
  }
  local_58[0] = (char ***)0xc8;
  FUN_140041730(local_58);
  pcVar8 = param_3;
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    pcVar8 = *(char **)param_3;
  }
  local_70 = param_2[2];
  local_78 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    local_78 = (undefined8 *)*param_2;
  }
  uVar3 = FUN_140b6625c();
  FUN_14003e640(local_58,uVar3,&local_78);
  ppppcVar10 = local_58;
  if (0xf < local_40) {
    ppppcVar10 = (char ****)local_58[0];
  }
  pFVar6 = _fsopen((char *)ppppcVar10,pcVar8,0x40);
  *(FILE **)(param_1 + 0xe8) = pFVar6;
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    ppppcVar10 = (char ****)local_58[0];
    if (0xfff < uVar11) {
      ppppcVar10 = (char ****)local_58[0][-1];
      if (0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)ppppcVar10))) {
LAB_140040632:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(ppppcVar10,uVar11);
    pFVar6 = *(FILE **)(param_1 + 0xe8);
  }
  if (pFVar6 != (FILE *)0x0) {
    iVar4 = _fileno(pFVar6);
    pvVar7 = (HANDLE)_get_osfhandle(iVar4);
    BVar5 = SetHandleInformation(pvVar7,1,0);
    pFVar6 = *(FILE **)(param_1 + 0xe8);
    if (BVar5 == 0) {
      fclose(pFVar6);
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    else if (pFVar6 != (FILE *)0x0) {
LAB_1400404fd:
      _Size = *(size_t *)(param_1 + 0x280);
      if (_Size != 0) {
        pcVar8 = (char *)thunk_FUN_140b65d30(_Size);
        memset(pcVar8,0,_Size);
        lVar2 = *(longlong *)(param_1 + 0x318);
        *(char **)(param_1 + 0x318) = pcVar8;
        if (lVar2 != 0) {
          thunk_FUN_140b68ba8();
          pFVar6 = *(FILE **)(param_1 + 0xe8);
          _Size = *(size_t *)(param_1 + 0x280);
          pcVar8 = *(char **)(param_1 + 0x318);
        }
        iVar4 = setvbuf(pFVar6,pcVar8,0,_Size);
        if (iVar4 != 0) {
          piVar9 = _errno();
          pcVar8 = strerror(*piVar9);
          FUN_140004940(local_58,"setvbuf failed error: ");
          FUN_140008840(local_98,local_58,pcVar8);
          local_228 = 0;
          uStack_220 = 0;
          local_230 = &quill::v11::QuillError::vftable;
          uStack_210 = uStack_90;
          local_208 = local_88;
          uStack_200 = uStack_80;
          local_88 = 0;
          uStack_80 = 0xf;
          local_98[0] = 0;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_230,(ThrowInfo *)&DAT_14140fa50);
        }
      }
      plVar1 = *(longlong **)(param_1 + 0x170);
      if (plVar1 != (longlong *)0x0) {
        local_58[0] = *(char ****)(param_1 + 0xe8);
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2,local_58);
      }
      return;
    }
  }
  piVar9 = _errno();
  pcVar8 = strerror(*piVar9);
  piVar9 = _errno();
  FUN_140007930(local_b8,*piVar9);
  FUN_14003dd10(param_2,local_178);
  FUN_140007930(local_118,3);
  FUN_140004940(local_f8,"fopen failed after ");
  FUN_140007770(local_138);
  FUN_140008840(local_158,local_138," attempts, path: ");
  FUN_140007770(local_198);
  FUN_140008840(local_1b8,local_198," mode: ");
  FUN_140028d40(local_1d8,local_1b8,param_3);
  FUN_140008840(local_1f8,local_1d8," errno: ");
  FUN_140007770(&local_78);
  FUN_140008840(local_58,&local_78," error: ");
  FUN_140008840(local_d8,local_58,pcVar8);
  local_260 = 0;
  uStack_258 = 0;
  local_268 = &quill::v11::QuillError::vftable;
  uStack_248 = uStack_d0;
  local_240 = local_c8;
  uStack_238 = uStack_c0;
  local_c8 = 0;
  uStack_c0 = 0xf;
  local_d8[0] = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_268,(ThrowInfo *)&DAT_14140fa50);
}

