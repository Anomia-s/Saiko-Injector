/**
 * Function: getmonitorinfo_failed
 * Address:  14045ebd0
 * Signature: undefined getmonitorinfo_failed(void)
 * Body size: 1531 bytes
 */


undefined8 getmonitorinfo_failed(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  HWND hWnd;
  bool bVar2;
  LONG LVar3;
  LONG LVar4;
  LONG LVar5;
  char cVar6;
  BOOL BVar7;
  uint uVar8;
  LONG LVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  code *pcVar13;
  code *pcVar14;
  HMENU pHVar15;
  ulonglong uVar16;
  int cy;
  uint dwNewLong;
  uint uVar17;
  HWND hWndInsertAfter;
  bool bVar18;
  undefined4 extraout_XMM0_Da;
  undefined1 auStackY_e8 [32];
  int local_80;
  int local_7c;
  tagMONITORINFO local_78;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_e8;
  lVar12 = *(longlong *)(param_3 + 0x80);
  lVar1 = *(longlong *)(param_2 + 0x180);
  hWnd = *(HWND *)(lVar1 + 8);
  uVar11 = 1;
  if ((param_4 == 0) && ((*(ulonglong *)(param_2 + 0x48) & 1) == 0)) goto LAB_14045f190;
  cVar6 = FUN_14014e040();
  if ((cVar6 == '\0') ||
     (hWndInsertAfter = (HWND)0xffffffffffffffff, (*(byte *)(param_2 + 0x4a) & 1) == 0)) {
    hWndInsertAfter = (HWND)0xfffffffffffffffe;
  }
  local_78.rcWork.left = 0;
  local_78.rcWork.top = 0;
  local_78.rcWork.right = 0;
  local_78.rcWork.bottom = 0;
  local_78.rcMonitor.left = 0;
  local_78.rcMonitor.top = 0;
  local_78.rcMonitor.right = 0;
  local_78.rcMonitor.bottom = 0;
  local_78.dwFlags = 0;
  local_78.cbSize = 0x28;
  BVar7 = GetMonitorInfoW(*(HMONITOR *)(lVar12 + 0x40),&local_78);
  if (BVar7 == 0) {
    FUN_1400fbed0("GetMonitorInfo failed");
    uVar11 = 0;
    goto LAB_14045f190;
  }
  sdl_quit_on_last_window_close(param_2,(param_4 == 0) + 0x217,0,0);
  uVar8 = GetWindowLongW(hWnd,-0x10);
  uVar16 = *(ulonglong *)(param_2 + 0x48);
  uVar17 = 0x80000000;
  if (((uVar16 & 0xc0000) == 0) && (uVar17 = 0x80020000, (uVar16 & 1) == 0)) {
    uVar17 = 0xca0000;
    if ((uVar16 & 0x10) != 0) {
      cVar6 = FUN_1401106d0("SDL_BORDERLESS_WINDOWED_STYLE",1);
      uVar17 = 0x80020000;
      if (cVar6 != '\0') {
        uVar17 = 0x80ca0000;
      }
      uVar16 = *(ulonglong *)(param_2 + 0x48);
    }
    if ((uVar16 & 0x20) != 0) {
      if ((uVar16 & 0x10) != 0) {
        cVar6 = FUN_1401106d0("SDL_BORDERLESS_RESIZABLE_STYLE",1);
        if (cVar6 == '\0') goto LAB_14045ed2a;
      }
      uVar17 = uVar17 | 0x50000;
    }
LAB_14045ed2a:
    if (*(longlong *)(param_2 + 0x180) != 0) {
      uVar17 = uVar17 | (uint)*(byte *)(*(longlong *)(param_2 + 0x180) + 0x62) << 0x10;
    }
    uVar17 = (*(uint *)(param_2 + 0x48) & 0x40) << 0x17 | uVar17;
  }
  dwNewLong = uVar17 | uVar8 & 0x7f30ffff;
  LVar9 = GetWindowLongW(hWnd,-0x14);
  if (param_4 == 0) {
    local_4c = *(int *)(lVar1 + 0x98);
    local_50 = 0;
    lVar12 = parameter_s_is_invalid("dwmapi.dll");
    if (lVar12 != 0) {
      pcVar13 = (code *)failed_loading_s(lVar12,"DwmGetWindowAttribute");
      pcVar14 = (code *)failed_loading_s(lVar12,"DwmSetWindowAttribute");
      if (pcVar14 != (code *)0x0 && pcVar13 != (code *)0x0) {
        (*pcVar13)(hWnd,0x21,&local_50,4);
        (*pcVar14)(hWnd,0x21,&local_4c,4);
      }
      FUN_140165790(lVar12);
    }
    local_4c = *(int *)(lVar1 + 0x9c);
    local_50 = -1;
    lVar12 = parameter_s_is_invalid("dwmapi.dll");
    if (lVar12 != 0) {
      pcVar13 = (code *)failed_loading_s(lVar12,"DwmGetWindowAttribute");
      pcVar14 = (code *)failed_loading_s(lVar12,"DwmSetWindowAttribute");
      if (pcVar14 != (code *)0x0 && pcVar13 != (code *)0x0) {
        (*pcVar13)(hWnd,0x22,&local_50,4);
        (*pcVar14)(hWnd,0x22,&local_4c,4);
      }
      FUN_140165790(lVar12);
    }
    bVar18 = false;
    bVar2 = false;
    if (*(char *)(lVar1 + 0x60) == '\x01') {
      if (*(char *)(lVar1 + 0x61) == '\0') {
        *(undefined1 *)(lVar1 + 99) = 1;
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    if ((uVar8 & 0x40000000) == 0) {
      pHVar15 = GetMenu(hWnd);
      bVar18 = pHVar15 != (HMENU)0x0;
    }
    FUN_14045ca80(param_2,dwNewLong,LVar9,bVar18);
    *(undefined1 *)(lVar1 + 0x60) = 0;
    iVar10 = local_4c;
    cy = local_50;
  }
  else {
    LVar9 = local_78.rcMonitor.left;
    LVar3 = local_78.rcMonitor.top;
    local_7c = local_78.rcMonitor.left;
    local_80 = local_78.rcMonitor.top;
    if ((uVar8 & 0x1000000) != 0) {
      *(undefined1 *)(lVar1 + 0x60) = 1;
      dwNewLong = uVar17 | uVar8 & 0x7e30ffff;
    }
    LVar4 = local_78.rcMonitor.right;
    LVar5 = local_78.rcMonitor.bottom;
    local_4c = 1;
    local_50 = 0;
    lVar12 = parameter_s_is_invalid("dwmapi.dll");
    if (lVar12 == 0) {
      local_50 = 0;
    }
    else {
      pcVar13 = (code *)failed_loading_s(lVar12,"DwmGetWindowAttribute");
      pcVar14 = (code *)failed_loading_s(lVar12,"DwmSetWindowAttribute");
      if (pcVar14 != (code *)0x0 && pcVar13 != (code *)0x0) {
        (*pcVar13)(hWnd,0x21,&local_50,4);
        (*pcVar14)(hWnd,0x21,&local_4c,4);
      }
      FUN_140165790(lVar12);
    }
    *(int *)(lVar1 + 0x98) = local_50;
    local_4c = -2;
    local_50 = -1;
    lVar12 = parameter_s_is_invalid("dwmapi.dll");
    if (lVar12 == 0) {
      iVar10 = -1;
    }
    else {
      pcVar13 = (code *)failed_loading_s(lVar12,"DwmGetWindowAttribute");
      pcVar14 = (code *)failed_loading_s(lVar12,"DwmSetWindowAttribute");
      if (pcVar14 != (code *)0x0 && pcVar13 != (code *)0x0) {
        (*pcVar13)(hWnd,0x22,&local_50,4);
        (*pcVar14)(hWnd,0x22,&local_4c,4);
      }
      FUN_140165790(lVar12);
      iVar10 = local_50;
    }
    *(int *)(lVar1 + 0x9c) = iVar10;
    bVar2 = false;
    iVar10 = LVar4 - LVar9;
    cy = LVar5 - LVar3;
  }
  SetWindowLongW(hWnd,-0x10,dwNewLong);
  *(undefined1 *)(lVar1 + 0x5b) = 1;
  SetWindowPos(hWnd,hWndInsertAfter,local_7c,local_80,iVar10,cy,*(uint *)(lVar1 + 0xd0) | 0x10);
  *(undefined1 *)(lVar1 + 0x5b) = 0;
  *(undefined1 *)(lVar1 + 99) = 0;
  if (bVar2) {
    FUN_14045e7f0(extraout_XMM0_Da,param_2);
  }
  uVar11 = 1;
LAB_14045f190:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStackY_e8)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStackY_e8);
}

