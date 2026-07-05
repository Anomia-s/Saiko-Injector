/**
 * Function: scene_color_hdr_resolve
 * Address:  14021aeb0
 * Signature: undefined scene_color_hdr_resolve(void)
 * Body size: 2020 bytes
 */


ulonglong scene_color_hdr_resolve(longlong *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  char cVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  byte bVar17;
  uint uVar18;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined8 local_21c;
  uint local_214;
  undefined4 local_210;
  undefined1 local_20c;
  byte local_20b;
  undefined7 local_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined1 local_1f9;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8;
  undefined4 local_1e7;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8;
  undefined4 local_1c4;
  undefined1 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  uint local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  byte local_19b;
  undefined4 *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  ulonglong local_180;
  undefined1 local_178;
  undefined4 local_177;
  undefined4 local_170;
  undefined2 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined4 local_154;
  undefined1 local_150;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  ulonglong uStack_130;
  undefined7 local_128;
  undefined4 uStack_121;
  undefined1 uStack_11d;
  undefined4 uStack_11c;
  undefined8 local_118;
  ulonglong local_110;
  undefined1 local_108;
  undefined4 local_107;
  undefined4 local_100;
  undefined2 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  longlong **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined4 local_97;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined1 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_14021c4c0();
  if (((param_1[3] == 0) || ((longlong *)param_1[2] == (longlong *)0x0)) ||
     (iVar11 = (**(code **)(*(longlong *)param_1[2] + 0x38))(), iVar11 == 0)) {
    uVar13 = 0;
    goto LAB_14021b098;
  }
  uVar13 = 0;
  plVar12 = (longlong *)(**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],0);
  if (*plVar12 == 0) goto LAB_14021b098;
  uVar2 = *(uint *)((longlong)param_1 + 0xbc);
  uVar18 = 1;
  if (1 < uVar2) {
    uVar18 = uVar2;
  }
  bVar17 = (1 < uVar2) << 2;
  local_20b = bVar17 | 3;
  local_220 = 1;
  local_210 = 0;
  local_1f0 = 0xf;
  local_1e8 = 1;
  local_1e0 = 0;
  local_1dc = 0;
  local_1e7 = 1;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_228 = (undefined4)*param_1;
  local_224 = *(undefined4 *)((longlong)param_1 + 4);
  local_21c = 0x100000001;
  local_20c = 0x26;
  local_1f8 = 0xf;
  local_208 = 0x4320656e656353;
  uStack_201 = 0x6f;
  uStack_200 = 0x52444820726f6c;
  local_1f9 = 0;
  local_1c4 = 0x80;
  local_1c0 = 1;
  local_1b0 = 0x100000001;
  local_1a0 = 0;
  local_198 = (undefined4 *)0x0;
  uStack_190 = 0;
  local_188 = 0;
  local_180 = 0xf;
  local_178 = 1;
  local_170 = 0;
  local_16c = 0;
  local_154 = 0;
  local_150 = 0;
  local_177 = 1;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_1a8 = 1;
  local_19c = 0x21;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  uStack_13c = 0;
  local_214 = uVar18;
  local_1b8 = local_228;
  local_1b4 = local_224;
  local_1a4 = uVar18;
  local_19b = local_20b;
  plVar12 = (longlong *)FUN_140b65d30(0x20);
  uStack_138 = 0x10;
  uStack_134 = 0;
  uStack_130 = 0x1f;
  *(undefined4 *)plVar12 = 0x6e656353;
  builtin_strncpy((char *)((longlong)plVar12 + 4),"e En",4);
  *(undefined4 *)(plVar12 + 1) = 0x79746974;
  builtin_strncpy((char *)((longlong)plVar12 + 0xc)," IDs",4);
  *(char *)(plVar12 + 2) = '\0';
  local_148 = plVar12;
  if (local_180 < 0x10) {
    FUN_1400069b0(&local_198,0x10);
  }
  else {
    local_188 = 0x10;
    uVar4 = *(undefined4 *)((longlong)plVar12 + 4);
    lVar16 = plVar12[1];
    uVar5 = *(undefined4 *)((longlong)plVar12 + 0xc);
    *local_198 = (int)*plVar12;
    local_198[1] = uVar4;
    local_198[2] = (int)lVar16;
    local_198[3] = uVar5;
    *(undefined1 *)(local_198 + 4) = 0;
  }
  local_154 = 0x80;
  local_150 = 1;
  thunk_FUN_140b68ba8(plVar12,0x20);
  uStack_140 = 1;
  uStack_11c = 0;
  local_110 = 0xf;
  local_108 = 1;
  local_100 = 0;
  local_fc = 0;
  local_107 = 0x10001;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_148 = (longlong *)*param_1;
  uStack_13c = 1;
  uStack_138 = 1;
  uStack_130 = CONCAT35(CONCAT21((short)(uStack_130 >> 0x30),bVar17),0x3600000000) | 0x30000000000;
  local_118 = 0xb;
  local_128 = 0x4420656e656353;
  uStack_121 = 0x68747065;
  uStack_11d = 0;
  local_e4 = 0x100;
  local_e0 = 1;
  uStack_134 = uVar18;
  (**(code **)(*(longlong *)param_1[3] + 0x30))((longlong *)param_1[3],&local_d8,&local_228);
  pplVar8 = local_d8;
  local_d8 = (longlong **)0x0;
  plVar3 = (longlong *)param_1[0xc];
  param_1[0xc] = (longlong)pplVar8;
  if ((plVar3 != (longlong *)0x0) &&
     ((**(code **)(*plVar3 + 0x10))(), pplVar8 = local_d8, local_d8 != (longlong **)0x0)) {
    local_d8 = (longlong **)0x0;
    (*(code *)(*pplVar8)[2])();
  }
  (**(code **)(*(longlong *)param_1[3] + 0x30))((longlong *)param_1[3],&local_d8,&local_1b8);
  pplVar8 = local_d8;
  local_d8 = (longlong **)0x0;
  plVar3 = (longlong *)param_1[0xb];
  param_1[0xb] = (longlong)pplVar8;
  if ((plVar3 != (longlong *)0x0) &&
     ((**(code **)(*plVar3 + 0x10))(), pplVar8 = local_d8, local_d8 != (longlong **)0x0)) {
    local_d8 = (longlong **)0x0;
    (*(code *)(*pplVar8)[2])();
  }
  (**(code **)(*(longlong *)param_1[3] + 0x30))((longlong *)param_1[3],&local_d8,&local_148);
  pplVar8 = local_d8;
  local_d8 = (longlong **)0x0;
  plVar3 = (longlong *)param_1[10];
  param_1[10] = (longlong)pplVar8;
  if ((plVar3 != (longlong *)0x0) &&
     ((**(code **)(*plVar3 + 0x10))(), pplVar8 = local_d8, local_d8 != (longlong **)0x0)) {
    local_d8 = (longlong **)0x0;
    (*(code *)(*pplVar8)[2])();
  }
  if (1 < uVar2) {
    local_c0 = 0;
    local_b8 = (undefined4 *)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0xf;
    local_98 = 1;
    local_90 = 0;
    local_8c = 0;
    local_74 = 0;
    local_70 = 0;
    local_97 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_d8 = (longlong **)*param_1;
    local_d0 = 1;
    uStack_cc = 1;
    uStack_c8 = 1;
    uStack_c4 = 1;
    local_bc = 0x326;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    plVar12 = (longlong *)FUN_140b65d30(0x20);
    local_58 = 0x17;
    uStack_50 = 0x1f;
    *(undefined4 *)plVar12 = 0x6e656353;
    builtin_strncpy((char *)((longlong)plVar12 + 4),"e Co",4);
    *(undefined4 *)(plVar12 + 1) = 0x20726f6c;
    builtin_strncpy((char *)((longlong)plVar12 + 0xc),"HDR ",4);
    builtin_strncpy((char *)((longlong)plVar12 + 0xf)," Resolve",8);
    *(char *)((longlong)plVar12 + 0x17) = '\0';
    if (local_a0 < 0x17) {
      local_68 = plVar12;
      FUN_1400069b0(&local_b8,0x17);
    }
    else {
      local_a8 = 0x17;
      lVar16 = *plVar12;
      uVar4 = *(undefined4 *)((longlong)plVar12 + 4);
      lVar6 = plVar12[1];
      uVar5 = *(undefined4 *)((longlong)plVar12 + 0xc);
      lVar7 = plVar12[2];
      uVar1 = *(undefined2 *)((longlong)plVar12 + 0x14);
      *(char *)((longlong)local_b8 + 0x16) = *(char *)((longlong)plVar12 + 0x16);
      *(undefined2 *)(local_b8 + 5) = uVar1;
      local_b8[4] = (int)lVar7;
      *local_b8 = (int)lVar16;
      local_b8[1] = uVar4;
      local_b8[2] = (int)lVar6;
      local_b8[3] = uVar5;
      *(undefined1 *)((longlong)local_b8 + 0x17) = 0;
      local_68 = plVar12;
    }
    local_74 = 0x20;
    local_70 = 1;
    thunk_FUN_140b68ba8(plVar12,0x20);
    (**(code **)(*(longlong *)param_1[3] + 0x30))((longlong *)param_1[3],&local_68,&local_d8);
    plVar9 = local_68;
    local_68 = (longlong *)0x0;
    plVar3 = (longlong *)param_1[0xd];
    param_1[0xd] = (longlong)plVar9;
    if ((plVar3 != (longlong *)0x0) &&
       ((**(code **)(*plVar3 + 0x10))(), plVar3 = local_68, local_68 != (longlong *)0x0)) {
      local_68 = (longlong *)0x0;
      (**(code **)(*plVar3 + 0x10))();
    }
    if (0xf < local_a0) {
      uVar13 = local_a0 + 1;
      puVar15 = local_b8;
      if (0xfff < uVar13) {
        puVar15 = *(undefined4 **)(local_b8 + -2);
        if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)puVar15))) goto LAB_14021b67b;
        uVar13 = local_a0 + 0x28;
      }
      thunk_FUN_140b68ba8(puVar15,uVar13);
    }
  }
  if ((((param_1[0xc] == 0) || (param_1[0xb] == 0)) || (param_1[10] == 0)) ||
     ((1 < uVar2 && (param_1[0xd] == 0)))) {
    if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140df4e20),
       DAT_14151e360 != 0)) {
      lVar16 = DAT_14151e360;
      local_68 = (longlong *)((ulonglong)local_68 & 0xffffffffffffff00);
      local_d8 = &local_68;
      cVar10 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_d8);
      if (cVar10 == '\0') {
        do {
          local_d8 = (longlong **)0x64;
          FUN_140008100(&local_d8);
          local_d8 = &local_68;
          cVar10 = FUN_140b53dc0(lVar16,&PTR_DAT_140dc1aa0,&local_d8);
        } while (cVar10 == '\0');
      }
      if (((ulonglong)local_68 & 1) == 0) {
        do {
          local_d8 = (longlong **)0x64;
          FUN_140008100(&local_d8);
        } while (((ulonglong)local_68 & 1) == 0);
      }
    }
LAB_14021b5ad:
    FUN_14021c4c0(param_1);
    uVar13 = 0;
  }
  else {
    cVar10 = FUN_14021fdd0(param_1);
    uVar13 = CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
    if (cVar10 == '\0') goto LAB_14021b5ad;
  }
  if (0xf < local_110) {
    lVar6 = CONCAT17((undefined1)uStack_121,local_128);
    uVar14 = local_110 + 1;
    lVar16 = lVar6;
    if (0xfff < uVar14) {
      lVar16 = *(longlong *)(lVar6 + -8);
      if (0x1f < (ulonglong)((lVar6 + -8) - lVar16)) goto LAB_14021b67b;
      uVar14 = local_110 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar16,uVar14);
  }
  if (0xf < local_180) {
    uVar14 = local_180 + 1;
    puVar15 = local_198;
    if (0xfff < uVar14) {
      puVar15 = *(undefined4 **)(local_198 + -2);
      if (0x1f < (ulonglong)((longlong)local_198 + (-8 - (longlong)puVar15))) goto LAB_14021b67b;
      uVar14 = local_180 + 0x28;
    }
    thunk_FUN_140b68ba8(puVar15,uVar14);
  }
  if (0xf < local_1f0) {
    lVar6 = CONCAT17(uStack_201,local_208);
    uVar14 = local_1f0 + 1;
    lVar16 = lVar6;
    if (0xfff < uVar14) {
      lVar16 = *(longlong *)(lVar6 + -8);
      if (0x1f < (ulonglong)((lVar6 + -8) - lVar16)) {
LAB_14021b67b:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar14 = local_1f0 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar16,uVar14);
  }
LAB_14021b098:
  return uVar13 & 0xffffffff;
}

