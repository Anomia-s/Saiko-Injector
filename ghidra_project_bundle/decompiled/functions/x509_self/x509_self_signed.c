/**
 * Function: x509_self_signed
 * Address:  140bd9c70
 * Signature: undefined x509_self_signed(void)
 * Body size: 203 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_self_signed(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140b74cd0();
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\x509_vfy.c",0x65,"X509_self_signed");
    FUN_140b91cc0(0xb,0x6c,0);
  }
  else {
    iVar1 = ossl_x509v3_cache_extensions(param_1);
    if (iVar1 != 0) {
      if ((*(uint *)(param_1 + 0xd8) & 0x2000) == 0) {
        return 0;
      }
      if (param_2 == 0) {
        return 1;
      }
      uVar3 = FUN_140bf3220(param_1,lVar2);
      return uVar3;
    }
  }
  return 0xffffffff;
}

