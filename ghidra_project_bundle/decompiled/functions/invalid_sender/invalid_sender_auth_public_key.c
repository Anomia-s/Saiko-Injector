/**
 * Function: invalid_sender_auth_public_key
 * Address:  140ca52d0
 * Signature: undefined invalid_sender_auth_public_key(void)
 * Body size: 867 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void invalid_sender_auth_public_key
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,void *param_7,void *param_8)

{
  undefined2 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_3e8 [32];
  ulonglong local_3c8;
  undefined *local_3c0;
  undefined1 *local_3b8;
  undefined8 local_3b0;
  char *local_3a8;
  undefined1 *local_3a0;
  ulonglong local_398;
  undefined1 local_388;
  undefined1 local_387;
  ulonglong local_380;
  longlong local_378;
  undefined8 local_370;
  undefined8 local_368;
  void *local_360;
  void *local_358;
  undefined8 local_350;
  undefined1 local_348 [64];
  undefined1 local_308 [144];
  undefined1 local_278 [144];
  undefined1 local_1e8 [400];
  ulonglong local_58;
  
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_3e8;
  local_368 = param_5;
  puVar1 = *(undefined2 **)(param_1 + 0x40);
  uVar7 = 0;
  local_370 = param_6;
  local_360 = param_7;
  uVar10 = *(ulonglong *)(puVar1 + 0x1c);
  _Size = *(size_t *)(puVar1 + 0x18);
  local_358 = param_8;
  local_378 = *(longlong *)(param_1 + 8);
  local_3c8 = CONCAT44(local_3c8._4_4_,(int)uVar10);
  local_350 = param_2;
  iVar3 = FUN_140ca51c0(param_3,param_4,local_308,0x84);
  uVar8 = uVar7;
  if (iVar3 == 0) goto LAB_140ca5432;
  uVar9 = _Size * 2;
  if (local_378 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    local_380 = uVar10;
    uVar4 = FUN_140b772a0(uVar5);
    uVar5 = FUN_140b97dc0(uVar5);
    local_3c0 = (undefined *)0x0;
    local_3c8 = 0x85;
    sVar6 = FUN_140c942b0(uVar4,uVar5,4,local_278);
    uVar8 = uVar10;
    if (sVar6 == 0) goto LAB_140ca5432;
    if (sVar6 != _Size) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kem\\ec_kem.c",0x24f,"derive_secret");
      FUN_140b91cc0(0x39,0x9e,"Invalid sender auth public key");
      goto LAB_140ca5432;
    }
    local_3c8 = CONCAT44(local_3c8._4_4_,(int)uVar10);
    iVar3 = FUN_140ca51c0(local_368,local_370,local_308 + uVar10,0x84 - uVar10);
    if (iVar3 == 0) goto LAB_140ca5432;
    uVar10 = uVar10 * 2;
    uVar9 = _Size * 3;
  }
  uVar8 = uVar10;
  local_380 = uVar10;
  if (uVar9 < 400) {
    memcpy(local_1e8,local_360,*(size_t *)(puVar1 + 0x18));
    memcpy(local_1e8 + *(size_t *)(puVar1 + 0x18),local_358,*(size_t *)(puVar1 + 0x18));
    if (local_378 != 0) {
      memcpy(local_1e8 + _Size * 2,local_278,_Size);
    }
    uVar7 = ossl_kdf_ctx_create(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(puVar1 + 0xc),
                                *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    uVar8 = local_380;
    if (uVar7 != 0) {
      uVar2 = *(ulonglong *)(puVar1 + 0x10);
      if (uVar2 < 0x41) {
        local_387 = (undefined1)*puVar1;
        local_388 = (undefined1)((ushort)*puVar1 >> 8);
        local_3a0 = local_308;
        local_3a8 = "eae_prk";
        local_3b8 = &local_388;
        local_3b0 = 2;
        local_3c0 = &DAT_14127a0a0;
        local_3c8 = 0;
        local_398 = uVar10;
        iVar3 = FUN_140cfc630(uVar7,local_348,uVar2,0);
        if (iVar3 != 0) {
          local_3a0 = local_1e8;
          local_3a8 = "shared_secret";
          local_3b8 = &local_388;
          local_3b0 = 2;
          local_3c0 = &DAT_14127a0a0;
          local_3c8 = uVar2;
          local_398 = uVar9;
          iVar3 = FUN_140cfc870(uVar7,local_350,uVar2,local_348);
          if (iVar3 != 0) {
            FUN_14046e980(local_348,uVar2);
            uVar8 = local_380;
            goto LAB_140ca5432;
          }
        }
        FUN_14046e980(local_348,uVar2);
        uVar8 = local_380;
      }
    }
  }
LAB_140ca5432:
  FUN_14046e980(local_308,uVar8);
  FUN_140c481d0(uVar7);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_3e8);
}

