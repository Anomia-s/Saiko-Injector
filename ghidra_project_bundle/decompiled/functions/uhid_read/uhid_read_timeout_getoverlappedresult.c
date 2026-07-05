/**
 * Function: uhid_read_timeout_getoverlappedresult
 * Address:  140175810
 * Signature: undefined uhid_read_timeout_getoverlappedresult(void)
 * Body size: 576 bytes
 */


ulonglong uhid_read_timeout_getoverlappedresult
                    (undefined8 *param_1,void *param_2,ulonglong param_3,DWORD param_4)

{
  HANDLE hEvent;
  DWORD DVar1;
  BOOL BVar2;
  size_t sVar3;
  longlong lVar4;
  char *_Src;
  ulonglong _Size;
  undefined1 auStackY_78 [32];
  DWORD local_44;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStackY_78;
  local_44 = 0;
  FUN_140160cf0(param_1[6]);
  param_1[6] = 0;
  if (param_2 == (void *)0x0 || param_3 == 0) {
    sVar3 = wcslen(L"Zero buffer/length");
    lVar4 = FUN_14017b9c0("UTF-8","WCHAR_T",L"Zero buffer/length",sVar3 * 2 + 2);
    if (lVar4 == 0) {
      FUN_1400fc040();
      _Size = 0xffffffff;
    }
    else {
      FUN_1400fbed0(&DAT_141339891,lVar4);
      FUN_140160cf0(lVar4);
      _Size = 0xffffffff;
    }
    goto LAB_140175a1d;
  }
  FUN_1400fc040();
  hEvent = (HANDLE)param_1[0xc];
  if (*(int *)(param_1 + 7) == 0) {
    *(undefined4 *)(param_1 + 7) = 1;
    memset((void *)param_1[8],0,param_1[3]);
    ResetEvent(hEvent);
    BVar2 = ReadFile((HANDLE)*param_1,(LPVOID)param_1[8],*(DWORD *)(param_1 + 3),&local_44,
                     (LPOVERLAPPED)(param_1 + 9));
    if (BVar2 == 0) {
      DVar1 = GetLastError();
      if (DVar1 != 0x3e5) {
        uls_0x08x_ls(param_1 + 6,L"ReadFile");
        CancelIo((HANDLE)*param_1);
        *(undefined4 *)(param_1 + 7) = 0;
        _Size = 0xffffffff;
        goto LAB_140175a1d;
      }
      goto LAB_140175884;
    }
    *(undefined4 *)(param_1 + 7) = 0;
    if (local_44 != 0) goto LAB_1401759a1;
  }
  else {
LAB_140175884:
    DVar1 = 0xffffffff;
    if (-1 < (int)param_4) {
      DVar1 = param_4;
    }
    DVar1 = WaitForSingleObject(hEvent,DVar1);
    _Size = 0;
    if (DVar1 != 0) goto LAB_140175a1d;
    BVar2 = GetOverlappedResult((HANDLE)*param_1,(LPOVERLAPPED)(param_1 + 9),&local_44,0);
    *(undefined4 *)(param_1 + 7) = 0;
    if (BVar2 != 0 && local_44 != 0) {
LAB_1401759a1:
      _Src = (char *)param_1[8];
      if (*_Src == '\0') {
        local_44 = local_44 - 1;
        _Size = (ulonglong)local_44;
        if (param_3 < local_44) {
          _Size = param_3;
        }
        _Src = _Src + 1;
      }
      else {
        _Size = (ulonglong)local_44;
        if (param_3 < local_44) {
          _Size = param_3;
        }
      }
      memcpy(param_2,_Src,_Size);
      goto LAB_140175a1d;
    }
    if (BVar2 == 0) {
      uls_0x08x_ls(param_1 + 6,L"hid_read_timeout/GetOverlappedResult");
      _Size = 0xffffffff;
      goto LAB_140175a1d;
    }
  }
  _Size = 0;
LAB_140175a1d:
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStackY_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStackY_78);
  }
  return _Size & 0xffffffff;
}

