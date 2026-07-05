/**
 * Function: setprop_failed
 * Address:  14045d520
 * Signature: undefined setprop_failed(void)
 * Body size: 1302 bytes
 */


undefined8 setprop_failed(longlong param_1,longlong param_2,HWND param_3,longlong param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *hData;
  HDC pHVar7;
  LONG_PTR LVar8;
  char *_Str;
  char *pcVar9;
  code *pcVar10;
  HWND pHVar11;
  wchar_t *lpString;
  size_t sVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStackY_98 [32];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  tagRECT local_48;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStackY_98;
  hData = (longlong *)FUN_140160c70(1,0xe0);
  if (hData == (longlong *)0x0) {
    uVar13 = 0;
  }
  else {
    *hData = param_2;
    hData[1] = (longlong)param_3;
    hData[2] = param_4;
    pHVar7 = GetDC(param_3);
    hData[3] = (longlong)pHVar7;
    LVar8 = GetWindowLongPtrW(param_3,-6);
    hData[5] = LVar8;
    *(undefined4 *)(hData + 9) = 0xffffffff;
    *(undefined4 *)((longlong)hData + 0x4c) = 0xffffffff;
    *(undefined4 *)(hData + 10) = 0xffffffff;
    *(undefined4 *)((longlong)hData + 0x54) = 0xffffffff;
    hData[0x18] = param_1;
    *(undefined1 *)((longlong)hData + 0x5a) = 1;
    *(undefined4 *)((longlong)hData + 0xa4) = *(undefined4 *)(param_2 + 100);
    *(undefined4 *)((longlong)hData + 0x9c) = 0xffffffff;
    _Str = (char *)FUN_140110550("SDL_WINDOWS_ERASE_BACKGROUND_MODE");
    uVar2 = 1;
    if (_Str != (char *)0x0) {
      pcVar9 = strstr(_Str,"never");
      uVar2 = 0;
      if (pcVar9 == (char *)0x0) {
        pcVar9 = strstr(_Str,"initial");
        uVar2 = 1;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = strstr(_Str,"always");
          uVar2 = 2;
          if ((pcVar9 == (char *)0x0) && (uVar2 = FUN_140110620(_Str,1), 2 < uVar2)) {
            FUN_1400fb540(
                         "GetEraseBackgroundModeHint: invalid value for SDL_HINT_WINDOWS_ERASE_BACKGROUND_MODE. Fallback to default"
                         );
            uVar2 = 1;
          }
        }
      }
    }
    *(uint *)(hData + 0x17) = uVar2;
    iVar3 = GetSystemMetrics(0x1000);
    bVar15 = iVar3 == 0;
    *(uint *)(hData + 0x11) = (bVar15 - 2) + (uint)bVar15;
    *(undefined4 *)((longlong)hData + 0x8c) = 0;
    *(uint *)(hData + 0x12) = !bVar15 + 1 + (uint)!bVar15;
    *(undefined4 *)((longlong)hData + 0x94) = 1;
    bVar1 = FUN_1401106d0("SDL_WINDOW_RETAIN_CONTENT",0);
    *(uint *)(hData + 0x1a) = (uint)(bVar1 ^ 1) << 8;
    BVar4 = SetPropW(param_3,L"SDL_WindowData",hData);
    if (BVar4 == 0) {
      ReleaseDC(param_3,(HDC)hData[3]);
      FUN_140160cf0(hData);
      if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStackY_98)) {
        uVar13 = FUN_1403d7710("SetProp() failed");
        return uVar13;
      }
      goto LAB_14045da29;
    }
    *(longlong **)(param_2 + 0x180) = hData;
    pcVar10 = (code *)GetWindowLongPtrW(param_3,-4);
    hData[7] = (longlong)pcVar10;
    if (pcVar10 == sdl_windows_close_on_alt_f4) {
      hData[7] = 0;
    }
    else {
      SetWindowLongPtrW(param_3,-4,0x14016a870);
    }
    uVar2 = GetWindowLongW(param_3,-0x10);
    uVar14 = (*(ulonglong *)(param_2 + 0x48) & 0xfffffffffffffff7) +
             (ulonglong)((uVar2 & 0x10000000) == 0) * 8;
    if ((int)uVar2 < 0) {
      uVar14 = uVar14 | 0x10;
      if ((uVar2 & 0x40000) != 0) goto LAB_14045d78e;
    }
    else if ((uVar2 & 0x40000) == 0) {
      uVar14 = uVar14 & 0xffffffffffffffcf;
    }
    else {
      uVar14 = uVar14 & 0xffffffffffffffef;
LAB_14045d78e:
      uVar14 = uVar14 | 0x20;
    }
    uVar5 = uVar2 >> 0x17 & 0x40;
    uVar14 = (ulonglong)uVar5 + ((ulonglong)(uVar2 >> 0x11 & 0x80) | uVar14 & 0xffffffffffffff3f);
    *(ulonglong *)(param_2 + 0x48) = uVar14;
    if (uVar5 == 0) {
      BVar4 = GetClientRect(param_3,&local_48);
      if ((BVar4 != 0) && (iVar3 = FUN_1403d7fc0(&local_48), iVar3 == 0)) {
        local_4c = local_48.right;
        local_50 = local_48.bottom;
        if ((*(byte *)(param_2 + 0x49) & 8) == 0) {
          if ((*(int *)(param_2 + 0x70) == local_48.right || *(int *)(param_2 + 0x70) == 0) &&
             (*(int *)(param_2 + 0x74) == local_48.bottom || *(int *)(param_2 + 0x74) == 0)) {
            *(LONG *)(param_2 + 0x20) = local_48.right;
            *(LONG *)(param_2 + 0x24) = local_48.bottom;
          }
          else {
            FUN_14045c9d0(param_2,&local_54,&local_58,&local_4c);
            *(undefined1 *)((longlong)hData + 0x5b) = 1;
            SetWindowPos(param_3,(HWND)0x0,local_54,local_58,local_4c,local_50,
                         *(uint *)(hData + 0x1a) | 0x214);
            *(undefined1 *)((longlong)hData + 0x5b) = 0;
          }
        }
        else {
          *(LONG *)(param_2 + 0x20) = local_48.right;
          *(LONG *)(param_2 + 0x70) = local_48.right;
          *(LONG *)(param_2 + 0x80) = local_48.right;
          *(LONG *)(param_2 + 0x24) = local_48.bottom;
          *(LONG *)(param_2 + 0x74) = local_48.bottom;
          *(LONG *)(param_2 + 0x84) = local_48.bottom;
        }
      }
      uVar14 = *(ulonglong *)(param_2 + 0x48);
    }
    if ((uVar14 & 0x40) == 0) {
      local_48.left = 0;
      local_48.top = 0;
      BVar4 = ClientToScreen(param_3,(LPPOINT)&local_48);
      if (BVar4 != 0) {
        if ((*(byte *)(param_2 + 0x49) & 8) != 0) {
          *(LONG *)(param_2 + 0x68) = local_48.left;
          *(LONG *)(param_2 + 0x78) = local_48.left;
          *(LONG *)(param_2 + 0x6c) = local_48.top;
          *(LONG *)(param_2 + 0x7c) = local_48.top;
        }
        *(LONG *)(param_2 + 0x18) = local_48.left;
        *(LONG *)(param_2 + 0x1c) = local_48.top;
      }
    }
    FUN_14045f1d0(param_2,0);
    pHVar11 = GetFocus();
    if (pHVar11 == param_3) {
      *(byte *)(param_2 + 0x49) = *(byte *)(param_2 + 0x49) | 2;
      FUN_14015fd90(param_2);
      FUN_14045f380(param_2);
    }
    FUN_14045ce60(param_2,0x13,0);
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(param_3,3);
    }
    if ((hData[2] != 0) && (*(longlong *)(param_2 + 0x198) == 0)) {
      *(undefined1 *)((longlong)hData + 0xa1) = 1;
    }
    *(undefined1 *)((longlong)hData + 0x5a) = 0;
    if ((*(byte *)(param_2 + 0x49) & 8) != 0) {
      iVar3 = GetWindowTextLengthW(param_3);
      lpString = (wchar_t *)FUN_140160c40((longlong)iVar3 * 2 + 2);
      if (lpString != (wchar_t *)0x0) {
        iVar3 = GetWindowTextW(param_3,lpString,iVar3 + 1);
        if (0 < iVar3) {
          sVar12 = wcslen(lpString);
          uVar13 = FUN_14017b9c0("UTF-8","UTF-16LE",lpString,sVar12 * 2 + 2);
          *(undefined8 *)(param_2 + 8) = uVar13;
        }
        FUN_140160cf0(lpString);
      }
    }
    uVar6 = video_subsystem_has_not_been_initialized(param_2);
    FUN_14014faf0(uVar6,"SDL.window.win32.hwnd",hData[1]);
    FUN_14014faf0(uVar6,"SDL.window.win32.hdc",hData[3]);
    FUN_14014faf0(uVar6,"SDL.window.win32.instance",hData[5]);
    uVar13 = 1;
  }
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStackY_98)) {
    return uVar13;
  }
LAB_14045da29:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStackY_98);
}

