/**
 * Function: tls13_save_handshake_digest_for_pha
 * Address:  140bb97d0
 * Signature: undefined tls13_save_handshake_digest_for_pha(void)
 * Body size: 234 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls13_save_handshake_digest_for_pha(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xbc0) != 0) {
    return 1;
  }
  iVar1 = ssl3_digest_cached_records(param_1,1);
  if (iVar1 != 0) {
    lVar2 = FUN_140b70980();
    *(longlong *)(param_1 + 0xbc0) = lVar2;
    if (lVar2 != 0) {
      iVar1 = FUN_140b70a90(lVar2,*(undefined8 *)(param_1 + 0x1b0));
      if (iVar1 != 0) {
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",0xb0a,"tls13_save_handshake_digest_for_pha");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      FUN_140b709d0(*(undefined8 *)(param_1 + 0xbc0));
      *(undefined8 *)(param_1 + 0xbc0) = 0;
      return 0;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0xb05,"tls13_save_handshake_digest_for_pha");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
  }
  return 0;
}

