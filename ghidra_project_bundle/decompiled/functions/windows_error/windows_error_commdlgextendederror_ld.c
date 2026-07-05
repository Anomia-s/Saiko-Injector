/**
 * Function: windows_error_commdlgextendederror_ld
 * Address:  14046be70
 * Signature: undefined windows_error_commdlgextendederror_ld(void)
 * Body size: 2214 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void windows_error_commdlgextendederror_ld(char *param_1)

{
  wchar_t *pwVar1;
  char cVar2;
  uint uVar3;
  LPCSTR lpMultiByteStr;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  undefined8 uVar5;
  wchar_t wVar6;
  wchar_t wVar7;
  wchar_t wVar8;
  wchar_t wVar9;
  wchar_t wVar10;
  wchar_t wVar11;
  wchar_t wVar12;
  LPWSTR lpWideCharStr;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  HMODULE hModule;
  FARPROC pFVar16;
  FARPROC pFVar17;
  LPWSTR lpWideCharStr_00;
  longlong lVar18;
  INT_PTR IVar19;
  size_t sVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong *plVar25;
  char *pcVar26;
  longlong **pplVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  LPCWSTR pWVar30;
  undefined1 auStackY_588 [32];
  undefined8 local_540;
  undefined4 local_520 [2];
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined1 local_500 [16];
  LPWSTR local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e0;
  LPWSTR local_4d0;
  longlong local_4c8;
  uint local_4c0;
  undefined1 local_4bc [16];
  undefined1 local_4ac [16];
  undefined4 local_49c;
  undefined4 local_48c;
  CHAR local_488 [272];
  longlong *local_378;
  undefined8 local_370;
  WCHAR local_268 [260];
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStackY_588;
  cVar2 = *param_1;
  lpMultiByteStr = *(LPCSTR *)(param_1 + 0x10);
  lVar18 = *(longlong *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x20);
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  lVar22 = *(longlong *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 8);
  hModule = LoadLibraryW(L"Comdlg32.dll");
  if (hModule == (HMODULE)0x0) {
    FUN_1400fbed0("Couldn\'t load Comdlg32.dll");
    if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStackY_588)) goto LAB_14046bfaa;
    goto LAB_14046c71f;
  }
  pcVar26 = "GetOpenFileNameW";
  if (cVar2 != '\0') {
    pcVar26 = "GetSaveFileNameW";
  }
  pFVar16 = GetProcAddress(hModule,pcVar26);
  pFVar17 = GetProcAddress(hModule,"CommDlgExtendedError");
  if (pFVar16 == (FARPROC)0x0) {
    pcVar26 = "Couldn\'t load GetOpenFileName/GetSaveFileName from library";
  }
  else {
    if (pFVar17 != (FARPROC)0x0) {
      if (lVar18 == 0) {
        local_540 = 0;
      }
      else {
        uVar13 = video_subsystem_has_not_been_initialized(lVar18);
        local_540 = FUN_14014ff10(uVar13,"SDL.window.win32.hwnd",0);
      }
      memset(local_268,0,0x208);
      lpWideCharStr_00 = (LPWSTR)FUN_140160c40(0x20000);
      memset(lpWideCharStr_00,0,0x20000);
      if (lpMultiByteStr != (LPCSTR)0x0) {
        lVar18 = FUN_1400fc570(lpMultiByteStr);
        if ((lpMultiByteStr[lVar18 + -1] == '\\') || (lpMultiByteStr[lVar18 + -1] == '/')) {
          MultiByteToWideChar(0xfde9,8,lpMultiByteStr,-1,local_268,0x104);
        }
        else {
          MultiByteToWideChar(0xfde9,8,lpMultiByteStr,-1,lpWideCharStr_00,0x104);
          lVar18 = 0;
          do {
            pwVar1 = lpWideCharStr_00 + lVar18;
            wVar6 = pwVar1[1];
            wVar7 = pwVar1[2];
            wVar8 = pwVar1[3];
            wVar9 = pwVar1[4];
            wVar10 = pwVar1[5];
            wVar11 = pwVar1[6];
            wVar12 = pwVar1[7];
            if (*pwVar1 == L'/') {
              lpWideCharStr_00[lVar18] = L'\\';
            }
            if (wVar6 == L'/') {
              lpWideCharStr_00[lVar18 + 1] = L'\\';
            }
            if (wVar7 == L'/') {
              lpWideCharStr_00[lVar18 + 2] = L'\\';
            }
            if (wVar8 == L'/') {
              lpWideCharStr_00[lVar18 + 3] = L'\\';
            }
            if (wVar9 == L'/') {
              lpWideCharStr_00[lVar18 + 4] = L'\\';
            }
            if (wVar10 == L'/') {
              lpWideCharStr_00[lVar18 + 5] = L'\\';
            }
            if (wVar11 == L'/') {
              lpWideCharStr_00[lVar18 + 6] = L'\\';
            }
            if (wVar12 == L'/') {
              lpWideCharStr_00[lVar18 + 7] = L'\\';
            }
            pwVar1 = lpWideCharStr_00 + lVar18 + 8;
            wVar6 = pwVar1[1];
            wVar7 = pwVar1[2];
            wVar8 = pwVar1[3];
            wVar9 = pwVar1[4];
            wVar10 = pwVar1[5];
            wVar11 = pwVar1[6];
            wVar12 = pwVar1[7];
            if (*pwVar1 == L'/') {
              lpWideCharStr_00[lVar18 + 8] = L'\\';
            }
            if (wVar6 == L'/') {
              lpWideCharStr_00[lVar18 + 9] = L'\\';
            }
            if (wVar7 == L'/') {
              lpWideCharStr_00[lVar18 + 10] = L'\\';
            }
            if (wVar8 == L'/') {
              lpWideCharStr_00[lVar18 + 0xb] = L'\\';
            }
            if (wVar9 == L'/') {
              lpWideCharStr_00[lVar18 + 0xc] = L'\\';
            }
            if (wVar10 == L'/') {
              lpWideCharStr_00[lVar18 + 0xd] = L'\\';
            }
            if (wVar11 == L'/') {
              lpWideCharStr_00[lVar18 + 0xe] = L'\\';
            }
            if (wVar12 == L'/') {
              lpWideCharStr_00[lVar18 + 0xf] = L'\\';
            }
            lVar18 = lVar18 + 0x10;
          } while (lVar18 != 0x10000);
        }
      }
      if (lVar22 == 0) {
        lVar18 = 0;
LAB_14046c0a8:
        local_520[0] = 0x98;
        local_518 = local_540;
        local_510 = 0;
        local_500 = (undefined1  [16])0x0;
        local_4e8 = 0x10000;
        local_4e0 = 0;
        local_4d0 = local_268;
        if (local_268[0] == L'\0') {
          local_4d0 = (LPWSTR)0x0;
        }
        local_4c0 = uVar3 | 0x8000c;
        local_48c = 0;
        local_4bc = (undefined1  [16])0x0;
        local_4ac = (undefined1  [16])0x0;
        local_49c = 0;
        local_508 = uVar5;
        local_4f0 = lpWideCharStr_00;
        local_4c8 = lVar18;
        IVar19 = (*pFVar16)(local_520);
        FUN_140160cf0(lVar18);
        lpWideCharStr = local_4f0;
        if ((int)IVar19 == 0) {
          IVar19 = (*pFVar17)();
          if ((int)IVar19 != 0) {
            uVar29 = (*pFVar17)();
            FUN_1400fbed0("Windows error, CommDlgExtendedError: %ld",uVar29 & 0xffffffff);
            goto LAB_14046c6d5;
          }
          local_378 = (longlong *)0x0;
          iVar14 = local_500._12_4_ + -1;
          pplVar27 = &local_378;
LAB_14046c6e0:
          (*UNRECOVERED_JUMPTABLE)(uVar4,pplVar27,iVar14);
        }
        else {
          if ((uVar3 & 0x200) != 0) {
            plVar21 = (longlong *)FUN_140160c40(8);
            if (plVar21 != (longlong *)0x0) {
              *plVar21 = 0;
              iVar14 = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)&local_378,0x104,
                                           (LPCSTR)0x0,(LPBOOL)0x0);
              if (iVar14 < 0x104) {
                lVar18 = FUN_1400fc570(&local_378);
                FUN_1400fcb10(local_488,&local_378,0x104);
                local_488[lVar18] = '\\';
                lVar22 = FUN_1400fc570(&local_378);
                pWVar30 = lpWideCharStr + lVar22;
                iVar14 = 0x103 - (int)lVar18;
                lVar18 = (longlong)((int)lVar18 + 1);
                lVar22 = 0x10;
                uVar29 = 0;
LAB_14046c51b:
                if (pWVar30[1] != L'\0') {
                  plVar23 = (longlong *)FUN_140160cc0(plVar21);
                  if (plVar23 == (longlong *)0x0) {
                    plVar23 = plVar21;
                    if (uVar29 != 0) {
                      lVar18 = 0;
                      do {
                        FUN_140160cf0(plVar21[lVar18]);
                        lVar18 = lVar18 + 1;
                      } while (-lVar18 != uVar29);
                    }
                  }
                  else {
                    *(undefined8 *)((longlong)plVar23 + lVar22 + -8) = 0;
                    iVar15 = WideCharToMultiByte(0xfde9,0,pWVar30 + 1,-1,local_488 + lVar18,iVar14,
                                                 (LPCSTR)0x0,(LPBOOL)0x0);
                    if (iVar15 < iVar14) goto code_r0x00014046c57f;
                    FUN_1400fbed0("Path too long or invalid character in path");
                    if (uVar29 != 0) {
                      lVar18 = 0;
                      do {
                        FUN_140160cf0(plVar23[lVar18]);
                        lVar18 = lVar18 + 1;
                      } while (-lVar18 != uVar29);
                    }
                  }
                  goto LAB_14046c6cd;
                }
                if (uVar29 == 0) {
                  plVar25 = (longlong *)FUN_140160cc0(plVar21,0x10);
                  plVar23 = plVar21;
                  if (plVar25 == (longlong *)0x0) goto LAB_14046c6cd;
                  plVar25[1] = 0;
                  lVar18 = FUN_1400fcda0(&local_378);
                  *plVar25 = lVar18;
                  plVar21 = plVar25;
                  plVar23 = plVar25;
                  if (lVar18 == 0) goto LAB_14046c6cd;
                }
                (*UNRECOVERED_JUMPTABLE)(uVar4,plVar21,local_500._12_4_ + -1);
                lVar18 = 0;
                do {
                  FUN_140160cf0(plVar21[lVar18]);
                  lVar18 = lVar18 + 1;
                } while (-uVar29 + (ulonglong)(-uVar29 == 0) != lVar18);
                goto LAB_14046c1d5;
              }
              FUN_1400fbed0("Path too long or invalid character in path");
              plVar23 = plVar21;
              goto LAB_14046c6cd;
            }
LAB_14046c6d5:
            pplVar27 = (longlong **)0x0;
            iVar14 = -1;
            goto LAB_14046c6e0;
          }
          sVar20 = wcslen(local_4f0);
          plVar21 = (longlong *)FUN_14017b9c0("UTF-8","UTF-16LE",local_4f0,sVar20 * 2 + 2);
          local_370 = 0;
          local_378 = plVar21;
          (*UNRECOVERED_JUMPTABLE)(uVar4,&local_378,local_500._12_4_ + -1);
LAB_14046c1d5:
          FUN_140160cf0(plVar21);
        }
        FUN_140160cf0(lpWideCharStr_00);
      }
      else {
        lVar18 = FUN_1400fc570(lVar22);
        lVar18 = FUN_14017b9c0("UTF-16LE","UTF-8",lVar22,lVar18 + 1);
        if (lVar18 != 0) goto LAB_14046c0a8;
        FUN_140160cf0(lpWideCharStr_00);
        (*UNRECOVERED_JUMPTABLE)(uVar4,0,0xffffffff);
      }
      if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStackY_588)) {
        return;
      }
      goto LAB_14046c71f;
    }
    pcVar26 = "Couldn\'t load CommDlgExtendedError from library";
  }
  FUN_1400fbed0(pcVar26);
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStackY_588)) {
LAB_14046bfaa:
                    /* WARNING: Could not recover jumptable at 0x00014046bfd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar4,0,0xffffffff);
    return;
  }
LAB_14046c71f:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStackY_588);
code_r0x00014046c57f:
  lVar24 = FUN_1400fc570(local_488);
  pWVar30 = pWVar30 + 1 + (lVar24 - lVar18);
  lVar24 = FUN_1400fcda0(local_488);
  *(longlong *)((longlong)plVar23 + lVar22 + -0x10) = lVar24;
  uVar29 = uVar29 - 1;
  lVar22 = lVar22 + 8;
  plVar21 = plVar23;
  if (lVar24 == 0) goto code_r0x00014046c5b6;
  goto LAB_14046c51b;
code_r0x00014046c5b6:
  if (uVar29 != 0xffffffffffffffff) {
    uVar28 = 0;
    do {
      FUN_140160cf0(plVar23[uVar28]);
      uVar28 = uVar28 + 1;
    } while (~uVar29 != uVar28);
  }
LAB_14046c6cd:
  FUN_140160cf0(plVar23);
  goto LAB_14046c6d5;
}

