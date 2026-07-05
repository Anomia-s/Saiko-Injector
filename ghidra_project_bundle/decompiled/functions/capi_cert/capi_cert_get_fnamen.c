/**
 * Function: capi_cert_get_fnamen
 * Address:  140c79160
 * Signature: undefined capi_cert_get_fnamen(void)
 * Body size: 297 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 capi_cert_get_fnamen(undefined8 param_1,PCCERT_CONTEXT param_2)

{
  BOOL BVar1;
  void *pvData;
  undefined8 uVar2;
  DWORD local_res18 [4];
  
  enginese_capic(param_1,"capi_cert_get_fname\n");
  BVar1 = CertGetCertificateContextProperty(param_2,0xb,(void *)0x0,local_res18);
  if (BVar1 != 0) {
    pvData = (void *)FUN_140b8d8d0(local_res18[0],"engines\\e_capi.c",0x553);
    if (pvData != (void *)0x0) {
      BVar1 = CertGetCertificateContextProperty(param_2,0xb,pvData,local_res18);
      if (BVar1 != 0) {
        uVar2 = err_capi_error(pvData);
        FUN_140b8d990(pvData,"engines\\e_capi.c",0x559);
        return uVar2;
      }
      if (DAT_141700c98 == 0) {
        DAT_141700c98 = FUN_140b92700();
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,
                 "ERR_CAPI_error");
      FUN_140b91cc0(DAT_141700c98,0x6f,0);
      d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x55c,0);
      error_code_0x();
      FUN_140b8d990(pvData,"engines\\e_capi.c",0x55f);
    }
  }
  return 0;
}

