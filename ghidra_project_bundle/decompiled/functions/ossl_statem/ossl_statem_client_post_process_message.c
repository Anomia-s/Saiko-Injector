/**
 * Function: ossl_statem_client_post_process_message
 * Address:  140c36880
 * Signature: undefined ossl_statem_client_post_process_message(void)
 * Body size: 128 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_client_post_process_message(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xac);
  if ((iVar1 == 4) || (iVar1 == 5)) {
    uVar2 = tls_post_process_server_certificate();
    return uVar2;
  }
  if ((iVar1 != 8) && (iVar1 != 0x2b)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x48c,"ossl_statem_client_post_process_message");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  uVar2 = tls_prepare_client_certificate();
  return uVar2;
}

