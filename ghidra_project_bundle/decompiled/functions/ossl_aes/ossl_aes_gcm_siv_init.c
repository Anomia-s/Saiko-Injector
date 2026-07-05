/**
 * Function: ossl_aes_gcm_siv_init
 * Address:  140d17d50
 * Signature: undefined ossl_aes_gcm_siv_init(void)
 * Body size: 712 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_aes_gcm_siv_init
          (longlong param_1,void *param_2,size_t param_3,undefined8 *param_4,longlong param_5,
          longlong *param_6,uint param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_18 [2];
  
  local_18[1] = 0x140d17d6a;
  iVar6 = FUN_140b69250();
  if (iVar6 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x1b8) =
       (*(uint *)(param_1 + 0x1b8) ^ param_7) & 1 ^ *(uint *)(param_1 + 0x1b8);
  if (param_2 == (void *)0x0) {
LAB_140d17dfe:
    if (param_4 != (undefined8 *)0x0) {
      if (param_5 != 0xc) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x6f,
                   "ossl_aes_gcm_siv_init");
        uVar8 = 0x6d;
        goto LAB_140d17dd1;
      }
      *(undefined8 *)(param_1 + 0xa8) = *param_4;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_4 + 1);
    }
    iVar6 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1);
    if (iVar6 != 0) {
      if ((param_6 != (longlong *)0x0) && (*param_6 != 0)) {
        lVar7 = FUN_140b93540(param_6,&DAT_1413a6180);
        if (lVar7 != 0) {
          if ((*(int *)(lVar7 + 8) != 5) || (*(longlong *)(lVar7 + 0x18) != 0x10)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0xe4,
                       "ossl_aes_gcm_siv_set_ctx_params");
            FUN_140b91cc0(0x39,0x67,0);
            return 0;
          }
          if ((*(uint *)(param_1 + 0x1b8) & 1) == 0) {
            puVar1 = *(undefined4 **)(lVar7 + 0x10);
            uVar2 = *puVar1;
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
            *(undefined4 *)(param_1 + 0x98) = uVar2;
            *(undefined4 *)(param_1 + 0x9c) = uVar3;
            *(undefined4 *)(param_1 + 0xa0) = uVar4;
            *(undefined4 *)(param_1 + 0xa4) = uVar5;
          }
        }
        lVar7 = FUN_140b93540(param_6,"speed");
        if (lVar7 != 0) {
          iVar6 = FUN_140b93940(lVar7);
          if (iVar6 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0xef,
                       "ossl_aes_gcm_siv_set_ctx_params");
            FUN_140b91cc0(0x39,0x67,0);
            return 0;
          }
          *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffffffdf;
          *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
        }
        lVar7 = FUN_140b93540(param_6,"keylen");
        if (lVar7 != 0) {
          iVar6 = FUN_140b94310(lVar7,local_18);
          if (iVar6 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0xf9,
                       "ossl_aes_gcm_siv_set_ctx_params");
            FUN_140b91cc0(0x39,0x67,0);
            return 0;
          }
          if (local_18[0] != *(longlong *)(param_1 + 0x30)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0xfe,
                       "ossl_aes_gcm_siv_set_ctx_params");
            FUN_140b91cc0(0x39,0x69,0);
            return 0;
          }
        }
      }
      return 1;
    }
  }
  else {
    if (param_3 == *(size_t *)(param_1 + 0x30)) {
      memcpy((void *)(param_1 + 0x38),param_2,*(size_t *)(param_1 + 0x30));
      goto LAB_140d17dfe;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\cipher_aes_gcm_siv.c",0x68,
               "ossl_aes_gcm_siv_init");
    uVar8 = 0x69;
LAB_140d17dd1:
    FUN_140b91cc0(0x39,uVar8,0);
  }
  return 0;
}

