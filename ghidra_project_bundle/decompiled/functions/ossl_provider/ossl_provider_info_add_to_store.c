/**
 * Function: ossl_provider_info_add_to_store
 * Address:  140bd3e10
 * Signature: undefined ossl_provider_info_add_to_store(void)
 * Body size: 452 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_provider_info_add_to_store(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  lVar4 = FUN_140c17600(param_1,1);
  if (lVar4 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\provider_core.c",0x14f,"get_provider_store");
    FUN_140b91cc0(0xf,0xc0103,0);
  }
  uVar7 = 0;
  if (*param_2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\provider_core.c",0x16a,"ossl_provider_info_add_to_store");
    FUN_140b91cc0(0xf,0xc0102,0);
    return 0;
  }
  if (lVar4 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\provider_core.c",0x16f,"ossl_provider_info_add_to_store");
    FUN_140b91cc0(0xf,0xc0103,0);
    return 0;
  }
  iVar3 = FUN_140b8b770(*(undefined8 *)(lVar4 + 0x20));
  if (iVar3 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar4 + 0x40);
  if (lVar5 == 0) {
    lVar5 = FUN_140b8da80(400,"crypto\\provider_core.c",0x177);
    *(longlong *)(lVar4 + 0x30) = lVar5;
    if (lVar5 == 0) goto LAB_140bd3faf;
    *(undefined8 *)(lVar4 + 0x40) = 10;
  }
  else if (*(longlong *)(lVar4 + 0x38) == lVar5) {
    lVar6 = FUN_140b8d9c0(*(undefined8 *)(lVar4 + 0x30),(lVar5 + 10) * 0x28,
                          "crypto\\provider_core.c",0x180);
    if (lVar6 == 0) goto LAB_140bd3faf;
    *(longlong *)(lVar4 + 0x30) = lVar6;
    *(longlong *)(lVar4 + 0x40) = lVar5 + 10;
  }
  plVar8 = (longlong *)(lVar4 + 0x38);
  lVar5 = *plVar8;
  uVar7 = 1;
  lVar2 = param_2[1];
  lVar6 = *(longlong *)(lVar4 + 0x30);
  plVar1 = (longlong *)(lVar6 + lVar5 * 0x28);
  *plVar1 = *param_2;
  plVar1[1] = lVar2;
  lVar2 = param_2[3];
  plVar1 = (longlong *)(lVar6 + 0x10 + lVar5 * 0x28);
  *plVar1 = param_2[2];
  plVar1[1] = lVar2;
  *(longlong *)(lVar6 + 0x20 + lVar5 * 0x28) = param_2[4];
  *plVar8 = *plVar8 + 1;
LAB_140bd3faf:
  FUN_140b8b7a0(*(undefined8 *)(lVar4 + 0x20));
  return uVar7;
}

