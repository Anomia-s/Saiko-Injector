/**
 * Function: malformed_interpolated_string_got_s
 * Address:  140797c30
 * Signature: undefined malformed_interpolated_string_got_s(void)
 * Body size: 4603 bytes
 */


AstExprInterpString * malformed_interpolated_string_got_s(longlong param_1)

{
  int *piVar1;
  void *pvVar2;
  AstExprInterpString_vftable **ppAVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  uint uVar15;
  undefined8 uVar16;
  AstExprInterpString *this;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  void *pvVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong local_168;
  ulonglong uStack_160;
  longlong local_158;
  ulonglong uStack_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  DescriptorTable local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  void *pvStack_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  ulonglong local_c8;
  AstExprInterpString *local_c0;
  AstExprInterpString *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  byte local_51;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_c0 = *(AstExprInterpString **)(param_1 + 0x84);
  local_80 = *(longlong *)(param_1 + 0x210) - *(longlong *)(param_1 + 0x208);
  local_70 = *(longlong *)(param_1 + 0x228) - *(longlong *)(param_1 + 0x220);
  local_f0 = (longlong *)(param_1 + 0x3d0);
  local_130 = *(longlong *)(param_1 + 0x3d8);
  local_138 = *(longlong *)(param_1 + 0x3d0);
  local_78 = local_130 - local_138;
  local_140 = *(longlong *)(param_1 + 0x240);
  local_148 = *(longlong *)(param_1 + 0x238);
  local_60 = local_140 - local_148;
  local_51 = 1;
  local_f8 = param_1 + 0x238;
  piVar1 = (int *)(param_1 + 0x80);
  pvVar2 = (void *)(param_1 + 0x400);
  uVar29 = 1;
  local_c8 = 0;
  local_68 = 0;
  local_d0 = 0;
  uVar17 = 0;
  local_50 = param_1;
  do {
    local_108 = *(undefined8 *)(param_1 + 0x90);
    pvStack_100 = *(void **)(param_1 + 0x98);
    local_118.vftablePtr._0_4_ = (uint)*(undefined8 *)piVar1;
    local_118.vftablePtr._4_4_ = (undefined4)((ulonglong)*(undefined8 *)piVar1 >> 0x20);
    uStack_110 = (undefined4)*(undefined8 *)(param_1 + 0x88);
    uStack_10c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
    local_128 = *(undefined8 *)(param_1 + 0x84);
    uStack_120 = *(undefined8 *)(param_1 + 0x8c);
    uVar15 = nvrhi::d3d12::DescriptorTable::vfunction9(&local_118);
    uVar25 = (ulonglong)uVar15;
    if (*(ulonglong *)(local_50 + 0x418) < uVar25) {
      FUN_1400069b0(pvVar2,uVar25);
      cVar14 = *(char *)(local_50 + 0x58);
    }
    else {
      pvVar26 = pvVar2;
      if (0xf < *(ulonglong *)(local_50 + 0x418)) {
        pvVar26 = *(void **)(local_50 + 0x400);
      }
      *(ulonglong *)(local_50 + 0x410) = uVar25;
      memmove(pvVar26,pvStack_100,uVar25);
      *(undefined1 *)((longlong)pvVar26 + uVar25) = 0;
      cVar14 = *(char *)(local_50 + 0x58);
    }
    if (cVar14 == '\x01') {
      pvVar26 = pvVar2;
      if (0xf < *(ulonglong *)(local_50 + 0x418)) {
        pvVar26 = *(void **)(local_50 + 0x400);
      }
      lVar24 = *(longlong *)(local_50 + 0x410);
      local_a8 = (AstExprInterpString *)0x0;
      uVar16 = 0xffffffffffffffff;
      uVar25 = lVar24 + 1;
      if (uVar25 != 0) {
        local_a8 = (AstExprInterpString *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),uVar25);
        if (uVar25 < 4) {
          uVar19 = 0;
LAB_140797ec6:
          uVar20 = uVar19;
          if ((~(uint)lVar24 & 3) != 0) {
            uVar27 = (ulonglong)((uint)lVar24 + 1 & 3);
            do {
              *(undefined1 *)((longlong)local_a8 + uVar20) =
                   *(undefined1 *)((longlong)pvVar26 + uVar20);
              uVar20 = uVar20 + 1;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          if (2 < lVar24 - uVar19) {
            do {
              *(undefined1 *)((longlong)local_a8 + uVar20) =
                   *(undefined1 *)((longlong)pvVar26 + uVar20);
              *(undefined1 *)((longlong)local_a8 + uVar20 + 1) =
                   *(undefined1 *)((longlong)pvVar26 + uVar20 + 1);
              *(undefined1 *)((longlong)local_a8 + uVar20 + 2) =
                   *(undefined1 *)((longlong)pvVar26 + uVar20 + 2);
              *(undefined1 *)((longlong)local_a8 + uVar20 + 3) =
                   *(undefined1 *)((longlong)pvVar26 + uVar20 + 3);
              uVar20 = uVar20 + 4;
            } while (uVar25 != uVar20);
          }
        }
        else {
          uVar19 = 0;
          if ((ulonglong)((longlong)local_a8 - (longlong)pvVar26) < 0x20) goto LAB_140797ec6;
          if (uVar25 < 0x20) {
            uVar20 = 0;
LAB_140797e9a:
            uVar19 = uVar25 & 0xfffffffffffffffc;
            do {
              *(undefined4 *)((longlong)local_a8 + uVar20) =
                   *(undefined4 *)((longlong)pvVar26 + uVar20);
              uVar20 = uVar20 + 4;
            } while (uVar19 != uVar20);
            if (uVar25 != uVar19) goto LAB_140797ec6;
          }
          else {
            uVar19 = uVar25 & 0xffffffffffffffe0;
            uVar20 = 0;
            do {
              uVar16 = ((undefined8 *)((longlong)pvVar26 + uVar20))[1];
              puVar18 = (undefined8 *)((longlong)pvVar26 + uVar20 + 0x10);
              uVar11 = *puVar18;
              uVar12 = puVar18[1];
              *(undefined8 *)((longlong)local_a8 + uVar20) =
                   *(undefined8 *)((longlong)pvVar26 + uVar20);
              ((undefined8 *)((longlong)local_a8 + uVar20))[1] = uVar16;
              puVar18 = (undefined8 *)((longlong)local_a8 + uVar20 + 0x10);
              *puVar18 = uVar11;
              puVar18[1] = uVar12;
              uVar20 = uVar20 + 0x20;
            } while (uVar19 != uVar20);
            if (uVar25 != uVar19) {
              uVar20 = uVar19;
              if ((uVar25 & 0x1c) == 0) goto LAB_140797ec6;
              goto LAB_140797e9a;
            }
          }
        }
        uVar16 = *(undefined8 *)(local_50 + 0x410);
      }
      puVar7 = *(undefined4 **)(local_50 + 0x228);
      uStack_a0 = uVar16;
      if (puVar7 == *(undefined4 **)(local_50 + 0x230)) {
        FUN_14020b100(param_1 + 0x220);
      }
      else {
        uStack_a0._0_4_ = (undefined4)uVar16;
        uStack_a0._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
        *puVar7 = (int)local_a8;
        puVar7[1] = local_a8._4_4_;
        puVar7[2] = (undefined4)uStack_a0;
        puVar7[3] = uStack_a0._4_4_;
        *(longlong *)(local_50 + 0x228) = *(longlong *)(local_50 + 0x228) + 0x10;
      }
      if (*(undefined8 **)(local_50 + 0x3d8) == *(undefined8 **)(local_50 + 0x3e0)) {
        FUN_140029790(local_f0);
      }
      else {
        **(undefined8 **)(local_50 + 0x3d8) = CONCAT44(uStack_110,local_118.vftablePtr._4_4_);
        *(longlong *)(local_50 + 0x3d8) = *(longlong *)(local_50 + 0x3d8) + 8;
      }
      local_68 = local_68 + 1;
      local_c8 = local_c8 + 1;
    }
    cVar14 = FUN_1407a2430(pvVar2);
    if (cVar14 == '\0') {
      FUN_140787100(local_50);
      local_a8 = (AstExprInterpString *)0x0;
      uStack_a0 = 0;
      local_b8 = local_c0;
      uStack_b0 = uStack_120;
      this = (AstExprInterpString *)
             FUN_140792890(local_50,&local_b8,&local_a8,
                           "Interpolated string literal contains malformed escape sequence");
      goto LAB_1407987fb;
    }
    pvVar26 = pvVar2;
    if (0xf < *(ulonglong *)(local_50 + 0x418)) {
      pvVar26 = *(void **)(local_50 + 0x400);
    }
    lVar24 = *(longlong *)(local_50 + 0x410);
    local_e8 = 0;
    uVar16 = 0xffffffffffffffff;
    uVar25 = lVar24 + 1;
    if (uVar25 != 0) {
      local_e8 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),uVar25);
      if (uVar25 < 4) {
        uVar19 = 0;
LAB_1407980a6:
        uVar20 = uVar19;
        if ((~(uint)lVar24 & 3) != 0) {
          uVar27 = (ulonglong)((uint)lVar24 + 1 & 3);
          do {
            *(undefined1 *)(local_e8 + uVar20) = *(undefined1 *)((longlong)pvVar26 + uVar20);
            uVar20 = uVar20 + 1;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
        if (2 < lVar24 - uVar19) {
          do {
            *(undefined1 *)(local_e8 + uVar20) = *(undefined1 *)((longlong)pvVar26 + uVar20);
            *(undefined1 *)(local_e8 + 1 + uVar20) = *(undefined1 *)((longlong)pvVar26 + uVar20 + 1)
            ;
            *(undefined1 *)(local_e8 + 2 + uVar20) = *(undefined1 *)((longlong)pvVar26 + uVar20 + 2)
            ;
            *(undefined1 *)(local_e8 + 3 + uVar20) = *(undefined1 *)((longlong)pvVar26 + uVar20 + 3)
            ;
            uVar20 = uVar20 + 4;
          } while (uVar25 != uVar20);
        }
      }
      else {
        uVar19 = 0;
        if ((ulonglong)(local_e8 - (longlong)pvVar26) < 0x20) goto LAB_1407980a6;
        if (uVar25 < 0x20) {
          uVar20 = 0;
LAB_14079807a:
          uVar19 = uVar25 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)(local_e8 + uVar20) = *(undefined4 *)((longlong)pvVar26 + uVar20);
            uVar20 = uVar20 + 4;
          } while (uVar19 != uVar20);
          if (uVar25 != uVar19) goto LAB_1407980a6;
        }
        else {
          uVar19 = uVar25 & 0xffffffffffffffe0;
          uVar20 = 0;
          do {
            puVar7 = (undefined4 *)((longlong)pvVar26 + uVar20);
            uVar8 = puVar7[1];
            uVar9 = puVar7[2];
            uVar10 = puVar7[3];
            puVar18 = (undefined8 *)((longlong)pvVar26 + uVar20 + 0x10);
            uVar16 = *puVar18;
            uVar11 = puVar18[1];
            puVar4 = (undefined4 *)(local_e8 + uVar20);
            *puVar4 = *puVar7;
            puVar4[1] = uVar8;
            puVar4[2] = uVar9;
            puVar4[3] = uVar10;
            puVar18 = (undefined8 *)(local_e8 + 0x10 + uVar20);
            *puVar18 = uVar16;
            puVar18[1] = uVar11;
            uVar20 = uVar20 + 0x20;
          } while (uVar19 != uVar20);
          if (uVar25 != uVar19) {
            uVar20 = uVar19;
            if ((uVar25 & 0x1c) == 0) goto LAB_1407980a6;
            goto LAB_14079807a;
          }
        }
      }
      uVar16 = *(undefined8 *)(local_50 + 0x410);
    }
    uStack_e0 = uVar16;
    FUN_140787100();
    puVar7 = *(undefined4 **)(local_50 + 0x210);
    if (puVar7 == *(undefined4 **)(local_50 + 0x218)) {
      FUN_14020b100(param_1 + 0x208);
    }
    else {
      *puVar7 = (undefined4)local_e8;
      puVar7[1] = local_e8._4_4_;
      puVar7[2] = (undefined4)uStack_e0;
      puVar7[3] = uStack_e0._4_4_;
      *(longlong *)(local_50 + 0x210) = *(longlong *)(local_50 + 0x210) + 0x10;
    }
    uVar25 = local_d0 + 1;
    if (((uint)local_118.vftablePtr & 0xfffffffe) == 0x10c) {
LAB_140798372:
      if (uVar25 == 0) {
        local_b8 = (AstExprInterpString *)0x0;
        uStack_b0 = 0;
        goto LAB_14079841e;
      }
      lVar24 = *(longlong *)(local_50 + 0x208) + local_80;
      local_b8 = (AstExprInterpString *)
                 FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),uVar25 * 0x10);
      uStack_b0 = uVar25;
      if (local_d0 != 0) {
        lVar28 = 0x10;
        uVar25 = 0;
        do {
          puVar18 = (undefined8 *)(lVar24 + -0x10 + lVar28);
          uVar16 = puVar18[1];
          puVar5 = (undefined8 *)((longlong)local_b8 + lVar28 + -0x10);
          *puVar5 = *puVar18;
          puVar5[1] = uVar16;
          puVar7 = (undefined4 *)(lVar24 + lVar28);
          uVar8 = puVar7[1];
          uVar9 = puVar7[2];
          uVar10 = puVar7[3];
          puVar4 = (undefined4 *)((longlong)&local_b8->vftablePtr + lVar28);
          *puVar4 = *puVar7;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          puVar4[3] = uVar10;
          uVar25 = uVar25 + 2;
          lVar28 = lVar28 + 0x20;
        } while ((uVar29 & 0xfffffffffffffffe) != uVar25);
        if ((local_d0 & 1) == 0) {
LAB_140798412:
          puVar7 = (undefined4 *)(lVar24 + uVar25 * 0x10);
          uVar8 = puVar7[1];
          uVar9 = puVar7[2];
          uVar10 = puVar7[3];
          ppAVar3 = &local_b8->vftablePtr + uVar25 * 2;
          *(undefined4 *)ppAVar3 = *puVar7;
          *(undefined4 *)((longlong)ppAVar3 + 4) = uVar8;
          ((AstNode_data *)(ppAVar3 + 1))->offset_0x0 = uVar9;
          *(undefined4 *)((longlong)ppAVar3 + 0xc) = uVar10;
        }
LAB_14079841e:
        if (uVar17 == 0) {
          local_e8 = 0;
          uStack_e0 = 0;
        }
        else {
          lVar24 = *(longlong *)(local_50 + 0x238);
          local_e8 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),uVar17 * 8);
          uStack_e0 = uVar17;
          if (uVar17 < 10) {
            uVar29 = 0;
          }
          else if ((ulonglong)((local_148 + local_e8) - (local_140 + lVar24)) < 0x20) {
            uVar29 = 0;
          }
          else {
            uVar29 = uVar17 & 0xfffffffffffffffc;
            uVar25 = 0;
            do {
              puVar4 = (undefined4 *)(local_60 + lVar24 + uVar25 * 8);
              uVar8 = puVar4[1];
              uVar9 = puVar4[2];
              uVar10 = puVar4[3];
              puVar18 = (undefined8 *)(local_60 + lVar24 + 0x10 + uVar25 * 8);
              uVar16 = *puVar18;
              uVar11 = puVar18[1];
              puVar7 = (undefined4 *)(local_e8 + uVar25 * 8);
              *puVar7 = *puVar4;
              puVar7[1] = uVar8;
              puVar7[2] = uVar9;
              puVar7[3] = uVar10;
              puVar18 = (undefined8 *)(local_e8 + 0x10 + uVar25 * 8);
              *puVar18 = uVar16;
              puVar18[1] = uVar11;
              uVar25 = uVar25 + 4;
            } while (uVar29 != uVar25);
            if (uVar17 == uVar29) goto LAB_14079854f;
          }
          uVar19 = uVar17 & 3;
          uVar25 = uVar29;
          if (uVar19 != 0) {
            do {
              *(undefined8 *)(local_e8 + uVar25 * 8) =
                   *(undefined8 *)(lVar24 + local_60 + uVar25 * 8);
              uVar25 = uVar25 + 1;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          if (uVar29 - uVar17 < 0xfffffffffffffffd) {
            lVar24 = local_60 + lVar24;
            do {
              *(undefined8 *)(local_e8 + uVar25 * 8) = *(undefined8 *)(lVar24 + uVar25 * 8);
              *(undefined8 *)(local_e8 + 8 + uVar25 * 8) = *(undefined8 *)(lVar24 + 8 + uVar25 * 8);
              *(undefined8 *)(local_e8 + 0x10 + uVar25 * 8) =
                   *(undefined8 *)(lVar24 + 0x10 + uVar25 * 8);
              *(undefined8 *)(local_e8 + 0x18 + uVar25 * 8) =
                   *(undefined8 *)(lVar24 + 0x18 + uVar25 * 8);
              uVar25 = uVar25 + 4;
            } while (uVar17 != uVar25);
          }
        }
LAB_14079854f:
        local_118.vftablePtr._0_4_ = (uint)local_c0;
        local_118.vftablePtr._4_4_ = (undefined4)((ulonglong)local_c0 >> 0x20);
        uStack_110 = (undefined4)uStack_120;
        uStack_10c = (undefined4)((ulonglong)uStack_120 >> 0x20);
        this = (AstExprInterpString *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x40);
        Luau::AstExprInterpString::AstExprInterpString(this,&local_118,&local_b8,&local_e8);
        if (*(char *)(local_50 + 0x58) != '\x01') goto LAB_1407987fb;
        uVar16 = *(undefined8 *)(local_50 + 0xd8);
        if (local_c8 == 0) {
          lVar24 = 0;
          if (local_68 != 0) goto LAB_1407986ff;
LAB_1407985eb:
          lVar28 = 0;
        }
        else {
          lVar28 = *local_f0;
          lVar24 = FUN_1407b5010(uVar16);
          if (local_c8 < 10) {
            uVar17 = 0;
LAB_140798670:
            uVar25 = local_c8 & 3;
            uVar29 = uVar17;
            if (uVar25 != 0) {
              do {
                *(undefined8 *)(lVar24 + uVar29 * 8) =
                     *(undefined8 *)(lVar28 + local_78 + uVar29 * 8);
                uVar29 = uVar29 + 1;
                uVar25 = uVar25 - 1;
              } while (uVar25 != 0);
            }
            if (uVar17 - local_c8 < 0xfffffffffffffffd) {
              lVar28 = local_78 + lVar28;
              do {
                *(undefined8 *)(lVar24 + uVar29 * 8) = *(undefined8 *)(lVar28 + uVar29 * 8);
                *(undefined8 *)(lVar24 + 8 + uVar29 * 8) = *(undefined8 *)(lVar28 + 8 + uVar29 * 8);
                *(undefined8 *)(lVar24 + 0x10 + uVar29 * 8) =
                     *(undefined8 *)(lVar28 + 0x10 + uVar29 * 8);
                *(undefined8 *)(lVar24 + 0x18 + uVar29 * 8) =
                     *(undefined8 *)(lVar28 + 0x18 + uVar29 * 8);
                uVar29 = uVar29 + 4;
              } while (local_c8 != uVar29);
            }
          }
          else {
            if ((ulonglong)((local_138 + lVar24) - (local_130 + lVar28)) < 0x20) {
              uVar17 = 0;
              goto LAB_140798670;
            }
            uVar17 = local_c8 & 0xfffffffffffffffc;
            uVar29 = 0;
            do {
              puVar5 = (undefined8 *)(local_78 + lVar28 + uVar29 * 8);
              uVar11 = puVar5[1];
              puVar18 = (undefined8 *)(local_78 + lVar28 + 0x10 + uVar29 * 8);
              uVar12 = *puVar18;
              uVar13 = puVar18[1];
              puVar18 = (undefined8 *)(lVar24 + uVar29 * 8);
              *puVar18 = *puVar5;
              puVar18[1] = uVar11;
              puVar18 = (undefined8 *)(lVar24 + 0x10 + uVar29 * 8);
              *puVar18 = uVar12;
              puVar18[1] = uVar13;
              uVar29 = uVar29 + 4;
            } while (uVar17 != uVar29);
            if (local_c8 != uVar17) goto LAB_140798670;
          }
          if (local_68 == 0) goto LAB_1407985eb;
LAB_1407986ff:
          lVar23 = *(longlong *)(local_50 + 0x220) + local_70;
          lVar28 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),local_68 << 4);
          if (local_68 == 1) {
            uVar17 = 0;
          }
          else {
            lVar22 = 0x10;
            uVar17 = 0;
            do {
              puVar18 = (undefined8 *)(lVar23 + -0x10 + lVar22);
              uVar11 = puVar18[1];
              puVar5 = (undefined8 *)(lVar28 + -0x10 + lVar22);
              *puVar5 = *puVar18;
              puVar5[1] = uVar11;
              uVar11 = ((undefined8 *)(lVar23 + lVar22))[1];
              *(undefined8 *)(lVar28 + lVar22) = *(undefined8 *)(lVar23 + lVar22);
              ((undefined8 *)(lVar28 + lVar22))[1] = uVar11;
              uVar17 = uVar17 + 2;
              lVar22 = lVar22 + 0x20;
            } while ((local_68 & 0xfffffffffffffffe) != uVar17);
          }
          if ((local_68 & 1) != 0) {
            puVar18 = (undefined8 *)(lVar23 + uVar17 * 0x10);
            uVar11 = puVar18[1];
            puVar5 = (undefined8 *)(lVar28 + uVar17 * 0x10);
            *puVar5 = *puVar18;
            puVar5[1] = uVar11;
          }
        }
        uVar16 = FUN_1407b5010(uVar16,0x28);
        local_118.vftablePtr._0_4_ = (uint)lVar24;
        local_118.vftablePtr._4_4_ = (undefined4)((ulonglong)lVar24 >> 0x20);
        uStack_110 = (undefined4)local_c8;
        uStack_10c = (undefined4)(local_c8 >> 0x20);
        uStack_a0 = local_68;
        local_a8 = (AstExprInterpString *)lVar28;
        FUN_14079efd0(uVar16,&local_a8,&local_118);
        local_118.vftablePtr._0_4_ = (uint)this;
        local_118.vftablePtr._4_4_ = (undefined4)((ulonglong)this >> 0x20);
        puVar18 = (undefined8 *)FUN_14078e300(local_50 + 0x420,&local_118);
        *puVar18 = uVar16;
        goto LAB_1407987fb;
      }
      uVar25 = 0;
      goto LAB_140798412;
    }
    if (*piVar1 - 0x10bU < 2) {
      FUN_140787100(local_50);
      local_a8 = (AstExprInterpString *)0x0;
      uStack_a0 = 0;
      local_b8 = (AstExprInterpString *)
                 FUN_140792890(local_50,&local_128,&local_a8,
                               "Malformed interpolated string, expected expression inside \'{}\'");
      plVar21 = *(longlong **)(local_50 + 0x240);
      if (plVar21 == *(longlong **)(local_50 + 0x248)) {
        FUN_140029790(local_f8);
      }
      else {
LAB_140798364:
        *plVar21 = (longlong)local_b8;
        *(longlong *)(local_50 + 0x240) = *(longlong *)(local_50 + 0x240) + 8;
      }
LAB_14079836f:
      uVar17 = uVar17 + 1;
      goto LAB_140798372;
    }
    if (*piVar1 == 0x11e) {
      FUN_140787100(local_50);
      local_a8 = (AstExprInterpString *)0x0;
      uStack_a0 = 0;
      local_b8 = (AstExprInterpString *)
                 FUN_140792890(local_50,&local_128,&local_a8,
                               "Malformed interpolated string; did you forget to add a \'`\'?");
      plVar21 = *(longlong **)(local_50 + 0x240);
      if (plVar21 != *(longlong **)(local_50 + 0x248)) goto LAB_140798364;
      FUN_140029790(local_f8);
      goto LAB_14079836f;
    }
    local_a8 = (AstExprInterpString *)unexpected_did_you_mean_not(local_50,0);
    if (*(longlong **)(local_50 + 0x240) == *(longlong **)(local_50 + 0x248)) {
      FUN_140029790(local_f8);
    }
    else {
      **(longlong **)(local_50 + 0x240) = (longlong)local_a8;
      *(longlong *)(local_50 + 0x240) = *(longlong *)(local_50 + 0x240) + 8;
    }
    uVar19 = uVar17 + 1;
    iVar6 = *piVar1;
    if (2 < iVar6 - 0x10aU) break;
    uVar29 = uVar29 + 1;
    local_51 = local_51 + 1;
    uVar17 = uVar19;
    local_d0 = uVar25;
  } while( true );
  if (iVar6 != 0) {
    if (iVar6 != 0x11e) {
      if (iVar6 == 0x121) {
        FUN_140787100(local_50);
        local_a8 = (AstExprInterpString *)0x0;
        uStack_a0 = 0;
        this = (AstExprInterpString *)
               FUN_140792890(local_50,&local_128,&local_a8,
                             "Double braces are not permitted within interpolated strings; did you mean \'\\{\'?"
                            );
      }
      else {
        the_beginning_of_an_interpolated_string(piVar1,&local_a8);
        puVar18 = &local_a8;
        if (0xf < local_90) {
          puVar18 = &local_a8->vftablePtr;
        }
        local_b8 = (AstExprInterpString *)0x0;
        uStack_b0 = 0;
        this = (AstExprInterpString *)
               FUN_140792890(local_50,&local_128,&local_b8,"Malformed interpolated string, got %s",
                             puVar18);
        lVar24 = local_70;
        local_70 = lVar24;
        if (0xf < local_90) {
          uVar17 = local_90 + 1;
          puVar18 = &local_a8->vftablePtr;
          if (0xfff < uVar17) {
            puVar18 = *(undefined8 **)((longlong)local_a8 + -8);
            if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)puVar18))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            uVar17 = local_90 + 0x28;
          }
          thunk_FUN_140b68ba8(puVar18,uVar17);
          local_70 = lVar24;
        }
      }
      goto LAB_1407987fb;
    }
    FUN_140787100(local_50);
  }
  if (uVar25 == 0) {
    local_168 = 0;
    uStack_160 = 0;
  }
  else {
    lVar24 = *(longlong *)(local_50 + 0x208) + local_80;
    local_168 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),uVar25 * 0x10);
    uStack_160 = uVar25;
    if (local_d0 == 0) {
      uVar25 = 0;
    }
    else {
      lVar28 = 0x10;
      uVar25 = 0;
      do {
        puVar18 = (undefined8 *)(lVar24 + -0x10 + lVar28);
        uVar16 = puVar18[1];
        puVar5 = (undefined8 *)(local_168 + -0x10 + lVar28);
        *puVar5 = *puVar18;
        puVar5[1] = uVar16;
        puVar7 = (undefined4 *)(lVar24 + lVar28);
        uVar8 = puVar7[1];
        uVar9 = puVar7[2];
        uVar10 = puVar7[3];
        puVar4 = (undefined4 *)(local_168 + lVar28);
        *puVar4 = *puVar7;
        puVar4[1] = uVar8;
        puVar4[2] = uVar9;
        puVar4[3] = uVar10;
        uVar25 = uVar25 + 2;
        lVar28 = lVar28 + 0x20;
      } while ((uVar29 & 0xfffffffffffffffe) != uVar25);
      if ((local_d0 & 1) != 0) goto LAB_1407989e1;
    }
    puVar7 = (undefined4 *)(lVar24 + uVar25 * 0x10);
    uVar8 = puVar7[1];
    uVar9 = puVar7[2];
    uVar10 = puVar7[3];
    puVar4 = (undefined4 *)(local_168 + uVar25 * 0x10);
    *puVar4 = *puVar7;
    puVar4[1] = uVar8;
    puVar4[2] = uVar9;
    puVar4[3] = uVar10;
  }
LAB_1407989e1:
  if (uVar19 == 0) {
    local_158 = 0;
    uStack_150 = 0;
  }
  else {
    lVar24 = *(longlong *)(local_50 + 0x238);
    local_158 = FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),uVar19 * 8);
    uStack_150 = uVar19;
    if (uVar19 < 10) {
      uVar25 = 0;
    }
    else if ((ulonglong)((local_148 + local_158) - (local_140 + lVar24)) < 0x20) {
      uVar25 = 0;
    }
    else {
      uVar25 = uVar19 & 0xfffffffffffffffc;
      uVar20 = 0;
      do {
        puVar4 = (undefined4 *)(local_60 + lVar24 + uVar20 * 8);
        uVar8 = puVar4[1];
        uVar9 = puVar4[2];
        uVar10 = puVar4[3];
        puVar18 = (undefined8 *)(local_60 + lVar24 + 0x10 + uVar20 * 8);
        uVar16 = *puVar18;
        uVar11 = puVar18[1];
        puVar7 = (undefined4 *)(local_158 + uVar20 * 8);
        *puVar7 = *puVar4;
        puVar7[1] = uVar8;
        puVar7[2] = uVar9;
        puVar7[3] = uVar10;
        puVar18 = (undefined8 *)(local_158 + 0x10 + uVar20 * 8);
        *puVar18 = uVar16;
        puVar18[1] = uVar11;
        uVar20 = uVar20 + 4;
      } while ((uVar29 & 0xfffffffffffffffc) != uVar20);
      if (uVar19 == uVar25) goto LAB_140798b3f;
    }
    uVar19 = uVar17 - uVar25;
    if ((~(uint)uVar17 & 3) != 0) {
      uVar17 = (ulonglong)(local_51 & 3);
      do {
        *(undefined8 *)(local_158 + uVar25 * 8) = *(undefined8 *)(local_60 + lVar24 + uVar25 * 8);
        uVar25 = uVar25 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (2 < uVar19) {
      lVar24 = local_60 + lVar24;
      do {
        *(undefined8 *)(local_158 + uVar25 * 8) = *(undefined8 *)(lVar24 + uVar25 * 8);
        *(undefined8 *)(local_158 + 8 + uVar25 * 8) = *(undefined8 *)(lVar24 + 8 + uVar25 * 8);
        *(undefined8 *)(local_158 + 0x10 + uVar25 * 8) = *(undefined8 *)(lVar24 + 0x10 + uVar25 * 8)
        ;
        *(undefined8 *)(local_158 + 0x18 + uVar25 * 8) = *(undefined8 *)(lVar24 + 0x18 + uVar25 * 8)
        ;
        uVar25 = uVar25 + 4;
      } while (uVar29 != uVar25);
    }
  }
LAB_140798b3f:
  uStack_a0 = *(ulonglong *)(local_50 + 0xa8);
  local_a8 = local_c0;
  this = (AstExprInterpString *)FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),0x40);
  Luau::AstExprInterpString::AstExprInterpString(this,&local_a8,&local_168,&local_158);
  if (*(char *)(local_50 + 0x58) == '\x01') {
    uVar16 = *(undefined8 *)(local_50 + 0xd8);
    if (local_c8 == 0) {
      lVar24 = 0;
    }
    else {
      lVar28 = *local_f0;
      lVar24 = FUN_1407b5010(uVar16);
      if (local_c8 < 10) {
        uVar17 = 0;
      }
      else if ((ulonglong)((local_138 + lVar24) - (local_130 + lVar28)) < 0x20) {
        uVar17 = 0;
      }
      else {
        uVar17 = local_c8 & 0xfffffffffffffffc;
        uVar29 = 0;
        do {
          puVar5 = (undefined8 *)(local_78 + lVar28 + uVar29 * 8);
          uVar11 = puVar5[1];
          puVar18 = (undefined8 *)(local_78 + lVar28 + 0x10 + uVar29 * 8);
          uVar12 = *puVar18;
          uVar13 = puVar18[1];
          puVar18 = (undefined8 *)(lVar24 + uVar29 * 8);
          *puVar18 = *puVar5;
          puVar18[1] = uVar11;
          puVar18 = (undefined8 *)(lVar24 + 0x10 + uVar29 * 8);
          *puVar18 = uVar12;
          puVar18[1] = uVar13;
          uVar29 = uVar29 + 4;
        } while (uVar17 != uVar29);
        if (local_c8 == uVar17) goto LAB_140798cc6;
      }
      uVar25 = local_c8 & 3;
      uVar29 = uVar17;
      if (uVar25 != 0) {
        do {
          *(undefined8 *)(lVar24 + uVar29 * 8) = *(undefined8 *)(lVar28 + local_78 + uVar29 * 8);
          uVar29 = uVar29 + 1;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      if (uVar17 - local_c8 < 0xfffffffffffffffd) {
        lVar28 = local_78 + lVar28;
        do {
          *(undefined8 *)(lVar24 + uVar29 * 8) = *(undefined8 *)(lVar28 + uVar29 * 8);
          *(undefined8 *)(lVar24 + 8 + uVar29 * 8) = *(undefined8 *)(lVar28 + 8 + uVar29 * 8);
          *(undefined8 *)(lVar24 + 0x10 + uVar29 * 8) = *(undefined8 *)(lVar28 + 0x10 + uVar29 * 8);
          *(undefined8 *)(lVar24 + 0x18 + uVar29 * 8) = *(undefined8 *)(lVar28 + 0x18 + uVar29 * 8);
          uVar29 = uVar29 + 4;
        } while (local_c8 != uVar29);
      }
    }
LAB_140798cc6:
    if (local_68 == 0) {
      local_b8 = (AstExprInterpString *)0x0;
    }
    else {
      lVar28 = *(longlong *)(local_50 + 0x220) + local_70;
      local_b8 = (AstExprInterpString *)
                 FUN_1407b5010(*(undefined8 *)(local_50 + 0xd8),local_68 << 4);
      if (local_68 == 1) {
        uVar17 = 0;
      }
      else {
        lVar23 = 0x10;
        uVar17 = 0;
        do {
          puVar18 = (undefined8 *)(lVar28 + -0x10 + lVar23);
          uVar11 = puVar18[1];
          puVar5 = (undefined8 *)((longlong)local_b8 + lVar23 + -0x10);
          *puVar5 = *puVar18;
          puVar5[1] = uVar11;
          uVar11 = ((undefined8 *)(lVar28 + lVar23))[1];
          puVar18 = (undefined8 *)((longlong)&local_b8->vftablePtr + lVar23);
          *puVar18 = *(undefined8 *)(lVar28 + lVar23);
          puVar18[1] = uVar11;
          uVar17 = uVar17 + 2;
          lVar23 = lVar23 + 0x20;
        } while ((local_68 & 0xfffffffffffffffe) != uVar17);
      }
      if ((local_68 & 1) != 0) {
        puVar18 = (undefined8 *)(lVar28 + uVar17 * 0x10);
        uVar11 = puVar18[1];
        (&local_b8->vftablePtr)[uVar17 * 2] = (AstExprInterpString_vftable *)*puVar18;
        *(undefined8 *)(&local_b8->vftablePtr + uVar17 * 2 + 1) = uVar11;
      }
    }
    uVar16 = FUN_1407b5010(uVar16,0x28);
    uStack_a0 = local_c8;
    uStack_b0 = local_68;
    local_a8 = (AstExprInterpString *)lVar24;
    FUN_14079efd0(uVar16,&local_b8,&local_a8);
    local_a8 = this;
    puVar18 = (undefined8 *)FUN_14078e300(local_50 + 0x420,&local_a8);
    *puVar18 = uVar16;
  }
  FUN_1407a2410(param_1 + 0x60,&local_a8);
  if (local_a8._4_1_ == '\x01') {
    if ((int)local_a8 == 0) {
      FUN_14078f3b0(local_50,local_50 + 0xa0,
                    "Malformed interpolated string; did you forget to add a \'}\'?");
    }
  }
  else {
    FUN_14078f3b0(local_50,local_50 + 0xa0,
                  "Malformed interpolated string; did you forget to add a \'`\'?");
  }
LAB_1407987fb:
  local_60 = local_60 + *(longlong *)(local_50 + 0x238);
  if (local_60 != *(longlong *)(local_50 + 0x240)) {
    *(longlong *)(local_50 + 0x240) = local_60;
  }
  local_78 = local_78 + *(longlong *)(local_50 + 0x3d0);
  if (local_78 != *(longlong *)(local_50 + 0x3d8)) {
    *(longlong *)(local_50 + 0x3d8) = local_78;
  }
  local_70 = local_70 + *(longlong *)(local_50 + 0x220);
  if (local_70 != *(longlong *)(local_50 + 0x228)) {
    *(longlong *)(local_50 + 0x228) = local_70;
  }
  local_80 = local_80 + *(longlong *)(local_50 + 0x208);
  if (local_80 != *(longlong *)(local_50 + 0x210)) {
    *(longlong *)(local_50 + 0x210) = local_80;
  }
  return this;
}

