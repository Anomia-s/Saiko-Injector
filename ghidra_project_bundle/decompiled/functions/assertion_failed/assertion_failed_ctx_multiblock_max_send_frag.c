/**
 * Function: assertion_failed_ctx_multiblock_max_send_frag
 * Address:  140d09120
 * Signature: undefined assertion_failed_ctx_multiblock_max_send_frag(void)
 * Body size: 74 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int assertion_failed_ctx_multiblock_max_send_frag(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    s_d_openssl_internal_error_sn
              ("assertion failed: ctx->multiblock_max_send_fragment != 0",
               "providers\\implementations\\ciphers\\cipher_aes_cbc_hmac_sha256_hw.c",0x2f8);
  }
  return (*(int *)(param_1 + 0x1e0) + 0x30U & 0xfffffff0) + 0x15;
}

