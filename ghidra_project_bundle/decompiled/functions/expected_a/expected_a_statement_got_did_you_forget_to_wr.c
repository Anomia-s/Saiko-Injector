/**
 * Function: expected_a_statement_got_did_you_forget_to_wr
 * Address:  14078ff20
 * Signature: undefined expected_a_statement_got_did_you_forget_to_wr(void)
 * Body size: 2447 bytes
 */


void expected_a_statement_got_did_you_forget_to_wr
               (longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4,
               undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  AstExprFunction *this;
  longlong lVar16;
  void *_Dst;
  void *pvVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  byte bVar23;
  ulonglong uVar24;
  undefined8 local_150 [2];
  undefined8 local_140 [2];
  int local_12c;
  undefined8 local_128;
  undefined8 *local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong local_90;
  uint local_88 [2];
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  AstExprFunction *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_108 = param_4[1];
  uStack_104 = param_4[2];
  uStack_100 = param_4[3];
  uStack_fc = param_4[4];
  if (param_7[1] != 0) {
    lVar20 = *(longlong *)*param_7;
    local_108 = *(undefined4 *)(lVar20 + 0xc);
    uStack_104 = *(undefined4 *)(lVar20 + 0x10);
    uStack_100 = *(undefined4 *)(lVar20 + 0x14);
    uStack_fc = *(undefined4 *)(lVar20 + 0x18);
  }
  cVar3 = *(char *)(param_1 + 0x58);
  if (cVar3 == '\x01') {
    lVar13 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x60);
    FUN_14079ef40(lVar13);
    lVar20 = lVar13 + 0x28;
    lVar16 = lVar13 + 0x18;
    lVar18 = lVar13 + 0xc;
    local_60 = lVar13;
  }
  else {
    lVar16 = 0;
    lVar20 = 0;
    local_60 = 0;
    lVar18 = 0;
  }
  expected_type_pack_after_got_type(param_1,local_150,0,lVar18,lVar16,lVar20);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar7 = *(undefined8 *)(param_1 + 0x84);
  local_12c = iVar4;
  local_128 = uVar7;
  if (iVar4 == 0x28) {
    FUN_140787100(param_1);
  }
  else {
    FUN_14079c360(param_1,0x28,"function");
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x1c0) + 0xa4);
  *piVar1 = *piVar1 + 1;
  local_a0 = (longlong *)(param_1 + 0x298);
  local_98 = (*(longlong *)(param_1 + 0x2a0) - *(longlong *)(param_1 + 0x298) >> 3) *
             -0x3333333333333333;
  local_90 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_120 = param_2;
  local_50 = param_1;
  if (*(int *)(param_1 + 0x80) == 0x29) {
    local_58 = 0;
    local_d8 = 0;
    local_68 = (AstExprFunction *)0x0;
    if (iVar4 == 0x28) {
LAB_14079016b:
      local_e0 = *(undefined8 *)(local_50 + 0x8c);
      local_d8 = 1;
      local_e8 = uVar7;
    }
LAB_14079017e:
    FUN_140787100(local_50);
  }
  else {
    if (cVar3 == '\0') {
      FUN_14078e590(param_1,&local_c8,&local_a0,1,0,0,0);
    }
    else {
      FUN_14078e590(param_1,&local_c8,&local_a0,1,local_60 + 0x40,0,local_60 + 0x50);
    }
    local_58 = local_b0 & 0xff;
    local_f8 = uStack_c0;
    uStack_f0 = local_b8;
    local_68 = (AstExprFunction *)local_c8;
    local_d8 = 0;
    if (*(int *)(local_50 + 0x80) == 0x29 && iVar4 == 0x28) goto LAB_14079016b;
    if (*(int *)(local_50 + 0x80) == 0x29) goto LAB_14079017e;
    expected_s_to_close_s_at_column_d_got_ss(local_50,0x29,&local_12c,0);
    FUN_14079c3d0(local_50,0x29);
  }
  piVar1 = (int *)(*(longlong *)(local_50 + 0x1c0) + 0xa4);
  *piVar1 = *piVar1 + -1;
  puVar15 = (undefined8 *)(local_50 + 0x84);
  if (*(int *)(local_50 + 0x80) == 0x3a) {
LAB_1407901cd:
    if (cVar3 != '\0') {
      *(undefined8 *)(local_60 + 0x58) = *puVar15;
    }
    FUN_140787100(local_50);
    uVar5 = *(undefined4 *)(local_50 + 0x114);
    local_70 = exceeded_allowed_recursion_depth_simplify_you();
    if (*(int *)(local_50 + 0x80) == 0x2c) {
      FUN_14078f3b0(local_50,puVar15,
                    "Expected a statement, got \',\'; did you forget to wrap the list of return types in parentheses?"
                   );
      FUN_140787100(local_50);
    }
    *(undefined4 *)(local_50 + 0x114) = uVar5;
    if (param_6 != (undefined8 *)0x0) goto LAB_140790255;
LAB_140790339:
    local_d0 = 0;
  }
  else {
    if (*(int *)(local_50 + 0x80) == 0x107) {
      FUN_14078f3b0(local_50,puVar15,
                    "Function return type annotations are written after \':\' instead of \'->\'");
      goto LAB_1407901cd;
    }
    local_70 = 0;
    if (param_6 == (undefined8 *)0x0) goto LAB_140790339;
LAB_140790255:
    local_b8 = param_6[2];
    local_c8 = *param_6;
    uStack_c0 = param_6[1];
    local_b0 = 0;
    uStack_a8 = 0;
    plVar14 = (longlong *)FUN_14078e300(local_50 + 0x168,&local_c8);
    lVar20 = *(longlong *)(local_50 + 0x150);
    lVar16 = *(longlong *)(local_50 + 0x148);
    puVar15 = (undefined8 *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x38);
    uVar6 = *(uint *)(lVar20 + -4);
    lVar18 = *plVar14;
    *puVar15 = local_c8;
    *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_c0._4_4_;
    *(undefined4 *)(puVar15 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)puVar15 + 0x14) = local_b8._4_4_;
    puVar15[3] = lVar18;
    puVar15[4] = (lVar20 - lVar16 >> 3) + -1;
    puVar15[5] = (ulonglong)uVar6;
    puVar15[6] = local_b0;
    *plVar14 = (longlong)puVar15;
    plVar8 = *(longlong **)(local_50 + 0x198);
    if (plVar8 == *(longlong **)(local_50 + 0x1a0)) {
      FUN_140029790(local_50 + 400,plVar8,plVar14);
    }
    else {
      *plVar8 = (longlong)puVar15;
      *(longlong *)(local_50 + 0x198) = *(longlong *)(local_50 + 0x198) + 8;
    }
    local_d0 = *plVar14;
  }
  lVar20 = *(longlong *)(local_50 + 0x198);
  lVar16 = *(longlong *)(local_50 + 400);
  local_88[1] = 0;
  local_88[0] = CONCAT31(local_88[0]._1_3_,(char)local_58);
  puVar9 = *(ulonglong **)(local_50 + 0x150);
  if (puVar9 == *(ulonglong **)(local_50 + 0x158)) {
    FUN_140029790(local_50 + 0x148,puVar9,local_88);
  }
  else {
    *puVar9 = (ulonglong)local_88[0];
    *(longlong *)(local_50 + 0x150) = *(longlong *)(local_50 + 0x150) + 8;
  }
  FUN_140792940(local_50,&local_c8,&local_108,param_3,&local_a0);
  lVar13 = FUN_1407874e0(local_50);
  plVar8 = (longlong *)(local_50 + 400);
  *(longlong *)(local_50 + 0x150) = *(longlong *)(local_50 + 0x150) + -8;
  lVar18 = *(longlong *)(local_50 + 400);
  _Dst = *(void **)(local_50 + 0x198);
  uVar19 = (longlong)_Dst - lVar18 >> 3;
  uVar22 = (ulonglong)(lVar20 - lVar16) >> 3 & 0xffffffff;
  if (uVar22 < uVar19) {
    lVar20 = local_50 + 0x168;
    do {
      uVar7 = *(undefined8 *)(*(longlong *)(*plVar8 + -8 + uVar19 * 8) + 0x18);
      puVar15 = (undefined8 *)FUN_14078e300(lVar20);
      uVar19 = uVar19 - 1;
      *puVar15 = uVar7;
    } while (uVar22 < uVar19);
    lVar18 = *(longlong *)(local_50 + 400);
    _Dst = *(void **)(local_50 + 0x198);
    uVar19 = (longlong)_Dst - lVar18 >> 3;
  }
  lVar20 = uVar22 - uVar19;
  if (uVar22 < uVar19) {
    pvVar17 = (void *)(lVar18 + uVar22 * 8);
LAB_1407904ba:
    *(void **)(local_50 + 0x198) = pvVar17;
  }
  else if (lVar20 != 0) {
    if (uVar22 <= (ulonglong)(*(longlong *)(local_50 + 0x1a0) - lVar18 >> 3)) {
      pvVar17 = (void *)((longlong)_Dst + lVar20 * 8);
      memset(_Dst,0,lVar20 * 8);
      goto LAB_1407904ba;
    }
    FUN_140527910(plVar8,uVar22,&local_80);
  }
  uVar7 = *(undefined8 *)(local_50 + 0x8c);
  local_80._0_4_ = *param_4;
  local_80._4_4_ = (undefined4)*(undefined8 *)(param_4 + 1);
  uStack_78 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 1) >> 0x20);
  uVar12 = FUN_14078e2a0(local_50,0x128,&local_80);
  *(undefined1 *)(lVar13 + 0x38) = uVar12;
  lVar20 = *(longlong *)(local_50 + 0x150);
  lVar16 = *(longlong *)(local_50 + 0x148);
  local_80._0_4_ = local_108;
  local_80._4_4_ = uStack_104;
  uStack_78 = (undefined4)uVar7;
  uStack_74 = (undefined4)((ulonglong)uVar7 >> 0x20);
  this = (AstExprFunction *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0xc0);
  Luau::AstExprFunction::AstExprFunction
            (this,&local_80,param_7,local_150,local_140,local_c8,&uStack_c0,(char)local_58,&local_f8
             ,lVar13,lVar20 - lVar16 >> 3,param_5,local_70,local_68,&local_e8);
  uVar19 = local_90;
  plVar8 = local_a0;
  if (*(char *)(local_50 + 0x58) != '\x01') goto LAB_14079087d;
  *(undefined8 *)(local_60 + 4) = *(undefined8 *)(param_4 + 1);
  plVar14 = (longlong *)(local_50 + 0x3d0);
  local_118 = *(longlong *)(local_50 + 0x3d0);
  local_110 = *(longlong *)(local_50 + 0x3d8);
  local_58 = local_110 - local_118;
  bVar23 = 0;
  local_70 = local_98;
  lVar20 = local_98 * 0x28;
  uVar22 = 0;
  local_68 = this;
  for (uVar24 = 0; uVar24 < uVar19; uVar24 = uVar24 + 1) {
    if (*(undefined8 **)(local_50 + 0x3d8) == *(undefined8 **)(local_50 + 0x3e0)) {
      FUN_140029790(plVar14);
    }
    else {
      **(undefined8 **)(local_50 + 0x3d8) = *(undefined8 *)(*plVar8 + lVar20 + uVar24 * 0x28 + 0x20)
      ;
      *(longlong *)(local_50 + 0x3d8) = *(longlong *)(local_50 + 0x3d8) + 8;
    }
    uVar22 = uVar22 + 1;
    bVar23 = bVar23 + 1;
  }
  lVar20 = *plVar14;
  if (uVar22 == 0) {
    lVar16 = 0;
    lVar20 = lVar20 + local_58;
    if (lVar20 != *(longlong *)(local_50 + 0x3d8)) goto LAB_140790835;
  }
  else {
    lVar16 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),uVar22 * 8);
    if (uVar22 < 10) {
      uVar19 = 0;
LAB_1407907a4:
      uVar24 = uVar19;
      if ((uVar22 & 3) != 0) {
        uVar21 = (ulonglong)(bVar23 & 3);
        do {
          *(undefined8 *)(lVar16 + uVar24 * 8) = *(undefined8 *)(lVar20 + local_58 + uVar24 * 8);
          uVar24 = uVar24 + 1;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar19 - uVar22 < 0xfffffffffffffffd) {
        lVar20 = local_58 + lVar20;
        do {
          *(undefined8 *)(lVar16 + uVar24 * 8) = *(undefined8 *)(lVar20 + uVar24 * 8);
          *(undefined8 *)(lVar16 + 8 + uVar24 * 8) = *(undefined8 *)(lVar20 + 8 + uVar24 * 8);
          *(undefined8 *)(lVar16 + 0x10 + uVar24 * 8) = *(undefined8 *)(lVar20 + 0x10 + uVar24 * 8);
          *(undefined8 *)(lVar16 + 0x18 + uVar24 * 8) = *(undefined8 *)(lVar20 + 0x18 + uVar24 * 8);
          uVar24 = uVar24 + 4;
        } while (uVar22 != uVar24);
      }
    }
    else {
      if ((ulonglong)((local_118 + lVar16) - (local_110 + lVar20)) < 0x20) {
        uVar19 = 0;
        goto LAB_1407907a4;
      }
      uVar19 = uVar22 & 0xfffffffffffffffc;
      uVar24 = 0;
      do {
        puVar2 = (undefined8 *)(local_58 + lVar20 + uVar24 * 8);
        uVar7 = puVar2[1];
        puVar15 = (undefined8 *)(local_58 + lVar20 + 0x10 + uVar24 * 8);
        uVar10 = *puVar15;
        uVar11 = puVar15[1];
        puVar15 = (undefined8 *)(lVar16 + uVar24 * 8);
        *puVar15 = *puVar2;
        puVar15[1] = uVar7;
        puVar15 = (undefined8 *)(lVar16 + 0x10 + uVar24 * 8);
        *puVar15 = uVar10;
        puVar15[1] = uVar11;
        uVar24 = uVar24 + 4;
      } while (uVar19 != uVar24);
      if (uVar22 != uVar19) goto LAB_1407907a4;
    }
    lVar20 = *plVar14 + local_58;
    if (lVar20 != *(longlong *)(local_50 + 0x3d8)) {
LAB_140790835:
      *(longlong *)(local_50 + 0x3d8) = lVar20;
    }
  }
  this = local_68;
  *(longlong *)(local_60 + 0x30) = lVar16;
  *(ulonglong *)(local_60 + 0x38) = uVar22;
  local_80._0_4_ = SUB84(local_68,0);
  local_80._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  plVar14 = (longlong *)FUN_14078e300(local_50 + 0x420,&local_80);
  *plVar14 = local_60;
  local_98 = local_70;
LAB_14079087d:
  *local_120 = this;
  local_120[1] = local_d0;
  lVar20 = local_98 * 0x28 + *plVar8;
  if (lVar20 != plVar8[1]) {
    plVar8[1] = lVar20;
  }
  return;
}

