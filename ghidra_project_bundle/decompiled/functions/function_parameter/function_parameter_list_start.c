/**
 * Function: function_parameter_list_start
 * Address:  1407918b0
 * Signature: undefined function_parameter_list_start(void)
 * Body size: 2158 bytes
 */


undefined8 * function_parameter_list_start(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *_Str1;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  AstTypeFunction *this;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  int local_16c;
  undefined8 local_168;
  undefined8 *local_160;
  ulonglong local_158;
  longlong local_150;
  longlong local_148;
  undefined8 *local_140;
  undefined8 local_138;
  longlong local_130;
  longlong *local_128;
  longlong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_100;
  longlong local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  AstTypePackExplicit *local_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  byte bStack_90;
  undefined7 uStack_8f;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_118 = *(undefined4 *)(param_1 + 0x84);
  uStack_114 = *(undefined4 *)(param_1 + 0x88);
  uStack_110 = *(undefined4 *)(param_1 + 0x8c);
  uStack_10c = *(undefined4 *)(param_1 + 0x90);
  local_160 = param_3;
  FUN_140787100();
  if (*(int *)(param_1 + 0x80) == 0x119) {
    local_d8 = *(undefined8 *)(param_1 + 0x98);
    local_d0 = *(undefined8 *)(param_1 + 0x84);
    local_c8 = *(undefined8 *)(param_1 + 0x8c);
    FUN_140787100(param_1);
    local_168 = *(undefined8 *)(param_1 + 0x84);
  }
  else {
    expected_identifier_when_parsing_s_got_s(param_1,"function name");
    local_168 = *(undefined8 *)(param_1 + 0x84);
    local_d8 = *(undefined8 *)(param_1 + 0x128);
    local_d0 = local_168;
    local_c8 = local_168;
  }
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_16c = *(int *)(param_1 + 0x80);
  if (local_16c == 0x28) {
    FUN_140787100(param_1);
  }
  else {
    FUN_14079c360(param_1,0x28,"function parameter list start");
  }
  local_100 = (longlong *)(param_1 + 0x298);
  local_f8 = (*(longlong *)(param_1 + 0x2a0) - *(longlong *)(param_1 + 0x298) >> 3) *
             -0x3333333333333333;
  local_f0 = 0;
  if (*(int *)(param_1 + 0x80) == 0x29) {
    uVar20 = 0;
    local_c0 = 0;
LAB_140791a43:
    FUN_140787100(param_1);
  }
  else {
    FUN_14078e590(param_1,&local_a8,&local_100,1,0,0,0);
    uVar20 = (ulonglong)bStack_90;
    local_c0 = local_a8;
    if (*(int *)(param_1 + 0x80) == 0x29) goto LAB_140791a43;
    expected_s_to_close_s_at_column_d_got_ss(param_1,0x29,&local_16c,0);
    FUN_14079c3d0(param_1,0x29);
  }
  puVar1 = (undefined8 *)(param_1 + 0x84);
  if (*(int *)(param_1 + 0x80) == 0x3a) {
LAB_140791a9a:
    FUN_140787100(param_1);
    uVar5 = *(undefined4 *)(param_1 + 0x114);
    local_b0 = (AstTypePackExplicit *)exceeded_allowed_recursion_depth_simplify_you(param_1);
    if (*(int *)(param_1 + 0x80) == 0x2c) {
      FUN_14078f3b0(param_1,puVar1,
                    "Expected a statement, got \',\'; did you forget to wrap the list of return types in parentheses?"
                   );
      FUN_140787100(param_1);
    }
    *(undefined4 *)(param_1 + 0x114) = uVar5;
    if (local_b0 == (AstTypePackExplicit *)0x0) goto LAB_140791aed;
  }
  else {
    if (*(int *)(param_1 + 0x80) == 0x107) {
      FUN_14078f3b0(param_1,puVar1,
                    "Function return type annotations are written after \':\' instead of \'->\'");
      goto LAB_140791a9a;
    }
LAB_140791aed:
    local_b0 = (AstTypePackExplicit *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x38);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    Luau::AstTypePackExplicit::AstTypePackExplicit(local_b0,puVar1,&local_a8);
  }
  uVar19 = local_f0;
  lVar18 = local_f8;
  plVar13 = local_100;
  local_b8 = *(longlong *)(param_1 + 0xa8);
  local_150 = *(longlong *)(param_1 + 0x300);
  local_148 = *(longlong *)(param_1 + 0x2f8);
  local_70 = local_150 - local_148;
  local_e0 = *(longlong *)(param_1 + 0x3c0) - *(longlong *)(param_1 + 0x3b8);
  local_158 = uVar20;
  local_68 = param_1;
  if (local_f0 != 0) {
    lVar16 = *local_100;
    _Str1 = *(char **)(lVar16 + local_f8 * 0x28);
    if (((_Str1 != (char *)0x0) && (iVar14 = strcmp(_Str1,"self"), iVar14 == 0)) &&
       (*(longlong *)(lVar16 + lVar18 * 0x28 + 0x18) == 0)) {
      local_120 = param_1 + 0x2f8;
      local_128 = (longlong *)(param_1 + 0x3b8);
      local_e8 = 0;
      lVar18 = lVar18 * 0x28;
      uVar23 = 0;
      uVar21 = 0;
      local_140 = param_2;
      for (uVar20 = 1; uVar20 < uVar19; uVar20 = uVar20 + 1) {
        lVar16 = *plVar13 + lVar18;
        local_a8 = *(longlong *)(lVar16 + uVar20 * 0x28);
        plVar2 = (longlong *)(lVar16 + 8 + uVar20 * 0x28);
        lVar16 = *plVar2;
        uVar5 = *(undefined4 *)((longlong)plVar2 + 4);
        uStack_a0 = *plVar2;
        local_88 = *plVar2;
        local_98 = plVar2[1];
        uStack_80 = plVar2[1];
        bStack_90 = 1;
        puVar6 = *(undefined4 **)(local_68 + 0x3c0);
        if (puVar6 == *(undefined4 **)(local_68 + 0x3c8)) {
          FUN_14019fd30(local_128,puVar6,&local_a8);
        }
        else {
          local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
          *(longlong *)(puVar6 + 4) = local_98;
          *(ulonglong *)(puVar6 + 6) = CONCAT71(uStack_8f,1);
          *puVar6 = (undefined4)local_a8;
          puVar6[1] = local_a8._4_4_;
          puVar6[2] = (int)lVar16;
          puVar6[3] = uVar5;
          *(longlong *)(local_68 + 0x3c0) = *(longlong *)(local_68 + 0x3c0) + 0x20;
        }
        lVar17 = *plVar13 + lVar18;
        lVar16 = *(longlong *)(lVar17 + 0x18 + uVar20 * 0x28);
        if (lVar16 == 0) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_88 = CONCAT44(uStack_114,local_118);
          uStack_80 = local_b8;
          local_138 = FUN_140792230(local_68,&local_88,&local_a8,
                                    "All declaration parameters aside from \'self\' must be annotated"
                                   );
          puVar1 = *(undefined8 **)(local_68 + 0x300);
          if (puVar1 == *(undefined8 **)(local_68 + 0x308)) {
            FUN_140029790(local_120,puVar1,&local_138);
          }
          else {
            *puVar1 = local_138;
            *(longlong *)(local_68 + 0x300) = *(longlong *)(local_68 + 0x300) + 8;
          }
        }
        else {
          plVar2 = *(longlong **)(local_68 + 0x300);
          if (plVar2 == *(longlong **)(local_68 + 0x308)) {
            FUN_140029790(local_120,plVar2,lVar17 + uVar20 * 0x28 + 0x18);
          }
          else {
            *plVar2 = lVar16;
            *(longlong *)(local_68 + 0x300) = *(longlong *)(local_68 + 0x300) + 8;
          }
        }
        uVar21 = uVar21 + 1;
        uVar23 = uVar23 + 1;
        local_e8 = CONCAT71((int7)((ulonglong)local_e8 >> 8),(char)local_e8 + '\x01');
      }
      if (((byte)local_158 & local_c0 == 0) != 0) {
        FUN_14078f3b0(local_68,&local_118,
                      "All declaration parameters aside from \'self\' must be annotated");
      }
      uVar15 = *(undefined8 *)(local_68 + 0xd8);
      if (uVar21 == 0) {
        local_88 = 0;
        uStack_80 = 0;
      }
      else {
        lVar18 = *local_128 + local_e0;
        local_88 = FUN_1407b5010(uVar15,uVar21 << 5);
        if (uVar21 == 1) {
          uVar20 = 0;
        }
        else {
          lVar16 = 0x20;
          uVar20 = 0;
          do {
            puVar1 = (undefined8 *)(lVar18 + -0x20 + lVar16);
            uVar10 = *puVar1;
            uVar11 = puVar1[1];
            puVar1 = (undefined8 *)(lVar18 + -0x10 + lVar16);
            uVar12 = puVar1[1];
            puVar3 = (undefined8 *)(local_88 + -0x10 + lVar16);
            *puVar3 = *puVar1;
            puVar3[1] = uVar12;
            puVar1 = (undefined8 *)(local_88 + -0x20 + lVar16);
            *puVar1 = uVar10;
            puVar1[1] = uVar11;
            puVar6 = (undefined4 *)(lVar18 + lVar16);
            uVar5 = puVar6[1];
            uVar7 = puVar6[2];
            uVar8 = puVar6[3];
            puVar1 = (undefined8 *)(lVar18 + 0x10 + lVar16);
            uVar10 = *puVar1;
            uVar11 = puVar1[1];
            puVar4 = (undefined4 *)(local_88 + lVar16);
            *puVar4 = *puVar6;
            puVar4[1] = uVar5;
            puVar4[2] = uVar7;
            puVar4[3] = uVar8;
            puVar1 = (undefined8 *)(local_88 + 0x10 + lVar16);
            *puVar1 = uVar10;
            puVar1[1] = uVar11;
            uVar20 = uVar20 + 2;
            lVar16 = lVar16 + 0x40;
          } while ((uVar23 & 0xfffffffffffffffe) != uVar20);
        }
        uStack_80 = uVar21;
        if ((uVar21 & 1) != 0) {
          lVar16 = uVar20 * 0x20;
          puVar6 = (undefined4 *)(lVar18 + lVar16);
          uVar5 = *puVar6;
          uVar7 = puVar6[1];
          uVar8 = puVar6[2];
          uVar9 = puVar6[3];
          puVar1 = (undefined8 *)(lVar18 + 0x10 + lVar16);
          uVar10 = puVar1[1];
          puVar3 = (undefined8 *)(local_88 + 0x10 + lVar16);
          *puVar3 = *puVar1;
          puVar3[1] = uVar10;
          puVar6 = (undefined4 *)(local_88 + lVar16);
          *puVar6 = uVar5;
          puVar6[1] = uVar7;
          puVar6[2] = uVar8;
          puVar6[3] = uVar9;
        }
      }
      if (uVar23 == 0) {
        local_a8 = 0;
        uStack_a0 = 0;
      }
      else {
        lVar18 = *(longlong *)(local_68 + 0x2f8);
        local_a8 = FUN_1407b5010(*(undefined8 *)(local_68 + 0xd8),uVar23 * 8);
        uStack_a0 = uVar23;
        if ((uVar21 < 10) || ((ulonglong)((local_148 + local_a8) - (local_150 + lVar18)) < 0x20)) {
          uVar20 = 0;
        }
        else {
          uVar20 = uVar21 & 0xfffffffffffffffc;
          uVar19 = 0;
          do {
            puVar4 = (undefined4 *)(local_70 + lVar18 + uVar19 * 8);
            uVar5 = puVar4[1];
            uVar7 = puVar4[2];
            uVar8 = puVar4[3];
            puVar1 = (undefined8 *)(local_70 + lVar18 + 0x10 + uVar19 * 8);
            uVar10 = *puVar1;
            uVar11 = puVar1[1];
            puVar6 = (undefined4 *)(local_a8 + uVar19 * 8);
            *puVar6 = *puVar4;
            puVar6[1] = uVar5;
            puVar6[2] = uVar7;
            puVar6[3] = uVar8;
            puVar1 = (undefined8 *)(local_a8 + 0x10 + uVar19 * 8);
            *puVar1 = uVar10;
            puVar1[1] = uVar11;
            uVar19 = uVar19 + 4;
          } while ((uVar23 & 0xfffffffffffffffc) != uVar19);
          if (uVar21 == uVar20) goto LAB_14079203b;
        }
        uVar19 = uVar20;
        if ((uVar21 & 3) != 0) {
          uVar22 = (ulonglong)((byte)local_e8 & 3);
          do {
            *(undefined8 *)(local_a8 + uVar19 * 8) = *(undefined8 *)(lVar18 + local_70 + uVar19 * 8)
            ;
            uVar19 = uVar19 + 1;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        if (uVar20 - uVar21 < 0xfffffffffffffffd) {
          lVar18 = local_70 + lVar18;
          do {
            *(undefined8 *)(local_a8 + uVar19 * 8) = *(undefined8 *)(lVar18 + uVar19 * 8);
            *(undefined8 *)(local_a8 + 8 + uVar19 * 8) = *(undefined8 *)(lVar18 + 8 + uVar19 * 8);
            *(undefined8 *)(local_a8 + 0x10 + uVar19 * 8) =
                 *(undefined8 *)(lVar18 + 0x10 + uVar19 * 8);
            *(undefined8 *)(local_a8 + 0x18 + uVar19 * 8) =
                 *(undefined8 *)(lVar18 + 0x18 + uVar19 * 8);
            uVar19 = uVar19 + 4;
          } while (uVar23 != uVar19);
        }
      }
LAB_14079203b:
      local_98 = local_c0;
      local_138 = CONCAT44(uStack_114,local_118);
      local_130 = local_b8;
      this = (AstTypeFunction *)FUN_1407b5010(uVar15,0x80);
      Luau::AstTypeFunction::AstTypeFunction
                (this,&local_138,local_160,&local_198,&local_188,&local_a8,&local_88,local_b0);
      *local_140 = local_d8;
      local_140[1] = local_d0;
      local_140[2] = local_c8;
      local_140[3] = this;
      *(undefined1 *)(local_140 + 4) = 1;
      *(ulonglong *)((longlong)local_140 + 0x24) = CONCAT44(uStack_114,local_118);
      *(longlong *)((longlong)local_140 + 0x2c) = local_b8;
      param_2 = local_140;
      goto LAB_140791c2e;
    }
  }
  *param_2 = local_d8;
  param_2[1] = local_d0;
  param_2[2] = local_c8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = CONCAT44(uStack_114,local_118);
  uStack_80 = local_b8;
  uVar15 = FUN_140792230(param_1,&local_88,&local_a8,
                         "\'self\' must be present as the unannotated first parameter");
  param_2[3] = uVar15;
  *(undefined1 *)(param_2 + 4) = 1;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
LAB_140791c2e:
  local_e0 = local_e0 + *(longlong *)(local_68 + 0x3b8);
  if (local_e0 != *(longlong *)(local_68 + 0x3c0)) {
    *(longlong *)(local_68 + 0x3c0) = local_e0;
  }
  local_70 = local_70 + *(longlong *)(local_68 + 0x2f8);
  if (local_70 != *(longlong *)(local_68 + 0x300)) {
    *(longlong *)(local_68 + 0x300) = local_70;
  }
  lVar18 = local_f8 * 0x28 + *local_100;
  if (lVar18 != local_100[1]) {
    local_100[1] = lVar18;
  }
  return param_2;
}

