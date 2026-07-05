/**
 * Function: unexpected_overflow_in_ima_adpcm_decoder
 * Address:  1401676b0
 * Signature: undefined unexpected_overflow_in_ima_adpcm_decoder(void)
 * Body size: 1832 bytes
 */


undefined8
unexpected_overflow_in_ima_adpcm_decoder(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  int iVar9;
  char cVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined2 *puVar33;
  undefined2 *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  byte bVar37;
  ulonglong uVar38;
  uint uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  ulonglong local_120;
  
  if ((*(ulonglong *)(param_1 + 0x18) == (ulonglong)*(uint *)(param_1 + 4)) ||
     (cVar10 = truncated_ima_adpcm_block(param_1), cVar10 != '\0')) {
    uVar40 = *(ulonglong *)(param_1 + 0x58);
    if (uVar40 == 0) {
      *param_2 = 0;
      *param_3 = 0;
      return 1;
    }
    uVar1 = *(ushort *)(param_1 + 0x24);
    uVar21 = (ulonglong)uVar1;
    uVar41 = (ulonglong)((uint)uVar1 + (uint)uVar1);
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar40;
    auVar8 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff);
    if ((SUB168(auVar8 / auVar43,0) <= uVar41) ||
       (local_120 = uVar41 * uVar40, local_120 >> 0x20 != 0)) {
      uVar11 = FUN_1400fbed0("WAVE file too big");
      return uVar11;
    }
    uVar2 = *(ushort *)(param_1 + 0x30);
    uVar4 = *(uint *)(param_1 + 0x38);
    lVar5 = *(longlong *)(param_1 + 0x10);
    uVar6 = *(ulonglong *)(param_1 + 0x18);
    lVar12 = FUN_140160c40(local_120,SUB168(auVar8 % auVar43,0));
    if (lVar12 != 0) {
      uVar13 = FUN_140160c70(uVar21,1);
      if (uVar13 != 0) {
        uVar30 = (ulonglong)uVar1 * 4;
        if (uVar30 <= uVar6 && 0 < (longlong)uVar40) {
          uVar14 = (ulonglong)uVar4 - 1;
          uVar36 = 4;
          if ((uVar1 & 3) != 0) {
            uVar36 = (ulonglong)(uVar1 & 3);
          }
          lVar15 = uVar21 - uVar36;
          lVar29 = 0;
          uVar36 = 0;
          uVar35 = uVar6;
          do {
            if (uVar2 <= uVar35) {
              uVar35 = (ulonglong)uVar2;
            }
            if ((local_120 >> 1) - uVar36 < uVar40 * uVar21) {
              FUN_140160cf0(lVar12);
              FUN_140160cf0(uVar13);
              uVar11 = FUN_1400fbed0("Unexpected overflow in IMA ADPCM decoder");
              return uVar11;
            }
            uVar16 = lVar5 + lVar29;
            if (uVar21 != 0) {
              if (uVar1 < 9) {
                lVar17 = 0;
                lVar19 = lVar17;
                if ((uVar1 & 1) != 0) {
LAB_1401678f9:
                  *(undefined2 *)(lVar12 + uVar36 * 2) = *(undefined2 *)(uVar16 + lVar17 * 4);
                  uVar36 = uVar36 + 1;
                  *(undefined1 *)(uVar13 + lVar17) = *(undefined1 *)(uVar16 + 2 + lVar17 * 4);
                  lVar19 = lVar17 + 1;
                }
              }
              else {
                uVar38 = lVar12 + uVar36 * 2;
                uVar32 = lVar12 + uVar41 + uVar36 * 2;
                uVar27 = lVar5 + uVar30 + -1 + lVar29;
                if (((uVar38 < uVar13 + uVar21 && uVar13 < uVar32) ||
                    (uVar38 < uVar27 && uVar16 < uVar32)) ||
                   (uVar13 < uVar27 && uVar16 < uVar13 + uVar21)) {
                  lVar17 = 0;
                }
                else {
                  uVar36 = uVar36 + lVar15;
                  lVar19 = 0;
                  do {
                    auVar43 = *(undefined1 (*) [16])(uVar16 + lVar19 * 4);
                    auVar43 = pshuflw(auVar43,auVar43,0xe8);
                    auVar43 = pshufhw(auVar43,auVar43,0xe8);
                    *(ulonglong *)(uVar38 + lVar19 * 2) = CONCAT44(auVar43._8_4_,auVar43._0_4_);
                    *(uint *)(uVar13 + lVar19) =
                         CONCAT13(*(undefined1 *)(uVar16 + 0xe + lVar19 * 4),
                                  CONCAT12(*(undefined1 *)(uVar16 + 10 + lVar19 * 4),
                                           CONCAT11(*(undefined1 *)(uVar16 + 6 + lVar19 * 4),
                                                    *(undefined1 *)(uVar16 + 2 + lVar19 * 4))));
                    lVar19 = lVar19 + 4;
                    lVar17 = lVar15;
                  } while (lVar15 != lVar19);
                }
                lVar19 = lVar17;
                if (((uint)uVar1 - (int)lVar17 & 1) != 0) goto LAB_1401678f9;
              }
              if (lVar17 != uVar21 - 1) {
                lVar17 = lVar12 + 2 + uVar36 * 2;
                lVar22 = uVar13 + 1 + lVar19;
                lVar26 = lVar29 + lVar19 * 4 + lVar5 + 6;
                lVar31 = 0;
                do {
                  *(undefined2 *)(lVar17 + -2 + lVar31 * 2) =
                       *(undefined2 *)(lVar26 + -6 + lVar31 * 4);
                  *(undefined1 *)(lVar22 + -1 + lVar31) = *(undefined1 *)(lVar26 + -4 + lVar31 * 4);
                  *(undefined2 *)(lVar17 + lVar31 * 2) = *(undefined2 *)(lVar26 + -2 + lVar31 * 4);
                  *(undefined1 *)(lVar22 + lVar31) = *(undefined1 *)(lVar26 + lVar31 * 4);
                  lVar31 = lVar31 + 2;
                } while (uVar21 - lVar19 != lVar31);
                uVar36 = uVar36 + lVar31;
              }
            }
            uVar40 = uVar40 - 1;
            uVar32 = uVar35 + (ulonglong)uVar1 * -4;
            uVar38 = uVar40;
            if ((longlong)uVar14 < (longlong)uVar40) {
              uVar38 = uVar14;
            }
            lVar17 = uVar38 + 0xe;
            if (-1 < (longlong)(uVar38 + 7)) {
              lVar17 = uVar38 + 7;
            }
            uVar27 = (lVar17 >> 3) * uVar30;
            if (uVar32 < uVar27) {
              uVar18 = uVar32;
              if (uVar32 >> 0x20 == 0) {
                uVar18 = uVar32 & 0xffffffff;
              }
              uVar38 = (ulonglong)((int)(uVar18 % uVar30) * 2 & 6);
              if (uVar18 % uVar30 <= uVar30 - 4) {
                uVar38 = 0;
              }
              uVar38 = uVar38 + uVar18 / uVar30;
            }
            if (0 < (longlong)uVar38) {
              uVar18 = uVar30;
              if (uVar21 == 0) {
                do {
                  uVar16 = 8;
                  if (uVar38 < 8) {
                    uVar16 = uVar38;
                  }
                  uVar40 = uVar40 - uVar16;
                  uVar18 = uVar38 - uVar16;
                  bVar7 = (longlong)uVar16 <= (longlong)uVar38;
                  uVar38 = uVar18;
                } while (uVar18 != 0 && bVar7);
              }
              else {
                do {
                  uVar23 = 8;
                  if (uVar38 < 8) {
                    uVar23 = uVar38;
                  }
                  puVar33 = (undefined2 *)(lVar12 + uVar36 * 2);
                  uVar28 = 0;
                  do {
                    uVar25 = (uint)*(ushort *)(lVar12 + ((uVar28 + uVar36) - uVar21) * 2);
                    bVar42 = 0;
                    uVar20 = 0;
                    puVar34 = puVar33;
                    do {
                      if ((uVar20 & 1) == 0) {
                        bVar42 = *(byte *)(uVar16 + uVar18);
                        uVar18 = uVar18 + 1;
                      }
                      else {
                        bVar42 = bVar42 >> 4;
                      }
                      bVar37 = *(byte *)(uVar13 + uVar28);
                      if ((char)*(byte *)(uVar13 + uVar28) < '\x01') {
                        bVar37 = 0;
                      }
                      if ('W' < (char)bVar37) {
                        bVar37 = 0x58;
                      }
                      uVar39 = (uint)bVar42;
                      uVar3 = *(ushort *)(&DAT_140decd50 + (ulonglong)bVar37 * 2);
                      iVar24 = ((uint)(uVar3 >> 2) & -(uVar39 & 1)) +
                               ((uint)(uVar3 >> 1) & (int)(uVar39 << 0x1e) >> 0x1f) +
                               ((int)(uVar39 << 0x1d) >> 0x1f & (uint)uVar3) + (uint)(uVar3 >> 3);
                      iVar9 = -iVar24;
                      if ((byte)(uVar39 & 0xf) < 8) {
                        iVar9 = iVar24;
                      }
                      *(byte *)(uVar13 + uVar28) = bVar37 + (&DAT_140decd40)[uVar39 & 0xf];
                      uVar25 = (short)uVar25 + iVar9;
                      if ((int)uVar25 < -0x7fff) {
                        uVar25 = 0xffff8000;
                      }
                      if (0x7ffe < (int)uVar25) {
                        uVar25 = 0x7fff;
                      }
                      *puVar34 = (short)uVar25;
                      uVar20 = uVar20 + 1;
                      puVar34 = (undefined2 *)((longlong)puVar34 + uVar41);
                    } while (uVar23 != uVar20);
                    uVar28 = uVar28 + 1;
                    puVar33 = puVar33 + 1;
                  } while (uVar28 != uVar21);
                  uVar36 = uVar36 + uVar23 * uVar21;
                  uVar40 = uVar40 - uVar23;
                  uVar28 = uVar38 - uVar23;
                  bVar7 = (longlong)uVar23 <= (longlong)uVar38;
                  uVar38 = uVar28;
                } while (uVar28 != 0 && bVar7);
              }
            }
            if (uVar32 < uVar27) {
              if (*(int *)(param_1 + 0x6c) - 1U < 2) {
                FUN_140160cf0(lVar12);
                FUN_140160cf0(uVar13);
                uVar11 = FUN_1400fbed0("Truncated data chunk");
                return uVar11;
              }
              if (*(int *)(param_1 + 0x6c) != 3) {
                uVar21 = uVar4 * uVar21;
                if ((uVar36 | uVar21) >> 0x20 == 0) {
                  uVar21 = (uVar36 & 0xffffffff) % (uVar21 & 0xffffffff);
                }
                else {
                  uVar21 = uVar36 % uVar21;
                }
                uVar36 = uVar36 - uVar21;
              }
              local_120 = uVar36 * 2;
              break;
            }
            if ((longlong)uVar40 < 1) break;
            lVar29 = lVar29 + uVar35;
            uVar35 = uVar6 - lVar29;
          } while (uVar30 <= uVar35);
        }
        *param_2 = lVar12;
        *param_3 = (int)local_120;
        FUN_140160cf0(uVar13);
        return 1;
      }
      FUN_140160cf0(lVar12);
    }
  }
  return 0;
}

