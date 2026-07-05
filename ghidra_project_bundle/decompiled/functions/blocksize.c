/**
 * Function: blocksize
 * Address:  140d95ef0
 * Signature: undefined blocksize(void)
 * Body size: 901 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
blocksize(undefined8 param_1,undefined4 param_2,ulonglong param_3,ulonglong param_4,
         ulonglong param_5,ulonglong param_6)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140b93540(param_1,&DAT_1413a62f8);
  if ((lVar2 != 0) && (iVar1 = FUN_140b94370(lVar2,param_2), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x33,
               "ossl_cipher_generic_get_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_1,&DAT_1413a6444);
  if ((lVar2 != 0) && (iVar1 = FUN_140b94350(lVar2,(uint)param_3 & 1), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x39,
               "ossl_cipher_generic_get_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_1,"custom-iv");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94350(lVar2,(uint)(param_3 >> 1) & 1), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x3f,
               "ossl_cipher_generic_get_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_1,&DAT_1413a5b94);
  if ((lVar2 != 0) && (iVar1 = FUN_140b94350(lVar2,(uint)(param_3 >> 2) & 1), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x45,
               "ossl_cipher_generic_get_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_1,"tls-multi");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94350(lVar2,(uint)(param_3 >> 3) & 1), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x4b,
               "ossl_cipher_generic_get_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_1,"has-randkey");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94350(lVar2,(uint)(param_3 >> 4) & 1), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x51,
               "ossl_cipher_generic_get_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_1,"keylen");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94bb0(lVar2,param_4 >> 3), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x56,
               "ossl_cipher_generic_get_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_1,"blocksize");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94bb0(lVar2,param_5 >> 3), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x5b,
               "ossl_cipher_generic_get_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_1,"ivlen");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94bb0(lVar2,param_6 >> 3), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x60,
               "ossl_cipher_generic_get_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  return 1;
}

