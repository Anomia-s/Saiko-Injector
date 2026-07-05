/**
 * Function: expected_function_after_local_declaration_wit
 * Address:  140789ba0
 * Signature: undefined expected_function_after_local_declaration_wit(void)
 * Body size: 3166 bytes
 */


AstStatLocal * expected_function_after_local_declaration_wit(longlong param_1,undefined8 *param_2)

{
  AstStatLocalFunction_vftable **ppAVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  AstStatLocal *pAVar12;
  ulonglong uVar13;
  AstStatLocalFunction *pAVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  byte bVar28;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  longlong local_130;
  ulonglong local_128;
  ulonglong local_120;
  longlong local_118;
  ulonglong uStack_110;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong lStack_d0;
  ulonglong local_c8;
  longlong *local_b8;
  longlong lStack_b0;
  ulonglong uStack_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  int iStack_8c;
  ulonglong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  AstStatLocalFunction *local_78;
  ulonglong uStack_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar17 = *(longlong *)(param_1 + 0x84);
  lVar20 = lVar17;
  if (param_2[1] != 0) {
    lVar20 = *(longlong *)(*(longlong *)*param_2 + 0xc);
  }
  piVar4 = (int *)(param_1 + 0x80);
  plVar5 = (longlong *)(param_1 + 0x84);
  FUN_140787100(param_1);
  if (*(int *)(param_1 + 0x80) == 299) {
    local_98._0_4_ = *piVar4;
    local_98._4_4_ = *(int *)(param_1 + 0x84);
    uStack_90 = *(undefined4 *)(param_1 + 0x88);
    iStack_8c = *(undefined4 *)(param_1 + 0x8c);
    local_88 = *(undefined8 *)(param_1 + 0x90);
    uStack_80 = *(undefined4 *)(param_1 + 0x98);
    uStack_7c = *(undefined4 *)(param_1 + 0x9c);
    FUN_140787100(param_1);
    uVar21 = CONCAT44(uStack_90,local_98._4_4_);
    if (local_98._4_4_ == (int)lVar20) {
      uStack_90 = (undefined4)((ulonglong)lVar20 >> 0x20);
    }
    if (*piVar4 == 0x119) {
      local_b8 = *(longlong **)(param_1 + 0x98);
      lStack_b0 = *plVar5;
      uStack_a8 = *(longlong *)(param_1 + 0x8c);
      FUN_140787100(param_1);
    }
    else {
      expected_identifier_when_parsing_s_got_s(param_1,"variable name");
      lStack_b0 = *(longlong *)(param_1 + 0x84);
      local_b8 = *(longlong **)(param_1 + 0x128);
      uStack_a8 = lStack_b0;
    }
    piVar4 = (int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0);
    *piVar4 = *piVar4 + 1;
    expected_a_statement_got_did_you_forget_to_wr
              (param_1,&local_d8,0,&local_98,&local_b8,&local_b8,param_2);
    piVar4 = (int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0);
    *piVar4 = *piVar4 + -1;
    uStack_140 = *(undefined8 *)((longlong)local_d8 + 0x14);
    local_148 = lVar20;
    pAVar14 = (AstStatLocalFunction *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x38);
    Luau::AstStatLocalFunction::AstStatLocalFunction(pAVar14,&local_148,lStack_d0,local_d8);
    if (*(char *)(param_1 + 0x58) != '\x01') {
      return (AstStatLocal *)pAVar14;
    }
    uVar15 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x14);
    FUN_14079f150(uVar15,lVar17,uVar21);
    local_78 = pAVar14;
    puVar16 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_78);
    *puVar16 = uVar15;
    return (AstStatLocal *)pAVar14;
  }
  if (param_2[1] != 0) {
    puVar16 = &local_98;
    the_beginning_of_an_interpolated_string(piVar4,puVar16);
    if (0xf < CONCAT44(uStack_7c,uStack_80)) {
      puVar16 = (undefined8 *)CONCAT44(local_98._4_4_,(int)local_98);
    }
    local_b8 = (longlong *)0x0;
    lStack_b0 = 0;
    local_d8 = (longlong *)0x0;
    lStack_d0 = 0;
    pAVar12 = (AstStatLocal *)
              FUN_14078dc30(param_1,plVar5,&local_d8,&local_b8,
                            "Expected \'function\' after local declaration with attribute, but got %s instead"
                            ,puVar16);
    uVar25 = CONCAT44(uStack_7c,uStack_80);
    if (uVar25 < 0x10) {
      return pAVar12;
    }
    lVar20 = CONCAT44(local_98._4_4_,(int)local_98);
    uVar13 = uVar25 + 1;
    lVar17 = lVar20;
    if (0xfff < uVar13) {
      lVar17 = *(longlong *)(lVar20 + -8);
      if (0x1f < (ulonglong)((lVar20 + -8) - lVar17)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar13 = uVar25 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar17,uVar13);
    return pAVar12;
  }
  piVar4 = (int *)(*(longlong *)(param_1 + 0x1c0) + 0xf4);
  *piVar4 = *piVar4 + 1;
  local_b8 = (longlong *)(param_1 + 0x298);
  lStack_b0 = (*(longlong *)(param_1 + 0x2a0) - *(longlong *)(param_1 + 0x298) >> 3) *
              -0x3333333333333333;
  uStack_a8 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_60 = lVar20;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_14078e590(param_1,&local_98,&local_b8,0,&local_168,0,0);
  }
  else {
    FUN_14078e590(param_1,&local_98,&local_b8,0,0,0,0);
  }
  piVar4 = (int *)(*(longlong *)(param_1 + 0x1c0) + 0xf4);
  *piVar4 = *piVar4 + -1;
  local_158 = *(longlong *)(param_1 + 0x2b0);
  local_150 = *(longlong *)(param_1 + 0x2b8);
  local_a0 = local_150 - local_158;
  local_98 = (longlong *)(param_1 + 0x238);
  lVar17 = *(longlong *)(param_1 + 0x240) - *(longlong *)(param_1 + 0x238);
  uStack_90 = (undefined4)(lVar17 >> 3);
  iStack_8c = (int)(lVar17 >> 0x23);
  local_88 = 0;
  local_e0 = (longlong *)(param_1 + 0x3d0);
  lStack_d0 = *(longlong *)(param_1 + 0x3d8) - *(longlong *)(param_1 + 0x3d0) >> 3;
  local_c8 = 0;
  local_138 = 0;
  local_d8 = local_e0;
  local_50 = param_1;
  if (*(int *)(param_1 + 0x80) == 0x3d) {
    local_148 = *plVar5;
    uStack_140 = *(undefined8 *)(param_1 + 0x8c);
    local_138 = 1;
    FUN_140787100(param_1);
    expected_expression_after_but_got_instead(local_50,&local_98);
  }
  local_e8 = local_50 + 0x2b0;
  local_120 = uStack_a8;
  local_100 = local_b8;
  lVar17 = local_50 + 0x168;
  local_f0 = local_50 + 400;
  local_58 = 0;
  local_f8 = lStack_b0 * 0x28;
  uVar25 = 0;
  for (uVar13 = 0; uVar23 = local_88, uVar13 < local_120; uVar13 = uVar13 + 1) {
    puVar16 = (undefined8 *)(*local_100 + local_f8 + uVar13 * 0x28);
    puVar18 = (undefined8 *)FUN_14078e300(lVar17,puVar16);
    lVar20 = *(longlong *)(local_50 + 0x150);
    lVar22 = *(longlong *)(local_50 + 0x148);
    puVar19 = (undefined8 *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x38);
    uVar21 = puVar16[3];
    uVar6 = *(uint *)(lVar20 + -4);
    uVar15 = *puVar18;
    *puVar19 = *puVar16;
    uVar7 = *(undefined4 *)((longlong)puVar16 + 0xc);
    uVar8 = *(undefined4 *)(puVar16 + 2);
    uVar9 = *(undefined4 *)((longlong)puVar16 + 0x14);
    *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar16 + 1);
    *(undefined4 *)((longlong)puVar19 + 0xc) = uVar7;
    *(undefined4 *)(puVar19 + 2) = uVar8;
    *(undefined4 *)((longlong)puVar19 + 0x14) = uVar9;
    puVar19[3] = uVar15;
    puVar19[4] = (lVar20 - lVar22 >> 3) + -1;
    puVar19[5] = (ulonglong)uVar6;
    puVar19[6] = uVar21;
    *puVar18 = puVar19;
    if (*(undefined8 **)(local_50 + 0x198) == *(undefined8 **)(local_50 + 0x1a0)) {
      FUN_140029790(local_f0);
    }
    else {
      **(undefined8 **)(local_50 + 0x198) = puVar19;
      *(longlong *)(local_50 + 0x198) = *(longlong *)(local_50 + 0x198) + 8;
    }
    local_78 = (AstStatLocalFunction *)*puVar18;
    if (*(undefined8 **)(local_50 + 0x2b8) == *(undefined8 **)(local_50 + 0x2c0)) {
      FUN_140029790(local_e8);
    }
    else {
      **(undefined8 **)(local_50 + 0x2b8) = local_78;
      *(longlong *)(local_50 + 0x2b8) = *(longlong *)(local_50 + 0x2b8) + 8;
    }
    uVar25 = uVar25 + 1;
    local_58 = CONCAT71((int7)((ulonglong)local_58 >> 8),(char)local_58 + '\x01');
  }
  if (local_88 == 0) {
    uVar21 = *(undefined8 *)(local_50 + 0xa8);
    uVar15 = *(undefined8 *)(local_50 + 0xd8);
    local_78 = (AstStatLocalFunction *)0x0;
    uStack_70 = 0;
    if (uVar25 != 0) goto LAB_14078a2ab;
LAB_14078a245:
    local_118 = 0;
    uStack_110 = 0;
    local_130 = local_60;
  }
  else {
    lVar20 = CONCAT44(iStack_8c,uStack_90);
    uVar21 = *(undefined8 *)(*(longlong *)(local_98[1] + -8) + 0x14);
    uVar15 = *(undefined8 *)(local_50 + 0xd8);
    lVar17 = *local_98;
    local_78 = (AstStatLocalFunction *)FUN_1407b5010(uVar15);
    lVar22 = lVar20 * 8 + lVar17;
    uStack_70 = uVar23;
    if ((uVar23 < 10) || ((ulonglong)((longlong)local_78 - lVar22) < 0x20)) {
      uVar13 = 0;
LAB_14078a1ac:
      uVar26 = uVar13;
      for (uVar27 = uVar23 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
        (&local_78->vftablePtr)[uVar26] = *(AstStatLocalFunction_vftable **)(lVar22 + uVar26 * 8);
        uVar26 = uVar26 + 1;
      }
      if (uVar13 - uVar23 < 0xfffffffffffffffd) {
        lVar17 = lVar20 * 8 + 0x18 + lVar17;
        do {
          (&local_78->vftablePtr)[uVar26] =
               *(AstStatLocalFunction_vftable **)(lVar17 + -0x18 + uVar26 * 8);
          *(undefined8 *)(&(local_78->AstNode_data).offset_0x0 + uVar26 * 2) =
               *(undefined8 *)(lVar17 + -0x10 + uVar26 * 8);
          *(undefined8 *)((longlong)&(local_78->AstNode_data).offset_0x4 + uVar26 * 8 + 4) =
               *(undefined8 *)(lVar17 + -8 + uVar26 * 8);
          *(undefined8 *)((longlong)&(local_78->AstNode_data).offset_0xc + uVar26 * 8 + 4) =
               *(undefined8 *)(lVar17 + uVar26 * 8);
          uVar26 = uVar26 + 4;
        } while (uVar23 != uVar26);
      }
    }
    else {
      uVar13 = uVar23 & 0xfffffffffffffffc;
      lVar24 = lVar20 * 8 + lVar17;
      uVar27 = 0;
      do {
        puVar2 = (undefined4 *)(lVar24 + uVar27 * 8);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar16 = (undefined8 *)(lVar24 + 0x10 + uVar27 * 8);
        uVar10 = *puVar16;
        uVar11 = puVar16[1];
        ppAVar1 = &local_78->vftablePtr + uVar27;
        *(undefined4 *)ppAVar1 = *puVar2;
        *(undefined4 *)((longlong)ppAVar1 + 4) = uVar7;
        ((AstNode_data *)(ppAVar1 + 1))->offset_0x0 = uVar8;
        *(undefined4 *)((longlong)ppAVar1 + 0xc) = uVar9;
        puVar16 = (undefined8 *)((longlong)&(local_78->AstNode_data).offset_0x4 + uVar27 * 8 + 4);
        *puVar16 = uVar10;
        puVar16[1] = uVar11;
        uVar27 = uVar27 + 4;
      } while (uVar13 != uVar27);
      if (uVar23 != uVar13) goto LAB_14078a1ac;
    }
    if (uVar25 == 0) goto LAB_14078a245;
LAB_14078a2ab:
    lVar20 = local_60;
    lVar17 = *(longlong *)(local_50 + 0x2b0);
    local_118 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),uVar25 * 8);
    local_130 = lVar20;
    uStack_110 = uVar25;
    if (uVar25 < 10) {
      uVar13 = 0;
LAB_14078a348:
      uVar23 = uVar13;
      if ((uVar25 & 3) != 0) {
        uVar27 = (ulonglong)((byte)local_58 & 3);
        do {
          *(undefined8 *)(local_118 + uVar23 * 8) = *(undefined8 *)(lVar17 + local_a0 + uVar23 * 8);
          uVar23 = uVar23 + 1;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
      if (uVar13 - uVar25 < 0xfffffffffffffffd) {
        lVar17 = local_a0 + lVar17;
        do {
          *(undefined8 *)(local_118 + uVar23 * 8) = *(undefined8 *)(lVar17 + uVar23 * 8);
          *(undefined8 *)(local_118 + 8 + uVar23 * 8) = *(undefined8 *)(lVar17 + 8 + uVar23 * 8);
          *(undefined8 *)(local_118 + 0x10 + uVar23 * 8) =
               *(undefined8 *)(lVar17 + 0x10 + uVar23 * 8);
          *(undefined8 *)(local_118 + 0x18 + uVar23 * 8) =
               *(undefined8 *)(lVar17 + 0x18 + uVar23 * 8);
          uVar23 = uVar23 + 4;
        } while (uVar25 != uVar23);
      }
    }
    else {
      if ((ulonglong)((local_158 + local_118) - (local_150 + lVar17)) < 0x20) {
        uVar13 = 0;
        goto LAB_14078a348;
      }
      uVar13 = uVar25 & 0xfffffffffffffffc;
      uVar23 = 0;
      do {
        puVar3 = (undefined4 *)(local_a0 + lVar17 + uVar23 * 8);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar16 = (undefined8 *)(local_a0 + lVar17 + 0x10 + uVar23 * 8);
        uVar10 = *puVar16;
        uVar11 = puVar16[1];
        puVar2 = (undefined4 *)(local_118 + uVar23 * 8);
        *puVar2 = *puVar3;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        puVar16 = (undefined8 *)(local_118 + 0x10 + uVar23 * 8);
        *puVar16 = uVar10;
        puVar16[1] = uVar11;
        uVar23 = uVar23 + 4;
      } while (uVar13 != uVar23);
      if (uVar25 != uVar13) goto LAB_14078a348;
    }
  }
  local_128 = uVar21;
  pAVar12 = (AstStatLocal *)FUN_1407b5010(uVar15,0x60);
  Luau::AstStatLocal::AstStatLocal(pAVar12,&local_130,&local_118,&local_78,&local_148);
  uVar25 = local_c8;
  lVar17 = lStack_d0;
  if (*(char *)(local_50 + 0x58) != '\x01') goto LAB_14078a77c;
  local_f0 = *(undefined8 *)(local_50 + 0xd8);
  if (local_c8 == 0) {
    pAVar14 = (AstStatLocalFunction *)0x0;
  }
  else {
    lVar22 = *local_d8;
    pAVar14 = (AstStatLocalFunction *)FUN_1407b5010(local_f0,local_c8 * 8);
    lVar20 = lVar22 + lVar17 * 8;
    if (uVar25 < 10) {
      uVar13 = 0;
    }
    else if ((ulonglong)((longlong)pAVar14 - lVar20) < 0x20) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar25 & 0xfffffffffffffffc;
      lVar24 = lVar17 * 8 + lVar22;
      uVar23 = 0;
      do {
        puVar18 = (undefined8 *)(lVar24 + uVar23 * 8);
        uVar21 = puVar18[1];
        puVar16 = (undefined8 *)(lVar24 + 0x10 + uVar23 * 8);
        uVar15 = *puVar16;
        uVar10 = puVar16[1];
        (&pAVar14->vftablePtr)[uVar23] = (AstStatLocalFunction_vftable *)*puVar18;
        *(undefined8 *)(&pAVar14->vftablePtr + uVar23 + 1) = uVar21;
        puVar16 = (undefined8 *)((longlong)&(pAVar14->AstNode_data).offset_0x4 + uVar23 * 8 + 4);
        *puVar16 = uVar15;
        puVar16[1] = uVar10;
        uVar23 = uVar23 + 4;
      } while (uVar13 != uVar23);
      if (uVar25 == uVar13) goto LAB_14078a53f;
    }
    uVar27 = uVar13;
    for (uVar23 = uVar25 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
      (&pAVar14->vftablePtr)[uVar27] = *(AstStatLocalFunction_vftable **)(lVar20 + uVar27 * 8);
      uVar27 = uVar27 + 1;
    }
    if (uVar13 - uVar25 < 0xfffffffffffffffd) {
      lVar22 = lVar22 + lVar17 * 8;
      do {
        (&pAVar14->vftablePtr)[uVar27] = *(AstStatLocalFunction_vftable **)(lVar22 + uVar27 * 8);
        *(undefined8 *)(&(pAVar14->AstNode_data).offset_0x0 + uVar27 * 2) =
             *(undefined8 *)(lVar22 + 8 + uVar27 * 8);
        *(undefined8 *)((longlong)&(pAVar14->AstNode_data).offset_0x4 + uVar27 * 8 + 4) =
             *(undefined8 *)(lVar22 + 0x10 + uVar27 * 8);
        *(undefined8 *)((longlong)&(pAVar14->AstNode_data).offset_0xc + uVar27 * 8 + 4) =
             *(undefined8 *)(lVar22 + 0x18 + uVar27 * 8);
        uVar27 = uVar27 + 4;
      } while (uVar25 != uVar27);
    }
  }
LAB_14078a53f:
  local_e8 = *(longlong *)(local_50 + 0x3d0);
  local_60 = *(longlong *)(local_50 + 0x3d8);
  local_58 = local_60 - local_e8;
  bVar28 = 0;
  uVar23 = 0;
  for (uVar13 = 0; uVar13 < local_120; uVar13 = uVar13 + 1) {
    if (*(undefined8 **)(local_50 + 0x3d8) == *(undefined8 **)(local_50 + 0x3e0)) {
      FUN_140029790(local_e0);
    }
    else {
      **(undefined8 **)(local_50 + 0x3d8) =
           *(undefined8 *)(*local_100 + local_f8 + uVar13 * 0x28 + 0x20);
      *(longlong *)(local_50 + 0x3d8) = *(longlong *)(local_50 + 0x3d8) + 8;
    }
    uVar23 = uVar23 + 1;
    bVar28 = bVar28 + 1;
  }
  lVar17 = *local_e0;
  if (uVar23 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8));
    if ((uVar23 < 10) || ((ulonglong)((local_e8 + lVar20) - (local_60 + lVar17)) < 0x20)) {
      uVar13 = 0;
LAB_14078a61a:
      uVar27 = uVar13;
      if ((uVar23 & 3) != 0) {
        uVar26 = (ulonglong)(bVar28 & 3);
        do {
          *(undefined8 *)(lVar20 + uVar27 * 8) = *(undefined8 *)(lVar17 + local_58 + uVar27 * 8);
          uVar27 = uVar27 + 1;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      if (uVar13 - uVar23 < 0xfffffffffffffffd) {
        lVar17 = local_58 + lVar17;
        do {
          *(undefined8 *)(lVar20 + uVar27 * 8) = *(undefined8 *)(lVar17 + uVar27 * 8);
          *(undefined8 *)(lVar20 + 8 + uVar27 * 8) = *(undefined8 *)(lVar17 + 8 + uVar27 * 8);
          *(undefined8 *)(lVar20 + 0x10 + uVar27 * 8) = *(undefined8 *)(lVar17 + 0x10 + uVar27 * 8);
          *(undefined8 *)(lVar20 + 0x18 + uVar27 * 8) = *(undefined8 *)(lVar17 + 0x18 + uVar27 * 8);
          uVar27 = uVar27 + 4;
        } while (uVar23 != uVar27);
      }
    }
    else {
      uVar13 = uVar23 & 0xfffffffffffffffc;
      uVar27 = 0;
      do {
        puVar18 = (undefined8 *)(local_58 + lVar17 + uVar27 * 8);
        uVar21 = puVar18[1];
        puVar16 = (undefined8 *)(local_58 + lVar17 + 0x10 + uVar27 * 8);
        uVar15 = *puVar16;
        uVar10 = puVar16[1];
        puVar16 = (undefined8 *)(lVar20 + uVar27 * 8);
        *puVar16 = *puVar18;
        puVar16[1] = uVar21;
        puVar16 = (undefined8 *)(lVar20 + 0x10 + uVar27 * 8);
        *puVar16 = uVar15;
        puVar16[1] = uVar10;
        uVar27 = uVar27 + 4;
      } while (uVar13 != uVar27);
      if (uVar23 != uVar13) goto LAB_14078a61a;
    }
    lVar17 = *local_e0;
  }
  if (lVar17 + local_58 != *(longlong *)(local_50 + 0x3d8)) {
    *(longlong *)(local_50 + 0x3d8) = lVar17 + local_58;
  }
  uVar21 = FUN_1407b5010(local_f0,0x38);
  uStack_70 = uVar25;
  local_118 = local_168;
  uStack_110 = uStack_160;
  local_130 = lVar20;
  local_128 = uVar23;
  local_78 = pAVar14;
  FUN_14079f080(uVar21,&local_130,&local_118,&local_78);
  local_78 = (AstStatLocalFunction *)pAVar12;
  puVar16 = (undefined8 *)FUN_14078e300(local_50 + 0x420,&local_78);
  *puVar16 = uVar21;
LAB_14078a77c:
  lVar17 = lStack_d0 * 8 + *local_d8;
  if (lVar17 != local_d8[1]) {
    local_d8[1] = lVar17;
  }
  lVar17 = CONCAT44(iStack_8c,uStack_90) * 8 + *local_98;
  if (lVar17 != local_98[1]) {
    local_98[1] = lVar17;
  }
  local_a0 = local_a0 + *(longlong *)(local_50 + 0x2b0);
  if (local_a0 != *(longlong *)(local_50 + 0x2b8)) {
    *(longlong *)(local_50 + 0x2b8) = local_a0;
  }
  if (local_f8 + *local_100 != local_100[1]) {
    local_100[1] = local_f8 + *local_100;
  }
  return pAVar12;
}

