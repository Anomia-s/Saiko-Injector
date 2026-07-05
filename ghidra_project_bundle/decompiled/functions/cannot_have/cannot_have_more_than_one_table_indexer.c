/**
 * Function: cannot_have_more_than_one_table_indexer
 * Address:  1407952a0
 * Signature: undefined cannot_have_more_than_one_table_indexer(void)
 * Body size: 4229 bytes
 */


AstTypeTable *
cannot_have_more_than_one_table_indexer
          (longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char *_Str1;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  void *pvVar21;
  AstTypeReference *this;
  longlong lVar22;
  AstTypeTable *this_00;
  ulonglong uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  longlong lVar26;
  undefined8 uVar27;
  uint *puVar28;
  ulonglong *puVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  longlong lVar32;
  undefined8 local_238;
  undefined8 uStack_230;
  uint local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  uint local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  uint local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8;
  uint local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8;
  ulonglong local_1b8;
  undefined8 uStack_1b0;
  int local_1a4;
  ulonglong local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  ulonglong local_180;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  undefined8 local_160;
  longlong *local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  ulonglong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_dc;
  longlong local_d8;
  uint local_cc;
  ulonglong local_c8;
  undefined8 *local_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined1 local_69;
  longlong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  uVar17 = *(int *)(param_1 + 0x114) + 1;
  *(uint *)(param_1 + 0x114) = uVar17;
  local_69 = param_2;
  if (DAT_141700390 < uVar17) {
                    /* WARNING: Subroutine does not return */
    Luau::ParseError::ParseError_Constructor_or_Destructor
              ((undefined8 *)(param_1 + 0x84),
               "Exceeded allowed recursion depth; simplify your %s to make the code compile",
               "type annotation",param_4);
  }
  local_148 = *(longlong *)(param_1 + 0x2d0) - *(longlong *)(param_1 + 0x2c8);
  local_140 = *(longlong *)(param_1 + 0x2e8) - *(longlong *)(param_1 + 0x2e0);
  local_1a0 = *(ulonglong *)(param_1 + 0x84);
  local_1a4 = *(int *)(param_1 + 0x80);
  local_150 = local_1a0;
  local_68 = param_1;
  if (local_1a4 == 0x7b) {
    FUN_140787100();
  }
  else {
    FUN_14079c360(param_1,0x7b);
  }
  lVar22 = local_68;
  local_158 = (longlong *)(local_68 + 0x2c8);
  local_110 = (longlong *)(local_68 + 0x2e0);
  local_d8 = local_68 + 0x60;
  puVar28 = (uint *)(local_68 + 0x80);
  puVar1 = (uint *)(local_68 + 0x84);
  local_180 = local_150 >> 0x20;
  local_c0 = (undefined8 *)0x0;
  local_c8 = 0;
  local_78 = 0;
LAB_1407953d5:
  do {
    if (*puVar28 == 0x7d) {
      uVar24 = *(undefined8 *)(local_68 + 0x8c);
      uVar19 = 0;
LAB_140795fd1:
      FUN_140787100();
      goto LAB_14079600c;
    }
    if (*puVar28 != 0x119) {
LAB_140795475:
      uVar19 = 3;
      uVar30 = 0;
LAB_140795478:
      uVar17 = *puVar28;
      lVar32 = local_68;
      uVar31 = uVar30;
      if (uVar17 == 0x5b) goto LAB_14079548b;
LAB_1407956c0:
      if ((local_78 == 0) && (local_c0 == (undefined8 *)0x0)) {
        if (uVar17 == 0x119) {
          FUN_1407a1770(local_d8,&local_b8);
          uVar17 = *puVar28;
          lVar32 = local_68;
          if (local_b8 == 0x3a) goto LAB_140795709;
        }
        uVar20 = *(undefined4 *)(lVar32 + 0x114);
        local_b8 = *puVar1;
        uStack_b4 = *(undefined4 *)(lVar22 + 0x88);
        uStack_b0 = *(undefined4 *)(lVar22 + 0x8c);
        uStack_ac = *(undefined4 *)(lVar22 + 0x90);
        uVar24 = 0;
        if ((uVar17 != 0x26) && (uVar17 != 0x7c)) {
          expected_type_got_s(local_b8,&local_108,0,0);
          uVar24 = CONCAT44(uStack_104,local_108);
          *(undefined4 *)(local_68 + 0x114) = uVar20;
          lVar32 = local_68;
        }
        lVar22 = unexpected_after_type_annotation(lVar32,uVar24,&local_b8);
        *(undefined4 *)(local_68 + 0x114) = uVar20;
        if (DAT_141700438 == '\x01') {
          local_138 = local_150;
          uStack_130 = (undefined4)local_150;
          uStack_12c = (undefined4)local_180;
          this = (AstTypeReference *)FUN_1407b5010(*(undefined8 *)(local_68 + 0xd8),0x78);
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_a8 = uStack_a8 & 0xffffff00;
          uStack_170 = uStack_170 & 0xffffff00;
          Luau::AstTypeReference::AstTypeReference
                    (this,&local_138,(undefined8 *)&local_178,*(undefined8 *)(local_68 + 0x120),
                     (undefined8 *)&local_b8,&local_138,0,(undefined8 *)&local_108);
          local_b8 = *(uint *)(lVar22 + 0xc);
          uStack_b4 = *(uint *)(lVar22 + 0x10);
          uStack_b0 = *(uint *)(lVar22 + 0x14);
          uStack_ac = *(uint *)(lVar22 + 0x18);
          local_c0 = (undefined8 *)FUN_1407b5010(*(undefined8 *)(local_68 + 0xd8),0x38);
        }
        else {
          this = (AstTypeReference *)FUN_1407b5010(*(undefined8 *)(local_68 + 0xd8),0x78);
          puVar28 = (uint *)(lVar22 + 0xc);
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_a8 = uStack_a8 & 0xffffff00;
          uStack_170 = uStack_170 & 0xffffff00;
          Luau::AstTypeReference::AstTypeReference
                    (this,(undefined8 *)puVar28,(undefined8 *)&local_178,
                     *(undefined8 *)(local_68 + 0x120),(undefined8 *)&local_b8,(undefined8 *)puVar28
                     ,0,(undefined8 *)&local_108);
          local_b8 = *puVar28;
          uStack_b4 = *(uint *)(lVar22 + 0x10);
          uStack_b0 = *(uint *)(lVar22 + 0x14);
          uStack_ac = *(uint *)(lVar22 + 0x18);
          local_c0 = (undefined8 *)FUN_1407b5010(*(undefined8 *)(local_68 + 0xd8),0x38);
        }
        *local_c0 = this;
        local_c0[1] = lVar22;
        local_c0[2] = CONCAT44(uStack_b4,local_b8);
        local_c0[3] = CONCAT44(uStack_ac,uStack_b0);
        *(undefined4 *)(local_c0 + 4) = uVar19;
        *(uint *)((longlong)local_c0 + 0x24) = local_128;
        *(undefined4 *)(local_c0 + 5) = uStack_124;
        *(undefined4 *)((longlong)local_c0 + 0x2c) = uStack_120;
        *(undefined4 *)(local_c0 + 6) = uStack_11c;
        *(undefined1 *)((longlong)local_c0 + 0x34) = uVar31;
        uVar19 = 1;
        local_78 = 0;
LAB_140795fba:
        uVar24 = *(undefined8 *)(local_68 + 0x8c);
        if (*(int *)(local_68 + 0x80) == 0x7d) goto LAB_140795fd1;
        goto LAB_140795fd8;
      }
LAB_140795709:
      if (uVar17 != 0x119) {
        expected_identifier_when_parsing_s_got_s(lVar32,"table field");
        uVar19 = 0;
        goto LAB_140795fba;
      }
      uVar24 = *(undefined8 *)(lVar32 + 0x98);
      local_178 = *puVar1;
      uStack_174 = *(uint *)(lVar22 + 0x88);
      uStack_170 = *(uint *)(lVar22 + 0x8c);
      uStack_16c = *(uint *)(lVar22 + 0x90);
      FUN_140787100();
      lVar32 = *(longlong *)puVar1;
      if (*puVar28 == 0x3a) {
        FUN_140787100(local_68);
      }
      else {
        FUN_14079c360(local_68,0x3a,"table field");
      }
      uVar20 = *(undefined4 *)(local_68 + 0x114);
      local_b8 = *puVar1;
      uStack_b4 = *(undefined4 *)(lVar22 + 0x88);
      uStack_b0 = *(undefined4 *)(lVar22 + 0x8c);
      uStack_ac = *(undefined4 *)(lVar22 + 0x90);
      if (*(int *)(local_68 + 0x80) == 0x26) {
        uVar27 = 0;
      }
      else {
        uVar27 = 0;
        if (*(int *)(local_68 + 0x80) != 0x7c) {
          expected_type_got_s(local_68,&local_108,0);
          uVar27 = CONCAT44(uStack_104,local_108);
          *(undefined4 *)(local_68 + 0x114) = uVar20;
        }
      }
      uVar27 = unexpected_after_type_annotation(local_68,uVar27);
      *(undefined4 *)(local_68 + 0x114) = uVar20;
      local_b8 = (uint)uVar24;
      uStack_b4 = (uint)((ulonglong)uVar24 >> 0x20);
      uStack_b0 = local_178;
      uStack_ac = uStack_174;
      uStack_a8 = uStack_170;
      uStack_a4 = uStack_16c;
      uStack_a0 = (undefined4)uVar27;
      uStack_9c = (undefined4)((ulonglong)uVar27 >> 0x20);
      uStack_94 = local_128;
      uStack_90 = uStack_124;
      uStack_8c = uStack_120;
      uStack_88._0_5_ = CONCAT14(uVar31,uStack_11c);
      puVar5 = *(uint **)(local_68 + 0x2d0);
      local_98 = uVar19;
      if (puVar5 == *(uint **)(local_68 + 0x2d8)) {
        FUN_1402cc2f0(local_158);
      }
      else {
        *(undefined8 *)(puVar5 + 0xc) = uStack_88;
        *(ulonglong *)(puVar5 + 8) = CONCAT44(local_128,uVar19);
        *(ulonglong *)(puVar5 + 10) = CONCAT44(uStack_120,uStack_124);
        *(ulonglong *)(puVar5 + 4) = CONCAT44(uStack_16c,uStack_170);
        *(undefined8 *)(puVar5 + 6) = uVar27;
        *puVar5 = local_b8;
        puVar5[1] = uStack_b4;
        puVar5[2] = local_178;
        puVar5[3] = uStack_174;
        *(longlong *)(local_68 + 0x2d0) = *(longlong *)(local_68 + 0x2d0) + 0x38;
      }
      if (*(char *)(local_68 + 0x58) == '\x01') {
        local_b8 = 1;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_a4 = (uint)lVar32;
        uStack_a0 = (undefined4)((ulonglong)lVar32 >> 0x20);
        uVar30 = 0;
        uVar19 = 0;
        if (*puVar28 == 0x2c) {
LAB_1407958bb:
          uVar30 = 1;
          uStack_9c = uVar19;
        }
        else if (*puVar28 == 0x3b) {
          uVar19 = 1;
          goto LAB_1407958bb;
        }
        local_98 = CONCAT31(local_98._1_3_,uVar30);
        uStack_94 = (uint)*(undefined8 *)(local_68 + 0x84);
        uStack_90 = (undefined4)((ulonglong)*(undefined8 *)(local_68 + 0x84) >> 0x20);
        uStack_8c = CONCAT31(uStack_8c._1_3_,1);
        uStack_88 = 0;
        uStack_80 = 0;
        puVar6 = *(undefined4 **)(local_68 + 0x2e8);
        if (puVar6 == *(undefined4 **)(local_68 + 0x2f0)) {
          FUN_14020ada0(local_110);
        }
        else {
          *(undefined8 *)(puVar6 + 0xc) = 0;
          *(undefined8 *)(puVar6 + 0xe) = 0;
          *(ulonglong *)(puVar6 + 8) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(puVar6 + 10) = CONCAT44(uStack_8c,uStack_90);
          *(longlong *)(puVar6 + 4) = lVar32 << 0x20;
          *(ulonglong *)(puVar6 + 6) = CONCAT44(uStack_9c,uStack_a0);
          *puVar6 = 1;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          *(longlong *)(local_68 + 0x2e8) = *(longlong *)(local_68 + 0x2e8) + 0x40;
        }
        local_c8 = local_c8 + 1;
      }
      local_78 = local_78 + 1;
      uVar17 = *puVar28;
      if (uVar17 != 0x2c) goto LAB_140795d73;
LAB_1407953d0:
      FUN_140787100(local_68);
      goto LAB_1407953d5;
    }
    FUN_1407a1770(local_d8,&local_b8);
    lVar32 = local_68;
    uVar19 = 3;
    if (local_b8 == 0x3a) goto LAB_140795475;
    _Str1 = *(char **)(local_68 + 0x98);
    if (_Str1 != (char *)0x0) {
      iVar18 = strcmp(_Str1,"read");
      if (iVar18 == 0) {
        local_128 = *puVar1;
        uStack_124 = *(undefined4 *)(lVar22 + 0x88);
        uStack_120 = *(undefined4 *)(lVar22 + 0x8c);
        uStack_11c = *(undefined4 *)(lVar22 + 0x90);
        FUN_1407a0c60(local_d8);
        uVar19 = 1;
        uVar30 = 1;
      }
      else {
        iVar18 = strcmp(_Str1,"write");
        if (iVar18 != 0) {
          uVar17 = *puVar28;
          goto joined_r0x000140795461;
        }
        local_128 = *puVar1;
        uStack_124 = *(undefined4 *)(lVar22 + 0x88);
        uStack_120 = *(undefined4 *)(lVar22 + 0x8c);
        uStack_11c = *(undefined4 *)(lVar22 + 0x90);
        FUN_1407a0c60(local_d8);
        uVar19 = 2;
        uVar30 = 1;
      }
      goto LAB_140795478;
    }
    uVar17 = *puVar28;
joined_r0x000140795461:
    uVar30 = 0;
    uVar31 = 0;
    if (uVar17 != 0x5b) goto LAB_1407956c0;
LAB_14079548b:
    local_108 = *puVar28;
    uStack_104 = *(uint *)(lVar22 + 0x84);
    uStack_100 = *(uint *)(lVar22 + 0x88);
    uStack_fc = *(uint *)(lVar22 + 0x8c);
    local_f8 = *(uint *)(lVar22 + 0x90);
    uStack_f4 = *(undefined4 *)(lVar22 + 0x94);
    uStack_f0 = *(undefined4 *)(lVar22 + 0x98);
    uStack_ec = *(undefined4 *)(lVar22 + 0x9c);
    FUN_140787100();
    if (((*puVar28 & 0xfffffffe) == 0x116) && (FUN_1407a1770(local_d8,&local_b8), local_b8 == 0x5d))
    {
      uVar20 = 0;
      if (*(char *)(local_68 + 0x58) == '\x01') {
        if (*puVar28 == 0x116) {
          uVar20 = FUN_1407a0bb0(puVar28);
          local_cc = 2;
        }
        else if (*puVar28 == 0x117) {
          iVar18 = FUN_1407a0bd0(puVar28);
          local_cc = (uint)(iVar18 == 1);
        }
        else {
          local_cc = 3;
        }
      }
      local_198 = *(undefined8 *)(local_68 + 0x84);
      local_1b8 = 0;
      uStack_1b0 = 0;
      puVar29 = (ulonglong *)0x0;
      if (*(char *)(local_68 + 0x58) != '\0') {
        puVar29 = &local_1b8;
      }
      FUN_1407922e0(local_68,&local_178,puVar29);
      local_190 = *(longlong *)puVar1;
      local_b8 = local_108;
      uStack_b4 = uStack_104;
      uStack_b0 = uStack_100;
      if (*puVar28 == 0x5d) {
        FUN_140787100(local_68);
      }
      else {
        expected_s_to_close_s_at_column_d_got_ss(local_68,0x5d,&local_b8,0);
        FUN_14079c3d0(local_68);
      }
      local_188 = *(longlong *)puVar1;
      if (*puVar28 == 0x3a) {
        FUN_140787100(local_68);
      }
      else {
        FUN_14079c360(local_68,0x3a,"table field");
      }
      uVar4 = *(undefined4 *)(local_68 + 0x114);
      local_b8 = *puVar1;
      uStack_b4 = *(uint *)(lVar22 + 0x88);
      uStack_b0 = *(uint *)(lVar22 + 0x8c);
      uStack_ac = *(uint *)(lVar22 + 0x90);
      if (*(int *)(local_68 + 0x80) == 0x26) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        if (*(int *)(local_68 + 0x80) != 0x7c) {
          expected_type_got_s(local_68,&local_138,0);
          *(undefined4 *)(local_68 + 0x114) = uVar4;
          uVar23 = local_138;
        }
      }
      uVar24 = unexpected_after_type_annotation(local_68,uVar23,&local_b8);
      lVar32 = local_68;
      uVar15 = uStack_174;
      uVar17 = local_178;
      *(undefined4 *)(local_68 + 0x114) = uVar4;
      local_dc = uVar20;
      if (((char)local_168 == '\x01') &&
         (pvVar21 = memchr((void *)CONCAT44(uStack_174,local_178),0,CONCAT44(uStack_16c,uStack_170))
         , pvVar21 == (void *)0x0)) {
        local_b8 = uVar17;
        uStack_b4 = uVar15;
        uStack_b0 = uStack_104;
        uStack_ac = uStack_100;
        uStack_a8 = uStack_fc;
        uStack_a4 = local_f8;
        uStack_a0 = (undefined4)uVar24;
        uStack_9c = (undefined4)((ulonglong)uVar24 >> 0x20);
        uStack_94 = local_128;
        uStack_90 = uStack_124;
        uStack_8c = uStack_120;
        uStack_88._0_5_ = CONCAT14(uVar30,uStack_11c);
        puVar5 = *(uint **)(lVar32 + 0x2d0);
        local_98 = uVar19;
        if (puVar5 == *(uint **)(lVar32 + 0x2d8)) {
          FUN_1402cc2f0(local_158,puVar5,&local_b8);
        }
        else {
          *(undefined8 *)(puVar5 + 0xc) = uStack_88;
          *(ulonglong *)(puVar5 + 8) = CONCAT44(local_128,uVar19);
          *(ulonglong *)(puVar5 + 10) = CONCAT44(uStack_120,uStack_124);
          *(ulonglong *)(puVar5 + 4) = CONCAT44(local_f8,uStack_fc);
          *(undefined8 *)(puVar5 + 6) = uVar24;
          *puVar5 = uVar17;
          puVar5[1] = uVar15;
          puVar5[2] = uStack_104;
          puVar5[3] = uStack_100;
          *(longlong *)(lVar32 + 0x2d0) = *(longlong *)(lVar32 + 0x2d0) + 0x38;
        }
        local_78 = local_78 + 1;
        if (*(char *)(local_68 + 0x58) == '\x01') {
          local_b8 = 2;
          uStack_b4 = uStack_104;
          uStack_b0 = uStack_100;
          uStack_ac = (uint)local_190;
          uStack_a8 = (uint)((ulonglong)local_190 >> 0x20);
          uStack_a4 = (uint)local_188;
          uStack_a0 = (undefined4)((ulonglong)local_188 >> 0x20);
          uVar30 = 0;
          uVar19 = 0;
          if (*puVar28 == 0x2c) {
LAB_140795c88:
            uVar30 = 1;
            uStack_9c = uVar19;
          }
          else if (*puVar28 == 0x3b) {
            uVar19 = 1;
            goto LAB_140795c88;
          }
          local_98 = CONCAT31(local_98._1_3_,uVar30);
          uStack_94 = (uint)*(undefined8 *)(local_68 + 0x84);
          uStack_90 = (undefined4)((ulonglong)*(undefined8 *)(local_68 + 0x84) >> 0x20);
          uStack_8c = CONCAT31(uStack_8c._1_3_,1);
          uVar24 = FUN_1407b5010(*(undefined8 *)(local_68 + 0xd8),0x20);
          local_138 = local_1b8;
          uStack_130 = (undefined4)uStack_1b0;
          uStack_12c = uStack_1b0._4_4_;
          FUN_14079eec0(uVar24,&local_138);
          uStack_80 = local_198;
          puVar5 = *(uint **)(local_68 + 0x2e8);
          uStack_88 = uVar24;
          if (puVar5 == *(uint **)(local_68 + 0x2f0)) {
            FUN_14020ada0(local_110);
          }
          else {
            *(undefined8 *)(puVar5 + 0xc) = uVar24;
            *(undefined8 *)(puVar5 + 0xe) = local_198;
            *(ulonglong *)(puVar5 + 8) = CONCAT44(uStack_94,local_98);
            *(ulonglong *)(puVar5 + 10) = CONCAT44(uStack_8c,uStack_90);
            *(ulonglong *)(puVar5 + 4) = CONCAT44(uStack_a4,uStack_a8);
            *(ulonglong *)(puVar5 + 6) = CONCAT44(uStack_9c,uStack_a0);
            *puVar5 = local_b8;
            puVar5[1] = uStack_b4;
            puVar5[2] = uStack_b0;
            puVar5[3] = uStack_ac;
            *(longlong *)(local_68 + 0x2e8) = *(longlong *)(local_68 + 0x2e8) + 0x40;
          }
LAB_140795d54:
          local_c8 = local_c8 + 1;
        }
      }
      else {
        FUN_14078f3b0(lVar32,&uStack_104);
      }
    }
    else if (local_c0 == (undefined8 *)0x0) {
      local_218 = CONCAT44(uStack_104,local_108);
      uStack_210 = CONCAT44(uStack_fc,uStack_100);
      local_208 = local_f8;
      uStack_204 = uStack_f4;
      uStack_200 = uStack_f0;
      uStack_1fc = uStack_ec;
      local_1d8 = local_128;
      uStack_1d4 = uStack_124;
      uStack_1d0 = uStack_120;
      uStack_1cc = uStack_11c;
      local_1c8 = uVar30;
      FUN_140792660(local_68,&local_178,uVar19,&local_1d8,&local_218);
      local_c0 = (undefined8 *)CONCAT44(uStack_174,local_178);
      if (*(char *)(local_68 + 0x58) == '\x01') {
        local_b8 = 0;
        uStack_b4 = uStack_170;
        uStack_b0 = uStack_16c;
        uStack_ac = local_168;
        uStack_a8 = uStack_164;
        uStack_a4 = (uint)local_160;
        uStack_a0 = (undefined4)((ulonglong)local_160 >> 0x20);
        uVar30 = 0;
        uVar19 = 0;
        if (*puVar28 == 0x2c) {
LAB_14079562f:
          uVar30 = 1;
          uStack_9c = uVar19;
        }
        else if (*puVar28 == 0x3b) {
          uVar19 = 1;
          goto LAB_14079562f;
        }
        local_98 = CONCAT31(local_98._1_3_,uVar30);
        uStack_94 = (uint)*(undefined8 *)(local_68 + 0x84);
        uStack_90 = (undefined4)((ulonglong)*(undefined8 *)(local_68 + 0x84) >> 0x20);
        uStack_8c = CONCAT31(uStack_8c._1_3_,1);
        uStack_88 = 0;
        uStack_80 = 0;
        puVar6 = *(undefined4 **)(local_68 + 0x2e8);
        if (puVar6 == *(undefined4 **)(local_68 + 0x2f0)) {
          FUN_14020ada0(local_110);
        }
        else {
          *(undefined8 *)(puVar6 + 0xc) = 0;
          *(undefined8 *)(puVar6 + 0xe) = 0;
          *(ulonglong *)(puVar6 + 8) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(puVar6 + 10) = CONCAT44(uStack_8c,uStack_90);
          *(ulonglong *)(puVar6 + 4) = CONCAT44(uStack_a4,uStack_164);
          *(ulonglong *)(puVar6 + 6) = CONCAT44(uStack_9c,uStack_a0);
          *puVar6 = 0;
          puVar6[1] = uStack_170;
          puVar6[2] = uStack_16c;
          puVar6[3] = local_168;
          *(longlong *)(local_68 + 0x2e8) = *(longlong *)(local_68 + 0x2e8) + 0x40;
        }
        goto LAB_140795d54;
      }
    }
    else {
      local_238 = CONCAT44(uStack_104,local_108);
      uStack_230 = CONCAT44(uStack_fc,uStack_100);
      local_228 = local_f8;
      uStack_224 = uStack_f4;
      uStack_220 = uStack_f0;
      uStack_21c = uStack_ec;
      local_1f8 = local_128;
      uStack_1f4 = uStack_124;
      uStack_1f0 = uStack_120;
      uStack_1ec = uStack_11c;
      local_1e8 = uVar30;
      FUN_140792660(local_68,&local_b8,uVar19,&local_1f8,&local_238);
      FUN_14078f3b0(local_68,CONCAT44(uStack_b4,local_b8) + 0x10);
    }
    uVar17 = *puVar28;
    if (uVar17 == 0x2c) goto LAB_1407953d0;
LAB_140795d73:
    if (uVar17 == 0x3b) goto LAB_1407953d0;
    if (uVar17 != 0x7d) {
      uVar24 = *(undefined8 *)(local_68 + 0x8c);
      uVar19 = 0;
LAB_140795fd8:
      expected_s_to_close_s_at_column_d_got_ss(local_68,0x7d,&local_1a4,0);
      cVar16 = FUN_14079c3d0(local_68,0x7d);
      if (cVar16 == '\0') {
        uVar24 = *(undefined8 *)(local_68 + 0xa8);
      }
LAB_14079600c:
      uVar27 = *(undefined8 *)(local_68 + 0xd8);
      if (local_78 == 0) {
        local_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
      }
      else {
        lVar32 = *local_158 + local_148;
        lVar22 = FUN_1407b5010(uVar27,local_78 * 0x38);
        local_b8 = (uint)lVar22;
        uStack_b4 = (uint)((ulonglong)lVar22 >> 0x20);
        uStack_b0 = (uint)local_78;
        uStack_ac = (uint)(local_78 >> 0x20);
        if (local_78 == 1) {
          uVar23 = 0;
        }
        else {
          lVar26 = 0;
          uVar23 = 0;
          do {
            *(undefined8 *)(lVar22 + 0x30 + lVar26) = *(undefined8 *)(lVar32 + 0x30 + lVar26);
            uVar9 = *(undefined8 *)(lVar32 + lVar26);
            uVar10 = ((undefined8 *)(lVar32 + lVar26))[1];
            puVar25 = (undefined8 *)(lVar32 + 0x10 + lVar26);
            uVar11 = *puVar25;
            uVar12 = puVar25[1];
            puVar25 = (undefined8 *)(lVar32 + 0x20 + lVar26);
            uVar13 = puVar25[1];
            puVar3 = (undefined8 *)(lVar22 + 0x20 + lVar26);
            *puVar3 = *puVar25;
            puVar3[1] = uVar13;
            puVar25 = (undefined8 *)(lVar22 + 0x10 + lVar26);
            *puVar25 = uVar11;
            puVar25[1] = uVar12;
            *(undefined8 *)(lVar22 + lVar26) = uVar9;
            ((undefined8 *)(lVar22 + lVar26))[1] = uVar10;
            puVar6 = (undefined4 *)(lVar32 + 0x38 + lVar26);
            uVar20 = puVar6[1];
            uVar4 = puVar6[2];
            uVar7 = puVar6[3];
            puVar25 = (undefined8 *)(lVar32 + 0x48 + lVar26);
            uVar9 = *puVar25;
            uVar10 = puVar25[1];
            puVar25 = (undefined8 *)(lVar32 + 0x58 + lVar26);
            uVar11 = *puVar25;
            uVar12 = puVar25[1];
            puVar2 = (undefined4 *)(lVar22 + 0x38 + lVar26);
            *puVar2 = *puVar6;
            puVar2[1] = uVar20;
            puVar2[2] = uVar4;
            puVar2[3] = uVar7;
            puVar25 = (undefined8 *)(lVar22 + 0x48 + lVar26);
            *puVar25 = uVar9;
            puVar25[1] = uVar10;
            puVar25 = (undefined8 *)(lVar22 + 0x58 + lVar26);
            *puVar25 = uVar11;
            puVar25[1] = uVar12;
            *(undefined8 *)(lVar22 + 0x68 + lVar26) = *(undefined8 *)(lVar32 + 0x68 + lVar26);
            uVar23 = uVar23 + 2;
            lVar26 = lVar26 + 0x70;
          } while ((local_78 & 0xfffffffffffffffe) != uVar23);
        }
        if ((local_78 & 1) != 0) {
          lVar26 = uVar23 * 0x38;
          *(undefined8 *)(lVar22 + 0x30 + lVar26) = *(undefined8 *)(lVar32 + 0x30 + lVar26);
          puVar6 = (undefined4 *)(lVar32 + lVar26);
          uVar20 = *puVar6;
          uVar4 = puVar6[1];
          uVar7 = puVar6[2];
          uVar8 = puVar6[3];
          puVar25 = (undefined8 *)(lVar32 + 0x10 + lVar26);
          uVar9 = *puVar25;
          uVar10 = puVar25[1];
          puVar25 = (undefined8 *)(lVar32 + 0x20 + lVar26);
          uVar11 = puVar25[1];
          puVar3 = (undefined8 *)(lVar22 + 0x20 + lVar26);
          *puVar3 = *puVar25;
          puVar3[1] = uVar11;
          puVar25 = (undefined8 *)(lVar22 + 0x10 + lVar26);
          *puVar25 = uVar9;
          puVar25[1] = uVar10;
          puVar6 = (undefined4 *)(lVar22 + lVar26);
          *puVar6 = uVar20;
          puVar6[1] = uVar4;
          puVar6[2] = uVar7;
          puVar6[3] = uVar8;
        }
      }
      local_108 = (uint)local_150;
      uStack_104 = (uint)(local_150 >> 0x20);
      uStack_100 = (uint)uVar24;
      uStack_fc = (uint)((ulonglong)uVar24 >> 0x20);
      this_00 = (AstTypeTable *)FUN_1407b5010(uVar27,0x38);
      Luau::AstTypeTable::AstTypeTable
                (this_00,(undefined8 *)&local_108,(undefined8 *)&local_b8,local_c0);
      if (*(char *)(local_68 + 0x58) == '\x01') {
        uVar24 = *(undefined8 *)(local_68 + 0xd8);
        if (local_c8 == 0) {
          lVar22 = 0;
        }
        else {
          lVar32 = *local_110 + local_140;
          lVar22 = FUN_1407b5010(uVar24,local_c8 << 6);
          if (local_c8 == 1) {
            uVar23 = 0;
          }
          else {
            lVar26 = 0x40;
            uVar23 = 0;
            do {
              puVar25 = (undefined8 *)(lVar32 + -0x40 + lVar26);
              uVar27 = *puVar25;
              uVar9 = puVar25[1];
              puVar25 = (undefined8 *)(lVar32 + -0x30 + lVar26);
              uVar10 = *puVar25;
              uVar11 = puVar25[1];
              puVar25 = (undefined8 *)(lVar32 + -0x20 + lVar26);
              uVar12 = *puVar25;
              uVar13 = puVar25[1];
              puVar25 = (undefined8 *)(lVar32 + -0x10 + lVar26);
              uVar14 = puVar25[1];
              puVar3 = (undefined8 *)(lVar22 + -0x10 + lVar26);
              *puVar3 = *puVar25;
              puVar3[1] = uVar14;
              puVar25 = (undefined8 *)(lVar22 + -0x20 + lVar26);
              *puVar25 = uVar12;
              puVar25[1] = uVar13;
              puVar25 = (undefined8 *)(lVar22 + -0x30 + lVar26);
              *puVar25 = uVar10;
              puVar25[1] = uVar11;
              puVar25 = (undefined8 *)(lVar22 + -0x40 + lVar26);
              *puVar25 = uVar27;
              puVar25[1] = uVar9;
              uVar27 = ((undefined8 *)(lVar32 + lVar26))[1];
              puVar25 = (undefined8 *)(lVar32 + 0x10 + lVar26);
              uVar9 = *puVar25;
              uVar10 = puVar25[1];
              puVar25 = (undefined8 *)(lVar32 + 0x20 + lVar26);
              uVar11 = *puVar25;
              uVar12 = puVar25[1];
              puVar25 = (undefined8 *)(lVar32 + 0x30 + lVar26);
              uVar13 = *puVar25;
              uVar14 = puVar25[1];
              *(undefined8 *)(lVar22 + lVar26) = *(undefined8 *)(lVar32 + lVar26);
              ((undefined8 *)(lVar22 + lVar26))[1] = uVar27;
              puVar25 = (undefined8 *)(lVar22 + 0x10 + lVar26);
              *puVar25 = uVar9;
              puVar25[1] = uVar10;
              puVar25 = (undefined8 *)(lVar22 + 0x20 + lVar26);
              *puVar25 = uVar11;
              puVar25[1] = uVar12;
              puVar25 = (undefined8 *)(lVar22 + 0x30 + lVar26);
              *puVar25 = uVar13;
              puVar25[1] = uVar14;
              uVar23 = uVar23 + 2;
              lVar26 = lVar26 + 0x80;
            } while ((local_c8 & 0xfffffffffffffffe) != uVar23);
          }
          if ((local_c8 & 1) != 0) {
            lVar26 = uVar23 * 0x40;
            uVar27 = *(undefined8 *)(lVar32 + lVar26);
            uVar9 = ((undefined8 *)(lVar32 + lVar26))[1];
            puVar25 = (undefined8 *)(lVar32 + 0x10 + lVar26);
            uVar10 = *puVar25;
            uVar11 = puVar25[1];
            puVar25 = (undefined8 *)(lVar32 + 0x20 + lVar26);
            uVar12 = *puVar25;
            uVar13 = puVar25[1];
            puVar25 = (undefined8 *)(lVar32 + 0x30 + lVar26);
            uVar14 = puVar25[1];
            puVar3 = (undefined8 *)(lVar22 + 0x30 + lVar26);
            *puVar3 = *puVar25;
            puVar3[1] = uVar14;
            puVar25 = (undefined8 *)(lVar22 + 0x20 + lVar26);
            *puVar25 = uVar12;
            puVar25[1] = uVar13;
            puVar25 = (undefined8 *)(lVar22 + 0x10 + lVar26);
            *puVar25 = uVar10;
            puVar25[1] = uVar11;
            *(undefined8 *)(lVar22 + lVar26) = uVar27;
            ((undefined8 *)(lVar22 + lVar26))[1] = uVar9;
          }
        }
        uVar24 = FUN_1407b5010(uVar24,0x20);
        local_b8 = (uint)lVar22;
        uStack_b4 = (uint)((ulonglong)lVar22 >> 0x20);
        uStack_b0 = (uint)local_c8;
        uStack_ac = (uint)(local_c8 >> 0x20);
        FUN_14079f230(uVar24,&local_b8,uVar19);
        local_b8 = (uint)this_00;
        uStack_b4 = (uint)((ulonglong)this_00 >> 0x20);
        puVar25 = (undefined8 *)FUN_14078e300(local_68 + 0x420,&local_b8);
        *puVar25 = uVar24;
      }
      local_140 = local_140 + *(longlong *)(local_68 + 0x2e0);
      if (local_140 != *(longlong *)(local_68 + 0x2e8)) {
        *(longlong *)(local_68 + 0x2e8) = local_140;
      }
      local_148 = local_148 + *(longlong *)(local_68 + 0x2c8);
      if (local_148 != *(longlong *)(local_68 + 0x2d0)) {
        *(longlong *)(local_68 + 0x2d0) = local_148;
      }
      return this_00;
    }
  } while( true );
}

