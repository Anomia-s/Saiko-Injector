/**
 * Function: triangle_area_overflow
 * Address:  1406131b0
 * Signature: undefined triangle_area_overflow(void)
 * Body size: 7489 bytes
 */


/* WARNING: Type propagation algorithm not settling */

ulonglong triangle_area_overflow
                    (byte *param_1,int *param_2,int *param_3,int *param_4,uint *param_5,
                    ulonglong *param_6,ulonglong *param_7,ulonglong *param_8,uint param_9,
                    uint param_10,uint param_11,int param_12)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte bVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  char *pcVar23;
  undefined7 uVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  undefined1 *puVar29;
  int iVar30;
  ulonglong uVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  bool bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2a8;
  int local_2a0;
  int local_298;
  int local_290;
  int local_288;
  int local_280;
  int local_278;
  int local_270;
  int local_268;
  int local_260;
  int local_258;
  int local_250;
  int local_248;
  undefined4 local_240;
  undefined4 local_238;
  int local_230;
  int local_228;
  int local_220;
  byte local_218;
  int local_210;
  int local_204;
  byte *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  undefined8 local_1d8;
  ulonglong local_1d0;
  undefined4 local_1c8;
  byte local_1c1;
  undefined1 *local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  ulonglong local_190;
  ulonglong local_188;
  longlong local_180;
  ulonglong local_178;
  undefined4 local_16c;
  ulonglong local_168;
  longlong local_160;
  longlong local_158;
  int *local_150;
  int *local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  longlong local_130;
  uint local_124;
  ulonglong local_120;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  ulonglong local_100;
  byte *local_f8;
  longlong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  uint local_74;
  uint local_70;
  undefined8 local_6c;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_2d8;
  cVar8 = FUN_140110960();
  if (cVar8 == '\0') {
    pcVar23 = "src";
LAB_1406133d5:
    uVar21 = FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar23);
    if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_2d8)) {
      return uVar21;
    }
    goto LAB_140614ee1;
  }
  cVar8 = FUN_140110960(param_5);
  if (cVar8 == '\0') {
    pcVar23 = "dst";
    goto LAB_1406133d5;
  }
  iVar27 = *(int *)((longlong)param_6 + 4);
  uVar21 = CONCAT71((int7)(int3)((uint)iVar27 >> 8),1);
  uVar38 = ((longlong)*(int *)((longlong)param_8 + 4) - (longlong)iVar27) *
           ((longlong)(int)*param_7 - (longlong)(int)*param_6) -
           ((longlong)(int)*param_8 - (longlong)(int)*param_6) *
           ((longlong)*(int *)((longlong)param_7 + 4) - (longlong)iVar27);
  if (uVar38 != 0) {
    local_104 = *param_5;
    if (((local_104 & 2) != 0) && (cVar8 = parameter_s_is_invalid(), cVar8 == '\0')) {
      uVar21 = 0;
      goto LAB_140614159;
    }
    iVar27 = 0;
    if ((*param_1 & 2) == 0) {
LAB_14061329c:
      local_10c = param_9 >> 8;
      local_1b8 = CONCAT44(local_1b8._4_4_,param_9 >> 0x10);
      lVar14 = local_1b8;
      local_1b0 = CONCAT44(local_1b0._4_4_,param_9 >> 0x18);
      local_110 = param_10 >> 8;
      local_158 = CONCAT44(local_158._4_4_,param_10 >> 0x10);
      lVar26 = local_158;
      local_108 = param_10 >> 0x18;
      local_130 = CONCAT44(local_130._4_4_,param_11 >> 8);
      local_180 = CONCAT44(local_180._4_4_,param_11 >> 0x10);
      lVar15 = local_180;
      local_1c0 = (undefined1 *)CONCAT44(local_1c0._4_4_,param_11 >> 0x18);
      local_124 = param_9 & 0xff;
      local_114 = param_10 & 0xff;
      if ((local_124 == local_114) && ((local_10c & 0xff) == (local_110 & 0xff))) {
        local_1b8._0_1_ = (char)(param_9 >> 0x10);
        local_158._0_1_ = (byte)(param_10 >> 0x10);
        local_180._0_1_ = (byte)(param_11 >> 0x10);
        local_1d8 = CONCAT44(local_1d8._4_4_,
                             (uint)((param_10 ^ param_11) >> 0x18 == 0 &&
                                   (((byte)local_180 == (byte)local_158 &&
                                    (local_10c & 0xff) == (param_11 >> 8 & 0xff)) &&
                                   (((param_11 & 0xff) == local_124 &&
                                    (param_9 ^ param_10) >> 0x18 == 0) &&
                                   (char)local_1b8 == (byte)local_158))));
      }
      else {
        local_1d8 = (ulonglong)local_1d8._4_4_ << 0x20;
      }
      uVar21 = *param_6;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = uVar21;
      uVar18 = *param_7;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = uVar18;
      uVar22 = *param_8;
      auVar48._8_8_ = 0;
      auVar48._0_8_ = uVar22;
      auVar50._0_8_ =
           CONCAT44(-(uint)((int)(uVar22 >> 0x20) < (int)(uVar18 >> 0x20)),
                    -(uint)((int)uVar22 < (int)uVar18));
      auVar50._8_8_ = 0;
      auVar49._8_8_ = 0;
      auVar49._0_8_ = uVar22 & auVar50._0_8_;
      auVar49 = auVar49 | ~auVar50 & auVar46;
      auVar52._0_4_ = -(uint)((int)uVar21 < auVar49._0_4_);
      iVar9 = (int)(uVar21 >> 0x20);
      auVar52._4_4_ = -(uint)(iVar9 < auVar49._4_4_);
      auVar52._8_4_ = -(uint)(0 < auVar49._8_4_);
      auVar52._12_4_ = -(uint)(0 < auVar49._12_4_);
      auVar46 = ~auVar52 & auVar49 | auVar45 & auVar52;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = auVar50._0_8_ & uVar18;
      auVar51 = auVar51 | ~auVar50 & auVar48;
      auVar47._0_4_ = -(uint)(auVar51._0_4_ < (int)uVar21);
      auVar47._4_4_ = -(uint)(auVar51._4_4_ < iVar9);
      auVar47._8_4_ = -(uint)(auVar51._8_4_ < 0);
      auVar47._12_4_ = -(uint)(auVar51._12_4_ < 0);
      auVar45 = ~auVar47 & auVar51 | auVar45 & auVar47;
      iVar9 = auVar46._0_4_;
      local_74 = iVar9 >> 1;
      iVar37 = auVar46._4_4_;
      local_70 = iVar37 >> 1;
      local_6c = CONCAT44(auVar45._4_4_ - iVar37 >> 1,auVar45._0_4_ - iVar9 >> 1);
      local_204 = iVar27;
      local_1b8 = lVar14;
      local_180 = lVar15;
      local_158 = lVar26;
      parameter_s_is_invalid(param_1,&local_64);
      if (param_12 == 1) {
        iVar27 = *param_2;
        iVar9 = *param_3;
        iVar37 = param_3[1];
        iVar4 = *param_4;
        iVar30 = iVar4;
        if (iVar9 < iVar4) {
          iVar30 = iVar9;
        }
        iVar32 = param_4[1];
        if (iVar4 < iVar9) {
          iVar4 = iVar9;
        }
        if (iVar27 < iVar30) {
          iVar30 = iVar27;
        }
        iVar36 = iVar4;
        if (iVar4 < iVar27) {
          iVar36 = iVar27;
        }
        iVar25 = iVar32;
        if (iVar37 < iVar32) {
          iVar25 = iVar37;
        }
        if (iVar32 < iVar37) {
          iVar32 = iVar37;
        }
        iVar37 = param_2[1];
        if (iVar37 < iVar25) {
          iVar25 = iVar37;
        }
        if (iVar32 < iVar37) {
          iVar32 = iVar37;
        }
        if (iVar30 < iVar36) {
          if (iVar27 < iVar4) {
            if (iVar9 == iVar36) goto LAB_140613536;
LAB_14061355a:
            iVar27 = *param_4;
          }
          else {
            *param_2 = iVar27 + -1;
            if (*param_3 != iVar36) goto LAB_14061355a;
LAB_140613536:
            *param_3 = iVar36 + -1;
            iVar27 = *param_4;
          }
          if (iVar27 == iVar36) {
            *param_4 = iVar36 + -1;
          }
        }
        if (iVar25 < iVar32) {
          if (param_2[1] == iVar32) {
            param_2[1] = iVar32 + -1;
            if (param_3[1] != iVar32) goto LAB_140613585;
LAB_140613b48:
            param_3[1] = iVar32 + -1;
            iVar27 = param_4[1];
          }
          else {
            if (param_3[1] == iVar32) goto LAB_140613b48;
LAB_140613585:
            iVar27 = param_4[1];
          }
          if (iVar27 == iVar32) {
            param_4[1] = iVar32 + -1;
          }
        }
      }
      local_1c1 = true;
      if ((byte)local_1d8 != '\0') {
        local_1c1 = (int)local_1b0 != 0xff || (~param_9 & 0xffffff) != 0;
      }
      local_200 = param_1;
      local_150 = param_3;
      local_148 = param_2;
      parameter_s_is_invalid(param_5,&local_f8);
      potential_rect_math_overflow(&local_74,&local_f8,&local_74);
      local_120 = (ulonglong)local_70;
      local_178 = -uVar38;
      if ((longlong)-uVar38 < 0) {
        local_178 = uVar38;
      }
      uVar20 = (uint)*param_7;
      iVar27 = *(int *)((longlong)param_7 + 4);
      uVar5 = (uint)*param_8;
      iVar9 = *(int *)((longlong)param_8 + 4);
      iVar19 = uVar5 - uVar20;
      iVar32 = local_70 * 2 + 1;
      local_100 = (ulonglong)local_74;
      iVar30 = local_74 * 2 + 1;
      local_1d0 = (longlong)(iVar32 - iVar27) * (longlong)iVar19 -
                  (longlong)(int)(iVar30 - uVar20) * (longlong)(iVar9 - iVar27);
      iVar37 = (int)*param_6;
      iVar10 = iVar37 - uVar5;
      iVar4 = *(int *)((longlong)param_6 + 4);
      local_1e8 = (longlong)(iVar32 - iVar9) * (longlong)iVar10 -
                  (longlong)(int)(iVar30 - uVar5) * (longlong)(iVar4 - iVar9);
      local_1f8 = CONCAT44(local_1f8._4_4_,uVar20);
      iVar35 = uVar20 - iVar37;
      uVar33 = (longlong)(iVar32 - iVar4) * (longlong)iVar35 -
               (longlong)(iVar30 - iVar37) * (longlong)(iVar27 - iVar4);
      local_160 = CONCAT44(local_160._4_4_,(iVar27 - iVar9) * 2);
      iVar25 = (iVar9 - iVar4) * 2;
      iVar28 = (iVar4 - iVar27) * 2;
      local_198 = iVar19 * 2;
      local_194 = iVar10 * 2;
      iVar36 = iVar35 * 2;
      local_1a0 = *local_148;
      piVar1 = local_148 + 1;
      local_1e0 = CONCAT44(local_1e0._4_4_,*piVar1);
      local_19c = *local_150;
      piVar2 = local_150 + 1;
      iVar30 = *param_4;
      iVar32 = param_4[1];
      uVar22 = (ulonglong)iVar32;
      bVar3 = *(byte *)(*(ulonglong *)(param_5 + 0xe) + 5);
      uVar18 = (ulonglong)bVar3;
      local_168 = *(ulonglong *)(param_5 + 6);
      uVar6 = param_5[4];
      local_138 = CONCAT44(local_138._4_4_,uVar6);
      local_148 = *(int **)(local_200 + 0x18);
      uVar7 = *(uint *)(local_200 + 0x10);
      uVar21 = (ulonglong)uVar7;
      local_150 = (int *)CONCAT44(local_150._4_4_,uVar7);
      uVar24 = (undefined7)(uVar38 >> 8);
      if ((longlong)uVar38 < 1) {
        bVar44 = SBORROW4(iVar27,iVar9);
        iVar36 = iVar27 - iVar9;
        if (iVar27 == iVar9) {
          uVar21 = (ulonglong)uVar5;
          bVar44 = SBORROW4(uVar5,uVar20);
          iVar36 = uVar5 - uVar20;
        }
        if (bVar44 == iVar36 < 0) {
          local_16c = 0xffffffff;
          uVar38 = 0;
        }
        else {
          uVar38 = CONCAT71(uVar24,1);
          local_16c = 0;
        }
        local_160 = CONCAT44(local_160._4_4_,(iVar27 - iVar9) * -2);
        iVar25 = (iVar9 - iVar4) * -2;
        iVar28 = (iVar4 - iVar27) * -2;
        local_198 = iVar19 * -2;
        local_194 = iVar10 * -2;
        iVar36 = iVar35 * -2;
        local_1d0 = -local_1d0;
        local_1e8 = -local_1e8;
        uVar33 = -uVar33;
        bVar44 = SBORROW4(iVar9,iVar4);
        iVar10 = iVar9 - iVar4;
        if (iVar9 == iVar4) {
          bVar44 = SBORROW4(iVar37,uVar5);
          iVar10 = iVar37 - uVar5;
        }
        if (bVar44 == iVar10 < 0) {
          local_1f0 = CONCAT44(local_1f0._4_4_,0xffffffff);
          local_1c8 = 0;
        }
        else {
          local_1f0 = (ulonglong)local_1f0._4_4_ << 0x20;
          local_1c8 = (undefined4)CONCAT71((int7)(uVar21 >> 8),1);
        }
        bVar17 = 1;
        if (iVar4 == iVar27) {
          if (iVar37 <= (int)uVar20) goto LAB_140613833;
        }
        else if (iVar27 <= iVar4) goto LAB_140613833;
      }
      else {
        bVar44 = SBORROW4(iVar27,iVar9);
        iVar10 = iVar27 - iVar9;
        if (iVar27 == iVar9) {
          uVar21 = (ulonglong)uVar5;
          bVar44 = SBORROW4(uVar5,uVar20);
          iVar10 = uVar5 - uVar20;
        }
        if (iVar27 == iVar9 && uVar5 == uVar20 || bVar44 != iVar10 < 0) {
          local_16c = 0xffffffff;
          uVar38 = 0;
          if (iVar9 == iVar4) goto LAB_140613af9;
LAB_140613809:
          if (iVar4 < iVar9) goto LAB_140613811;
LAB_140613b09:
          local_1f0 = CONCAT44(local_1f0._4_4_,0xffffffff);
          local_1c8 = 0;
        }
        else {
          local_16c = 0;
          uVar38 = CONCAT71(uVar24,1);
          if (iVar9 != iVar4) goto LAB_140613809;
LAB_140613af9:
          iVar25 = 0;
          if (iVar37 <= (int)uVar5) goto LAB_140613b09;
LAB_140613811:
          local_1f0 = (ulonglong)local_1f0._4_4_ << 0x20;
          local_1c8 = (undefined4)CONCAT71((int7)(uVar21 >> 8),1);
        }
        if (iVar4 == iVar27) {
          bVar17 = 1;
          iVar28 = 0;
          if ((int)uVar20 <= iVar37) goto LAB_140613833;
        }
        else {
          bVar17 = 1;
          if (iVar4 <= iVar27) {
LAB_140613833:
            bVar17 = 0;
          }
        }
      }
      uVar31 = local_178 * (longlong)iVar30;
      if (((longlong)(int)uVar31 != uVar31) ||
         (uVar42 = local_178 * uVar22, local_1a4 = *piVar2, (longlong)(int)uVar42 != uVar42)) {
        local_190 = uVar18;
        uVar20 = FUN_1400fbed0("triangle area overflow");
LAB_140614119:
        uVar21 = (ulonglong)uVar20;
        iVar9 = local_204;
        param_1 = local_200;
        uVar18 = local_190;
        goto joined_r0x000140614ed6;
      }
      local_190._0_4_ = (uint)bVar3;
      iVar27 = local_74 * (uint)local_190;
      local_1f8 = local_168 + (longlong)(int)(local_70 * uVar6) + (longlong)iVar27;
      local_1a0 = local_1a0 - iVar30;
      local_19c = local_19c - iVar30;
      iVar37 = *piVar1 - iVar32;
      local_1a4 = *piVar2 - iVar32;
      local_190 = (ulonglong)bVar17;
      local_1e0 = CONCAT44(local_1e0._4_4_,iVar37);
      local_188 = uVar31;
      local_140 = iVar28;
      local_13c = iVar36;
      if ((local_64 != 0) ||
         (((byte)local_1d8 & (local_1c1 ^ 1) & *(uint *)(local_200 + 4) == param_5[1]) == 0)) {
        local_98 = (undefined1  [16])0x0;
        local_b8._8_8_ = 0;
        local_b8._0_8_ = *(ulonglong *)(local_200 + 0x38);
        local_a8._8_8_ = 0;
        local_a8._0_8_ = *(ulonglong *)(param_5 + 0xe);
        uVar20 = param_11 & 0xff;
        local_120 = (ulonglong)uVar20;
        bVar44 = (byte)local_180 != 0xff ||
                 (((byte)local_158 != 0xff ||
                  (((uint)local_1b8 & 0xff) != 0xff || (byte)local_130 != 0xff)) ||
                 (((char)local_110 != -1 || (local_10c & 0xff) != 0xff) ||
                 (uVar20 != 0xff || (local_124 & param_10) != 0xff)));
        local_88[9] = (char)local_10c;
        local_88[8] = (char)param_9;
        local_88[10] = (char)local_1b8;
        local_88[0xb] = (char)local_1b0;
        local_88._0_4_ = (*(uint *)(local_200 + 0x100) & 0xfffffffc) + 2 + (uint)bVar44;
        if ((int)local_1c0 == 0xff && (local_108 == 0xff && (int)local_1b0 == 0xff)) {
          local_88._0_4_ = *(uint *)(local_200 + 0x100) & 0xfffffffc | (uint)bVar44;
        }
        local_88._4_4_ = *(undefined4 *)(local_200 + 0x104);
        local_88._12_4_ = 0;
        local_f8 = local_200;
        local_e8 = ZEXT416(uVar7) << 0x40;
        local_d8._8_8_ = 0;
        local_d8._0_8_ = local_1f8;
        local_d8 = local_d8 << 0x40;
        local_c8 = ZEXT416(uVar6) << 0x40;
        local_168 = uVar42;
        local_f0 = (longlong)local_148;
        if (local_178 >> 0x1f == 0) {
          if ((longlong)(int)local_1d0 == local_1d0) {
            if (local_1e8 - 0x80000000 < 0xffffffff00000000) {
              pcVar23 = "w1_row";
              uVar33 = local_1e8;
            }
            else {
              if (0xfffffffeffffffff < uVar33 - 0x80000000) {
                uVar21 = uVar31 & 0xffffffff | uVar42 << 0x20;
                local_230 = ((local_10c & 0xff) << 8 |
                            ((uint)local_1b8 & 0xff) << 0x10 | param_9 & 0xff000000) + local_124;
                local_228 = ((local_110 & 0xff) << 8 |
                            (uint)(byte)local_158 << 0x10 | param_10 & 0xff000000) + local_114;
                local_2a0 = bVar17 - 1;
                local_220 = ((uint)(byte)local_130 << 8 |
                            (uint)(byte)local_180 << 0x10 | param_11 & 0xff000000) + uVar20;
                local_210 = param_12;
                local_238 = (undefined4)uVar33;
                local_240 = (undefined4)local_1e8;
                local_280 = local_194;
                local_290 = local_198;
                local_298 = (int)local_160;
                local_2a8 = (undefined4)local_1f0;
                local_2b0 = local_16c;
                local_2b8 = (undefined4)local_178;
                local_288 = iVar25;
                local_278 = iVar28;
                local_270 = iVar36;
                local_268 = local_1a0;
                local_260 = local_19c;
                local_258 = iVar37;
                local_250 = local_1a4;
                local_248 = (int)local_1d0;
                local_218 = (byte)local_1d8;
                FUN_140614f00(&local_f8,uVar21,local_6c & 0xffffffff,local_6c._4_4_);
                uVar21 = CONCAT71((int7)(uVar21 >> 8),1);
                iVar9 = local_204;
                param_1 = local_200;
                uVar18 = local_190;
                goto joined_r0x000140614ed6;
              }
              pcVar23 = "w2_row";
            }
          }
          else {
            pcVar23 = "w0_row";
            uVar33 = local_1d0;
          }
        }
        else {
          pcVar23 = "area";
          uVar33 = local_178;
        }
        uVar20 = FUN_1400fbed0("integer overflow (%s = %I64d)",pcVar23,uVar33);
        goto LAB_140614119;
      }
      iVar9 = local_204;
      param_1 = local_200;
      if (3 < bVar3 - 1) goto LAB_140614ea1;
      local_138 = (longlong)(int)uVar6;
      switch((uint)bVar3) {
      case 1:
        if ((0 < local_6c._4_4_) && (0 < (int)local_6c)) {
          lVar14 = (longlong)local_1a0;
          lVar34 = (longlong)local_19c;
          uVar39 = (ulonglong)local_198;
          local_1c0 = (undefined1 *)(longlong)local_194;
          local_1b8 = (longlong)local_1c0 * lVar34 + uVar39 * lVar14;
          local_1f0 = (longlong)(int)local_160;
          lVar26 = (longlong)iVar25;
          uVar22 = lVar34 * lVar26 + lVar14 * local_1f0;
          lVar15 = (longlong)iVar37;
          lVar40 = (longlong)local_1a4;
          local_180 = (longlong)local_1c0 * lVar40 + uVar39 * lVar15;
          local_158 = (longlong)iVar36;
          lVar41 = lVar40 * lVar26 + lVar15 * local_1f0;
          uVar21 = -local_1e8 - (ulonglong)(byte)local_1c8;
          uVar16 = 0;
          uVar33 = -uVar33 - local_190;
          uVar31 = uVar31 + local_1d0 * lVar14 + local_1e8 * lVar34;
          uVar38 = -local_1d0 - (uVar38 & 0xff);
          uVar42 = uVar42 + local_1d0 * lVar15 + local_1e8 * lVar40;
          do {
            local_168 = uVar42;
            local_1b0 = uVar38;
            local_188 = uVar31;
            uVar18 = uVar33;
            local_1e0 = uVar16;
            local_1d0 = uVar21;
            if (0 < (int)local_6c) {
              if (param_12 == 2) {
                lVar14 = 0;
                uVar21 = local_188;
                uVar38 = local_1b0;
                uVar33 = uVar18;
                uVar31 = local_168;
                uVar42 = local_1d0;
                do {
                  if ((((longlong)uVar38 < 0) && ((longlong)uVar42 < 0)) && ((longlong)uVar33 < 0))
                  {
                    if ((uVar21 | local_178) >> 0x20 == 0) {
                      uVar16 = (uVar21 & 0xffffffff) / (local_178 & 0xffffffff);
                    }
                    else {
                      uVar16 = (longlong)uVar21 / (longlong)local_178;
                    }
                    if ((uVar31 | local_178) >> 0x20 == 0) {
                      uVar43 = (uVar31 & 0xffffffff) / (local_178 & 0xffffffff);
                    }
                    else {
                      uVar43 = (longlong)uVar31 / (longlong)local_178;
                    }
                    iVar27 = (int)((longlong)
                                   ((ulonglong)(uint)((int)uVar16 >> 0x1f) << 0x20 |
                                   uVar16 & 0xffffffff) % (longlong)*(int *)(local_200 + 8));
                    iVar37 = (int)((longlong)
                                   ((ulonglong)(uint)((int)uVar43 >> 0x1f) << 0x20 |
                                   uVar43 & 0xffffffff) % (longlong)*(int *)(local_200 + 0xc));
                    *(undefined1 *)(local_1f8 + lVar14) =
                         *(undefined1 *)
                          ((longlong)(int)((iVar27 >> 0x1f & *(int *)(local_200 + 8) - 1U) + iVar27)
                          + (longlong)
                            (int)(((iVar37 >> 0x1f & *(int *)(local_200 + 0xc) - 1U) + iVar37) *
                                 uVar7) + (longlong)local_148);
                  }
                  lVar14 = lVar14 + 1;
                  uVar33 = uVar33 - (longlong)iVar28;
                  uVar42 = uVar42 - lVar26;
                  uVar31 = uVar31 + lVar41;
                  uVar21 = uVar21 + uVar22;
                  uVar38 = uVar38 - local_1f0;
                } while (lVar14 < (int)local_6c);
              }
              else {
                lVar14 = 0;
                uVar21 = local_168;
                uVar38 = uVar18;
                uVar33 = local_1d0;
                uVar31 = local_188;
                uVar42 = local_1b0;
                do {
                  if ((((longlong)uVar42 < 0) && ((longlong)uVar33 < 0)) && ((longlong)uVar38 < 0))
                  {
                    if ((uVar31 | local_178) >> 0x20 == 0) {
                      iVar27 = (int)((uVar31 & 0xffffffff) / (local_178 & 0xffffffff));
                    }
                    else {
                      iVar27 = (int)((longlong)uVar31 / (longlong)local_178);
                    }
                    if ((uVar21 | local_178) >> 0x20 == 0) {
                      iVar37 = (int)((uVar21 & 0xffffffff) / (local_178 & 0xffffffff));
                    }
                    else {
                      iVar37 = (int)((longlong)uVar21 / (longlong)local_178);
                    }
                    *(undefined1 *)(local_1f8 + lVar14) =
                         *(undefined1 *)
                          ((longlong)iVar27 + (longlong)(int)(iVar37 * uVar7) + (longlong)local_148)
                    ;
                  }
                  lVar14 = lVar14 + 1;
                  uVar38 = uVar38 - (longlong)iVar28;
                  uVar33 = uVar33 - lVar26;
                  uVar31 = uVar31 + uVar22;
                  uVar21 = uVar21 + lVar41;
                  uVar42 = uVar42 - local_1f0;
                } while (lVar14 < (int)local_6c);
              }
            }
            local_1f8 = local_1f8 + local_138;
            uVar20 = (int)local_1e0 + 1;
            uVar21 = local_1d0 - (longlong)local_1c0;
            uVar16 = (ulonglong)uVar20;
            uVar33 = uVar18 - local_158;
            uVar31 = local_188 + local_1b8;
            uVar38 = local_1b0 - uVar39;
            uVar42 = local_168 + local_180;
            local_1e8 = uVar39;
            local_1d8 = uVar22;
          } while ((int)uVar20 < local_6c._4_4_);
        }
        break;
      case 2:
        if ((0 < local_6c._4_4_) && (0 < (int)local_6c)) {
          lVar14 = (longlong)local_1a0;
          lVar34 = (longlong)local_19c;
          uVar39 = (ulonglong)local_198;
          local_1c0 = (undefined1 *)(longlong)local_194;
          local_1b8 = (longlong)local_1c0 * lVar34 + uVar39 * lVar14;
          local_1f0 = (longlong)(int)local_160;
          lVar26 = (longlong)iVar25;
          uVar22 = lVar34 * lVar26 + lVar14 * local_1f0;
          lVar15 = (longlong)iVar37;
          lVar40 = (longlong)local_1a4;
          local_180 = (longlong)local_1c0 * lVar40 + uVar39 * lVar15;
          local_158 = (longlong)iVar36;
          lVar41 = lVar40 * lVar26 + lVar15 * local_1f0;
          uVar21 = -local_1e8 - (ulonglong)(byte)local_1c8;
          uVar16 = 0;
          uVar33 = -uVar33 - local_190;
          uVar31 = uVar31 + local_1d0 * lVar14 + local_1e8 * lVar34;
          uVar38 = -local_1d0 - (uVar38 & 0xff);
          uVar42 = uVar42 + local_1d0 * lVar15 + local_1e8 * lVar40;
          do {
            local_168 = uVar42;
            local_1b0 = uVar38;
            local_188 = uVar31;
            uVar18 = uVar33;
            local_1e0 = uVar16;
            local_1d0 = uVar21;
            if (0 < (int)local_6c) {
              if (param_12 == 2) {
                lVar14 = 0;
                uVar21 = local_188;
                uVar38 = local_1b0;
                uVar33 = uVar18;
                uVar31 = local_168;
                uVar42 = local_1d0;
                do {
                  if ((((longlong)uVar38 < 0) && ((longlong)uVar42 < 0)) && ((longlong)uVar33 < 0))
                  {
                    if ((uVar21 | local_178) >> 0x20 == 0) {
                      uVar16 = (uVar21 & 0xffffffff) / (local_178 & 0xffffffff);
                    }
                    else {
                      uVar16 = (longlong)uVar21 / (longlong)local_178;
                    }
                    if ((uVar31 | local_178) >> 0x20 == 0) {
                      uVar43 = (uVar31 & 0xffffffff) / (local_178 & 0xffffffff);
                    }
                    else {
                      uVar43 = (longlong)uVar31 / (longlong)local_178;
                    }
                    iVar27 = (int)((longlong)
                                   ((ulonglong)(uint)((int)uVar16 >> 0x1f) << 0x20 |
                                   uVar16 & 0xffffffff) % (longlong)*(int *)(local_200 + 8));
                    iVar37 = (int)((longlong)
                                   ((ulonglong)(uint)((int)uVar43 >> 0x1f) << 0x20 |
                                   uVar43 & 0xffffffff) % (longlong)*(int *)(local_200 + 0xc));
                    *(undefined2 *)(local_1f8 + lVar14 * 2) =
                         *(undefined2 *)
                          ((longlong)
                           (int)(((iVar37 >> 0x1f & *(int *)(local_200 + 0xc) - 1U) + iVar37) *
                                uVar7) + (longlong)local_148 +
                          (longlong)(int)((iVar27 >> 0x1f & *(int *)(local_200 + 8) - 1U) + iVar27)
                          * 2);
                  }
                  lVar14 = lVar14 + 1;
                  uVar33 = uVar33 - (longlong)iVar28;
                  uVar42 = uVar42 - lVar26;
                  uVar31 = uVar31 + lVar41;
                  uVar21 = uVar21 + uVar22;
                  uVar38 = uVar38 - local_1f0;
                } while (lVar14 < (int)local_6c);
              }
              else {
                lVar14 = 0;
                uVar21 = local_168;
                uVar38 = uVar18;
                uVar33 = local_1d0;
                uVar31 = local_188;
                uVar42 = local_1b0;
                do {
                  if ((((longlong)uVar42 < 0) && ((longlong)uVar33 < 0)) && ((longlong)uVar38 < 0))
                  {
                    if ((uVar31 | local_178) >> 0x20 == 0) {
                      iVar27 = (int)((uVar31 & 0xffffffff) / (local_178 & 0xffffffff));
                    }
                    else {
                      iVar27 = (int)((longlong)uVar31 / (longlong)local_178);
                    }
                    if ((uVar21 | local_178) >> 0x20 == 0) {
                      iVar37 = (int)((uVar21 & 0xffffffff) / (local_178 & 0xffffffff));
                    }
                    else {
                      iVar37 = (int)((longlong)uVar21 / (longlong)local_178);
                    }
                    *(undefined2 *)(local_1f8 + lVar14 * 2) =
                         *(undefined2 *)
                          ((longlong)(int)(iVar37 * uVar7) + (longlong)local_148 +
                          (longlong)iVar27 * 2);
                  }
                  lVar14 = lVar14 + 1;
                  uVar38 = uVar38 - (longlong)iVar28;
                  uVar33 = uVar33 - lVar26;
                  uVar31 = uVar31 + uVar22;
                  uVar21 = uVar21 + lVar41;
                  uVar42 = uVar42 - local_1f0;
                } while (lVar14 < (int)local_6c);
              }
            }
            local_1f8 = local_1f8 + local_138;
            uVar20 = (int)local_1e0 + 1;
            uVar21 = local_1d0 - (longlong)local_1c0;
            uVar16 = (ulonglong)uVar20;
            uVar33 = uVar18 - local_158;
            uVar31 = local_188 + local_1b8;
            uVar38 = local_1b0 - uVar39;
            uVar42 = local_168 + local_180;
            local_1e8 = uVar39;
            local_1d8 = uVar22;
          } while ((int)uVar20 < local_6c._4_4_);
        }
        break;
      case 3:
        local_1f8._4_4_ = (undefined4)(local_1f8 >> 0x20);
        local_1f8 = CONCAT44(local_1f8._4_4_,(int)uVar38);
        uVar21 = CONCAT71((int7)(int3)((uint)iVar32 >> 8),1);
        if ((local_6c._4_4_ < 1) || ((int)local_6c < 1)) goto joined_r0x000140614ed6;
        puVar11 = (undefined1 *)
                  (local_168 + (longlong)(int)(local_70 * uVar6) + (longlong)iVar27 + 2);
        uVar22 = -uVar33 - local_190;
        lVar14 = (longlong)local_1a0;
        lVar40 = (longlong)local_19c;
        uVar31 = uVar31 + local_1d0 * lVar14 + local_1e8 * lVar40;
        local_180 = (longlong)local_198;
        local_1b8 = (longlong)local_194;
        local_158 = local_1b8 * lVar40 + local_180 * lVar14;
        lVar34 = (longlong)(int)local_160;
        local_1b0 = (ulonglong)iVar25;
        lVar15 = (longlong)iVar37;
        lVar26 = (longlong)local_1a4;
        local_1e0 = -local_1e8 - (ulonglong)(byte)local_1c8;
        uVar38 = -local_1d0 - (uVar38 & 0xff);
        uVar42 = uVar42 + local_1d0 * lVar15 + local_1e8 * lVar26;
        local_130 = local_1b8 * lVar26 + local_180 * lVar15;
        local_1f0 = (longlong)iVar28;
        local_160 = (longlong)iVar36;
        local_1d8 = lVar26 * local_1b0 + lVar15 * lVar34;
        uVar21 = 0;
        local_1c0 = puVar11;
        local_190 = uVar18;
        do {
          if (0 < (int)local_6c) {
            lVar15 = 0;
            uVar18 = uVar42;
            uVar33 = uVar22;
            puVar29 = puVar11;
            uVar16 = uVar31;
            uVar39 = uVar38;
            uVar43 = local_1e0;
            do {
              if ((((longlong)uVar39 < 0) && ((longlong)uVar43 < 0)) && ((longlong)uVar33 < 0)) {
                if ((uVar16 | local_178) >> 0x20 == 0) {
                  uVar12 = (uVar16 & 0xffffffff) / (local_178 & 0xffffffff);
                  if ((uVar18 | local_178) >> 0x20 == 0) goto LAB_140614684;
LAB_140614652:
                  iVar37 = (int)uVar12;
                  uVar13 = (longlong)uVar18 / (longlong)local_178;
                  iVar27 = (int)uVar13;
                }
                else {
                  uVar12 = (longlong)uVar16 / (longlong)local_178;
                  if ((uVar18 | local_178) >> 0x20 != 0) goto LAB_140614652;
LAB_140614684:
                  iVar37 = (int)uVar12;
                  uVar13 = (uVar18 & 0xffffffff) / (local_178 & 0xffffffff);
                  iVar27 = (int)uVar13;
                }
                if (param_12 == 2) {
                  iVar37 = (int)((longlong)
                                 ((ulonglong)(uint)((int)uVar12 >> 0x1f) << 0x20 |
                                 uVar12 & 0xffffffff) % (longlong)*(int *)(local_200 + 8));
                  iVar37 = (iVar37 >> 0x1f & *(int *)(local_200 + 8) - 1U) + iVar37;
                  iVar27 = (int)((longlong)
                                 ((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 |
                                 uVar13 & 0xffffffff) % (longlong)*(int *)(local_200 + 0xc));
                  if (iVar27 < 0) {
                    iVar27 = iVar27 + *(int *)(local_200 + 0xc) + -1;
                  }
                }
                lVar41 = (longlong)(int)(iVar27 * uVar7) + (longlong)local_148;
                lVar26 = (longlong)iVar37 * 3;
                puVar29[-2] = *(undefined1 *)(lVar41 + lVar26);
                puVar29[-1] = *(undefined1 *)(lVar41 + 1 + lVar26);
                *puVar29 = *(undefined1 *)(lVar41 + 2 + lVar26);
              }
              lVar15 = lVar15 + 1;
              puVar29 = puVar29 + 3;
              uVar33 = uVar33 - local_1f0;
              uVar43 = uVar43 - local_1b0;
              uVar16 = uVar16 + lVar40 * local_1b0 + lVar14 * lVar34;
              uVar18 = uVar18 + local_1d8;
              uVar39 = uVar39 - lVar34;
              local_1f8 = uVar21;
              local_1e8 = uVar38;
              local_1c0 = puVar11;
              local_190 = uVar22;
              local_188 = uVar31;
              local_168 = uVar42;
            } while (lVar15 < (int)local_6c);
          }
          local_1d0 = CONCAT44(local_1d0._4_4_,local_6c._4_4_);
          uVar20 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar20;
          puVar11 = puVar11 + local_138;
          uVar22 = uVar22 - local_160;
          local_1e0 = local_1e0 - local_1b8;
          uVar31 = uVar31 + local_158;
          uVar42 = uVar42 + local_130;
          uVar38 = uVar38 - local_180;
        } while ((int)uVar20 < local_6c._4_4_);
        uVar24 = (undefined7)(local_1d8 >> 8);
        goto joined_r0x000140614ed6;
      case 4:
        uVar22 = local_1d0;
        if ((0 < local_6c._4_4_) && (0 < (int)local_6c)) {
          lVar14 = (longlong)local_1a0;
          lVar34 = (longlong)local_19c;
          local_180 = (longlong)local_198;
          local_1b8 = (longlong)local_194;
          local_158 = lVar34 * local_1b8 + lVar14 * local_180;
          local_1f0 = (longlong)(int)local_160;
          lVar26 = (longlong)iVar25;
          local_1d8 = lVar34 * lVar26 + lVar14 * local_1f0;
          lVar15 = (longlong)iVar37;
          lVar40 = (longlong)local_1a4;
          local_130 = lVar40 * local_1b8 + lVar15 * local_180;
          local_160 = (longlong)iVar36;
          lVar41 = lVar40 * lVar26 + lVar15 * local_1f0;
          uVar21 = -local_1e8 - (ulonglong)(byte)local_1c8;
          puVar11 = (undefined1 *)0x0;
          uVar22 = local_1d0 * lVar15 + local_1e8 * lVar40 + uVar42;
          uVar33 = -uVar33 - local_190;
          uVar38 = -local_1d0 - (uVar38 & 0xff);
          uVar31 = local_1d0 * lVar14 + local_1e8 * lVar34 + uVar31;
          do {
            local_1b0 = uVar31;
            local_1e0 = uVar38;
            uVar18 = uVar33;
            local_1d0 = uVar22;
            local_1c0 = puVar11;
            local_1e8 = uVar21;
            if (0 < (int)local_6c) {
              if (param_12 == 2) {
                lVar14 = 0;
                uVar21 = local_1b0;
                uVar38 = local_1e0;
                uVar22 = uVar18;
                uVar33 = local_1e8;
                uVar31 = local_1d0;
                do {
                  if ((((longlong)uVar38 < 0) && ((longlong)uVar33 < 0)) && ((longlong)uVar22 < 0))
                  {
                    if ((uVar21 | local_178) >> 0x20 == 0) {
                      uVar42 = (uVar21 & 0xffffffff) / (local_178 & 0xffffffff);
                    }
                    else {
                      uVar42 = (longlong)uVar21 / (longlong)local_178;
                    }
                    if ((uVar31 | local_178) >> 0x20 == 0) {
                      uVar16 = (uVar31 & 0xffffffff) / (local_178 & 0xffffffff);
                    }
                    else {
                      uVar16 = (longlong)uVar31 / (longlong)local_178;
                    }
                    iVar27 = (int)((longlong)
                                   ((ulonglong)(uint)((int)uVar42 >> 0x1f) << 0x20 |
                                   uVar42 & 0xffffffff) % (longlong)*(int *)(local_200 + 8));
                    iVar37 = (int)((longlong)
                                   ((ulonglong)(uint)((int)uVar16 >> 0x1f) << 0x20 |
                                   uVar16 & 0xffffffff) % (longlong)*(int *)(local_200 + 0xc));
                    *(undefined4 *)(local_1f8 + lVar14 * 4) =
                         *(undefined4 *)
                          ((longlong)
                           (int)(((iVar37 >> 0x1f & *(int *)(local_200 + 0xc) - 1U) + iVar37) *
                                uVar7) + (longlong)local_148 +
                          (longlong)(int)((iVar27 >> 0x1f & *(int *)(local_200 + 8) - 1U) + iVar27)
                          * 4);
                  }
                  lVar14 = lVar14 + 1;
                  uVar22 = uVar22 - (longlong)iVar28;
                  uVar33 = uVar33 - lVar26;
                  uVar31 = uVar31 + lVar41;
                  uVar21 = uVar21 + local_1d8;
                  uVar38 = uVar38 - local_1f0;
                } while (lVar14 < (int)local_6c);
              }
              else {
                lVar14 = 0;
                uVar21 = local_1d0;
                uVar38 = uVar18;
                uVar22 = local_1e8;
                uVar33 = local_1e0;
                uVar31 = local_1b0;
                do {
                  if ((((longlong)uVar33 < 0) && ((longlong)uVar22 < 0)) && ((longlong)uVar38 < 0))
                  {
                    if ((uVar31 | local_178) >> 0x20 == 0) {
                      iVar27 = (int)((uVar31 & 0xffffffff) / (local_178 & 0xffffffff));
                    }
                    else {
                      iVar27 = (int)((longlong)uVar31 / (longlong)local_178);
                    }
                    if ((uVar21 | local_178) >> 0x20 == 0) {
                      iVar37 = (int)((uVar21 & 0xffffffff) / (local_178 & 0xffffffff));
                    }
                    else {
                      iVar37 = (int)((longlong)uVar21 / (longlong)local_178);
                    }
                    *(undefined4 *)(local_1f8 + lVar14 * 4) =
                         *(undefined4 *)
                          ((longlong)(int)(iVar37 * uVar7) + (longlong)local_148 +
                          (longlong)iVar27 * 4);
                  }
                  lVar14 = lVar14 + 1;
                  uVar38 = uVar38 - (longlong)iVar28;
                  uVar22 = uVar22 - lVar26;
                  uVar31 = uVar31 + local_1d8;
                  uVar21 = uVar21 + lVar41;
                  uVar33 = uVar33 - local_1f0;
                } while (lVar14 < (int)local_6c);
              }
            }
            local_1f8 = local_1f8 + local_138;
            uVar20 = (int)local_1c0 + 1;
            uVar22 = local_1d0 + local_130;
            uVar21 = local_1e8 - local_1b8;
            puVar11 = (undefined1 *)(ulonglong)uVar20;
            uVar33 = uVar18 - local_160;
            uVar38 = local_1e0 - local_180;
            uVar31 = local_1b0 + local_158;
          } while ((int)uVar20 < local_6c._4_4_);
        }
      }
LAB_140614ea1:
      local_190 = uVar18;
      uVar24 = (undefined7)(uVar22 >> 8);
joined_r0x000140614ed6:
      uVar21 = CONCAT71(uVar24,1);
      uVar18 = local_190;
    }
    else {
      cVar8 = parameter_s_is_invalid(param_1);
      iVar9 = 0;
      iVar27 = 1;
      uVar21 = 0;
      uVar18 = local_190;
      if (cVar8 != '\0') goto LAB_14061329c;
    }
joined_r0x000140614ed6:
    local_190 = uVar18;
    if ((local_104 & 2) != 0) {
      uVar21 = uVar21 & 0xffffffff;
      FUN_140113f30(param_5);
    }
    if (iVar9 != 0) {
      uVar21 = uVar21 & 0xffffffff;
      FUN_140113f30(param_1);
    }
  }
LAB_140614159:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_2d8)) {
    return uVar21 & 0xffffffff;
  }
LAB_140614ee1:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_2d8);
}

