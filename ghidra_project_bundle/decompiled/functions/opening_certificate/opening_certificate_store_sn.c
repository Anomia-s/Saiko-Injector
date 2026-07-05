/**
 * Function: opening_certificate_store_sn
 * Address:  140c794c0
 * Signature: undefined opening_certificate_store_sn(void)
 * Body size: 202 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

HCERTSTORE opening_certificate_store_sn(longlong param_1,undefined *param_2)

{
  HCERTSTORE pvVar1;
  
  if (param_2 == (undefined *)0x0) {
    param_2 = &DAT_1413a660c;
    if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
      param_2 = *(undefined **)(param_1 + 0x28);
    }
  }
  enginese_capic(param_1,"Opening certificate store %s\n",param_2);
  pvVar1 = CertOpenStore((LPCSTR)0x9,0,0,*(DWORD *)(param_1 + 0x38),param_2);
  if (pvVar1 == (HCERTSTORE)0x0) {
    if (DAT_141700c98 == 0) {
      DAT_141700c98 = FUN_140b92700();
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    FUN_140b91cc0(DAT_141700c98,0x71,0);
    d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x59a,0);
    error_code_0x();
  }
  return pvVar1;
}

