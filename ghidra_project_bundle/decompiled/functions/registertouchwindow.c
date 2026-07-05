/**
 * Function: registertouchwindow
 * Address:  14015d700
 * Signature: undefined registertouchwindow(void)
 * Body size: 1988 bytes
 */


longlong registertouchwindow(void)

{
  char cVar1;
  LSTATUS LVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  undefined1 auStackY_78 [32];
  DWORD local_44;
  int local_40 [2];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStackY_78;
  couldnt_register_application_class(0,0,0);
  lVar3 = FUN_140160c70(1,0x6a0);
  if (lVar3 != 0) {
    lVar4 = FUN_140160c70(1,0x360);
    if (lVar4 != 0) {
      *(longlong *)(lVar3 + 0x678) = lVar4;
      uVar5 = initializesrwlock();
      *(undefined8 *)(lVar3 + 0x318) = uVar5;
      local_40[1] = 4;
      local_40[0] = -1;
      local_44 = 4;
      LVar2 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000001,
                            L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",0,
                            0x20019,(PHKEY)&local_38);
      iVar8 = 1;
      if (LVar2 == 0) {
        LVar2 = RegQueryValueExW((HKEY)CONCAT44(local_38._4_4_,(undefined4)local_38),
                                 L"AppsUseLightTheme",(LPDWORD)0x0,(LPDWORD)(local_40 + 1),
                                 (LPBYTE)local_40,&local_44);
        iVar8 = (LVar2 == 0 && local_40[0] == 0) + 1;
        RegCloseKey((HKEY)CONCAT44(local_38._4_4_,(undefined4)local_38));
      }
      *(int *)(lVar3 + 0x390) = iVar8;
      lVar6 = parameter_s_is_invalid("USER32.DLL");
      *(longlong *)(lVar4 + 0x10) = lVar6;
      if (lVar6 == 0) {
        FUN_1400fc040();
      }
      else {
        uVar5 = failed_loading_s(lVar6,"CloseTouchInputHandle");
        *(undefined8 *)(lVar4 + 0x18) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"GetTouchInputInfo");
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"RegisterTouchWindow");
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"SetProcessDPIAware");
        *(undefined8 *)(lVar4 + 0x30) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"SetProcessDpiAwarenessContext");
        *(undefined8 *)(lVar4 + 0x38) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"SetThreadDpiAwarenessContext");
        *(undefined8 *)(lVar4 + 0x40) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"GetThreadDpiAwarenessContext");
        *(undefined8 *)(lVar4 + 0x48) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"GetAwarenessFromDpiAwarenessContext"
                                );
        *(undefined8 *)(lVar4 + 0x50) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"EnableNonClientDpiScaling");
        *(undefined8 *)(lVar4 + 0x58) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"AdjustWindowRectExForDpi");
        *(undefined8 *)(lVar4 + 0x60) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"GetDpiForWindow");
        *(undefined8 *)(lVar4 + 0x68) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"AreDpiAwarenessContextsEqual");
        *(undefined8 *)(lVar4 + 0x70) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"IsValidDpiAwarenessContext");
        *(undefined8 *)(lVar4 + 0x78) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"GetDisplayConfigBufferSizes");
        *(undefined8 *)(lVar4 + 0x80) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"QueryDisplayConfig");
        *(undefined8 *)(lVar4 + 0x88) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"DisplayConfigGetDeviceInfo");
        *(undefined8 *)(lVar4 + 0x90) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"GetPointerType");
        *(undefined8 *)(lVar4 + 0xb0) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x10),"GetPointerPenInfo");
        *(undefined8 *)(lVar4 + 0xb8) = uVar5;
      }
      lVar6 = parameter_s_is_invalid("SHCORE.DLL");
      *(longlong *)(lVar4 + 0x98) = lVar6;
      if (lVar6 == 0) {
        FUN_1400fc040();
      }
      else {
        uVar5 = failed_loading_s(lVar6,"GetDpiForMonitor");
        *(undefined8 *)(lVar4 + 0xa0) = uVar5;
        uVar5 = failed_loading_s(*(undefined8 *)(lVar4 + 0x98),"SetProcessDpiAwareness");
        *(undefined8 *)(lVar4 + 0xa8) = uVar5;
      }
      lVar6 = parameter_s_is_invalid("DXGI.DLL");
      *(longlong *)(lVar4 + 0xc0) = lVar6;
      if (lVar6 != 0) {
        pcVar7 = (code *)failed_loading_s(lVar6,"CreateDXGIFactory");
        if (pcVar7 != (code *)0x0) {
          local_38._0_4_ = 0x7b7166ec;
          local_38._4_4_ = 0x44ae21c7;
          uStack_30 = 0xaec91ab2;
          uStack_2c = 0x69e31a32;
          (*pcVar7)(&local_38,lVar4 + 200);
        }
      }
      *(code **)(lVar3 + 8) = coinitialize_failed_0x8x_using_fallback_drag;
      *(code **)(lVar3 + 0x10) = FUN_14015e690;
      *(code **)(lVar3 + 0x20) = FUN_140461700;
      *(code **)(lVar3 + 0x28) = couldnt_find_monitor_data;
      *(code **)(lVar3 + 0x30) = couldnt_find_monitor_data;
      *(code **)(lVar3 + 0x38) = FUN_140460f80;
      *(code **)(lVar3 + 0x40) = changedisplaysettingsex_failed_s;
      *(code **)(lVar3 + 0x238) = FUN_14016d260;
      *(code **)(lVar3 + 0x228) = FUN_14016d1d0;
      *(undefined1 **)(lVar3 + 0x230) = &LAB_14016d230;
      *(code **)(lVar3 + 0x240) = FUN_14015e760;
      *(code **)(lVar3 + 0x48) = sdlwindowcreatewin32pixel_format_hwnd;
      *(code **)(lVar3 + 0x50) = FUN_14045de60;
      *(code **)(lVar3 + 0x58) = setwindowicon_failed_error_08x;
      *(code **)(lVar3 + 0x60) = FUN_14045e090;
      *(undefined1 **)(lVar3 + 0x68) = &LAB_14045e0f0;
      *(code **)(lVar3 + 0x88) = screentoclient_failed_error_08x;
      *(code **)(lVar3 + 0x98) = FUN_14045e260;
      *(code **)(lVar3 + 0xa0) = FUN_14045f9a0;
      *(code **)(lVar3 + 0xb8) = FUN_14045e310;
      *(code **)(lVar3 + 0xc0) = FUN_14045e4c0;
      *(code **)(lVar3 + 200) = FUN_14045e600;
      *(code **)(lVar3 + 0xd0) = FUN_14045e7f0;
      *(undefined1 **)(lVar3 + 0xd8) = &LAB_14045e970;
      *(code **)(lVar3 + 0xe0) = FUN_14045eb90;
      *(code **)(lVar3 + 0xe8) = FUN_14045e990;
      *(code **)(lVar3 + 0xf0) = FUN_14045eaa0;
      *(undefined1 **)(lVar3 + 0xf8) = &LAB_14045eb80;
      *(code **)(lVar3 + 0x100) = getmonitorinfo_failed;
      *(code **)(lVar3 + 0xa8) = FUN_14045fda0;
      *(code **)(lVar3 + 0xb0) = FUN_14045e480;
      *(code **)(lVar3 + 0x108) = could_not_open_icc_profile;
      *(code **)(lVar3 + 0x118) = FUN_14045f360;
      *(code **)(lVar3 + 0x120) = FUN_14045f360;
      *(code **)(lVar3 + 0x128) = FUN_14045f650;
      *(code **)(lVar3 + 0x130) = FUN_14045dd90;
      *(code **)(lVar3 + 0x138) = unable_to_create_dib;
      *(code **)(lVar3 + 0x150) = FUN_1404628b0;
      *(code **)(lVar3 + 0x158) = FUN_140462930;
      *(undefined1 **)(lVar3 + 0x160) = &LAB_14045f8f0;
      *(code **)(lVar3 + 0x2e8) = httplib::ClientImpl::vfunction2;
      *(code **)(lVar3 + 0x2f0) = in_accept_drag_and_drop_window_u_disabled_ful;
      *(code **)(lVar3 + 0x170) = that_operation_is_not_supported;
      *(code **)(lVar3 + 0x2f8) = FUN_14045fcb0;
      *(code **)(lVar3 + 0x178) = FUN_14045fd30;
      *(code **)(lVar3 + 0x168) = setwindowrgn_failed;
      *(code **)(lVar3 + 0x188) = could_not_retrieve_opengl_functions;
      *(code **)(lVar3 + 400) = FUN_140463720;
      *(code **)(lVar3 + 0x198) = FUN_140463760;
      *(code **)(lVar3 + 0x1a0) = could_not_create_gl_context;
      *(code **)(lVar3 + 0x1a8) = opengl_not_initialized;
      *(code **)(lVar3 + 0x1b8) = that_operation_is_not_supported;
      *(code **)(lVar3 + 0x1c0) = FUN_140464380;
      *(code **)(lVar3 + 0x1c8) = FUN_1404643b0;
      *(code **)(lVar3 + 0x1d0) = FUN_1404642f0;
      *(undefined8 *)(lVar3 + 0x1b0) = 0;
      cVar1 = FUN_1401106d0("SDL_VIDEO_FORCE_EGL",0);
      if (cVar1 != '\0') {
        *(code **)(lVar3 + 0x188) = FUN_1404646c0;
        *(code **)(lVar3 + 400) = FUN_140456600;
        *(code **)(lVar3 + 0x198) = FUN_140456690;
        *(code **)(lVar3 + 0x1a0) = FUN_1404647c0;
        *(undefined1 **)(lVar3 + 0x1a8) = &LAB_1404648f0;
        *(code **)(lVar3 + 0x1b8) = late_swap_tearing_currently_unsupported;
        *(code **)(lVar3 + 0x1c0) = egl_not_initialized;
        *(undefined1 **)(lVar3 + 0x1c8) = &LAB_1404648d0;
        *(undefined1 **)(lVar3 + 0x1d0) = &LAB_1404648c0;
        *(undefined1 **)(lVar3 + 0x1b0) = &LAB_1404649d0;
      }
      *(code **)(lVar3 + 0x1e0) = vulkan_already_loaded;
      *(code **)(lVar3 + 0x1e8) = FUN_140464be0;
      *(undefined1 **)(lVar3 + 0x1f0) = &LAB_140464c10;
      *(code **)(lVar3 + 0x1f8) = vkcreatewin32surfacekhr_failed_s;
      *(undefined1 **)(lVar3 + 0x200) = &LAB_140464d20;
      *(code **)(lVar3 + 0x208) = vulkan_is_not_loaded;
      *(code **)(lVar3 + 0x248) = FUN_1404653b0;
      *(code **)(lVar3 + 0x250) = FUN_140465780;
      *(code **)(lVar3 + 600) = FUN_140465750;
      *(code **)(lVar3 + 0x260) = FUN_1404659a0;
      *(code **)(lVar3 + 0x298) = couldnt_open_clipboard;
      *(code **)(lVar3 + 0x2a0) = couldnt_get_clipboard_data;
      *(code **)(lVar3 + 0x2a8) = FUN_140467510;
      *(code **)(lVar3 + 0x698) = FUN_14015e780;
      *(undefined4 *)(lVar3 + 0x38c) = 6;
      goto LAB_14015de98;
    }
  }
  FUN_14016db70();
  FUN_140160cf0(lVar3);
  lVar3 = 0;
LAB_14015de98:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStackY_78)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStackY_78);
}

