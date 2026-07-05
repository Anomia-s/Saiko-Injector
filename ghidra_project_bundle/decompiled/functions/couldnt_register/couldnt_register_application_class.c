/**
 * Function: couldnt_register_application_class
 * Address:  14016d930
 * Signature: undefined couldnt_register_application_class(void)
 * Body size: 530 bytes
 */


undefined8 couldnt_register_application_class(undefined *param_1,UINT param_2,HMODULE param_3)

{
  HICON hIcon;
  ATOM AVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_98 [40];
  WNDCLASSEXW local_70;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  if (DAT_141526130 == 0) {
    if (param_1 == (undefined *)0x0) {
      param_2 = 0x1020;
    }
    puVar7 = &DAT_14133eb83;
    if (param_1 != (undefined *)0x0) {
      puVar7 = param_1;
    }
    lVar4 = FUN_1400fc570(puVar7);
    DAT_141526118 = (LPCWSTR)FUN_14017b9c0("UTF-16LE","UTF-8",puVar7,lVar4 + 1);
    DAT_141526120 = param_2;
    if (param_3 == (HMODULE)0x0) {
      param_3 = GetModuleHandleW((LPCWSTR)0x0);
    }
    local_70.cbSize = 0x50;
    local_70.hIconSm = (HICON)0x0;
    local_70.hIcon = (HICON)0x0;
    local_70.hCursor = (HCURSOR)0x0;
    local_70.hbrBackground = (HBRUSH)0x0;
    local_70.lpszMenuName = (LPCWSTR)0x0;
    local_70.lpfnWndProc = sdl_windows_close_on_alt_f4;
    local_70.cbClsExtra = 0;
    local_70.cbWndExtra = 0;
    DAT_141526128 = param_3;
    local_70.style = DAT_141526120;
    local_70.hInstance = param_3;
    local_70.lpszClassName = DAT_141526118;
    pcVar5 = (char *)FUN_140110550("SDL_WINDOWS_INTRESOURCE_ICON");
    if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
      EnumResourceNamesW(DAT_141526128,(LPCWSTR)0xe,FUN_14016db50,(LONG_PTR)&local_70);
      AVar1 = RegisterClassExW(&local_70);
      uVar3 = CONCAT62(extraout_var_00,AVar1);
      hIcon = local_70.hIconSm;
    }
    else {
      uVar2 = atoi(pcVar5);
      local_70.hIcon = LoadIconW(DAT_141526128,(LPCWSTR)(ulonglong)(uVar2 & 0xffff));
      pcVar5 = (char *)FUN_140110550("SDL_WINDOWS_INTRESOURCE_ICON_SMALL");
      if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
        uVar2 = atoi(pcVar5);
        local_70.hIconSm = LoadIconW(DAT_141526128,(LPCWSTR)(ulonglong)(uVar2 & 0xffff));
      }
      AVar1 = RegisterClassExW(&local_70);
      uVar3 = CONCAT62(extraout_var,AVar1);
      hIcon = local_70.hIconSm;
    }
    local_70.hIconSm = hIcon;
    if (AVar1 == 0) {
      if (local_70.hIcon != (HICON)0x0) {
        DestroyIcon(local_70.hIcon);
      }
      if (hIcon != (HICON)0x0) {
        DestroyIcon(hIcon);
      }
      FUN_140160cf0(DAT_141526118);
      DAT_141526118 = (LPCWSTR)0x0;
      uVar6 = FUN_1400fbed0("Couldn\'t register application class");
      goto LAB_14016da99;
    }
    DAT_141526130 = 1;
  }
  else {
    DAT_141526130 = DAT_141526130 + 1;
    uVar3 = (ulonglong)DAT_141526130;
  }
  uVar6 = CONCAT71((int7)(uVar3 >> 8),1);
LAB_14016da99:
  if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_20 ^ (ulonglong)auStack_98);
  }
  return uVar6;
}

