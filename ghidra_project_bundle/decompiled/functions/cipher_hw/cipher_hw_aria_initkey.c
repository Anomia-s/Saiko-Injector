/**
 * Function: cipher_hw_aria_initkey
 * Address:  140d9a170
 * Signature: undefined cipher_hw_aria_initkey(void)
 * Body size: 189 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cipher_hw_aria_initkey(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0xc0;
  if (((*(byte *)(param_1 + 0x6c) & 2) == 0) &&
     ((*(int *)(param_1 + 0x40) == 1 || (*(int *)(param_1 + 0x40) == 2)))) {
    iVar2 = FUN_140d804f0(param_2,param_3 * 8,lVar1);
  }
  else {
    iVar2 = FUN_140d7f860(param_2,param_3 * 8,lVar1);
  }
  if (iVar2 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\cipher_aria_hw.c",0x19,"cipher_hw_aria_initkey"
              );
    FUN_140b91cc0(0x39,0x65,0);
    return 0;
  }
  *(longlong *)(param_1 + 0xb0) = lVar1;
  *(code **)(param_1 + 0x30) = FUN_140d80790;
  return 1;
}

