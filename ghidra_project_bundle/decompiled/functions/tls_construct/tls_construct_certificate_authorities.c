/**
 * Function: tls_construct_certificate_authorities
 * Address:  140c312d0
 * Signature: undefined tls_construct_certificate_authorities(void)
 * Body size: 321 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_certificate_authorities(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140bb7280();
  if (lVar2 == 0) {
    return 2;
  }
  iVar1 = FUN_140b77980(lVar2);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_140c22430(param_2,0x2f,2);
  if ((iVar1 == 0) || (iVar1 = FUN_140c22090(param_2,2), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions.c",0x516,"tls_construct_certificate_authorities");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  iVar1 = FUN_140bb72e0(param_1,lVar2,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_140c21e20(param_2);
  if (iVar1 != 0) {
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions.c",0x520,"tls_construct_certificate_authorities");
  FUN_140ba3290(param_1,0x50,0xc0103,0);
  return 0;
}

