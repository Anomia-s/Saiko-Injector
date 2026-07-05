/**
 * Function: unexpected_after_type_annotation
 * Address:  140794460
 * Signature: undefined unexpected_after_type_annotation(void)
 * Body size: 2963 bytes
 */


AstTypeUnion *
unexpected_after_type_annotation(longlong param_1,AstTypeUnion *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  AstTypeUnion_vftable **ppAVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  uint uVar14;
  AstTypeOptional *this;
  AstTypeUnion *pAVar15;
  AstTypeUnion *this_00;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  char *pcVar22;
  AstTypeUnion **ppAVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  AstTypeOptional *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong local_e0;
  AstTypeUnion *local_d8;
  AstTypeUnion *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  AstTypeUnion *local_a8;
  undefined8 uStack_a0;
  AstTypeUnion *local_90;
  ulonglong local_88;
  ulonglong local_80;
  AstTypeUnion *local_78;
  ulonglong uStack_70;
  AstTypeUnion **local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_1 + 0x2f8);
  local_c0 = *(longlong *)(param_1 + 0x2f8);
  local_b8 = *(longlong **)(param_1 + 0x300);
  local_58 = (longlong)local_b8 - local_c0;
  local_e0 = *(longlong *)(param_1 + 0x3d8);
  lVar20 = *(longlong *)(param_1 + 0x3d0);
  pcVar22 = (char *)(local_e0 - lVar20);
  local_e8 = lVar20;
  local_d8 = param_2;
  local_c8 = param_3;
  local_60 = (AstTypeUnion **)pcVar22;
  local_50 = param_1;
  if (param_2 == (AstTypeUnion *)0x0) {
    uVar21 = 0;
  }
  else if (local_b8 == *(longlong **)(param_1 + 0x308)) {
    uVar21 = 1;
    ppAVar23 = &local_d8;
    FUN_140029790(plVar1,local_b8);
    pcVar22 = (char *)ppAVar23;
  }
  else {
    *local_b8 = (longlong)param_2;
    *(longlong *)(param_1 + 0x300) = *(longlong *)(param_1 + 0x300) + 8;
    uVar21 = 1;
  }
  lVar13 = local_50;
  uVar14 = *(int *)(local_50 + 0x114) + 1;
  *(uint *)(local_50 + 0x114) = uVar14;
  if (DAT_141700390 < uVar14) {
                    /* WARNING: Subroutine does not return */
    Luau::ParseError::ParseError_Constructor_or_Destructor
              ((undefined8 *)(local_50 + 0x84),
               "Exceeded allowed recursion depth; simplify your %s to make the code compile",
               "type annotation",lVar20);
  }
  local_b0 = (longlong *)(local_50 + 0x3d0);
  local_f8 = *local_c8;
  uStack_f0 = local_c8[1];
  puVar17 = (undefined8 *)(local_50 + 0x84);
  local_80 = 0;
  local_88 = 0;
  iVar26 = 0;
  bVar11 = false;
  bVar12 = false;
  do {
    iVar4 = *(int *)(local_50 + 0x80);
    local_90 = *(AstTypeUnion **)(local_50 + 0x84);
    if (iVar4 < 0x7c) {
      if (iVar4 == 0x26) {
        FUN_140787100(local_50);
        uVar5 = *(undefined4 *)(local_50 + 0x114);
        pcVar22 = (char *)0x0;
        lVar20 = 0;
        expected_type_got_s(local_50,&local_78);
        if (*(undefined8 **)(local_50 + 0x300) == *(undefined8 **)(local_50 + 0x308)) {
          pcVar22 = (char *)&local_78;
          FUN_140029790(plVar1);
        }
        else {
          **(undefined8 **)(local_50 + 0x300) = local_78;
          *(longlong *)(local_50 + 0x300) = *(longlong *)(local_50 + 0x300) + 8;
        }
        *(undefined4 *)(local_50 + 0x114) = uVar5;
        bVar11 = true;
        uVar25 = uVar21 + 1;
        if (*(char *)(local_50 + 0x58) == '\x01') {
          if (local_d8 == (AstTypeUnion *)0x0 && (local_88 & 1) == 0) {
            local_88 = CONCAT71((int7)((ulonglong)local_50 >> 8),1);
            local_d0 = local_90;
            bVar11 = true;
          }
          else {
            puVar18 = *(undefined8 **)(local_50 + 0x3d8);
            if (puVar18 == *(undefined8 **)(local_50 + 0x3e0)) {
              pcVar22 = (char *)&local_90;
              FUN_140029790(local_b0);
LAB_140794805:
              local_80 = local_80 + 1;
              uVar25 = uVar21 + 1;
            }
            else {
LAB_1407947b6:
              *puVar18 = local_90;
              *(longlong *)(local_50 + 0x3d8) = *(longlong *)(local_50 + 0x3d8) + 8;
              local_80 = local_80 + 1;
              uVar25 = uVar21 + 1;
            }
          }
        }
      }
      else {
        if (iVar4 != 0x3f) {
LAB_14079480e:
          if (!(bool)(bVar12 | bVar11 | uVar21 != 1)) {
            this_00 = *(AstTypeUnion **)(*plVar1 + local_58);
            lVar20 = (longlong)local_60 + *(longlong *)(local_50 + 0x3d0);
            if (lVar20 == *(longlong *)(local_50 + 0x3d8)) goto LAB_14079489c;
            goto LAB_140794895;
          }
          if ((bool)(bVar12 & bVar11)) {
            if (uVar21 == 0) {
              local_78 = (AstTypeUnion *)0x0;
              uStack_70 = 0;
              goto LAB_140794d9f;
            }
            lVar20 = *(longlong *)(local_50 + 0x2f8);
            local_78 = (AstTypeUnion *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),uVar21 * 8);
            if (uVar21 < 10) {
              uVar25 = 0;
              goto LAB_140794d24;
            }
            if ((ulonglong)((longlong)local_78 + (local_c0 - ((longlong)local_b8 + lVar20))) < 0x20)
            {
              uVar25 = 0;
              goto LAB_140794d24;
            }
            uVar25 = uVar21 & 0xfffffffffffffffc;
            uVar19 = 0;
            do {
              puVar3 = (undefined4 *)(local_58 + lVar20 + uVar19 * 8);
              uVar5 = puVar3[1];
              uVar6 = puVar3[2];
              uVar7 = puVar3[3];
              puVar17 = (undefined8 *)(local_58 + lVar20 + 0x10 + uVar19 * 8);
              uVar16 = *puVar17;
              uVar8 = puVar17[1];
              ppAVar2 = &local_78->vftablePtr + uVar19;
              *(undefined4 *)ppAVar2 = *puVar3;
              *(undefined4 *)((longlong)ppAVar2 + 4) = uVar5;
              ((AstNode_data *)(ppAVar2 + 1))->offset_0x0 = uVar6;
              *(undefined4 *)((longlong)ppAVar2 + 0xc) = uVar7;
              puVar17 = (undefined8 *)
                        ((longlong)&(local_78->AstNode_data).offset_0x4 + uVar19 * 8 + 4);
              *puVar17 = uVar16;
              puVar17[1] = uVar8;
              uVar19 = uVar19 + 4;
            } while (uVar25 != uVar19);
            uStack_70 = uVar21;
            if (uVar21 != uVar25) {
LAB_140794d24:
              uVar24 = uVar21 & 3;
              uVar19 = uVar25;
              if (uVar24 != 0) {
                do {
                  (&local_78->vftablePtr)[uVar19] =
                       *(AstTypeUnion_vftable **)(lVar20 + local_58 + uVar19 * 8);
                  uVar19 = uVar19 + 1;
                  uVar24 = uVar24 - 1;
                } while (uVar24 != 0);
              }
              uStack_70 = uVar21;
              if (uVar25 - uVar21 < 0xfffffffffffffffd) {
                lVar20 = local_58 + lVar20;
                do {
                  (&local_78->vftablePtr)[uVar19] = *(AstTypeUnion_vftable **)(lVar20 + uVar19 * 8);
                  *(undefined8 *)(&(local_78->AstNode_data).offset_0x0 + uVar19 * 2) =
                       *(undefined8 *)(lVar20 + 8 + uVar19 * 8);
                  *(undefined8 *)((longlong)&(local_78->AstNode_data).offset_0x4 + uVar19 * 8 + 4) =
                       *(undefined8 *)(lVar20 + 0x10 + uVar19 * 8);
                  *(undefined8 *)((longlong)&(local_78->AstNode_data).offset_0xc + uVar19 * 8 + 4) =
                       *(undefined8 *)(lVar20 + 0x18 + uVar19 * 8);
                  uVar19 = uVar19 + 4;
                } while (uVar21 != uVar19);
              }
            }
LAB_140794d9f:
            local_a8 = (AstTypeUnion *)*local_c8;
            uStack_a0 = *(undefined8 *)(*(longlong *)(*(longlong *)(local_50 + 0x300) + -8) + 0x14);
            this_00 = (AstTypeUnion *)
                      FUN_140792230(local_50,&local_a8,&local_78,
                                    "Mixing union and intersection types is not allowed; consider wrapping in parentheses."
                                   );
          }
          else {
            uStack_f0 = *(undefined8 *)(*(longlong *)(*(longlong *)(local_50 + 0x300) + -8) + 0x14);
            if (bVar12) {
              uVar16 = *(undefined8 *)(local_50 + 0xd8);
              if (uVar21 == 0) {
                local_78 = (AstTypeUnion *)0x0;
                uStack_70 = 0;
                goto LAB_140794ace;
              }
              lVar20 = *plVar1;
              local_78 = (AstTypeUnion *)FUN_1407b5010(uVar16,uVar21 * 8);
              if ((uVar21 < 10) ||
                 ((ulonglong)((longlong)local_78 + (local_c0 - ((longlong)local_b8 + lVar20))) <
                  0x20)) {
                uVar25 = 0;
                goto LAB_140794935;
              }
              uVar25 = uVar21 & 0xfffffffffffffffc;
              uVar19 = 0;
              do {
                puVar3 = (undefined4 *)(local_58 + lVar20 + uVar19 * 8);
                uVar5 = puVar3[1];
                uVar6 = puVar3[2];
                uVar7 = puVar3[3];
                puVar17 = (undefined8 *)(local_58 + lVar20 + 0x10 + uVar19 * 8);
                uVar8 = *puVar17;
                uVar9 = puVar17[1];
                ppAVar2 = &local_78->vftablePtr + uVar19;
                *(undefined4 *)ppAVar2 = *puVar3;
                *(undefined4 *)((longlong)ppAVar2 + 4) = uVar5;
                ((AstNode_data *)(ppAVar2 + 1))->offset_0x0 = uVar6;
                *(undefined4 *)((longlong)ppAVar2 + 0xc) = uVar7;
                puVar17 = (undefined8 *)
                          ((longlong)&(local_78->AstNode_data).offset_0x4 + uVar19 * 8 + 4);
                *puVar17 = uVar8;
                puVar17[1] = uVar9;
                uVar19 = uVar19 + 4;
              } while (uVar25 != uVar19);
              uStack_70 = uVar21;
              if (uVar21 != uVar25) {
LAB_140794935:
                uVar24 = uVar21 & 3;
                uVar19 = uVar25;
                if (uVar24 != 0) {
                  do {
                    (&local_78->vftablePtr)[uVar19] =
                         *(AstTypeUnion_vftable **)(lVar20 + local_58 + uVar19 * 8);
                    uVar19 = uVar19 + 1;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
                uStack_70 = uVar21;
                if (uVar25 - uVar21 < 0xfffffffffffffffd) {
                  lVar20 = local_58 + lVar20;
                  do {
                    (&local_78->vftablePtr)[uVar19] =
                         *(AstTypeUnion_vftable **)(lVar20 + uVar19 * 8);
                    *(undefined8 *)(&(local_78->AstNode_data).offset_0x0 + uVar19 * 2) =
                         *(undefined8 *)(lVar20 + 8 + uVar19 * 8);
                    *(undefined8 *)((longlong)&(local_78->AstNode_data).offset_0x4 + uVar19 * 8 + 4)
                         = *(undefined8 *)(lVar20 + 0x10 + uVar19 * 8);
                    *(undefined8 *)((longlong)&(local_78->AstNode_data).offset_0xc + uVar19 * 8 + 4)
                         = *(undefined8 *)(lVar20 + 0x18 + uVar19 * 8);
                    uVar19 = uVar19 + 4;
                  } while (uVar21 != uVar19);
                }
              }
LAB_140794ace:
              this_00 = (AstTypeUnion *)FUN_1407b5010(uVar16,0x30);
              Luau::AstTypeUnion::AstTypeUnion(this_00,&local_f8,&local_78);
              if (*(char *)(local_50 + 0x58) == '\x01') {
                uVar16 = *(undefined8 *)(local_50 + 0xd8);
                if (local_80 == 0) {
                  pAVar15 = (AstTypeUnion *)0x0;
                }
                else {
                  lVar20 = *local_b0;
                  pAVar15 = (AstTypeUnion *)FUN_1407b5010(uVar16);
                  if ((local_80 < 10) ||
                     ((ulonglong)((longlong)pAVar15 + (local_e8 - (local_e0 + lVar20))) < 0x20)) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = local_80 & 0xfffffffffffffffc;
                    uVar25 = 0;
                    do {
                      puVar18 = (undefined8 *)((longlong)local_60 + uVar25 * 8 + lVar20);
                      uVar8 = puVar18[1];
                      puVar17 = (undefined8 *)((longlong)local_60 + uVar25 * 8 + lVar20 + 0x10);
                      uVar9 = *puVar17;
                      uVar10 = puVar17[1];
                      (&pAVar15->vftablePtr)[uVar25] = (AstTypeUnion_vftable *)*puVar18;
                      *(undefined8 *)(&pAVar15->vftablePtr + uVar25 + 1) = uVar8;
                      puVar17 = (undefined8 *)
                                ((longlong)&(pAVar15->AstNode_data).offset_0x4 + uVar25 * 8 + 4);
                      *puVar17 = uVar9;
                      puVar17[1] = uVar10;
                      uVar25 = uVar25 + 4;
                    } while (uVar21 != uVar25);
                    if (local_80 == uVar21) goto LAB_140794dda;
                  }
                  uVar19 = uVar21;
                  for (uVar25 = local_80 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                    (&pAVar15->vftablePtr)[uVar19] =
                         *(AstTypeUnion_vftable **)((longlong)local_60 + uVar19 * 8 + lVar20);
                    uVar19 = uVar19 + 1;
                  }
                  if (uVar21 - local_80 < 0xfffffffffffffffd) {
                    do {
                      (&pAVar15->vftablePtr)[uVar19] =
                           *(AstTypeUnion_vftable **)((longlong)local_60 + uVar19 * 8 + lVar20);
                      *(undefined8 *)(&(pAVar15->AstNode_data).offset_0x0 + uVar19 * 2) =
                           *(undefined8 *)((longlong)local_60 + uVar19 * 8 + lVar20 + 8);
                      *(undefined8 *)
                       ((longlong)&(pAVar15->AstNode_data).offset_0x4 + uVar19 * 8 + 4) =
                           *(undefined8 *)((longlong)local_60 + uVar19 * 8 + lVar20 + 0x10);
                      *(undefined8 *)
                       ((longlong)&(pAVar15->AstNode_data).offset_0xc + uVar19 * 8 + 4) =
                           *(undefined8 *)((longlong)local_60 + uVar19 * 8 + lVar20 + 0x18);
                      uVar19 = uVar19 + 4;
                    } while (local_80 != uVar19);
                  }
                }
LAB_140794dda:
                uVar16 = FUN_1407b5010(uVar16,0x20);
                uStack_70 = local_80;
                local_a8 = local_d0;
                uStack_a0 = CONCAT71(uStack_a0._1_7_,(char)local_88);
                local_78 = pAVar15;
                FUN_14079f2c0(uVar16,&local_a8,&local_78);
                local_78 = this_00;
                puVar17 = (undefined8 *)FUN_14078e300(local_50 + 0x420,&local_78);
LAB_140794e82:
                *puVar17 = uVar16;
              }
            }
            else {
              if (!bVar11) {
                    /* WARNING: Subroutine does not return */
                Luau::ParseError::ParseError_Constructor_or_Destructor
                          (local_c8,"Composite type was not an intersection or union.",pcVar22,
                           lVar20);
              }
              uVar16 = *(undefined8 *)(local_50 + 0xd8);
              if (uVar21 == 0) {
                local_78 = (AstTypeUnion *)0x0;
                uStack_70 = 0;
                goto LAB_140794bdb;
              }
              lVar20 = *plVar1;
              local_78 = (AstTypeUnion *)FUN_1407b5010(uVar16,uVar21 * 8);
              if ((uVar21 < 10) ||
                 ((ulonglong)((longlong)local_78 + (local_c0 - ((longlong)local_b8 + lVar20))) <
                  0x20)) {
                uVar25 = 0;
                goto LAB_140794a0b;
              }
              uVar25 = uVar21 & 0xfffffffffffffffc;
              uVar19 = 0;
              do {
                puVar3 = (undefined4 *)(local_58 + lVar20 + uVar19 * 8);
                uVar5 = puVar3[1];
                uVar6 = puVar3[2];
                uVar7 = puVar3[3];
                puVar17 = (undefined8 *)(local_58 + lVar20 + 0x10 + uVar19 * 8);
                uVar8 = *puVar17;
                uVar9 = puVar17[1];
                ppAVar2 = &local_78->vftablePtr + uVar19;
                *(undefined4 *)ppAVar2 = *puVar3;
                *(undefined4 *)((longlong)ppAVar2 + 4) = uVar5;
                ((AstNode_data *)(ppAVar2 + 1))->offset_0x0 = uVar6;
                *(undefined4 *)((longlong)ppAVar2 + 0xc) = uVar7;
                puVar17 = (undefined8 *)
                          ((longlong)&(local_78->AstNode_data).offset_0x4 + uVar19 * 8 + 4);
                *puVar17 = uVar8;
                puVar17[1] = uVar9;
                uVar19 = uVar19 + 4;
              } while (uVar25 != uVar19);
              uStack_70 = uVar21;
              if (uVar21 != uVar25) {
LAB_140794a0b:
                uVar24 = uVar21 & 3;
                uVar19 = uVar25;
                if (uVar24 != 0) {
                  do {
                    (&local_78->vftablePtr)[uVar19] =
                         *(AstTypeUnion_vftable **)(lVar20 + local_58 + uVar19 * 8);
                    uVar19 = uVar19 + 1;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
                uStack_70 = uVar21;
                if (uVar25 - uVar21 < 0xfffffffffffffffd) {
                  lVar20 = local_58 + lVar20;
                  do {
                    (&local_78->vftablePtr)[uVar19] =
                         *(AstTypeUnion_vftable **)(lVar20 + uVar19 * 8);
                    *(undefined8 *)(&(local_78->AstNode_data).offset_0x0 + uVar19 * 2) =
                         *(undefined8 *)(lVar20 + 8 + uVar19 * 8);
                    *(undefined8 *)((longlong)&(local_78->AstNode_data).offset_0x4 + uVar19 * 8 + 4)
                         = *(undefined8 *)(lVar20 + 0x10 + uVar19 * 8);
                    *(undefined8 *)((longlong)&(local_78->AstNode_data).offset_0xc + uVar19 * 8 + 4)
                         = *(undefined8 *)(lVar20 + 0x18 + uVar19 * 8);
                    uVar19 = uVar19 + 4;
                  } while (uVar21 != uVar19);
                }
              }
LAB_140794bdb:
              this_00 = (AstTypeUnion *)FUN_1407b5010(uVar16,0x30);
              Luau::AstTypeIntersection::AstTypeIntersection
                        ((AstTypeIntersection *)this_00,&local_f8,&local_78);
              if (*(char *)(local_50 + 0x58) == '\x01') {
                uVar16 = *(undefined8 *)(local_50 + 0xd8);
                if (local_80 == 0) {
                  pAVar15 = (AstTypeUnion *)0x0;
                }
                else {
                  lVar20 = *local_b0;
                  pAVar15 = (AstTypeUnion *)FUN_1407b5010(uVar16);
                  if ((local_80 < 10) ||
                     ((ulonglong)((longlong)pAVar15 + (local_e8 - (local_e0 + lVar20))) < 0x20)) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = local_80 & 0xfffffffffffffffc;
                    uVar25 = 0;
                    do {
                      puVar18 = (undefined8 *)((longlong)local_60 + uVar25 * 8 + lVar20);
                      uVar8 = puVar18[1];
                      puVar17 = (undefined8 *)((longlong)local_60 + uVar25 * 8 + lVar20 + 0x10);
                      uVar9 = *puVar17;
                      uVar10 = puVar17[1];
                      (&pAVar15->vftablePtr)[uVar25] = (AstTypeUnion_vftable *)*puVar18;
                      *(undefined8 *)(&pAVar15->vftablePtr + uVar25 + 1) = uVar8;
                      puVar17 = (undefined8 *)
                                ((longlong)&(pAVar15->AstNode_data).offset_0x4 + uVar25 * 8 + 4);
                      *puVar17 = uVar9;
                      puVar17[1] = uVar10;
                      uVar25 = uVar25 + 4;
                    } while (uVar21 != uVar25);
                    if (local_80 == uVar21) goto LAB_140794e30;
                  }
                  uVar19 = uVar21;
                  for (uVar25 = local_80 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                    (&pAVar15->vftablePtr)[uVar19] =
                         *(AstTypeUnion_vftable **)((longlong)local_60 + uVar19 * 8 + lVar20);
                    uVar19 = uVar19 + 1;
                  }
                  if (uVar21 - local_80 < 0xfffffffffffffffd) {
                    do {
                      (&pAVar15->vftablePtr)[uVar19] =
                           *(AstTypeUnion_vftable **)((longlong)local_60 + uVar19 * 8 + lVar20);
                      *(undefined8 *)(&(pAVar15->AstNode_data).offset_0x0 + uVar19 * 2) =
                           *(undefined8 *)((longlong)local_60 + uVar19 * 8 + lVar20 + 8);
                      *(undefined8 *)
                       ((longlong)&(pAVar15->AstNode_data).offset_0x4 + uVar19 * 8 + 4) =
                           *(undefined8 *)((longlong)local_60 + uVar19 * 8 + lVar20 + 0x10);
                      *(undefined8 *)
                       ((longlong)&(pAVar15->AstNode_data).offset_0xc + uVar19 * 8 + 4) =
                           *(undefined8 *)((longlong)local_60 + uVar19 * 8 + lVar20 + 0x18);
                      uVar19 = uVar19 + 4;
                    } while (local_80 != uVar19);
                  }
                }
LAB_140794e30:
                uVar16 = FUN_1407b5010(uVar16,0x20);
                uStack_70 = local_80;
                local_a8 = local_d0;
                uStack_a0 = CONCAT71(uStack_a0._1_7_,(char)local_88);
                local_78 = pAVar15;
                FUN_14079f2f0(uVar16,&local_a8,&local_78);
                local_78 = this_00;
                puVar17 = (undefined8 *)FUN_14078e300(local_50 + 0x420,&local_78);
                goto LAB_140794e82;
              }
            }
          }
          lVar20 = (longlong)local_60 + *(longlong *)(local_50 + 0x3d0);
          if (lVar20 != *(longlong *)(local_50 + 0x3d8)) {
LAB_140794895:
            *(longlong *)(local_50 + 0x3d8) = lVar20;
          }
LAB_14079489c:
          local_58 = local_58 + *(longlong *)(local_50 + 0x2f8);
          if (local_58 != *(longlong *)(local_50 + 0x300)) {
            *(longlong *)(local_50 + 0x300) = local_58;
          }
          return this_00;
        }
        local_78 = (AstTypeUnion *)*puVar17;
        uStack_70 = *(undefined8 *)(lVar13 + 0x8c);
        FUN_140787100(local_50);
        local_a8 = local_78;
        uStack_a0 = uStack_70;
        this = (AstTypeOptional *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x20);
        Luau::AstTypeOptional::AstTypeOptional(this,&local_a8);
        local_100 = this;
        if (*(undefined8 **)(local_50 + 0x300) == *(undefined8 **)(local_50 + 0x308)) {
          pcVar22 = (char *)&local_100;
          FUN_140029790(plVar1);
        }
        else {
          **(undefined8 **)(local_50 + 0x300) = this;
          *(longlong *)(local_50 + 0x300) = *(longlong *)(local_50 + 0x300) + 8;
        }
        iVar26 = iVar26 + 1;
LAB_1407947f0:
        bVar12 = true;
        uVar25 = uVar21 + 1;
      }
    }
    else if (iVar4 == 0x106) {
      pcVar22 = "Unexpected \'...\' after type annotation";
      FUN_14078f3b0(local_50,puVar17);
      FUN_140787100(local_50);
      uVar25 = uVar21;
    }
    else {
      if (iVar4 != 0x7c) goto LAB_14079480e;
      FUN_140787100(local_50);
      uVar5 = *(undefined4 *)(local_50 + 0x114);
      pcVar22 = (char *)0x0;
      lVar20 = 0;
      expected_type_got_s(local_50,&local_78);
      if (*(undefined8 **)(local_50 + 0x300) == *(undefined8 **)(local_50 + 0x308)) {
        pcVar22 = (char *)&local_78;
        FUN_140029790(plVar1);
      }
      else {
        **(undefined8 **)(local_50 + 0x300) = local_78;
        *(longlong *)(local_50 + 0x300) = *(longlong *)(local_50 + 0x300) + 8;
      }
      *(undefined4 *)(local_50 + 0x114) = uVar5;
      bVar12 = true;
      uVar25 = uVar21 + 1;
      if (*(char *)(local_50 + 0x58) == '\x01') {
        if (local_d8 != (AstTypeUnion *)0x0 || (local_88 & 1) != 0) {
          puVar18 = *(undefined8 **)(local_50 + 0x3d8);
          if (puVar18 != *(undefined8 **)(local_50 + 0x3e0)) goto LAB_1407947b6;
          pcVar22 = (char *)&local_90;
          FUN_140029790(local_b0);
          goto LAB_140794805;
        }
        local_88 = CONCAT71((int7)((ulonglong)local_50 >> 8),1);
        local_d0 = local_90;
        goto LAB_1407947f0;
      }
    }
    uVar21 = uVar25;
    if ((uint)(DAT_1417003a8 + iVar26) < uVar25) {
                    /* WARNING: Subroutine does not return */
      Luau::ParseError::ParseError_Constructor_or_Destructor
                ((undefined8 *)(*(longlong *)(*(longlong *)(local_50 + 0x300) + -8) + 0xc),
                 "Exceeded allowed type length; simplify your type annotation to make the code compile"
                 ,pcVar22,lVar20);
    }
  } while( true );
}

