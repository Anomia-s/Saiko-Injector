/**
 * Function: providersimplementationsciphersciphercommon_b
 * Address:  140d973a0
 * Signature: undefined providersimplementationsciphersciphercommon_b(void)
 * Body size: 153 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
providersimplementationsciphersciphercommon_b
          (longlong param_1,longlong *param_2,ulonglong param_3,undefined8 *param_4,size_t *param_5)

{
  size_t _Size;
  
  _Size = *param_5;
  if (_Size != 0) {
    if (param_3 < *param_2 + _Size) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_block.c",0x46,
                 "ossl_cipher_trailingdata");
      FUN_140b91cc0(0x39,0xc0103,0);
      return 0;
    }
    memcpy((void *)(*param_2 + param_1),(void *)*param_4,_Size);
    *param_2 = *param_2 + *param_5;
    *param_5 = 0;
  }
  return 1;
}

