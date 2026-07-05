/**
 * Function: tls13_restore_handshake_digest_for_pha
 * Address:  140bb98c0
 * Signature: undefined tls13_restore_handshake_digest_for_pha(void)
 * Body size: 175 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls13_restore_handshake_digest_for_pha(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0xbc0) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0xb1a,"tls13_restore_handshake_digest_for_pha");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  iVar1 = FUN_140b70a90(*(undefined8 *)(param_1 + 0x1b0));
  if (iVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0xb1f,"tls13_restore_handshake_digest_for_pha");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  return 1;
}

