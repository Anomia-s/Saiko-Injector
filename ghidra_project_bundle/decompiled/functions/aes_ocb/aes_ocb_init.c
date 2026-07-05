/**
 * Function: aes_ocb_init
 * Address:  140d10110
 * Signature: undefined aes_ocb_init(void)
 * Body size: 305 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aes_ocb_init(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
            undefined8 param_6,int param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(uint *)(param_1 + 0x6c) =
       *(uint *)(param_1 + 0x6c) ^ (param_7 * 2 ^ *(uint *)(param_1 + 0x6c)) & 2;
  if (param_4 != 0) {
    if (param_5 != *(longlong *)(param_1 + 0x50)) {
      if (0xe < param_5 - 1U) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x79,"aes_ocb_init");
        uVar2 = 0x6d;
        goto LAB_140d101d0;
      }
      *(longlong *)(param_1 + 0x50) = param_5;
    }
    iVar1 = ossl_cipher_generic_initiv(param_1,param_4);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x360) = 1;
  }
  if (param_2 != 0) {
    if (param_3 != *(longlong *)(param_1 + 0x48)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x84,"aes_ocb_init");
      uVar2 = 0x69;
LAB_140d101d0:
      FUN_140b91cc0(0x39,uVar2,0);
      return 0;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_140d0fc60(param_1,param_6);
  return uVar2;
}

