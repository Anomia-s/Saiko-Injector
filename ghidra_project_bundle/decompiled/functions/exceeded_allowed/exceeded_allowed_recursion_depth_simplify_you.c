/**
 * Function: exceeded_allowed_recursion_depth_simplify_you
 * Address:  1407963d0
 * Signature: undefined exceeded_allowed_recursion_depth_simplify_you(void)
 * Body size: 3306 bytes
 */


void exceeded_allowed_recursion_depth_simplify_you
               (longlong param_1,longlong *param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  AstTypePackExplicit *this;
  longlong lVar16;
  AstTypeGroup *this_00;
  undefined8 uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong lVar25;
  longlong lVar26;
  bool bVar27;
  undefined8 *puVar28;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [8];
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  ulonglong local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar14 = *(int *)(param_1 + 0x114) + 1;
  *(uint *)(param_1 + 0x114) = uVar14;
  local_90 = param_2;
  if (DAT_141700390 < uVar14) {
                    /* WARNING: Subroutine does not return */
    Luau::ParseError::ParseError_Constructor_or_Destructor
              ((undefined8 *)(param_1 + 0x84),
               "Exceeded allowed recursion depth; simplify your %s to make the code compile",
               "type annotation",param_4);
  }
  iVar4 = *(int *)(param_1 + 0x80);
  local_168 = *(undefined1 (*) [8])(param_1 + 0x80);
  uStack_160 = *(undefined8 *)(param_1 + 0x88);
  local_158 = *(undefined4 *)(param_1 + 0x90);
  uStack_154 = *(undefined4 *)(param_1 + 0x94);
  uStack_150 = *(undefined4 *)(param_1 + 0x98);
  uStack_14c = *(undefined4 *)(param_1 + 0x9c);
  local_f8 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_f0 = 0;
  local_88 = CONCAT71(local_88._1_7_,param_3);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    puVar28 = &local_f0;
    puVar18 = &local_118;
    puVar24 = &local_f8;
  }
  else {
    puVar18 = (undefined8 *)0x0;
    puVar28 = (undefined8 *)0x0;
    puVar24 = (undefined8 *)0x0;
  }
  local_b8 = param_4;
  expected_type_pack_after_got_type(param_1,&local_1b8,0,puVar24,puVar18,puVar28);
  iVar5 = *(int *)(param_1 + 0x80);
  local_68 = *(undefined8 *)(param_1 + 0x84);
  if (iVar5 == 0x28) {
    FUN_140787100(param_1);
  }
  else {
    FUN_14079c360(param_1,0x28);
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x1c0) + 0x41c);
  *piVar1 = *piVar1 + 1;
  local_a8 = (longlong *)(param_1 + 0x2f8);
  local_a0 = *(longlong *)(param_1 + 0x300) - *(longlong *)(param_1 + 0x2f8) >> 3;
  local_98 = 0;
  local_d0 = (longlong *)(param_1 + 0x3b8);
  local_c8 = *(longlong *)(param_1 + 0x3c0) - *(longlong *)(param_1 + 0x3b8) >> 5;
  local_c0 = 0;
  local_e8 = (longlong *)(param_1 + 1000);
  local_e0 = (*(longlong *)(param_1 + 0x3f0) - *(longlong *)(param_1 + 1000) >> 2) *
             -0x5555555555555555;
  local_d8 = 0;
  local_80 = (longlong *)(param_1 + 0x3d0);
  local_78 = *(longlong *)(param_1 + 0x3d8) - *(longlong *)(param_1 + 0x3d0) >> 3;
  local_70 = 0;
  if (*(int *)(param_1 + 0x80) == 0x29) {
    lVar25 = 0;
  }
  else if (*(char *)(param_1 + 0x58) == '\x01') {
    lVar25 = expected_type_after_but_got_instead(param_1,&local_a8,&local_d0,&local_80,&local_e8);
  }
  else {
    lVar25 = expected_type_after_but_got_instead(param_1,&local_a8,&local_d0,0,0);
  }
  local_b0 = *(undefined8 *)(param_1 + 0x84);
  local_100 = *(undefined8 *)(param_1 + 0x8c);
  uStack_5c = (undefined4)local_68;
  uStack_58 = (undefined4)((ulonglong)local_68 >> 0x20);
  local_60 = iVar5;
  if (*(int *)(param_1 + 0x80) == 0x29) {
    FUN_140787100(param_1);
  }
  else {
    expected_s_to_close_s_at_column_d_got_ss(param_1,0x29,&local_60,0);
    FUN_14079c3d0(param_1,0x29);
  }
  uVar12 = local_98;
  lVar26 = local_a0;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x1c0) + 0x41c);
  *piVar1 = *piVar1 + -1;
  if (local_98 == 0) {
    lVar15 = 0;
  }
  else {
    lVar16 = *local_a8;
    lVar15 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),local_98 * 8);
    lVar19 = lVar16 + lVar26 * 8;
    if ((uVar12 < 10) || ((ulonglong)(lVar15 - lVar19) < 0x20)) {
      uVar20 = 0;
    }
    else {
      uVar20 = uVar12 & 0xfffffffffffffffc;
      lVar22 = lVar26 * 8 + lVar16;
      uVar23 = 0;
      do {
        puVar3 = (undefined4 *)(lVar22 + uVar23 * 8);
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        puVar18 = (undefined8 *)(lVar22 + 0x10 + uVar23 * 8);
        uVar17 = *puVar18;
        uVar9 = puVar18[1];
        puVar2 = (undefined4 *)(lVar15 + uVar23 * 8);
        *puVar2 = *puVar3;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        puVar18 = (undefined8 *)(lVar15 + 0x10 + uVar23 * 8);
        *puVar18 = uVar17;
        puVar18[1] = uVar9;
        uVar23 = uVar23 + 4;
      } while (uVar20 != uVar23);
      if (uVar12 == uVar20) goto LAB_140796764;
    }
    uVar21 = uVar20;
    for (uVar23 = uVar12 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined8 *)(lVar15 + uVar21 * 8) = *(undefined8 *)(lVar19 + uVar21 * 8);
      uVar21 = uVar21 + 1;
    }
    if (uVar20 - uVar12 < 0xfffffffffffffffd) {
      lVar16 = lVar16 + lVar26 * 8;
      do {
        *(undefined8 *)(lVar15 + uVar21 * 8) = *(undefined8 *)(lVar16 + uVar21 * 8);
        *(undefined8 *)(lVar15 + 8 + uVar21 * 8) = *(undefined8 *)(lVar16 + 8 + uVar21 * 8);
        *(undefined8 *)(lVar15 + 0x10 + uVar21 * 8) = *(undefined8 *)(lVar16 + 0x10 + uVar21 * 8);
        *(undefined8 *)(lVar15 + 0x18 + uVar21 * 8) = *(undefined8 *)(lVar16 + 0x18 + uVar21 * 8);
        uVar21 = uVar21 + 4;
      } while (uVar12 != uVar21);
    }
  }
LAB_140796764:
  uVar6 = uStack_5c;
  iVar5 = local_60;
  lVar26 = local_a0;
  uVar20 = local_c0;
  bVar27 = iVar4 == 0x3c;
  iVar4 = *(int *)(param_1 + 0x80);
  if (iVar4 == 0x107) {
LAB_140796788:
    if (local_c0 == 0) {
      local_138 = 0;
      local_60 = iVar5;
      uStack_5c = uVar6;
    }
    else {
      lVar26 = local_c8 * 0x20 + *local_d0;
      local_60 = iVar5;
      uStack_5c = uVar6;
      local_138 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),local_c0 << 5);
      if (uVar20 == 1) {
        uVar23 = 0;
      }
      else {
        lVar19 = 0x20;
        uVar23 = 0;
        do {
          puVar18 = (undefined8 *)(lVar26 + -0x20 + lVar19);
          uVar17 = *puVar18;
          uVar9 = puVar18[1];
          puVar18 = (undefined8 *)(lVar26 + -0x10 + lVar19);
          uVar10 = puVar18[1];
          puVar28 = (undefined8 *)(local_138 + -0x10 + lVar19);
          *puVar28 = *puVar18;
          puVar28[1] = uVar10;
          puVar18 = (undefined8 *)(local_138 + -0x20 + lVar19);
          *puVar18 = uVar17;
          puVar18[1] = uVar9;
          uVar17 = ((undefined8 *)(lVar26 + lVar19))[1];
          puVar18 = (undefined8 *)(lVar26 + 0x10 + lVar19);
          uVar9 = *puVar18;
          uVar10 = puVar18[1];
          *(undefined8 *)(local_138 + lVar19) = *(undefined8 *)(lVar26 + lVar19);
          ((undefined8 *)(local_138 + lVar19))[1] = uVar17;
          puVar18 = (undefined8 *)(local_138 + 0x10 + lVar19);
          *puVar18 = uVar9;
          puVar18[1] = uVar10;
          uVar23 = uVar23 + 2;
          lVar19 = lVar19 + 0x40;
        } while ((uVar20 & 0xfffffffffffffffe) != uVar23);
      }
      if ((uVar20 & 1) != 0) {
        lVar19 = uVar23 * 0x20;
        uVar17 = *(undefined8 *)(lVar26 + lVar19);
        uVar9 = ((undefined8 *)(lVar26 + lVar19))[1];
        puVar18 = (undefined8 *)(lVar26 + 0x10 + lVar19);
        uVar10 = puVar18[1];
        puVar28 = (undefined8 *)(local_138 + 0x10 + lVar19);
        *puVar28 = *puVar18;
        puVar28[1] = uVar10;
        *(undefined8 *)(local_138 + lVar19) = uVar17;
        ((undefined8 *)(local_138 + lVar19))[1] = uVar9;
      }
    }
    local_88 = *(undefined8 *)(param_1 + 0x84);
    local_130 = uVar20;
    local_120 = uVar12;
    local_188 = local_1a8;
    uStack_180 = uStack_1a0;
    local_178 = local_1b8;
    uStack_174 = uStack_1b4;
    uStack_170 = uStack_1b0;
    uStack_16c = uStack_1ac;
    local_128 = lVar15;
    lVar26 = exceeded_allowed_recursion_depth_simplify_you
                       (param_1,local_168,local_b8,&local_178,&local_188,&local_128,&local_138,
                        lVar25);
    uVar12 = local_70;
    lVar25 = local_78;
    if ((*(char *)(param_1 + 0x58) == '\x01') && (*(int *)(lVar26 + 8) == DAT_1416f2468)) {
      local_b8 = *(undefined8 *)(param_1 + 0xd8);
      if (local_70 == 0) {
        lVar15 = 0;
      }
      else {
        lVar19 = *local_80;
        lVar15 = FUN_1407b5010(local_b8,local_70 * 8);
        lVar16 = lVar25 * 8 + lVar19;
        if ((uVar12 < 10) || ((ulonglong)(lVar15 - lVar16) < 0x20)) {
          uVar20 = 0;
        }
        else {
          uVar20 = uVar12 & 0xfffffffffffffffc;
          lVar22 = lVar25 * 8 + lVar19;
          uVar23 = 0;
          do {
            puVar3 = (undefined4 *)(lVar22 + uVar23 * 8);
            uVar6 = puVar3[1];
            uVar7 = puVar3[2];
            uVar8 = puVar3[3];
            puVar18 = (undefined8 *)(lVar22 + 0x10 + uVar23 * 8);
            uVar17 = *puVar18;
            uVar9 = puVar18[1];
            puVar2 = (undefined4 *)(lVar15 + uVar23 * 8);
            *puVar2 = *puVar3;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            puVar18 = (undefined8 *)(lVar15 + 0x10 + uVar23 * 8);
            *puVar18 = uVar17;
            puVar18[1] = uVar9;
            uVar23 = uVar23 + 4;
          } while (uVar20 != uVar23);
          if (uVar12 == uVar20) goto LAB_140796cdc;
        }
        uVar21 = uVar20;
        for (uVar23 = uVar12 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
          *(undefined8 *)(lVar15 + uVar21 * 8) = *(undefined8 *)(lVar16 + uVar21 * 8);
          uVar21 = uVar21 + 1;
        }
        if (uVar20 - uVar12 < 0xfffffffffffffffd) {
          lVar19 = lVar25 * 8 + 0x18 + lVar19;
          do {
            *(undefined8 *)(lVar15 + uVar21 * 8) = *(undefined8 *)(lVar19 + -0x18 + uVar21 * 8);
            *(undefined8 *)(lVar15 + 8 + uVar21 * 8) = *(undefined8 *)(lVar19 + -0x10 + uVar21 * 8);
            *(undefined8 *)(lVar15 + 0x10 + uVar21 * 8) = *(undefined8 *)(lVar19 + -8 + uVar21 * 8);
            *(undefined8 *)(lVar15 + 0x18 + uVar21 * 8) = *(undefined8 *)(lVar19 + uVar21 * 8);
            uVar21 = uVar21 + 4;
          } while (uVar12 != uVar21);
        }
      }
LAB_140796cdc:
      uVar20 = local_d8;
      if (local_d8 == 0) {
        local_148 = 0;
      }
      else {
        lVar25 = local_e0 * 0xc + *local_e8;
        local_148 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8));
        if (uVar20 == 1) {
          uVar23 = 0;
        }
        else {
          lVar19 = 0;
          uVar23 = 0;
          do {
            *(undefined4 *)(local_148 + 8 + lVar19) = *(undefined4 *)(lVar25 + 8 + lVar19);
            *(undefined8 *)(local_148 + lVar19) = *(undefined8 *)(lVar25 + lVar19);
            *(undefined8 *)(local_148 + 0xc + lVar19) = *(undefined8 *)(lVar25 + 0xc + lVar19);
            *(undefined4 *)(local_148 + 0x14 + lVar19) = *(undefined4 *)(lVar25 + 0x14 + lVar19);
            uVar23 = uVar23 + 2;
            lVar19 = lVar19 + 0x18;
          } while ((uVar20 & 0xfffffffffffffffe) != uVar23);
        }
        if ((uVar20 & 1) != 0) {
          lVar19 = uVar23 * 0xc;
          *(undefined4 *)(local_148 + 8 + lVar19) = *(undefined4 *)(lVar25 + 8 + lVar19);
          *(undefined8 *)(local_148 + lVar19) = *(undefined8 *)(lVar25 + lVar19);
        }
      }
      uVar17 = FUN_1407b5010(local_b8,0x60);
      local_60 = (int)lVar15;
      uStack_5c = (undefined4)((ulonglong)lVar15 >> 0x20);
      uStack_58 = (undefined4)uVar12;
      uStack_54 = (undefined4)(uVar12 >> 0x20);
      local_140 = uVar20;
      local_198 = (undefined4)local_118;
      uStack_194 = local_118._4_4_;
      uStack_190 = (undefined4)uStack_110;
      uStack_18c = uStack_110._4_4_;
      FUN_14079f250(uVar17,local_f8,&local_198,local_f0,local_68,&local_148,&local_60,local_b0,
                    local_88);
      local_60 = (int)lVar26;
      uStack_5c = (undefined4)((ulonglong)lVar26 >> 0x20);
      puVar18 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_60);
      *puVar18 = uVar17;
    }
    *local_90 = lVar26;
  }
  else {
    local_60 = (int)lVar15;
    iVar13 = local_60;
    uStack_5c = (undefined4)((ulonglong)lVar15 >> 0x20);
    uVar7 = uStack_5c;
    if ((iVar4 == 0x3a) || ((uVar12 != 1 || lVar25 != 0) || (local_c0 != 0 || bVar27))) {
      if (((char)local_88 != '\0') && ((local_c0 == 0 && !bVar27) && iVar4 != 0x3a)) {
        local_60 = iVar5;
        uStack_5c = uVar6;
        this = (AstTypePackExplicit *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x38);
        uStack_58 = (undefined4)uVar12;
        uStack_54 = (undefined4)(uVar12 >> 0x20);
        local_60 = iVar13;
        uStack_5c = uVar7;
        local_50 = lVar25;
        Luau::AstTypePackExplicit::AstTypePackExplicit
                  (this,(undefined8 *)(local_168 + 4),(undefined8 *)&local_60);
        uVar12 = local_70;
        lVar25 = local_78;
        if (*(char *)(param_1 + 0x58) != '\x01') goto LAB_140796f58;
        uVar17 = *(undefined8 *)(param_1 + 0xd8);
        if (local_70 == 0) {
          lVar26 = 0;
        }
        else {
          lVar15 = *local_80;
          lVar26 = FUN_1407b5010(uVar17,local_70 * 8);
          lVar19 = lVar25 * 8 + lVar15;
          if ((uVar12 < 10) || ((ulonglong)(lVar26 - lVar19) < 0x20)) {
            uVar20 = 0;
          }
          else {
            uVar20 = uVar12 & 0xfffffffffffffffc;
            lVar16 = lVar25 * 8 + lVar15;
            uVar23 = 0;
            do {
              puVar28 = (undefined8 *)(lVar16 + uVar23 * 8);
              uVar9 = puVar28[1];
              puVar18 = (undefined8 *)(lVar16 + 0x10 + uVar23 * 8);
              uVar10 = *puVar18;
              uVar11 = puVar18[1];
              puVar18 = (undefined8 *)(lVar26 + uVar23 * 8);
              *puVar18 = *puVar28;
              puVar18[1] = uVar9;
              puVar18 = (undefined8 *)(lVar26 + 0x10 + uVar23 * 8);
              *puVar18 = uVar10;
              puVar18[1] = uVar11;
              uVar23 = uVar23 + 4;
            } while (uVar20 != uVar23);
            if (uVar12 == uVar20) goto LAB_140796ea0;
          }
          uVar21 = uVar20;
          for (uVar23 = uVar12 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined8 *)(lVar26 + uVar21 * 8) = *(undefined8 *)(lVar19 + uVar21 * 8);
            uVar21 = uVar21 + 1;
          }
          if (uVar20 - uVar12 < 0xfffffffffffffffd) {
            lVar15 = lVar25 * 8 + 0x18 + lVar15;
            do {
              *(undefined8 *)(lVar26 + uVar21 * 8) = *(undefined8 *)(lVar15 + -0x18 + uVar21 * 8);
              *(undefined8 *)(lVar26 + 8 + uVar21 * 8) =
                   *(undefined8 *)(lVar15 + -0x10 + uVar21 * 8);
              *(undefined8 *)(lVar26 + 0x10 + uVar21 * 8) =
                   *(undefined8 *)(lVar15 + -8 + uVar21 * 8);
              *(undefined8 *)(lVar26 + 0x18 + uVar21 * 8) = *(undefined8 *)(lVar15 + uVar21 * 8);
              uVar21 = uVar21 + 4;
            } while (uVar12 != uVar21);
          }
        }
LAB_140796ea0:
        uVar17 = FUN_1407b5010(uVar17,0x28);
        local_60 = (int)lVar26;
        uStack_5c = (undefined4)((ulonglong)lVar26 >> 0x20);
        uStack_58 = (undefined4)uVar12;
        uStack_54 = (undefined4)(uVar12 >> 0x20);
        FUN_14079f360(uVar17,local_68,local_b0,&local_60);
        local_60 = (int)this;
        uStack_5c = (undefined4)((ulonglong)this >> 0x20);
        puVar18 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_60);
LAB_140796f55:
        *puVar18 = uVar17;
        goto LAB_140796f58;
      }
      goto LAB_140796788;
    }
    if ((char)local_88 != '\0') {
      local_60 = iVar5;
      uStack_5c = uVar6;
      this = (AstTypePackExplicit *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x38);
      uStack_58 = 1;
      uStack_54 = 0;
      local_50 = 0;
      local_60 = iVar13;
      uStack_5c = uVar7;
      Luau::AstTypePackExplicit::AstTypePackExplicit
                (this,(undefined8 *)(local_168 + 4),(undefined8 *)&local_60);
      uVar12 = local_70;
      lVar25 = local_78;
      if (*(char *)(param_1 + 0x58) == '\x01') {
        uVar17 = *(undefined8 *)(param_1 + 0xd8);
        if (local_70 == 0) {
          lVar26 = 0;
        }
        else {
          lVar15 = *local_80;
          lVar26 = FUN_1407b5010(uVar17,local_70 * 8);
          lVar19 = lVar25 * 8 + lVar15;
          if ((uVar12 < 10) || ((ulonglong)(lVar26 - lVar19) < 0x20)) {
            uVar20 = 0;
          }
          else {
            uVar20 = uVar12 & 0xfffffffffffffffc;
            lVar16 = lVar25 * 8 + lVar15;
            uVar23 = 0;
            do {
              puVar28 = (undefined8 *)(lVar16 + uVar23 * 8);
              uVar9 = puVar28[1];
              puVar18 = (undefined8 *)(lVar16 + 0x10 + uVar23 * 8);
              uVar10 = *puVar18;
              uVar11 = puVar18[1];
              puVar18 = (undefined8 *)(lVar26 + uVar23 * 8);
              *puVar18 = *puVar28;
              puVar18[1] = uVar9;
              puVar18 = (undefined8 *)(lVar26 + 0x10 + uVar23 * 8);
              *puVar18 = uVar10;
              puVar18[1] = uVar11;
              uVar23 = uVar23 + 4;
            } while (uVar20 != uVar23);
            if (uVar12 == uVar20) goto LAB_140796efd;
          }
          uVar21 = uVar20;
          for (uVar23 = uVar12 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined8 *)(lVar26 + uVar21 * 8) = *(undefined8 *)(lVar19 + uVar21 * 8);
            uVar21 = uVar21 + 1;
          }
          if (uVar20 - uVar12 < 0xfffffffffffffffd) {
            lVar15 = lVar25 * 8 + 0x18 + lVar15;
            do {
              *(undefined8 *)(lVar26 + uVar21 * 8) = *(undefined8 *)(lVar15 + -0x18 + uVar21 * 8);
              *(undefined8 *)(lVar26 + 8 + uVar21 * 8) =
                   *(undefined8 *)(lVar15 + -0x10 + uVar21 * 8);
              *(undefined8 *)(lVar26 + 0x10 + uVar21 * 8) =
                   *(undefined8 *)(lVar15 + -8 + uVar21 * 8);
              *(undefined8 *)(lVar26 + 0x18 + uVar21 * 8) = *(undefined8 *)(lVar15 + uVar21 * 8);
              uVar21 = uVar21 + 4;
            } while (uVar12 != uVar21);
          }
        }
LAB_140796efd:
        uVar17 = FUN_1407b5010(uVar17,0x28);
        local_60 = (int)lVar26;
        uStack_5c = (undefined4)((ulonglong)lVar26 >> 0x20);
        uStack_58 = (undefined4)uVar12;
        uStack_54 = (undefined4)(uVar12 >> 0x20);
        FUN_14079f360(uVar17,local_68,local_b0,&local_60);
        local_60 = (int)this;
        uStack_5c = (undefined4)((ulonglong)this >> 0x20);
        puVar18 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_60);
        goto LAB_140796f55;
      }
LAB_140796f58:
      *local_90 = 0;
      local_90[1] = (longlong)this;
      goto LAB_140796f6a;
    }
    lVar25 = *local_a8;
    local_60 = (int)local_68;
    uStack_5c = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_58 = (undefined4)local_100;
    uStack_54 = (undefined4)((ulonglong)local_100 >> 0x20);
    this_00 = (AstTypeGroup *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    Luau::AstTypeGroup::AstTypeGroup
              (this_00,(undefined8 *)&local_60,*(undefined8 *)(lVar25 + lVar26 * 8));
    *local_90 = (longlong)this_00;
  }
  local_90[1] = 0;
LAB_140796f6a:
  lVar25 = local_78 * 8 + *local_80;
  if (lVar25 != local_80[1]) {
    local_80[1] = lVar25;
  }
  lVar25 = local_e0 * 0xc + *local_e8;
  if (lVar25 != local_e8[1]) {
    local_e8[1] = lVar25;
  }
  lVar25 = local_c8 * 0x20 + *local_d0;
  if (lVar25 != local_d0[1]) {
    local_d0[1] = lVar25;
  }
  lVar25 = local_a0 * 8 + *local_a8;
  if (lVar25 != local_a8[1]) {
    local_a8[1] = lVar25;
  }
  return;
}

