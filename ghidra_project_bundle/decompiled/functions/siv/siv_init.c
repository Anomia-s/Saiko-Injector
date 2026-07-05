/**
 * Function: siv_init
 * Address:  140d17290
 * Signature: undefined siv_init(void)
 * Body size: 573 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
siv_init(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
        longlong *param_6,uint param_7)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  longlong local_18 [2];
  
  local_18[1] = 0x140d172a5;
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) ^ (*(uint *)(param_1 + 4) ^ param_7) & 1;
  if (param_2 != 0) {
    if (param_3 != *(longlong *)(param_1 + 8)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_aes_siv.c",0x5a,"siv_init");
      FUN_140b91cc0(0x39,0x69,0);
      return 0;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  local_res8[0] = 0;
  if ((param_6 != (longlong *)0x0) && (*param_6 != 0)) {
    lVar2 = FUN_140b93540(param_6,&DAT_1413a6180);
    if (lVar2 != 0) {
      if ((*(byte *)(param_1 + 4) & 1) != 0) {
        return 1;
      }
      if ((*(int *)(lVar2 + 8) != 5) ||
         (iVar1 = (**(code **)(*(longlong *)(param_1 + 0x68) + 0x18))
                            (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18)),
         iVar1 == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\cipher_aes_siv.c",0xcd,
                   "aes_siv_set_ctx_params");
        FUN_140b91cc0(0x39,0x67,0);
        return 0;
      }
    }
    lVar2 = FUN_140b93540(param_6,"speed");
    if (lVar2 != 0) {
      iVar1 = FUN_140b93940(lVar2,local_res8);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\cipher_aes_siv.c",0xd4,
                   "aes_siv_set_ctx_params");
        FUN_140b91cc0(0x39,0x67,0);
        return 0;
      }
      (**(code **)(*(longlong *)(param_1 + 0x68) + 0x10))(param_1,local_res8[0]);
    }
    lVar2 = FUN_140b93540(param_6,"keylen");
    if (lVar2 != 0) {
      iVar1 = FUN_140b94310(lVar2,local_18);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\cipher_aes_siv.c",0xde,
                   "aes_siv_set_ctx_params");
        FUN_140b91cc0(0x39,0x67,0);
        return 0;
      }
      if (local_18[0] != *(longlong *)(param_1 + 8)) {
        return 0;
      }
    }
  }
  return 1;
}

