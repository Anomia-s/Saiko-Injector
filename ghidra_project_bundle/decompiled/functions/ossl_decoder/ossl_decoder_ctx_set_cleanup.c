/**
 * Function: ossl_decoder_ctx_set_cleanup
 * Address:  140c2c380
 * Signature: undefined ossl_decoder_ctx_set_cleanup(void)
 * Body size: 86 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_decoder_ctx_set_cleanup
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x140c2c38a;
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\encode_decode\\decoder_lib.c",0x2c2,"OSSL_DECODER_CTX_set_cleanup",param_4,
               uVar1);
    FUN_140b91cc0(0x3c,0xc0102,0);
    return 0;
  }
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}

