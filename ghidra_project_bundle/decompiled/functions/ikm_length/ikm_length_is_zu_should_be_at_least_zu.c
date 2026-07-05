/**
 * Function: ikm_length_is_zu_should_be_at_least_zu
 * Address:  140d512b0
 * Signature: undefined ikm_length_is_zu_should_be_at_least_zu(void)
 * Body size: 654 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ikm_length_is_zu_should_be_at_least_zu(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  char *local_108;
  undefined1 *local_100;
  ulonglong local_f8;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_d8 [64];
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_148;
  lVar6 = param_1[8];
  puVar3 = (undefined8 *)FUN_140c13030(param_1[2],*(undefined4 *)(*param_1 + 0x60),0,param_1[3]);
  if (puVar3 == (undefined8 *)0x0) goto LAB_140d5152e;
  lVar4 = FUN_140c13140(puVar3);
  puVar8 = param_2;
  if (lVar4 == 0) {
LAB_140d51509:
    FUN_140c13180(puVar3);
  }
  else {
    if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
      uVar1 = *(ulonglong *)(lVar6 + 0x38);
      if ((0x42 < uVar1) || (iVar2 = FUN_140b82e60(param_1[2],local_98,uVar1,0), iVar2 < 1))
      goto LAB_140d51509;
      param_3 = *(ulonglong *)(lVar6 + 0x38);
      puVar8 = local_98;
    }
    pcVar7 = "X25519";
    if (*(int *)(puVar3 + 0xc) != 0) {
      pcVar7 = "X448";
    }
    puVar5 = (undefined1 *)ossl_hpke_kem_info_find_curve(pcVar7);
    if (param_3 < *(ulonglong *)(puVar5 + 0x38)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kem\\ecx_kem.c",0x15e,"ossl_ecx_dhkem_derive_private")
      ;
      local_128 = *(undefined8 *)(puVar5 + 0x38);
      FUN_140b91cc0(0x39,0xe6,"ikm length is :%zu, should be at least %zu",param_3);
      FUN_14046e980(local_d8,0x40);
      lVar6 = 0;
LAB_140d51504:
      FUN_140c481d0(lVar6);
      goto LAB_140d51509;
    }
    lVar6 = ossl_kdf_ctx_create(&DAT_1413a698c,*(undefined8 *)(puVar5 + 0x18),*puVar3,puVar3[1]);
    if (lVar6 == 0) goto LAB_140d51509;
    local_e8 = puVar5[1];
    local_e7 = *puVar5;
    local_108 = "dkp_prk";
    local_118 = &local_e8;
    local_110 = 2;
    local_120 = &DAT_1413030c0;
    local_128 = 0;
    local_100 = puVar8;
    local_f8 = param_3;
    iVar2 = FUN_140cfc630(lVar6,local_d8,*(undefined8 *)(puVar5 + 0x20),0);
    if (iVar2 == 0) {
LAB_140d514f2:
      FUN_14046e980(local_d8,0x40);
      goto LAB_140d51504;
    }
    local_f8 = 0;
    local_100 = (undefined1 *)0x0;
    local_108 = "sk";
    local_110 = 2;
    local_118 = &local_e8;
    local_120 = &DAT_1413030c0;
    local_128 = *(undefined8 *)(puVar5 + 0x20);
    iVar2 = FUN_140cfc870(lVar6,lVar4,*(undefined8 *)(puVar5 + 0x38),local_d8);
    if (iVar2 == 0) goto LAB_140d514f2;
    FUN_14046e980(local_d8,0x40);
    FUN_140c481d0(lVar6);
    iVar2 = FUN_140c7fd30(puVar3);
    if (iVar2 == 0) goto LAB_140d51509;
    *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) | 1;
  }
  if (puVar8 != param_2) {
    FUN_14046e980(puVar8,param_3);
  }
LAB_140d5152e:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_148);
}

