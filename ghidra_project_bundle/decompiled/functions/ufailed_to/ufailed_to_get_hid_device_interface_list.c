/**
 * Function: ufailed_to_get_hid_device_interface_list
 * Address:  140173b50
 * Signature: undefined ufailed_to_get_hid_device_interface_list(void)
 * Body size: 1820 bytes
 */


longlong ufailed_to_get_hid_device_interface_list(ushort param_1,short param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  wchar_t wVar4;
  int iVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  wchar_t *pwVar8;
  HANDLE hObject;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *_Str;
  longlong lVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined1 auStackY_128 [32];
  undefined8 local_e0;
  undefined4 local_d4;
  ushort local_d0;
  short local_ce;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStackY_128;
  iVar5 = uresolve_dll_functions();
  if (iVar5 < 0) {
    lVar11 = 0;
    goto LAB_140174233;
  }
  (*DAT_141526150)(local_70);
  pwVar6 = (wchar_t *)0x0;
  do {
    iVar5 = (*DAT_141526158)(&local_c8,local_70,0,0);
    if (iVar5 != 0) {
      FUN_140160cf0(DAT_1415261b0);
      pwVar13 = L"Failed to get size of HID device interface list";
      goto LAB_1401741dc;
    }
    if (pwVar6 != (wchar_t *)0x0) {
      FUN_140160cf0(pwVar6);
    }
    pwVar6 = (wchar_t *)FUN_140160c70(local_c8,2);
    if (pwVar6 == (wchar_t *)0x0) {
      FUN_140160cf0(DAT_1415261b0);
      DAT_1415261b0 = 0;
      sVar7 = wcslen(L"Failed to allocate memory for HID device interface list");
      lVar11 = FUN_14017b9c0("UTF-8","WCHAR_T",
                             L"Failed to allocate memory for HID device interface list",
                             sVar7 * 2 + 2);
      if (lVar11 == 0) {
        FUN_1400fc040();
        lVar11 = 0;
      }
      else {
        FUN_1400fbed0(&DAT_141339891,lVar11);
        FUN_140160cf0(lVar11);
        lVar11 = 0;
      }
      goto LAB_140174233;
    }
    iVar5 = (*DAT_141526160)(local_70,0);
  } while (iVar5 == 0x1a);
  if (iVar5 == 0) {
    if (*pwVar6 == L'\0') {
LAB_1401741a5:
      FUN_140160cf0(DAT_1415261b0);
      if (param_2 == 0 && param_1 == 0) {
        pwVar13 = L"No HID devices found in the system.";
      }
      else {
        pwVar13 = L"No HID devices with requested VID/PID found in the system.";
      }
      goto LAB_1401741dc;
    }
    lVar12 = 0;
    pwVar13 = pwVar6;
    lVar14 = 0;
    do {
      pwVar8 = wcsstr(pwVar13,L"&IG_");
      lVar11 = lVar14;
      if ((pwVar8 == (wchar_t *)0x0) &&
         (hObject = CreateFileW(pwVar13,0,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,(HANDLE)0x0),
         hObject != (HANDLE)0xffffffffffffffff)) {
        local_d4 = 0xc;
        cVar3 = (*DAT_141526168)(hObject,&local_d4);
        lVar2 = lVar12;
        if (cVar3 != '\0') {
          local_bc = 0;
          iVar5 = (*DAT_1415262a0)(pwVar13,&DAT_1414f9db8,&local_c0,0);
          if ((iVar5 == 0x1a) && (local_c0 == 0x12)) {
            lVar9 = FUN_140160c70(local_bc,1);
            iVar5 = (*DAT_1415262a0)(pwVar13,&DAT_1414f9db8,&local_c0,lVar9);
            if (iVar5 != 0) {
              FUN_140160cf0(lVar9);
              goto LAB_140173d6a;
            }
            if (lVar9 == 0) goto LAB_140173d6a;
            iVar5 = (*DAT_1415261a0)(&local_c4,lVar9,0);
            if ((iVar5 != 0) ||
               (iVar5 = (*DAT_141526298)(&local_c4,local_c4,0), uVar1 = local_c4, iVar5 != 0))
            goto LAB_140173d6d;
            local_bc = 0;
            iVar5 = (*DAT_1415261a8)(local_c4,&DAT_1414f9de4,&local_c0,0);
            if ((iVar5 != 0x1a) || (local_c0 != 0x2012)) goto LAB_140173d6d;
            pwVar8 = (wchar_t *)FUN_140160c70(local_bc,1);
            iVar5 = (*DAT_1415261a8)(uVar1,&DAT_1414f9de4,&local_c0,pwVar8);
            if (iVar5 != 0) {
              FUN_140160cf0(pwVar8);
              goto LAB_140173d6d;
            }
            if (pwVar8 == (wchar_t *)0x0) goto LAB_140173d6d;
            wVar4 = *pwVar8;
            _Str = pwVar8;
            while (pwVar10 = _Str, wVar4 != L'\0') {
              do {
                wVar4 = FUN_14016e600(wVar4);
                *pwVar10 = wVar4;
                wVar4 = pwVar10[1];
                pwVar10 = pwVar10 + 1;
              } while (wVar4 != L'\0');
              pwVar10 = wcsstr(_Str,L"USB");
              if ((((pwVar10 != (wchar_t *)0x0) ||
                   (pwVar10 = wcsstr(_Str,L"BTHENUM"), pwVar10 != (wchar_t *)0x0)) ||
                  (pwVar10 = wcsstr(_Str,L"BTHLEDEVICE"), pwVar10 != (wchar_t *)0x0)) ||
                 ((pwVar10 = wcsstr(_Str,L"PNP0C50"), pwVar10 != (wchar_t *)0x0 ||
                  (pwVar10 = wcsstr(_Str,L"PNP0C51"), pwVar10 != (wchar_t *)0x0)))) break;
              sVar7 = wcslen(_Str);
              pwVar10 = _Str + sVar7 + 1;
              _Str = _Str + sVar7 + 1;
              wVar4 = *pwVar10;
            }
          }
          else {
LAB_140173d6a:
            lVar9 = 0;
LAB_140173d6d:
            pwVar8 = (wchar_t *)0x0;
          }
          FUN_140160cf0(lVar9);
          FUN_140160cf0(pwVar8);
          local_e0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          cVar3 = (*DAT_141526170)(hObject,&local_e0);
          if (cVar3 != '\0') {
            (*DAT_141526178)(local_e0,&local_b8);
            (*DAT_141526180)(local_e0);
          }
          cVar3 = _x4x_0x4x();
          if (((cVar3 == '\0') && (local_d0 == param_1 || param_1 == 0)) &&
             (local_ce == param_2 || param_2 == 0)) {
            if (local_d0 < 0x1532) {
              if (local_d0 == 0x45e) {
                if (local_ce != 0x822) goto LAB_140173fb5;
              }
              else if (local_d0 == 0x738) {
                if (local_ce != 0x2217) goto LAB_140173fb5;
              }
              else if ((local_d0 != 0xd8c) || (local_ce != 0x14)) goto LAB_140173fb5;
            }
            else if (local_d0 == 0x1532) {
              if ((local_ce - 0x109U & 0xfffd) != 0) goto LAB_140173fb5;
            }
            else if (local_d0 == 0x1b1c) {
              if (local_ce != 0x1b3d) goto LAB_140173fb5;
            }
            else if (local_d0 != 0x1ccf) {
LAB_140173fb5:
              lVar9 = FUN_1401743a0(pwVar13,hObject);
              if ((lVar9 != 0) && (lVar2 = lVar9, lVar11 = lVar9, lVar12 != 0)) {
                *(longlong *)(lVar12 + 0x38) = lVar9;
                lVar11 = lVar14;
              }
            }
          }
        }
        lVar12 = lVar2;
        CloseHandle(hObject);
      }
      sVar7 = wcslen(pwVar13);
      pwVar8 = pwVar13 + sVar7 + 1;
      pwVar13 = pwVar13 + sVar7 + 1;
      lVar14 = lVar11;
    } while (*pwVar8 != L'\0');
    if (lVar11 == 0) goto LAB_1401741a5;
  }
  else {
    FUN_140160cf0(DAT_1415261b0);
    pwVar13 = L"Failed to get HID device interface list";
LAB_1401741dc:
    DAT_1415261b0 = 0;
    sVar7 = wcslen(pwVar13);
    lVar11 = FUN_14017b9c0("UTF-8","WCHAR_T",pwVar13,sVar7 * 2 + 2);
    if (lVar11 == 0) {
      FUN_1400fc040();
    }
    else {
      FUN_1400fbed0(&DAT_141339891,lVar11);
      FUN_140160cf0(lVar11);
    }
    lVar11 = 0;
  }
  FUN_140160cf0(pwVar6);
LAB_140174233:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStackY_128)) {
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStackY_128);
}

