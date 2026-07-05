/**
 * Function: member_without_parent_in_query
 * Address:  14038e530
 * Signature: undefined member_without_parent_in_query(void)
 * Body size: 6044 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
member_without_parent_in_query
          (ulonglong param_1,ulonglong param_2,ulonglong *param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined2 uVar8;
  short sVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  AstAttr *pAVar18;
  byte bVar19;
  int iVar20;
  undefined7 uVar23;
  undefined8 *puVar21;
  ulonglong uVar24;
  byte bVar25;
  undefined4 uVar26;
  char *pcVar27;
  undefined8 uVar28;
  ulonglong *puVar29;
  undefined8 *puVar30;
  longlong lVar31;
  ulonglong *puVar32;
  bool bVar33;
  byte bVar34;
  undefined1 auStack_1a8 [32];
  ulonglong *local_188;
  ulonglong local_180;
  undefined8 local_178;
  undefined8 *local_170;
  byte local_168;
  byte local_153;
  byte local_152;
  byte local_151;
  ulonglong local_150;
  undefined8 *local_148;
  byte local_13e;
  byte local_13d;
  undefined4 local_13c;
  uint local_138;
  uint local_134;
  ulonglong local_130;
  uint local_128;
  short local_122;
  ulonglong local_120;
  ulonglong local_118;
  undefined4 local_10c;
  ulonglong *local_108;
  undefined4 local_fc;
  char *local_f8;
  undefined8 local_f0;
  ulonglong *local_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  char local_ca;
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  ulonglong uVar22;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_1a8;
  local_d8 = *param_3;
  pcVar3 = (char *)param_3[3];
  puVar29 = param_3 + 5;
  local_e0 = (undefined8 *)param_3[5];
  uVar10 = *(ushort *)((longlong)param_3 + 0x46);
  local_150 = param_2;
  local_148 = param_4;
  if ((uVar10 & 0x100) != 0) {
    *(ushort *)((longlong)param_3 + 0x46) = uVar10 & 0xfeff;
    uVar12 = FUN_1400bc2a0(param_1,(ulonglong)pcVar3 & 0xffffffffffffff);
    if (uVar12 == 0) {
      pcVar27 = "member without parent in query";
      uVar28 = 0x374;
    }
    else {
      cVar5 = FUN_1400b9b40(param_1,uVar12,1);
      if (cVar5 != '\0') {
        uVar13 = *puVar29 & 0xffffffffffffff;
        bVar33 = false;
        if (((*puVar29 & 0x400000000000000) != 0) &&
           (bVar33 = false, uVar13 == 0x10e || uVar13 == 0x10f)) {
          bVar33 = param_3[6] == 0;
        }
        param_3[3] = (ulonglong)*(byte *)((longlong)param_3 + 0x1f) << 0x38 | uVar12;
        param_3[5] = 0;
        *param_3 = uVar12;
        *(int *)(local_148 + 0x2d) = (int)*(short *)((longlong)param_3 + 0x42);
        if ((*(short *)((longlong)param_3 + 0x42) == 2) && (!bVar33)) {
          *(undefined2 *)((longlong)param_3 + 0x42) = 3;
        }
        goto LAB_14038e69f;
      }
      pcVar27 = "parent of member is not a component";
      uVar28 = 0x379;
    }
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/query/compiler/compiler_term.c"
                  ,uVar28,pcVar27);
  }
LAB_14038e69f:
  puVar30 = local_148;
  uVar12 = local_150;
  local_134 = (uint)uVar10;
  local_130 = param_3[1];
  bVar33 = (local_130 & 0x400000000000000) == 0;
  local_13c = (undefined4)CONCAT71(0x4000000000000,!bVar33);
  if (bVar33) {
    local_fc = 0;
  }
  else {
    uVar23 = (undefined7)(local_130 >> 8);
    local_fc = (undefined4)CONCAT71(uVar23,1);
    if ((local_130 & 0xffffffffffffff) != 0x10e) {
      local_fc = (undefined4)CONCAT71(uVar23,(local_130 & 0xffffffffffffff) == 0x10f);
    }
  }
  puVar32 = *(ulonglong **)(local_150 + 0x10);
  local_120 = param_3[3];
  local_118 = param_3[5];
  local_f8 = pcVar3;
  local_151 = FUN_14039b880(param_3);
  local_122 = *(short *)((longlong)param_3 + 0x42);
  uVar11 = FUN_14039b980(uVar12,param_3);
  uVar13 = (ulonglong)uVar11;
  sVar9 = *(short *)((longlong)param_3 + 0x42);
  bVar34 = sVar9 == 3;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  bVar7 = (byte)uVar11;
  if (bVar7 == 0) {
    uVar26 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar4 = 0;
    if (2 < (ushort)(sVar9 - 4U)) goto LAB_14038e780;
LAB_14038e7cb:
    plVar14 = (longlong *)FUN_1400bca00(param_1,*param_3);
    if (plVar14 == (longlong *)0x0) {
      *(int *)((longlong)puVar30 + 0x16c) = *(int *)((longlong)puVar30 + 0x16c) + 1;
    }
    else {
      iVar20 = (int)plVar14[1];
      local_153 = bVar34;
      local_138 = uVar11;
      if ((longlong)iVar20 < 1) {
        lVar31 = 0;
LAB_14038e82b:
        if ((int)lVar31 != iVar20) {
          uVar12 = (ulonglong)local_138;
          puVar30 = local_148;
          bVar34 = local_153;
          if (*(short *)((longlong)param_3 + 0x42) == 2) goto LAB_14038e78a;
          goto LAB_14038e861;
        }
      }
      else {
        lVar17 = *plVar14;
        lVar31 = 0;
        do {
          lVar15 = FUN_1403a6e90(param_1,*(undefined8 *)(lVar17 + lVar31 * 8));
          if ((*(byte *)(lVar15 + 0x39) & 1) == 0) goto LAB_14038e82b;
          lVar31 = lVar31 + 1;
        } while (iVar20 != lVar31);
      }
      *(int *)((longlong)local_148 + 0x16c) = *(int *)((longlong)local_148 + 0x16c) + 1;
    }
  }
  else {
    uVar23 = (undefined7)(uVar12 >> 8);
    if (param_3 == puVar32) {
      uVar12 = CONCAT71(uVar23,1);
    }
    else {
      uVar12 = CONCAT71(uVar23,*(short *)((longlong)param_3 + -6) != 1);
    }
    uVar11 = (uint)uVar12;
    uVar26 = (undefined4)CONCAT71((int7)((ulonglong)puVar32 >> 8),sVar9 != 1);
    uVar4 = uVar26;
    if ((ushort)(sVar9 - 4U) < 3) goto LAB_14038e7cb;
LAB_14038e780:
    uVar26 = uVar4;
    if (sVar9 != 2) {
LAB_14038e861:
      uVar22 = local_c8;
      puVar21 = local_148;
      if ((char)uVar12 == '\0') {
        if (bVar7 != 0) {
          puVar30[1] = puVar30[4];
        }
      }
      else {
        puVar30[5] = puVar30[2];
        *(undefined1 *)((longlong)puVar30 + 0x39) = 1;
      }
      puVar32 = param_3 + 3;
      uVar16 = param_3[1];
      if ((uVar16 & 0x2ffffffffffffff) == 0x200000000000000) {
        if ((*puVar32 & 0xffffffffffffff) != 0x140) {
          uVar28 = 0;
          if ((*puVar32 & 0xffffffffffffff) == 0x141) {
            iVar20 = *(int *)(local_148 + 0x2c);
            lVar17 = (longlong)iVar20 + -1;
            *(int *)(local_148 + 0x2c) = (int)lVar17;
            local_148[0x2b] = local_148 + (longlong)iVar20 * 5 + -2;
            if ((*(uint *)((longlong)local_148 + 0x164) & (uint)(1L << ((byte)lVar17 & 0x3f))) != 0)
            {
              uStack_90 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0x1a;
              sVar9 = FUN_14038e0b0(&local_98,local_148);
              lVar17 = FUN_140106180(*puVar21);
              uVar28 = 0;
              *(short *)(lVar17 + 6 + (longlong)*(short *)(puVar21[0x2b] + 2) * 0x30) = sVar9;
              *(undefined2 *)(lVar17 + 4 + (longlong)sVar9 * 0x30) =
                   *(undefined2 *)(puVar21[0x2b] + 2);
              *(undefined1 *)(lVar17 + 2 + (longlong)sVar9 * 0x30) = 0xff;
              *(undefined2 *)(puVar21[0x2b] + 2) = 0xffff;
            }
          }
          goto LAB_14038ef39;
        }
        local_130 = local_150 + 0xe0;
        local_e8 = param_3;
        do {
          uVar22 = local_130;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          cVar5 = FUN_140392fa0(puVar32);
          if (cVar5 == '\0') {
            uVar13 = 0;
            param_1 = 0;
          }
          else {
            if ((*puVar32 & 0x400000000000000) == 0) {
              param_1 = 0;
              uVar22 = *puVar32;
joined_r0x00014038eec2:
              uVar13 = 0;
              uVar16 = local_98;
            }
            else {
              local_98._0_2_ = CONCAT11(8,(undefined1)local_98);
              uVar16 = FUN_14039b8c0(puVar32);
              param_1 = CONCAT71((int7)(param_1 >> 8),8);
              if (uVar16 == 0) {
                uVar22 = *puVar32;
                goto joined_r0x00014038eec2;
              }
              cVar5 = FUN_1403919d0(uVar22);
              uVar13 = CONCAT71((int7)(uVar13 >> 8),0xff);
              if ((cVar5 != '\0') &&
                 (pAVar18 = (AstAttr *)FUN_140391bd0(uVar22,uVar16,0,0), pAVar18 != (AstAttr *)0x0))
              {
                pAVar18 = Luau::AstAttr::vfunction5(pAVar18);
                uVar13 = (ulonglong)pAVar18 & 0xffffffff;
              }
              uStack_80 = CONCAT71(uStack_80._1_7_,(char)uVar13);
              uVar22 = *puVar32;
              uVar12 = uVar16;
              uVar16 = local_98;
            }
            local_98 = uVar16;
            if ((uVar22 & 0x200000000000000) != 0) {
              param_1 = param_1 | 4;
              local_98._2_6_ = (undefined6)(uVar16 >> 0x10);
              local_98._0_1_ = (undefined1)uVar16;
              local_98._0_2_ = CONCAT11((char)param_1,(undefined1)local_98);
              uStack_80 = uVar22 & 0xffffffffffffff;
              uVar13 = uVar22 & 0xffffffff;
            }
          }
          cVar5 = FUN_140392fa0(puVar29);
          if (cVar5 == '\0') {
            uVar12 = 0;
          }
          else {
            if ((puVar32[2] & 0x400000000000000) == 0) {
LAB_14038ed30:
              uVar12 = 0;
              uVar22 = puVar32[2];
              uVar16 = local_98;
            }
            else {
              param_1 = param_1 | 0x20;
              local_98._0_2_ = CONCAT11((char)param_1,(undefined1)local_98);
              lVar17 = FUN_14039b8c0(puVar29);
              uVar22 = local_130;
              if (lVar17 == 0) goto LAB_14038ed30;
              cVar5 = FUN_1403919d0(local_130);
              uVar12 = CONCAT71((int7)(uVar12 >> 8),0xff);
              if ((cVar5 != '\0') &&
                 (pAVar18 = (AstAttr *)FUN_140391bd0(uVar22,lVar17,0,0), pAVar18 != (AstAttr *)0x0))
              {
                pAVar18 = Luau::AstAttr::vfunction5(pAVar18);
                uVar12 = (ulonglong)pAVar18 & 0xffffffff;
              }
              local_78 = CONCAT71(local_78._1_7_,(char)uVar12);
              uVar22 = puVar32[2];
              param_3 = local_e8;
              uVar16 = local_98;
            }
            local_98 = uVar16;
            if ((uVar22 & 0x200000000000000) != 0) {
              param_1 = param_1 | 0x10;
              local_98._2_6_ = (undefined6)(uVar16 >> 0x10);
              local_98._0_1_ = (undefined1)uVar16;
              local_98._0_2_ = CONCAT11((char)param_1,(undefined1)local_98);
              local_78 = uVar22 & 0xffffffffffffff;
              uVar12 = uVar22 & 0xffffffff;
            }
          }
          if (((((param_1 & 8) != 0) &&
               (*(char *)(*(longlong *)(local_150 + 0xa0) + (uVar13 & 0xff) * 0x18) == '\0')) &&
              (cVar5 = FUN_14039b9b0(uVar13,local_148[1]), cVar5 == '\0')) &&
             ((cVar5 = *(char *)(*(longlong *)(local_150 + 0xa0) + 3 + (uVar13 & 0xff) * 0x18),
              cVar5 != -1 && (cVar5 = FUN_14039b9b0(cVar5,local_148[1]), cVar5 != '\0')))) {
            local_188 = local_148;
            local_178 = (char *)0x0;
            local_180 = local_180 & 0xffffffffffffff00;
            iVar20 = dependent_variable_of_s_is_not_written(local_150,param_1 & 0xffffffff);
            if (iVar20 != 0) goto LAB_14038f5c4;
          }
          if ((((param_1 & 0x20) != 0) &&
              (*(char *)(*(longlong *)(local_150 + 0xa0) + (uVar12 & 0xff) * 0x18) == '\0')) &&
             ((cVar5 = FUN_14039b9b0(uVar12 & 0xffffffff,local_148[1]), cVar5 == '\0' &&
              ((cVar5 = *(char *)(*(longlong *)(local_150 + 0xa0) + 3 + (uVar12 & 0xff) * 0x18),
               cVar5 != -1 && (cVar5 = FUN_14039b9b0(cVar5,local_148[1]), cVar5 != '\0')))))) {
            local_188 = local_148;
            local_178 = (char *)0x0;
            local_180 = local_180 & 0xffffffffffffff00;
            iVar20 = dependent_variable_of_s_is_not_written(local_150,param_1 & 0xffffffff);
            if (iVar20 != 0) goto LAB_14038f5c4;
          }
          puVar30 = local_148;
          puVar1 = puVar32 + 9;
          puVar32 = puVar32 + 9;
          puVar29 = puVar29 + 9;
        } while ((*puVar1 & 0xffffffffffffff) != 0x141);
        iVar20 = *(int *)(local_148 + 0x2c);
        uVar11 = (uint)(1L << ((byte)iVar20 & 0x3f));
        if (*(short *)((longlong)param_3 + 0x42) == 2) {
          *(uint *)((longlong)local_148 + 0x164) = *(uint *)((longlong)local_148 + 0x164) | uVar11;
          uStack_90 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0x19;
          uVar8 = FUN_14038e0b0(&local_98,local_148);
          *(undefined2 *)(puVar30[0x2b] + 2) = uVar8;
          FUN_1403b30a0(*puVar30,0x30,(int)*(short *)(puVar30[0x2b] + 2));
          iVar20 = *(int *)(puVar30 + 0x2c);
        }
        else {
          *(uint *)((longlong)local_148 + 0x164) = *(uint *)((longlong)local_148 + 0x164) & ~uVar11;
        }
        iVar20 = iVar20 + 1;
        *(int *)(puVar30 + 0x2c) = iVar20;
        puVar30[0x2b] = puVar30 + (longlong)iVar20 * 5 + 3;
        *(undefined2 *)((longlong)puVar30 + (longlong)iVar20 * 0x28 + 0x1a) = 0xffff;
        *(undefined2 *)(puVar30[0x2b] + 2) = 0xffff;
        goto LAB_14038ef36;
      }
      local_10c = uVar26;
      if (local_151 != 0) {
        uVar28 = 0;
        if (((*puVar29 & 0xffffffffffffff) == 0x10e) || ((*puVar29 & 0xffffffffffffff) == 0x10f))
        goto LAB_14038ef39;
      }
      uVar11 = (uint)((int)param_3 - *(int *)(local_150 + 0x10)) >> 3;
      local_c8._4_4_ = SUB84(uVar22,4);
      local_c8._0_4_ =
           CONCAT13((char)uVar11 * '9',
                    CONCAT12(*(undefined1 *)((longlong)param_3 + 0x44),(undefined2)local_c8));
      bVar19 = ((local_130 & 0x400000000000000) == 0) * '\b' + 1;
      uVar22 = (ulonglong)bVar19;
      local_c8 = CONCAT71(local_c8._1_7_,bVar19);
      sVar9 = *(short *)((longlong)param_3 + 0x42);
      if ((ushort)(sVar9 - 4U) < 3) {
        uVar24 = (ulonglong)uVar11;
        bVar19 = (byte)(sVar9 - 4U) | 0xc;
LAB_14038f132:
        bVar25 = bVar19;
        local_c8 = CONCAT71(local_c8._1_7_,bVar25);
      }
      else {
        uVar10 = *(ushort *)((longlong)param_3 + 0x46);
        uVar24 = (ulonglong)uVar10;
        bVar19 = 0xb;
        if ((uVar10 & 4) != 0) goto LAB_14038f132;
        if ((uVar10 & 0x1000) != 0) {
          bVar25 = 0x29;
          if ((local_130 & 0x400000000000000) != 0) {
            bVar25 = (sVar9 == 2) + 0x25;
          }
          local_c8 = CONCAT71(local_c8._1_7_,bVar25);
          uVar16 = uVar16 & 0xe000000000000000;
          uVar24 = 0x4000000000000000;
          if (uVar16 == 0x4000000000000000) {
            bVar19 = 0x28;
          }
          else {
            uVar24 = 0xc000000000000000;
            if (uVar16 != 0xc000000000000000) goto LAB_14038f13d;
            bVar19 = 0x27;
          }
          goto LAB_14038f132;
        }
        uVar16 = uVar16 & 0xe000000000000000;
        if (uVar16 == 0xc000000000000000) {
          local_c8 = CONCAT71(local_c8._1_7_,8);
          uVar16 = param_3[7];
          uVar22 = 8;
          if (uVar16 == 0x126) {
            uVar16 = 0x126;
            if (((uVar10 & 0x40) == 0) || (uVar16 = 0x134, *(longlong *)(local_150 + 0x138) == 0)) {
              uVar16 = CONCAT71((int7)(uVar16 >> 8),0x32);
LAB_14038effc:
              if ((*(byte *)(local_150 + 0x33) & 0x20) == 0) goto LAB_14038f029;
            }
            goto LAB_14038f01e;
          }
        }
        else {
          if (uVar16 == 0x4000000000000000) {
            local_c8 = CONCAT71(local_c8._1_7_,7);
            uVar16 = param_3[7];
            uVar22 = 7;
            if (uVar16 != 0x126) goto LAB_14038f029;
            uVar16 = 0x126;
            if (((uVar10 & 0x40) == 0) || (uVar16 = 0x133, *(longlong *)(local_150 + 0x138) == 0)) {
              uVar16 = CONCAT71((int7)(uVar16 >> 8),0x31);
              goto LAB_14038effc;
            }
          }
          else {
            uVar16 = CONCAT71((int7)(uVar16 >> 8),2);
            if ((uVar10 & 3) == 0) {
              uVar16 = *param_3;
              if ((((uVar16 & 0xf000000000000000) != 0x8000000000000000) &&
                  ((uVar16 & 0xf000000000000000) != 0x9000000000000000)) ||
                 (uVar16 = (ulonglong)((uint)(uVar16 >> 0x20) & 0xfffffff), uVar16 != 0x10e))
              goto LAB_14038f029;
              uVar16 = 10;
              if ((local_130 & 0x400000000000000) != 0) {
                uVar16 = 3;
              }
            }
          }
LAB_14038f01e:
          local_c8 = CONCAT71(local_c8._1_7_,(char)uVar16);
          uVar22 = uVar16 & 0xffffffff;
        }
LAB_14038f029:
        bVar25 = (byte)uVar22;
        if (((uVar10 & 0x2000) != 0) && (param_3[7] == 0)) {
          uVar11 = *(uint *)(local_150 + 0x30) & 0x20000000;
          uVar16 = 0;
          if ((char)(uVar11 >> 0x18) != '\0' || (local_130 & 0x400000000000000) == 0) {
            uVar16 = (ulonglong)(uVar11 != 0);
            bVar19 = (uVar11 != 0) * '\x03' + 0x2c;
            goto LAB_14038f132;
          }
          if (bVar25 == 2) {
            bVar19 = 0x2b;
            if ((int)*param_3 != 0) goto LAB_14038f132;
            bVar25 = 2;
          }
          else {
            uVar16 = uVar22 & 0xff;
            if ((int)uVar16 == 1) {
              bVar33 = (int)*param_3 == 0x10e;
              bVar25 = bVar33 | 0x2a;
              local_c8 = CONCAT71(local_c8._1_7_,bVar33) | 0x2a;
              if (((uVar10 & 0x40) != 0) &&
                 (uVar24 = local_150, bVar19 = 0x30, *(longlong *)(local_150 + 0x138) != 0))
              goto LAB_14038f132;
            }
          }
        }
      }
LAB_14038f13d:
      local_13d = sVar9 == 2;
      local_13e = bVar25 != 0x26;
      uVar28 = local_148[2];
      local_153 = bVar34;
      local_108 = param_3 + 1;
      cVar5 = FUN_140392fa0(puVar32,uVar24,uVar16);
      local_152 = bVar7;
      local_f0 = uVar28;
      if (cVar5 == '\0') {
        bVar34 = 0;
      }
      else {
        uVar22 = *puVar32;
        if ((uVar22 & 0x400000000000000) == 0) {
          bVar34 = 0;
          uVar16 = local_c8;
        }
        else {
          local_c8._0_2_ = CONCAT11(8,(char)local_c8);
          lVar17 = FUN_14039b8c0(puVar32);
          if (lVar17 == 0) {
            FUN_14039b8f0(puVar32);
            uVar6 = FUN_140399c10(local_150,0,0,0);
          }
          else {
            lVar31 = local_150 + 0xe0;
            cVar5 = FUN_1403919d0();
            uVar6 = 0xff;
            if ((cVar5 != '\0') &&
               (pAVar18 = (AstAttr *)FUN_140391bd0(lVar31,lVar17,0,0), uVar6 = 0xff,
               pAVar18 != (AstAttr *)0x0)) {
              pAVar18 = Luau::AstAttr::vfunction5(pAVar18);
              uVar6 = SUB81(pAVar18,0);
            }
          }
          uStack_b0 = CONCAT71(uStack_b0._1_7_,uVar6);
          uVar22 = *puVar32;
          bVar34 = 8;
          uVar13 = (ulonglong)local_152;
          bVar7 = local_152;
          uVar28 = local_f0;
          uVar16 = local_c8;
        }
        local_152 = bVar7;
        local_f0 = uVar28;
        local_c8 = uVar16;
        if ((uVar22 & 0x200000000000000) != 0) {
          local_c8._2_6_ = (undefined6)(uVar16 >> 0x10);
          local_c8._0_1_ = (char)uVar16;
          local_c8 = CONCAT62(local_c8._2_6_,CONCAT11(bVar34,(char)local_c8)) | 0x400;
          uStack_b0 = uVar22 & 0xffffffffffffff;
          bVar34 = bVar34 | 4;
        }
      }
      bVar7 = (byte)uVar13;
      cVar5 = FUN_140392fa0(puVar29);
      if (cVar5 != '\0') {
        uVar13 = *puVar29;
        bVar19 = bVar34;
        if ((uVar13 & 0x400000000000000) != 0) {
          bVar19 = bVar34 | 0x20;
          local_c8 = CONCAT62(local_c8._2_6_,CONCAT11(bVar34,(char)local_c8)) | 0x2000;
          lVar17 = FUN_14039b8c0(puVar29);
          if (lVar17 == 0) {
            FUN_14039b8f0(puVar29);
            uVar6 = FUN_140399c10(local_150,0,0,0);
          }
          else {
            lVar31 = local_150 + 0xe0;
            cVar5 = FUN_1403919d0();
            uVar6 = 0xff;
            if (cVar5 != '\0') {
              pAVar18 = (AstAttr *)FUN_140391bd0(lVar31,lVar17,0,0);
              uVar6 = 0xff;
              if (pAVar18 != (AstAttr *)0x0) {
                pAVar18 = Luau::AstAttr::vfunction5(pAVar18);
                uVar6 = SUB81(pAVar18,0);
              }
            }
          }
          local_a8 = CONCAT71(local_a8._1_7_,uVar6);
          uVar13 = *puVar29;
          bVar7 = local_152;
        }
        if ((uVar13 & 0x200000000000000) != 0) {
          local_c8 = CONCAT62(local_c8._2_6_,CONCAT11(bVar19,(char)local_c8)) | 0x1000;
          local_a8 = uVar13 & 0xffffffffffffff;
        }
      }
      puVar30 = local_148;
      uVar13 = local_150;
      bVar7 = local_153 | bVar7;
      local_188 = &local_b8;
      local_170 = local_148;
      local_168 = 1;
      local_178 = (char *)CONCAT44(local_178._4_4_,2);
      local_180 = local_180 & 0xffffffffffffff00;
      local_138 = (uint)uVar12;
      FUN_14038e370();
      uVar12 = local_130;
      if ((local_130 & 0x400000000000000) == 0) {
        local_128 = 0;
        local_153 = 1;
      }
      else {
        local_128 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(uVar13 + 0xa0) >> 8),
                                   *(longlong *)
                                    (*(longlong *)(uVar13 + 0xa0) + 0x10 + (local_b8 & 0xff) * 0x18)
                                   != 0);
        local_153 = FUN_14039b9b0(local_b8 & 0xff,puVar30[1]);
      }
      local_178 = &local_c9;
      local_180 = CONCAT71(local_180._1_7_,bVar7);
      local_188 = puVar30;
      iVar20 = dependent_variable_of_s_is_not_written(uVar13,local_c8._1_1_,&uStack_b0,2);
      uVar28 = 0xffffffff;
      if (iVar20 != 0) goto LAB_14038ef39;
      local_178 = &local_ca;
      local_180 = CONCAT71(local_180._1_7_,bVar7);
      local_188 = puVar30;
      iVar20 = dependent_variable_of_s_is_not_written(uVar13,local_c8._1_1_,&local_a8,0xffff0004);
      if (iVar20 == 0) {
        if ((byte)local_138 != '\0') {
          local_148[4] = local_148[1];
        }
        if ((((byte)local_fc | local_153 | (uVar12 & 0x400000000000000) == 0 | (byte)local_128) & 1)
            == 0) {
          local_188 = local_148;
          local_153 = FUN_14038fe50(local_150,param_3,&local_c8,local_b8 & 0xff);
        }
        puVar30 = local_148;
        uVar11 = local_134 & 0x100;
        if (((((uVar12 & 0x400000000000000) != 0) && (local_153 != 0)) &&
            ((local_134 & 0x100) != 0 || local_151 != 0)) &&
           ((*(short *)((longlong)param_3 + 0x42) == 1 &&
            (*(char *)(*(longlong *)(local_150 + 0xa0) + (local_b8 & 0xff) * 0x18) == '\x01')))) {
          local_170 = local_148;
          local_188 = &local_b8;
          local_168 = 1;
          local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
          local_180 = local_180 & 0xffffffffffffff00;
          FUN_14038e370((local_b8 & 0xff) * 3,local_150,&local_c8,local_108);
          puVar30[4] = puVar30[4] | 1L << ((byte)local_b8 & 0x3f);
        }
        local_180 = CONCAT71(local_180._1_7_,bVar7);
        local_188 = local_148;
        local_178 = (char *)0x0;
        iVar20 = dependent_variable_of_s_is_not_written(local_150,local_c8._1_1_,&local_b8,0);
        uVar2 = local_134;
        puVar30 = local_148;
        if (iVar20 == 0) {
          if ((*(ushort *)((longlong)param_3 + 0x46) & 2) == 0) {
            if ((local_153 == 0) &&
               ((*param_3 == 0x10f && (local_128 & 1) == 0) && (char)local_c8 == '\x02')) {
              local_c8 = (ulonglong)local_c8._1_7_ << 8;
            }
          }
          else {
            local_c8 = CONCAT71(local_c8._1_7_,0xf);
            if ((local_c9 != '\x01') || (local_ca == '\0')) {
              if (local_c9 == '\0') {
                uVar12 = *puVar32;
                uVar6 = 0x11;
              }
              else {
                uVar12 = *puVar29;
                uVar6 = 0x10;
              }
              if ((uVar12 & 0xffffffffffffff) != 0x10f) {
                local_c8 = CONCAT71(local_c8._1_7_,uVar6);
              }
              local_b8 = 0;
              local_c8 = local_c8 & 0xfffffffffffffcff;
              local_13c = 0;
            }
          }
          bVar34 = local_13e & (local_151 ^ 1);
          if (((((*(ushort *)((longlong)param_3 + 0x46) & 4) != 0) && ((byte)local_13c != '\0')) &&
              ((local_118 & 0x400000000000000) != 0)) && ((local_153 == 0 && (local_ca == '\0')))) {
            FUN_14038ffa0(local_150,&local_c8,local_148,bVar7);
          }
          bVar34 = local_13d & bVar34;
          bVar19 = local_152 ^ 1;
          if ((puVar30[2] != 0) && (((bVar19 | (byte)local_138) & 1) != 0)) {
            FUN_1403900f0(&local_c8,puVar30,local_f0);
          }
          bVar33 = local_122 == 3;
          bVar25 = (byte)(uVar2 >> 9) & 1 & bVar34;
          bVar34 = (bVar25 ^ 1) & bVar34;
          if (bVar34 == 1) {
            uVar28 = 0x19;
LAB_14038f766:
            FUN_14038e150(uVar28,puVar30);
          }
          else {
            if (bVar33 || bVar25 != 0) {
              uVar28 = 0x16;
              goto LAB_14038f766;
            }
            if ((byte)local_138 != '\0') {
              FUN_140390280(&local_c8,param_3,puVar30);
            }
          }
          uVar10 = *(ushort *)((longlong)param_3 + 0x46);
          if ((uVar10 & 0x10) != 0) {
            local_188 = (ulonglong *)CONCAT71(local_188._1_7_,bVar7);
            FUN_140390390(local_150,param_3,&local_c8,puVar30);
            uVar10 = *(ushort *)((longlong)param_3 + 0x46);
          }
          uStack_c0._0_4_ = CONCAT22(uVar10,(undefined2)uStack_c0);
          if ((local_120 & 0x400000000000000) != 0) {
            local_c8 = local_c8 & 0xfffffffffffff3ff | 0x800;
          }
          if ((longlong)*local_108 < 0) {
            local_c8 = local_c8 | 0x4000;
          }
          uVar12 = puVar30[1];
          if (((local_120 & 0x400000000000000) != 0) &&
             (cVar5 = FUN_140390510(*(undefined8 *)(local_150 + 0xa0),uStack_b0 & 0xff,puVar30,bVar7
                                   ), cVar5 != '\0')) {
            uVar12 = uVar12 | 1L << (uStack_b0 & 0x3f);
          }
          if (((byte)local_13c != '\0') &&
             (cVar5 = FUN_140390510(*(undefined8 *)(local_150 + 0xa0),local_b8 & 0xff,local_148,
                                    bVar7), cVar5 != '\0')) {
            uVar12 = uVar12 | 1L << (local_b8 & 0x3f);
          }
          if (((local_118 & 0x400000000000000) != 0) &&
             (cVar5 = FUN_140390510(*(undefined8 *)(local_150 + 0xa0),local_a8 & 0xff,local_148,
                                    bVar7), cVar5 != '\0')) {
            uVar12 = uVar12 | 1L << (local_a8 & 0x3f);
          }
          if (local_151 != 0) {
            iVar20 = uninitialized_variable_s_on_right_hand_side_o
                               (local_150,param_3,&local_c8,uVar12);
            uVar28 = 0xffffffff;
            if (iVar20 != 0) goto LAB_14038ef39;
          }
          if ((local_153 == 0) && ((byte)local_b8 == '\0')) {
            uVar2 = *(uint *)(local_150 + 0x30);
            pAVar18 = (AstAttr *)0x400;
            if ((~uVar2 & 6) != 0) {
              pAVar18 = (AstAttr *)
                        (ulonglong)((uVar2 & 2) + (uint)((uVar2 & 4) == 0) * 0x200 + 0x400 ^ 2);
            }
            pAVar18 = Luau::AstAttr::vfunction5(pAVar18);
            uStack_c0 = CONCAT62(uStack_c0._2_6_,(short)pAVar18);
          }
          puVar30 = local_148;
          if ((byte)local_13c != '\0') {
            FUN_14039b9d0(local_b8 & 0xff,&uStack_a0);
            FUN_14039b9e0(local_b8 & 0xff,puVar30,bVar7);
          }
          if ((local_120 & 0x400000000000000) != 0) {
            FUN_14039b9d0(uStack_b0 & 0xff,&uStack_a0);
            FUN_14039b9e0(uStack_b0 & 0xff,puVar30,bVar7);
          }
          if ((local_118 & 0x400000000000000) != 0) {
            FUN_14039b9d0(local_a8 & 0xff,&uStack_a0);
            FUN_14039b9e0(local_a8 & 0xff,puVar30,bVar7);
          }
          FUN_14038e0b0(&local_c8,puVar30);
          iVar20 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)*puVar30);
          pAVar18 = Luau::AstAttr::vfunction5((AstAttr *)(longlong)(iVar20 + -1));
          *(short *)puVar30[0x2b] = (short)pAVar18;
          if (uVar11 == 0 && bVar19 == 0) {
            lVar17 = FUN_1403b30b0(*puVar30,0x30);
            *(undefined2 *)(lVar17 + 6) = 0xfffe;
          }
          pcVar3 = local_f8;
          if ((byte)local_13c != '\0') {
            if ((local_120 & 0x400000000000000) != 0) {
              FUN_1403906f0(local_150,local_b8 & 0xff,uStack_b0 & 0xff,puVar30);
            }
            if ((local_118 & 0x400000000000000) != 0) {
              if ((char)uStack_b0 != (char)local_a8) {
                FUN_1403906f0(local_150,local_b8 & 0xff,local_a8 & 0xff,puVar30);
              }
            }
          }
          cVar5 = FUN_1403b31e0(pcVar3);
          if (((cVar5 == '\0') && ((local_120 & 0x400000000000000) != 0)) && (local_c9 == '\0')) {
            if ((char)uStack_b0 == (char)local_a8) {
              uStack_90 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_98._0_3_ = CONCAT12(*(undefined1 *)((longlong)param_3 + 0x44),0x3e);
              local_98 = (ulonglong)(uint3)local_98;
              FUN_14038e0b0(&local_98,puVar30);
            }
          }
          if ((bVar33 || bVar25 != 0) || bVar34 != 0) {
            FUN_14038e1e0(puVar30,1);
          }
          uVar12 = local_150;
          if ((local_134 & 0x100) != 0) {
            local_170 = local_e0;
            local_178 = local_f8;
            local_180 = local_d8;
            local_188 = puVar30;
            local_168 = bVar7;
            FUN_140390780(param_1,local_150,&local_c8,param_3);
            if (local_152 != 0) {
              lVar17 = FUN_1403b30b0(*puVar30,0x30);
              *(undefined2 *)(lVar17 + 6) = 0xfffe;
            }
          }
          if ((byte)local_10c != '\0') {
            FUN_140390d80(uVar12,puVar30);
          }
          if (((bVar19 | (byte)local_10c) &
               (((local_120 | local_118) & 0x400000000000000) != 0 | (byte)local_13c) &
              *(short *)(puVar30[0x2b] + 4) != 0) == 1) {
            FUN_1403910d0(puVar30);
          }
          uVar28 = 0;
          if (bVar34 != 1 || (*(byte *)((longlong)param_3 + 0x46) & 0x10) == 0) goto LAB_14038ef39;
          uStack_90 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = *param_3;
          local_98._0_3_ = CONCAT12(*(undefined1 *)((longlong)param_3 + 0x44),0x43c);
          local_98 = (ulonglong)(uint3)local_98;
          puVar21 = &local_98;
          goto LAB_14038e7aa;
        }
      }
LAB_14038f5c4:
      uVar28 = 0xffffffff;
      goto LAB_14038ef39;
    }
LAB_14038e78a:
    if (*param_3 != 0x10f) goto LAB_14038e861;
    local_c8 = CONCAT71(local_c8._1_7_,0x40);
    puVar21 = &local_c8;
LAB_14038e7aa:
    FUN_14038e0b0(puVar21,puVar30);
  }
LAB_14038ef36:
  uVar28 = 0;
LAB_14038ef39:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_1a8)) {
    return uVar28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_1a8);
}

