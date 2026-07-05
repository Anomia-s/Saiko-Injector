/**
 * Function: mfa_required_response_missing_mfa_token
 * Address:  1405b5e30
 * Signature: undefined mfa_required_response_missing_mfa_token(void)
 * Body size: 3482 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined2 *
mfa_required_response_missing_mfa_token
          (undefined2 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  size_t sVar9;
  undefined8 ******ppppppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *******pppppppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  char *pcVar17;
  uint *******pppppppuVar18;
  longlong lVar19;
  uint *puVar20;
  uint ******ppppppuVar21;
  undefined8 *******pppppppuVar22;
  undefined2 *_Dst;
  char *_Size;
  char *pcVar23;
  uint *******_Src;
  undefined2 *puVar24;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined1 local_238 [8];
  undefined8 *local_230;
  longlong local_220;
  undefined8 uStack_218;
  longlong local_210;
  uint *******local_1f8 [2];
  longlong local_1e8;
  ulonglong uStack_1e0;
  undefined8 local_1c0;
  longlong local_1b8 [3];
  ulonglong local_1a0;
  undefined1 local_198;
  undefined7 uStack_197;
  undefined8 local_188;
  ulonglong local_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong local_160;
  undefined7 local_158;
  undefined4 uStack_151;
  undefined5 uStack_14d;
  undefined8 local_148;
  ulonglong local_140;
  char *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulonglong uStack_120;
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint ******local_108;
  uint ******ppppppuStack_100;
  undefined8 local_e0;
  undefined8 *local_d8 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_90;
  undefined8 *******local_88;
  undefined8 uStack_80;
  size_t local_78;
  ulonglong uStack_70;
  undefined2 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xf;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xf;
  *(undefined8 *)(param_1 + 0x44) = 0;
  local_68 = param_1;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    FUN_1400069b0(param_1 + 4,0x14,param_3,"backend_url is empty");
  }
  else {
    FUN_1401f6c40(local_d8);
    local_d8[0][0x3c] = 5;
    local_d8[0][0x3d] = 0;
    local_d8[0][0x3e] = 10;
    local_d8[0][0x3f] = 0;
    uVar7 = cJSON_CreateObject();
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    cJSON_AddStringToObject(uVar7,"identifier",param_3);
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    cJSON_AddStringToObject(uVar7,"password",param_4);
    pcVar8 = (char *)cJSON_PrintUnformatted(uVar7);
    cJSON_Delete(uVar7);
    local_128 = 0;
    uStack_120 = 0;
    local_138 = (char *)0x0;
    uStack_130 = 0;
    local_138 = (char *)FUN_140b65d30(0x20);
    local_128 = 0x10;
    uStack_120 = 0x1f;
    builtin_strncpy(local_138,"application/json",0x11);
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (undefined8 *******)0x0;
    uStack_80 = 0;
    sVar9 = strlen(pcVar8);
    if ((longlong)sVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (sVar9 < 0x10) {
      uStack_70 = 0xf;
      local_78 = sVar9;
      memcpy(&local_88,pcVar8,sVar9);
      *(undefined1 *)((longlong)&local_88 + sVar9) = 0;
    }
    else {
      uVar16 = sVar9 | 0xf;
      uVar11 = 0x16;
      if (0x16 < uVar16) {
        uVar11 = uVar16;
      }
      if (uVar16 < 0xfff) {
        pppppppuVar22 = (undefined8 *******)FUN_140b65d30(uVar11 + 1);
      }
      else {
        ppppppuVar10 = (undefined8 ******)FUN_140b65d30(uVar11 + 0x28);
        pppppppuVar22 = (undefined8 *******)((longlong)ppppppuVar10 + 0x27U & 0xffffffffffffffe0);
        pppppppuVar22[-1] = ppppppuVar10;
      }
      local_88 = pppppppuVar22;
      local_78 = sVar9;
      uStack_70 = uVar11;
      memcpy(pppppppuVar22,pcVar8,sVar9);
      *(undefined1 *)((longlong)pppppppuVar22 + sVar9) = 0;
    }
    FUN_1405b6fd0(local_1b8,"Content-Type","application/json");
    local_288 = 0;
    FUN_1401c5e10(local_238,&local_288,&local_c8);
    unordered_map_set_too_long(local_238,&local_288,local_1b8);
    uStack_14d = 0;
    local_148 = 0xb;
    local_140 = 0xf;
    local_158 = 0x6c2f687475612f;
    uStack_151 = 0x6e69676f;
    local_90 = 0;
    local_e0 = 0;
    local_1c0 = 0;
    pppppppuVar22 = local_88;
    if (uStack_70 < 0x10) {
      pppppppuVar22 = &local_88;
    }
    uStack_170 = 0;
    local_168 = 4;
    local_160 = 0xf;
    local_178 = 0x54534f50;
    puVar15 = &local_118;
    FUN_1405b8d60(local_d8[0],&local_288,&local_178,&local_158,local_238,pppppppuVar22,local_78,
                  local_1f8,puVar15,&local_138,&local_c8);
    puVar24 = local_68;
    if (0xf < local_160) {
      uVar11 = local_160 + 1;
      lVar12 = local_178;
      if (0xfff < uVar11) {
        lVar12 = *(longlong *)(local_178 + -8);
        if (0x1f < (ulonglong)((local_178 + -8) - lVar12)) goto LAB_1405b6ba7;
        uVar11 = local_160 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar12,uVar11);
    }
    if (0xf < local_140) {
      lVar13 = CONCAT17((undefined1)uStack_151,local_158);
      uVar11 = local_140 + 1;
      lVar12 = lVar13;
      if (0xfff < uVar11) {
        lVar12 = *(longlong *)(lVar13 + -8);
        if (0x1f < (ulonglong)((lVar13 + -8) - lVar12)) goto LAB_1405b6ba7;
        uVar11 = local_140 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar12,uVar11);
    }
    if (local_220 != 0) {
      uVar11 = local_210 - local_220;
      lVar12 = local_220;
      if (0xfff < uVar11) {
        lVar12 = *(longlong *)(local_220 + -8);
        if (0x1f < (ulonglong)((local_220 + -8) - lVar12)) goto LAB_1405b6ba7;
        uVar11 = uVar11 + 0x27;
      }
      thunk_FUN_140b68ba8(lVar12,uVar11);
      local_220 = 0;
      uStack_218 = 0;
      local_210 = 0;
    }
    *(undefined8 *)local_230[1] = 0;
    puVar4 = (undefined8 *)*local_230;
    while (puVar4 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar4;
      FUN_140016fe0(puVar4 + 2);
      thunk_FUN_140b68ba8(puVar4,0x50);
      puVar4 = puVar2;
    }
    thunk_FUN_140b68ba8(local_230,0x50);
    if (0xf < local_180) {
      lVar13 = CONCAT71(uStack_197,local_198);
      uVar11 = local_180 + 1;
      lVar12 = lVar13;
      if (0xfff < uVar11) {
        lVar12 = *(longlong *)(lVar13 + -8);
        if (0x1f < (ulonglong)((lVar13 + -8) - lVar12)) goto LAB_1405b6ba7;
        uVar11 = local_180 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar12,uVar11);
    }
    local_188 = 0;
    local_180 = 0xf;
    local_198 = 0;
    if (0xf < local_1a0) {
      uVar11 = local_1a0 + 1;
      lVar12 = local_1b8[0];
      if (0xfff < uVar11) {
        lVar12 = *(longlong *)(local_1b8[0] + -8);
        if (0x1f < (ulonglong)((local_1b8[0] + -8) - lVar12)) goto LAB_1405b6ba7;
        uVar11 = local_1a0 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar12,uVar11);
    }
    if (0xf < uStack_70) {
      uVar11 = uStack_70 + 1;
      pppppppuVar22 = local_88;
      if (0xfff < uVar11) {
        pppppppuVar22 = (undefined8 *******)local_88[-1];
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar22)))
        goto LAB_1405b6ba7;
        uVar11 = uStack_70 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar22,uVar11);
    }
    if (0xf < uStack_120) {
      uVar11 = uStack_120 + 1;
      pcVar23 = local_138;
      if (0xfff < uVar11) {
        pcVar23 = *(char **)(local_138 + -8);
        if ((char *)0x1f < local_138 + (-8 - (longlong)pcVar23)) goto LAB_1405b6ba7;
        uVar11 = uStack_120 + 0x28;
      }
      thunk_FUN_140b68ba8(pcVar23,uVar11);
    }
    cJSON_free(pcVar8);
    lVar12 = CONCAT44(uStack_284,local_288);
    if (lVar12 == 0) {
      pcVar8 = (char *)&local_c8;
      ssl_server_hostname_verification_failed(pcVar8,local_280);
      if (uStack_b0 - local_b8 < 0x13) {
        pcVar8 = (char *)FUN_140008af0(&local_c8,0x13,local_b8,0,"connection failed: ",0x13);
      }
      else {
        pcVar23 = pcVar8;
        if (0xf < uStack_b0) {
          pcVar23 = local_c8;
        }
        _Size = (char *)0x13;
        if ((" connection failed: " < pcVar23 + local_b8 && pcVar23 < "") &&
           (_Size = pcVar23 + -0x1413a1ae8, pcVar23 < "connection failed: " || _Size == (char *)0x0)
           ) {
          _Size = (char *)0x0;
        }
        sVar9 = local_b8 + 1;
        pcVar17 = local_c8;
        if (uStack_b0 < 0x10) {
          pcVar17 = pcVar8;
        }
        local_b8 = local_b8 + 0x13;
        memmove(pcVar17 + 0x13,pcVar23,sVar9);
        memcpy(pcVar23,"connection failed: ",(size_t)_Size);
        memcpy(pcVar23 + (longlong)_Size,_Size + 0x1413a1afb,0x13 - (longlong)_Size);
      }
      cVar1 = *pcVar8;
      uVar7 = *(undefined8 *)(pcVar8 + 8);
      uStack_114._3_1_ = (undefined1)uVar7;
      uStack_110 = (undefined4)((ulonglong)uVar7 >> 8);
      uStack_10c._0_3_ = (undefined3)((ulonglong)uVar7 >> 0x28);
      local_118 = (uint)*(undefined8 *)(pcVar8 + 1);
      uStack_114 = (undefined4)((ulonglong)*(undefined8 *)(pcVar8 + 1) >> 0x20);
      uVar7 = *(undefined8 *)(pcVar8 + 0x10);
      uVar3 = *(undefined8 *)(pcVar8 + 0x18);
      pcVar8[0x10] = '\0';
      pcVar8[0x11] = '\0';
      pcVar8[0x12] = '\0';
      pcVar8[0x13] = '\0';
      pcVar8[0x14] = '\0';
      pcVar8[0x15] = '\0';
      pcVar8[0x16] = '\0';
      pcVar8[0x17] = '\0';
      pcVar8[0x18] = '\x0f';
      pcVar8[0x19] = '\0';
      pcVar8[0x1a] = '\0';
      pcVar8[0x1b] = '\0';
      pcVar8[0x1c] = '\0';
      pcVar8[0x1d] = '\0';
      pcVar8[0x1e] = '\0';
      pcVar8[0x1f] = '\0';
      *pcVar8 = '\0';
      puVar24 = local_68;
      uVar11 = *(ulonglong *)(local_68 + 0x10);
      if (0xf < uVar11) {
        lVar12 = *(longlong *)(local_68 + 4);
        uVar16 = uVar11 + 1;
        lVar13 = lVar12;
        if (0xfff < uVar16) {
          lVar13 = *(longlong *)(lVar12 + -8);
          if (0x1f < (ulonglong)((lVar12 + -8) - lVar13)) goto LAB_1405b6ba7;
          uVar16 = uVar11 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar13,uVar16);
      }
      *(char *)(puVar24 + 4) = cVar1;
      *(ulonglong *)((longlong)puVar24 + 9) = CONCAT44(uStack_114,local_118);
      *(ulonglong *)(puVar24 + 8) =
           CONCAT35((undefined3)uStack_10c,CONCAT41(uStack_110,uStack_114._3_1_));
      *(undefined8 *)(puVar24 + 0xc) = uVar7;
      *(undefined8 *)(puVar24 + 0x10) = uVar3;
      if (0xf < uStack_b0) {
        uVar11 = uStack_b0 + 1;
        pcVar8 = local_c8;
        if (0xfff < uVar11) {
          pcVar8 = *(char **)(local_c8 + -8);
          if ((char *)0x1f < local_c8 + (-8 - (longlong)pcVar8)) {
LAB_1405b6ba7:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar11 = uStack_b0 + 0x28;
        }
        thunk_FUN_140b68ba8(pcVar8,uVar11);
      }
    }
    else {
      *(undefined4 *)(puVar24 + 2) = *(undefined4 *)(lVar12 + 0x20);
      if (*(ulonglong *)(lVar12 + 0xa0) < 0x10) {
        lVar12 = cJSON_Parse(lVar12 + 0x88);
      }
      else {
        lVar12 = cJSON_Parse(*(undefined8 *)(lVar12 + 0x88));
      }
      if (lVar12 == 0) {
        if (*(ulonglong *)(puVar24 + 0x10) < 0x15) {
          FUN_1400069b0(puVar24 + 4,0x15);
        }
        else {
          *(undefined8 *)(puVar24 + 0xc) = 0x15;
          builtin_strncpy(*(char **)(puVar24 + 4),"invalid JSON response",0x16);
        }
      }
      else {
        if (*(int *)(CONCAT44(uStack_284,local_288) + 0x20) == 200) {
          uVar7 = cJSON_GetObjectItem(lVar12,"mfa_required");
          iVar6 = cJSON_IsTrue(uVar7);
          if (iVar6 == 0) {
            server_returned_200_without_a_token(lVar12,puVar24);
          }
          else {
            lVar13 = cJSON_GetObjectItem(lVar12,"mfa_token");
            iVar6 = cJSON_IsString(lVar13);
            if (iVar6 == 0) {
              FUN_140037500(puVar24 + 4,"mfa_required response missing mfa_token");
            }
            else {
              _Dst = puVar24 + 0x24;
              *(undefined1 *)((longlong)puVar24 + 1) = 1;
              pcVar8 = *(char **)(lVar13 + 0x20);
              sVar9 = strlen(pcVar8);
              if (*(ulonglong *)(puVar24 + 0x30) < sVar9) {
                FUN_1400069b0(_Dst,sVar9);
              }
              else {
                if (0xf < *(ulonglong *)(puVar24 + 0x30)) {
                  _Dst = *(undefined2 **)(puVar24 + 0x24);
                }
                *(size_t *)(puVar24 + 0x2c) = sVar9;
                memmove(_Dst,pcVar8,sVar9);
                *(undefined1 *)((longlong)_Dst + sVar9) = 0;
              }
            }
          }
        }
        else {
          lVar13 = cJSON_GetObjectItem(lVar12,"error");
          iVar6 = cJSON_IsString(lVar13);
          if (iVar6 == 0) {
            pppppppuVar14 = (uint *******)local_1f8;
            FUN_140007930(pppppppuVar14,*(undefined4 *)(CONCAT44(uStack_284,local_288) + 0x20));
            if (uStack_1e0 - local_1e8 < 0x13) {
              pppppppuVar14 =
                   (uint *******)
                   FUN_140008af0(local_1f8,0x13,local_1e8,0,"Login failed (HTTP ",0x13);
            }
            else {
              _Src = pppppppuVar14;
              if (0xf < uStack_1e0) {
                _Src = local_1f8[0];
              }
              pcVar8 = (char *)0x13;
              if (("" < (char *)((longlong)_Src + local_1e8) && _Src < (uint *******)0x1413a1198) &&
                 (pcVar8 = (char *)((longlong)_Src + -0x1413a1185),
                 _Src < "Login failed (HTTP " || pcVar8 == (char *)0x0)) {
                pcVar8 = (char *)0x0;
              }
              sVar9 = local_1e8 + 1;
              pppppppuVar18 = local_1f8[0];
              if (uStack_1e0 < 0x10) {
                pppppppuVar18 = pppppppuVar14;
              }
              local_1e8 = local_1e8 + 0x13;
              memmove((char *)((longlong)pppppppuVar18 + 0x13),_Src,sVar9);
              memcpy(_Src,"Login failed (HTTP ",(size_t)pcVar8);
              memcpy((char *)((longlong)_Src + (longlong)pcVar8),pcVar8 + 0x1413a1198,
                     0x13 - (longlong)pcVar8);
            }
            local_108 = pppppppuVar14[2];
            ppppppuStack_100 = pppppppuVar14[3];
            local_118 = *(uint *)pppppppuVar14;
            uStack_114 = *(undefined4 *)((longlong)pppppppuVar14 + 4);
            uStack_110 = *(undefined4 *)(pppppppuVar14 + 1);
            uStack_10c = *(undefined4 *)((longlong)pppppppuVar14 + 0xc);
            pppppppuVar14[2] = (uint ******)0x0;
            pppppppuVar14[3] = (uint ******)0xf;
            *(char *)pppppppuVar14 = '\0';
            puVar24 = local_68;
            ppppppuVar21 = local_108;
            if (ppppppuStack_100 == local_108) {
              puVar15 = (uint *)FUN_140006210(&local_118,1);
              puVar24 = local_68;
            }
            else {
              local_108 = (uint ******)((longlong)local_108 + 1);
              puVar20 = puVar15;
              if ((uint ******)0xf < ppppppuStack_100) {
                puVar20 = (uint *)CONCAT44(uStack_114,local_118);
              }
              *(undefined2 *)((longlong)puVar20 + (longlong)ppppppuVar21) = 0x29;
            }
            local_c8 = *(char **)puVar15;
            uStack_c0 = *(undefined8 *)(puVar15 + 2);
            local_b8 = *(size_t *)(puVar15 + 4);
            uStack_b0 = *(ulonglong *)(puVar15 + 6);
            puVar15[4] = 0;
            puVar15[5] = 0;
            puVar15[6] = 0xf;
            puVar15[7] = 0;
            *(undefined1 *)puVar15 = 0;
            uVar11 = *(ulonglong *)(puVar24 + 0x10);
          }
          else {
            pcVar8 = *(char **)(lVar13 + 0x20);
            local_b8 = 0;
            uStack_b0 = 0;
            local_c8 = (char *)0x0;
            uStack_c0 = 0;
            sVar9 = strlen(pcVar8);
            if ((longlong)sVar9 < 0) {
                    /* WARNING: Subroutine does not return */
              string_too_long();
            }
            if (sVar9 < 0x10) {
              uStack_b0 = 0xf;
              local_b8 = sVar9;
              memcpy(&local_c8,pcVar8,sVar9);
              *(undefined1 *)((longlong)&local_c8 + sVar9) = 0;
              uVar11 = *(ulonglong *)(puVar24 + 0x10);
            }
            else {
              uVar16 = sVar9 | 0xf;
              uVar11 = 0x16;
              if (0x16 < uVar16) {
                uVar11 = uVar16;
              }
              if (uVar16 < 0xfff) {
                pcVar23 = (char *)FUN_140b65d30(uVar11 + 1);
              }
              else {
                lVar13 = FUN_140b65d30(uVar11 + 0x28);
                pcVar23 = (char *)(lVar13 + 0x27U & 0xffffffffffffffe0);
                *(longlong *)(pcVar23 + -8) = lVar13;
              }
              local_c8 = pcVar23;
              local_b8 = sVar9;
              uStack_b0 = uVar11;
              memcpy(pcVar23,pcVar8,sVar9);
              pcVar23[sVar9] = '\0';
              uVar11 = *(ulonglong *)(local_68 + 0x10);
              puVar24 = local_68;
            }
          }
          plVar5 = (longlong *)(puVar24 + 4);
          if (0xf < uVar11) {
            lVar13 = *plVar5;
            uVar16 = uVar11 + 1;
            lVar19 = lVar13;
            if (0xfff < uVar16) {
              lVar19 = *(longlong *)(lVar13 + -8);
              if (0x1f < (ulonglong)((lVar13 + -8) - lVar19)) goto LAB_1405b6ba7;
              uVar16 = uVar11 + 0x28;
            }
            thunk_FUN_140b68ba8(lVar19,uVar16);
          }
          *(undefined4 *)(plVar5 + 2) = (undefined4)local_b8;
          *(undefined4 *)(puVar24 + 0xe) = local_b8._4_4_;
          *(undefined4 *)(plVar5 + 3) = (undefined4)uStack_b0;
          *(undefined4 *)(puVar24 + 0x12) = uStack_b0._4_4_;
          *(undefined4 *)plVar5 = (undefined4)local_c8;
          *(undefined4 *)(puVar24 + 6) = local_c8._4_4_;
          *(undefined4 *)(plVar5 + 1) = (undefined4)uStack_c0;
          *(undefined4 *)(puVar24 + 10) = uStack_c0._4_4_;
          if (iVar6 == 0) {
            if ((uint ******)0xf < ppppppuStack_100) {
              lVar19 = CONCAT44(uStack_114,local_118);
              ppppppuVar21 = (uint ******)((longlong)ppppppuStack_100 + 1);
              lVar13 = lVar19;
              if ((uint ******)0xfff < ppppppuVar21) {
                lVar13 = *(longlong *)(lVar19 + -8);
                if (0x1f < (ulonglong)((lVar19 + -8) - lVar13)) goto LAB_1405b6ba7;
                ppppppuVar21 = ppppppuStack_100 + 5;
              }
              thunk_FUN_140b68ba8(lVar13,ppppppuVar21);
            }
            local_108 = (uint ******)0x0;
            ppppppuStack_100 = (uint ******)0xf;
            local_118 = local_118 & 0xffffff00;
            if (0xf < uStack_1e0) {
              uVar11 = uStack_1e0 + 1;
              pppppppuVar14 = local_1f8[0];
              if (0xfff < uVar11) {
                pppppppuVar14 = (uint *******)local_1f8[0][-1];
                if ((char *)0x1f < (char *)((longlong)local_1f8[0] + (-8 - (longlong)pppppppuVar14))
                   ) goto LAB_1405b6ba7;
                uVar11 = uStack_1e0 + 0x28;
              }
              thunk_FUN_140b68ba8(pppppppuVar14,uVar11);
            }
          }
        }
        cJSON_Delete(lVar12);
      }
    }
    FUN_1401c4a70(&local_288);
    if (local_d8[0] != (undefined8 *)0x0) {
      (**(code **)*local_d8[0])(local_d8[0],1);
    }
  }
  return local_68;
}

