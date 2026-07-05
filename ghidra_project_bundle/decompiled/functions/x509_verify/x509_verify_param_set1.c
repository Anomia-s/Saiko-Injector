/**
 * Function: x509_verify_param_set1
 * Address:  140b9bd30
 * Signature: undefined x509_verify_param_set1(void)
 * Body size: 113 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_verify_param_set1(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\x509_vpm.c",0xe2,"X509_VERIFY_PARAM_set1");
    FUN_140b91cc0(0xb,0xc0102,0);
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 | 1;
  uVar2 = FUN_140b9ba30();
  *(uint *)(param_1 + 0x10) = uVar1;
  return uVar2;
}

