/**
 * Function: uhid_device_allocation_error
 * Address:  1401751a0
 * Signature: undefined uhid_device_allocation_error(void)
 * Body size: 1157 bytes
 */


undefined8 * uhid_device_allocation_error(LPCSTR param_1)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  LPCWSTR lpWideCharStr;
  HANDLE pvVar4;
  undefined8 *puVar5;
  HANDLE pvVar6;
  undefined8 uVar7;
  DWORDLONG dwlConditionMask;
  size_t sVar8;
  longlong lVar9;
  HANDLE hObject;
  wchar_t *pwVar10;
  undefined1 auStackY_1f8 [32];
  longlong local_1b8;
  undefined1 local_1ac [4];
  ushort local_1a8;
  undefined2 local_1a6;
  undefined2 local_1a4;
  _OSVERSIONINFOEXW local_16c;
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStackY_1f8;
  local_1b8 = 0;
  iVar2 = uresolve_dll_functions();
  hObject = (HANDLE)0xffffffffffffffff;
  if (-1 < iVar2) {
    iVar2 = MultiByteToWideChar(0xfde9,8,param_1,-1,(LPWSTR)0x0,0);
    if (iVar2 != 0) {
      lpWideCharStr = (LPCWSTR)FUN_140160c70((longlong)iVar2,2);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        MultiByteToWideChar(0xfde9,8,param_1,-1,lpWideCharStr,iVar2);
        pvVar4 = CreateFileW(lpWideCharStr,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,
                             (HANDLE)0x0);
        if (pvVar4 == (HANDLE)0xffffffffffffffff) {
          pvVar4 = CreateFileW(lpWideCharStr,0,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,(HANDLE)0x0
                              );
          if (pvVar4 == (HANDLE)0xffffffffffffffff) {
            uls_0x08x_ls(&DAT_1415261b0,L"open_device");
            puVar5 = (undefined8 *)0x0;
            goto LAB_1401754e6;
          }
        }
        cVar1 = (*DAT_141526188)(pvVar4,0x40);
        if (cVar1 == '\0') {
          pwVar10 = L"set input buffers";
LAB_14017555b:
          uls_0x08x_ls(&DAT_1415261b0,pwVar10);
        }
        else {
          cVar1 = (*DAT_141526170)(pvVar4,&local_1b8);
          if (cVar1 == '\0') {
            pwVar10 = L"get preparsed data";
            goto LAB_14017555b;
          }
          iVar2 = (*DAT_141526178)(local_1b8,local_1ac);
          if (iVar2 == 0x110000) {
            puVar5 = (undefined8 *)FUN_140160c70(1,0x98);
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = 0xffffffffffffffff;
              *(undefined4 *)(puVar5 + 1) = 1;
              *(undefined2 *)((longlong)puVar5 + 0xc) = 0;
              puVar5[2] = 0;
              puVar5[3] = 0;
              *(undefined2 *)(puVar5 + 4) = 0;
              puVar5[5] = 0;
              puVar5[6] = 0;
              *(undefined4 *)(puVar5 + 7) = 0;
              puVar5[8] = 0;
              puVar5[9] = 0;
              puVar5[10] = 0;
              puVar5[0xb] = 0;
              puVar5[0xc] = 0;
              pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
              puVar5[0xc] = pvVar6;
              puVar5[0xd] = 0;
              puVar5[0xe] = 0;
              puVar5[0xf] = 0;
              puVar5[0x10] = 0;
              pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
              puVar5[0x10] = pvVar6;
              puVar5[0x11] = 0;
              *puVar5 = pvVar4;
              *(undefined2 *)((longlong)puVar5 + 0xc) = local_1a6;
              puVar5[3] = (ulonglong)local_1a8;
              *(undefined2 *)(puVar5 + 4) = local_1a4;
              uVar7 = FUN_140160c40();
              puVar5[8] = uVar7;
              uVar7 = FUN_1401743a0(lpWideCharStr,*puVar5);
              puVar5[0x11] = uVar7;
              if (0x200 < *(ushort *)((longlong)puVar5 + 0xc)) {
                uVar7 = VerSetConditionMask(0,2,3);
                uVar7 = VerSetConditionMask(uVar7,1,3);
                dwlConditionMask = VerSetConditionMask(uVar7,0x20,3);
                memset(&local_16c.dwBuildNumber,0,0x110);
                local_16c.dwOSVersionInfoSize = 0x11c;
                local_16c.dwMajorVersion = 6;
                local_16c.dwMinorVersion = 2;
                BVar3 = VerifyVersionInfoW(&local_16c,0x23,dwlConditionMask);
                *(uint *)(puVar5 + 0x12) = (uint)(BVar3 == 0);
              }
              goto LAB_1401754e6;
            }
            FUN_140160cf0(DAT_1415261b0);
            pwVar10 = L"hid_device allocation error";
          }
          else {
            FUN_140160cf0(DAT_1415261b0);
            pwVar10 = L"HidP_GetCaps";
          }
          DAT_1415261b0 = 0;
          sVar8 = wcslen(pwVar10);
          lVar9 = FUN_14017b9c0("UTF-8","WCHAR_T",pwVar10,sVar8 * 2 + 2);
          if (lVar9 == 0) {
            FUN_1400fc040();
          }
          else {
            FUN_1400fbed0(&DAT_141339891,lVar9);
            FUN_140160cf0(lVar9);
          }
        }
        puVar5 = (undefined8 *)0x0;
        hObject = pvVar4;
        goto LAB_1401754e6;
      }
    }
    FUN_140160cf0(DAT_1415261b0);
    DAT_1415261b0 = 0;
    sVar8 = wcslen(L"Path conversion failure");
    lVar9 = FUN_14017b9c0("UTF-8","WCHAR_T",L"Path conversion failure",sVar8 * 2 + 2);
    if (lVar9 == 0) {
      FUN_1400fc040();
    }
    else {
      FUN_1400fbed0(&DAT_141339891,lVar9);
      FUN_140160cf0(lVar9);
    }
  }
  puVar5 = (undefined8 *)0x0;
  lpWideCharStr = (LPCWSTR)0x0;
LAB_1401754e6:
  FUN_140160cf0(lpWideCharStr);
  CloseHandle(hObject);
  if (local_1b8 != 0) {
    (*DAT_141526180)();
  }
  if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStackY_1f8)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStackY_1f8);
}

