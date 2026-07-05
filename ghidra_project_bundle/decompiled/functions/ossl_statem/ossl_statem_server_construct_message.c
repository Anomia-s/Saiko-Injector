/**
 * Function: ossl_statem_server_construct_message
 * Address:  140bbd3c0
 * Signature: undefined ossl_statem_server_construct_message(void)
 * Body size: 550 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_statem_server_construct_message(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x15:
    *param_2 = 0;
    *param_3 = 0;
    return 1;
  default:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x460,"ossl_statem_server_construct_message");
    FUN_140ba3290(param_1,0x50,0xec,0);
    return 0;
  case 0x17:
    *param_2 = dtls_construct_hello_verify_request;
    *param_3 = 3;
    return 1;
  case 0x18:
    *param_2 = tls_construct_server_hello;
    *param_3 = 2;
    return 1;
  case 0x19:
    *param_2 = tls_construct_server_certificate;
    *param_3 = 0xb;
    return 1;
  case 0x1b:
    *param_2 = tls_construct_server_key_exchange;
    *param_3 = 0xc;
    return 1;
  case 0x1c:
    *param_2 = tls_construct_certificate_request;
    *param_3 = 0xd;
    return 1;
  case 0x1d:
    *param_2 = FUN_140bbfe80;
    *param_3 = 0xe;
    return 1;
  case 0x25:
    *param_2 = tls_construct_new_session_ticket;
    *param_3 = 4;
    return 1;
  case 0x26:
    *param_2 = FUN_140bbdc20;
    *param_3 = 0x16;
    return 1;
  case 0x27:
    break;
  case 0x28:
    *param_2 = client_random;
    *param_3 = 0x14;
    return 1;
  case 0x29:
    *param_2 = FUN_140bc1010;
    *param_3 = 8;
    return 1;
  case 0x2c:
    *param_2 = tls_construct_cert_verify;
    *param_3 = 0xf;
    return 1;
  case 0x2e:
    *param_2 = tls_construct_key_update;
    *param_3 = 0x18;
    return 1;
  case 0x32:
    *param_2 = 0;
    *param_3 = 0xffffffff;
    return 1;
  }
  pcVar1 = FUN_140c33ea0;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
    pcVar1 = FUN_140bb8100;
  }
  *param_2 = pcVar1;
  *param_3 = 0x101;
  return 1;
}

