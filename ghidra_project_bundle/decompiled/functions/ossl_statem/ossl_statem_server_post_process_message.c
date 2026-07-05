/**
 * Function: ossl_statem_server_post_process_message
 * Address:  140bbdb20
 * Signature: undefined ossl_statem_server_post_process_message(void)
 * Body size: 255 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_statem_server_post_process_message(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0xac) == 0x16) {
    uVar2 = tls_handle_status_request();
    return uVar2;
  }
  if (*(int *)(param_1 + 0xac) != 0x20) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x53e,"ossl_statem_server_post_process_message");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  if ((*(int *)(param_1 + 0xc4) == 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8) != 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2c0) != 0)))) {
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0xdbf,"tls_post_process_client_key_exchange");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
    iVar1 = ssl3_digest_cached_records(param_1,1);
    return (ulonglong)(-(uint)(iVar1 != 0) & 2);
  }
  iVar1 = ssl3_digest_cached_records(param_1,0);
  return (ulonglong)(-(uint)(iVar1 != 0) & 2);
}

