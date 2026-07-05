/**
 * Function: err_capi_error
 * Address:  140c79060
 * Signature: undefined err_capi_error(void)
 * Body size: 252 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * err_capi_error(undefined8 param_1,PCCERT_CONTEXT param_2)

{
  BOOL BVar1;
  void *pvData;
  DWORD local_res18 [4];
  
  BVar1 = CertGetCertificateContextProperty(param_2,2,(void *)0x0,local_res18);
  if (BVar1 != 0) {
    pvData = (void *)FUN_140b8d8d0(local_res18[0],"engines\\e_capi.c",0x524);
    if (pvData != (void *)0x0) {
      BVar1 = CertGetCertificateContextProperty(param_2,2,pvData,local_res18);
      if (BVar1 != 0) {
        return pvData;
      }
      if (DAT_141700c98 == 0) {
        DAT_141700c98 = FUN_140b92700();
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,
                 "ERR_CAPI_error");
      FUN_140b91cc0(DAT_141700c98,0x70,0);
      d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x52a,0);
      error_code_0x();
      FUN_140b8d990(pvData,"engines\\e_capi.c",0x52c);
    }
  }
  return (void *)0x0;
}

