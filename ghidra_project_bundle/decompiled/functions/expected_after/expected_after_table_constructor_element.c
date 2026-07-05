/**
 * Function: expected_after_table_constructor_element
 * Address:  14079b590
 * Signature: undefined expected_after_table_constructor_element(void)
 * Body size: 2141 bytes
 */


AstExprTable * expected_after_table_constructor_element(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  char cVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  AstExprConstantString *this;
  AstExprTable *this_00;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  int local_fc;
  undefined8 local_f8;
  char *local_f0;
  size_t local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong local_90;
  undefined8 local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined8 local_48;
  undefined4 uVar13;
  
  local_48 = 0xfffffffffffffffe;
  local_c8 = *(longlong *)(param_1 + 0x348) - *(longlong *)(param_1 + 0x340);
  local_c0 = *(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358);
  local_f8 = *(undefined8 *)(param_1 + 0x84);
  local_fc = *(int *)(param_1 + 0x80);
  local_d8 = local_f8;
  local_50 = param_1;
  if (local_fc == 0x7b) {
    FUN_140787100();
  }
  else {
    FUN_14079c360(param_1,0x7b);
  }
  lVar21 = local_50;
  local_a0 = (longlong *)(local_50 + 0x340);
  local_98 = (longlong *)(local_50 + 0x358);
  local_e0 = local_50 + 0x60;
  local_d0 = (undefined8 *)(local_50 + 0x84);
  local_90 = 0;
  uVar22 = 0;
LAB_14079b659:
  iVar3 = *(int *)(local_50 + 0x80);
  if (iVar3 == 0x7d) {
    uVar16 = *(undefined8 *)(local_50 + 0x8c);
    FUN_140787100();
    goto LAB_14079bb63;
  }
  iVar4 = *(int *)(local_50 + 0x88);
  if (iVar3 == 0x5b) {
    uVar18 = *(ulonglong *)(local_50 + 0x84);
    local_b8._0_4_ = 0x5b;
    local_b8._4_4_ = (undefined4)uVar18;
    uStack_b0 = (undefined4)(uVar18 >> 0x20);
    FUN_140787100();
    uVar14 = unexpected_did_you_mean_not(local_50,0);
    uVar16 = *(undefined8 *)(local_50 + 0x84);
    if (*(int *)(local_50 + 0x80) == 0x5d) {
      FUN_140787100(local_50);
    }
    else {
      expected_s_to_close_s_at_column_d_got_ss(local_50,0x5d,&local_b8,0);
      FUN_14079c3d0(local_50,0x5d);
    }
    uVar5 = *(undefined8 *)(local_50 + 0x84);
    if (*(int *)(local_50 + 0x80) == 0x3d) {
      FUN_140787100(local_50);
    }
    else {
      FUN_14079c360(local_50,0x3d,"table field");
    }
    uVar15 = unexpected_did_you_mean_not(local_50,0);
    local_88 = CONCAT44(local_88._4_4_,2);
    uStack_80 = (uint)uVar14;
    uStack_7c = (undefined4)((ulonglong)uVar14 >> 0x20);
    uStack_78 = (undefined4)uVar15;
    uStack_74 = (uint)((ulonglong)uVar15 >> 0x20);
    puVar20 = *(undefined4 **)(local_50 + 0x348);
    if (puVar20 == *(undefined4 **)(local_50 + 0x350)) {
      FUN_14059c4a0(local_a0,puVar20,&local_88);
    }
    else {
      *(undefined8 *)(puVar20 + 4) = uVar15;
      *puVar20 = 2;
      puVar20[1] = local_88._4_4_;
      puVar20[2] = uStack_80;
      puVar20[3] = uStack_7c;
      *(longlong *)(local_50 + 0x348) = *(longlong *)(local_50 + 0x348) + 0x18;
    }
    if (*(char *)(local_50 + 0x58) == '\x01') {
      uStack_80 = CONCAT31(uStack_80._1_3_,1);
      uStack_7c = (undefined4)uVar16;
      uStack_78 = (undefined4)((ulonglong)uVar16 >> 0x20);
      uStack_74 = CONCAT31(uStack_74._1_3_,1);
      local_68 = CONCAT31(local_68._1_3_,1);
      uVar11 = 0;
      uVar13 = 0;
      if (*(int *)(local_50 + 0x80) == 0x2c) {
LAB_14079b887:
        uVar11 = 1;
        uStack_64 = uVar13;
      }
      else if (*(int *)(local_50 + 0x80) == 0x3b) {
        uVar13 = 1;
        goto LAB_14079b887;
      }
      uStack_60 = CONCAT31(uStack_60._1_3_,uVar11);
      uStack_5c = (undefined4)*(undefined8 *)(local_50 + 0x84);
      uStack_58 = (undefined4)((ulonglong)*(undefined8 *)(local_50 + 0x84) >> 0x20);
      uStack_54 = CONCAT31(uStack_54._1_3_,1);
      puVar20 = *(undefined4 **)(local_50 + 0x360);
      local_88 = uVar18;
      uStack_70 = uVar5;
      if (puVar20 != *(undefined4 **)(local_50 + 0x368)) goto LAB_14079baa0;
      FUN_1402cc2f0(local_98,puVar20,&local_88);
      goto LAB_14079bac7;
    }
  }
  else {
    if (iVar3 == 0x119) {
      FUN_1407a1770(local_e0,&local_88);
      if ((int)local_88 == 0x3d) {
        if (*(int *)(local_50 + 0x80) == 0x119) {
          uVar14 = *(undefined8 *)(local_50 + 0x98);
          uStack_b0 = *(undefined4 *)local_d0;
          uStack_ac = *(undefined4 *)((longlong)local_d0 + 4);
          uStack_a8 = local_d0[1];
          FUN_140787100();
          uVar16 = *local_d0;
          local_b8._0_4_ = (undefined4)uVar14;
          local_b8._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
          if (*(int *)(local_50 + 0x80) == 0x3d) goto LAB_14079b978;
LAB_14079b734:
          FUN_14079c360(local_50,0x3d,"table field");
        }
        else {
          expected_identifier_when_parsing_s_got_s(local_50,"table field");
          uVar16 = *(undefined8 *)(local_50 + 0x84);
          uStack_b0 = (undefined4)uVar16;
          uStack_ac = (undefined4)((ulonglong)uVar16 >> 0x20);
          local_b8._0_4_ = (undefined4)*(undefined8 *)(local_50 + 0x128);
          local_b8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(local_50 + 0x128) >> 0x20);
          uStack_a8 = uVar16;
          if (*(int *)(local_50 + 0x80) != 0x3d) goto LAB_14079b734;
LAB_14079b978:
          FUN_140787100();
        }
        local_e8 = 0;
        local_f0 = (char *)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
        local_e8 = strlen(local_f0);
        this = (AstExprConstantString *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x38);
        Luau::AstExprConstantString::AstExprConstantString
                  (this,(undefined8 *)&uStack_b0,&local_f0,3);
        lVar19 = unexpected_did_you_mean_not(local_50,0);
        if ((lVar19 != 0) && (*(int *)(lVar19 + 8) == DAT_1416f23f0)) {
          *(ulonglong *)(lVar19 + 0xa0) = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
        }
        local_88 = CONCAT44(local_88._4_4_,1);
        uStack_80 = (uint)this;
        uStack_7c = (undefined4)((ulonglong)this >> 0x20);
        uStack_78 = (undefined4)lVar19;
        uStack_74 = (uint)((ulonglong)lVar19 >> 0x20);
        puVar20 = *(undefined4 **)(lVar21 + 0x348);
        if (puVar20 == *(undefined4 **)(lVar21 + 0x350)) {
          FUN_14059c4a0(local_a0,puVar20,&local_88);
        }
        else {
          *(longlong *)(puVar20 + 4) = lVar19;
          *puVar20 = 1;
          puVar20[1] = local_88._4_4_;
          puVar20[2] = uStack_80;
          puVar20[3] = uStack_7c;
          *(longlong *)(lVar21 + 0x348) = *(longlong *)(lVar21 + 0x348) + 0x18;
        }
        if (*(char *)(local_50 + 0x58) != '\x01') goto LAB_14079bacf;
        uStack_80 = uStack_80 & 0xffffff00;
        uStack_74 = uStack_74 & 0xffffff00;
        local_68 = CONCAT31(local_68._1_3_,1);
        uVar11 = 0;
        uVar13 = 0;
        if (*(int *)(local_50 + 0x80) == 0x2c) {
LAB_14079ba66:
          uVar11 = 1;
          uStack_64 = uVar13;
        }
        else if (*(int *)(local_50 + 0x80) == 0x3b) {
          uVar13 = 1;
          goto LAB_14079ba66;
        }
        uStack_60 = CONCAT31(uStack_60._1_3_,uVar11);
        uStack_5c = (undefined4)*(undefined8 *)(local_50 + 0x84);
        uStack_58 = (undefined4)((ulonglong)*(undefined8 *)(local_50 + 0x84) >> 0x20);
        uStack_54 = CONCAT31(uStack_54._1_3_,1);
        puVar20 = *(undefined4 **)(local_50 + 0x360);
        uStack_70 = uVar16;
        if (puVar20 != *(undefined4 **)(local_50 + 0x368)) goto LAB_14079baa0;
        FUN_1402cc2f0(local_98,puVar20,&local_88);
        goto LAB_14079bac7;
      }
    }
    uVar16 = unexpected_did_you_mean_not(local_50,0);
    uVar18 = local_88 >> 0x20;
    local_88 = local_88 & 0xffffffff00000000;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = (undefined4)uVar16;
    uStack_74 = (uint)((ulonglong)uVar16 >> 0x20);
    puVar20 = *(undefined4 **)(local_50 + 0x348);
    if (puVar20 == *(undefined4 **)(local_50 + 0x350)) {
      FUN_14059c4a0(local_a0,puVar20,&local_88);
    }
    else {
      *(undefined8 *)(puVar20 + 4) = uVar16;
      *puVar20 = 0;
      puVar20[1] = (int)uVar18;
      puVar20[2] = 0;
      puVar20[3] = 0;
      *(longlong *)(local_50 + 0x348) = *(longlong *)(local_50 + 0x348) + 0x18;
    }
    if (*(char *)(local_50 + 0x58) != '\x01') goto LAB_14079bacf;
    uStack_80 = uStack_80 & 0xffffff00;
    uStack_74 = uStack_74 & 0xffffff00;
    local_68 = local_68 & 0xffffff00;
    uVar11 = 0;
    uVar13 = 0;
    if (*(int *)(local_50 + 0x80) == 0x2c) {
LAB_14079b904:
      uVar11 = 1;
      uStack_64 = uVar13;
    }
    else if (*(int *)(local_50 + 0x80) == 0x3b) {
      uVar13 = 1;
      goto LAB_14079b904;
    }
    uStack_60 = CONCAT31(uStack_60._1_3_,uVar11);
    uStack_5c = (undefined4)*(undefined8 *)(local_50 + 0x84);
    uStack_58 = (undefined4)((ulonglong)*(undefined8 *)(local_50 + 0x84) >> 0x20);
    uStack_54 = CONCAT31(uStack_54._1_3_,1);
    puVar20 = *(undefined4 **)(local_50 + 0x360);
    if (puVar20 == *(undefined4 **)(local_50 + 0x368)) {
      FUN_1402cc2f0(local_98,puVar20,&local_88);
    }
    else {
LAB_14079baa0:
      *(ulonglong *)(puVar20 + 0xc) = CONCAT44(uStack_54,uStack_58);
      *(ulonglong *)(puVar20 + 8) = CONCAT44(uStack_64,local_68);
      *(ulonglong *)(puVar20 + 10) = CONCAT44(uStack_5c,uStack_60);
      *(ulonglong *)(puVar20 + 4) = CONCAT44(uStack_74,uStack_78);
      *(undefined8 *)(puVar20 + 6) = uStack_70;
      *puVar20 = (int)local_88;
      puVar20[1] = local_88._4_4_;
      puVar20[2] = uStack_80;
      puVar20[3] = uStack_7c;
      *(longlong *)(local_50 + 0x360) = *(longlong *)(local_50 + 0x360) + 0x38;
    }
LAB_14079bac7:
    local_90 = local_90 + 1;
  }
LAB_14079bacf:
  uVar22 = uVar22 + 1;
  iVar3 = *(int *)(local_50 + 0x80);
  if (iVar3 < 0x5b) {
    if ((iVar3 != 0x2c) && (iVar3 != 0x3b)) goto LAB_14079bc91;
    FUN_140787100(local_50);
    goto LAB_14079b659;
  }
  if (iVar3 != 0x5b) {
    if (iVar3 == 0x7d) goto LAB_14079b659;
    if (iVar3 != 0x119) goto LAB_14079bc91;
  }
  if (*(int *)(local_50 + 0x88) == iVar4) {
    FUN_14078f3b0();
  }
  else if (iVar3 != 0x7d) {
LAB_14079bc91:
    uVar16 = *(undefined8 *)(local_50 + 0x8c);
    expected_s_to_close_s_at_column_d_got_ss(local_50,0x7d,&local_fc,0);
    cVar12 = FUN_14079c3d0(local_50,0x7d);
    if (cVar12 == '\0') {
      uVar16 = *(undefined8 *)(lVar21 + 0xa8);
    }
LAB_14079bb63:
    uVar14 = *(undefined8 *)(local_50 + 0xd8);
    if (uVar22 == 0) {
      local_88 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
    }
    else {
      lVar21 = *local_a0 + local_c8;
      local_88 = FUN_1407b5010(uVar14,uVar22 * 0x18);
      uStack_80 = (uint)uVar22;
      uStack_7c = (undefined4)(uVar22 >> 0x20);
      if (uVar22 == 1) {
        uVar18 = 0;
      }
      else {
        lVar19 = 0;
        uVar18 = 0;
        do {
          *(undefined8 *)(local_88 + 0x10 + lVar19) = *(undefined8 *)(lVar21 + 0x10 + lVar19);
          uVar5 = ((undefined8 *)(lVar21 + lVar19))[1];
          *(undefined8 *)(local_88 + lVar19) = *(undefined8 *)(lVar21 + lVar19);
          ((undefined8 *)(local_88 + lVar19))[1] = uVar5;
          puVar20 = (undefined4 *)(lVar21 + 0x18 + lVar19);
          uVar13 = puVar20[1];
          uVar6 = puVar20[2];
          uVar7 = puVar20[3];
          puVar1 = (undefined4 *)(local_88 + 0x18 + lVar19);
          *puVar1 = *puVar20;
          puVar1[1] = uVar13;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          *(undefined8 *)(local_88 + 0x28 + lVar19) = *(undefined8 *)(lVar21 + 0x28 + lVar19);
          uVar18 = uVar18 + 2;
          lVar19 = lVar19 + 0x30;
        } while ((uVar22 & 0xfffffffffffffffe) != uVar18);
      }
      if ((uVar22 & 1) != 0) {
        lVar19 = uVar18 * 0x18;
        *(undefined8 *)(local_88 + 0x10 + lVar19) = *(undefined8 *)(lVar21 + 0x10 + lVar19);
        puVar20 = (undefined4 *)(lVar21 + lVar19);
        uVar13 = puVar20[1];
        uVar6 = puVar20[2];
        uVar7 = puVar20[3];
        puVar1 = (undefined4 *)(local_88 + lVar19);
        *puVar1 = *puVar20;
        puVar1[1] = uVar13;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
      }
    }
    local_b8._0_4_ = (undefined4)local_d8;
    local_b8._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
    uStack_b0 = (undefined4)uVar16;
    uStack_ac = (undefined4)((ulonglong)uVar16 >> 0x20);
    this_00 = (AstExprTable *)FUN_1407b5010(uVar14,0x30);
    Luau::AstExprTable::AstExprTable(this_00,&local_b8,&local_88);
    if (*(char *)(local_50 + 0x58) == '\x01') {
      uVar16 = *(undefined8 *)(local_50 + 0xd8);
      if (local_90 == 0) {
        local_88 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
      }
      else {
        lVar21 = *local_98 + local_c0;
        local_88 = FUN_1407b5010(uVar16,local_90 * 0x38);
        uStack_80 = (uint)local_90;
        uStack_7c = (undefined4)(local_90 >> 0x20);
        if (local_90 == 1) {
          uVar22 = 0;
        }
        else {
          lVar19 = 0;
          uVar22 = 0;
          do {
            *(undefined8 *)(local_88 + 0x30 + lVar19) = *(undefined8 *)(lVar21 + 0x30 + lVar19);
            uVar14 = *(undefined8 *)(lVar21 + lVar19);
            uVar5 = ((undefined8 *)(lVar21 + lVar19))[1];
            puVar17 = (undefined8 *)(lVar21 + 0x10 + lVar19);
            uVar15 = *puVar17;
            uVar9 = puVar17[1];
            puVar17 = (undefined8 *)(lVar21 + 0x20 + lVar19);
            uVar10 = puVar17[1];
            puVar2 = (undefined8 *)(local_88 + 0x20 + lVar19);
            *puVar2 = *puVar17;
            puVar2[1] = uVar10;
            puVar17 = (undefined8 *)(local_88 + 0x10 + lVar19);
            *puVar17 = uVar15;
            puVar17[1] = uVar9;
            *(undefined8 *)(local_88 + lVar19) = uVar14;
            ((undefined8 *)(local_88 + lVar19))[1] = uVar5;
            puVar20 = (undefined4 *)(lVar21 + 0x38 + lVar19);
            uVar13 = puVar20[1];
            uVar6 = puVar20[2];
            uVar7 = puVar20[3];
            puVar17 = (undefined8 *)(lVar21 + 0x48 + lVar19);
            uVar14 = *puVar17;
            uVar5 = puVar17[1];
            puVar17 = (undefined8 *)(lVar21 + 0x58 + lVar19);
            uVar15 = *puVar17;
            uVar9 = puVar17[1];
            puVar1 = (undefined4 *)(local_88 + 0x38 + lVar19);
            *puVar1 = *puVar20;
            puVar1[1] = uVar13;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            puVar17 = (undefined8 *)(local_88 + 0x48 + lVar19);
            *puVar17 = uVar14;
            puVar17[1] = uVar5;
            puVar17 = (undefined8 *)(local_88 + 0x58 + lVar19);
            *puVar17 = uVar15;
            puVar17[1] = uVar9;
            *(undefined8 *)(local_88 + 0x68 + lVar19) = *(undefined8 *)(lVar21 + 0x68 + lVar19);
            uVar22 = uVar22 + 2;
            lVar19 = lVar19 + 0x70;
          } while ((local_90 & 0xfffffffffffffffe) != uVar22);
        }
        if ((local_90 & 1) != 0) {
          lVar19 = uVar22 * 0x38;
          *(undefined8 *)(local_88 + 0x30 + lVar19) = *(undefined8 *)(lVar21 + 0x30 + lVar19);
          puVar20 = (undefined4 *)(lVar21 + lVar19);
          uVar13 = *puVar20;
          uVar6 = puVar20[1];
          uVar7 = puVar20[2];
          uVar8 = puVar20[3];
          puVar17 = (undefined8 *)(lVar21 + 0x10 + lVar19);
          uVar14 = *puVar17;
          uVar5 = puVar17[1];
          puVar17 = (undefined8 *)(lVar21 + 0x20 + lVar19);
          uVar15 = puVar17[1];
          puVar2 = (undefined8 *)(local_88 + 0x20 + lVar19);
          *puVar2 = *puVar17;
          puVar2[1] = uVar15;
          puVar17 = (undefined8 *)(local_88 + 0x10 + lVar19);
          *puVar17 = uVar14;
          puVar17[1] = uVar5;
          puVar20 = (undefined4 *)(local_88 + lVar19);
          *puVar20 = uVar13;
          puVar20[1] = uVar6;
          puVar20[2] = uVar7;
          puVar20[3] = uVar8;
        }
      }
      uVar16 = FUN_1407b5010(uVar16,0x18);
      FUN_14079ef70(uVar16,&local_88);
      local_b8._0_4_ = SUB84(this_00,0);
      local_b8._4_4_ = (undefined4)((ulonglong)this_00 >> 0x20);
      puVar17 = (undefined8 *)FUN_14078e300(local_50 + 0x420,&local_b8);
      *puVar17 = uVar16;
    }
    local_c0 = local_c0 + *(longlong *)(local_50 + 0x358);
    if (local_c0 != *(longlong *)(local_50 + 0x360)) {
      *(longlong *)(local_50 + 0x360) = local_c0;
    }
    local_c8 = local_c8 + *(longlong *)(local_50 + 0x340);
    if (local_c8 != *(longlong *)(local_50 + 0x348)) {
      *(longlong *)(local_50 + 0x348) = local_c8;
    }
    return this_00;
  }
  goto LAB_14079b659;
}

