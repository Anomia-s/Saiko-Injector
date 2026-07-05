/**
 * Function: uget_input_feature_report_getoverlappedresult
 * Address:  140175bb0
 * Signature: undefined uget_input_feature_report_getoverlappedresult(void)
 * Body size: 372 bytes
 */


int uget_input_feature_report_getoverlappedresult
              (undefined8 *param_1,DWORD param_2,char *param_3,longlong param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined1 auStackY_a8 [32];
  _OVERLAPPED local_68;
  DWORD local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStackY_a8;
  local_3c = 0;
  local_68.u.Pointer = (PVOID)0x0;
  local_68.hEvent = (HANDLE)0x0;
  local_68.Internal = 0;
  local_68.InternalHigh = 0;
  FUN_140160cf0(param_1[6]);
  param_1[6] = 0;
  if (param_3 == (char *)0x0 || param_4 == 0) {
    sVar4 = wcslen(L"Zero buffer/length");
    lVar5 = FUN_14017b9c0("UTF-8","WCHAR_T",L"Zero buffer/length",sVar4 * 2 + 2);
    if (lVar5 == 0) {
      FUN_1400fc040();
    }
    else {
      FUN_1400fbed0(&DAT_141339891,lVar5);
      FUN_140160cf0(lVar5);
    }
  }
  else {
    FUN_1400fc040();
    BVar1 = DeviceIoControl((HANDLE)*param_1,param_2,param_3,(DWORD)param_4,param_3,(DWORD)param_4,
                            &local_3c,&local_68);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x3e5) goto LAB_140175c5b;
      pwVar6 = L"Get Input/Feature Report DeviceIoControl";
    }
    else {
LAB_140175c5b:
      BVar1 = GetOverlappedResult((HANDLE)*param_1,&local_68,&local_3c,1);
      if (BVar1 != 0) {
        iVar3 = local_3c + (*param_3 == '\0');
        goto LAB_140175cf6;
      }
      pwVar6 = L"Get Input/Feature Report GetOverLappedResult";
    }
    uls_0x08x_ls(param_1 + 6,pwVar6);
  }
  iVar3 = -1;
LAB_140175cf6:
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStackY_a8)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStackY_a8);
}

