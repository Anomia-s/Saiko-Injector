/**
 * Function: src_does_not_have_a_palette_set
 * Address:  1401572f0
 * Signature: undefined src_does_not_have_a_palette_set(void)
 * Body size: 1714 bytes
 */


undefined8 src_does_not_have_a_palette_set(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [12];
  unkbyte10 Var16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  uint *puVar22;
  uint *puVar23;
  undefined8 uVar24;
  uint uVar25;
  longlong lVar26;
  byte bVar27;
  byte bVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  byte bVar32;
  uint uVar33;
  byte bVar34;
  uint uVar35;
  undefined1 uVar36;
  short sVar38;
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  
  if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
    FUN_14040f1e0(param_1,1);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 (*) [16])(param_1 + 0xe0) = (undefined1  [16])0x0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_140160cf0();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1403d81d0();
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  puVar22 = *(uint **)(param_1 + 0x38);
  piVar2 = *(int **)(param_1 + 0x48);
  puVar3 = *(uint **)(param_2 + 0x38);
  piVar4 = *(int **)(param_2 + 0x48);
  uVar17 = *puVar22;
  if (((uVar17 != 0 && (uVar17 & 0xf0000000) != 0x10000000) ||
      (uVar17 = uVar17 >> 0x18 & 0xf, 0xc < uVar17)) || ((0x100eU >> uVar17 & 1) == 0)) {
    uVar17 = *puVar3;
    if (((uVar17 == 0 || (uVar17 & 0xf0000000) == 0x10000000) &&
        (uVar17 = uVar17 >> 0x18 & 0xf, uVar17 < 0xd)) && ((0x100eU >> uVar17 & 1) != 0)) {
      uVar24 = num_buckets_must_be_a_power_of_two
                         (0,0x20,Luau::AstAttr::vfunction5,&LAB_140100270,0,0,0);
      *(undefined8 *)(param_1 + 0xf8) = uVar24;
    }
    else if (puVar22 == puVar3) {
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
    goto LAB_140157990;
  }
  uVar17 = *puVar3;
  if (uVar17 == 0 || (uVar17 & 0xf0000000) == 0x10000000) {
    uVar18 = uVar17 >> 0x18 & 0xf;
    if ((uVar18 < 0xd) && ((0x100eU >> uVar18 & 1) != 0)) {
      if (piVar4 == (int *)0x0 || piVar2 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x78) = 1;
      }
      else if ((*piVar4 < *piVar2) ||
              ((piVar2 != piVar4 &&
               (iVar19 = FUN_1400fc560(*(undefined8 *)(piVar2 + 2),*(undefined8 *)(piVar4 + 2),
                                       (longlong)*piVar2 << 2), iVar19 != 0)))) {
        *(undefined4 *)(param_1 + 0x78) = 0;
        lVar21 = FUN_140160c70(0x100,1);
        if (lVar21 == 0) {
          *(undefined8 *)(param_1 + 0xf0) = 0;
          if (*(int *)(param_1 + 0x78) == 0) {
            return 0;
          }
        }
        else {
          if (0 < *piVar2) {
            lVar26 = 0;
            do {
              if ((longlong)*piVar4 < 1) {
                uVar36 = 0;
              }
              else {
                uVar1 = *(undefined4 *)(*(longlong *)(piVar2 + 2) + lVar26 * 4);
                uVar36 = (undefined1)((uint)uVar1 >> 8);
                uVar11 = (ulonglong)CONCAT12(uVar36,(short)uVar1) & 0xffffffffffff00ff;
                auVar5._8_4_ = 0;
                auVar5._0_8_ = uVar11;
                auVar5[0xc] = (char)((uint)uVar1 >> 0x18);
                auVar6[8] = (char)((uint)uVar1 >> 0x10);
                auVar6._0_8_ = uVar11;
                auVar6[9] = 0;
                auVar6._10_3_ = auVar5._10_3_;
                auVar13._5_8_ = 0;
                auVar13._0_5_ = auVar6._8_5_;
                auVar7[4] = uVar36;
                auVar7._0_4_ = (uint)uVar11;
                auVar7[5] = 0;
                auVar7._6_7_ = SUB137(auVar13 << 0x40,6);
                uVar17 = 0xffffffff;
                uVar30 = 0;
                uVar31 = 0;
                do {
                  uVar1 = *(undefined4 *)(*(longlong *)(piVar4 + 2) + uVar30 * 4);
                  uVar36 = (undefined1)((uint)uVar1 >> 8);
                  uVar12 = (ulonglong)CONCAT12(uVar36,(short)uVar1) & 0xffffffffffff00ff;
                  auVar8._8_4_ = 0;
                  auVar8._0_8_ = uVar12;
                  auVar8[0xc] = (char)((uint)uVar1 >> 0x18);
                  auVar9[8] = (char)((uint)uVar1 >> 0x10);
                  auVar9._0_8_ = uVar12;
                  auVar9[9] = 0;
                  auVar9._10_3_ = auVar8._10_3_;
                  auVar14._5_8_ = 0;
                  auVar14._0_5_ = auVar9._8_5_;
                  auVar10[4] = uVar36;
                  auVar10._0_4_ = (uint)uVar12;
                  auVar10[5] = 0;
                  auVar10._6_7_ = SUB137(auVar14 << 0x40,6);
                  auVar37._0_4_ = ((uint)uVar12 & 0xffff) - ((uint)uVar11 & 0xffff);
                  auVar37._4_4_ = auVar10._4_4_ - auVar7._4_4_;
                  auVar37._8_4_ = auVar9._8_4_ - auVar6._8_4_;
                  auVar37._12_4_ =
                       (uint)(uint3)(auVar8._10_3_ >> 0x10) - (uint)(uint3)(auVar5._10_3_ >> 0x10);
                  auVar37 = packssdw(auVar37,auVar37);
                  auVar39 = pmulhw(auVar37,auVar37);
                  sVar38 = auVar37._6_2_ * auVar37._6_2_;
                  iVar19 = CONCAT22(auVar39._6_2_,sVar38);
                  Var16 = CONCAT64(CONCAT42(iVar19,auVar39._4_2_),
                                   CONCAT22(auVar37._4_2_ * auVar37._4_2_,sVar38));
                  auVar15._4_8_ = (longlong)((unkuint10)Var16 >> 0x10);
                  auVar15._2_2_ = auVar39._2_2_;
                  auVar15._0_2_ = auVar37._2_2_ * auVar37._2_2_;
                  uVar18 = auVar15._0_4_ + iVar19 +
                           CONCAT22(auVar39._0_2_,auVar37._0_2_ * auVar37._0_2_) +
                           (int)((unkuint10)Var16 >> 0x10);
                  if (uVar18 < uVar17) {
                    if (uVar18 == 0) {
                      uVar36 = (undefined1)uVar30;
                      break;
                    }
                    uVar31 = uVar30 & 0xffffffff;
                    uVar17 = uVar18;
                  }
                  uVar36 = (undefined1)uVar31;
                  uVar30 = uVar30 + 1;
                } while ((longlong)*piVar4 != uVar30);
              }
              *(undefined1 *)(lVar21 + lVar26) = uVar36;
              lVar26 = lVar26 + 1;
            } while (lVar26 < *piVar2);
          }
          *(longlong *)(param_1 + 0xf0) = lVar21;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 1;
        *(undefined8 *)(param_1 + 0xf0) = 0;
      }
      if ((char)puVar22[1] != (char)puVar3[1]) {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      goto LAB_140157990;
    }
    if (piVar2 == (int *)0x0) goto LAB_140157912;
    bVar32 = *(byte *)(param_1 + 0x108);
    bVar34 = *(byte *)(param_1 + 0x109);
    bVar27 = *(byte *)(param_1 + 0x10a);
    bVar28 = *(byte *)(param_1 + 0x10b);
    uVar18 = 4;
    if ((uVar17 & 0xff) != 3) {
      uVar18 = uVar17 & 0xff;
    }
  }
  else {
    if (piVar2 == (int *)0x0) {
LAB_140157912:
      FUN_1400fbed0("src does not have a palette set");
      goto LAB_14015791e;
    }
    bVar28 = *(byte *)(param_1 + 0x10b);
    bVar27 = *(byte *)(param_1 + 0x10a);
    bVar32 = *(byte *)(param_1 + 0x108);
    bVar34 = *(byte *)(param_1 + 0x109);
    uVar18 = 2;
    if (((uVar17 != 0x32595559) && (uVar17 != 0x55595659)) && (uVar17 != 0x59565955)) {
      uVar18 = (uVar17 == 0x30313050) + 1;
    }
  }
  puVar22 = (uint *)FUN_140160c70(0x100,(ulonglong)uVar18);
  if (puVar22 != (uint *)0x0) {
    if (0 < *piVar2) {
      lVar21 = 0;
      puVar23 = puVar22;
      do {
        lVar26 = *(longlong *)(piVar2 + 2);
        uVar25 = ((uint)*(byte *)(lVar26 + lVar21 * 4) * (uint)bVar32) / 0xff;
        uVar35 = ((uint)*(byte *)(lVar26 + 1 + lVar21 * 4) * (uint)bVar34) / 0xff;
        uVar29 = ((uint)*(byte *)(lVar26 + 2 + lVar21 * 4) * (uint)bVar27) / 0xff;
        uVar33 = ((uint)*(byte *)(lVar26 + 3 + lVar21 * 4) * (uint)bVar28) / 0xff;
        uVar17 = *puVar3;
        if ((uVar17 & 0xf0000000) == 0x10000000 || uVar17 == 0) {
          switch(uVar17 & 0xff) {
          case 1:
            goto switchD_1401577bf_caseD_1;
          case 2:
            goto switchD_1401577bf_caseD_2;
          case 3:
            *(byte *)((longlong)puVar23 + (ulonglong)(byte)((byte)puVar3[7] >> 3)) = (byte)uVar25;
            *(byte *)((longlong)puVar23 + (ulonglong)(*(byte *)((longlong)puVar3 + 0x1d) >> 3)) =
                 (byte)uVar35;
            *(byte *)((longlong)puVar23 + (ulonglong)(*(byte *)((longlong)puVar3 + 0x1e) >> 3)) =
                 (byte)uVar29;
            break;
          case 4:
            *puVar23 = (uVar33 >> (8U - *(char *)((longlong)puVar3 + 0x1b) & 0x1f)) <<
                       (*(byte *)((longlong)puVar3 + 0x1f) & 0x1f) |
                       (uVar29 >> (8U - *(char *)((longlong)puVar3 + 0x1a) & 0x1f)) <<
                       (*(byte *)((longlong)puVar3 + 0x1e) & 0x1f) |
                       (uVar35 >> (8U - *(char *)((longlong)puVar3 + 0x19) & 0x1f)) <<
                       (*(byte *)((longlong)puVar3 + 0x1d) & 0x1f) |
                       (uVar25 >> (8U - (char)puVar3[6] & 0x1f)) << ((byte)puVar3[7] & 0x1f);
          }
        }
        else {
          if ((int)uVar17 < 0x55595659) {
            if ((uVar17 == 0x30313050) || (uVar17 == 0x32595559)) {
switchD_1401577bf_caseD_2:
              *(ushort *)puVar23 =
                   (ushort)((uVar33 >> (8U - *(char *)((longlong)puVar3 + 0x1b) & 0x1f)) <<
                           (*(byte *)((longlong)puVar3 + 0x1f) & 0x1f)) |
                   (ushort)((uVar29 >> (8U - *(char *)((longlong)puVar3 + 0x1a) & 0x1f)) <<
                           (*(byte *)((longlong)puVar3 + 0x1e) & 0x1f)) |
                   (ushort)((uVar35 >> (8U - *(char *)((longlong)puVar3 + 0x19) & 0x1f)) <<
                           (*(byte *)((longlong)puVar3 + 0x1d) & 0x1f)) |
                   (ushort)((uVar25 >> (8U - (char)puVar3[6] & 0x1f)) << ((byte)puVar3[7] & 0x1f));
              goto switchD_1401577bf_default;
            }
          }
          else if ((uVar17 == 0x55595659) || (uVar17 == 0x59565955)) goto switchD_1401577bf_caseD_2;
switchD_1401577bf_caseD_1:
          *(byte *)puVar23 =
               (byte)((uVar33 >> (8U - *(char *)((longlong)puVar3 + 0x1b) & 0x1f)) <<
                     (*(byte *)((longlong)puVar3 + 0x1f) & 0x1f)) |
               (byte)((uVar29 >> (8U - *(char *)((longlong)puVar3 + 0x1a) & 0x1f)) <<
                     (*(byte *)((longlong)puVar3 + 0x1e) & 0x1f)) |
               (byte)((uVar35 >> (8U - *(char *)((longlong)puVar3 + 0x19) & 0x1f)) <<
                     (*(byte *)((longlong)puVar3 + 0x1d) & 0x1f)) |
               (byte)((uVar25 >> (8U - (char)puVar3[6] & 0x1f)) << ((byte)puVar3[7] & 0x1f));
        }
switchD_1401577bf_default:
        lVar21 = lVar21 + 1;
        puVar23 = (uint *)((longlong)puVar23 + (ulonglong)uVar18);
      } while (lVar21 < *piVar2);
    }
    *(uint **)(param_1 + 0xf0) = puVar22;
LAB_140157990:
    iVar20 = 0;
    iVar19 = 0;
    if (piVar4 != (int *)0x0) {
      iVar19 = piVar4[4];
    }
    *(int *)(param_1 + 0x110) = iVar19;
    if (piVar2 != (int *)0x0) {
      iVar20 = piVar2[4];
    }
    *(int *)(param_1 + 0x114) = iVar20;
    uVar24 = blit_combination_not_supported(param_1,param_2);
    return uVar24;
  }
LAB_14015791e:
  *(undefined8 *)(param_1 + 0xf0) = 0;
  return 0;
}

