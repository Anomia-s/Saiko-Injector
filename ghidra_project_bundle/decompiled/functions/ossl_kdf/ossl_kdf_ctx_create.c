/**
 * Function: ossl_kdf_ctx_create
 * Address:  140cfcac0
 * Signature: undefined ossl_kdf_ctx_create(void)
 * Body size: 381 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_kdf_ctx_create(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [48];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68 [6];
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  lVar6 = FUN_140c47d50(param_3,param_1,param_4);
  if (lVar6 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\hpke\\hpke_util.c",0x191,"ossl_kdf_ctx_create");
    FUN_140b91cc0(0xf,0x8010d,0);
  }
  else {
    lVar7 = FUN_140c480e0(lVar6);
    FUN_140c47cf0(lVar6);
    if ((lVar7 != 0) && (param_2 != 0)) {
      puVar8 = (undefined8 *)FUN_140b93780(local_e8,"digest",param_2,0);
      puVar9 = &local_90;
      local_b8 = *puVar8;
      uStack_b0 = puVar8[1];
      local_a8 = *(undefined4 *)(puVar8 + 2);
      uStack_a4 = *(undefined4 *)((longlong)puVar8 + 0x14);
      uStack_a0 = *(undefined4 *)(puVar8 + 3);
      uStack_9c = *(undefined4 *)((longlong)puVar8 + 0x1c);
      local_98 = puVar8[4];
      if (param_4 != 0) {
        puVar8 = (undefined8 *)FUN_140b93780(local_e8,"properties",param_4,0);
        puVar9 = local_68;
        local_90 = *puVar8;
        uStack_88 = puVar8[1];
        local_80 = *(undefined4 *)(puVar8 + 2);
        uStack_7c = *(undefined4 *)((longlong)puVar8 + 0x14);
        uStack_78 = *(undefined4 *)(puVar8 + 3);
        uStack_74 = *(undefined4 *)((longlong)puVar8 + 0x1c);
        local_70 = puVar8[4];
      }
      puVar8 = (undefined8 *)FUN_140b93900(local_e8);
      uVar4 = puVar8[1];
      *puVar9 = *puVar8;
      puVar9[1] = uVar4;
      uVar1 = *(undefined4 *)((longlong)puVar8 + 0x14);
      uVar2 = *(undefined4 *)(puVar8 + 3);
      uVar3 = *(undefined4 *)((longlong)puVar8 + 0x1c);
      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar8 + 2);
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar1;
      *(undefined4 *)(puVar9 + 3) = uVar2;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar3;
      puVar9[4] = puVar8[4];
      iVar5 = FUN_140c48470(lVar7,&local_b8);
      if (iVar5 < 1) {
        FUN_140c481d0(lVar7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_108);
}

