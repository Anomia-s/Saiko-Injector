/**
 * Function: rsa_pss_verify_param
 * Address:  140c91ee0
 * Signature: undefined rsa_pss_verify_param(void)
 * Body size: 183 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000140c91f8c) */

undefined8 rsa_pss_verify_param(void)

{
  int iVar1;
  int *in_R9;
  
  iVar1 = FUN_140c165f0();
  if (iVar1 != 0) {
    if ((in_R9 == (int *)0x0) || (-1 < *in_R9)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_ameth.c",0x25c,"rsa_pss_verify_param");
      FUN_140b91cc0(4,0x8b,0);
      return 0;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_ameth.c",0x254,"rsa_pss_verify_param");
    FUN_140b91cc0(4,0x96,0);
  }
  return 0;
}

