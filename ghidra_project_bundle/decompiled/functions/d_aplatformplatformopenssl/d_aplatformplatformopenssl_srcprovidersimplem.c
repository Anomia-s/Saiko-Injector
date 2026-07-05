/**
 * Function: d_aplatformplatformopenssl_srcprovidersimplem
 * Address:  140d18e50
 * Signature: undefined d_aplatformplatformopenssl_srcprovidersimplem(void)
 * Body size: 170 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
d_aplatformplatformopenssl_srcprovidersimplem(longlong param_1,void *param_2,size_t param_3)

{
  if (param_3 - 1 < 0x20) {
    memcpy((void *)(param_1 + 0xa0),param_2,param_3);
    if (param_3 < 0x20) {
      memset((void *)(param_3 + 0xa0 + param_1),0,0x20 - param_3);
    }
    FUN_140d869f0(param_1 + 0x80,param_3 & 0xff);
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("D:\\a\\Platform\\Platform\\openssl-src\\providers\\implementations\\macs\\blake2_mac_impl.c"
             ,0x5e,"blake2_setkey");
  FUN_140b91cc0(0x39,0x69,0);
  return 0;
}

