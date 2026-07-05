/**
 * Function: pkcs7_add0_attrib_signing_time
 * Address:  140d73050
 * Signature: undefined pkcs7_add0_attrib_signing_time(void)
 * Body size: 170 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkcs7_add0_attrib_signing_time(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (param_2 == 0) {
    param_2 = FUN_140bd9e40(0);
    lVar2 = param_2;
    if (param_2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pkcs7\\pk7_attr.c",0x70,"PKCS7_add0_attrib_signing_time");
      FUN_140b91cc0(0x21,0x8000b,0);
      return 0;
    }
  }
  iVar1 = FUN_140cddff0(param_1,0x34,0x17,param_2);
  if (iVar1 == 0) {
    FUN_140c2e8b0(lVar2);
    return 0;
  }
  return 1;
}

