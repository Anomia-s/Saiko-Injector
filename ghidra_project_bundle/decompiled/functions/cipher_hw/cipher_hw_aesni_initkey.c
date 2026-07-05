/**
 * Function: cipher_hw_aesni_initkey
 * Address:  140d96dc0
 * Signature: undefined cipher_hw_aesni_initkey(void)
 * Body size: 240 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cipher_hw_aesni_initkey(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  *(longlong *)(param_1 + 0xb0) = param_1 + 0xc0;
  if (((*(int *)(param_1 + 0x40) == 1) || (*(int *)(param_1 + 0x40) == 2)) &&
     ((*(byte *)(param_1 + 0x6c) & 2) == 0)) {
    iVar1 = FUN_140776b50(param_2,param_3 * 8);
    pcVar3 = FUN_140776110;
    bVar4 = *(int *)(param_1 + 0x40) == 2;
    *(undefined1 **)(param_1 + 0x30) = &LAB_140772890;
  }
  else {
    iVar1 = FUN_140776bc0(param_2,param_3 * 8);
    *(undefined1 **)(param_1 + 0x30) = &LAB_140772840;
    if (*(int *)(param_1 + 0x40) == 2) {
      pcVar2 = FUN_140776110;
      goto LAB_140d96e65;
    }
    pcVar3 = (code *)&DAT_1407738a0;
    bVar4 = *(int *)(param_1 + 0x40) == 5;
  }
  pcVar2 = (code *)0x0;
  if (bVar4) {
    pcVar2 = pcVar3;
  }
LAB_140d96e65:
  *(code **)(param_1 + 0x38) = pcVar2;
  if (iVar1 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\providers\\implementations\\ciphers\\cipher_aes_hw_aesni.inc"
               ,0x30,"cipher_hw_aesni_initkey");
    FUN_140b91cc0(0x39,0x65,0);
    return 0;
  }
  return 1;
}

