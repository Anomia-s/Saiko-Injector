/**
 * Function: capi_get_provname_returned_names_typedn
 * Address:  140c78e90
 * Signature: undefined capi_get_provname_returned_names_typedn(void)
 * Body size: 464 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
capi_get_provname_returned_names_typedn
          (undefined8 param_1,longlong *param_2,DWORD *param_3,DWORD param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  LPWSTR szProvName;
  longlong lVar3;
  DWORD local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x140c78eb0;
  enginese_capic(param_1,"capi_get_provname, index=%d\n",param_4);
  BVar1 = CryptEnumProvidersW(param_4,(DWORD *)0x0,0,param_3,(LPWSTR)0x0,local_18);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x103) {
      return 2;
    }
    if (DAT_141700c98 == 0) {
      DAT_141700c98 = FUN_140b92700();
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    FUN_140b91cc0(DAT_141700c98,0x69,0);
    d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x49a,0);
  }
  else {
    szProvName = (LPWSTR)FUN_140b8d8d0(local_18[0],"engines\\e_capi.c",0x49e);
    if (szProvName == (LPWSTR)0x0) {
      return 0;
    }
    BVar1 = CryptEnumProvidersW(param_4,(DWORD *)0x0,0,param_3,szProvName,local_18);
    if (BVar1 != 0) {
      lVar3 = err_capi_error(szProvName);
      *param_2 = lVar3;
      FUN_140b8d990(szProvName,"engines\\e_capi.c",0x4ac);
      if (*param_2 == 0) {
        return 0;
      }
      enginese_capic(param_1,"capi_get_provname, returned name=%s, type=%d\n",*param_2,*param_3);
      return 1;
    }
    DVar2 = GetLastError();
    FUN_140b8d990(szProvName,"engines\\e_capi.c",0x4a3);
    if (DVar2 == 0x103) {
      return 2;
    }
    err_capi_error(0,0x69,"engines\\e_capi.c",0x4a6);
  }
  error_code_0x(DVar2);
  return 0;
}

