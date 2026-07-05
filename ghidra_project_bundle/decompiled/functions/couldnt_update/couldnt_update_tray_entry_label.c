/**
 * Function: couldnt_update_tray_entry_label
 * Address:  14017d770
 * Signature: undefined couldnt_update_tray_entry_label(void)
 * Body size: 198 bytes
 */


void couldnt_update_tray_entry_label(undefined8 *param_1,undefined8 param_2)

{
  BOOL BVar1;
  wchar_t *_Str;
  size_t sVar2;
  undefined1 auStack_88 [32];
  MENUITEMINFOW local_68;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  if (param_1 != (undefined8 *)0x0) {
    FUN_1400fd420(param_1 + 2,0x1000,&DAT_141339891,param_2);
    _Str = (wchar_t *)FUN_14017d6b0(param_2);
    if (_Str != (wchar_t *)0x0) {
      local_68.cbSize = 0x50;
      local_68.fMask = 0x40;
      local_68.dwTypeData = _Str;
      sVar2 = wcslen(_Str);
      local_68.cch = (UINT)sVar2;
      BVar1 = SetMenuItemInfoW(*(HMENU *)*param_1,*(UINT *)(param_1 + 1),1,&local_68);
      if (BVar1 == 0) {
        FUN_1400fbed0("Couldn\'t update tray entry label");
      }
      FUN_140160cf0(_Str);
    }
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_88);
}

