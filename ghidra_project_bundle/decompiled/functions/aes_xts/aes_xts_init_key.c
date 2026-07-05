/**
 * Function: aes_xts_init_key
 * Address:  140b89e50
 * Signature: undefined aes_xts_init_key(void)
 * Body size: 437 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_xts_init_key(longlong param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  code *pcVar7;
  
  lVar5 = FUN_140b987a0();
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_140b89fd8;
  iVar4 = FUN_140b981e0(param_1);
  iVar2 = (iVar4 / 2) * 8;
  if (iVar4 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aes.c",0xca2,"aes_xts_init_key");
    FUN_140b91cc0(6,0x82,0);
    return 0;
  }
  lVar1 = iVar4 / 2 + param_2;
  if ((param_4 != 0) && (iVar4 = FUN_14046e9f0(param_2,lVar1), iVar4 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aes.c",0xcb7,"aes_xts_init_key");
    FUN_140b91cc0(6,0xc0,0);
    return 0;
  }
  *(undefined8 *)(lVar5 + 0x210) = 0;
  if ((DAT_1416f2384 & 0x200) != 0) {
    puVar6 = &DAT_140771f30;
    if (param_4 != 0) {
      puVar6 = &DAT_1407716a0;
    }
    *(undefined **)(lVar5 + 0x210) = puVar6;
  }
  if (param_4 == 0) {
    FUN_14076e450(param_2,iVar2,lVar5);
    pcVar7 = FUN_14076e090;
  }
  else {
    FUN_14076e170();
    pcVar7 = FUN_14076dae0;
  }
  *(code **)(lVar5 + 0x200) = pcVar7;
  FUN_14076e170(lVar1,iVar2,lVar5 + 0xf8);
  *(code **)(lVar5 + 0x208) = FUN_14076dae0;
  *(longlong *)(lVar5 + 0x1f0) = lVar5;
  if (param_3 == (undefined8 *)0x0) {
    return 1;
  }
LAB_140b89fd8:
  *(longlong *)(lVar5 + 0x1f8) = lVar5 + 0xf8;
  uVar3 = param_3[1];
  *(undefined8 *)(param_1 + 0x28) = *param_3;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  return 1;
}

