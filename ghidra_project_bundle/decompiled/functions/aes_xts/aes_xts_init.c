/**
 * Function: aes_xts_init
 * Address:  140d0efd0
 * Signature: undefined aes_xts_init(void)
 * Body size: 392 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aes_xts_init(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,undefined8 param_5
            ,longlong *param_6,int param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x6c) =
       *(uint *)(param_1 + 0x6c) ^ (param_7 * 2 ^ *(uint *)(param_1 + 0x6c)) & 2;
  if ((param_4 != 0) && (iVar1 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar1 == 0)) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_3 != *(ulonglong *)(param_1 + 0x48)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_aes_xts.c",0x5a,"aes_xts_init");
      uVar3 = 0x69;
      goto LAB_140d0f05f;
    }
    if ((param_7 != 0) && (iVar1 = FUN_14046e9f0(param_2,(param_3 >> 1) + param_2), iVar1 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_aes_xts.c",0x3b,
                 "aes_xts_check_keys_differ");
      uVar3 = 0x95;
      goto LAB_140d0f05f;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (((param_6 == (longlong *)0x0) || (*param_6 == 0)) ||
     (lVar2 = FUN_140b93540(param_6,"keylen"), lVar2 == 0)) {
    return 1;
  }
  iVar1 = FUN_140b94310(lVar2,&local_res8);
  if (iVar1 != 0) {
    if (local_res8 != *(longlong *)(param_1 + 0x48)) {
      return 0;
    }
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\ciphers\\cipher_aes_xts.c",0x10c,"aes_xts_set_ctx_params")
  ;
  uVar3 = 0x67;
LAB_140d0f05f:
  FUN_140b91cc0(0x39,uVar3,0);
  return 0;
}

