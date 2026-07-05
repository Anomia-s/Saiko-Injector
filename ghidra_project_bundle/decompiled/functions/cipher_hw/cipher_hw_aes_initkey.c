/**
 * Function: cipher_hw_aes_initkey
 * Address:  140d96b70
 * Signature: undefined cipher_hw_aes_initkey(void)
 * Body size: 436 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cipher_hw_aes_initkey(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(longlong *)(param_1 + 0xb0) = param_1 + 0xc0;
  if (((iVar1 != 1) && (iVar1 != 2)) || ((*(byte *)(param_1 + 0x6c) & 2) != 0)) {
    if (((DAT_1416f2384 & 0x200) == 0) || (iVar1 != 5)) {
      if ((DAT_1416f2384 & 0x200) == 0) {
        iVar1 = FUN_14076e170(param_2,param_3 * 8);
        puVar3 = (undefined *)0x0;
        if (*(int *)(param_1 + 0x40) == 2) {
          puVar3 = &DAT_14076e690;
        }
        goto LAB_140d96cbe;
      }
      iVar1 = FUN_14076f570();
      puVar3 = (undefined *)0x0;
      pcVar4 = (code *)&DAT_14076f740;
      if (*(int *)(param_1 + 0x40) == 2) {
        puVar3 = &DAT_14076f8e0;
      }
    }
    else {
      iVar1 = FUN_14076e170(param_2,param_3 * 8);
      puVar3 = &DAT_1407712b0;
LAB_140d96cbe:
      pcVar4 = FUN_14076dae0;
    }
    lVar5 = 0x38;
    lVar2 = 0x30;
    lVar6 = param_1;
    goto LAB_140d96cd5;
  }
  if (((DAT_1416f2384 & 0x200) == 0) || (iVar1 != 2)) {
    if ((DAT_1416f2384 & 0x200) == 0) {
      iVar1 = FUN_14076e450(param_2,param_3 * 8);
      puVar3 = (undefined *)0x0;
      if (*(int *)(param_1 + 0x40) == 2) {
        puVar3 = &DAT_14076e690;
      }
      goto LAB_140d96c2a;
    }
    iVar1 = FUN_14076f650();
    puVar3 = (undefined *)0x0;
    pcVar4 = (code *)&DAT_14076f810;
    if (*(int *)(param_1 + 0x40) == 2) {
      puVar3 = &DAT_14076f8e0;
    }
  }
  else {
    iVar1 = FUN_14076e450(param_2,param_3 * 8);
    puVar3 = &DAT_140770d60;
LAB_140d96c2a:
    pcVar4 = FUN_14076e090;
  }
  lVar2 = param_1;
  lVar5 = param_1;
  param_1 = 0x30;
  lVar6 = 0x38;
LAB_140d96cd5:
  *(code **)(lVar2 + param_1) = pcVar4;
  *(undefined **)(lVar5 + lVar6) = puVar3;
  if (-1 < iVar1) {
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\ciphers\\cipher_aes_hw.c",0x75,"cipher_hw_aes_initkey");
  FUN_140b91cc0(0x39,0x65,0);
  return 0;
}

