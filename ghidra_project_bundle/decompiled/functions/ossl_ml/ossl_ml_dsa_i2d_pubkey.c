/**
 * Function: ossl_ml_dsa_i2d_pubkey
 * Address:  140dad040
 * Signature: undefined ossl_ml_dsa_i2d_pubkey(void)
 * Body size: 180 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ossl_ml_dsa_i2d_pubkey(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_140b76c30();
  lVar2 = FUN_140c0af10(param_1);
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\ml_dsa_codecs.c",0x112,
               "ossl_ml_dsa_i2d_pubkey");
    FUN_140b91cc0(0x39,0xdc,"no %s public key data available",*puVar1);
    return 0;
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_140b8c7c0(lVar2,puVar1[9],
                          "providers\\implementations\\encode_decode\\ml_dsa_codecs.c",0x117);
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  return *(undefined4 *)(puVar1 + 9);
}

