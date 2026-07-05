/**
 * Function: sm4_xts_init
 * Address:  140d14e50
 * Signature: undefined sm4_xts_init(void)
 * Body size: 458 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sm4_xts_init(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5,
            longlong *param_6,int param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  iVar1 = FUN_140b69250();
  if ((iVar1 != 0) &&
     ((*(uint *)(param_1 + 0x6c) =
            *(uint *)(param_1 + 0x6c) ^ (param_7 * 2 ^ *(uint *)(param_1 + 0x6c)) & 2, param_4 == 0
      || (iVar1 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar1 != 0)))) {
    if (param_2 == 0) {
LAB_140d14f15:
      if (((param_6 != (longlong *)0x0) && (*param_6 != 0)) &&
         (lVar2 = FUN_140b93540(param_6,"xts_standard"), lVar2 != 0)) {
        local_res8 = 0;
        if (*(int *)(lVar2 + 8) != 4) {
          return 0;
        }
        iVar1 = FUN_140b954c0(lVar2,&local_res8);
        if (iVar1 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0xe3,
                     "sm4_xts_set_ctx_params");
          FUN_140b91cc0(0x39,0x67,0);
          return 0;
        }
        iVar1 = FUN_140b8c6a0(local_res8,&DAT_1413a6ad4);
        if (iVar1 != 0) {
          iVar1 = FUN_140b8c6a0(local_res8,&DAT_1413a6a00);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x1c0) = 1;
            return 1;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0xeb,
                     "sm4_xts_set_ctx_params");
          FUN_140b91cc0(0x39,0x68,0);
          return 0;
        }
        *(undefined4 *)(param_1 + 0x1c0) = 0;
      }
      return 1;
    }
    if (param_3 == *(longlong *)(param_1 + 0x48)) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar1 != 0) goto LAB_140d14f15;
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0x36,"sm4_xts_init");
      FUN_140b91cc0(0x39,0x69,0);
    }
  }
  return 0;
}

