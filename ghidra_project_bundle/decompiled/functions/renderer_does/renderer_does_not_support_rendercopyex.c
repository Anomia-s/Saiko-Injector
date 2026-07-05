/**
 * Function: renderer_does_not_support_rendercopyex
 * Address:  1401216e0
 * Signature: undefined renderer_does_not_support_rendercopyex(void)
 * Body size: 1437 bytes
 */


undefined8
renderer_does_not_support_rendercopyex
          (longlong param_1,longlong param_2,longlong param_3,float *param_4,double param_5,
          undefined8 *param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  uint uVar12;
  uint uVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined1 auStack_198 [32];
  double local_178;
  undefined8 local_170;
  undefined4 *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  float local_120 [3];
  float fStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4 [16];
  undefined8 local_e4;
  undefined4 local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b0;
  
  local_b0 = DAT_1414ef3c0 ^ (ulonglong)auStack_198;
  if (param_7 == 0) {
    dVar11 = param_5 / 360.0;
    if ((dVar11 == (double)(int)dVar11) && (!NAN(dVar11) && !NAN((double)(int)dVar11))) {
      if (DAT_1414ef3c0 == (local_b0 ^ (ulonglong)auStack_198)) {
        uVar6 = parameter_s_is_invalid(param_1,param_2);
        return uVar6;
      }
      goto LAB_1401218ea;
    }
  }
  cVar5 = FUN_1403d8fa0(param_1,2);
  if (cVar5 == '\0') {
    pcVar7 = "renderer";
LAB_1401217a4:
    FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar7);
LAB_1401217a9:
    uVar6 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x2b8) == '\x01') {
      FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
      goto LAB_1401217a9;
    }
    cVar5 = FUN_1403d8fa0(param_2,3);
    if (cVar5 == '\0') {
      pcVar7 = "texture";
      goto LAB_1401217a4;
    }
    if (param_1 != *(longlong *)(param_2 + 0xa8)) {
      pcVar7 = "Texture was not created with this renderer";
LAB_1401218ca:
      uVar6 = FUN_1400fbed0(pcVar7);
      if (DAT_1414ef3c0 == (local_b0 ^ (ulonglong)auStack_198)) {
        return uVar6;
      }
      goto LAB_1401218ea;
    }
    if ((*(longlong *)(param_1 + 0x50) == 0) && (*(longlong *)(param_1 + 0x58) == 0)) {
      pcVar7 = "Renderer does not support RenderCopyEx";
      goto LAB_1401218ca;
    }
    local_108 = 0;
    local_100 = CONCAT44((float)(int)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20),
                         (float)(int)*(undefined8 *)(param_2 + 4));
    if (param_3 == 0) {
LAB_14012195b:
      if (param_4 == (float *)0x0) {
        piVar3 = *(int **)(param_1 + 0x150);
        local_120[0] = 0.0;
        local_120[1] = 0.0;
        if (piVar3[4] < 0) {
          local_120[2] = (float)*piVar3 / (float)piVar3[0x19];
        }
        else {
          local_120[2] = (float)piVar3[4];
        }
        if (piVar3[5] < 0) {
          fStack_114 = (float)piVar3[1] / (float)piVar3[0x1a];
        }
        else {
          fStack_114 = (float)piVar3[5];
        }
        param_4 = local_120;
      }
      lVar8 = *(longlong *)(param_2 + 0xb0);
      if (*(longlong *)(param_2 + 0xb0) == 0) {
        lVar8 = param_2;
      }
      if (param_6 == (undefined8 *)0x0) {
        uVar6 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20) * 0.5,
                         (float)*(undefined8 *)(param_4 + 2) * 0.5);
      }
      else {
        uVar6 = *param_6;
      }
      *(undefined4 *)(lVar8 + 0xe8) = *(undefined4 *)(param_1 + 0x238);
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 100);
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x68);
      local_110 = uVar6;
      if (*(longlong *)(param_1 + 0x50) == 0) {
        fVar20 = (float)((param_5 * 3.141592653589793) / 180.0);
        fVar9 = sinf(fVar20);
        fVar10 = cosf(fVar20);
        fVar20 = param_4[1];
        fVar16 = param_4[3] + fVar20;
        fVar22 = (float)(int)*(undefined8 *)(lVar8 + 4);
        fVar23 = (float)(int)((ulonglong)*(undefined8 *)(lVar8 + 4) >> 0x20);
        auVar21._4_4_ = (float)local_100 + (float)local_108;
        auVar21._0_4_ = local_108._4_4_;
        auVar21._8_4_ = local_108._4_4_;
        auVar21._12_4_ = (float)local_100 + (float)local_108;
        auVar13._4_4_ = local_108._4_4_ + local_100._4_4_;
        auVar13._0_4_ = (float)local_108;
        auVar13._8_8_ = 0;
        auVar14._4_4_ = fVar23;
        auVar14._0_4_ = fVar22;
        auVar14._8_8_ = 0;
        auVar14 = divps(auVar13,auVar14);
        auVar4._4_4_ = fVar22;
        auVar4._0_4_ = fVar23;
        auVar4._8_4_ = fVar23;
        auVar4._12_4_ = fVar22;
        local_f4 = divps(auVar21,auVar4);
        fVar23 = (float)*(undefined8 *)param_4;
        fVar18 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
        local_f8 = auVar14._0_4_;
        local_dc = auVar14._4_4_;
        local_e4 = CONCAT44(local_f8,local_dc);
        fStack_c0 = (float)uVar6 + fVar23;
        fStack_bc = (float)((ulonglong)uVar6 >> 0x20) + fVar18;
        uVar12 = -(uint)((param_7 & 1) == 0);
        uVar15 = -(uint)((param_7 & 2) == 0);
        fVar22 = fVar16;
        if ((uVar15 & 1) == 0) {
          fVar22 = fVar20;
        }
        fVar17 = (float)(~uVar12 & (uint)(*param_4 + param_4[2]) | (uint)fVar23 & uVar12) -
                 fStack_c0;
        fVar18 = (float)(~uVar15 & (uint)fVar16 | (uint)fVar18 & uVar15) - fStack_bc;
        fVar23 = (float)(~uVar12 & (uint)fVar23 | (uint)(*param_4 + param_4[2]) & uVar12) -
                 fStack_c0;
        fVar19 = (float)(~uVar15 & (uint)fVar16 | (uint)fVar20 & uVar15) - fStack_bc;
        fVar20 = fVar9 * fVar17;
        fVar16 = fVar9 * fVar23;
        fVar22 = fVar22 - fStack_bc;
        fVar17 = fVar10 * fVar17;
        fVar23 = fVar10 * fVar23;
        local_d8 = (fVar17 - fVar9 * fVar18) + fStack_c0;
        fStack_d4 = fVar20 + fVar10 * fVar18 + fStack_bc;
        fStack_d0 = (fVar23 - fVar9 * fVar19) + fStack_c0;
        fStack_cc = fVar16 + fVar10 * fVar19 + fStack_bc;
        local_c8 = (fVar23 - fVar22 * fVar9) + fStack_c0;
        fStack_c4 = fVar16 + fVar22 * fVar10 + fStack_bc;
        fStack_c0 = (fVar17 - fVar22 * fVar9) + fStack_c0;
        fStack_bc = fVar20 + fVar22 * fVar10 + fStack_bc;
        local_178 = (double)(lVar8 + 0x28);
        local_150 = &DAT_140de9a20;
        local_168 = &local_f8;
        local_128 = 1;
        local_140 = 4;
        local_148 = 6;
        local_158 = 4;
        local_160 = 8;
        local_170 = (undefined8 *)((ulonglong)local_170._4_4_ << 0x20);
        local_138 = uVar1;
        local_130 = uVar2;
        uVar6 = FUN_14011fca0(param_1,lVar8,&local_d8,8);
      }
      else {
        local_168 = (undefined4 *)CONCAT44(local_168._4_4_,param_7);
        local_170 = &local_110;
        local_178 = param_5;
        local_160 = uVar1;
        local_158 = uVar2;
        uVar6 = FUN_140121c80(param_1,lVar8,&local_108);
      }
    }
    else {
      cVar5 = potential_rect_math_overflow(param_3,&local_108,&local_108);
      uVar6 = 1;
      if (cVar5 != '\0') goto LAB_14012195b;
    }
  }
  if (DAT_1414ef3c0 == (local_b0 ^ (ulonglong)auStack_198)) {
    return uVar6;
  }
LAB_1401218ea:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_b0 ^ (ulonglong)auStack_198);
}

