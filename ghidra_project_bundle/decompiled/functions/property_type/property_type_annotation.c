/**
 * Function: property_type_annotation
 * Address:  14078c510
 * Signature: undefined property_type_annotation(void)
 * Body size: 5379 bytes
 */


AstStatDeclareFunction *
property_type_annotation(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  void *pvVar15;
  AstTypePackExplicit *pAVar16;
  int iVar17;
  int iVar18;
  AstStatDeclareFunction *pAVar19;
  longlong lVar20;
  AstStatDeclareGlobal *this;
  undefined8 uVar21;
  void *pvVar22;
  AstStatDeclareExternType *this_00;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint *puVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  char *pcVar35;
  uint local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  uint local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d4 [16];
  undefined1 local_1c4;
  undefined1 local_1c0 [16];
  undefined1 local_1b0;
  int local_1ac;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_170;
  longlong local_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  size_t sStack_110;
  ulonglong local_108;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  size_t local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  size_t sStack_c8;
  ulonglong uStack_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong *local_a0;
  undefined8 local_98;
  AstTypePackExplicit *local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  puVar1 = (uint *)(param_1 + 0x80);
  iVar18 = *(int *)(param_1 + 0x80);
  local_68 = param_1;
  if (param_3[1] == 0) {
    if (iVar18 != 299) {
      pcVar35 = *(char **)(param_1 + 0x98);
      if (pcVar35 != (char *)0x0) {
        iVar17 = strcmp(pcVar35,"class");
        if ((iVar17 == 0) || (iVar17 = strcmp(pcVar35,"extern"), iVar17 == 0)) {
          iVar18 = strcmp(pcVar35,"extern");
          if (iVar18 != 0) {
LAB_14078cc25:
            FUN_140787100(param_1);
            puVar28 = (uint *)(param_1 + 0x84);
            local_e8 = *(undefined8 *)(param_1 + 0x84);
            if (*(int *)(param_1 + 0x80) == 0x119) {
              local_148 = *(undefined8 *)(param_1 + 0x98);
              uStack_140 = *(undefined8 *)puVar28;
              local_138 = *(undefined8 *)(param_1 + 0x8c);
              FUN_140787100(param_1);
            }
            else {
              expected_identifier_when_parsing_s_got_s(param_1,"type name");
              uStack_140 = *(undefined8 *)(param_1 + 0x84);
              local_148 = *(undefined8 *)(param_1 + 0x128);
              local_138 = uStack_140;
            }
            if ((*(char **)(param_1 + 0x98) == (char *)0x0) ||
               (iVar17 = strcmp(*(char **)(param_1 + 0x98),"extends"), iVar17 != 0)) {
              local_98 = (ulonglong)local_98._4_4_ << 0x20;
            }
            else {
              FUN_140787100(param_1);
              if (*(int *)(param_1 + 0x80) == 0x119) {
                local_f0 = *(undefined8 **)(param_1 + 0x98);
                uVar21 = FUN_140787100(param_1);
              }
              else {
                expected_identifier_when_parsing_s_got_s(param_1,"supertype name");
                uVar21 = *(undefined8 *)(param_1 + 0x128);
                local_f0 = (undefined8 *)uVar21;
              }
              local_98 = CONCAT44(local_98._4_4_,(int)CONCAT71((int7)((ulonglong)uVar21 >> 8),1));
            }
            if (iVar18 == 0) {
              pcVar35 = *(char **)(param_1 + 0x98);
              if ((pcVar35 == (char *)0x0) || (iVar18 = strcmp(pcVar35,"with"), iVar18 != 0)) {
                FUN_14078f3b0(param_1,puVar28,
                              "Expected `with` keyword before listing properties of the external type, but got %s instead"
                              ,pcVar35);
              }
              else {
                FUN_140787100(param_1);
              }
            }
            local_170 = param_1 + 0x60;
            local_a0 = (longlong *)(param_1 + 0x328);
            local_90 = (AstTypePackExplicit *)
                       (*(longlong *)(param_1 + 0x330) - *(longlong *)(param_1 + 0x328));
            uVar29 = 0;
            local_f8 = (longlong *)0x0;
            lVar27 = param_1;
LAB_14078d27d:
            do {
              uVar6 = *puVar1;
              if (uVar6 == 0x128) {
LAB_14078d850:
                uVar21 = *(undefined8 *)(lVar27 + 0x8c);
                FUN_140787100(lVar27);
                pAVar16 = local_90;
                uVar25 = *(undefined8 *)(local_68 + 0xd8);
                if (uVar29 == 0) {
                  local_88 = 0;
                  uStack_84 = 0;
                  uStack_80 = 0;
                  uStack_7c = 0;
                }
                else {
                  lVar27 = *local_a0;
                  lVar33 = FUN_1407b5010(uVar25,uVar29 * 0x38);
                  local_88 = (uint)lVar33;
                  uStack_84 = (undefined4)((ulonglong)lVar33 >> 0x20);
                  uStack_80 = (undefined4)uVar29;
                  uStack_7c = (undefined4)(uVar29 >> 0x20);
                  if (uVar29 == 1) {
                    uVar31 = 0;
                  }
                  else {
                    lVar32 = 0;
                    uVar31 = 0;
                    do {
                      *(undefined8 *)(lVar33 + 0x30 + lVar32) =
                           *(undefined8 *)
                            ((longlong)&(pAVar16->AstNode_data).offset_0x28 + lVar32 + lVar27);
                      puVar23 = (undefined8 *)((longlong)&pAVar16->vftablePtr + lVar32 + lVar27);
                      uVar24 = *puVar23;
                      uVar10 = puVar23[1];
                      puVar23 = (undefined8 *)
                                ((longlong)&(pAVar16->AstNode_data).offset_0x4 + lVar32 + lVar27 + 4
                                );
                      uVar11 = *puVar23;
                      uVar12 = puVar23[1];
                      puVar23 = (undefined8 *)
                                ((longlong)&(pAVar16->AstNode_data).offset_0x18 + lVar32 + lVar27);
                      uVar13 = puVar23[1];
                      puVar3 = (undefined8 *)(lVar33 + 0x20 + lVar32);
                      *puVar3 = *puVar23;
                      puVar3[1] = uVar13;
                      puVar23 = (undefined8 *)(lVar33 + 0x10 + lVar32);
                      *puVar23 = uVar11;
                      puVar23[1] = uVar12;
                      *(undefined8 *)(lVar33 + lVar32) = uVar24;
                      ((undefined8 *)(lVar33 + lVar32))[1] = uVar10;
                      puVar2 = (undefined4 *)
                               ((longlong)&(pAVar16->AstNode_data).offset_0x30 + lVar32 + lVar27);
                      uVar5 = puVar2[1];
                      uVar7 = puVar2[2];
                      uVar8 = puVar2[3];
                      puVar23 = (undefined8 *)
                                (&(pAVar16->AstNode_data).offset_0x40 + lVar32 + lVar27);
                      uVar24 = *puVar23;
                      uVar10 = puVar23[1];
                      puVar23 = (undefined8 *)
                                ((longlong)&(pAVar16->AstNode_data).offset_0x50 + lVar32 + lVar27);
                      uVar11 = *puVar23;
                      uVar12 = puVar23[1];
                      puVar4 = (undefined4 *)(lVar33 + 0x38 + lVar32);
                      *puVar4 = *puVar2;
                      puVar4[1] = uVar5;
                      puVar4[2] = uVar7;
                      puVar4[3] = uVar8;
                      puVar23 = (undefined8 *)(lVar33 + 0x48 + lVar32);
                      *puVar23 = uVar24;
                      puVar23[1] = uVar10;
                      puVar23 = (undefined8 *)(lVar33 + 0x58 + lVar32);
                      *puVar23 = uVar11;
                      puVar23[1] = uVar12;
                      *(undefined8 *)(lVar33 + 0x68 + lVar32) =
                           *(undefined8 *)
                            ((longlong)&(pAVar16->AstNode_data).offset_0x60 + lVar32 + lVar27);
                      uVar31 = uVar31 + 2;
                      lVar32 = lVar32 + 0x70;
                    } while ((uVar29 & 0xfffffffffffffffe) != uVar31);
                  }
                  if ((uVar29 & 1) != 0) {
                    lVar32 = uVar31 * 0x38;
                    *(undefined8 *)(lVar33 + 0x30 + lVar32) =
                         *(undefined8 *)
                          ((longlong)&(pAVar16->AstNode_data).offset_0x28 + lVar32 + lVar27);
                    puVar2 = (undefined4 *)((longlong)&pAVar16->vftablePtr + lVar32 + lVar27);
                    uVar5 = *puVar2;
                    uVar7 = puVar2[1];
                    uVar8 = puVar2[2];
                    uVar9 = puVar2[3];
                    puVar23 = (undefined8 *)
                              ((longlong)&(pAVar16->AstNode_data).offset_0x4 + lVar32 + lVar27 + 4);
                    uVar24 = *puVar23;
                    uVar10 = puVar23[1];
                    puVar23 = (undefined8 *)
                              ((longlong)&(pAVar16->AstNode_data).offset_0x18 + lVar32 + lVar27);
                    uVar11 = puVar23[1];
                    puVar3 = (undefined8 *)(lVar33 + 0x20 + lVar32);
                    *puVar3 = *puVar23;
                    puVar3[1] = uVar11;
                    puVar23 = (undefined8 *)(lVar33 + 0x10 + lVar32);
                    *puVar23 = uVar24;
                    puVar23[1] = uVar10;
                    puVar2 = (undefined4 *)(lVar33 + lVar32);
                    *puVar2 = uVar5;
                    puVar2[1] = uVar7;
                    puVar2[2] = uVar8;
                    puVar2[3] = uVar9;
                  }
                }
                local_118 = (longlong *)local_e8;
                sStack_110 = uVar21;
                this_00 = (AstStatDeclareExternType *)FUN_1407b5010(uVar25,0x58);
                local_d8 = (uint)local_f0;
                uStack_d4 = (undefined4)((ulonglong)local_f0 >> 0x20);
                uStack_d0 = CONCAT31(uStack_d0._1_3_,(char)local_98);
                Luau::AstStatDeclareExternType::AstStatDeclareExternType
                          (this_00,&local_118,&local_148,(undefined8 *)&local_d8,
                           (undefined8 *)&local_88,local_f8);
LAB_14078d9de:
                lVar27 = (longlong)&local_90->vftablePtr + *(longlong *)(local_68 + 0x328);
                if (lVar27 == *(longlong *)(local_68 + 0x330)) {
                  return (AstStatDeclareFunction *)this_00;
                }
                *(longlong *)(local_68 + 0x330) = lVar27;
                return (AstStatDeclareFunction *)this_00;
              }
              local_128 = 0;
              uStack_120 = 0;
              if ((uVar6 & 0xfffffffe) == 0x11c) {
                FUN_14078fd30(lVar27,&local_d8);
                local_128 = CONCAT44(uStack_d4,local_d8);
                uStack_120 = CONCAT44(uStack_cc,uStack_d0);
                lVar27 = local_68;
                if (*puVar1 != 299) {
                  puVar26 = &local_d8;
                  the_beginning_of_an_interpolated_string(puVar1,puVar26);
                  if (0xf < uStack_c0) {
                    puVar26 = (uint *)CONCAT44(uStack_d4,local_d8);
                  }
                  local_88 = 0;
                  uStack_84 = 0;
                  uStack_80 = 0;
                  uStack_7c = 0;
                  local_118 = (void *)0x0;
                  sStack_110 = 0;
                  this_00 = (AstStatDeclareExternType *)
                            FUN_14078dc30(local_68,puVar28,&local_118,&local_88,
                                          "Expected a method type declaration after attribute, but got %s instead"
                                          ,puVar26);
                  if (uStack_c0 < 0x10) goto LAB_14078d9de;
                  if (uStack_c0 + 1 < 0x1000) {
                    thunk_FUN_140b68ba8();
                  }
                  else {
                    lVar27 = *(longlong *)(CONCAT44(uStack_d4,local_d8) + -8);
                    if (0x1f < (ulonglong)((CONCAT44(uStack_d4,local_d8) + -8) - lVar27))
                    goto LAB_14078da16;
                    thunk_FUN_140b68ba8(lVar27,uStack_c0 + 0x28);
                  }
                  goto LAB_14078d9de;
                }
LAB_14078d2e0:
                function_parameter_list_start(lVar27,&local_d8);
                puVar23 = *(undefined8 **)(local_68 + 0x330);
                if (puVar23 == *(undefined8 **)(local_68 + 0x338)) {
                  FUN_1402cc2f0(local_a0);
                }
                else {
LAB_14078d240:
                  puVar23[6] = CONCAT44(uStack_a4,uStack_a8);
                  puVar23[4] = CONCAT44(uStack_b4,local_b8);
                  puVar23[5] = CONCAT44(uStack_ac,uStack_b0);
                  puVar23[2] = sStack_c8;
                  puVar23[3] = uStack_c0;
                  *puVar23 = CONCAT44(uStack_d4,local_d8);
                  puVar23[1] = CONCAT44(uStack_cc,uStack_d0);
                  *(longlong *)(local_68 + 0x330) = *(longlong *)(local_68 + 0x330) + 0x38;
                }
LAB_14078d273:
                uVar29 = uVar29 + 1;
                lVar27 = local_68;
                goto LAB_14078d27d;
              }
              if (uVar6 != 0x5b) {
                if (uVar6 == 299) goto LAB_14078d2e0;
                if (uVar6 == 0x119) {
                  uVar21 = *(undefined8 *)puVar28;
                  uVar25 = *(undefined8 *)(lVar27 + 0x98);
                  local_118 = *(longlong **)puVar28;
                  sStack_110 = *(size_t *)(param_1 + 0x8c);
                  FUN_140787100(lVar27);
                  if (*puVar1 == 0x3a) {
                    FUN_140787100(local_68);
                  }
                  else {
                    FUN_14079c360(local_68,0x3a,"property type annotation");
                  }
                  uVar5 = *(undefined4 *)(local_68 + 0x114);
                  local_d8 = *puVar28;
                  uStack_d4 = *(undefined4 *)(param_1 + 0x88);
                  uStack_d0 = *(undefined4 *)(param_1 + 0x8c);
                  uStack_cc = *(undefined4 *)(param_1 + 0x90);
                  if (*(int *)(local_68 + 0x80) == 0x26) {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = 0;
                    if (*(int *)(local_68 + 0x80) != 0x7c) {
                      expected_type_got_s(local_68,&local_88,0);
                      uVar24 = CONCAT44(uStack_84,local_88);
                      *(undefined4 *)(local_68 + 0x114) = uVar5;
                    }
                  }
                  uStack_c0 = unexpected_after_type_annotation(local_68,uVar24);
                  *(undefined4 *)(local_68 + 0x114) = uVar5;
                  local_d8 = (uint)uVar25;
                  uStack_d4 = (undefined4)((ulonglong)uVar25 >> 0x20);
                  uStack_d0 = (undefined4)local_118;
                  uStack_cc = local_118._4_4_;
                  sStack_c8 = sStack_110;
                  local_b8 = local_b8 & 0xffffff00;
                  uStack_b4 = (undefined4)uVar21;
                  uStack_b0 = (undefined4)((ulonglong)uVar21 >> 0x20);
                  uStack_ac = (undefined4)*(undefined8 *)(local_68 + 0xa8);
                  uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)(local_68 + 0xa8) >> 0x20);
                  puVar23 = *(undefined8 **)(local_68 + 0x330);
                  if (puVar23 != *(undefined8 **)(local_68 + 0x338)) goto LAB_14078d240;
                  FUN_1402cc2f0(local_a0);
                  goto LAB_14078d273;
                }
                expected_identifier_when_parsing_s_got_s(lVar27,"property name");
                lVar27 = local_68;
                goto LAB_14078d850;
              }
              local_88 = *puVar1;
              uStack_84 = *(undefined4 *)(param_1 + 0x84);
              uStack_80 = *(undefined4 *)(param_1 + 0x88);
              uStack_7c = *(undefined4 *)(param_1 + 0x8c);
              local_78 = *(undefined8 *)(param_1 + 0x90);
              uStack_70 = *(undefined4 *)(param_1 + 0x98);
              uStack_6c = *(undefined4 *)(param_1 + 0x9c);
              FUN_140787100(lVar27);
              if (((*puVar1 & 0xfffffffe) == 0x116) &&
                 (FUN_1407a1770(local_170,&local_d8), local_d8 == 0x5d)) {
                uVar21 = *(undefined8 *)(local_68 + 0x84);
                FUN_1407922e0(local_68,&local_118,0);
                local_e0 = *(size_t *)(local_68 + 0xa8);
                local_d8 = local_88;
                uStack_d4 = uStack_84;
                uStack_d0 = uStack_80;
                if (*(int *)(local_68 + 0x80) == 0x5d) {
                  FUN_140787100();
                }
                else {
                  expected_s_to_close_s_at_column_d_got_ss(local_68,0x5d,&local_d8,0);
                  FUN_14079c3d0(local_68);
                }
                if (*puVar1 == 0x3a) {
                  FUN_140787100(local_68);
                }
                else {
                  FUN_14079c360(local_68,0x3a,"property type annotation");
                }
                uVar5 = *(undefined4 *)(local_68 + 0x114);
                local_d8 = *puVar28;
                uStack_d4 = *(undefined4 *)(param_1 + 0x88);
                uStack_d0 = *(undefined4 *)(param_1 + 0x8c);
                uStack_cc = *(undefined4 *)(param_1 + 0x90);
                if (*(int *)(local_68 + 0x80) == 0x26) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = 0;
                  if (*(int *)(local_68 + 0x80) != 0x7c) {
                    expected_type_got_s(local_68,&local_188,0);
                    *(undefined4 *)(local_68 + 0x114) = uVar5;
                    uVar25 = local_188;
                  }
                }
                uVar31 = unexpected_after_type_annotation(local_68,uVar25,&local_d8);
                pvVar15 = local_118;
                *(undefined4 *)(local_68 + 0x114) = uVar5;
                if (((char)local_108 == '\x01') &&
                   (pvVar22 = memchr(local_118,0,sStack_110), uVar6 = local_b8,
                   pvVar22 == (void *)0x0)) {
                  local_d8 = (uint)pvVar15;
                  uStack_d4 = (undefined4)((ulonglong)pvVar15 >> 0x20);
                  uStack_d0 = (undefined4)uVar21;
                  uStack_cc = (undefined4)((ulonglong)uVar21 >> 0x20);
                  sStack_c8 = local_e0;
                  local_b8 = local_b8 & 0xffffff00;
                  uStack_b4 = uStack_84;
                  uStack_b0 = uStack_80;
                  uStack_ac = (undefined4)*(undefined8 *)(local_68 + 0xa8);
                  uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)(local_68 + 0xa8) >> 0x20);
                  puVar23 = *(undefined8 **)(local_68 + 0x330);
                  uStack_c0 = uVar31;
                  if (puVar23 == *(undefined8 **)(local_68 + 0x338)) {
                    FUN_1402cc2f0(local_a0);
                    uVar29 = uVar29 + 1;
                    lVar27 = local_68;
                  }
                  else {
                    puVar23[6] = CONCAT44(uStack_a4,uStack_a8);
                    puVar23[4] = CONCAT44(uStack_84,uVar6) & 0xffffffffffffff00;
                    puVar23[5] = CONCAT44(uStack_ac,uStack_80);
                    puVar23[2] = local_e0;
                    puVar23[3] = uVar31;
                    *puVar23 = pvVar15;
                    puVar23[1] = uVar21;
                    *(longlong *)(local_68 + 0x330) = *(longlong *)(local_68 + 0x330) + 0x38;
                    uVar29 = uVar29 + 1;
                    lVar27 = local_68;
                  }
                }
                else {
                  FUN_14078f3b0(local_68,&uStack_84);
                  lVar27 = local_68;
                }
              }
              else if (local_f8 == (longlong *)0x0) {
                local_1f8 = local_88;
                uStack_1f4 = uStack_84;
                uStack_1f0 = uStack_80;
                uStack_1ec = uStack_7c;
                local_1e8 = (undefined4)local_78;
                uStack_1e4 = local_78._4_4_;
                uStack_1e0 = uStack_70;
                uStack_1dc = uStack_6c;
                local_1b0 = 0;
                FUN_140792660(local_68,&local_d8,3,local_1c0,&local_1f8);
                local_f8 = (longlong *)CONCAT44(uStack_d4,local_d8);
                lVar27 = local_68;
              }
              else {
                local_218 = local_88;
                uStack_214 = uStack_84;
                uStack_210 = uStack_80;
                uStack_20c = uStack_7c;
                local_208 = (undefined4)local_78;
                uStack_204 = local_78._4_4_;
                uStack_200 = uStack_70;
                uStack_1fc = uStack_6c;
                local_1c4 = 0;
                FUN_140792660(local_68,&local_d8,3,local_1d4,&local_218);
                FUN_14078f3b0(local_68,CONCAT44(uStack_d4,local_d8) + 0x10);
                lVar27 = local_68;
              }
            } while( true );
          }
          FUN_140787100(param_1);
          if ((*(char **)(param_1 + 0x98) != (char *)0x0) &&
             (iVar17 = strcmp(*(char **)(param_1 + 0x98),"type"), iVar17 == 0)) goto LAB_14078cc25;
          param_2 = (undefined8 *)(param_1 + 0x84);
          pcVar35 = "Expected `type` keyword after `extern`, but got %s instead";
          goto LAB_14078cf02;
        }
      }
      if (iVar18 == 0x119) {
        uStack_d0 = *(undefined4 *)(param_1 + 0x84);
        uStack_cc = *(undefined4 *)(param_1 + 0x88);
        sStack_c8 = *(size_t *)(param_1 + 0x8c);
        FUN_140787100(param_1);
        local_d8 = (uint)pcVar35;
        uStack_d4 = (undefined4)((ulonglong)pcVar35 >> 0x20);
        uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
        if (*(int *)(param_1 + 0x80) == 0x3a) {
          FUN_140787100(param_1);
        }
        else {
          FUN_14079c360(param_1,0x3a,"global variable declaration");
        }
        uVar5 = *(undefined4 *)(param_1 + 0x114);
        local_88 = *(uint *)(param_1 + 0x84);
        uStack_84 = *(undefined4 *)(param_1 + 0x88);
        uStack_80 = *(undefined4 *)(param_1 + 0x8c);
        uStack_7c = *(undefined4 *)(param_1 + 0x90);
        uVar21 = 0;
        if ((*(int *)(param_1 + 0x80) != 0x26) && (*(int *)(param_1 + 0x80) != 0x7c)) {
          expected_type_got_s(param_1,&local_148,0,1);
          *(undefined4 *)(param_1 + 0x114) = uVar5;
          uVar21 = local_148;
        }
        lVar27 = unexpected_after_type_annotation(param_1,uVar21,&local_88);
        *(undefined4 *)(param_1 + 0x114) = uVar5;
        local_88 = (uint)*param_2;
        uStack_84 = (undefined4)((ulonglong)*param_2 >> 0x20);
        uStack_80 = (undefined4)*(undefined8 *)(lVar27 + 0x14);
        uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 0x14) >> 0x20);
        this = (AstStatDeclareGlobal *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x48);
        Luau::AstStatDeclareGlobal::AstStatDeclareGlobal
                  (this,(undefined8 *)&local_88,(undefined8 *)&local_d8,(undefined8 *)&uStack_d0,
                   lVar27);
        return (AstStatDeclareFunction *)this;
      }
      expected_identifier_when_parsing_s_got_s(param_1,"global variable name");
      pcVar35 = "declare must be followed by an identifier, \'function\', or \'extern type\'";
LAB_14078cf02:
      uStack_7c = 0;
      uStack_80 = 0;
      uStack_84 = 0;
      local_88 = 0;
      uStack_cc = 0;
      uStack_d0 = 0;
      uStack_d4 = 0;
      local_d8 = 0;
      pAVar19 = (AstStatDeclareFunction *)FUN_14078dc30(param_1,param_2,&local_88,&local_d8,pcVar35)
      ;
      return pAVar19;
    }
  }
  else if (iVar18 != 299) {
    puVar28 = &local_d8;
    the_beginning_of_an_interpolated_string(puVar1,puVar28);
    if (0xf < uStack_c0) {
      puVar28 = (uint *)CONCAT44(uStack_d4,local_d8);
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_148 = 0;
    uStack_140 = 0;
    pAVar19 = (AstStatDeclareFunction *)
              FUN_14078dc30(param_1,param_1 + 0x84,&local_148,&local_88,
                            "Expected a function type declaration after attribute, but got %s instead"
                            ,puVar28);
    if (uStack_c0 < 0x10) {
      return pAVar19;
    }
    lVar27 = CONCAT44(uStack_d4,local_d8);
    uVar29 = uStack_c0 + 1;
    if (0xfff < uVar29) {
      if (0x1f < (ulonglong)((lVar27 + -8) - *(longlong *)(lVar27 + -8))) {
LAB_14078da16:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar29 = uStack_c0 + 0x28;
      lVar27 = *(longlong *)(lVar27 + -8);
    }
    thunk_FUN_140b68ba8(lVar27,uVar29);
    return pAVar19;
  }
  local_1a0 = param_3;
  FUN_140787100(param_1);
  if (*(int *)(param_1 + 0x80) == 0x119) {
    local_148 = *(undefined8 *)(param_1 + 0x98);
    uStack_140 = *(undefined8 *)(param_1 + 0x84);
    local_138 = *(undefined8 *)(param_1 + 0x8c);
    FUN_140787100(param_1);
  }
  else {
    expected_identifier_when_parsing_s_got_s(param_1,"global function name");
    uStack_140 = *(undefined8 *)(param_1 + 0x84);
    local_148 = *(undefined8 *)(param_1 + 0x128);
    local_138 = uStack_140;
  }
  expected_type_pack_after_got_type(param_1,&local_d8,0,0,0,0);
  local_1ac = *(int *)(param_1 + 0x80);
  local_1a8 = *(undefined8 *)(param_1 + 0x84);
  if (local_1ac == 0x28) {
    FUN_140787100(param_1);
  }
  else {
    FUN_14079c360(param_1,0x28);
  }
  local_118 = (longlong *)(param_1 + 0x298);
  sStack_110 = (*(longlong *)(param_1 + 0x2a0) - *(longlong *)(param_1 + 0x298) >> 3) *
               -0x3333333333333333;
  local_108 = 0;
  local_188 = 0;
  uStack_180 = 0;
  if (*(int *)(param_1 + 0x80) == 0x29) {
    local_160 = 0;
    local_168 = 0;
LAB_14078c7ac:
    FUN_140787100(param_1);
  }
  else {
    FUN_14078e590(param_1,&local_88,&local_118,1,0,0,0);
    local_160 = (ulonglong)(byte)uStack_70;
    local_188 = CONCAT44(uStack_7c,uStack_80);
    uStack_180 = local_78;
    local_168 = CONCAT44(uStack_84,local_88);
    if (*puVar1 == 0x29) goto LAB_14078c7ac;
    expected_s_to_close_s_at_column_d_got_ss(param_1,0x29,&local_1ac,0);
    FUN_14079c3d0(param_1,0x29);
  }
  puVar23 = (undefined8 *)(param_1 + 0x84);
  if (*puVar1 == 0x3a) {
LAB_14078c88e:
    FUN_140787100(param_1);
    uVar5 = *(undefined4 *)(param_1 + 0x114);
    local_90 = (AstTypePackExplicit *)exceeded_allowed_recursion_depth_simplify_you(param_1);
    if (*puVar1 == 0x2c) {
      FUN_14078f3b0(param_1,puVar23);
      FUN_140787100(param_1);
    }
    *(undefined4 *)(param_1 + 0x114) = uVar5;
    if (local_90 == (AstTypePackExplicit *)0x0) goto LAB_14078c8dc;
  }
  else {
    if (*puVar1 == 0x107) {
      FUN_14078f3b0(param_1,puVar23);
      goto LAB_14078c88e;
    }
LAB_14078c8dc:
    local_90 = (AstTypePackExplicit *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x38);
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_78 = 0;
    Luau::AstTypePackExplicit::AstTypePackExplicit(local_90,puVar23,(undefined8 *)&local_88);
  }
  uVar29 = local_108;
  plVar14 = local_118;
  local_e0 = *(undefined8 *)(param_1 + 0x8c);
  local_170 = param_1 + 0x2f8;
  local_198 = *(longlong *)(param_1 + 0x300);
  local_190 = *(longlong *)(param_1 + 0x2f8);
  local_e8 = local_198 - local_190;
  local_98 = *(longlong *)(param_1 + 0x378) - *(longlong *)(param_1 + 0x370);
  local_f8 = (longlong *)(param_1 + 0x370);
  local_a0 = (longlong *)0x0;
  lVar33 = sStack_110 * 0x28;
  uVar34 = 0;
  lVar27 = 0;
  local_f0 = param_2;
  for (uVar31 = 0; uVar31 < uVar29; uVar31 = uVar31 + 1) {
    lVar32 = *(longlong *)(*plVar14 + lVar33 + 0x18 + uVar31 * 0x28);
    if (lVar32 == 0) {
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_158 = *local_f0;
      local_150 = local_e0;
      pAVar19 = (AstStatDeclareFunction *)
                FUN_14078dc30(local_68,&local_158,&local_128,&local_88,
                              "All declaration parameters must be annotated");
      goto LAB_14078d0f4;
    }
    if (*(longlong **)(local_68 + 0x300) == *(longlong **)(local_68 + 0x308)) {
      FUN_140029790(local_170);
    }
    else {
      **(longlong **)(local_68 + 0x300) = lVar32;
      *(longlong *)(local_68 + 0x300) = *(longlong *)(local_68 + 0x300) + 8;
    }
    uVar21 = *(undefined8 *)(*plVar14 + lVar33 + uVar31 * 0x28);
    local_88 = (uint)uVar21;
    uStack_84 = (undefined4)((ulonglong)uVar21 >> 0x20);
    puVar23 = (undefined8 *)(*plVar14 + lVar33 + 8 + uVar31 * 0x28);
    uStack_80 = *(undefined4 *)puVar23;
    uStack_7c = *(undefined4 *)((longlong)puVar23 + 4);
    uVar25 = *puVar23;
    local_78 = puVar23[1];
    puVar23 = *(undefined8 **)(local_68 + 0x378);
    if (puVar23 == *(undefined8 **)(local_68 + 0x380)) {
      FUN_14059c4a0(local_f8);
    }
    else {
      puVar23[2] = local_78;
      *puVar23 = uVar21;
      puVar23[1] = uVar25;
      *(longlong *)(local_68 + 0x378) = *(longlong *)(local_68 + 0x378) + 0x18;
    }
    lVar27 = lVar27 + 1;
    uVar34 = uVar34 + 1;
    local_a0 = (longlong *)CONCAT71((int7)((ulonglong)local_a0 >> 8),(char)local_a0 + '\x01');
  }
  if ((local_168 == 0 & (byte)local_160) == 1) {
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_158 = *local_f0;
    local_150 = local_e0;
    pAVar19 = (AstStatDeclareFunction *)
              FUN_14078dc30(local_68,&local_158,&local_128,&local_88,
                            "All declaration parameters must be annotated");
    goto LAB_14078d0f4;
  }
  uVar21 = *(undefined8 *)(local_68 + 0xd8);
  if (uVar34 == 0) {
    local_128 = 0;
    uStack_120 = 0;
  }
  else {
    lVar32 = *local_f8 + local_98;
    local_128 = FUN_1407b5010(uVar21,uVar34 * 0x18);
    if (uVar34 == 1) {
      uVar29 = 0;
    }
    else {
      lVar20 = 0;
      uVar29 = 0;
      do {
        *(undefined8 *)(local_128 + 0x10 + lVar20) = *(undefined8 *)(lVar32 + 0x10 + lVar20);
        uVar25 = ((undefined8 *)(lVar32 + lVar20))[1];
        *(undefined8 *)(local_128 + lVar20) = *(undefined8 *)(lVar32 + lVar20);
        ((undefined8 *)(local_128 + lVar20))[1] = uVar25;
        puVar2 = (undefined4 *)(lVar32 + 0x18 + lVar20);
        uVar5 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar4 = (undefined4 *)(local_128 + 0x18 + lVar20);
        *puVar4 = *puVar2;
        puVar4[1] = uVar5;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        *(undefined8 *)(local_128 + 0x28 + lVar20) = *(undefined8 *)(lVar32 + 0x28 + lVar20);
        uVar29 = uVar29 + 2;
        lVar20 = lVar20 + 0x30;
      } while ((uVar34 & 0xfffffffffffffffe) != uVar29);
    }
    uStack_120 = uVar34;
    if ((uVar34 & 1) != 0) {
      lVar20 = uVar29 * 0x18;
      *(undefined8 *)(local_128 + 0x10 + lVar20) = *(undefined8 *)(lVar32 + 0x10 + lVar20);
      puVar4 = (undefined4 *)(lVar32 + lVar20);
      uVar5 = puVar4[1];
      uVar7 = puVar4[2];
      uVar8 = puVar4[3];
      puVar2 = (undefined4 *)(local_128 + lVar20);
      *puVar2 = *puVar4;
      puVar2[1] = uVar5;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
    }
  }
  if (lVar27 == 0) {
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
  }
  else {
    lVar32 = *(longlong *)(local_68 + 0x2f8);
    lVar20 = FUN_1407b5010(*(undefined8 *)(local_68 + 0xd8),lVar27 * 8);
    local_88 = (uint)lVar20;
    uStack_84 = (undefined4)((ulonglong)lVar20 >> 0x20);
    uStack_80 = (undefined4)lVar27;
    uStack_7c = (undefined4)((ulonglong)lVar27 >> 0x20);
    if (uVar34 < 10) {
      uVar29 = 0;
    }
    else if ((ulonglong)((local_190 + lVar20) - (local_198 + lVar32)) < 0x20) {
      uVar29 = 0;
    }
    else {
      uVar29 = uVar34 & 0xfffffffffffffffc;
      uVar31 = 0;
      do {
        puVar4 = (undefined4 *)(local_e8 + lVar32 + uVar31 * 8);
        uVar5 = puVar4[1];
        uVar7 = puVar4[2];
        uVar8 = puVar4[3];
        puVar23 = (undefined8 *)(local_e8 + lVar32 + 0x10 + uVar31 * 8);
        uVar25 = *puVar23;
        uVar24 = puVar23[1];
        puVar2 = (undefined4 *)(lVar20 + uVar31 * 8);
        *puVar2 = *puVar4;
        puVar2[1] = uVar5;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        puVar23 = (undefined8 *)(lVar20 + 0x10 + uVar31 * 8);
        *puVar23 = uVar25;
        puVar23[1] = uVar24;
        uVar31 = uVar31 + 4;
      } while (uVar29 != uVar31);
      if (uVar34 == uVar29) goto LAB_14078d03f;
    }
    uVar31 = uVar29;
    if ((uVar34 & 3) != 0) {
      uVar30 = (ulonglong)((byte)local_a0 & 3);
      do {
        *(undefined8 *)(lVar20 + uVar31 * 8) = *(undefined8 *)(local_e8 + lVar32 + uVar31 * 8);
        uVar31 = uVar31 + 1;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    if (uVar29 - uVar34 < 0xfffffffffffffffd) {
      lVar32 = local_e8 + lVar32;
      do {
        *(undefined8 *)(lVar20 + uVar31 * 8) = *(undefined8 *)(lVar32 + uVar31 * 8);
        *(undefined8 *)(lVar20 + 8 + uVar31 * 8) = *(undefined8 *)(lVar32 + 8 + uVar31 * 8);
        *(undefined8 *)(lVar20 + 0x10 + uVar31 * 8) = *(undefined8 *)(lVar32 + 0x10 + uVar31 * 8);
        *(undefined8 *)(lVar20 + 0x18 + uVar31 * 8) = *(undefined8 *)(lVar32 + 0x18 + uVar31 * 8);
        uVar31 = uVar31 + 4;
      } while (uVar34 != uVar31);
    }
  }
LAB_14078d03f:
  local_78 = local_168;
  local_158 = *local_f0;
  local_150 = local_e0;
  pAVar19 = (AstStatDeclareFunction *)FUN_1407b5010(uVar21,0xb8);
  Luau::AstStatDeclareFunction::AstStatDeclareFunction
            (pAVar19,&local_158,local_1a0,&local_148,&uStack_140,(undefined8 *)&local_d8,&sStack_c8,
             (undefined8 *)&local_88,&local_128,(char)local_160,&local_188,local_90);
LAB_14078d0f4:
  local_98 = local_98 + *(longlong *)(local_68 + 0x370);
  if (local_98 != *(longlong *)(local_68 + 0x378)) {
    *(longlong *)(local_68 + 0x378) = local_98;
  }
  local_e8 = local_e8 + *(longlong *)(local_68 + 0x2f8);
  if (local_e8 != *(longlong *)(local_68 + 0x300)) {
    *(longlong *)(local_68 + 0x300) = local_e8;
  }
  if (lVar33 + *plVar14 != plVar14[1]) {
    plVar14[1] = lVar33 + *plVar14;
  }
  return pAVar19;
}

