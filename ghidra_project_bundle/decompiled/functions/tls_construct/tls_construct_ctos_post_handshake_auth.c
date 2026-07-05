/**
 * Function: tls_construct_ctos_post_handshake_auth
 * Address:  140cbd420
 * Signature: undefined tls_construct_ctos_post_handshake_auth(void)
 * Body size: 192 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_post_handshake_auth(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xba4) == 0) {
    return 2;
  }
  iVar1 = FUN_140c22430(param_2,0x31,2);
  if (iVar1 != 0) {
    iVar1 = FUN_140c22090(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_140c21e20(param_2);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0xba0) = 1;
        return 1;
      }
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions_clnt.c",0x508,"tls_construct_ctos_post_handshake_auth");
  FUN_140ba3290(param_1,0x50,0xc0103,0);
  return 0;
}

