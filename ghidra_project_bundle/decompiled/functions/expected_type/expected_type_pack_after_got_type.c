/**
 * Function: expected_type_pack_after_got_type
 * Address:  140790b90
 * Signature: undefined expected_type_pack_after_got_type(void)
 * Body size: 3164 bytes
 */


longlong *
expected_type_pack_after_got_type
          (longlong param_1,longlong *param_2,char param_3,undefined8 *param_4,longlong *param_5,
          undefined8 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  undefined8 uVar22;
  AstGenericTypePack *pAVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  longlong lVar26;
  AstGenericType *pAVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  int local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  AstGenericTypePack *local_68;
  longlong local_60;
  char local_51;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar32 = *(longlong *)(param_1 + 0x390);
  lVar9 = *(longlong *)(param_1 + 0x388);
  local_b0 = lVar32 - lVar9;
  lVar10 = *(longlong *)(param_1 + 0x3a8);
  lVar11 = *(longlong *)(param_1 + 0x3a0);
  local_a8 = lVar10 - lVar11;
  lVar29 = *(longlong *)(param_1 + 0x3d8);
  lVar30 = *(longlong *)(param_1 + 0x3d0);
  local_90 = lVar29 - lVar30;
  local_51 = param_3;
  local_50 = param_1;
  if (*(int *)(param_1 + 0x80) == 0x3c) {
    uVar12 = *(undefined8 *)(param_1 + 0x84);
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = uVar12;
    }
    local_c0 = param_2;
    FUN_140787100();
    lVar20 = local_50;
    lVar1 = local_50 + 0x388;
    local_c8 = local_50 + 0x3a0;
    lVar2 = local_50 + 0x3d0;
    lVar28 = local_50 + 0x60;
    piVar3 = (int *)(local_50 + 0x84);
    local_b8 = local_50 + 0x420;
    iVar21 = *(int *)(local_50 + 0x80);
    local_d0 = 0;
    local_98 = 0;
    local_a0 = 0;
    bVar17 = false;
    bVar14 = 0;
    do {
      local_e8 = *piVar3;
      uStack_e4 = *(undefined4 *)(lVar20 + 0x88);
      uStack_e0 = *(undefined4 *)(lVar20 + 0x8c);
      uStack_dc = *(undefined4 *)(lVar20 + 0x90);
      if (iVar21 == 0x119) {
        uVar24 = *(undefined8 *)(local_50 + 0x98);
        FUN_140787100();
      }
      else {
        expected_identifier_when_parsing_s_got_s(local_e8,0);
        uVar24 = *(undefined8 *)(local_50 + 0x128);
      }
      iVar7 = *(int *)(local_50 + 0x80);
      if ((bool)(bVar14 | iVar7 == 0x106)) {
        uVar13 = *(undefined8 *)piVar3;
        if (iVar7 == 0x106) {
          FUN_140787100();
        }
        else {
          FUN_14078f3b0(local_50,piVar3,"Generic types come before generic type packs");
        }
        if ((local_51 == '\0') || (*(int *)(local_50 + 0x80) != 0x3d)) {
          if (bVar17) {
            FUN_14078f3b0(local_50,piVar3,"Expected default type pack after type pack name");
          }
          pAVar23 = (AstGenericTypePack *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x30);
          Luau::AstGenericTypePack::AstGenericTypePack(pAVar23,(undefined8 *)&local_e8,uVar24,0);
          local_68 = pAVar23;
          if (*(char *)(local_50 + 0x58) == '\x01') {
            uVar24 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x18);
            uStack_80 = uStack_80 & 0xffffff00;
            FUN_14079f190(uVar24,uVar13);
            local_88 = (int)local_68;
            uStack_84 = (undefined4)((ulonglong)local_68 >> 0x20);
            puVar25 = (undefined8 *)FUN_14078e300(local_b8,&local_88);
            *puVar25 = uVar24;
          }
          if (*(undefined8 **)(local_50 + 0x3a8) == *(undefined8 **)(local_50 + 0x3b0)) {
            FUN_140029790(local_c8);
            local_98 = local_98 + 1;
          }
          else {
            **(undefined8 **)(local_50 + 0x3a8) = local_68;
            *(longlong *)(local_50 + 0x3a8) = *(longlong *)(local_50 + 0x3a8) + 8;
            local_98 = local_98 + 1;
          }
        }
        else {
          uVar22 = *(undefined8 *)(local_50 + 0x84);
          FUN_140787100();
          uVar8 = uStack_84;
          iVar21 = local_88;
          local_88 = (int)uVar22;
          iVar18 = local_88;
          uStack_84 = (undefined4)((ulonglong)uVar22 >> 0x20);
          uVar15 = uStack_84;
          local_88 = iVar21;
          uStack_84 = uVar8;
          if ((*(int *)(local_50 + 0x80) == 0x106) ||
             ((*(int *)(local_50 + 0x80) == 0x119 &&
              (FUN_1407a1770(lVar28,&local_88), local_88 == 0x106)))) {
            uVar22 = generic_type_pack_annotation();
            pAVar23 = (AstGenericTypePack *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x30);
            Luau::AstGenericTypePack::AstGenericTypePack
                      (pAVar23,(undefined8 *)&local_e8,uVar24,uVar22);
            local_68 = pAVar23;
            if (*(char *)(local_50 + 0x58) == '\x01') {
              uVar24 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x18);
              uStack_80 = CONCAT31(uStack_80._1_3_,1);
              local_88 = iVar18;
              uStack_84 = uVar15;
              FUN_14079f190(uVar24,uVar13);
              local_88 = (int)local_68;
              uStack_84 = (undefined4)((ulonglong)local_68 >> 0x20);
              puVar25 = (undefined8 *)FUN_14078e300(local_b8,&local_88);
              *puVar25 = uVar24;
            }
            puVar25 = *(undefined8 **)(local_50 + 0x3a8);
            if (puVar25 == *(undefined8 **)(local_50 + 0x3b0)) {
              FUN_140029790(local_c8);
            }
            else {
LAB_140791180:
              *puVar25 = local_68;
              *(longlong *)(local_50 + 0x3a8) = *(longlong *)(local_50 + 0x3a8) + 8;
            }
          }
          else {
            uVar8 = *(undefined4 *)(local_50 + 0x114);
            local_88 = *piVar3;
            uStack_84 = *(undefined4 *)(lVar20 + 0x88);
            uStack_80 = *(uint *)(lVar20 + 0x8c);
            uStack_7c = *(undefined4 *)(lVar20 + 0x90);
            expected_type_got_s(local_88,&local_68,1,0);
            lVar19 = local_60;
            if (local_60 == 0) {
              *(undefined4 *)(local_50 + 0x114) = uVar8;
              lVar26 = unexpected_after_type_annotation(local_50,local_68,&local_88);
              if (lVar26 != 0) {
                FUN_14078f3b0(local_50,lVar26 + 0xc,"Expected type pack after \'=\', got type");
              }
            }
            pAVar23 = (AstGenericTypePack *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x30);
            Luau::AstGenericTypePack::AstGenericTypePack
                      (pAVar23,(undefined8 *)&local_e8,uVar24,lVar19);
            local_68 = pAVar23;
            if (*(char *)(local_50 + 0x58) == '\x01') {
              uVar24 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x18);
              uStack_80 = CONCAT31(uStack_80._1_3_,1);
              local_88 = iVar18;
              uStack_84 = uVar15;
              FUN_14079f190(uVar24,uVar13);
              local_88 = (int)local_68;
              uStack_84 = (undefined4)((ulonglong)local_68 >> 0x20);
              puVar25 = (undefined8 *)FUN_14078e300(local_b8,&local_88);
              *puVar25 = uVar24;
            }
            puVar25 = *(undefined8 **)(local_50 + 0x3a8);
            if (puVar25 != *(undefined8 **)(local_50 + 0x3b0)) goto LAB_140791180;
            FUN_140029790(local_c8);
          }
          local_98 = local_98 + 1;
LAB_140791297:
          bVar17 = true;
        }
      }
      else {
        if (local_51 == '\x01' && iVar7 == 0x3d) {
          uVar13 = *(undefined8 *)(local_50 + 0x84);
          FUN_140787100();
          uVar8 = *(undefined4 *)(local_50 + 0x114);
          local_88 = *piVar3;
          uStack_84 = *(undefined4 *)(lVar20 + 0x88);
          uStack_80 = *(uint *)(lVar20 + 0x8c);
          uStack_7c = *(undefined4 *)(lVar20 + 0x90);
          if (*(int *)(local_50 + 0x80) == 0x26) {
            pAVar23 = (AstGenericTypePack *)0x0;
          }
          else {
            pAVar23 = (AstGenericTypePack *)0x0;
            if (*(int *)(local_50 + 0x80) != 0x7c) {
              expected_type_got_s(local_50,&local_68,0,0);
              *(undefined4 *)(local_50 + 0x114) = uVar8;
              pAVar23 = local_68;
            }
          }
          uVar22 = unexpected_after_type_annotation(local_50,pAVar23,&local_88);
          *(undefined4 *)(local_50 + 0x114) = uVar8;
          pAVar27 = (AstGenericType *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x30);
          Luau::AstGenericType::AstGenericType(pAVar27,(undefined8 *)&local_e8,uVar24,uVar22);
          local_68 = (AstGenericTypePack *)pAVar27;
          if (*(char *)(local_50 + 0x58) == '\x01') {
            uVar24 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x10);
            local_88 = (int)uVar13;
            uStack_84 = (undefined4)((ulonglong)uVar13 >> 0x20);
            uStack_80 = CONCAT31(uStack_80._1_3_,1);
            FUN_14079f170(uVar24,&local_88);
            local_88 = (int)local_68;
            uStack_84 = (undefined4)((ulonglong)local_68 >> 0x20);
            puVar25 = (undefined8 *)FUN_14078e300(local_b8,&local_88);
            *puVar25 = uVar24;
          }
          if (*(undefined8 **)(local_50 + 0x390) == *(undefined8 **)(local_50 + 0x398)) {
            FUN_140029790(lVar1);
          }
          else {
            **(undefined8 **)(local_50 + 0x390) = local_68;
            *(longlong *)(local_50 + 0x390) = *(longlong *)(local_50 + 0x390) + 8;
          }
          local_a0 = local_a0 + 1;
          goto LAB_140791297;
        }
        if (bVar17) {
          FUN_14078f3b0(local_50,piVar3,"Expected default type after type name");
        }
        pAVar27 = (AstGenericType *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x30);
        Luau::AstGenericType::AstGenericType(pAVar27,(undefined8 *)&local_e8,uVar24,0);
        local_68 = (AstGenericTypePack *)pAVar27;
        if (*(char *)(local_50 + 0x58) == '\x01') {
          uVar24 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x10);
          uStack_80 = uStack_80 & 0xffffff00;
          FUN_14079f170(uVar24,&local_88);
          local_88 = (int)local_68;
          uStack_84 = (undefined4)((ulonglong)local_68 >> 0x20);
          puVar25 = (undefined8 *)FUN_14078e300(local_b8,&local_88);
          *puVar25 = uVar24;
        }
        if (*(undefined8 **)(local_50 + 0x390) == *(undefined8 **)(local_50 + 0x398)) {
          FUN_140029790(lVar1);
        }
        else {
          **(undefined8 **)(local_50 + 0x390) = local_68;
          *(longlong *)(local_50 + 0x390) = *(longlong *)(local_50 + 0x390) + 8;
        }
        local_a0 = local_a0 + 1;
      }
      if (*(int *)(local_50 + 0x80) != 0x2c) goto LAB_140791362;
      if (param_5 != (longlong *)0x0) {
        if (*(undefined8 **)(local_50 + 0x3d8) == *(undefined8 **)(local_50 + 0x3e0)) {
          FUN_140029790(lVar2);
        }
        else {
          **(undefined8 **)(local_50 + 0x3d8) = *(undefined8 *)(local_50 + 0x84);
          *(longlong *)(local_50 + 0x3d8) = *(longlong *)(local_50 + 0x3d8) + 8;
        }
        local_d0 = local_d0 + 1;
      }
      FUN_140787100(local_50);
      iVar21 = *(int *)(local_50 + 0x80);
      bVar14 = bVar14 | iVar7 == 0x106;
    } while (iVar21 != 0x3e);
    FUN_14078f3b0(local_50,piVar3);
LAB_140791362:
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = *(undefined8 *)piVar3;
    }
    local_88 = 0x3c;
    uStack_84 = (undefined4)uVar12;
    uStack_80 = (uint)((ulonglong)uVar12 >> 0x20);
    if (*(int *)(local_50 + 0x80) == 0x3e) {
      FUN_140787100();
    }
    else {
      expected_s_to_close_s_at_column_d_got_ss(local_50,0x3e,&local_88,0);
      FUN_14079c3d0(local_50,0x3e);
    }
    param_2 = local_c0;
    uVar36 = local_98;
    uVar37 = local_a0;
    if (param_5 != (longlong *)0x0) {
      if (local_d0 == 0) {
        lVar28 = 0;
        uVar31 = 0;
      }
      else {
        lVar1 = *(longlong *)(local_50 + 0x3d0);
        lVar28 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),local_d0 * 8);
        param_2 = local_c0;
        uVar31 = local_d0;
        uVar36 = local_98;
        uVar37 = local_a0;
        if (local_d0 < 10) {
          uVar33 = 0;
        }
        else if ((ulonglong)((lVar30 + lVar28) - (lVar29 + lVar1)) < 0x20) {
          uVar33 = 0;
        }
        else {
          uVar33 = local_d0 & 0xfffffffffffffffc;
          uVar34 = 0;
          do {
            puVar5 = (undefined4 *)(local_90 + lVar1 + uVar34 * 8);
            uVar8 = puVar5[1];
            uVar15 = puVar5[2];
            uVar16 = puVar5[3];
            puVar25 = (undefined8 *)(local_90 + lVar1 + 0x10 + uVar34 * 8);
            uVar12 = *puVar25;
            uVar24 = puVar25[1];
            puVar4 = (undefined4 *)(lVar28 + uVar34 * 8);
            *puVar4 = *puVar5;
            puVar4[1] = uVar8;
            puVar4[2] = uVar15;
            puVar4[3] = uVar16;
            puVar25 = (undefined8 *)(lVar28 + 0x10 + uVar34 * 8);
            *puVar25 = uVar12;
            puVar25[1] = uVar24;
            uVar34 = uVar34 + 4;
          } while (uVar33 != uVar34);
          if (local_d0 == uVar33) goto LAB_140791546;
        }
        uVar35 = local_d0 & 3;
        uVar34 = uVar33;
        if (uVar35 != 0) {
          do {
            *(undefined8 *)(lVar28 + uVar34 * 8) = *(undefined8 *)(lVar1 + local_90 + uVar34 * 8);
            uVar34 = uVar34 + 1;
            uVar35 = uVar35 - 1;
          } while (uVar35 != 0);
        }
        if (uVar33 - local_d0 < 0xfffffffffffffffd) {
          lVar1 = local_90 + lVar1;
          do {
            *(undefined8 *)(lVar28 + uVar34 * 8) = *(undefined8 *)(lVar1 + uVar34 * 8);
            *(undefined8 *)(lVar28 + 8 + uVar34 * 8) = *(undefined8 *)(lVar1 + 8 + uVar34 * 8);
            *(undefined8 *)(lVar28 + 0x10 + uVar34 * 8) = *(undefined8 *)(lVar1 + 0x10 + uVar34 * 8)
            ;
            *(undefined8 *)(lVar28 + 0x18 + uVar34 * 8) = *(undefined8 *)(lVar1 + 0x18 + uVar34 * 8)
            ;
            uVar34 = uVar34 + 4;
          } while (local_d0 != uVar34);
        }
      }
      goto LAB_140791546;
    }
    if (local_a0 == 0) goto LAB_140791439;
LAB_140791559:
    lVar30 = *(longlong *)(local_50 + 0x388);
    lVar29 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),uVar37 * 8);
    if (uVar37 < 10) {
      uVar31 = 0;
    }
    else if ((ulonglong)((lVar9 + lVar29) - (lVar32 + lVar30)) < 0x20) {
      uVar31 = 0;
    }
    else {
      uVar31 = uVar37 & 0xfffffffffffffffc;
      uVar34 = 0;
      do {
        puVar5 = (undefined4 *)(local_b0 + lVar30 + uVar34 * 8);
        uVar8 = puVar5[1];
        uVar15 = puVar5[2];
        uVar16 = puVar5[3];
        puVar25 = (undefined8 *)(local_b0 + lVar30 + 0x10 + uVar34 * 8);
        uVar12 = *puVar25;
        uVar24 = puVar25[1];
        puVar4 = (undefined4 *)(lVar29 + uVar34 * 8);
        *puVar4 = *puVar5;
        puVar4[1] = uVar8;
        puVar4[2] = uVar15;
        puVar4[3] = uVar16;
        puVar25 = (undefined8 *)(lVar29 + 0x10 + uVar34 * 8);
        *puVar25 = uVar12;
        puVar25[1] = uVar24;
        uVar34 = uVar34 + 4;
      } while (uVar31 != uVar34);
      if (uVar37 == uVar31) goto LAB_14079166f;
    }
    uVar33 = uVar37 & 3;
    uVar34 = uVar31;
    if (uVar33 != 0) {
      do {
        *(undefined8 *)(lVar29 + uVar34 * 8) = *(undefined8 *)(local_b0 + lVar30 + uVar34 * 8);
        uVar34 = uVar34 + 1;
        uVar33 = uVar33 - 1;
      } while (uVar33 != 0);
    }
    if (uVar31 - uVar37 < 0xfffffffffffffffd) {
      lVar30 = local_b0 + lVar30;
      do {
        *(undefined8 *)(lVar29 + uVar34 * 8) = *(undefined8 *)(lVar30 + uVar34 * 8);
        *(undefined8 *)(lVar29 + 8 + uVar34 * 8) = *(undefined8 *)(lVar30 + 8 + uVar34 * 8);
        *(undefined8 *)(lVar29 + 0x10 + uVar34 * 8) = *(undefined8 *)(lVar30 + 0x10 + uVar34 * 8);
        *(undefined8 *)(lVar29 + 0x18 + uVar34 * 8) = *(undefined8 *)(lVar30 + 0x18 + uVar34 * 8);
        uVar34 = uVar34 + 4;
      } while (uVar37 != uVar34);
    }
  }
  else {
    uVar36 = 0;
    uVar37 = 0;
    lVar28 = 0;
    lVar29 = 0;
    lVar30 = 0;
    uVar31 = 0;
    if (param_5 == (longlong *)0x0) goto LAB_1407917a6;
LAB_140791546:
    *param_5 = lVar28;
    param_5[1] = uVar31;
    if (uVar37 != 0) goto LAB_140791559;
LAB_140791439:
    lVar29 = 0;
  }
LAB_14079166f:
  if (uVar36 == 0) {
    lVar30 = 0;
    uVar36 = 0;
    param_1 = local_50;
  }
  else {
    lVar32 = *(longlong *)(local_50 + 0x3a0);
    lVar30 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),uVar36 * 8);
    param_1 = local_50;
    if (uVar36 < 10) {
      uVar31 = 0;
    }
    else if ((ulonglong)((lVar11 + lVar30) - (lVar10 + lVar32)) < 0x20) {
      uVar31 = 0;
    }
    else {
      uVar31 = uVar36 & 0xfffffffffffffffc;
      uVar34 = 0;
      do {
        puVar6 = (undefined8 *)(local_a8 + lVar32 + uVar34 * 8);
        uVar12 = puVar6[1];
        puVar25 = (undefined8 *)(local_a8 + lVar32 + 0x10 + uVar34 * 8);
        uVar24 = *puVar25;
        uVar13 = puVar25[1];
        puVar25 = (undefined8 *)(lVar30 + uVar34 * 8);
        *puVar25 = *puVar6;
        puVar25[1] = uVar12;
        puVar25 = (undefined8 *)(lVar30 + 0x10 + uVar34 * 8);
        *puVar25 = uVar24;
        puVar25[1] = uVar13;
        uVar34 = uVar34 + 4;
      } while (uVar31 != uVar34);
      if (uVar36 == uVar31) goto LAB_1407917a6;
    }
    uVar33 = uVar36 & 3;
    uVar34 = uVar31;
    if (uVar33 != 0) {
      do {
        *(undefined8 *)(lVar30 + uVar34 * 8) = *(undefined8 *)(lVar32 + local_a8 + uVar34 * 8);
        uVar34 = uVar34 + 1;
        uVar33 = uVar33 - 1;
      } while (uVar33 != 0);
    }
    if (uVar31 - uVar36 < 0xfffffffffffffffd) {
      lVar32 = local_a8 + lVar32;
      do {
        *(undefined8 *)(lVar30 + uVar34 * 8) = *(undefined8 *)(lVar32 + uVar34 * 8);
        *(undefined8 *)(lVar30 + 8 + uVar34 * 8) = *(undefined8 *)(lVar32 + 8 + uVar34 * 8);
        *(undefined8 *)(lVar30 + 0x10 + uVar34 * 8) = *(undefined8 *)(lVar32 + 0x10 + uVar34 * 8);
        *(undefined8 *)(lVar30 + 0x18 + uVar34 * 8) = *(undefined8 *)(lVar32 + 0x18 + uVar34 * 8);
        uVar34 = uVar34 + 4;
      } while (uVar36 != uVar34);
    }
  }
LAB_1407917a6:
  *param_2 = lVar29;
  param_2[1] = uVar37;
  param_2[2] = lVar30;
  param_2[3] = uVar36;
  local_90 = local_90 + *(longlong *)(param_1 + 0x3d0);
  if (local_90 != *(longlong *)(param_1 + 0x3d8)) {
    *(longlong *)(param_1 + 0x3d8) = local_90;
  }
  local_a8 = local_a8 + *(longlong *)(param_1 + 0x3a0);
  if (local_a8 != *(longlong *)(param_1 + 0x3a8)) {
    *(longlong *)(param_1 + 0x3a8) = local_a8;
  }
  local_b0 = local_b0 + *(longlong *)(param_1 + 0x388);
  if (local_b0 != *(longlong *)(param_1 + 0x390)) {
    *(longlong *)(param_1 + 0x390) = local_b0;
  }
  return param_2;
}

