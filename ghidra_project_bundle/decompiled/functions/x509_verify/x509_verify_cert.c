/**
 * Function: x509_verify_cert
 * Address:  140bd92b0
 * Signature: undefined x509_verify_cert(void)
 * Body size: 103 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
x509_verify_cert(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x140bd92ba;
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\x509_vfy.c",0x120,"X509_verify_cert",param_4,uVar1);
    FUN_140b91cc0(0xb,0xc0102,0);
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    uVar1 = FUN_140bda390();
    return uVar1;
  }
  uVar1 = x509_verify_x509();
  return uVar1;
}

