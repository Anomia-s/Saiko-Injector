/**
 * Function: commit_file_not_open
 * Address:  14057fa60
 * Signature: undefined commit_file_not_open(void)
 * Body size: 1228 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 commit_file_not_open(LPCWSTR param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  LPCWSTR *****ppppppWVar3;
  BOOL BVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  LPCWSTR ******pppppppWVar8;
  LPCWSTR *****ppppppWVar9;
  ulonglong uVar10;
  LPCWSTR ******pppppppWVar11;
  LPCWSTR ******pppppppWVar12;
  size_t sVar13;
  LPCWSTR pWVar14;
  char *_Size;
  LPCWSTR ******local_88 [2];
  longlong local_78;
  ulonglong uStack_70;
  LPCWSTR ******local_68;
  LPCWSTR *****ppppppWStack_60;
  LPCWSTR *****local_58;
  LPCWSTR *****ppppppWStack_50;
  undefined8 local_40;
  undefined8 uVar7;
  
  local_40 = 0xfffffffffffffffe;
  if (*(HANDLE *)(param_1 + 0x38) == (HANDLE)0x0) {
    ppppppWStack_60 = (LPCWSTR *****)0x0;
    pppppppWVar8 = (LPCWSTR ******)FUN_140b65d30(0x20);
    local_58 = (LPCWSTR *****)0x15;
    ppppppWStack_50 = (LPCWSTR *****)0x1f;
    *(undefined4 *)pppppppWVar8 = 0x6d6d6f63;
    *(undefined4 *)((longlong)pppppppWVar8 + 4) = 0x203a7469;
    *(undefined4 *)(pppppppWVar8 + 1) = 0x656c6966;
    *(undefined4 *)((longlong)pppppppWVar8 + 0xc) = 0x746f6e20;
    builtin_strncpy((char *)((longlong)pppppppWVar8 + 0xd),"not open",8);
    *(char *)((longlong)pppppppWVar8 + 0x15) = '\0';
    local_68 = pppppppWVar8;
    if ((LPCWSTR *******)(param_1 + 0x24) != &local_68) {
      if (*(ulonglong *)(param_1 + 0x30) < 0x15) {
        FUN_1400069b0(param_1 + 0x24,0x15);
      }
      else {
        puVar2 = *(undefined8 **)(param_1 + 0x24);
        param_1[0x2c] = L'\x15';
        param_1[0x2d] = L'\0';
        param_1[0x2e] = L'\0';
        param_1[0x2f] = L'\0';
        ppppppWVar9 = *pppppppWVar8;
        ppppppWVar3 = pppppppWVar8[1];
        uVar1 = *(undefined4 *)(pppppppWVar8 + 2);
        *(char *)((longlong)puVar2 + 0x14) = *(char *)((longlong)pppppppWVar8 + 0x14);
        *(undefined4 *)(puVar2 + 2) = uVar1;
        *puVar2 = ppppppWVar9;
        puVar2[1] = ppppppWVar3;
        *(undefined1 *)((longlong)puVar2 + 0x15) = 0;
      }
    }
    uVar10 = 0x20;
    goto LAB_14057fefa;
  }
  BVar4 = FlushFileBuffers(*(HANDLE *)(param_1 + 0x38));
  if (BVar4 == 0) {
    DVar6 = GetLastError();
    pppppppWVar8 = (LPCWSTR ******)local_88;
    win32_error_lu(pppppppWVar8,DVar6);
    if (uStack_70 - local_78 < 0x12) {
      pppppppWVar8 = (LPCWSTR ******)
                     FUN_140008af0(local_88,0x12,local_78,0,"FlushFileBuffers: ",0x12);
    }
    else {
      pppppppWVar12 = pppppppWVar8;
      if (0xf < uStack_70) {
        pppppppWVar12 = local_88[0];
      }
      pWVar14 = (LPCWSTR)0x12;
      if (("" < (char *)((longlong)pppppppWVar12 + local_78) &&
           pppppppWVar12 < (LPCWSTR ******)0x1413a1706) &&
         (pWVar14 = (LPCWSTR)((longlong)pppppppWVar12 + -0x1413a16f4),
         pppppppWVar12 < "FlushFileBuffers: " || pWVar14 == (LPCWSTR)0x0)) {
        pWVar14 = (LPCWSTR)0x0;
      }
      sVar13 = local_78 + 1;
      pppppppWVar11 = local_88[0];
      if (uStack_70 < 0x10) {
        pppppppWVar11 = pppppppWVar8;
      }
      local_78 = local_78 + 0x12;
      memmove((LPCWSTR)((longlong)pppppppWVar11 + 0x12),pppppppWVar12,sVar13);
      memcpy(pppppppWVar12,"FlushFileBuffers: ",(size_t)pWVar14);
      memcpy((char *)((longlong)pppppppWVar12 + (longlong)pWVar14),pWVar14 + 0xa09d0b83,
             0x12 - (longlong)pWVar14);
    }
    local_68 = (LPCWSTR ******)*pppppppWVar8;
    ppppppWStack_60 = pppppppWVar8[1];
    local_58 = pppppppWVar8[2];
    ppppppWStack_50 = pppppppWVar8[3];
    pppppppWVar8[2] = (LPCWSTR *****)0x0;
    pppppppWVar8[3] = (LPCWSTR *****)0xf;
    *(char *)pppppppWVar8 = '\0';
    if ((LPCWSTR *******)(param_1 + 0x24) != &local_68) {
      pppppppWVar8 = (LPCWSTR ******)&local_68;
      if ((LPCWSTR *****)0xf < ppppppWStack_50) {
        pppppppWVar8 = local_68;
      }
      ppppppWVar9 = *(LPCWSTR ******)(param_1 + 0x30);
      if (ppppppWVar9 < local_58) {
        FUN_1400069b0(param_1 + 0x24,local_58);
      }
      else {
LAB_14057fe55:
        ppppppWVar3 = local_58;
        pWVar14 = param_1 + 0x24;
        if ((LPCWSTR *****)0xf < ppppppWVar9) {
          pWVar14 = *(LPCWSTR *)(param_1 + 0x24);
        }
        *(LPCWSTR ******)(param_1 + 0x2c) = local_58;
        memmove(pWVar14,pppppppWVar8,(size_t)local_58);
        *(undefined1 *)((longlong)pWVar14 + (longlong)ppppppWVar3) = 0;
      }
    }
  }
  else {
    if (*(HANDLE *)(param_1 + 0x38) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x38));
      param_1[0x38] = L'\0';
      param_1[0x39] = L'\0';
      param_1[0x3a] = L'\0';
      param_1[0x3b] = L'\0';
    }
    if (*(ulonglong *)(param_1 + 0xc) < 8) {
      pWVar14 = param_1;
      if (7 < *(ulonglong *)(param_1 + 0x1c)) goto LAB_14057fafc;
LAB_14057fad4:
      iVar5 = MoveFileExW(param_1 + 0x10,pWVar14,9);
      uVar7 = CONCAT44(extraout_var,iVar5);
    }
    else {
      pWVar14 = *(LPCWSTR *)param_1;
      if (*(ulonglong *)(param_1 + 0x1c) < 8) goto LAB_14057fad4;
LAB_14057fafc:
      iVar5 = MoveFileExW(*(LPCWSTR *)(param_1 + 0x10),pWVar14,9);
      uVar7 = CONCAT44(extraout_var_00,iVar5);
    }
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 0x34) = 1;
      return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
    pWVar14 = param_1 + 0x10;
    DVar6 = GetLastError();
    if (*(longlong *)(param_1 + 0x18) != 0) {
      if (7 < *(ulonglong *)(param_1 + 0x1c)) {
        pWVar14 = *(LPCWSTR *)(param_1 + 0x10);
      }
      DeleteFileW(pWVar14);
    }
    pppppppWVar8 = (LPCWSTR ******)local_88;
    win32_error_lu(pppppppWVar8,DVar6);
    if (uStack_70 - local_78 < 0xd) {
      pppppppWVar8 = (LPCWSTR ******)FUN_140008af0(local_88,0xd,local_78,0,"MoveFileExW: ",0xd);
    }
    else {
      pppppppWVar12 = pppppppWVar8;
      if (0xf < uStack_70) {
        pppppppWVar12 = local_88[0];
      }
      _Size = &DAT_0000000d;
      if (("" < (char *)((longlong)pppppppWVar12 + local_78) &&
           pppppppWVar12 < (LPCWSTR ******)0x1413a1b6c) &&
         (_Size = (char *)((longlong)pppppppWVar12 + -0x1413a1b5f),
         pppppppWVar12 < "MoveFileExW: " || _Size == (char *)0x0)) {
        _Size = (char *)0x0;
      }
      sVar13 = local_78 + 1;
      pppppppWVar11 = local_88[0];
      if (uStack_70 < 0x10) {
        pppppppWVar11 = pppppppWVar8;
      }
      local_78 = local_78 + 0xd;
      memmove((char *)((longlong)pppppppWVar11 + 0xd),pppppppWVar12,sVar13);
      memcpy(pppppppWVar12,"MoveFileExW: ",(size_t)_Size);
      memcpy((char *)((longlong)pppppppWVar12 + (longlong)_Size),_Size + 0x1413a1b6c,
             0xd - (longlong)_Size);
    }
    local_68 = (LPCWSTR ******)*pppppppWVar8;
    ppppppWStack_60 = pppppppWVar8[1];
    local_58 = pppppppWVar8[2];
    ppppppWStack_50 = pppppppWVar8[3];
    pppppppWVar8[2] = (LPCWSTR *****)0x0;
    pppppppWVar8[3] = (LPCWSTR *****)0xf;
    *(char *)pppppppWVar8 = '\0';
    if ((LPCWSTR *******)(param_1 + 0x24) != &local_68) {
      pppppppWVar8 = (LPCWSTR ******)&local_68;
      if ((LPCWSTR *****)0xf < ppppppWStack_50) {
        pppppppWVar8 = local_68;
      }
      ppppppWVar9 = *(LPCWSTR ******)(param_1 + 0x30);
      if (local_58 <= ppppppWVar9) goto LAB_14057fe55;
      FUN_1400069b0(param_1 + 0x24,local_58);
    }
  }
  if ((LPCWSTR *****)0xf < ppppppWStack_50) {
    ppppppWVar9 = (LPCWSTR *****)((longlong)ppppppWStack_50 + 1);
    pppppppWVar8 = local_68;
    if ((LPCWSTR *****)0xfff < ppppppWVar9) {
      pppppppWVar8 = (LPCWSTR ******)local_68[-1];
      if ((char *)0x1f < (char *)((longlong)local_68 + (-8 - (longlong)pppppppWVar8)))
      goto LAB_14057ff13;
      ppppppWVar9 = ppppppWStack_50 + 5;
    }
    thunk_FUN_140b68ba8(pppppppWVar8,ppppppWVar9);
  }
  local_58 = (LPCWSTR *****)0x0;
  ppppppWStack_50 = (LPCWSTR *****)0xf;
  local_68 = (LPCWSTR ******)((ulonglong)local_68 & 0xffffffffffffff00);
  if (uStack_70 < 0x10) {
    return 0;
  }
  uVar10 = uStack_70 + 1;
  pppppppWVar8 = local_88[0];
  if (0xfff < uVar10) {
    pppppppWVar8 = (LPCWSTR ******)local_88[0][-1];
    if ((char *)0x1f < (char *)((longlong)local_88[0] + (-8 - (longlong)pppppppWVar8))) {
LAB_14057ff13:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar10 = uStack_70 + 0x28;
  }
LAB_14057fefa:
  thunk_FUN_140b68ba8(pppppppWVar8,uVar10);
  return 0;
}

