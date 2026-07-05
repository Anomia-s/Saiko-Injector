/**
 * Function: ossl_cipher_generic_block_final
 * Address:  140d95310
 * Signature: undefined ossl_cipher_generic_block_final(void)
 * Body size: 599 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_cipher_generic_block_final(longlong param_1,void *param_2,ulonglong *param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulonglong *)(param_1 + 0x58);
  iVar3 = FUN_140b69250();
  if (iVar3 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x6c);
  if ((uVar1 & 8) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x1ac,
               "ossl_cipher_generic_block_final");
    uVar4 = 0x72;
    goto LAB_140d953a3;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    if ((uVar1 & 2) == 0) {
      if (*(ulonglong *)(param_1 + 0x60) != uVar2) {
        if ((*(ulonglong *)(param_1 + 0x60) == 0) && ((uVar1 & 1) == 0)) goto LAB_140d954b6;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar4 = 0x1d4;
LAB_140d9540e:
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\ciphercommon.c",uVar4,
                   "ossl_cipher_generic_block_final");
        uVar4 = 0x6b;
        goto LAB_140d953a3;
      }
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 8))
                        (param_1,param_1 + 0x10,param_1 + 0x10,uVar2);
      if (iVar3 != 0) {
        if (((*(byte *)(param_1 + 0x6c) & 1) != 0) &&
           (iVar3 = ossl_cipher_unpadblock(param_1 + 0x10,param_1 + 0x60,uVar2), iVar3 == 0)) {
          return 0;
        }
        if (*(ulonglong *)(param_1 + 0x60) <= param_4) {
          memcpy(param_2,(void *)(param_1 + 0x10),*(ulonglong *)(param_1 + 0x60));
          *param_3 = *(ulonglong *)(param_1 + 0x60);
          *(undefined8 *)(param_1 + 0x60) = 0;
          return 1;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar4 = 0x1e3;
        goto LAB_140d9543e;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar4 = 0x1d9;
    }
    else {
      if ((uVar1 & 1) == 0) {
        if (*(ulonglong *)(param_1 + 0x60) == 0) {
LAB_140d954b6:
          *param_3 = 0;
          return 1;
        }
        if (*(ulonglong *)(param_1 + 0x60) != uVar2) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar4 = 0x1bd;
          goto LAB_140d9540e;
        }
      }
      else {
        FUN_140d97440(param_1 + 0x10,param_1 + 0x60,uVar2);
      }
      if (param_4 < uVar2) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar4 = 0x1c2;
LAB_140d9543e:
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\ciphercommon.c",uVar4,
                   "ossl_cipher_generic_block_final");
        uVar4 = 0x6a;
        goto LAB_140d953a3;
      }
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 8))(param_1,param_2,param_1 + 0x10,uVar2)
      ;
      if (iVar3 != 0) {
        *(undefined8 *)(param_1 + 0x60) = 0;
        *param_3 = uVar2;
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar4 = 0x1c6;
    }
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar4 = 0x1b2;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\ciphers\\ciphercommon.c",uVar4,
             "ossl_cipher_generic_block_final");
  uVar4 = 0x66;
LAB_140d953a3:
  FUN_140b91cc0(0x39,uVar4,0);
  return 0;
}

