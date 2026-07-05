/**
 * Function: sdlwindowcreatewin32pixel_format_hwnd
 * Address:  14045cfe0
 * Signature: undefined sdlwindowcreatewin32pixel_format_hwnd(void)
 * Body size: 1329 bytes
 */


ulonglong sdlwindowcreatewin32pixel_format_hwnd
                    (longlong param_1,longlong param_2,undefined4 param_3)

{
  DWORD dwExStyle;
  undefined4 uVar1;
  char cVar2;
  int iPixelFormat;
  BOOL BVar3;
  uint uVar4;
  undefined8 uVar5;
  HWND pHVar6;
  HWND pHVar7;
  code *pcVar8;
  HRGN ho;
  HDC hdc;
  HWND hWndParent;
  ulonglong uVar9;
  DWORD DVar10;
  char *pcVar11;
  DWORD dwStyle;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStackY_e8 [32];
  undefined1 local_88 [8];
  HRGN pHStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_e8;
  uVar5 = FUN_14014ff10(param_3,"sdl2-compat.external_window",0);
  pHVar6 = (HWND)FUN_14014ff10(param_3,"SDL.window.create.win32.hwnd",uVar5);
  if (pHVar6 == (HWND)0x0) {
    uVar9 = *(ulonglong *)(param_2 + 0x48);
    if ((uVar9 & 0x20000) == 0) {
      if (*(longlong *)(param_2 + 0x198) == 0) {
        hWndParent = (HWND)0x0;
      }
      else {
        hWndParent = *(HWND *)(*(longlong *)(*(longlong *)(param_2 + 0x198) + 0x180) + 8);
      }
    }
    else {
      hWndParent = CreateWindowExW(0,DAT_141526118,L"",0x6000000,0,0,0x20,0x20,(HWND)0x0,(HMENU)0x0,
                                   DAT_141526128,(LPVOID)0x0);
      uVar9 = *(ulonglong *)(param_2 + 0x48);
    }
    dwStyle = 0x86000000;
    if (((uVar9 & 0xc0000) == 0) && (dwStyle = 0x86020000, (uVar9 & 1) == 0)) {
      uVar4 = 0xca0000;
      if ((uVar9 & 0x10) != 0) {
        cVar2 = FUN_1401106d0("SDL_BORDERLESS_WINDOWED_STYLE",1);
        uVar4 = 0x80020000;
        if (cVar2 != '\0') {
          uVar4 = 0x80ca0000;
        }
        uVar9 = *(ulonglong *)(param_2 + 0x48);
      }
      if (((uVar9 & 0x20) != 0) &&
         (((uVar9 & 0x10) == 0 ||
          (cVar2 = FUN_1401106d0("SDL_BORDERLESS_RESIZABLE_STYLE",1), cVar2 != '\0')))) {
        uVar4 = uVar4 | 0x50000;
      }
      if (*(longlong *)(param_2 + 0x180) != 0) {
        uVar4 = uVar4 | (uint)*(byte *)(*(longlong *)(param_2 + 0x180) + 0x62) << 0x10;
      }
      uVar9 = *(ulonglong *)(param_2 + 0x48);
      dwStyle = ((uint)uVar9 & 0x40) << 0x17 | uVar4 | 0x6000000;
    }
    DVar10 = (uint)((uVar9 & 0xe0000) != 0) * 0x80;
    dwExStyle = DVar10 + 0x8000000;
    if ((uVar9 & 0x800c0000) == 0) {
      dwExStyle = DVar10;
    }
    FUN_14045da40(param_2,0);
    FUN_14045ca80(param_2,dwStyle,dwExStyle,0);
    pHVar6 = CreateWindowExW(dwExStyle,DAT_141526118,L"",dwStyle,local_88._0_4_,local_4c,local_50,
                             local_54,hWndParent,(HMENU)0x0,DAT_141526128,(LPVOID)0x0);
    if (pHVar6 == (HWND)0x0) {
      pcVar11 = "Couldn\'t create window";
      goto LAB_14045d496;
    }
    FUN_14045dbb0(pHVar6);
    FUN_14016d260(param_1);
    cVar2 = setprop_failed(*(undefined8 *)(param_1 + 0x678),param_2,pHVar6,hWndParent);
    if (cVar2 != '\0') {
      SetWindowPos(pHVar6,(HWND)0x0,0,0,0,0,0x237);
      if ((*(ulonglong *)(param_2 + 0x48) & 0x40) != 0) {
        *(ulonglong *)(param_2 + 0x48) = *(ulonglong *)(param_2 + 0x48) & 0xfffffffffffffff7;
        ShowWindow(pHVar6,7);
      }
      goto LAB_14045d061;
    }
    DestroyWindow(pHVar6);
    if (hWndParent != (HWND)0x0) {
      DestroyWindow(hWndParent);
    }
  }
  else {
    *(byte *)(param_2 + 0x49) = *(byte *)(param_2 + 0x49) | 8;
    hWndParent = (HWND)0x0;
    cVar2 = setprop_failed(*(undefined8 *)(param_1 + 0x678),param_2,pHVar6,0);
    if (cVar2 == '\0') goto LAB_14045d4d3;
LAB_14045d061:
    if (((*(byte *)(param_2 + 0x4b) & 0x40) != 0) &&
       (pHVar7 = (HWND)parameter_s_is_invalid("dwmapi.dll"), pHVar7 != (HWND)0x0)) {
      pcVar8 = (code *)failed_loading_s(pHVar7,"DwmEnableBlurBehindWindow");
      if (pcVar8 != (code *)0x0) {
        ho = CreateRectRgn(-1,-1,0,0);
        local_88._0_2_ = 3;
        local_88._2_2_ = 0;
        local_88._4_4_ = 1;
        local_78 = local_78 & 0xffffffff00000000;
        pHStack_80 = ho;
        (*pcVar8)(pHVar6,local_88);
        DeleteObject(ho);
      }
      FUN_140165790(pHVar7);
      hWndParent = pHVar7;
    }
    pHVar6 = (HWND)FUN_14014ff10(param_3,"SDL.window.create.win32.pixel_format_hwnd",0);
    if (pHVar6 != (HWND)0x0) {
      hdc = GetDC(pHVar6);
      iPixelFormat = GetPixelFormat(hdc);
      local_78 = 0;
      uStack_70._0_1_ = '\0';
      uStack_70._1_1_ = '\0';
      uStack_70._2_1_ = '\0';
      uStack_70._3_1_ = '\0';
      uStack_70._4_4_ = 0;
      local_88._0_2_ = 0;
      local_88._2_2_ = 0;
      local_88._4_4_ = 0;
      pHStack_80 = (HRGN)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      DescribePixelFormat(hdc,iPixelFormat,0x28,(LPPIXELFORMATDESCRIPTOR)local_88);
      ReleaseDC(pHVar6,hdc);
      BVar3 = SetPixelFormat(*(HDC *)(*(longlong *)(param_2 + 0x180) + 0x18),iPixelFormat,
                             (LPPIXELFORMATDESCRIPTOR)local_88);
      if (BVar3 != 0) {
        hWndParent = (HWND)CONCAT71((int7)((ulonglong)local_88 >> 8),1);
        goto LAB_14045d4d3;
      }
      FUN_14045dd90(extraout_XMM0_Da,param_2);
      pcVar11 = "SetPixelFormat()";
LAB_14045d496:
      uVar4 = FUN_1403d7710(pcVar11);
      hWndParent = (HWND)(ulonglong)uVar4;
      goto LAB_14045d4d3;
    }
    hWndParent = (HWND)CONCAT71((int7)((ulonglong)hWndParent >> 8),1);
    if ((*(byte *)(param_2 + 0x48) & 2) == 0) goto LAB_14045d4d3;
    if (((*(int *)(param_1 + 1000) == 4) ||
        (cVar2 = FUN_1401106d0("SDL_VIDEO_FORCE_EGL",0), cVar2 != '\0')) &&
       ((*(longlong *)(param_1 + 0x680) == 0 ||
        (cVar2 = sdl_opengl_es_driver(param_1), cVar2 != '\0')))) {
      cVar2 = could_not_create_gles_window_surface(param_1,param_2);
      uVar1 = extraout_XMM0_Da_00;
    }
    else {
      cVar2 = no_matching_gl_pixel_format_available(param_1,param_2);
      uVar1 = extraout_XMM0_Da_01;
    }
    if (cVar2 != '\0') goto LAB_14045d4d3;
    FUN_14045dd90(uVar1,param_2);
  }
  hWndParent = (HWND)0x0;
LAB_14045d4d3:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStackY_e8)) {
    return (ulonglong)hWndParent & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStackY_e8);
}

