/**
 * Function: aesni_xts_init_key
 * Address:  140b88880
 * Signature: undefined aesni_xts_init_key(void)
 * Body size: 414 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aesni_xts_init_key(longlong param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  
  lVar5 = FUN_140b987a0();
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_140b889ed;
  iVar4 = FUN_140b981e0(param_1);
  iVar2 = (iVar4 / 2) * 8;
  if (iVar4 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aes.c",0x11b,"aesni_xts_init_key")
    ;
    FUN_140b91cc0(6,0x82,0);
    return 0;
  }
  lVar1 = iVar4 / 2 + param_2;
  if (param_4 == 0) {
    FUN_140776b50(param_2,iVar2,lVar5);
    puVar6 = &DAT_140774ad0;
    puVar7 = &LAB_140772890;
  }
  else {
    iVar4 = FUN_14046e9f0(param_2,lVar1);
    if (iVar4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\e_aes.c",0x126,"aesni_xts_init_key");
      FUN_140b91cc0(6,0xc0,0);
      return 0;
    }
    FUN_140776bc0(param_2,iVar2,lVar5);
    puVar6 = &DAT_1407742a0;
    puVar7 = &LAB_140772840;
  }
  *(undefined1 **)(lVar5 + 0x200) = puVar7;
  *(undefined **)(lVar5 + 0x210) = puVar6;
  FUN_140776bc0(lVar1,iVar2,lVar5 + 0xf8);
  *(undefined1 **)(lVar5 + 0x208) = &LAB_140772840;
  *(longlong *)(lVar5 + 0x1f0) = lVar5;
  if (param_3 == (undefined8 *)0x0) {
    return 1;
  }
LAB_140b889ed:
  *(longlong *)(lVar5 + 0x1f8) = lVar5 + 0xf8;
  uVar3 = param_3[1];
  *(undefined8 *)(param_1 + 0x28) = *param_3;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  return 1;
}

