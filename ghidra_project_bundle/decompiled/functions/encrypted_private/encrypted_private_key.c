/**
 * Function: encrypted_private_key
 * Address:  140d6f0e0
 * Signature: undefined encrypted_private_key(void)
 * Body size: 1099 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void encrypted_private_key
               (undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,int *param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined1 auStack_1f8 [32];
  int *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  int local_1a8 [2];
  char *local_1a0;
  undefined8 local_198;
  undefined4 local_190 [2];
  undefined8 local_188;
  int *local_180;
  code *local_178;
  char *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [40];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100 [21];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140d6f0ff;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_1f8;
  uVar13 = 0;
  local_180 = param_5;
  local_188 = param_7;
  local_168 = param_6;
  local_1a0 = (char *)0x0;
  local_170 = (char *)0x0;
  local_198 = 0;
  local_1a8[0] = 0;
  local_190[0] = 0;
  local_178 = param_4;
  lVar7 = FUN_140d713c0(*param_1);
  if (lVar7 == 0) goto LAB_140d6f51c;
  local_1d8 = local_1a8;
  iVar6 = FUN_140bf3d20(lVar7,&local_1a0,&local_170,&local_198);
  FUN_140b73150(lVar7);
  pcVar12 = local_170;
  if (iVar6 < 1) goto LAB_140d6f51c;
  sVar8 = strlen(local_170);
  if (sVar8 < 0xb) {
LAB_140d6f1ff:
    pcVar12 = local_1a0;
    ppuVar10 = &PTR_s_PRIVATE_KEY_14151d360;
    do {
      iVar6 = strcmp(pcVar12,ppuVar10[-4]);
      if (iVar6 == 0) {
LAB_140d6f2a8:
        if (0x11 < uVar13) break;
        puVar11 = &local_128;
        lVar7 = (&DAT_14151d350)[uVar13 * 4];
        puVar1 = (&PTR_s_EncryptedPrivateKeyInfo_14151d358)[uVar13 * 4];
        if (uVar13 < 2) {
          if ((((param_3 & 1) != 0) ||
              (iVar6 = FUN_140b8c6a0(param_1 + 1,"EncryptedPrivateKeyInfo"), iVar6 == 0)) ||
             (iVar6 = FUN_140b8c6a0(param_1 + 1,"PrivateKeyInfo"), iVar6 == 0)) {
            local_1c0 = FUN_140b76070(*param_1);
            local_1c8 = local_188;
            local_1d0 = local_168;
            local_1d8 = local_180;
            local_1b8 = param_1 + 5;
            privatekeyinfo(local_198,local_1a8[0],param_3,local_178);
            pcVar12 = local_1a0;
            break;
          }
LAB_140d6f355:
          if (((param_3 & 2) != 0) ||
             (iVar6 = FUN_140b8c6a0(param_1 + 1,"SubjectPublicKeyInfo"), iVar6 == 0)) {
            local_1c0 = FUN_140b76070(*param_1);
            local_1c8 = local_188;
            local_1d0 = local_168;
            local_1d8 = local_180;
            local_1b8 = param_1 + 5;
            subjectpublickeyinfo(local_198,local_1a8[0],param_3,local_178);
            pcVar12 = local_1a0;
            break;
          }
        }
        else if (uVar13 < 3) goto LAB_140d6f355;
        local_190[0] = *(undefined4 *)(uVar13 * 0x20 + 0x14151d348);
        if (lVar7 != 0) {
          puVar9 = (undefined8 *)FUN_140b93780(local_150,"data-type",lVar7,0);
          puVar11 = local_100;
          local_128 = *puVar9;
          uStack_120 = puVar9[1];
          local_118 = puVar9[2];
          uStack_110 = puVar9[3];
          local_108 = puVar9[4];
        }
        if (puVar1 != (undefined *)0x0) {
          puVar9 = (undefined8 *)FUN_140b93780(local_150,"data-structure",puVar1,0);
          uVar5 = puVar9[1];
          *puVar11 = *puVar9;
          puVar11[1] = uVar5;
          uVar5 = puVar9[3];
          puVar11[2] = puVar9[2];
          puVar11[3] = uVar5;
          puVar11[4] = puVar9[4];
          puVar11 = puVar11 + 5;
        }
        puVar9 = (undefined8 *)
                 FUN_140b93860(local_150,&DAT_1413a6588,local_198,(longlong)local_1a8[0]);
        uVar5 = puVar9[1];
        *puVar11 = *puVar9;
        puVar11[1] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar9 + 0x14);
        uVar3 = *(undefined4 *)(puVar9 + 3);
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x1c);
        *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar9 + 2);
        *(undefined4 *)((longlong)puVar11 + 0x14) = uVar2;
        *(undefined4 *)(puVar11 + 3) = uVar3;
        *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar4;
        puVar11[4] = puVar9[4];
        puVar9 = (undefined8 *)FUN_140b935b0(local_150,&DAT_1413a6260,local_190);
        uVar5 = puVar9[1];
        puVar11[5] = *puVar9;
        puVar11[6] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar9 + 0x14);
        uVar3 = *(undefined4 *)(puVar9 + 3);
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x1c);
        *(undefined4 *)(puVar11 + 7) = *(undefined4 *)(puVar9 + 2);
        *(undefined4 *)((longlong)puVar11 + 0x3c) = uVar2;
        *(undefined4 *)(puVar11 + 8) = uVar3;
        *(undefined4 *)((longlong)puVar11 + 0x44) = uVar4;
        puVar11[9] = puVar9[4];
        puVar9 = (undefined8 *)FUN_140b93900(local_150);
        uVar5 = puVar9[1];
        puVar11[10] = *puVar9;
        puVar11[0xb] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar9 + 0x14);
        uVar3 = *(undefined4 *)(puVar9 + 3);
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x1c);
        *(undefined4 *)(puVar11 + 0xc) = *(undefined4 *)(puVar9 + 2);
        *(undefined4 *)((longlong)puVar11 + 100) = uVar2;
        *(undefined4 *)(puVar11 + 0xd) = uVar3;
        *(undefined4 *)((longlong)puVar11 + 0x6c) = uVar4;
        puVar11[0xe] = puVar9[4];
        (*local_178)(&local_128,local_180);
        pcVar12 = local_1a0;
        break;
      }
      iVar6 = strcmp(pcVar12,*ppuVar10);
      if (iVar6 == 0) {
        uVar13 = uVar13 + 1;
        goto LAB_140d6f2a8;
      }
      iVar6 = strcmp(pcVar12,ppuVar10[4]);
      if (iVar6 == 0) {
        uVar13 = uVar13 + 2;
        goto LAB_140d6f2a8;
      }
      iVar6 = strcmp(pcVar12,ppuVar10[8]);
      if (iVar6 == 0) {
        uVar13 = uVar13 + 3;
        goto LAB_140d6f2a8;
      }
      iVar6 = strcmp(pcVar12,ppuVar10[0xc]);
      if (iVar6 == 0) {
        uVar13 = uVar13 + 4;
        goto LAB_140d6f2a8;
      }
      iVar6 = strcmp(pcVar12,ppuVar10[0x10]);
      if (iVar6 == 0) {
        uVar13 = uVar13 + 5;
        goto LAB_140d6f2a8;
      }
      uVar13 = uVar13 + 6;
      ppuVar10 = ppuVar10 + 0x18;
    } while (uVar13 < 0x12);
  }
  else {
    local_158 = local_188;
    local_160 = param_6;
    iVar6 = pem_get_evp_cipher_info(pcVar12,local_150);
    pcVar12 = local_1a0;
    if (iVar6 != 0) {
      local_1d8 = (int *)&local_160;
      iVar6 = enter_pem_pass_phrase(local_150,local_198,local_1a8,FUN_140d6f600);
      pcVar12 = local_1a0;
      if (iVar6 != 0) goto LAB_140d6f1ff;
    }
  }
  FUN_140b8d990(pcVar12,"providers\\implementations\\encode_decode\\decode_pem2der.c",0x10b);
  FUN_140b8d990(local_170,"providers\\implementations\\encode_decode\\decode_pem2der.c",0x10c);
  FUN_140b8d990(local_198,"providers\\implementations\\encode_decode\\decode_pem2der.c",0x10d);
LAB_140d6f51c:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_1f8);
}

