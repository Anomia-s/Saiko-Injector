/**
 * Function: ssl_log_rsa_client_key_exchange
 * Address:  140b6ed60
 * Signature: undefined ssl_log_rsa_client_key_exchange(void)
 * Body size: 128 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_log_rsa_client_key_exchange
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_3 < 8) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\ssl_lib.c",0x1b96,"ssl_log_rsa_client_key_exchange");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  uVar1 = FUN_140b6fd60(&DAT_1413a6b28,param_1,param_2,8,param_4,param_5);
  return uVar1;
}

