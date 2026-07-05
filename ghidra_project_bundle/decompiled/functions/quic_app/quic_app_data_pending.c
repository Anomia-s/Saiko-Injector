/**
 * Function: quic_app_data_pending
 * Address:  140bad880
 * Signature: undefined quic_app_data_pending(void)
 * Body size: 100 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 quic_app_data_pending(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    *(undefined4 *)(param_1 + 7) = 0x50;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_tls.c",0x227,"quic_app_data_pending");
  FUN_140b91cc0(0x14,0xc0101,0);
  if (param_1 != (longlong *)0x0) {
    *(uint *)(*param_1 + 0xa8) = *(uint *)(*param_1 + 0xa8) | 2;
  }
  return 0;
}

