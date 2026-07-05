/**
 * Function: uhid_write_getoverlappedresult
 * Address:  140175630
 * Signature: undefined uhid_write_getoverlappedresult(void)
 * Body size: 473 bytes
 */


uint uhid_write_getoverlappedresult(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  size_t sVar5;
  longlong lVar6;
  void *_Dst;
  wchar_t *pwVar7;
  undefined1 auStackY_68 [32];
  DWORD local_34;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStackY_68;
  local_34 = 0;
  FUN_140160cf0(param_1[6]);
  param_1[6] = 0;
  if (param_2 == (void *)0x0 || param_3 == 0) {
    sVar5 = wcslen(L"Zero buffer/length");
    lVar6 = FUN_14017b9c0("UTF-8","WCHAR_T",L"Zero buffer/length",sVar5 * 2 + 2);
    if (lVar6 == 0) {
      FUN_1400fc040();
    }
    else {
      FUN_1400fbed0(&DAT_141339891,lVar6);
      FUN_140160cf0(lVar6);
    }
  }
  else {
    FUN_1400fc040();
    if (*(int *)(param_1 + 0x12) != 0) {
      cVar1 = (*DAT_141526290)(*param_1,param_2,param_3 & 0xffffffff);
      uVar4 = -(uint)(cVar1 == '\0') | (uint)param_3;
      goto LAB_1401757b8;
    }
    _Dst = param_2;
    if (param_3 < *(ushort *)((longlong)param_1 + 0xc)) {
      _Dst = (void *)param_1[2];
      if (_Dst == (void *)0x0) {
        _Dst = (void *)FUN_140160c40();
        param_1[2] = _Dst;
      }
      memcpy(_Dst,param_2,param_3);
      memset((void *)((longlong)_Dst + param_3),0,*(ushort *)((longlong)param_1 + 0xc) - param_3);
      param_3 = (ulonglong)*(ushort *)((longlong)param_1 + 0xc);
    }
    BVar2 = WriteFile((HANDLE)*param_1,_Dst,(DWORD)param_3,&local_34,(LPOVERLAPPED)(param_1 + 0xd));
    uVar4 = local_34;
    if (BVar2 != 0) goto LAB_1401757b8;
    DVar3 = GetLastError();
    if (DVar3 == 0x3e5) {
      DVar3 = WaitForSingleObject((HANDLE)param_1[0x10],1000);
      if (DVar3 == 0) {
        BVar2 = GetOverlappedResult((HANDLE)*param_1,(LPOVERLAPPED)(param_1 + 0xd),&local_34,0);
        uVar4 = local_34;
        if (BVar2 != 0) goto LAB_1401757b8;
        pwVar7 = L"hid_write/GetOverlappedResult";
      }
      else {
        pwVar7 = L"hid_write/WaitForSingleObject";
      }
    }
    else {
      pwVar7 = L"WriteFile";
    }
    uls_0x08x_ls(param_1 + 6,pwVar7);
  }
  uVar4 = 0xffffffff;
LAB_1401757b8:
  if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStackY_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStackY_68);
  }
  return uVar4;
}

