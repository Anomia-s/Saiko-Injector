/**
 * Function: aes_init_key
 * Address:  140b89390
 * Signature: undefined aes_init_key(void)
 * Body size: 481 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool aes_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  code *pcVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  lVar2 = FUN_140b987a0();
  iVar1 = FUN_140b981e0(param_1);
  iVar8 = iVar1 << 3;
  if (iVar1 << 3 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aes.c",0x96b,"aes_init_key");
    FUN_140b91cc0(6,0x82,0);
    return false;
  }
  uVar3 = FUN_140b76060(param_1);
  iVar1 = FUN_140b97ed0(uVar3);
  if ((1 < iVar1 - 1U) || (param_4 != 0)) {
    if ((DAT_1416f2384 & 0x200) == 0) {
      iVar8 = FUN_14076e170(param_2,iVar8,lVar2);
      puVar5 = (undefined *)0x0;
      if (iVar1 == 2) {
        puVar5 = &DAT_14076e690;
      }
LAB_140b894fa:
      pcVar6 = FUN_14076dae0;
    }
    else {
      if (iVar1 == 5) {
        iVar8 = FUN_14076e170(param_2,iVar8,lVar2);
        puVar5 = &DAT_1407712b0;
        goto LAB_140b894fa;
      }
      iVar8 = FUN_14076f570();
      puVar5 = (undefined *)0x0;
      pcVar6 = (code *)&DAT_14076f740;
      if (iVar1 == 2) {
        puVar5 = &DAT_14076f8e0;
      }
    }
    lVar7 = 0x100;
    lVar4 = 0xf8;
    lVar9 = lVar2;
    goto LAB_140b89511;
  }
  if ((DAT_1416f2384 & 0x200) == 0) {
    iVar8 = FUN_14076e450(param_2,iVar8,lVar2);
    puVar5 = (undefined *)0x0;
    if (iVar1 == 2) {
      puVar5 = &DAT_14076e690;
    }
LAB_140b8947f:
    pcVar6 = FUN_14076e090;
  }
  else {
    if (iVar1 == 2) {
      iVar8 = FUN_14076e450(param_2,iVar8,lVar2);
      puVar5 = &DAT_140770d60;
      goto LAB_140b8947f;
    }
    iVar8 = FUN_14076f650();
    pcVar6 = (code *)&DAT_14076f810;
    puVar5 = (undefined *)0x0;
  }
  lVar4 = lVar2;
  lVar7 = lVar2;
  lVar2 = 0xf8;
  lVar9 = 0x100;
LAB_140b89511:
  *(code **)(lVar4 + lVar2) = pcVar6;
  *(undefined **)(lVar7 + lVar9) = puVar5;
  if (-1 >= iVar8) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aes.c",0x9c0,"aes_init_key");
    FUN_140b91cc0(6,0x8f,0);
  }
  return -1 < iVar8;
}

