/**
 * Function: uls_0x08x_ls
 * Address:  14017abf0
 * Signature: undefined uls_0x08x_ls(void)
 * Body size: 424 bytes
 */


void uls_0x08x_ls(undefined8 *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  DWORD DVar2;
  size_t sVar3;
  wchar_t *_Str;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStackY_888 [32];
  WCHAR local_848 [1028];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStackY_888;
  DVar2 = GetLastError();
  FUN_140160cf0(*param_1);
  *param_1 = 0;
  FUN_1400fc040();
  if (param_2 != (wchar_t *)0x0) {
    DVar2 = FormatMessageW(0x1200,(LPCVOID)0x0,DVar2,0x400,local_848,0x400,(va_list *)0x0);
    sVar3 = wcslen(param_2);
    iVar6 = DVar2 + (int)sVar3 + 0x10;
    _Str = (wchar_t *)FUN_140160c70(iVar6,2);
    if (_Str != (wchar_t *)0x0) {
      iVar6 = FUN_1400fd530(_Str,iVar6,L"%.*ls: (0x%08X) %.*ls",sVar3 & 0xffffffff);
      if (iVar6 < 0) {
        *_Str = L'\0';
      }
      else {
        uVar5 = (ulonglong)(DVar2 + (int)sVar3 + 0xe);
        wVar1 = _Str[uVar5];
        while (((ulonglong)(ushort)wVar1 < 0x21 &&
               ((0x100002400U >> ((ulonglong)(ushort)wVar1 & 0x3f) & 1) != 0))) {
          _Str[uVar5] = L'\0';
          uVar5 = (ulonglong)((int)uVar5 - 1);
          wVar1 = _Str[uVar5];
        }
        sVar3 = wcslen(_Str);
        lVar4 = FUN_14017b9c0("UTF-8","WCHAR_T",_Str,sVar3 * 2 + 2);
        if (lVar4 != 0) {
          FUN_1400fbed0(&DAT_141339891,lVar4);
          FUN_140160cf0(lVar4);
        }
        FUN_140160cf0(_Str);
      }
    }
  }
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStackY_888)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStackY_888);
  }
  return;
}

