/**
 * Function: invalid_hash_bucket_count
 * Address:  14073c630
 * Signature: undefined invalid_hash_bucket_count(void)
 * Body size: 1520 bytes
 */


longlong * invalid_hash_bucket_count(float *param_1,byte *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar16 = ((ulonglong)param_2[7] ^
           ((ulonglong)param_2[6] ^
           ((ulonglong)param_2[5] ^
           ((ulonglong)param_2[4] ^
           ((ulonglong)param_2[3] ^
           ((ulonglong)param_2[2] ^
           ((ulonglong)param_2[1] ^ ((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3;
  plVar13 = *(longlong **)(param_1 + 2);
  lVar4 = (*(ulonglong *)(param_1 + 0xc) & uVar16) * 0x10;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 6) + 8 + lVar4);
  if (plVar5 != plVar13) {
    plVar13 = plVar5;
    if (*(longlong *)param_2 != plVar5[2]) {
      do {
        if (plVar13 == *(longlong **)(*(longlong *)(param_1 + 6) + lVar4)) goto LAB_14073c707;
        plVar13 = (longlong *)plVar13[1];
      } while (*(longlong *)param_2 != plVar13[2]);
    }
    goto LAB_14073cbe6;
  }
LAB_14073c707:
  if (*(longlong *)(param_1 + 4) == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("unordered_map/set too long");
  }
  plVar5 = (longlong *)FUN_140b65d30(0x58);
  plVar5[2] = *(longlong *)param_2;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  uVar6 = *(longlong *)(param_1 + 4) + 1;
  if ((longlong)uVar6 < 0) {
    fVar18 = (float)uVar6;
    fVar19 = *param_1;
    uVar6 = *(ulonglong *)(param_1 + 0xe);
    if ((longlong)uVar6 < 0) goto LAB_14073c764;
LAB_14073c7b2:
    if (fVar19 < fVar18 / (float)(longlong)uVar6) {
LAB_14073c7c7:
      fVar19 = ceilf(fVar18 / fVar19);
      uVar12 = (longlong)(fVar19 - 9.223372e+18) & (longlong)fVar19 >> 0x3f | (longlong)fVar19;
      uVar14 = 8;
      if (8 < uVar12) {
        uVar14 = uVar12;
      }
      uVar12 = uVar6;
      if (uVar6 < uVar14) {
        uVar12 = uVar6 * 8;
        if (uVar12 < uVar14 || uVar12 - uVar14 == 0) {
          uVar12 = uVar14;
        }
        if (0x1ff < uVar6) {
          uVar12 = uVar14;
        }
      }
      if (0x800000000000000 < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("invalid hash bucket count");
      }
      uVar6 = uVar12 - 1 | 1;
      lVar4 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      bVar10 = (char)lVar4 + 1;
      lVar4 = 1L << (bVar10 & 0x3f);
      plVar9 = *(longlong **)(param_1 + 2);
      plVar13 = *(longlong **)(param_1 + 6);
      plVar8 = *(longlong **)(param_1 + 8);
      uVar22 = (undefined4)((ulonglong)plVar9 >> 0x20);
      if ((ulonglong)((longlong)plVar8 - (longlong)plVar13 >> 3) <
          (ulonglong)(2L << (bVar10 & 0x3f))) {
        lVar17 = 0x10L << (bVar10 & 0x3f);
        if (uVar12 - 1 < 0x80) {
          plVar13 = (longlong *)FUN_140b65d30(lVar17);
        }
        else {
          lVar7 = FUN_140b65d30(lVar17 + 0x27);
          plVar13 = (longlong *)(lVar7 + 0x27U & 0xffffffffffffffe0);
          plVar13[-1] = lVar7;
        }
        lVar7 = *(longlong *)(param_1 + 6);
        uVar6 = *(longlong *)(param_1 + 10) - lVar7;
        if (uVar6 != 0) {
          lVar11 = lVar7;
          if (0xfff < uVar6) {
            lVar11 = *(longlong *)(lVar7 + -8);
            if (0x1f < (ulonglong)((lVar7 + -8) - lVar11)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            uVar6 = uVar6 + 0x27;
          }
          thunk_FUN_140b68ba8(lVar11,uVar6);
        }
        *(longlong **)(param_1 + 6) = plVar13;
        plVar8 = (longlong *)((longlong)plVar13 + lVar17);
        *(longlong **)(param_1 + 8) = plVar8;
        *(longlong **)(param_1 + 10) = plVar8;
        if (0x17 < lVar17 - 8U) {
          uVar14 = (lVar17 - 8U >> 3) + 1;
          uVar6 = uVar14 & 0xfffffffffffffffc;
          auVar20._8_4_ = (int)plVar9;
          auVar20._0_8_ = plVar9;
          auVar20._12_4_ = uVar22;
          uVar12 = 0;
          do {
            *(undefined1 (*) [16])(plVar13 + uVar12) = auVar20;
            *(undefined1 (*) [16])(plVar13 + uVar12 + 2) = auVar20;
            uVar12 = uVar12 + 4;
          } while (uVar6 != uVar12);
          plVar13 = plVar13 + uVar6;
          if (uVar14 == uVar6) goto LAB_14073c9ec;
        }
        do {
          *plVar13 = (longlong)plVar9;
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar8);
      }
      else if (plVar13 != plVar8) {
        uVar6 = ((longlong)plVar8 - (longlong)plVar13) - 8;
        if (0x17 < uVar6) {
          uVar6 = (uVar6 >> 3) + 1;
          uVar14 = uVar6 & 0xfffffffffffffffc;
          auVar21._8_4_ = (int)plVar9;
          auVar21._0_8_ = plVar9;
          auVar21._12_4_ = uVar22;
          uVar12 = 0;
          do {
            *(undefined1 (*) [16])(plVar13 + uVar12) = auVar21;
            *(undefined1 (*) [16])(plVar13 + uVar12 + 2) = auVar21;
            uVar12 = uVar12 + 4;
          } while (uVar14 != uVar12);
          plVar13 = plVar13 + uVar14;
          if (uVar6 == uVar14) goto LAB_14073c9ec;
        }
        do {
          *plVar13 = (longlong)plVar9;
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar8);
      }
LAB_14073c9ec:
      uVar6 = lVar4 - 1;
      *(ulonglong *)(param_1 + 0xc) = uVar6;
      *(longlong *)(param_1 + 0xe) = lVar4;
      plVar13 = *(longlong **)(param_1 + 2);
      plVar8 = (longlong *)*plVar13;
      if ((longlong *)*plVar13 != plVar9) {
        do {
          plVar13 = (longlong *)*plVar8;
          lVar4 = *(longlong *)(param_1 + 6);
          lVar17 = (((ulonglong)*(byte *)((longlong)plVar8 + 0x17) ^
                    ((ulonglong)*(byte *)((longlong)plVar8 + 0x16) ^
                    ((ulonglong)*(byte *)((longlong)plVar8 + 0x15) ^
                    ((ulonglong)*(byte *)((longlong)plVar8 + 0x14) ^
                    ((ulonglong)*(byte *)((longlong)plVar8 + 0x13) ^
                    ((ulonglong)*(byte *)((longlong)plVar8 + 0x12) ^
                    ((ulonglong)*(byte *)((longlong)plVar8 + 0x11) ^
                    ((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
                    0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
                    0x100000001b3) * 0x100000001b3) * 0x100000001b3 & *(ulonglong *)(param_1 + 0xc))
                   * 0x10;
          if (*(longlong **)(lVar4 + lVar17) == plVar9) {
            *(longlong **)(lVar4 + lVar17) = plVar8;
LAB_14073ca14:
            *(longlong **)(lVar4 + 8 + lVar17) = plVar8;
          }
          else {
            plVar15 = *(longlong **)(lVar4 + 8 + lVar17);
            if (plVar8[2] == plVar15[2]) {
              plVar15 = (longlong *)*plVar15;
              if (plVar15 != plVar8) {
                plVar1 = (longlong *)plVar8[1];
                *plVar1 = (longlong)plVar13;
                puVar3 = (undefined8 *)plVar13[1];
                *puVar3 = plVar15;
                puVar2 = (undefined8 *)plVar15[1];
                *puVar2 = plVar8;
                plVar15[1] = (longlong)puVar3;
                plVar13[1] = (longlong)plVar1;
                plVar8[1] = (longlong)puVar2;
              }
              goto LAB_14073ca14;
            }
            do {
              if (*(longlong **)(lVar4 + lVar17) == plVar15) {
                plVar1 = (longlong *)plVar8[1];
                *plVar1 = (longlong)plVar13;
                puVar3 = (undefined8 *)plVar13[1];
                *puVar3 = plVar15;
                puVar2 = (undefined8 *)plVar15[1];
                *puVar2 = plVar8;
                plVar15[1] = (longlong)puVar3;
                plVar13[1] = (longlong)plVar1;
                plVar8[1] = (longlong)puVar2;
                *(longlong **)(lVar4 + lVar17) = plVar8;
                goto LAB_14073ca19;
              }
              plVar15 = (longlong *)plVar15[1];
            } while (plVar8[2] != plVar15[2]);
            lVar4 = *plVar15;
            plVar15 = (longlong *)plVar8[1];
            *plVar15 = (longlong)plVar13;
            plVar1 = (longlong *)plVar13[1];
            *plVar1 = lVar4;
            puVar3 = *(undefined8 **)(lVar4 + 8);
            *puVar3 = plVar8;
            *(longlong **)(lVar4 + 8) = plVar1;
            plVar13[1] = (longlong)plVar15;
            plVar8[1] = (longlong)puVar3;
          }
LAB_14073ca19:
          plVar8 = plVar13;
        } while (plVar13 != plVar9);
        plVar13 = *(longlong **)(param_1 + 2);
        uVar6 = *(ulonglong *)(param_1 + 0xc);
      }
      lVar4 = (uVar6 & uVar16) * 0x10;
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 6) + 8 + lVar4);
      if (plVar9 != plVar13) {
        if (plVar5[2] != plVar9[2]) {
          do {
            plVar13 = plVar9;
            if (plVar9 == *(longlong **)(*(longlong *)(param_1 + 6) + lVar4)) goto LAB_14073cb97;
            plVar9 = (longlong *)plVar9[1];
          } while (plVar5[2] != plVar9[2]);
        }
        plVar13 = (longlong *)*plVar9;
      }
    }
  }
  else {
    fVar18 = (float)(longlong)uVar6;
    fVar19 = *param_1;
    uVar6 = *(ulonglong *)(param_1 + 0xe);
    if (-1 < (longlong)uVar6) goto LAB_14073c7b2;
LAB_14073c764:
    if (fVar19 < fVar18 / (float)uVar6) goto LAB_14073c7c7;
  }
LAB_14073cb97:
  puVar3 = (undefined8 *)plVar13[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *plVar5 = (longlong)plVar13;
  plVar5[1] = (longlong)puVar3;
  *puVar3 = plVar5;
  plVar13[1] = (longlong)plVar5;
  lVar4 = *(longlong *)(param_1 + 6);
  lVar17 = (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10;
  if (*(longlong **)(lVar4 + lVar17) == *(longlong **)(param_1 + 2)) {
    *(longlong **)(lVar4 + lVar17) = plVar5;
    *(longlong **)(lVar4 + 8 + lVar17) = plVar5;
    plVar13 = plVar5;
  }
  else if (*(longlong **)(lVar4 + lVar17) == plVar13) {
    *(longlong **)(lVar4 + lVar17) = plVar5;
    plVar13 = plVar5;
  }
  else {
    plVar13 = plVar5;
    if (*(undefined8 **)(lVar4 + 8 + lVar17) == puVar3) {
      *(longlong **)(lVar4 + 8 + lVar17) = plVar5;
    }
  }
LAB_14073cbe6:
  return plVar13 + 3;
}

