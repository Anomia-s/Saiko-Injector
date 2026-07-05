/**
 * Function: ossl_decoder_cache_flush
 * Address:  140c2da50
 * Signature: undefined ossl_decoder_cache_flush(void)
 * Body size: 144 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_decoder_cache_flush(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140c17600(param_1,0x14);
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = FUN_140b8b770(*puVar2);
    if (iVar1 != 0) {
      FUN_140b916d0(puVar2[1],FUN_140c2e560);
      FUN_140b91320(puVar2[1]);
      FUN_140b8b7a0(*puVar2);
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\encode_decode\\decoder_pkey.c",0x31d,"ossl_decoder_cache_flush");
    FUN_140b91cc0(0x3c,0x8003c,0);
  }
  return 0;
}

