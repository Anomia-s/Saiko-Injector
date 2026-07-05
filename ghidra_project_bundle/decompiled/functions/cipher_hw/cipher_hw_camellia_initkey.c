/**
 * Function: cipher_hw_camellia_initkey
 * Address:  140d9a340
 * Signature: undefined cipher_hw_camellia_initkey(void)
 * Body size: 210 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cipher_hw_camellia_initkey(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(longlong *)(param_1 + 0xb0) = param_1 + 0xc0;
  iVar2 = FUN_140d80ec0(param_2,param_3 * 8);
  if (iVar2 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\cipher_camellia_hw.c",0x1e,
               "cipher_hw_camellia_initkey");
    FUN_140b91cc0(0x39,0x65,0);
    return 0;
  }
  if (((*(byte *)(param_1 + 0x6c) & 2) == 0) && (iVar1 - 1U < 2)) {
    puVar3 = (undefined *)0x0;
    if (iVar1 == 2) {
      puVar3 = &DAT_140a82970;
    }
    pcVar4 = FUN_140d80f50;
  }
  else {
    puVar3 = (undefined *)0x0;
    if (iVar1 == 2) {
      puVar3 = &DAT_140a82970;
    }
    pcVar4 = FUN_140d80f20;
  }
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined **)(param_1 + 0x38) = puVar3;
  return 1;
}

