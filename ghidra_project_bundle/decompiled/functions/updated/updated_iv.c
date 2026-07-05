/**
 * Function: updated_iv
 * Address:  140d99140
 * Signature: undefined updated_iv(void)
 * Body size: 983 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 updated_iv(uint *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140b93540(param_2,"ivlen");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94bb0(lVar2,0xf - *(longlong *)(param_1 + 2)), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0x9a,
               "ossl_ccm_get_ctx_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_2,"taglen");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94bb0(lVar2,*(undefined8 *)(param_1 + 4)), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xa3,
               "ossl_ccm_get_ctx_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_2,&DAT_1413a59e8);
  if (lVar2 != 0) {
    if (*(ulonglong *)(lVar2 + 0x18) < 0xfU - *(longlong *)(param_1 + 2)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xab,
                 "ossl_ccm_get_ctx_params");
      FUN_140b91cc0(0x39,0x6d,0);
      return 0;
    }
    iVar1 = FUN_140b95150(lVar2,param_1 + 0xc);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_140b95400(lVar2,param_1 + 0xc,*(undefined8 *)(lVar2 + 0x18)), iVar1 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xb0,
                 "ossl_ccm_get_ctx_params");
      FUN_140b91cc0(0x39,0x68,0);
      return 0;
    }
  }
  lVar2 = FUN_140b93540(param_2,"updated-iv");
  if (lVar2 != 0) {
    if (*(ulonglong *)(lVar2 + 0x18) < 0xfU - *(longlong *)(param_1 + 2)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xb8,
                 "ossl_ccm_get_ctx_params");
      FUN_140b91cc0(0x39,0x6d,0);
      return 0;
    }
    iVar1 = FUN_140b95150(lVar2,param_1 + 0xc);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_140b95400(lVar2,param_1 + 0xc,*(undefined8 *)(lVar2 + 0x18)), iVar1 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xbd,
                 "ossl_ccm_get_ctx_params");
      FUN_140b91cc0(0x39,0x68,0);
      return 0;
    }
  }
  lVar2 = FUN_140b93540(param_2,"keylen");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94bb0(lVar2,*(undefined8 *)(param_1 + 6)), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xc4,
               "ossl_ccm_get_ctx_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_2,"tlsaadpad");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94bb0(lVar2,*(undefined8 *)(param_1 + 10)), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xca,
               "ossl_ccm_get_ctx_params");
    FUN_140b91cc0(0x39,0x68,0);
    return 0;
  }
  lVar2 = FUN_140b93540(param_2,&DAT_1413a6180);
  if (lVar2 == 0) {
LAB_140d994c4:
    uVar3 = 1;
  }
  else {
    if (((byte)*param_1 & 9) == 9) {
      if (*(int *)(lVar2 + 8) != 5) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xd5,
                   "ossl_ccm_get_ctx_params");
        FUN_140b91cc0(0x39,0x68,0);
        return 0;
      }
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x24) + 0x28))
                        (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
      if (iVar1 != 0) {
        *param_1 = *param_1 & 0xffffffe3;
        goto LAB_140d994c4;
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xd1,
                 "ossl_ccm_get_ctx_params");
      FUN_140b91cc0(0x39,0x77,0);
    }
    uVar3 = 0;
  }
  return uVar3;
}

