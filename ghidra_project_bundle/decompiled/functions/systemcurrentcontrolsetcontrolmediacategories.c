/**
 * Function: systemcurrentcontrolsetcontrolmediacategories
 * Address:  1403d7c50
 * Signature: undefined systemcurrentcontrolsetcontrolmediacategories(void)
 * Body size: 843 bytes
 */


longlong systemcurrentcontrolsetcontrolmediacategories(wchar_t *param_1,longlong param_2)

{
  int iVar1;
  LSTATUS LVar2;
  longlong lVar3;
  LPCWSTR lpSubKey;
  size_t sVar4;
  wchar_t *_Str;
  undefined1 auStackY_188 [32];
  DWORD local_d4;
  HKEY local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_188;
  local_d4 = 0;
  iVar1 = FUN_1400fc560(param_2,&DAT_140e0c3ac,0x10);
  if (iVar1 == 0) {
    sVar4 = wcslen(param_1);
    if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStackY_188)) {
      lVar3 = FUN_14017b9c0("UTF-8","UTF-16LE",param_1,sVar4 * 2 + 2);
      return lVar3;
    }
    goto LAB_1403d7f8b;
  }
  FUN_1400fd420(local_c8,0x80,
                "System\\CurrentControlSet\\Control\\MediaCategories\\{%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X}"
                ,*(undefined1 *)(param_2 + 3));
  lVar3 = FUN_1400fc570(local_c8);
  lpSubKey = (LPCWSTR)FUN_14017b9c0("UTF-16LE","UTF-8",local_c8,lVar3 + 1);
  LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000002,lpSubKey,0,1,&local_d0);
  FUN_140160cf0(lpSubKey);
  if (LVar2 == 0) {
    LVar2 = RegQueryValueExW(local_d0,L"Name",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_d4);
    if ((LVar2 != 0) ||
       (_Str = (wchar_t *)FUN_140160c40((ulonglong)local_d4 + 2), _Str == (wchar_t *)0x0)) {
      RegCloseKey(local_d0);
      goto LAB_1403d7e26;
    }
    LVar2 = RegQueryValueExW(local_d0,L"Name",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)_Str,&local_d4);
    RegCloseKey(local_d0);
    if (LVar2 != 0) {
      FUN_140160cf0(_Str);
      goto LAB_1403d7e26;
    }
    *(undefined2 *)((longlong)_Str + (ulonglong)(local_d4 & 0xfffffffe)) = 0;
    sVar4 = wcslen(_Str);
    lVar3 = FUN_14017b9c0("UTF-8","UTF-16LE",_Str,sVar4 * 2 + 2);
    FUN_140160cf0(_Str);
    if (lVar3 == 0) goto LAB_1403d7e26;
  }
  else {
LAB_1403d7e26:
    sVar4 = wcslen(param_1);
    lVar3 = FUN_14017b9c0("UTF-8","UTF-16LE",param_1,sVar4 * 2 + 2);
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStackY_188)) {
    return lVar3;
  }
LAB_1403d7f8b:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStackY_188);
}

