/**
 * Function: couldnt_locate_our_prefpath
 * Address:  14045aae0
 * Signature: undefined couldnt_locate_our_prefpath(void)
 * Body size: 630 bytes
 */


undefined8 couldnt_locate_our_prefpath(undefined1 *param_1,longlong param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  longlong lVar4;
  wchar_t *_Str;
  wchar_t *_Str_00;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 auStack_268 [32];
  wchar_t *local_248;
  wchar_t local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_268;
  if (param_2 == 0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid",&DAT_14133eb87);
  }
  else {
    local_248 = local_238;
    iVar1 = SHGetFolderPathW(0,0x801a,0,0);
    if (iVar1 < 0) {
      FUN_1403d7600("Couldn\'t locate our prefpath",iVar1);
    }
    else {
      puVar10 = &DAT_1413a2ad6;
      if (param_1 != (undefined1 *)0x0) {
        puVar10 = param_1;
      }
      lVar4 = FUN_1400fc570(puVar10);
      _Str = (wchar_t *)FUN_14017b9c0("UTF-16LE","UTF-8",puVar10,lVar4 + 1);
      if (_Str != (wchar_t *)0x0) {
        lVar4 = FUN_1400fc570(param_2);
        _Str_00 = (wchar_t *)FUN_14017b9c0("UTF-16LE","UTF-8",param_2,lVar4 + 1);
        if (_Str_00 == (wchar_t *)0x0) {
          FUN_140160cf0(_Str);
        }
        else {
          sVar5 = wcslen(_Str);
          sVar6 = wcslen(_Str_00);
          sVar7 = wcslen(local_238);
          if ((sVar7 + sVar6 + sVar5) - 0x101 < 0xfffffffffffffefb) {
            FUN_140160cf0(_Str);
            FUN_140160cf0(_Str_00);
            pcVar9 = "Path too long.";
          }
          else {
            if (*_Str != L'\0') {
              FUN_1400fc600(local_238,&DAT_1413a4fc6,0x104);
              FUN_1400fc600(local_238,_Str,0x104);
            }
            FUN_140160cf0(_Str);
            BVar2 = CreateDirectoryW(local_238,(LPSECURITY_ATTRIBUTES)0x0);
            if (BVar2 != 0) {
LAB_14045ac7b:
              FUN_1400fc600(local_238,&DAT_1413a4fc6,0x104);
              FUN_1400fc600(local_238,_Str_00,0x104);
              FUN_140160cf0(_Str_00);
              BVar2 = CreateDirectoryW(local_238,(LPSECURITY_ATTRIBUTES)0x0);
              if (BVar2 == 0) {
                DVar3 = GetLastError();
                if (DVar3 != 0xb7) goto LAB_14045ad14;
              }
              FUN_1400fc600(local_238,&DAT_1413a4fc6,0x104);
              sVar5 = wcslen(local_238);
              uVar8 = FUN_14017b9c0("UTF-8","UTF-16LE",local_238,sVar5 * 2 + 2);
              goto LAB_14045ad22;
            }
            DVar3 = GetLastError();
            if (DVar3 == 0xb7) goto LAB_14045ac7b;
            FUN_140160cf0(_Str_00);
LAB_14045ad14:
            pcVar9 = "Couldn\'t create a prefpath.";
          }
          FUN_1403d7710(pcVar9);
        }
      }
    }
  }
  uVar8 = 0;
LAB_14045ad22:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_268)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_268);
}

