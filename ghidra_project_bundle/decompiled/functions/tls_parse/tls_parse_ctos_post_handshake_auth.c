/**
 * Function: tls_parse_ctos_post_handshake_auth
 * Address:  140cb8510
 * Signature: undefined tls_parse_ctos_post_handshake_auth(void)
 * Body size: 105 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_post_handshake_auth(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_srvr.c",0x614,"tls_parse_ctos_post_handshake_auth");
    FUN_140ba3290(param_1,0x32,0x116,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xba0) = 2;
  return 1;
}

