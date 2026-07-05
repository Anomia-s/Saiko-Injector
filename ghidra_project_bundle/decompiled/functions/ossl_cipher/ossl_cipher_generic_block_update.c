/**
 * Function: ossl_cipher_generic_block_update
 * Address:  140d94d40
 * Signature: undefined ossl_cipher_generic_block_update(void)
 * Body size: 1487 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ossl_cipher_generic_block_update
               (longlong param_1,longlong param_2,ulonglong *param_3,ulonglong param_4,
               longlong param_5,ulonglong param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar5 = param_6;
  lVar8 = param_5;
  uVar6 = *(uint *)(param_1 + 0x6c);
  uVar3 = *(ulonglong *)(param_1 + 0x58);
  if ((uVar6 & 8) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x11a,
               "ossl_cipher_generic_block_update");
    FUN_140b91cc0(0x39,0x72,0);
    return false;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      uVar5 = ~(uVar3 - 1) & param_6;
    }
    else {
      uVar5 = FUN_140d97320(param_1 + 0x10,param_1 + 0x60,uVar3,&param_5,&param_6);
    }
    uVar7 = 0;
    if ((*(ulonglong *)(param_1 + 0x60) == uVar3) &&
       ((((*(uint *)(param_1 + 0x6c) & 2) != 0 || (param_6 != 0)) ||
        (uVar7 = 0, (*(uint *)(param_1 + 0x6c) & 1) == 0)))) {
      if (param_4 < uVar3) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\ciphercommon.c",0x177,
                   "ossl_cipher_generic_block_update");
        FUN_140b91cc0(0x39,0x6a,0);
        return false;
      }
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 8))(param_1,param_2,param_1 + 0x10,uVar3)
      ;
      if (iVar4 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\ciphercommon.c",0x17b,
                   "ossl_cipher_generic_block_update");
        FUN_140b91cc0(0x39,0x66,0);
        return false;
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
      param_2 = param_2 + uVar3;
      uVar7 = uVar3;
    }
    if (uVar5 != 0) {
      if ((((byte)*(undefined4 *)(param_1 + 0x6c) & 3) == 1) && (uVar5 == param_6)) {
        if (param_6 < uVar3) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\ciphers\\ciphercommon.c",0x185,
                     "ossl_cipher_generic_block_update");
          FUN_140b91cc0(0x39,0x6a,0);
          return false;
        }
        uVar5 = uVar5 - uVar3;
      }
      uVar7 = uVar7 + uVar5;
      if (param_4 < uVar7) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\ciphercommon.c",0x18c,
                   "ossl_cipher_generic_block_update");
        FUN_140b91cc0(0x39,0x6a,0);
        return false;
      }
      if (uVar5 != 0) {
        iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,uVar5);
        if (iVar4 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\ciphers\\ciphercommon.c",0x192,
                     "ossl_cipher_generic_block_update");
          FUN_140b91cc0(0x39,0x66,0);
          return false;
        }
        param_5 = param_5 + uVar5;
        param_6 = param_6 - uVar5;
      }
    }
    if ((param_6 != 0) &&
       (iVar4 = providersimplementationsciphersciphercommon_b
                          (param_1 + 0x10,param_1 + 0x60,uVar3,&param_5,&param_6), iVar4 == 0)) {
      return false;
    }
    *param_3 = uVar7;
    return param_6 == 0;
  }
  if ((((param_5 == 0) || (param_5 != param_2)) || (param_4 < param_6)) || ((uVar6 & 1) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x129,
               "ossl_cipher_generic_block_update");
    FUN_140b91cc0(0x39,0x66,0);
    return false;
  }
  if ((uVar6 & 2) != 0) {
    uVar9 = uVar3 - param_6 % uVar3;
    uVar7 = uVar9 + param_6;
    if (param_4 < uVar7) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon.c",0x136,
                 "ossl_cipher_generic_block_update");
      FUN_140b91cc0(0x39,0x66,0);
      return false;
    }
    if (0x100 < uVar9) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon.c",0x13b,
                 "ossl_cipher_generic_block_update");
      FUN_140b91cc0(0x39,0x66,0);
      return false;
    }
    uVar6 = (int)uVar9 - 1;
    if (*(int *)(param_1 + 0x70) == 0x300) {
      if (1 < uVar9) {
        memset((void *)(param_2 + param_6),0,uVar9 - 1);
      }
      *(char *)(uVar9 + param_2 + -1 + param_6) = (char)uVar6;
      uVar5 = param_6;
      lVar8 = param_5;
    }
    else if (param_6 < uVar7) {
      memset((void *)(param_2 + param_6),uVar6 & 0xff,uVar7 - param_6);
    }
    param_6 = uVar5 + uVar9;
  }
  if (param_6 % uVar3 != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x14c,
               "ossl_cipher_generic_block_update");
    FUN_140b91cc0(0x39,0x66,0);
    return false;
  }
  iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 8))(param_1,param_2,lVar8,param_6);
  if (iVar4 != 0) {
    piVar2 = (int *)(param_1 + 0x80);
    puVar1 = (undefined8 *)(param_1 + 0x78);
    if (*piVar2 != 0) {
      FUN_140b8d990(*puVar1,"providers\\implementations\\ciphers\\ciphercommon.c",0x158);
      *piVar2 = 0;
      *puVar1 = 0;
    }
    *param_3 = param_6;
    if (((*(byte *)(param_1 + 0x6c) & 2) == 0) &&
       (iVar4 = FUN_140d97560(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x70),
                              param_2,param_3,uVar3,puVar1,piVar2,*(undefined8 *)(param_1 + 0x88),0)
       , iVar4 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon.c",0x164,
                 "ossl_cipher_generic_block_update");
      FUN_140b91cc0(0x39,0x66,0);
      return false;
    }
    return true;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\ciphers\\ciphercommon.c",0x153,
             "ossl_cipher_generic_block_update");
  FUN_140b91cc0(0x39,0x66,0);
  return false;
}

