/**
 * Function: failed_to_enumerate_directory
 * Address:  14045a2a0
 * Signature: undefined failed_to_enumerate_directory(void)
 * Body size: 693 bytes
 */


undefined1 failed_to_enumerate_directory(char *param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  DWORD DVar2;
  BOOL BVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  LPCWSTR lpFileName;
  HANDLE hFindFile;
  size_t sVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined1 auStackY_2d8 [32];
  longlong local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_2d8;
  if (*param_1 == '\0') {
    DVar2 = GetLogicalDrives();
    local_298.dwFileAttributes = 0x5c3a00;
    uVar9 = 0x41;
    do {
      if ((DVar2 >> (uVar9 - 1 & 0x1f) & 1) == 0) {
        iVar4 = 0;
      }
      else {
        local_298.dwFileAttributes = CONCAT31(local_298.dwFileAttributes._1_3_,(char)uVar9);
        iVar4 = (*param_2)(param_3,&DAT_1413a2ad6,&local_298);
        if (iVar4 != 0) break;
      }
      bVar10 = uVar9 < 0x5a;
      uVar9 = uVar9 + 1;
    } while (bVar10);
LAB_14045a52f:
    uVar11 = iVar4 != 2;
  }
  else {
    local_2a0 = 0;
    uVar5 = FUN_1400fd7b0(&local_2a0,&DAT_141360cba,param_1);
    if (local_2a0 != 0 && (int)uVar5 != -1) {
      if (0 < (int)uVar5) {
        uVar5 = uVar5 & 0xffffffff;
        do {
          cVar1 = *(char *)(local_2a0 + -1 + uVar5);
          if ((cVar1 != '\\') && (cVar1 != '/')) goto LAB_14045a3c4;
          *(undefined1 *)(local_2a0 + -1 + uVar5) = 0;
          bVar10 = 1 < uVar5;
          uVar5 = uVar5 - 1;
        } while (bVar10);
        uVar5 = 0;
      }
LAB_14045a3c4:
      lVar8 = (longlong)(int)uVar5;
      *(undefined1 *)(local_2a0 + lVar8) = 0x5c;
      *(undefined1 *)(lVar8 + 1 + local_2a0) = 0x2a;
      *(undefined1 *)(local_2a0 + 2 + lVar8) = 0;
      lVar6 = FUN_1400fc570(local_2a0);
      lpFileName = (LPCWSTR)FUN_14017b9c0("UTF-16LE","UTF-8",local_2a0,lVar6 + 1);
      if (lpFileName != (LPCWSTR)0x0) {
        *(undefined1 *)(local_2a0 + 1 + lVar8) = 0;
        hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,FindExSearchNameMatch,
                                     (LPVOID)0x0,0);
        FUN_140160cf0(lpFileName);
        if (hFindFile == (HANDLE)0xffffffffffffffff) {
          FUN_140160cf0(local_2a0);
          uVar11 = FUN_1403d7710("Failed to enumerate directory");
          goto LAB_14045a535;
        }
        do {
          if ((local_298.cFileName[0] != L'.') ||
             ((local_298.cFileName[1] != L'\0' &&
              ((local_298.cFileName[1] != L'.' || (local_298.cFileName[2] != L'\0')))))) {
            sVar7 = wcslen(local_298.cFileName);
            lVar6 = FUN_14017b9c0("UTF-8","UTF-16LE",local_298.cFileName,sVar7 * 2 + 2);
            if (lVar6 == 0) {
              iVar4 = 2;
              goto LAB_14045a519;
            }
            iVar4 = (*param_2)(param_3,local_2a0,lVar6);
            FUN_140160cf0(lVar6);
            if (iVar4 != 0) goto LAB_14045a519;
          }
          BVar3 = FindNextFileW(hFindFile,&local_298);
        } while (BVar3 != 0);
        iVar4 = 0;
LAB_14045a519:
        FindClose(hFindFile);
        FUN_140160cf0(local_2a0);
        goto LAB_14045a52f;
      }
      FUN_140160cf0();
    }
    uVar11 = 0;
  }
LAB_14045a535:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStackY_2d8)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStackY_2d8);
}

