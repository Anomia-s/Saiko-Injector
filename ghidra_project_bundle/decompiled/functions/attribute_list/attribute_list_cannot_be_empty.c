/**
 * Function: attribute_list_cannot_be_empty
 * Address:  14078f400
 * Signature: undefined attribute_list_cannot_be_empty(void)
 * Body size: 1437 bytes
 */


void attribute_list_cannot_be_empty(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  AstAttr *pAVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStackY_168 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  AstAttr *local_110;
  undefined8 local_108;
  AstAttr *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e0;
  char local_dc;
  int local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong lStack_70;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStackY_168;
  local_88 = (undefined1  [16])0x0;
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 == 0x11c) {
    local_78 = *(longlong *)(param_1 + 0x84);
    lStack_70 = *(longlong *)(param_1 + 0x8c);
    uVar15 = *(undefined8 *)(param_1 + 0x98);
    local_98 = *(undefined8 *)(param_1 + 0x84);
    uStack_90 = *(undefined8 *)(param_1 + 0x8c);
    attribute_name_is_missing(param_1,local_a8,&local_98,uVar15);
    FUN_140787100(param_1);
    uVar14 = 3;
    if (local_a8[4] != '\0') {
      uVar14 = local_a8._0_4_;
    }
    pAVar11 = (AstAttr *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x40);
    local_d8 = local_88._0_4_;
    iStack_d4 = local_88._4_4_;
    uStack_d0 = local_88._8_4_;
    uStack_cc = local_88._12_4_;
    Luau::AstAttr::AstAttr(pAVar11,&local_78,uVar14,(undefined8 *)&local_d8,uVar15);
    lVar4 = *param_2;
    puVar5 = *(undefined8 **)(lVar4 + 8);
    local_110 = pAVar11;
    if (puVar5 == *(undefined8 **)(lVar4 + 0x10)) {
      FUN_140029790(lVar4,puVar5,&local_110);
      param_2[2] = param_2[2] + 1;
    }
    else {
      *puVar5 = pAVar11;
      *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 8;
      param_2[2] = param_2[2] + 1;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x84);
    FUN_140787100(param_1);
    iVar8 = iStack_d4;
    iVar3 = local_d8;
    local_d8 = (int)lVar4;
    iVar7 = local_d8;
    iStack_d4 = (int)((ulonglong)lVar4 >> 0x20);
    iVar9 = iStack_d4;
    if (*(int *)(param_1 + 0x80) != 0x5d) {
      local_d8 = iVar3;
      iStack_d4 = iVar8;
      if (*(int *)(param_1 + 0x80) != 0x119) goto LAB_14078f650;
      do {
        uVar15 = *(undefined8 *)(param_1 + 0x98);
        auVar16 = *(undefined1 (*) [16])(param_1 + 0x84);
        FUN_140787100(param_1);
        while( true ) {
          iVar3 = *(int *)(param_1 + 0x80);
          local_a8 = auVar16;
          if (((iVar3 - 0x116U < 2) || (iVar3 == 0x7b)) || (iVar3 == 0x28)) {
            FUN_14078f9c0(param_1,&local_d8,0);
            lVar4 = local_b8;
            if (lStack_b0 != 0) {
              lVar13 = lStack_b0 << 3;
              lVar12 = 0;
              do {
                uVar6 = *(undefined8 *)(lVar4 + lVar12);
                cVar10 = FUN_1406c45e0(uVar6);
                if ((cVar10 == '\0') && (cVar10 = FUN_1406c4610(uVar6), cVar10 == '\0')) {
                  FUN_14078f3b0(param_1,local_c8,
                                "Only literals can be passed as arguments for attributes");
                }
                lVar12 = lVar12 + 8;
              } while (lVar13 != lVar12);
            }
            local_f8 = local_a8._0_8_;
            uStack_f0 = local_a8._8_8_;
            attribute_name_is_missing(param_1,&local_e0,&local_f8,uVar15);
            uVar14 = 3;
            if (local_dc != '\0') {
              uVar14 = local_e0;
            }
            local_110 = (AstAttr *)local_a8._0_8_;
            local_108 = local_c0;
            pAVar11 = (AstAttr *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x40);
            local_78 = local_b8;
            lStack_70 = lStack_b0;
            Luau::AstAttr::AstAttr(pAVar11,&local_110,uVar14,&local_78,uVar15);
            lVar4 = *param_2;
            local_100 = pAVar11;
            if (*(undefined8 **)(lVar4 + 8) == *(undefined8 **)(lVar4 + 0x10)) {
              FUN_140029790();
            }
            else {
              **(undefined8 **)(lVar4 + 8) = pAVar11;
              *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 8;
            }
            param_2[2] = param_2[2] + 1;
            iVar3 = *(int *)(param_1 + 0x80);
          }
          else {
            local_a8._0_8_ = auVar16._0_8_;
            local_a8._8_8_ = auVar16._8_8_;
            local_128 = local_a8._0_8_;
            uStack_120 = local_a8._8_8_;
            attribute_name_is_missing(param_1,&local_78,&local_128,uVar15);
            uVar14 = 3;
            if (local_78._4_1_ != '\0') {
              uVar14 = (undefined4)local_78;
            }
            pAVar11 = (AstAttr *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x40);
            local_d8 = local_88._0_4_;
            iStack_d4 = local_88._4_4_;
            uStack_d0 = local_88._8_4_;
            uStack_cc = local_88._12_4_;
            Luau::AstAttr::AstAttr
                      (pAVar11,(undefined8 *)local_a8,uVar14,(undefined8 *)&local_d8,uVar15);
            local_d8 = (int)pAVar11;
            iStack_d4 = (int)((ulonglong)pAVar11 >> 0x20);
            lVar4 = *param_2;
            puVar5 = *(undefined8 **)(lVar4 + 8);
            if (puVar5 == *(undefined8 **)(lVar4 + 0x10)) {
              FUN_140029790(lVar4,puVar5,&local_d8);
            }
            else {
              *puVar5 = pAVar11;
              *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 8;
            }
            param_2[2] = param_2[2] + 1;
            iVar3 = *(int *)(param_1 + 0x80);
          }
          if (iVar3 != 0x2c) goto joined_r0x00014078f905;
          FUN_140787100(param_1);
          if (*(int *)(param_1 + 0x80) == 0x119) break;
LAB_14078f650:
          expected_identifier_when_parsing_s_got_s(param_1,"attribute name");
          auVar1 = *(undefined1 (*) [16])(param_1 + 0x84);
          uVar15 = *(undefined8 *)(param_1 + 0x128);
          auVar16._0_8_ = auVar1._0_8_;
          auVar16._8_4_ = auVar1._0_4_;
          auVar16._12_4_ = auVar1._4_4_;
        }
      } while( true );
    }
    uStack_d0 = (int)*(undefined8 *)(param_1 + 0x8c);
    uStack_cc = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x8c) >> 0x20);
    FUN_14078f3b0(param_1,&local_d8,"Attribute list cannot be empty");
    lStack_70 = *(longlong *)(param_1 + 0x8c);
    local_78 = lVar4;
    pAVar11 = (AstAttr *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x40);
    local_d8 = local_88._0_4_;
    iStack_d4 = local_88._4_4_;
    uStack_d0 = local_88._8_4_;
    uStack_cc = local_88._12_4_;
    Luau::AstAttr::AstAttr
              (pAVar11,&local_78,3,(undefined8 *)&local_d8,*(undefined8 *)(param_1 + 0x128));
    local_d8 = (int)pAVar11;
    iStack_d4 = (int)((ulonglong)pAVar11 >> 0x20);
    lVar4 = *param_2;
    puVar5 = *(undefined8 **)(lVar4 + 8);
    if (puVar5 == *(undefined8 **)(lVar4 + 0x10)) {
      FUN_140029790(lVar4,puVar5,&local_d8);
    }
    else {
      *puVar5 = pAVar11;
      *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 8;
    }
    param_2[2] = param_2[2] + 1;
    iVar3 = *(int *)(param_1 + 0x80);
joined_r0x00014078f905:
    local_d8 = iVar2;
    iStack_d4 = iVar7;
    uStack_d0 = iVar9;
    if (iVar3 == 0x5d) {
      FUN_140787100(param_1);
    }
    else {
      expected_s_to_close_s_at_column_d_got_ss(param_1,0x5d,&local_d8,0);
      FUN_14079c3d0(param_1,0x5d);
    }
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStackY_168)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStackY_168);
}

