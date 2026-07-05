/**
 * Function: ossl_cipher_unpadblock
 * Address:  140d97480
 * Signature: undefined ossl_cipher_unpadblock(void)
 * Body size: 213 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_cipher_unpadblock(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar5 = *param_2;
  if (uVar5 != param_3) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon_block.c",0x61,
               "ossl_cipher_unpadblock");
    FUN_140b91cc0(0x39,0xc0103,0);
    return 0;
  }
  uVar3 = (ulonglong)*(byte *)(param_1 + -1 + param_3);
  if ((uVar3 != 0) && (uVar3 <= param_3)) {
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        pbVar1 = (byte *)(param_1 + -1 + uVar5);
        uVar5 = uVar5 - 1;
        if (*pbVar1 != uVar3) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar4 = 0x70;
          goto LAB_140d97529;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    *param_2 = uVar5;
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  uVar4 = 0x6b;
LAB_140d97529:
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\ciphers\\ciphercommon_block.c",uVar4,
             "ossl_cipher_unpadblock");
  FUN_140b91cc0(0x39,100,0);
  return 0;
}

