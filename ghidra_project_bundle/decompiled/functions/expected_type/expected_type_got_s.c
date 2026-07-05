/**
 * Function: expected_type_got_s
 * Address:  140797230
 * Signature: undefined expected_type_got_s(void)
 * Body size: 2397 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 *
expected_type_got_s(longlong param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  char *****pppppcVar2;
  undefined8 uVar3;
  char ****ppppcVar4;
  char ****ppppcVar5;
  char ****ppppcVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  AstTypeSingletonBool *this;
  AstTypeReference *pAVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  AstTypeTypeof *this_00;
  undefined8 uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  char *******pppppppcVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  ulonglong uVar23;
  char *pcVar24;
  uint unaff_R14D;
  char ******local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  char *******local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  char *******local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  char *******local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  int iStack_6c;
  ulonglong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  uVar8 = *(int *)(param_1 + 0x114) + 1;
  *(uint *)(param_1 + 0x114) = uVar8;
  if (DAT_141700390 < uVar8) {
                    /* WARNING: Subroutine does not return */
    Luau::ParseError::ParseError_Constructor_or_Destructor
              ((undefined8 *)(param_1 + 0x84),
               "Exceeded allowed recursion depth; simplify your %s to make the code compile",
               "type annotation",param_4);
  }
  local_d8 = *(undefined8 *)(param_1 + 0x84);
  uStack_d0 = *(undefined8 *)(param_1 + 0x8c);
  local_148 = (char ******)0x0;
  uStack_140 = 0;
  iVar9 = *(int *)(param_1 + 0x80);
  if (iVar9 < 0x10a) {
    if ((iVar9 == 0x28) || (iVar9 == 0x3c)) {
      local_c8 = (char *******)0x0;
      uStack_c0 = 0;
      pppppppcVar20 = (char *******)&local_c8;
LAB_14079735a:
      exceeded_allowed_recursion_depth_simplify_you(param_1,param_2,param_3,pppppppcVar20);
      return param_2;
    }
    if (iVar9 != 0x7b) goto switchD_1407972c0_caseD_10b;
    uVar13 = cannot_have_more_than_one_table_indexer(param_1,param_4 & 0xffffffff);
    goto LAB_14079748d;
  }
  switch(iVar9) {
  case 0x10a:
  case 0x10d:
    malformed_interpolated_string_got_s(param_1);
    pcVar24 = "Interpolated string literals cannot be used as types";
    break;
  default:
switchD_1407972c0_caseD_10b:
    local_98 = *(AstTypeReference **)(param_1 + 0xa8);
    local_78._0_4_ = (int)local_98;
    local_78._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
    uStack_70 = (undefined4)local_d8;
    iStack_6c = (int)((ulonglong)local_d8 >> 0x20);
    uStack_90 = uStack_d0;
    the_beginning_of_an_interpolated_string(param_1 + 0x80,&local_c8);
    pppppppcVar20 = (char *******)&local_c8;
    if (0xf < local_b0) {
      pppppppcVar20 = local_c8;
    }
    uVar13 = FUN_140799470(param_1,&local_98,&local_78,"Expected type, got %s",pppppppcVar20);
    *param_2 = uVar13;
    param_2[1] = 0;
    if (local_b0 < 0x10) {
      return param_2;
    }
    uVar14 = local_b0 + 1;
    pppppppcVar20 = local_c8;
    if (0xfff < uVar14) {
      pppppppcVar20 = (char *******)local_c8[-1];
      if ((char *)0x1f < (char *)((longlong)local_c8 + (-8 - (longlong)pppppppcVar20))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar14 = local_b0 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppcVar20,uVar14);
    return param_2;
  case 0x116:
  case 0x117:
    if (*(char *)(param_1 + 0x58) == '\x01') {
      if (iVar9 == 0x117) {
        iVar9 = FUN_1407a0bd0();
        unaff_R14D = (uint)(iVar9 == 1);
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_1407a0bb0(param_1 + 0x80);
        unaff_R14D = 2;
      }
      puVar18 = &local_98;
      if (*(char *)(param_1 + 0x58) == '\0') {
        puVar18 = (undefined8 *)0x0;
      }
    }
    else {
      uVar10 = 0;
      puVar18 = (undefined8 *)0x0;
    }
    local_98 = (AstTypeReference *)0x0;
    uStack_90 = 0;
    FUN_1407922e0(param_1,&local_c8,puVar18);
    if ((char)local_b8 == '\x01') {
      uStack_f0 = (undefined4)uStack_c0;
      uStack_ec = uStack_c0._4_4_;
      this_00 = (AstTypeTypeof *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x30);
      Luau::AstTypeSingletonString::AstTypeSingletonString
                ((AstTypeSingletonString *)this_00,&local_d8,&local_f8);
      if (*(char *)(param_1 + 0x58) == '\x01') {
        uVar17 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x20);
        local_78._0_4_ = (undefined4)local_98;
        local_78._4_4_ = local_98._4_4_;
        uStack_70 = (undefined4)uStack_90;
        iStack_6c = uStack_90._4_4_;
        FUN_14079f320(uVar17,&local_78,unaff_R14D,uVar10);
LAB_140797680:
        local_78._0_4_ = (int)this_00;
        local_78._4_4_ = (undefined4)((ulonglong)this_00 >> 0x20);
        puVar18 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_78);
        *puVar18 = uVar17;
      }
LAB_1407976a0:
      *param_2 = this_00;
      goto LAB_1407976a3;
    }
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    uStack_70 = 0;
    iStack_6c = 0;
    pcVar24 = "String literal contains malformed escape sequence";
    pppppppcVar20 = (char *******)&local_78;
    goto LAB_140797485;
  case 0x119:
    puVar1 = (ulonglong *)(param_1 + 0x84);
    pppppppcVar20 = *(char ********)(param_1 + 0x98);
    uStack_c0 = *puVar1;
    local_b8 = *(ulonglong *)(param_1 + 0x8c);
    FUN_140787100(param_1);
    iVar9 = *(int *)(param_1 + 0x80);
    local_c8 = pppppppcVar20;
    if (iVar9 == 0x106) {
      FUN_14078f3b0(param_1,puVar1,
                    "Unexpected \'...\' after type name; type pack is not allowed in this context");
      FUN_140787100(param_1);
LAB_140797779:
      local_a8 = 0;
      local_e8 = 0;
      local_e0 = 0;
    }
    else {
      if (iVar9 != 0x2e) {
        if (pppppppcVar20 == (char *******)0x0) {
          pppppppcVar20 = (char *******)0x0;
        }
        else {
          iVar11 = strcmp((char *)pppppppcVar20,"typeof");
          if (iVar11 == 0) {
            uVar13 = *(undefined8 *)(param_1 + 0x84);
            FUN_14078e560(param_1,0x28,"typeof type");
            uVar16 = unexpected_did_you_mean_not(param_1,0);
            uVar3 = *(undefined8 *)(param_1 + 0x84);
            uVar17 = *(undefined8 *)(param_1 + 0x8c);
            local_78._4_4_ = (undefined4)uVar13;
            uStack_70 = (undefined4)((ulonglong)uVar13 >> 0x20);
            local_78._0_4_ = iVar9;
            FUN_14078fce0(param_1,0x29,&local_78,0);
            local_78._0_4_ = (int)local_d8;
            local_78._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
            uStack_70 = (undefined4)uVar17;
            iStack_6c = (int)((ulonglong)uVar17 >> 0x20);
            this_00 = (AstTypeTypeof *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
            Luau::AstTypeTypeof::AstTypeTypeof(this_00,&local_78,uVar16);
            if (*(char *)(param_1 + 0x58) == '\x01') {
              uVar17 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x14);
              FUN_14079f2a0(uVar17,uVar13,uVar3);
              goto LAB_140797680;
            }
            goto LAB_1407976a0;
          }
        }
        goto LAB_140797779;
      }
      uVar14 = *(ulonglong *)(param_1 + 0x84);
      FUN_140787100(param_1);
      local_138 = (undefined4)uStack_c0;
      uStack_134 = uStack_c0._4_4_;
      uStack_130 = (undefined4)local_b8;
      uStack_12c = local_b8._4_4_;
      local_e8 = uVar14 >> 0x20;
      local_e0 = uVar14;
      local_a0 = pppppppcVar20;
      if (*(int *)(param_1 + 0x80) == 0x119) {
        pppppppcVar20 = *(char ********)(param_1 + 0x98);
        uStack_c0 = *puVar1;
        local_b8 = *(ulonglong *)(param_1 + 0x8c);
        uVar14 = FUN_140787100(param_1);
        local_c8 = pppppppcVar20;
      }
      else {
        expected_identifier_when_parsing_s_got_s(param_1,"field name");
        if ((*(int *)(param_1 + 0x80) - 0x123U < 0x15) && (*(int *)(param_1 + 0x84) == (int)uVar14))
        {
          pppppppcVar20 = *(char ********)(param_1 + 0x98);
          uStack_c0 = *puVar1;
          local_b8 = *(ulonglong *)(param_1 + 0x8c);
          local_c8 = pppppppcVar20;
          uVar14 = FUN_140787100(param_1);
        }
        else {
          uVar14 = *(ulonglong *)(param_1 + 0x84);
          pppppppcVar20 = *(char ********)(param_1 + 0x128);
          local_c8 = pppppppcVar20;
          uStack_c0 = uVar14;
          local_b8 = uVar14;
        }
      }
      local_a8 = CONCAT71((int7)(uVar14 >> 8),1);
    }
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_78 = (char ******)(param_1 + 0x3d0);
    lVar15 = *(longlong *)(param_1 + 0x3d8) - *(longlong *)(param_1 + 0x3d0);
    uStack_70 = (undefined4)(lVar15 >> 3);
    iStack_6c = (int)(lVar15 >> 0x23);
    local_68 = 0;
    local_100 = 0;
    iVar9 = *(int *)(param_1 + 0x80);
    if (iVar9 == 0x3c) {
      if (*(char *)(param_1 + 0x58) == '\x01') {
        FUN_140798f40(param_1,&local_98,&local_108,&local_78,&local_100);
      }
      else {
        FUN_140798f40(param_1,&local_98,0,0,0);
      }
      local_118 = local_98;
      uStack_110 = uStack_90;
    }
    local_120 = *(undefined8 *)(param_1 + 0xa8);
    local_128 = local_d8;
    pAVar12 = (AstTypeReference *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x78);
    local_98 = (AstTypeReference *)CONCAT44(uStack_134,local_138);
    uStack_90 = CONCAT44(uStack_12c,uStack_130);
    local_88 = (undefined1)local_a8;
    local_f8 = local_a0;
    uStack_f0 = CONCAT31(uStack_f0._1_3_,local_88);
    Luau::AstTypeReference::AstTypeReference
              (pAVar12,&local_128,&local_f8,pppppppcVar20,&local_98,&uStack_c0,iVar9 == 0x3c,
               &local_118);
    uVar14 = local_68;
    if (*(char *)(param_1 + 0x58) != '\x01') goto LAB_140797b24;
    pppppppcVar20 = *(char ********)(param_1 + 0xd8);
    if (local_68 == 0) {
      lVar15 = 0;
    }
    else {
      lVar7 = CONCAT44(iStack_6c,uStack_70);
      pppppcVar2 = *local_78;
      local_a0 = pppppppcVar20;
      lVar15 = FUN_1407b5010(pppppppcVar20,local_68 * 8);
      pppppppcVar20 = local_a0;
      if ((uVar14 < 10) || ((ulonglong)(lVar15 - (longlong)(pppppcVar2 + lVar7)) < 0x20)) {
        uVar19 = 0;
      }
      else {
        uVar19 = uVar14 & 0xfffffffffffffffc;
        uVar23 = 0;
        do {
          ppppcVar4 = (pppppcVar2 + lVar7 + uVar23)[1];
          ppppcVar5 = pppppcVar2[lVar7 + uVar23 + 2];
          ppppcVar6 = (pppppcVar2 + lVar7 + uVar23 + 2)[1];
          puVar18 = (undefined8 *)(lVar15 + uVar23 * 8);
          *puVar18 = pppppcVar2[lVar7 + uVar23];
          puVar18[1] = ppppcVar4;
          puVar18 = (undefined8 *)(lVar15 + 0x10 + uVar23 * 8);
          *puVar18 = ppppcVar5;
          puVar18[1] = ppppcVar6;
          uVar23 = uVar23 + 4;
        } while (uVar19 != uVar23);
        if (uVar14 == uVar19) goto LAB_140797abf;
      }
      uVar21 = uVar19;
      for (uVar23 = uVar14 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(char *****)(lVar15 + uVar21 * 8) = (pppppcVar2 + lVar7)[uVar21];
        uVar21 = uVar21 + 1;
      }
      if (uVar19 - uVar14 < 0xfffffffffffffffd) {
        do {
          *(char *****)(lVar15 + uVar21 * 8) = pppppcVar2[lVar7 + uVar21];
          *(char *****)(lVar15 + 8 + uVar21 * 8) = pppppcVar2[lVar7 + uVar21 + 1];
          *(char *****)(lVar15 + 0x10 + uVar21 * 8) = pppppcVar2[lVar7 + uVar21 + 2];
          *(char *****)(lVar15 + 0x18 + uVar21 * 8) = pppppcVar2[lVar7 + uVar21 + 3];
          uVar21 = uVar21 + 4;
        } while (uVar14 != uVar21);
      }
    }
LAB_140797abf:
    uVar13 = FUN_1407b5010(pppppppcVar20,0x30);
    uStack_90 = uVar14;
    local_f8 = (char *******)(local_e0 & 0xffffffff | local_e8 << 0x20);
    uStack_f0 = CONCAT31(uStack_f0._1_3_,(char)local_a8);
    local_98 = (AstTypeReference *)lVar15;
    FUN_14079f200(uVar13,&local_f8,local_108,&local_98,local_100);
    local_98 = pAVar12;
    puVar18 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_98);
    *puVar18 = uVar13;
LAB_140797b24:
    *param_2 = pAVar12;
    param_2[1] = 0;
    if (*local_78 + CONCAT44(iStack_6c,uStack_70) == local_78[1]) {
      return param_2;
    }
    local_78[1] = *local_78 + CONCAT44(iStack_6c,uStack_70);
    return param_2;
  case 0x11c:
  case 0x11d:
    if ((char)param_4 != '\0') {
      pppppppcVar20 = &local_148;
      param_3 = param_3 & 0xffffffff;
      FUN_14078fd30(param_1,pppppppcVar20);
      goto LAB_14079735a;
    }
    pcVar24 = "attributes are not allowed in declaration context";
    break;
  case 0x11e:
    FUN_140787100(param_1);
    pcVar24 = "Malformed string; did you forget to finish it?";
    break;
  case 0x129:
    FUN_140787100(param_1);
    this = (AstTypeSingletonBool *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    uVar22 = 0;
    goto LAB_1407974bb;
  case 299:
    FUN_140787100(param_1);
    pcVar24 = 
    "Using \'function\' as a type annotation is not supported, consider replacing with a function type annotation e.g. \'(...any) -> ...any\'"
    ;
    break;
  case 0x12f:
    FUN_140787100(param_1);
    pAVar12 = (AstTypeReference *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x78);
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    uStack_70 = 0;
    iStack_6c = 0;
    local_b8 = local_b8 & 0xffffffffffffff00;
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    Luau::AstTypeReference::AstTypeReference
              (pAVar12,&local_d8,&local_98,*(undefined8 *)(param_1 + 0x130),&local_c8,&local_d8,0,
               &local_78);
    *param_2 = pAVar12;
    goto LAB_1407976a3;
  case 0x135:
    FUN_140787100(param_1);
    this = (AstTypeSingletonBool *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    uVar22 = 1;
LAB_1407974bb:
    Luau::AstTypeSingletonBool::AstTypeSingletonBool(this,&local_d8,uVar22);
    *param_2 = this;
    goto LAB_1407976a3;
  }
  uStack_c0 = 0;
  local_c8 = (char *******)0x0;
  pppppppcVar20 = (char *******)&local_c8;
LAB_140797485:
  uVar13 = FUN_140792230(param_1,&local_d8,pppppppcVar20,pcVar24);
LAB_14079748d:
  *param_2 = uVar13;
LAB_1407976a3:
  param_2[1] = 0;
  return param_2;
}

