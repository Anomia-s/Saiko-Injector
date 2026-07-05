/**
 * Function: clustered_assign_lights
 * Address:  1404d7b40
 * Signature: undefined clustered_assign_lights(void)
 * Body size: 2939 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clustered_assign_lights(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  byte bVar20;
  char cVar21;
  longlong lVar22;
  ulonglong uVar23;
  byte *pbVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  byte local_1c0 [32];
  undefined1 local_1a0 [40];
  longlong local_178;
  longlong *plStack_170;
  longlong *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  byte *local_118;
  longlong lStack_110;
  ulonglong local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  local_c0 = 0xfffffffffffffffe;
  if (param_3 == (longlong *)0x0 || (param_2 == (longlong *)0x0 || param_1 == (longlong *)0x0)) {
    return;
  }
  if (param_1[0x28] == 0) {
    return;
  }
  if (param_1[0x2a] == 0) {
    return;
  }
  if (*(uint *)(param_1 + 2) == 0) {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
    return;
  }
  auVar26._4_4_ = 0;
  auVar26._0_4_ = *(uint *)(param_1 + 2);
  auVar26._8_4_ = *(int *)((longlong)param_1 + 0x14);
  auVar26._12_4_ = 0;
  fVar39 = (float)(SUB168(auVar26 | _DAT_140de8130,0) - (double)DAT_140de8130);
  fVar41 = (float)(SUB168(auVar26 | _DAT_140de8130,8) - DAT_140de8130._8_8_);
  fVar48 = 0.0001;
  if (0.0001 <= *(float *)((longlong)param_3 + 0x8c)) {
    fVar48 = *(float *)((longlong)param_3 + 0x8c);
  }
  fVar49 = fVar48 + 0.001;
  if (fVar48 + 0.001 <= *(float *)(param_3 + 0x12)) {
    fVar49 = *(float *)(param_3 + 0x12);
  }
  fVar25 = logf(fVar49 / fVar48);
  fVar45 = 0.0001;
  if (0.0001 <= fVar25) {
    fVar45 = fVar25;
  }
  auVar2._4_4_ = fVar41;
  auVar2._0_4_ = fVar39;
  auVar2._8_8_ = 0;
  auVar26 = divps(ZEXT816(0x4110000041800000),auVar2);
  *(float *)(param_1 + 4) = fVar39;
  *(float *)((longlong)param_1 + 0x24) = fVar41;
  *(int *)(param_1 + 5) = auVar26._0_4_;
  *(int *)((longlong)param_1 + 0x2c) = auVar26._4_4_;
  *(float *)(param_1 + 6) = fVar48;
  *(float *)((longlong)param_1 + 0x34) = fVar49;
  *(float *)(param_1 + 7) = fVar49 / fVar48;
  *(float *)((longlong)param_1 + 0x3c) = 24.0 / fVar45;
  param_1[8] = 0x4110000041800000;
  param_1[9] = 0x4558000041c00000;
  param_1[10] = 0x4400000044000000;
  param_1[0xb] = 0;
  lVar22 = param_3[1];
  lVar14 = param_3[2];
  lVar15 = param_3[3];
  lVar16 = param_3[4];
  lVar17 = param_3[5];
  lVar18 = param_3[6];
  lVar19 = param_3[7];
  param_1[0x14] = *param_3;
  param_1[0x15] = lVar22;
  param_1[0x16] = lVar14;
  param_1[0x17] = lVar15;
  param_1[0x18] = lVar16;
  param_1[0x19] = lVar17;
  param_1[0x1a] = lVar18;
  param_1[0x1b] = lVar19;
  fVar48 = *(float *)(param_3 + 8);
  fVar39 = *(float *)((longlong)param_3 + 0x44);
  fVar41 = *(float *)(param_3 + 9);
  fVar49 = *(float *)((longlong)param_3 + 0x4c);
  fVar45 = *(float *)(param_3 + 10);
  fVar25 = *(float *)((longlong)param_3 + 0x54);
  fVar4 = *(float *)(param_3 + 0xb);
  fVar5 = *(float *)((longlong)param_3 + 0x5c);
  fVar6 = *(float *)(param_3 + 0xc);
  fVar7 = *(float *)((longlong)param_3 + 100);
  fVar8 = *(float *)(param_3 + 0xd);
  fVar9 = *(float *)((longlong)param_3 + 0x6c);
  fVar10 = *(float *)(param_3 + 0xe);
  fVar11 = *(float *)((longlong)param_3 + 0x74);
  fVar12 = *(float *)(param_3 + 0xf);
  fVar13 = *(float *)((longlong)param_3 + 0x7c);
  fVar27 = fVar41 * fVar5 - fVar4 * fVar49;
  fVar28 = fVar8 * fVar13 - fVar12 * fVar9;
  fVar29 = fVar48 * fVar5 - fVar45 * fVar49;
  fVar30 = fVar6 * fVar13 - fVar10 * fVar9;
  fVar31 = fVar48 * fVar4 - fVar41 * fVar45;
  fVar32 = fVar6 * fVar12 - fVar8 * fVar10;
  fVar33 = fVar39 * fVar5 - fVar49 * fVar25;
  fVar34 = fVar7 * fVar13 - fVar9 * fVar11;
  fVar40 = fVar25 * fVar48 - fVar39 * fVar45;
  fVar42 = fVar11 * fVar6 - fVar7 * fVar10;
  fVar43 = fVar4 * fVar39 - fVar41 * fVar25;
  fVar44 = fVar12 * fVar7 - fVar8 * fVar11;
  fVar35 = fVar42 * fVar27;
  fVar36 = fVar40 * fVar28;
  fVar37 = fVar44 * fVar29;
  fVar38 = fVar43 * fVar30;
  fVar46 = fVar34 * fVar31;
  fVar47 = fVar33 * fVar32;
  fVar50 = fVar38 + fVar35;
  fVar51 = fVar37 + fVar36;
  auVar3._4_4_ = (fVar50 + fVar51) - (fVar46 + fVar47);
  auVar3._0_4_ = (fVar51 + fVar50) - (fVar47 + fVar46);
  auVar3._8_4_ = (fVar50 + fVar36 + fVar37) - (fVar46 + fVar32 * fVar33);
  auVar3._12_4_ = (fVar51 + fVar35 + fVar38) - (fVar47 + fVar31 * fVar34);
  auVar26 = divps(_DAT_140dc4380,auVar3);
  fVar35 = auVar26._0_4_;
  fVar27 = fVar27 * fVar35;
  fVar36 = auVar26._4_4_;
  fVar28 = fVar28 * fVar36;
  fVar37 = auVar26._8_4_;
  fVar29 = fVar29 * fVar37;
  fVar38 = auVar26._12_4_;
  fVar30 = fVar30 * fVar38;
  fVar31 = fVar31 * fVar35;
  fVar32 = fVar32 * fVar36;
  fVar33 = fVar33 * fVar37;
  fVar34 = fVar34 * fVar38;
  fVar35 = fVar35 * fVar40;
  fVar36 = fVar36 * fVar42;
  fVar37 = fVar37 * fVar43;
  fVar38 = fVar38 * fVar44;
  *(float *)(param_1 + 0xc) = fVar38 * fVar5 + (fVar25 * fVar28 - fVar34 * fVar4);
  *(float *)((longlong)param_1 + 100) = -(fVar38 * fVar49 + (fVar39 * fVar28 - fVar34 * fVar41));
  *(float *)(param_1 + 0xd) = fVar37 * fVar13 + (fVar11 * fVar27 - fVar33 * fVar12);
  *(float *)((longlong)param_1 + 0x6c) = -(fVar37 * fVar9 + (fVar7 * fVar27 - fVar33 * fVar8));
  *(float *)(param_1 + 0xe) = -(fVar32 * fVar5 + (fVar28 * fVar45 - fVar4 * fVar30));
  *(float *)((longlong)param_1 + 0x74) = fVar32 * fVar49 + (fVar28 * fVar48 - fVar41 * fVar30);
  *(float *)(param_1 + 0xf) = -(fVar31 * fVar13 + (fVar27 * fVar10 - fVar12 * fVar29));
  *(float *)((longlong)param_1 + 0x7c) = fVar31 * fVar9 + (fVar27 * fVar6 - fVar8 * fVar29);
  *(float *)(param_1 + 0x10) = fVar5 * fVar36 + (fVar45 * fVar34 - fVar30 * fVar25);
  *(float *)((longlong)param_1 + 0x84) = -(fVar49 * fVar36 + (fVar48 * fVar34 - fVar30 * fVar39));
  *(float *)(param_1 + 0x11) = fVar13 * fVar35 + (fVar10 * fVar33 - fVar29 * fVar11);
  *(float *)((longlong)param_1 + 0x8c) = -(fVar9 * fVar35 + (fVar6 * fVar33 - fVar29 * fVar7));
  *(float *)(param_1 + 0x12) = -(fVar36 * fVar4 + (fVar45 * fVar38 - fVar25 * fVar32));
  *(float *)((longlong)param_1 + 0x94) = fVar36 * fVar41 + (fVar48 * fVar38 - fVar39 * fVar32);
  *(float *)(param_1 + 0x13) = -(fVar35 * fVar12 + (fVar10 * fVar37 - fVar11 * fVar31));
  *(float *)((longlong)param_1 + 0x9c) = fVar35 * fVar8 + (fVar6 * fVar37 - fVar7 * fVar31);
  (**(code **)(*param_2 + 0x80))(param_2,param_1[0x1c],param_1 + 4,0xc0,0);
  if ((char)param_1[0x2c] == '\x01') {
    if (param_1[0x26] == 0) {
      return;
    }
    pbVar24 = (byte *)param_1[0x1c];
    if (pbVar24 == (byte *)0x0) {
      return;
    }
    if (param_1[0x21] == 0) {
      return;
    }
    local_178 = 0;
    plStack_170 = (longlong *)0x0;
    local_168 = (longlong *)0x0;
    uStack_160 = CONCAT71(uStack_160._1_7_,1);
    lVar22 = (**(code **)(*(longlong *)pbVar24 + 0x28))(pbVar24);
    bVar20 = *(char *)(lVar22 + 0x3b) + 9;
    lStack_110 = 2;
    uStack_100 = 0;
    uStack_f8 = 0xffffffffffffffff;
    local_108 = (ulonglong)bVar20;
    if (plStack_170 == local_168) {
      local_118 = pbVar24;
      FUN_140197fb0(&local_178,plStack_170,&local_118);
    }
    else {
      plStack_170[4] = -1;
      local_108._0_4_ = (uint)bVar20;
      *(uint *)(plStack_170 + 2) = (uint)local_108;
      *(undefined4 *)((longlong)plStack_170 + 0x14) = 0;
      *(undefined4 *)(plStack_170 + 3) = 0;
      *(undefined4 *)((longlong)plStack_170 + 0x1c) = 0;
      *plStack_170 = (longlong)pbVar24;
      plStack_170[1] = 2;
      plStack_170 = plStack_170 + 5;
    }
    local_118 = (byte *)param_1[0x21];
    lStack_110 = 0;
    local_108 = 6;
    uStack_100 = 0;
    uStack_f8 = 0xffffffffffffffff;
    if (plStack_170 == local_168) {
      FUN_140197fb0(&local_178,plStack_170,&local_118);
    }
    else {
      plStack_170[4] = -1;
      *(undefined4 *)(plStack_170 + 2) = 6;
      *(undefined4 *)((longlong)plStack_170 + 0x14) = 0;
      *(undefined4 *)(plStack_170 + 3) = 0;
      *(undefined4 *)((longlong)plStack_170 + 0x1c) = 0;
      *plStack_170 = (longlong)local_118;
      plStack_170[1] = 0;
      plStack_170 = plStack_170 + 5;
    }
    (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x178))
              (*(longlong **)(*param_1 + 0x18),&local_118);
    pbVar24 = local_118;
    local_118 = (byte *)0x0;
    plVar1 = (longlong *)param_1[0x29];
    param_1[0x29] = (longlong)pbVar24;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      pbVar24 = local_118;
      if (local_118 != (byte *)0x0) {
        local_118 = (byte *)0x0;
        (**(code **)(*(longlong *)pbVar24 + 0x10))();
      }
      pbVar24 = (byte *)param_1[0x29];
    }
    if (pbVar24 == (byte *)0x0) {
      if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
         (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49448),
         DAT_14151e360 != 0)) {
        lVar22 = DAT_14151e360;
        local_1c0[0] = 0;
        local_118 = local_1c0;
        cVar21 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
        if (cVar21 == '\0') {
          do {
            local_118 = (byte *)0x64;
            FUN_140008100(&local_118);
            local_118 = local_1c0;
            cVar21 = FUN_140b53dc0(lVar22,&PTR_DAT_140dc1aa0);
          } while (cVar21 == '\0');
        }
        if ((local_1c0[0] & 1) == 0) {
          do {
            local_118 = (byte *)0x64;
            FUN_140008100(&local_118);
          } while ((local_1c0[0] & 1) == 0);
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    if (local_178 != 0) {
      uVar23 = (longlong)local_168 - local_178;
      lVar22 = local_178;
      if (0xfff < uVar23) {
        lVar22 = *(longlong *)(local_178 + -8);
        if (0x1f < (ulonglong)((local_178 + -8) - lVar22)) goto LAB_1404d86a2;
        uVar23 = uVar23 + 0x27;
      }
      thunk_FUN_140b68ba8(lVar22,uVar23);
    }
    if (pbVar24 == (byte *)0x0) {
      return;
    }
  }
  if (*(char *)((longlong)param_1 + 0x161) == '\x01') {
    if (param_1[0x27] == 0) {
      return;
    }
    pbVar24 = (byte *)param_1[1];
    if (pbVar24 == (byte *)0x0) {
      return;
    }
    if (param_1[0x1c] == 0) {
      return;
    }
    if (param_1[0x1f] == 0) {
      return;
    }
    if (param_1[0x20] == 0) {
      return;
    }
    if (param_1[0x21] == 0) {
      return;
    }
    if (param_1[0x22] == 0) {
      return;
    }
    if (param_1[0x23] == 0) {
      return;
    }
    local_178 = 0;
    plStack_170 = (longlong *)0x0;
    local_168 = (longlong *)0x0;
    uStack_160 = CONCAT71(uStack_160._1_7_,1);
    lVar22 = (**(code **)(*(longlong *)pbVar24 + 0x28))(pbVar24);
    lStack_110 = 1;
    uStack_100 = 0;
    uStack_f8 = 0xffffffffffffffff;
    local_108 = (ulonglong)(byte)(*(char *)(lVar22 + 0x3b) + 9);
    local_118 = pbVar24;
    if (plStack_170 == local_168) {
      FUN_140197fb0(&local_178,plStack_170,&local_118);
    }
    else {
      plStack_170[4] = -1;
      plStack_170[2] = local_108;
      plStack_170[3] = 0;
      *plStack_170 = (longlong)pbVar24;
      plStack_170[1] = 1;
      plStack_170 = plStack_170 + 5;
    }
    pbVar24 = (byte *)param_1[0x1c];
    if (pbVar24 == (byte *)0x0) {
      bVar20 = 9;
    }
    else {
      lVar22 = (**(code **)(*(longlong *)pbVar24 + 0x28))(pbVar24);
      bVar20 = *(char *)(lVar22 + 0x3b) + 9;
    }
    lStack_110 = 2;
    uStack_100 = 0;
    uStack_f8 = 0xffffffffffffffff;
    local_108 = (ulonglong)bVar20;
    if (plStack_170 == local_168) {
      local_118 = pbVar24;
      FUN_140197fb0(&local_178,plStack_170,&local_118);
    }
    else {
      plStack_170[4] = -1;
      plStack_170[2] = local_108;
      plStack_170[3] = 0;
      *plStack_170 = (longlong)pbVar24;
      plStack_170[1] = 2;
      plStack_170 = plStack_170 + 5;
    }
    local_118 = (byte *)param_1[0x1f];
    lStack_110 = 0;
    local_108 = 5;
    uStack_100 = 0;
    uStack_f8 = 0xffffffffffffffff;
    if (plStack_170 == local_168) {
      FUN_140197fb0(&local_178,plStack_170,&local_118);
    }
    else {
      plStack_170[4] = -1;
      plStack_170[2] = 5;
      plStack_170[3] = 0;
      *plStack_170 = (longlong)local_118;
      plStack_170[1] = 0;
      plStack_170 = plStack_170 + 5;
    }
    local_118 = (byte *)param_1[0x20];
    lStack_110 = 1;
    local_108 = 5;
    uStack_100 = 0;
    uStack_f8 = 0xffffffffffffffff;
    if (plStack_170 == local_168) {
      FUN_140197fb0(&local_178,plStack_170,&local_118);
    }
    else {
      plStack_170[4] = -1;
      plStack_170[2] = 5;
      plStack_170[3] = 0;
      *plStack_170 = (longlong)local_118;
      plStack_170[1] = 1;
      plStack_170 = plStack_170 + 5;
    }
    local_118 = (byte *)param_1[0x21];
    lStack_110 = 0;
    local_108 = 6;
    uStack_100 = 0;
    uStack_f8 = 0xffffffffffffffff;
    if (plStack_170 == local_168) {
      FUN_140197fb0(&local_178,plStack_170,&local_118);
    }
    else {
      plStack_170[4] = -1;
      plStack_170[2] = 6;
      plStack_170[3] = 0;
      *plStack_170 = (longlong)local_118;
      plStack_170[1] = 0;
      plStack_170 = plStack_170 + 5;
    }
    local_118 = (byte *)param_1[0x22];
    lStack_110 = 1;
    local_108 = 6;
    uStack_100 = 0;
    uStack_f8 = 0xffffffffffffffff;
    if (plStack_170 == local_168) {
      FUN_140197fb0(&local_178,plStack_170,&local_118);
    }
    else {
      plStack_170[4] = -1;
      plStack_170[2] = 6;
      plStack_170[3] = 0;
      *plStack_170 = (longlong)local_118;
      plStack_170[1] = 1;
      plStack_170 = plStack_170 + 5;
    }
    local_118 = (byte *)param_1[0x23];
    lStack_110 = 2;
    local_108 = 6;
    uStack_100 = 0;
    uStack_f8 = 0xffffffffffffffff;
    if (plStack_170 == local_168) {
      FUN_140197fb0(&local_178,plStack_170,&local_118);
    }
    else {
      plStack_170[4] = -1;
      plStack_170[2] = 6;
      plStack_170[3] = 0;
      *plStack_170 = (longlong)local_118;
      plStack_170[1] = 2;
      plStack_170 = plStack_170 + 5;
    }
    (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x178))
              (*(longlong **)(*param_1 + 0x18),&local_118);
    pbVar24 = local_118;
    local_118 = (byte *)0x0;
    plVar1 = (longlong *)param_1[0x2b];
    param_1[0x2b] = (longlong)pbVar24;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      pbVar24 = local_118;
      if (local_118 != (byte *)0x0) {
        local_118 = (byte *)0x0;
        (**(code **)(*(longlong *)pbVar24 + 0x10))();
      }
      pbVar24 = (byte *)param_1[0x2b];
    }
    if (pbVar24 == (byte *)0x0) {
      if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
         (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49470),
         DAT_14151e360 != 0)) {
        FUN_140196ac0(DAT_14151e360,100);
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x161) = 0;
    }
    if (local_178 != 0) {
      uVar23 = (longlong)local_168 - local_178;
      lVar22 = local_178;
      if (0xfff < uVar23) {
        lVar22 = *(longlong *)(local_178 + -8);
        if (0x1f < (ulonglong)((local_178 + -8) - lVar22)) {
LAB_1404d86a2:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar23 = uVar23 + 0x27;
      }
      thunk_FUN_140b68ba8(lVar22,uVar23);
    }
    if (pbVar24 == (byte *)0x0) {
      return;
    }
  }
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_c8 = 0;
  local_118 = (byte *)param_1[0x28];
  lStack_110 = param_1[0x29];
  uStack_d0 = 1;
  FUN_1401a3690(&local_178,*param_1,"Clustered Build Grid",0x1bc,
                "/opt/actions-runner/_work/Platform/Platform/graphics/clustered_forward_renderer.cpp"
                ,"gfx_cf_execute");
  (**(code **)(*param_2 + 0xe8))(param_2,&local_118);
  (**(code **)(*param_2 + 0xf0))(param_2,0x36,1,1);
  FUN_1401a43a0(&local_158);
  FUN_1401a44e0(&local_178);
  local_138 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (longlong *)0x0;
  uStack_160 = 0;
  local_128 = 0;
  local_178 = param_1[0x2a];
  plStack_170 = (longlong *)param_1[0x2b];
  uStack_130 = 1;
  FUN_1401a3690(local_1c0,*param_1,"Clustered Assign Lights",0x1c4,
                "/opt/actions-runner/_work/Platform/Platform/graphics/clustered_forward_renderer.cpp"
                ,"gfx_cf_execute");
  (**(code **)(*param_2 + 0xe8))(param_2,&local_178);
  (**(code **)(*param_2 + 0xf0))(param_2,0xd80,1,1);
  FUN_1401a43a0(local_1a0);
  FUN_1401a44e0(local_1c0);
                    /* WARNING: Read-only address (ram,0x000140dc4380) is written */
                    /* WARNING: Read-only address (ram,0x000140de8130) is written */
  return;
}

