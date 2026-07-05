/**
 * Function: line_too_long_tried_to_draw_d_pixels_max_d
 * Address:  14011fda0
 * Signature: undefined line_too_long_tried_to_draw_d_pixels_max_d(void)
 * Body size: 2150 bytes
 */


ulonglong line_too_long_tried_to_draw_d_pixels_max_d(longlong param_1,float *param_2,int param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  float *pfVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  float *pfVar21;
  bool bVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int iVar32;
  ulonglong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  undefined8 unaff_R12;
  ulonglong uVar38;
  int iVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_168 [32];
  int *local_148;
  byte local_132;
  byte local_131;
  int local_130;
  int local_12c;
  longlong local_128;
  uint local_120;
  uint local_11c;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  int iStack_e0;
  int iStack_dc;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_1414ef3c0 ^ (ulonglong)auStack_168;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 100);
  fVar44 = (float)uVar2;
  fVar45 = (float)((ulonglong)uVar2 >> 0x20);
  uVar19 = (ulonglong)(param_3 - 1);
  lVar15 = FUN_140160c40();
  uVar33 = 0;
  if (lVar15 == 0) {
    uVar38 = 0;
  }
  else {
    uVar31 = (ulonglong)(param_3 - 2);
    uVar38 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    bVar22 = false;
    uVar27 = 0;
    uVar24 = 0;
    local_128 = param_1;
    local_108 = uVar19;
    local_100 = uVar31;
    local_f8 = lVar15;
    do {
      fVar40 = param_2[uVar24 * 2];
      fVar41 = param_2[uVar24 * 2 + 1];
      uVar30 = uVar24 + 1;
      fVar42 = param_2[uVar24 * 2 + 2];
      fVar43 = param_2[uVar24 * 2 + 3];
      if (uVar24 == uVar31) {
        if (bVar22) {
          if ((fVar42 == *param_2) && (!NAN(fVar42) && !NAN(*param_2))) {
            if ((fVar43 == param_2[1]) && (!NAN(fVar43) && !NAN(param_2[1]))) goto LAB_14011fef0;
          }
        }
        uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
LAB_14011fef0:
        iVar32 = (int)uVar33;
        if ((fVar40 != fVar42) || (NAN(fVar40) || NAN(fVar42))) {
          if ((fVar41 == fVar43) && (!NAN(fVar41) && !NAN(fVar43))) {
            fVar41 = fVar40;
            if (fVar42 <= fVar40) {
              fVar41 = fVar42;
            }
            if (fVar40 <= fVar42) {
              fVar40 = fVar42;
            }
            uVar33 = (ulonglong)(iVar32 + 1);
            lVar16 = (longlong)iVar32 * 0x10;
            *(float *)(lVar15 + lVar16) = fVar44 * fVar41;
            *(ulonglong *)(lVar15 + 4 + lVar16) =
                 CONCAT44(((float)(int)(char)uVar27 + (fVar40 - fVar41)) * fVar44,
                          param_2[uVar24 * 2 + 1] * fVar45);
            *(float *)(lVar15 + 0xc + lVar16) = fVar45;
            if ((uVar27 & 1) == 0) {
              if (param_2[uVar30 * 2] <= param_2[uVar24 * 2] &&
                  param_2[uVar24 * 2] != param_2[uVar30 * 2]) {
                *(float *)(lVar16 + lVar15) = fVar44 * fVar41 + fVar44;
              }
              goto LAB_14011ffe6;
            }
            goto LAB_14011fe80;
          }
          local_11c = (uint)uVar27;
          local_f0 = uVar33;
          fVar40 = (float)roundf();
          fVar41 = (float)roundf(param_2[uVar30 * 2]);
          fVar42 = (float)roundf(param_2[uVar24 * 2 + 1]);
          fVar43 = (float)roundf(param_2[uVar24 * 2]);
          local_d0 = (int)fVar43;
          piVar3 = *(int **)(param_1 + 0x150);
          iVar32 = piVar3[1];
          if (piVar3[1] < *piVar3) {
            iVar32 = *piVar3;
          }
          iStack_e0 = piVar3[8];
          iStack_dc = piVar3[9];
          local_e8 = 0;
          local_148 = &local_c4;
          local_cc = (int)fVar42;
          local_c8 = (int)fVar41;
          local_c4 = (int)fVar40;
          cVar11 = potential_rect_math_overflow(&local_e8,&local_d0,&local_cc,&local_c8);
          bVar12 = 1;
          if (cVar11 != '\0') {
            iVar13 = FUN_14016e4c0(local_c8 - local_d0);
            iVar14 = FUN_14016e4c0(local_c4 - local_cc);
            iVar29 = local_cc;
            iVar37 = local_d0;
            local_130 = iVar13 - iVar14;
            bVar22 = iVar14 <= iVar13;
            if (bVar22) {
              local_12c = iVar14 * 2;
              iVar39 = local_12c - iVar13;
              local_130 = iVar14 - iVar13;
            }
            else {
              local_12c = iVar13 * 2;
              iVar39 = local_12c - iVar14;
              iVar13 = iVar14;
            }
            uVar4 = -(uint)bVar22;
            if (local_d0 <= local_c8) {
              uVar4 = (uint)bVar22;
            }
            uVar5 = -(uint)!bVar22;
            if (local_cc <= local_c4) {
              uVar5 = (uint)!bVar22;
            }
            uVar25 = (local_11c & 0xff) + iVar13;
            local_118 = uVar38;
            if (iVar32 * 4 < (int)uVar25) {
              bVar12 = FUN_1400fbed0("Line too long (tried to draw %d pixels, max %d)",uVar25,
                                     iVar32 * 4);
              uVar38 = local_118;
            }
            else {
              local_132 = local_cc <= local_c4;
              local_131 = local_d0 <= local_c8;
              local_120 = uVar25;
              pfVar17 = (float *)FUN_140160c40((longlong)(int)uVar25 << 3);
              uVar38 = local_118;
              uVar25 = local_120;
              lVar15 = local_128;
              if (pfVar17 == (float *)0x0) {
                bVar12 = 0;
              }
              else {
                uVar33 = (ulonglong)local_120;
                if (0 < (int)local_120) {
                  if (local_120 == 1) {
                    uVar19 = 0;
                  }
                  else {
                    local_130 = local_130 * 2;
                    uVar23 = (uint)local_131 * 2 - 1;
                    uVar26 = (uint)local_132 * 2 - 1;
                    uVar19 = 0;
                    do {
                      pfVar17[uVar19 * 2] = (float)iVar37;
                      pfVar17[uVar19 * 2 + 1] = (float)iVar29;
                      iVar32 = local_12c;
                      uVar35 = uVar5;
                      uVar34 = uVar4;
                      if (-1 < iVar39) {
                        iVar32 = local_130;
                        uVar35 = uVar26;
                        uVar34 = uVar23;
                      }
                      pfVar17[uVar19 * 2 + 2] = (float)(int)(uVar34 + iVar37);
                      pfVar17[uVar19 * 2 + 3] = (float)(int)(uVar35 + iVar29);
                      uVar28 = uVar5;
                      uVar36 = uVar4;
                      iVar13 = local_12c;
                      if (-1 < iVar32 + iVar39) {
                        uVar28 = uVar26;
                        uVar36 = uVar23;
                        iVar13 = local_130;
                      }
                      iVar39 = iVar13 + iVar32 + iVar39;
                      iVar29 = uVar28 + uVar35 + iVar29;
                      iVar37 = uVar36 + uVar34 + iVar37;
                      uVar19 = uVar19 + 2;
                    } while ((local_120 & 0x7ffffffe) != uVar19);
                  }
                  local_110 = uVar33;
                  if ((local_120 & 1) != 0) {
                    pfVar17[uVar19 * 2] = (float)iVar37;
                    pfVar17[uVar19 * 2 + 1] = (float)iVar29;
                  }
                }
                fVar40 = *(float *)(*(longlong *)(local_128 + 0x150) + 100);
                if ((((fVar40 != 1.0) || (NAN(fVar40))) ||
                    (fVar40 = *(float *)(*(longlong *)(local_128 + 0x150) + 0x68), fVar40 != 1.0))
                   || (NAN(fVar40))) {
                  if ((int)local_120 < 1) {
                    bVar12 = 1;
                  }
                  else {
                    pfVar18 = (float *)FUN_140160c40(uVar33 * 0x10);
                    if (pfVar18 == (float *)0x0) goto LAB_1401203b6;
                    uVar2 = *(undefined8 *)(*(longlong *)(local_128 + 0x150) + 100);
                    fVar40 = (float)uVar2;
                    fVar41 = (float)((ulonglong)uVar2 >> 0x20);
                    if (uVar25 < 4) {
                      uVar19 = 0;
LAB_140120475:
                      uVar24 = uVar19;
                      if ((uVar25 & 1) != 0) {
                        pfVar18[uVar19 * 4] = pfVar17[uVar19 * 2] * fVar40;
                        pfVar18[uVar19 * 4 + 1] = fVar41 * pfVar17[uVar19 * 2 + 1];
                        *(undefined8 *)(pfVar18 + uVar19 * 4 + 2) = uVar2;
                        uVar24 = uVar19 | 1;
                      }
                      if (uVar19 != uVar33 - 1) {
                        pfVar21 = pfVar18 + uVar24 * 4 + 6;
                        do {
                          pfVar21[-6] = pfVar17[uVar24 * 2] * fVar40;
                          pfVar21[-5] = pfVar17[uVar24 * 2 + 1] * fVar41;
                          *(undefined8 *)(pfVar21 + -4) = uVar2;
                          pfVar21[-2] = pfVar17[uVar24 * 2 + 2] * fVar40;
                          pfVar21[-1] = pfVar17[uVar24 * 2 + 3] * fVar41;
                          *(undefined8 *)pfVar21 = uVar2;
                          uVar24 = uVar24 + 2;
                          pfVar21 = pfVar21 + 8;
                        } while (uVar33 != uVar24);
                      }
                    }
                    else {
                      if (pfVar18 < pfVar17 + uVar33 * 2 && pfVar17 < pfVar18 + uVar33 * 4) {
                        uVar19 = 0;
                        goto LAB_140120475;
                      }
                      uVar19 = (ulonglong)(uVar25 & 0x7ffffffc);
                      uVar24 = 0;
                      pfVar21 = pfVar18;
                      do {
                        pfVar1 = pfVar17 + uVar24 * 2;
                        fVar42 = *pfVar1;
                        fVar43 = pfVar1[1];
                        fVar6 = pfVar1[2];
                        fVar7 = pfVar1[3];
                        pfVar1 = pfVar17 + uVar24 * 2 + 4;
                        fVar8 = *pfVar1;
                        fVar9 = pfVar1[1];
                        fVar10 = pfVar1[3];
                        pfVar21[0xc] = pfVar1[2] * fVar40;
                        pfVar21[0xd] = fVar10 * fVar41;
                        pfVar21[0xe] = fVar40;
                        pfVar21[0xf] = fVar41;
                        pfVar21[8] = fVar8 * fVar40;
                        pfVar21[9] = fVar9 * fVar41;
                        pfVar21[10] = fVar40;
                        pfVar21[0xb] = fVar41;
                        pfVar21[4] = fVar6 * fVar40;
                        pfVar21[5] = fVar7 * fVar41;
                        pfVar21[6] = fVar40;
                        pfVar21[7] = fVar41;
                        *pfVar21 = fVar42 * fVar40;
                        pfVar21[1] = fVar43 * fVar41;
                        pfVar21[2] = fVar40;
                        pfVar21[3] = fVar41;
                        uVar24 = uVar24 + 4;
                        pfVar21 = pfVar21 + 0x10;
                      } while (uVar19 != uVar24);
                      if ((uVar25 & 0x7ffffffc) != uVar25) goto LAB_140120475;
                    }
                    bVar12 = FUN_140120d60(local_128,pfVar18,uVar25);
                    FUN_140160cf0(pfVar18);
                  }
                }
                else {
                  bVar12 = 0;
                  puVar20 = (undefined4 *)FUN_140125da0(local_128,5,0);
                  uVar38 = local_118;
                  if (puVar20 != (undefined4 *)0x0) {
                    cVar11 = (**(code **)(lVar15 + 0x30))(lVar15,puVar20,pfVar17,uVar25);
                    bVar12 = 1;
                    if (cVar11 == '\0') {
                      *puVar20 = 0;
LAB_1401203b6:
                      bVar12 = 0;
                    }
                  }
                }
                FUN_140160cf0(pfVar17);
              }
            }
          }
          bVar22 = true;
          uVar38 = CONCAT71((int7)(uVar38 >> 8),(char)uVar38 != '\0' & bVar12);
          uVar27 = (ulonglong)local_11c;
          lVar15 = local_f8;
          uVar31 = local_100;
          uVar33 = local_f0;
          param_1 = local_128;
          uVar19 = local_108;
        }
        else {
          fVar42 = fVar41;
          if (fVar43 <= fVar41) {
            fVar42 = fVar43;
          }
          if (fVar41 <= fVar43) {
            fVar41 = fVar43;
          }
          uVar33 = (ulonglong)(iVar32 + 1);
          lVar16 = (longlong)iVar32 * 0x10;
          *(ulonglong *)(lVar15 + lVar16) = CONCAT44(fVar42 * fVar45,fVar40 * fVar44);
          *(float *)(lVar15 + 8 + lVar16) = fVar44;
          *(float *)(lVar15 + 0xc + lVar16) =
               ((float)(int)(char)uVar27 + (fVar41 - fVar42)) * fVar45;
          bVar22 = true;
          if ((uVar27 & 1) == 0) {
            if (param_2[uVar24 * 2 + 1] < param_2[uVar30 * 2 + 1] ||
                param_2[uVar24 * 2 + 1] == param_2[uVar30 * 2 + 1]) {
LAB_14011ffe6:
              bVar22 = true;
              uVar27 = 0;
            }
            else {
              *(float *)(lVar16 + lVar15 + 4) = fVar42 * fVar45 + fVar45;
              uVar27 = 0;
            }
          }
          else {
LAB_14011fe80:
            bVar22 = true;
            uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
          }
        }
      }
      else {
        if ((fVar40 != fVar42) || (NAN(fVar40) || NAN(fVar42))) goto LAB_14011fef0;
        if ((fVar41 != fVar43) || (NAN(fVar41) || NAN(fVar43))) goto LAB_14011fef0;
      }
      uVar24 = uVar30;
    } while (uVar30 != uVar19);
    if ((int)uVar33 != 0) {
      bVar12 = FUN_140120d60(param_1,lVar15);
      uVar38 = CONCAT71((int7)(uVar38 >> 8),(char)uVar38 != '\0' & bVar12);
    }
    FUN_140160cf0(lVar15);
  }
  if (DAT_1414ef3c0 != (local_c0 ^ (ulonglong)auStack_168)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_c0 ^ (ulonglong)auStack_168);
  }
  return uVar38 & 0xffffff01;
}

