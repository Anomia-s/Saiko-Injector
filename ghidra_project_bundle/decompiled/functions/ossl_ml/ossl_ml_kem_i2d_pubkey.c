/**
 * Function: ossl_ml_kem_i2d_pubkey
 * Address:  140dadc70
 * Signature: undefined ossl_ml_kem_i2d_pubkey(void)
 * Body size: 280 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_ml_kem_i2d_pubkey(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1[8] == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x11a,
               "ossl_ml_kem_i2d_pubkey");
    FUN_140b91cc0(0x39,0xdc,"no %s public key data available",*(undefined8 *)*param_1);
    return 0;
  }
  uVar1 = *(ulonglong *)(*param_1 + 0x18);
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_140b8d8d0(uVar1,"providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x122);
    *param_2 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  iVar2 = FUN_140da2cd0(*param_2,uVar1,param_1);
  if (iVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x125,
               "ossl_ml_kem_i2d_pubkey");
    FUN_140b91cc0(0x3b,0xc0103,"error encoding %s public key",*(undefined8 *)*param_1);
    FUN_140b8d990(*param_2,"providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x128);
    return 0;
  }
  return uVar1 & 0xffffffff;
}

