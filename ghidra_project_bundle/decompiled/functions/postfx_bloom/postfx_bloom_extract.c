/**
 * Function: postfx_bloom_extract
 * Address:  1404bb100
 * Signature: undefined postfx_bloom_extract(void)
 * Body size: 12203 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void postfx_bloom_extract(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar23 [16];
  undefined8 in_stack_fffffffffffff908;
  char *pcVar25;
  undefined4 uVar26;
  undefined8 in_stack_fffffffffffff910;
  char *pcVar27;
  undefined4 uVar28;
  longlong **local_6e8;
  longlong **local_6e0;
  longlong **local_6d8;
  longlong *local_6d0;
  longlong *local_6c8;
  longlong lStack_6c0;
  undefined4 uStack_6b8;
  float fStack_6b4;
  undefined4 uStack_6b0;
  float fStack_6ac;
  undefined1 uStack_6a8;
  undefined7 uStack_6a7;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined4 local_690;
  undefined4 local_68c;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined4 local_678;
  undefined4 local_674;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined4 local_660;
  undefined4 local_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined4 local_644;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined4 local_630;
  undefined4 local_62c;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined4 local_618;
  undefined4 local_614;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined4 local_588;
  undefined4 local_584;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined4 local_570;
  undefined4 local_56c;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined4 local_558;
  undefined4 local_554;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined4 local_540;
  undefined4 local_53c;
  undefined8 local_538;
  undefined4 local_530;
  int local_52c;
  undefined4 local_528;
  int local_524;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined5 uStack_420;
  undefined3 uStack_41b;
  undefined5 uStack_418;
  longlong local_410;
  undefined1 local_408 [56];
  undefined8 local_3d0;
  undefined8 local_230;
  undefined8 uStack_228;
  uint local_21c;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  ulonglong *puStack_200;
  ulonglong *local_1f8;
  undefined1 local_1f0;
  longlong *local_1e8;
  ulonglong *puStack_1e0;
  ulonglong *local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  int local_1b4;
  int local_1b0;
  uint local_1ac;
  longlong *local_1a8;
  ulonglong local_1a0 [2];
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  longlong *local_158;
  longlong local_150;
  longlong *local_148;
  ulonglong *puStack_140;
  ulonglong *local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulonglong local_120;
  undefined1 local_118 [12];
  float fStack_10c;
  undefined1 local_108 [16];
  undefined1 auStack_f8 [16];
  longlong *local_e8;
  ulonglong *puStack_e0;
  ulonglong *local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte local_b9;
  longlong *local_b8;
  undefined8 local_b0;
  
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffff908 >> 0x20);
  uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffff910 >> 0x20);
  local_b0 = 0xfffffffffffffffe;
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  if (param_1[0xc] == 0) {
    return;
  }
  if (param_1[0xd] == 0) {
    return;
  }
  if (param_1[0xe] == 0) {
    return;
  }
  if (param_1[0x31] == 0) {
    return;
  }
  if (param_1[0x20] == 0) {
    return;
  }
  if (param_1[0x3b] == 0) {
    return;
  }
  if (param_1[0x11] == 0) {
    return;
  }
  if (param_1[0x15] == 0) {
    return;
  }
  if (param_1[0x19] == 0) {
    return;
  }
  plVar8 = (longlong *)FUN_140220610();
  lVar9 = FUN_14021dea0(*param_1);
  FUN_140220680(*param_1);
  plVar10 = (longlong *)FUN_1402205c0(*param_1);
  if (plVar10 == (longlong *)0x0 || (lVar9 == 0 || plVar8 == (longlong *)0x0)) {
    return;
  }
  local_1b4 = 0;
  local_1b0 = 0;
  local_210 = lVar9;
  FUN_140220510(*param_1,&local_1b4,&local_1b0);
  if (local_1b0 == 0 || local_1b4 == 0) {
    return;
  }
  if (((local_1b4 != (int)param_1[2]) || (local_1b0 != *(int *)((longlong)param_1 + 0x14))) &&
     (cVar5 = FUN_1404bae10(param_1), cVar5 == '\0')) {
    return;
  }
  local_158 = plVar8;
  if (plVar10 != (longlong *)param_1[0x47]) {
    local_1a8 = *(longlong **)(*param_1 + 0x18);
    local_e8 = (longlong *)0x0;
    puStack_e0 = (ulonglong *)0x0;
    local_d8 = (ulonglong *)0x0;
    uStack_d0 = CONCAT71(uStack_d0._1_7_,1);
    lStack_6c0 = 0;
    uStack_6b8 = 1;
    fStack_6b4 = 0.0;
    uStack_6b0 = 0;
    fStack_6ac = -NAN;
    uStack_6a8 = 0;
    uStack_6a7 = 0xffffffff000000;
    local_6d0 = plVar10;
    local_6c8 = plVar10;
    local_b8 = param_1;
    FUN_140197fb0(&local_e8,0,&local_6c8);
    local_1a0[0] = local_b8[0xd];
    local_1a0[1] = 0;
    local_190 = 0xb;
    uStack_18f = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    if (puStack_e0 == local_d8) {
      FUN_140197fb0(&local_e8,puStack_e0,local_1a0);
    }
    else {
      puStack_e0[4] = 0;
      puStack_e0[2] = 0xb;
      puStack_e0[3] = 0;
      *puStack_e0 = local_1a0[0];
      puStack_e0[1] = 0;
      puStack_e0 = puStack_e0 + 5;
    }
    plVar8 = (longlong *)local_b8[0xc];
    if (plVar8 == (longlong *)0x0) {
      local_108[0] = 9;
    }
    else {
      lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8);
      local_108[0] = *(char *)(lVar9 + 0x3b) + 9;
    }
    stack0xfffffffffffffef0 = 0;
    local_118._0_8_ = plVar8;
    auStack_f8._0_8_ = 0xffffffffffffffff;
    local_108._1_3_ = 0;
    uVar4 = local_108._0_4_;
    local_108 = ZEXT416((uint)local_108._0_4_);
    auVar21 = local_108;
    if (puStack_e0 == local_d8) {
      FUN_140197fb0(&local_e8,puStack_e0,local_118);
    }
    else {
      puStack_e0[4] = 0xffffffffffffffff;
      local_108._4_4_ = 0;
      local_108._0_8_ = CONCAT44(local_108._4_4_,uVar4);
      puStack_e0[2] = local_108._0_8_;
      puStack_e0[3] = 0;
      *puStack_e0 = (ulonglong)plVar8;
      puStack_e0[1] = 0;
      puStack_e0 = puStack_e0 + 5;
      local_108 = auVar21;
    }
    (**(code **)(*local_1a8 + 0x178))(local_1a8,&local_6c8);
    plVar10 = local_6c8;
    local_6c8 = (longlong *)0x0;
    plVar8 = (longlong *)local_b8[0x21];
    local_b8[0x21] = (longlong)plVar10;
    if ((plVar8 != (longlong *)0x0) &&
       ((**(code **)(*plVar8 + 0x10))(), plVar8 = local_6c8, local_6c8 != (longlong *)0x0)) {
      local_6c8 = (longlong *)0x0;
      (**(code **)(*plVar8 + 0x10))();
    }
    lVar9 = local_b8[0x21];
    if (local_e8 != (longlong *)0x0) {
      uVar12 = (longlong)local_d8 - (longlong)local_e8;
      plVar8 = local_e8;
      if (0xfff < uVar12) {
        plVar8 = (longlong *)local_e8[-1];
        if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)plVar8))) goto LAB_1404be092;
        uVar12 = uVar12 + 0x27;
      }
      thunk_FUN_140b68ba8(plVar8,uVar12);
    }
    if (lVar9 == 0) {
      return;
    }
    local_e8 = (longlong *)0x0;
    puStack_e0 = (ulonglong *)0x0;
    local_d8 = (ulonglong *)0x0;
    uStack_d0 = CONCAT71(uStack_d0._1_7_,1);
    local_148 = (longlong *)0x0;
    puStack_140 = (ulonglong *)0x0;
    local_138 = (ulonglong *)0x0;
    uStack_130 = CONCAT71(uStack_130._1_7_,1);
    local_6c8 = (longlong *)local_b8[0x11];
    lStack_6c0 = 0;
    uStack_6b0 = 0;
    fStack_6ac = -NAN;
    uStack_6a8 = 0;
    uStack_6a7 = 0xffffffff000000;
    uStack_6b8 = 1;
    fStack_6b4 = 0.0;
    FUN_140197fb0(&local_e8,0,&local_6c8);
    local_1a0[0] = local_b8[0xd];
    local_1a0[1] = 0;
    local_190 = 0xb;
    uStack_18f = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    if (puStack_e0 == local_d8) {
      FUN_140197fb0(&local_e8,puStack_e0,local_1a0);
    }
    else {
      puStack_e0[4] = 0;
      puStack_e0[2] = 0xb;
      puStack_e0[3] = 0;
      *puStack_e0 = local_1a0[0];
      puStack_e0[1] = 0;
      puStack_e0 = puStack_e0 + 5;
    }
    plVar8 = (longlong *)local_b8[0xc];
    if (plVar8 == (longlong *)0x0) {
      local_108[0] = 9;
    }
    else {
      lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8);
      local_108[0] = *(char *)(lVar9 + 0x3b) + 9;
    }
    stack0xfffffffffffffef0 = 0;
    local_118._0_8_ = plVar8;
    auStack_f8._0_8_ = 0xffffffffffffffff;
    local_108._1_3_ = 0;
    uVar4 = local_108._0_4_;
    local_108 = ZEXT416((uint)local_108._0_4_);
    auVar21 = local_108;
    if (puStack_e0 == local_d8) {
      FUN_140197fb0(&local_e8,puStack_e0,local_118);
    }
    else {
      puStack_e0[4] = 0xffffffffffffffff;
      local_108._4_4_ = 0;
      local_108._0_8_ = CONCAT44(local_108._4_4_,uVar4);
      puStack_e0[2] = local_108._0_8_;
      puStack_e0[3] = 0;
      *puStack_e0 = (ulonglong)plVar8;
      puStack_e0[1] = 0;
      puStack_e0 = puStack_e0 + 5;
      local_108 = auVar21;
    }
    local_6c8 = (longlong *)local_b8[0x13];
    lStack_6c0 = 0;
    uStack_6b0 = 0;
    fStack_6ac = -NAN;
    uStack_6a8 = 0;
    uStack_6a7 = 0xffffffff000000;
    uStack_6b8 = 1;
    fStack_6b4 = 0.0;
    if (puStack_140 == local_138) {
      FUN_140197fb0(&local_148,puStack_140,&local_6c8);
    }
    else {
      puStack_140[4] = 0xffffffff00000000;
      puStack_140[2] = 1;
      puStack_140[3] = 0xffffffff00000000;
      *puStack_140 = (ulonglong)local_6c8;
      puStack_140[1] = 0;
      puStack_140 = puStack_140 + 5;
    }
    local_1a0[0] = local_b8[0xd];
    local_1a0[1] = 0;
    local_190 = 0xb;
    uStack_18f = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    if (puStack_140 == local_138) {
      FUN_140197fb0(&local_148,puStack_140,local_1a0);
    }
    else {
      puStack_140[4] = 0;
      puStack_140[2] = 0xb;
      puStack_140[3] = 0;
      *puStack_140 = local_1a0[0];
      puStack_140[1] = 0;
      puStack_140 = puStack_140 + 5;
    }
    plVar8 = (longlong *)local_b8[0xc];
    if (plVar8 == (longlong *)0x0) {
      local_108[0] = 9;
    }
    else {
      lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8);
      local_108[0] = *(char *)(lVar9 + 0x3b) + 9;
    }
    stack0xfffffffffffffef0 = 0;
    local_118._0_8_ = plVar8;
    auStack_f8._0_8_ = 0xffffffffffffffff;
    local_108._1_3_ = 0;
    uVar4 = local_108._0_4_;
    local_108 = ZEXT416((uint)local_108._0_4_);
    auVar21 = local_108;
    if (puStack_140 == local_138) {
      FUN_140197fb0(&local_148,puStack_140,local_118);
    }
    else {
      puStack_140[4] = 0xffffffffffffffff;
      local_108._4_4_ = 0;
      local_108._0_8_ = CONCAT44(local_108._4_4_,uVar4);
      puStack_140[2] = local_108._0_8_;
      puStack_140[3] = 0;
      *puStack_140 = (ulonglong)plVar8;
      puStack_140[1] = 0;
      puStack_140 = puStack_140 + 5;
      local_108 = auVar21;
    }
    (**(code **)(*local_1a8 + 0x178))(local_1a8,&local_6c8,&local_e8,local_b8[0x24]);
    plVar10 = local_6c8;
    local_6c8 = (longlong *)0x0;
    plVar8 = (longlong *)local_b8[0x27];
    local_b8[0x27] = (longlong)plVar10;
    if ((plVar8 != (longlong *)0x0) &&
       ((**(code **)(*plVar8 + 0x10))(), plVar8 = local_6c8, local_6c8 != (longlong *)0x0)) {
      local_6c8 = (longlong *)0x0;
      (**(code **)(*plVar8 + 0x10))();
    }
    (**(code **)(*local_1a8 + 0x178))(local_1a8,&local_6c8);
    plVar10 = local_6c8;
    local_6c8 = (longlong *)0x0;
    plVar8 = (longlong *)local_b8[0x28];
    local_b8[0x28] = (longlong)plVar10;
    if ((plVar8 != (longlong *)0x0) &&
       ((**(code **)(*plVar8 + 0x10))(), plVar8 = local_6c8, local_6c8 != (longlong *)0x0)) {
      local_6c8 = (longlong *)0x0;
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((local_b8[0x27] == 0) || (local_b8[0x28] == 0)) {
      if (local_148 != (longlong *)0x0) {
        uVar12 = (longlong)local_138 - (longlong)local_148;
        plVar8 = local_148;
        if (0xfff < uVar12) {
          plVar8 = (longlong *)local_148[-1];
          if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)plVar8))) goto LAB_1404be092;
          uVar12 = uVar12 + 0x27;
        }
        thunk_FUN_140b68ba8(plVar8,uVar12);
      }
      if (local_e8 == (longlong *)0x0) {
        return;
      }
      uVar12 = (longlong)local_d8 - (longlong)local_e8;
      plVar8 = local_e8;
      if (0xfff < uVar12) {
        plVar8 = (longlong *)local_e8[-1];
        if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)plVar8))) {
LAB_1404be092:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar12 = uVar12 + 0x27;
      }
      thunk_FUN_140b68ba8(plVar8,uVar12);
      return;
    }
    if (local_148 != (longlong *)0x0) {
      uVar12 = (longlong)local_138 - (longlong)local_148;
      plVar8 = local_148;
      if (0xfff < uVar12) {
        plVar8 = (longlong *)local_148[-1];
        if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)plVar8))) goto LAB_1404be092;
        uVar12 = uVar12 + 0x27;
      }
      thunk_FUN_140b68ba8(plVar8,uVar12);
    }
    if (local_e8 != (longlong *)0x0) {
      uVar12 = (longlong)local_d8 - (longlong)local_e8;
      plVar8 = local_e8;
      if (0xfff < uVar12) {
        plVar8 = (longlong *)local_e8[-1];
        if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)plVar8))) goto LAB_1404be092;
        uVar12 = uVar12 + 0x27;
      }
      thunk_FUN_140b68ba8(plVar8,uVar12);
    }
    local_6e8 = &local_6d0;
    local_6e0 = &local_b8;
    local_6d8 = &local_1a8;
    cVar5 = FUN_1404c1750(&local_6e8,local_b8 + 0x29,local_b8[0x11]);
    if (cVar5 == '\0') {
      return;
    }
    cVar5 = FUN_1404c1750(&local_6e8,local_b8 + 0x2e,local_b8[0x11]);
    if (cVar5 == '\0') {
      return;
    }
    local_148 = (longlong *)0x0;
    puStack_140 = (ulonglong *)0x0;
    local_138 = (ulonglong *)0x0;
    uStack_130 = CONCAT71(uStack_130._1_7_,1);
    local_6c8 = (longlong *)local_b8[0xd];
    lStack_6c0 = 0;
    uStack_6b8 = 0xb;
    fStack_6b4 = 0.0;
    uStack_6b0 = 0;
    fStack_6ac = 0.0;
    uStack_6a8 = 0;
    uStack_6a7 = 0;
    FUN_140197fb0(&local_148,0,&local_6c8);
    local_1a0[0] = local_b8[0xe];
    local_1a0[1] = 1;
    local_190 = 0xb;
    uStack_18f = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    if (puStack_140 == local_138) {
      FUN_140197fb0(&local_148,puStack_140,local_1a0);
    }
    else {
      puStack_140[4] = 0;
      puStack_140[2] = 0xb;
      puStack_140[3] = 0;
      *puStack_140 = local_1a0[0];
      puStack_140[1] = 1;
      puStack_140 = puStack_140 + 5;
    }
    local_118._0_8_ = local_b8[0x15];
    stack0xfffffffffffffef0 = 0;
    local_108._8_8_ = 0xffffffff00000000;
    local_108._0_8_ = 1;
    auStack_f8._0_8_ = 0xffffffff00000000;
    if (puStack_140 == local_138) {
      FUN_140197fb0(&local_148,puStack_140,local_118);
    }
    else {
      puStack_140[4] = 0xffffffff00000000;
      puStack_140[2] = 1;
      puStack_140[3] = 0xffffffff00000000;
      *puStack_140 = local_118._0_8_;
      puStack_140[1] = 0;
      puStack_140 = puStack_140 + 5;
    }
    plVar8 = (longlong *)local_b8[0xc];
    if (plVar8 == (longlong *)0x0) {
      bVar6 = 9;
    }
    else {
      lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8);
      bVar6 = *(char *)(lVar9 + 0x3b) + 9;
    }
    puStack_e0 = (ulonglong *)0x0;
    uStack_d0 = 0;
    uStack_c8 = 0xffffffffffffffff;
    local_d8 = (ulonglong *)(ulonglong)bVar6;
    local_e8 = plVar8;
    if (puStack_140 == local_138) {
      FUN_140197fb0(&local_148,puStack_140,&local_e8);
    }
    else {
      puStack_140[4] = 0xffffffffffffffff;
      puStack_140[2] = (ulonglong)local_d8;
      puStack_140[3] = 0;
      *puStack_140 = (ulonglong)plVar8;
      puStack_140[1] = 0;
      puStack_140 = puStack_140 + 5;
    }
    (**(code **)(*local_1a8 + 0x178))(local_1a8,&local_6c8);
    plVar10 = local_6c8;
    local_6c8 = (longlong *)0x0;
    plVar8 = (longlong *)local_b8[0x3c];
    local_b8[0x3c] = (longlong)plVar10;
    if ((plVar8 != (longlong *)0x0) &&
       ((**(code **)(*plVar8 + 0x10))(), plVar8 = local_6c8, local_6c8 != (longlong *)0x0)) {
      local_6c8 = (longlong *)0x0;
      (**(code **)(*plVar8 + 0x10))();
    }
    lVar9 = local_b8[0x3c];
    if (local_148 != (longlong *)0x0) {
      uVar12 = (longlong)local_138 - (longlong)local_148;
      plVar8 = local_148;
      if (0xfff < uVar12) {
        plVar8 = (longlong *)local_148[-1];
        if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)plVar8))) goto LAB_1404be092;
        uVar12 = uVar12 + 0x27;
      }
      thunk_FUN_140b68ba8(plVar8,uVar12);
    }
    if (lVar9 == 0) {
      return;
    }
    local_208 = 0;
    puStack_200 = (ulonglong *)0x0;
    local_1f8 = (ulonglong *)0x0;
    local_1f0 = 1;
    local_6c8 = (longlong *)local_b8[0xd];
    lStack_6c0 = 0;
    uStack_6b8 = 0xb;
    fStack_6b4 = 0.0;
    uStack_6b0 = 0;
    fStack_6ac = 0.0;
    uStack_6a8 = 0;
    uStack_6a7 = 0;
    FUN_140197fb0(&local_208,0,&local_6c8);
    local_1a0[0] = local_b8[0xe];
    local_1a0[1] = 1;
    local_190 = 0xb;
    uStack_18f = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    if (puStack_200 == local_1f8) {
      FUN_140197fb0(&local_208,puStack_200,local_1a0);
    }
    else {
      puStack_200[4] = 0;
      puStack_200[2] = 0xb;
      puStack_200[3] = 0;
      *puStack_200 = local_1a0[0];
      puStack_200[1] = 1;
      puStack_200 = puStack_200 + 5;
    }
    local_118._0_8_ = local_b8[0x19];
    stack0xfffffffffffffef0 = 0;
    local_108._8_8_ = 0xffffffff00000000;
    local_108._0_8_ = 1;
    auStack_f8._0_8_ = 0xffffffff00000000;
    if (puStack_200 == local_1f8) {
      FUN_140197fb0(&local_208,puStack_200,local_118);
    }
    else {
      puStack_200[4] = 0xffffffff00000000;
      puStack_200[2] = 1;
      puStack_200[3] = 0xffffffff00000000;
      *puStack_200 = local_118._0_8_;
      puStack_200[1] = 0;
      puStack_200 = puStack_200 + 5;
    }
    local_e8 = (longlong *)local_b8[0xf];
    puStack_e0 = (ulonglong *)0x1;
    local_d8 = (ulonglong *)0x1;
    uStack_d0 = 0xffffffff00000000;
    uStack_c8 = 0xffffffff00000000;
    if (puStack_200 == local_1f8) {
      FUN_140197fb0(&local_208,puStack_200,&local_e8);
    }
    else {
      puStack_200[4] = 0xffffffff00000000;
      puStack_200[2] = 1;
      puStack_200[3] = 0xffffffff00000000;
      *puStack_200 = (ulonglong)local_e8;
      puStack_200[1] = 1;
      puStack_200 = puStack_200 + 5;
    }
    local_148 = (longlong *)local_b8[0x10];
    puStack_140 = (ulonglong *)0x2;
    local_138 = (ulonglong *)0x1;
    uStack_130 = 0xffffffff00000000;
    uStack_128 = 0xffffffff00000000;
    if (puStack_200 == local_1f8) {
      FUN_140197fb0(&local_208,puStack_200,&local_148);
    }
    else {
      puStack_200[4] = 0xffffffff00000000;
      puStack_200[2] = 1;
      puStack_200[3] = 0xffffffff00000000;
      *puStack_200 = (ulonglong)local_148;
      puStack_200[1] = 2;
      puStack_200 = puStack_200 + 5;
    }
    plVar8 = (longlong *)local_b8[0xc];
    if (plVar8 == (longlong *)0x0) {
      bVar6 = 9;
    }
    else {
      lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8);
      bVar6 = *(char *)(lVar9 + 0x3b) + 9;
    }
    puStack_1e0 = (ulonglong *)0x0;
    uStack_1d0 = 0;
    uStack_1c8 = 0xffffffffffffffff;
    local_1d8 = (ulonglong *)(ulonglong)bVar6;
    local_1e8 = plVar8;
    if (puStack_200 == local_1f8) {
      FUN_140197fb0(&local_208,puStack_200,&local_1e8);
    }
    else {
      puStack_200[4] = 0xffffffffffffffff;
      puStack_200[2] = (ulonglong)local_1d8;
      puStack_200[3] = 0;
      *puStack_200 = (ulonglong)plVar8;
      puStack_200[1] = 0;
      puStack_200 = puStack_200 + 5;
    }
    (**(code **)(*local_1a8 + 0x178))(local_1a8,&local_6c8);
    plVar10 = local_6c8;
    local_6c8 = (longlong *)0x0;
    plVar8 = (longlong *)local_b8[0x41];
    local_b8[0x41] = (longlong)plVar10;
    if ((plVar8 != (longlong *)0x0) &&
       ((**(code **)(*plVar8 + 0x10))(), plVar8 = local_6c8, local_6c8 != (longlong *)0x0)) {
      local_6c8 = (longlong *)0x0;
      (**(code **)(*plVar8 + 0x10))();
    }
    lVar9 = local_b8[0x41];
    if (local_208 != 0) {
      uVar12 = (longlong)local_1f8 - local_208;
      lVar11 = local_208;
      if (0xfff < uVar12) {
        lVar11 = *(longlong *)(local_208 + -8);
        if (0x1f < (ulonglong)((local_208 + -8) - lVar11)) goto LAB_1404be092;
        uVar12 = uVar12 + 0x27;
      }
      thunk_FUN_140b68ba8(lVar11,uVar12);
    }
    if (lVar9 == 0) {
      return;
    }
    local_1e8 = (longlong *)0x0;
    puStack_1e0 = (ulonglong *)0x0;
    local_1d8 = (ulonglong *)0x0;
    uStack_1d0 = CONCAT71(uStack_1d0._1_7_,1);
    local_6c8 = (longlong *)local_b8[0xd];
    lStack_6c0 = 0;
    uStack_6b8 = 0xb;
    fStack_6b4 = 0.0;
    uStack_6b0 = 0;
    fStack_6ac = 0.0;
    uStack_6a8 = 0;
    uStack_6a7 = 0;
    FUN_140197fb0(&local_1e8,0,&local_6c8);
    local_1a0[0] = local_b8[0xe];
    local_1a0[1] = 1;
    local_190 = 0xb;
    uStack_18f = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    if (puStack_1e0 == local_1d8) {
      FUN_140197fb0(&local_1e8,puStack_1e0,local_1a0);
    }
    else {
      puStack_1e0[4] = 0;
      puStack_1e0[2] = 0xb;
      puStack_1e0[3] = 0;
      *puStack_1e0 = local_1a0[0];
      puStack_1e0[1] = 1;
      puStack_1e0 = puStack_1e0 + 5;
    }
    local_118._0_8_ = local_b8[0x15];
    stack0xfffffffffffffef0 = 0;
    local_108._8_8_ = 0xffffffff00000000;
    local_108._0_8_ = 1;
    auStack_f8._0_8_ = 0xffffffff00000000;
    if (puStack_1e0 == local_1d8) {
      FUN_140197fb0(&local_1e8,puStack_1e0,local_118);
    }
    else {
      puStack_1e0[4] = 0xffffffff00000000;
      puStack_1e0[2] = 1;
      puStack_1e0[3] = 0xffffffff00000000;
      *puStack_1e0 = local_118._0_8_;
      puStack_1e0[1] = 0;
      puStack_1e0 = puStack_1e0 + 5;
    }
    local_e8 = (longlong *)local_b8[0x1b];
    puStack_e0 = (ulonglong *)0x1;
    local_d8 = (ulonglong *)0x1;
    uStack_d0 = 0xffffffff00000000;
    uStack_c8 = 0xffffffff00000000;
    if (puStack_1e0 == local_1d8) {
      FUN_140197fb0(&local_1e8,puStack_1e0,&local_e8);
    }
    else {
      puStack_1e0[4] = 0xffffffff00000000;
      puStack_1e0[2] = 1;
      puStack_1e0[3] = 0xffffffff00000000;
      *puStack_1e0 = (ulonglong)local_e8;
      puStack_1e0[1] = 1;
      puStack_1e0 = puStack_1e0 + 5;
    }
    plVar8 = (longlong *)local_b8[0xc];
    if (plVar8 == (longlong *)0x0) {
      bVar6 = 9;
    }
    else {
      lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8);
      bVar6 = *(char *)(lVar9 + 0x3b) + 9;
    }
    puStack_140 = (ulonglong *)0x0;
    uStack_130 = 0;
    uStack_128 = 0xffffffffffffffff;
    local_138 = (ulonglong *)(ulonglong)bVar6;
    local_148 = plVar8;
    if (puStack_1e0 == local_1d8) {
      FUN_140197fb0(&local_1e8,puStack_1e0,&local_148);
    }
    else {
      puStack_1e0[4] = 0xffffffffffffffff;
      puStack_1e0[2] = (ulonglong)local_138;
      puStack_1e0[3] = 0;
      *puStack_1e0 = (ulonglong)plVar8;
      puStack_1e0[1] = 0;
      puStack_1e0 = puStack_1e0 + 5;
    }
    (**(code **)(*local_1a8 + 0x178))(local_1a8,&local_6c8);
    plVar10 = local_6c8;
    local_6c8 = (longlong *)0x0;
    plVar8 = (longlong *)local_b8[0x46];
    local_b8[0x46] = (longlong)plVar10;
    if ((plVar8 != (longlong *)0x0) &&
       ((**(code **)(*plVar8 + 0x10))(), plVar8 = local_6c8, local_6c8 != (longlong *)0x0)) {
      local_6c8 = (longlong *)0x0;
      (**(code **)(*plVar8 + 0x10))();
    }
    lVar9 = local_b8[0x46];
    if (local_1e8 != (longlong *)0x0) {
      uVar12 = (longlong)local_1d8 - (longlong)local_1e8;
      plVar8 = local_1e8;
      if (0xfff < uVar12) {
        plVar8 = (longlong *)local_1e8[-1];
        if (0x1f < (ulonglong)((longlong)local_1e8 + (-8 - (longlong)plVar8))) goto LAB_1404be092;
        uVar12 = uVar12 + 0x27;
      }
      thunk_FUN_140b68ba8(plVar8,uVar12);
    }
    if (lVar9 == 0) {
      return;
    }
    local_e8 = (longlong *)0x0;
    puStack_e0 = (ulonglong *)0x0;
    local_d8 = (ulonglong *)0x0;
    uStack_d0 = CONCAT71(uStack_d0._1_7_,1);
    local_6c8 = (longlong *)local_b8[0x17];
    lStack_6c0 = 0;
    uStack_6b0 = 0;
    fStack_6ac = -NAN;
    uStack_6a8 = 0;
    uStack_6a7 = 0xffffffff000000;
    uStack_6b8 = 1;
    fStack_6b4 = 0.0;
    FUN_140197fb0(&local_e8,0,&local_6c8);
    local_1a0[0] = local_b8[0xd];
    local_1a0[1] = 0;
    local_190 = 0xb;
    uStack_18f = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    if (puStack_e0 == local_d8) {
      FUN_140197fb0(&local_e8,puStack_e0,local_1a0);
    }
    else {
      puStack_e0[4] = 0;
      puStack_e0[2] = 0xb;
      puStack_e0[3] = 0;
      *puStack_e0 = local_1a0[0];
      puStack_e0[1] = 0;
      puStack_e0 = puStack_e0 + 5;
    }
    plVar8 = (longlong *)local_b8[0xc];
    if (plVar8 == (longlong *)0x0) {
      local_108[0] = 9;
    }
    else {
      lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8);
      local_108[0] = *(char *)(lVar9 + 0x3b) + 9;
    }
    stack0xfffffffffffffef0 = 0;
    local_118._0_8_ = plVar8;
    auStack_f8._0_8_ = 0xffffffffffffffff;
    local_108._1_3_ = 0;
    uVar4 = local_108._0_4_;
    local_108 = ZEXT416((uint)local_108._0_4_);
    auVar21 = local_108;
    if (puStack_e0 == local_d8) {
      FUN_140197fb0(&local_e8,puStack_e0,local_118);
    }
    else {
      puStack_e0[4] = 0xffffffffffffffff;
      local_108._4_4_ = 0;
      local_108._0_8_ = CONCAT44(local_108._4_4_,uVar4);
      puStack_e0[2] = local_108._0_8_;
      puStack_e0[3] = 0;
      *puStack_e0 = (ulonglong)plVar8;
      puStack_e0[1] = 0;
      puStack_e0 = puStack_e0 + 5;
      local_108 = auVar21;
    }
    (**(code **)(*local_1a8 + 0x178))(local_1a8,&local_6c8,&local_e8,local_b8[0x35]);
    plVar10 = local_6c8;
    local_6c8 = (longlong *)0x0;
    plVar8 = (longlong *)local_b8[0x37];
    local_b8[0x37] = (longlong)plVar10;
    if ((plVar8 != (longlong *)0x0) &&
       ((**(code **)(*plVar8 + 0x10))(), plVar8 = local_6c8, local_6c8 != (longlong *)0x0)) {
      local_6c8 = (longlong *)0x0;
      (**(code **)(*plVar8 + 0x10))();
    }
    lVar9 = local_b8[0x37];
    FUN_1400017d0(&local_e8);
    if (lVar9 == 0) {
      return;
    }
    local_b8[0x47] = (longlong)local_6d0;
  }
  plVar8 = local_158;
  param_1[0x48] = local_210;
  if ((int)param_1[4] == 1) {
    uVar16 = (uint)*(byte *)((longlong)param_1 + 0x24);
  }
  else {
    uVar16 = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    local_1ac = uVar16;
    lVar9 = FUN_1401a9cc0();
    local_b9 = *(byte *)(lVar9 + 0x288);
    if ((local_b9 & 1) == 0) {
      local_218 = 0;
    }
    else {
      lVar9 = FUN_1401a9cc0();
      local_218 = *(longlong *)(lVar9 + 0x290);
      lVar11 = FUN_1401a9e60();
      uVar12 = *(ulonglong *)(lVar11 + 0x28);
      lVar9 = lVar11;
      if ((uVar12 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar11,uVar12);
      }
      lVar2 = *(longlong *)(lVar11 + 0x48);
      uVar15 = (ulonglong)(uint)((int)(uVar12 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar15) = 0xf;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar2 + 1 + uVar15) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
      *(undefined ***)(lVar2 + 9 + uVar15) = &PTR_s_PostFX_Bloom_140e48c38;
      *(ulonglong *)(lVar11 + 0x28) = uVar12 + 1;
    }
    auVar21._0_8_ = param_1[3] & 0xffffffff;
    auVar21._8_4_ = (int)((ulonglong)param_1[3] >> 0x20);
    auVar21._12_4_ = 0;
    auVar18._0_4_ = (float)(SUB168(auVar21 | _DAT_140de8130,0) - (double)DAT_140de8130);
    auVar18._4_4_ = (float)(SUB168(auVar21 | _DAT_140de8130,8) - DAT_140de8130._8_8_);
    auVar18._8_8_ = 0;
    auVar21 = divps(_DAT_140de3560,auVar18);
    auStack_f8 = ZEXT816(0);
    uVar12 = auVar21._0_8_;
    stack0xfffffffffffffef0 = 0;
    local_118._0_8_ = uVar12;
    local_108._8_8_ = 0;
    local_108._0_8_ = param_1[7];
    (**(code **)(*plVar8 + 0x80))(plVar8,param_1[0xc],local_118,0x30,0);
    lVar9 = FUN_1401a9cc0();
    local_120 = CONCAT71(local_120._1_7_,*(byte *)(lVar9 + 0x288));
    if ((*(byte *)(lVar9 + 0x288) & 1) == 0) {
      local_150 = 0;
    }
    else {
      lVar9 = FUN_1401a9cc0();
      local_150 = *(longlong *)(lVar9 + 0x290);
      lVar11 = FUN_1401a9e60();
      uVar3 = *(ulonglong *)(lVar11 + 0x28);
      lVar9 = lVar11;
      if ((uVar3 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar11,uVar3);
      }
      lVar2 = *(longlong *)(lVar11 + 0x48);
      uVar14 = (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar14) = 0xf;
      uVar15 = rdtsc();
      *(ulonglong *)(lVar2 + 1 + uVar14) =
           uVar15 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar15);
      *(undefined ***)(lVar2 + 9 + uVar14) = &PTR_s_PostFX_Bloom_Extract_140e48c58;
      *(ulonglong *)(lVar11 + 0x28) = uVar3 + 1;
    }
    pcVar27 = "(anonymous namespace)::execute_bloom";
    pcVar25 = "/opt/actions-runner/_work/Platform/Platform/graphics/intern/post_fx.cpp";
    FUN_1401a3690(local_1a0,*param_1,"PostFX Bloom Extract",0x1f5,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/post_fx.cpp",
                  "(anonymous namespace)::execute_bloom");
    plVar8 = local_158;
    uVar16 = *(uint *)(param_1 + 3);
    uVar7 = *(uint *)((longlong)param_1 + 0x1c);
    lVar9 = param_1[0x12];
    local_428 = 0;
    uStack_420 = 0;
    uStack_41b = 0;
    uStack_418 = 0;
    memset(local_408,0,0x1d0);
    local_230 = 0;
    uStack_228 = 0;
    local_6c8 = (longlong *)param_1[0x20];
    fStack_6ac = (float)uVar7;
    fStack_6b4 = (float)uVar16;
    local_6a0 = 0;
    uStack_698 = 0;
    local_690 = 0;
    local_688 = 0;
    uStack_680 = 0;
    local_678 = 0;
    local_670 = 0;
    uStack_668 = 0;
    local_660 = 0;
    local_658 = 0;
    uStack_650 = 0;
    local_648 = 0;
    local_640 = 0;
    uStack_638 = 0;
    local_630 = 0;
    local_628 = 0;
    uStack_620 = 0;
    local_618 = 0;
    local_610 = 0;
    uStack_608 = 0;
    local_600 = 0;
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_5e8 = 0;
    local_5e0 = 0;
    uStack_5d8 = 0;
    local_5d0 = 0;
    local_5c8 = 0;
    uStack_5c0 = 0;
    local_5b8 = 0;
    local_5b0 = 0;
    uStack_5a8 = 0;
    local_5a0 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_588 = 0;
    local_580 = 0;
    uStack_578 = 0;
    local_570 = 0;
    local_568 = 0;
    uStack_560 = 0;
    local_558 = 0;
    local_550 = 0;
    uStack_548 = 0;
    local_540 = 0;
    local_520 = 0;
    uStack_518 = 0;
    local_510 = 0;
    uStack_508 = 0;
    local_500 = 0;
    uStack_4f8 = 0;
    local_4f0 = 0;
    uStack_4e8 = 0;
    local_4e0 = 0;
    uStack_4d8 = 0;
    local_4d0 = 0;
    uStack_4c8 = 0;
    local_4c0 = 0;
    uStack_4b8 = 0;
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_4a0 = 0;
    uStack_498 = 0;
    local_490 = 0;
    uStack_488 = 0;
    local_480 = 0;
    uStack_478 = 0;
    local_470 = 0;
    uStack_468 = 0;
    local_460 = 0;
    uStack_458 = 0;
    local_450 = 0;
    uStack_448 = 0;
    local_524 = (int)fStack_6ac;
    local_52c = (int)fStack_6b4;
    local_440 = 0;
    uStack_438 = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    uStack_6a7 = 0x3f800000000000;
    local_68c = 0x3f800000;
    local_674 = 0x3f800000;
    local_65c = 0x3f800000;
    local_644 = 0x3f800000;
    local_62c = 0x3f800000;
    local_614 = 0x3f800000;
    local_5fc = 0x3f800000;
    local_5e4 = 0x3f800000;
    local_5cc = 0x3f800000;
    local_5b4 = 0x3f800000;
    local_59c = 0x3f800000;
    local_584 = 0x3f800000;
    local_56c = 0x3f800000;
    local_554 = 0x3f800000;
    local_53c = 0x3f800000;
    local_538 = 1;
    local_530 = 0;
    local_528 = 0;
    local_430 = 1;
    local_410 = param_1[0x21];
    local_3d0 = 1;
    lStack_6c0 = lVar9;
    (**(code **)(*plVar8 + 0xb8))(plVar8,&local_6c8);
    local_d8 = (ulonglong *)((ulonglong)local_d8 & 0xffffffff00000000);
    local_e8 = (longlong *)0x100000003;
    puStack_e0 = (ulonglong *)0x0;
    (**(code **)(*plVar8 + 0xc0))(plVar8,&local_e8);
    FUN_1401a43a0(&uStack_180);
    FUN_1401a44e0(local_1a0);
    if (((local_120 & 1) != 0) &&
       (lVar9 = FUN_1401a9cc0(), *(longlong *)(lVar9 + 0x290) == local_150)) {
      lVar11 = FUN_1401a9e60();
      uVar3 = *(ulonglong *)(lVar11 + 0x28);
      lVar9 = lVar11;
      if ((uVar3 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar11,uVar3);
      }
      lVar2 = *(longlong *)(lVar11 + 0x48);
      uVar14 = (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar14) = 0x11;
      uVar15 = rdtsc();
      *(ulonglong *)(lVar2 + 1 + uVar14) =
           uVar15 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar15);
      *(ulonglong *)(lVar11 + 0x28) = uVar3 + 1;
    }
    uVar26 = (undefined4)((ulonglong)pcVar25 >> 0x20);
    uVar28 = (undefined4)((ulonglong)pcVar27 >> 0x20);
    uVar16 = 1;
    if (1 < (int)*(uint *)(param_1 + 9)) {
      uVar16 = *(uint *)(param_1 + 9);
    }
    local_21c = 8;
    if ((int)uVar16 < 8) {
      local_21c = uVar16;
    }
    if ((param_1[0x27] != 0) && (param_1[0x28] != 0)) {
      fVar1 = 0.25;
      if (0.25 <= *(float *)((longlong)param_1 + 0x44)) {
        fVar1 = *(float *)((longlong)param_1 + 0x44);
      }
      uVar16 = 0;
      while( true ) {
        uVar26 = (undefined4)((ulonglong)pcVar25 >> 0x20);
        uVar28 = (undefined4)((ulonglong)pcVar27 >> 0x20);
        if (local_21c <= uVar16) break;
        auStack_f8 = ZEXT816(0);
        local_108 = ZEXT816(0);
        local_118._8_4_ = auVar21._0_4_ * fVar1;
        fStack_10c = 0.0;
        (**(code **)(*local_158 + 0x80))(local_158,param_1[0xc],local_118,0x30,0);
        lVar9 = FUN_1401a9cc0();
        local_120 = CONCAT71(local_120._1_7_,*(byte *)(lVar9 + 0x288));
        if ((*(byte *)(lVar9 + 0x288) & 1) == 0) {
          local_150 = 0;
        }
        else {
          lVar9 = FUN_1401a9cc0();
          local_150 = *(longlong *)(lVar9 + 0x290);
          lVar11 = FUN_1401a9e60();
          uVar3 = *(ulonglong *)(lVar11 + 0x28);
          lVar9 = lVar11;
          if ((uVar3 & 0xffff) == 0) {
            lVar9 = FUN_1400637c0(lVar11,uVar3);
          }
          lVar2 = *(longlong *)(lVar11 + 0x48);
          uVar14 = (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5);
          *(undefined1 *)(lVar2 + uVar14) = 0xf;
          uVar15 = rdtsc();
          *(ulonglong *)(lVar2 + 1 + uVar14) =
               uVar15 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar15);
          *(undefined ***)(lVar2 + 9 + uVar14) = &PTR_s_PostFX_Bloom_Blur_H_140e48c78;
          *(ulonglong *)(lVar11 + 0x28) = uVar3 + 1;
        }
        uVar26 = 1;
        FUN_1401a3690(&local_6c8,*param_1,"PostFX Bloom Blur H",0x208,
                      "/opt/actions-runner/_work/Platform/Platform/graphics/intern/post_fx.cpp",
                      "(anonymous namespace)::execute_bloom");
        FUN_1404c1ab0(local_158,param_1 + 0x22,param_1[0x14],(int)param_1[3],
                      CONCAT44(uVar26,*(undefined4 *)((longlong)param_1 + 0x1c)),param_1[0x27]);
        FUN_1401a43a0(&uStack_6a8);
        FUN_1401a44e0(&local_6c8);
        if (((local_120 & 1) != 0) &&
           (lVar9 = FUN_1401a9cc0(), *(longlong *)(lVar9 + 0x290) == local_150)) {
          lVar11 = FUN_1401a9e60();
          uVar3 = *(ulonglong *)(lVar11 + 0x28);
          lVar9 = lVar11;
          if ((uVar3 & 0xffff) == 0) {
            lVar9 = FUN_1400637c0(lVar11,uVar3);
          }
          lVar2 = *(longlong *)(lVar11 + 0x48);
          uVar14 = (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5);
          *(undefined1 *)(lVar2 + uVar14) = 0x11;
          uVar15 = rdtsc();
          *(ulonglong *)(lVar2 + 1 + uVar14) =
               uVar15 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar15);
          *(ulonglong *)(lVar11 + 0x28) = uVar3 + 1;
        }
        auStack_f8 = ZEXT816(0);
        local_108 = ZEXT816(0);
        local_118._8_4_ = 0;
        fStack_10c = auVar21._4_4_ * fVar1;
        (**(code **)(*local_158 + 0x80))(local_158,param_1[0xc],local_118,0x30,0);
        lVar9 = FUN_1401a9cc0();
        local_120 = CONCAT71(local_120._1_7_,*(byte *)(lVar9 + 0x288));
        if ((*(byte *)(lVar9 + 0x288) & 1) == 0) {
          local_150 = 0;
        }
        else {
          lVar9 = FUN_1401a9cc0();
          local_150 = *(longlong *)(lVar9 + 0x290);
          lVar11 = FUN_1401a9e60();
          uVar3 = *(ulonglong *)(lVar11 + 0x28);
          lVar9 = lVar11;
          if ((uVar3 & 0xffff) == 0) {
            lVar9 = FUN_1400637c0(lVar11,uVar3);
          }
          lVar2 = *(longlong *)(lVar11 + 0x48);
          uVar14 = (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5);
          *(undefined1 *)(lVar2 + uVar14) = 0xf;
          uVar15 = rdtsc();
          *(ulonglong *)(lVar2 + 1 + uVar14) =
               uVar15 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar15);
          *(undefined ***)(lVar2 + 9 + uVar14) = &PTR_s_PostFX_Bloom_Blur_V_140e48c98;
          *(ulonglong *)(lVar11 + 0x28) = uVar3 + 1;
        }
        uVar26 = 1;
        FUN_1401a3690(&local_6c8,*param_1,"PostFX Bloom Blur V",0x215,
                      "/opt/actions-runner/_work/Platform/Platform/graphics/intern/post_fx.cpp",
                      "(anonymous namespace)::execute_bloom");
        pcVar27 = (char *)param_1[0x28];
        pcVar25 = (char *)CONCAT44(uVar26,*(undefined4 *)((longlong)param_1 + 0x1c));
        FUN_1404c1ab0(local_158,param_1 + 0x22,param_1[0x12],(int)param_1[3],pcVar25,pcVar27);
        FUN_1401a43a0(&uStack_6a8);
        FUN_1401a44e0(&local_6c8);
        if (((local_120 & 1) != 0) &&
           (lVar9 = FUN_1401a9cc0(), *(longlong *)(lVar9 + 0x290) == local_150)) {
          lVar11 = FUN_1401a9e60();
          uVar3 = *(ulonglong *)(lVar11 + 0x28);
          lVar9 = lVar11;
          if ((uVar3 & 0xffff) == 0) {
            lVar9 = FUN_1400637c0(lVar11,uVar3);
          }
          lVar2 = *(longlong *)(lVar11 + 0x48);
          uVar14 = (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5);
          *(undefined1 *)(lVar2 + uVar14) = 0x11;
          uVar15 = rdtsc();
          *(ulonglong *)(lVar2 + 1 + uVar14) =
               uVar15 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar15);
          *(ulonglong *)(lVar11 + 0x28) = uVar3 + 1;
        }
        uVar16 = uVar16 + 1;
      }
    }
    plVar8 = local_158;
    uVar16 = local_1ac;
    if (((local_b9 & 1) != 0) &&
       (lVar9 = FUN_1401a9cc0(), uVar16 = local_1ac, *(longlong *)(lVar9 + 0x290) == local_218)) {
      lVar11 = FUN_1401a9e60();
      uVar12 = *(ulonglong *)(lVar11 + 0x28);
      lVar9 = lVar11;
      if ((uVar12 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar11,uVar12);
      }
      lVar2 = *(longlong *)(lVar11 + 0x48);
      uVar15 = (ulonglong)(uint)((int)(uVar12 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar15) = 0x11;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar2 + 1 + uVar15) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
      *(ulonglong *)(lVar11 + 0x28) = uVar12 + 1;
      uVar16 = local_1ac;
    }
  }
  if ((char)uVar16 == '\0') {
    anonymous_namespace_execute_tonemap
              (param_1,plVar8,param_1 + 0x2e,local_210,CONCAT44(uVar26,local_1b4),
               CONCAT44(uVar28,local_1b0));
  }
  else {
    anonymous_namespace_execute_tonemap
              (param_1,plVar8,param_1 + 0x29,param_1[0x16],CONCAT44(uVar26,local_1b4),
               CONCAT44(uVar28,local_1b0));
    lVar9 = FUN_1401a9cc0();
    local_158 = (longlong *)CONCAT71(local_158._1_7_,*(byte *)(lVar9 + 0x288));
    if ((*(byte *)(lVar9 + 0x288) & 1) == 0) {
      local_120 = 0;
    }
    else {
      lVar9 = FUN_1401a9cc0();
      local_120 = *(longlong *)(lVar9 + 0x290);
      lVar11 = FUN_1401a9e60();
      uVar12 = *(ulonglong *)(lVar11 + 0x28);
      lVar9 = lVar11;
      if ((uVar12 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar11,uVar12);
      }
      lVar2 = *(longlong *)(lVar11 + 0x48);
      uVar15 = (ulonglong)(uint)((int)(uVar12 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar15) = 0xf;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar2 + 1 + uVar15) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
      *(undefined ***)(lVar2 + 9 + uVar15) = &PTR_s_PostFX_SMAA_140e48cd8;
      *(ulonglong *)(lVar11 + 0x28) = uVar12 + 1;
    }
    uVar12 = param_1[2];
    local_6c8 = (longlong *)0x0;
    lStack_6c0 = 0;
    local_148 = (longlong *)0xffffffff00000000;
    puStack_140 = (ulonglong *)0xffffffff00000000;
    (**(code **)(*plVar8 + 0x40))(plVar8,param_1[0x19],&local_148,&local_6c8);
    local_6c8 = (longlong *)0x0;
    lStack_6c0 = 0;
    local_1e8 = (longlong *)0xffffffff00000000;
    puStack_1e0 = (ulonglong *)0xffffffff00000000;
    (**(code **)(*plVar8 + 0x40))(plVar8,param_1[0x1b],&local_1e8,&local_6c8);
    auStack_f8._0_12_ = ZEXT812(0);
    auStack_f8._12_4_ = 0;
    auVar22._0_8_ = uVar12 & 0xffffffff;
    auVar22._8_4_ = (int)(uVar12 >> 0x20);
    auVar22._12_4_ = 0;
    dVar20 = SUB168(auVar22 | _DAT_140de8130,0) - (double)DAT_140de8130;
    dVar24 = SUB168(auVar22 | _DAT_140de8130,8) - DAT_140de8130._8_8_;
    auVar23._0_4_ = (float)dVar20;
    auVar23._4_4_ = (float)dVar24;
    auVar23._8_8_ = 0;
    auVar21 = divps(_DAT_140de3560,auVar23);
    uVar12 = auVar21._0_8_;
    stack0xfffffffffffffef0 = 0;
    local_118._0_8_ = uVar12;
    local_108._4_8_ = auStack_f8._4_8_;
    local_108._0_4_ = (int)param_1[5];
    local_108._12_4_ = 0;
    (**(code **)(*plVar8 + 0x80))(plVar8,param_1[0xc],local_118,0x30,0);
    FUN_1401a3690(local_1a0,*param_1,"PostFX SMAA Edge",0x23f,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/post_fx.cpp",
                  "(anonymous namespace)::execute_smaa");
    lVar9 = param_1[0x1a];
    local_428 = 0;
    uStack_420 = 0;
    uStack_41b = 0;
    uStack_418 = 0;
    memset(local_408,0,0x1d0);
    local_230 = 0;
    uStack_228 = 0;
    local_6c8 = (longlong *)param_1[0x3b];
    local_6a0 = 0;
    uStack_698 = 0;
    local_690 = 0;
    local_688 = 0;
    uStack_680 = 0;
    local_678 = 0;
    local_670 = 0;
    uStack_668 = 0;
    local_660 = 0;
    local_658 = 0;
    uStack_650 = 0;
    local_648 = 0;
    local_640 = 0;
    uStack_638 = 0;
    local_630 = 0;
    local_628 = 0;
    uStack_620 = 0;
    local_618 = 0;
    local_610 = 0;
    uStack_608 = 0;
    local_600 = 0;
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_5e8 = 0;
    local_5e0 = 0;
    uStack_5d8 = 0;
    local_5d0 = 0;
    local_5c8 = 0;
    uStack_5c0 = 0;
    local_5b8 = 0;
    local_5b0 = 0;
    uStack_5a8 = 0;
    local_5a0 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_588 = 0;
    local_580 = 0;
    uStack_578 = 0;
    local_570 = 0;
    local_568 = 0;
    uStack_560 = 0;
    local_558 = 0;
    local_550 = 0;
    uStack_548 = 0;
    local_540 = 0;
    local_520 = 0;
    uStack_518 = 0;
    local_510 = 0;
    uStack_508 = 0;
    local_500 = 0;
    uStack_4f8 = 0;
    local_4f0 = 0;
    uStack_4e8 = 0;
    local_4e0 = 0;
    uStack_4d8 = 0;
    local_4d0 = 0;
    uStack_4c8 = 0;
    local_4c0 = 0;
    uStack_4b8 = 0;
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_4a0 = 0;
    uStack_498 = 0;
    local_490 = 0;
    uStack_488 = 0;
    local_480 = 0;
    uStack_478 = 0;
    local_470 = 0;
    uStack_468 = 0;
    local_460 = 0;
    uStack_458 = 0;
    local_450 = 0;
    uStack_448 = 0;
    iVar13 = (int)dVar24;
    iVar17 = (int)dVar20;
    local_440 = 0;
    uStack_438 = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    uStack_6a7 = 0x3f800000000000;
    local_68c = 0x3f800000;
    local_674 = 0x3f800000;
    local_65c = 0x3f800000;
    local_644 = 0x3f800000;
    local_62c = 0x3f800000;
    local_614 = 0x3f800000;
    local_5fc = 0x3f800000;
    local_5e4 = 0x3f800000;
    local_5cc = 0x3f800000;
    local_5b4 = 0x3f800000;
    local_59c = 0x3f800000;
    local_584 = 0x3f800000;
    local_56c = 0x3f800000;
    local_554 = 0x3f800000;
    local_53c = 0x3f800000;
    local_538 = 1;
    local_530 = 0;
    local_528 = 0;
    local_430 = 1;
    local_410 = param_1[0x3c];
    local_3d0 = 1;
    lStack_6c0 = lVar9;
    fStack_6b4 = auVar23._0_4_;
    fStack_6ac = auVar23._4_4_;
    local_52c = iVar17;
    local_524 = iVar13;
    (**(code **)(*plVar8 + 0xb8))(plVar8,&local_6c8);
    local_d8 = (ulonglong *)((ulonglong)local_d8 & 0xffffffff00000000);
    local_e8 = (longlong *)0x100000003;
    puStack_e0 = (ulonglong *)0x0;
    (**(code **)(*plVar8 + 0xc0))(plVar8,&local_e8);
    FUN_1401a43a0(&uStack_180);
    FUN_1401a44e0(local_1a0);
    local_108 = ZEXT816(0);
    stack0xfffffffffffffef0 = 0;
    uVar16 = 1;
    if (1 < (int)*(float *)((longlong)param_1 + 0x2c)) {
      uVar16 = (int)*(float *)((longlong)param_1 + 0x2c);
    }
    uVar7 = 0x20;
    if ((int)uVar16 < 0x20) {
      uVar7 = uVar16;
    }
    auStack_f8 = ZEXT416(uVar7);
    (**(code **)(*plVar8 + 0x80))(plVar8,param_1[0xc],local_118,0x30,0);
    FUN_1401a3690(local_1a0,*param_1,"PostFX SMAA Blend",0x24b,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/post_fx.cpp",
                  "(anonymous namespace)::execute_smaa");
    lVar9 = param_1[0x1c];
    local_428 = 0;
    uStack_420 = 0;
    uStack_41b = 0;
    uStack_418 = 0;
    memset(local_408,0,0x1d0);
    local_230 = 0;
    uStack_228 = 0;
    local_6c8 = (longlong *)param_1[0x40];
    local_6a0 = 0;
    uStack_698 = 0;
    local_690 = 0;
    local_688 = 0;
    uStack_680 = 0;
    local_678 = 0;
    local_670 = 0;
    uStack_668 = 0;
    local_660 = 0;
    local_658 = 0;
    uStack_650 = 0;
    local_648 = 0;
    local_640 = 0;
    uStack_638 = 0;
    local_630 = 0;
    local_628 = 0;
    uStack_620 = 0;
    local_618 = 0;
    local_610 = 0;
    uStack_608 = 0;
    local_600 = 0;
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_5e8 = 0;
    local_5e0 = 0;
    uStack_5d8 = 0;
    local_5d0 = 0;
    local_5c8 = 0;
    uStack_5c0 = 0;
    local_5b8 = 0;
    local_5b0 = 0;
    uStack_5a8 = 0;
    local_5a0 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_588 = 0;
    local_580 = 0;
    uStack_578 = 0;
    local_570 = 0;
    local_568 = 0;
    uStack_560 = 0;
    local_558 = 0;
    local_550 = 0;
    uStack_548 = 0;
    local_540 = 0;
    local_520 = 0;
    uStack_518 = 0;
    local_510 = 0;
    uStack_508 = 0;
    local_500 = 0;
    uStack_4f8 = 0;
    local_4f0 = 0;
    uStack_4e8 = 0;
    local_4e0 = 0;
    uStack_4d8 = 0;
    local_4d0 = 0;
    uStack_4c8 = 0;
    local_4c0 = 0;
    uStack_4b8 = 0;
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_4a0 = 0;
    uStack_498 = 0;
    local_490 = 0;
    uStack_488 = 0;
    local_480 = 0;
    uStack_478 = 0;
    local_470 = 0;
    uStack_468 = 0;
    local_460 = 0;
    uStack_458 = 0;
    local_450 = 0;
    uStack_448 = 0;
    local_440 = 0;
    uStack_438 = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    uStack_6a7 = 0x3f800000000000;
    local_68c = 0x3f800000;
    local_674 = 0x3f800000;
    local_65c = 0x3f800000;
    local_644 = 0x3f800000;
    local_62c = 0x3f800000;
    local_614 = 0x3f800000;
    local_5fc = 0x3f800000;
    local_5e4 = 0x3f800000;
    local_5cc = 0x3f800000;
    local_5b4 = 0x3f800000;
    local_59c = 0x3f800000;
    local_584 = 0x3f800000;
    local_56c = 0x3f800000;
    local_554 = 0x3f800000;
    local_53c = 0x3f800000;
    local_538 = 1;
    local_530 = 0;
    local_528 = 0;
    local_430 = 1;
    local_410 = param_1[0x41];
    local_3d0 = 1;
    lStack_6c0 = lVar9;
    fStack_6b4 = auVar23._0_4_;
    fStack_6ac = auVar23._4_4_;
    local_52c = iVar17;
    local_524 = iVar13;
    (**(code **)(*plVar8 + 0xb8))(plVar8,&local_6c8);
    local_d8 = (ulonglong *)((ulonglong)local_d8 & 0xffffffff00000000);
    local_e8 = (longlong *)0x100000003;
    puStack_e0 = (ulonglong *)0x0;
    (**(code **)(*plVar8 + 0xc0))(plVar8,&local_e8);
    FUN_1401a43a0(&uStack_180);
    FUN_1401a44e0(local_1a0);
    auStack_f8 = ZEXT816(0);
    stack0xfffffffffffffef0 = 0;
    fVar1 = *(float *)(param_1 + 6);
    fVar19 = 1.0;
    if ((fVar1 <= 1.0) && (fVar19 = 0.0, 0.0 <= fVar1)) {
      fVar19 = fVar1;
    }
    local_108 = ZEXT416((uint)fVar19);
    (**(code **)(*plVar8 + 0x80))(plVar8,param_1[0xc],local_118,0x30,0);
    FUN_1401a3690(local_1a0,*param_1,"PostFX SMAA Neighborhood",599,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/post_fx.cpp",
                  "(anonymous namespace)::execute_smaa");
    lVar9 = param_1[0x18];
    local_428 = 0;
    uStack_420 = 0;
    uStack_41b = 0;
    uStack_418 = 0;
    memset(local_408,0,0x1d0);
    local_230 = 0;
    uStack_228 = 0;
    local_6c8 = (longlong *)param_1[0x45];
    local_6a0 = 0;
    uStack_698 = 0;
    local_690 = 0;
    local_688 = 0;
    uStack_680 = 0;
    local_678 = 0;
    local_670 = 0;
    uStack_668 = 0;
    local_660 = 0;
    local_658 = 0;
    uStack_650 = 0;
    local_648 = 0;
    local_640 = 0;
    uStack_638 = 0;
    local_630 = 0;
    local_628 = 0;
    uStack_620 = 0;
    local_618 = 0;
    local_610 = 0;
    uStack_608 = 0;
    local_600 = 0;
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_5e8 = 0;
    local_5e0 = 0;
    uStack_5d8 = 0;
    local_5d0 = 0;
    local_5c8 = 0;
    uStack_5c0 = 0;
    local_5b8 = 0;
    local_5b0 = 0;
    uStack_5a8 = 0;
    local_5a0 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_588 = 0;
    local_580 = 0;
    uStack_578 = 0;
    local_570 = 0;
    local_568 = 0;
    uStack_560 = 0;
    local_558 = 0;
    local_550 = 0;
    uStack_548 = 0;
    local_540 = 0;
    local_520 = 0;
    uStack_518 = 0;
    local_510 = 0;
    uStack_508 = 0;
    local_500 = 0;
    uStack_4f8 = 0;
    local_4f0 = 0;
    uStack_4e8 = 0;
    local_4e0 = 0;
    uStack_4d8 = 0;
    local_4d0 = 0;
    uStack_4c8 = 0;
    local_4c0 = 0;
    uStack_4b8 = 0;
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_4a0 = 0;
    uStack_498 = 0;
    local_490 = 0;
    uStack_488 = 0;
    local_480 = 0;
    uStack_478 = 0;
    local_470 = 0;
    uStack_468 = 0;
    local_460 = 0;
    uStack_458 = 0;
    local_450 = 0;
    uStack_448 = 0;
    local_440 = 0;
    uStack_438 = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    uStack_6a7 = 0x3f800000000000;
    local_68c = 0x3f800000;
    local_674 = 0x3f800000;
    local_65c = 0x3f800000;
    local_644 = 0x3f800000;
    local_62c = 0x3f800000;
    local_614 = 0x3f800000;
    local_5fc = 0x3f800000;
    local_5e4 = 0x3f800000;
    local_5cc = 0x3f800000;
    local_5b4 = 0x3f800000;
    local_59c = 0x3f800000;
    local_584 = 0x3f800000;
    local_56c = 0x3f800000;
    local_554 = 0x3f800000;
    local_53c = 0x3f800000;
    local_538 = 1;
    local_530 = 0;
    local_528 = 0;
    local_430 = 1;
    local_410 = param_1[0x46];
    local_3d0 = 1;
    lStack_6c0 = lVar9;
    fStack_6b4 = auVar23._0_4_;
    fStack_6ac = auVar23._4_4_;
    local_52c = iVar17;
    local_524 = iVar13;
    (**(code **)(*plVar8 + 0xb8))(plVar8,&local_6c8);
    local_d8 = (ulonglong *)((ulonglong)local_d8 & 0xffffffff00000000);
    local_e8 = (longlong *)0x100000003;
    puStack_e0 = (ulonglong *)0x0;
    (**(code **)(*plVar8 + 0xc0))(plVar8,&local_e8);
    FUN_1401a43a0(&uStack_180);
    FUN_1401a44e0(local_1a0);
    auStack_f8 = ZEXT816(0);
    local_108 = ZEXT816(0);
    stack0xfffffffffffffef0 = 0;
    (**(code **)(*plVar8 + 0x80))(plVar8,param_1[0xc],local_118,0x30,0);
    FUN_1401a3690(local_1a0,*param_1,"PostFX SMAA Copy",0x261,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/post_fx.cpp",
                  "(anonymous namespace)::execute_smaa");
    local_428 = 0;
    uStack_420 = 0;
    uStack_41b = 0;
    uStack_418 = 0;
    memset(local_408,0,0x1d0);
    local_230 = 0;
    uStack_228 = 0;
    local_6c8 = (longlong *)param_1[0x36];
    lStack_6c0 = local_210;
    local_6a0 = 0;
    uStack_698 = 0;
    local_690 = 0;
    local_688 = 0;
    uStack_680 = 0;
    local_678 = 0;
    local_670 = 0;
    uStack_668 = 0;
    local_660 = 0;
    local_658 = 0;
    uStack_650 = 0;
    local_648 = 0;
    local_640 = 0;
    uStack_638 = 0;
    local_630 = 0;
    local_628 = 0;
    uStack_620 = 0;
    local_618 = 0;
    local_610 = 0;
    uStack_608 = 0;
    local_600 = 0;
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_5e8 = 0;
    local_5e0 = 0;
    uStack_5d8 = 0;
    local_5d0 = 0;
    local_5c8 = 0;
    uStack_5c0 = 0;
    local_5b8 = 0;
    local_5b0 = 0;
    uStack_5a8 = 0;
    local_5a0 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_588 = 0;
    local_580 = 0;
    uStack_578 = 0;
    local_570 = 0;
    local_568 = 0;
    uStack_560 = 0;
    local_558 = 0;
    local_550 = 0;
    uStack_548 = 0;
    local_540 = 0;
    local_520 = 0;
    uStack_518 = 0;
    local_510 = 0;
    uStack_508 = 0;
    local_500 = 0;
    uStack_4f8 = 0;
    local_4f0 = 0;
    uStack_4e8 = 0;
    local_4e0 = 0;
    uStack_4d8 = 0;
    local_4d0 = 0;
    uStack_4c8 = 0;
    local_4c0 = 0;
    uStack_4b8 = 0;
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_4a0 = 0;
    uStack_498 = 0;
    local_490 = 0;
    uStack_488 = 0;
    local_480 = 0;
    uStack_478 = 0;
    local_470 = 0;
    uStack_468 = 0;
    local_460 = 0;
    uStack_458 = 0;
    local_450 = 0;
    uStack_448 = 0;
    local_440 = 0;
    uStack_438 = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    uStack_6a7 = 0x3f800000000000;
    local_68c = 0x3f800000;
    local_674 = 0x3f800000;
    local_65c = 0x3f800000;
    local_644 = 0x3f800000;
    local_62c = 0x3f800000;
    local_614 = 0x3f800000;
    local_5fc = 0x3f800000;
    local_5e4 = 0x3f800000;
    local_5cc = 0x3f800000;
    local_5b4 = 0x3f800000;
    local_59c = 0x3f800000;
    local_584 = 0x3f800000;
    local_56c = 0x3f800000;
    local_554 = 0x3f800000;
    local_53c = 0x3f800000;
    local_538 = 1;
    local_530 = 0;
    local_528 = 0;
    local_430 = 1;
    local_410 = param_1[0x37];
    local_3d0 = 1;
    fStack_6b4 = auVar23._0_4_;
    fStack_6ac = auVar23._4_4_;
    local_52c = iVar17;
    local_524 = iVar13;
    (**(code **)(*plVar8 + 0xb8))(plVar8,&local_6c8);
    local_d8 = (ulonglong *)((ulonglong)local_d8 & 0xffffffff00000000);
    local_e8 = (longlong *)0x100000003;
    puStack_e0 = (ulonglong *)0x0;
    (**(code **)(*plVar8 + 0xc0))(plVar8,&local_e8);
    FUN_1401a43a0(&uStack_180);
    FUN_1401a44e0(local_1a0);
    if ((((ulonglong)local_158 & 1) != 0) &&
       (lVar9 = FUN_1401a9cc0(), *(longlong *)(lVar9 + 0x290) == local_120)) {
      lVar11 = FUN_1401a9e60();
      uVar12 = *(ulonglong *)(lVar11 + 0x28);
      lVar9 = lVar11;
      if ((uVar12 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar11,uVar12);
      }
      lVar2 = *(longlong *)(lVar11 + 0x48);
      uVar15 = (ulonglong)(uint)((int)(uVar12 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar15) = 0x11;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar2 + 1 + uVar15) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
      *(ulonglong *)(lVar11 + 0x28) = uVar12 + 1;
    }
  }
                    /* WARNING: Read-only address (ram,0x000140de3560) is written */
                    /* WARNING: Read-only address (ram,0x000140de8130) is written */
  return;
}

