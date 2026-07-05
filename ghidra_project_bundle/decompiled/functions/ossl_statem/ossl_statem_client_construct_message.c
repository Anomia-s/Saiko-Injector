/**
 * Function: ossl_statem_client_construct_message
 * Address:  140c35da0
 * Signature: undefined ossl_statem_client_construct_message(void)
 * Body size: 429 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_statem_client_construct_message(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0xd:
    *param_2 = tls_construct_client_hello;
    *param_3 = 1;
    return 1;
  case 0xe:
    *param_2 = tls_construct_client_certificate;
    *param_3 = 0xb;
    return 1;
  default:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x3be,"ossl_statem_client_construct_message");
    FUN_140ba3290(param_1,0x50,0xec,0);
    return 0;
  case 0x10:
    *param_2 = tls_construct_client_key_exchange;
    *param_3 = 0x10;
    return 1;
  case 0x11:
    *param_2 = tls_construct_cert_verify;
    *param_3 = 0xf;
    return 1;
  case 0x12:
    break;
  case 0x13:
    *param_2 = FUN_140c39f30;
    *param_3 = 0x43;
    return 1;
  case 0x14:
    *param_2 = client_random;
    *param_3 = 0x14;
    return 1;
  case 0x2f:
    *param_2 = tls_construct_key_update;
    *param_3 = 0x18;
    return 1;
  case 0x33:
    *param_2 = 0;
    *param_3 = 0xffffffff;
    return 1;
  case 0x34:
    *param_2 = FUN_140c3a010;
    *param_3 = 5;
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

