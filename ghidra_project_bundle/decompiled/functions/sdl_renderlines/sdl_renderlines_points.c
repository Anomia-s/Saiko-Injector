/**
 * Function: sdl_renderlines_points
 * Address:  14011f730
 * Signature: undefined sdl_renderlines_points(void)
 * Body size: 1379 bytes
 */


ulonglong sdl_renderlines_points(longlong param_1,float *param_2,uint param_3)

{
  longlong lVar1;
  float *pfVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 unaff_RBP;
  undefined7 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  cVar4 = FUN_1403d8fa0(param_1,2);
  if (cVar4 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","renderer");
  }
  else {
    if (*(char *)(param_1 + 0x2b8) != '\x01') {
      if (param_2 == (float *)0x0) {
        uVar9 = FUN_1400fbed0("Parameter \'%s\' is invalid","SDL_RenderLines(): points");
        return uVar9;
      }
      uVar13 = (undefined7)((ulonglong)unaff_RBP >> 8);
      uVar9 = CONCAT71(uVar13,1);
      if (1 < (int)param_3) {
        if ((*(int *)(param_1 + 0x120) == 0) ||
           (lVar6 = *(longlong *)(param_1 + 0x150), lVar6 != param_1 + 0x158)) {
          if (*(int *)(param_1 + 0x1d4) == 0) {
LAB_14011f8c1:
            uVar9 = line_too_long_tried_to_draw_d_pixels_max_d(param_1,param_2,param_3);
            return uVar9;
          }
          if (*(int *)(param_1 + 0x1d4) != 2) {
            fVar23 = *(float *)(*(longlong *)(param_1 + 0x150) + 0x4c);
            if ((((fVar23 == 1.0) && (!NAN(fVar23))) &&
                (fVar23 = *(float *)(*(longlong *)(param_1 + 0x150) + 0x50), fVar23 == 1.0)) &&
               (!NAN(fVar23))) {
              uVar9 = FUN_140120630(param_1,param_2,param_3);
              return uVar9;
            }
            goto LAB_14011f8c1;
          }
          lVar6 = *(longlong *)(param_1 + 0x150);
        }
        fVar23 = (float)*(undefined8 *)(lVar6 + 100);
        fVar24 = (float)((ulonglong)*(undefined8 *)(lVar6 + 100) >> 0x20);
        pfVar7 = (float *)FUN_140160c40((ulonglong)(param_3 * 8) << 2);
        puVar8 = (undefined8 *)FUN_140160c40();
        uVar9 = CONCAT71(uVar13,1);
        if ((pfVar7 != (float *)0x0) && (puVar8 != (undefined8 *)0x0)) {
          if ((*param_2 != param_2[(ulonglong)(param_3 - 1) * 2]) ||
             (NAN(*param_2) || NAN(param_2[(ulonglong)(param_3 - 1) * 2]))) {
            bVar3 = true;
          }
          else {
            bVar3 = param_2[(ulonglong)(param_3 - 1) * 2 + 1] != param_2[1];
          }
          fVar19 = *param_2 * fVar23;
          fVar22 = param_2[1];
          *pfVar7 = fVar19;
          fVar22 = fVar22 * fVar24;
          pfVar7[1] = fVar22;
          pfVar7[2] = fVar23 + fVar19;
          pfVar7[3] = fVar22;
          pfVar7[4] = fVar23 + fVar19;
          pfVar7[5] = fVar24 + fVar22;
          pfVar7[6] = fVar19;
          pfVar7[7] = fVar24 + fVar22;
          iVar11 = 0;
          puVar12 = puVar8;
          if (bVar3) {
            *puVar8 = 0x100000000;
            puVar8[1] = 2;
            puVar8[2] = 0x300000002;
            puVar12 = puVar8 + 3;
            iVar11 = 6;
          }
          lVar10 = (ulonglong)param_3 - 1;
          lVar6 = 0;
          do {
            while( true ) {
              fVar20 = *(float *)((longlong)param_2 + lVar6 * 2 + 8) * fVar23;
              fVar21 = *(float *)((longlong)param_2 + lVar6 * 2 + 0xc);
              pfVar7[lVar6 * 2 + 8] = fVar20;
              fVar21 = fVar21 * fVar24;
              pfVar2 = pfVar7 + lVar6 * 2 + 9;
              *pfVar2 = fVar21;
              pfVar2[1] = fVar23 + fVar20;
              pfVar2[2] = fVar21;
              pfVar2[3] = fVar23 + fVar20;
              pfVar7[lVar6 * 2 + 0xd] = fVar24 + fVar21;
              pfVar7[lVar6 * 2 + 0xe] = fVar20;
              pfVar7[lVar6 * 2 + 0xf] = fVar24 + fVar21;
              lVar1 = lVar6 + 4;
              uVar14 = (undefined4)lVar1;
              *(undefined4 *)puVar12 = uVar14;
              iVar15 = (int)lVar6;
              iVar18 = iVar15 + 5;
              *(int *)((longlong)puVar12 + 4) = iVar18;
              iVar16 = iVar15 + 6;
              *(int *)(puVar12 + 1) = iVar16;
              *(undefined4 *)((longlong)puVar12 + 0xc) = uVar14;
              *(int *)(puVar12 + 2) = iVar16;
              iVar17 = iVar15 + 7;
              *(int *)((longlong)puVar12 + 0x14) = iVar17;
              lVar6 = lVar1;
              if ((fVar22 != fVar21) || (NAN(fVar22) || NAN(fVar21))) break;
              if (fVar20 <= fVar19) {
                *(int *)(puVar12 + 3) = iVar18;
                *(int *)((longlong)puVar12 + 0x1c) = iVar15;
                *(int *)(puVar12 + 4) = iVar15 + 3;
                *(int *)((longlong)puVar12 + 0x24) = iVar18;
                *(int *)(puVar12 + 5) = iVar15 + 3;
                *(int *)((longlong)puVar12 + 0x2c) = iVar16;
              }
              else {
                *(int *)(puVar12 + 3) = iVar15 + 1;
                *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar14;
                *(int *)(puVar12 + 4) = iVar17;
                *(int *)((longlong)puVar12 + 0x24) = iVar15 + 1;
                *(int *)(puVar12 + 5) = iVar17;
                iVar15 = iVar15 + 2;
LAB_14011fa6c:
                *(int *)((longlong)puVar12 + 0x2c) = iVar15;
              }
LAB_14011fb00:
              puVar12 = puVar12 + 6;
              iVar11 = iVar11 + 0xc;
LAB_14011fb07:
              lVar10 = lVar10 + -1;
              fVar19 = fVar20;
              fVar22 = fVar21;
              if (lVar10 == 0) goto LAB_14011fbe6;
            }
            if ((fVar19 == fVar20) && (!NAN(fVar19) && !NAN(fVar20))) {
              if (fVar22 < fVar21) {
                *(int *)(puVar12 + 3) = iVar15 + 2;
                *(int *)((longlong)puVar12 + 0x1c) = iVar18;
                *(undefined4 *)(puVar12 + 4) = uVar14;
                *(int *)((longlong)puVar12 + 0x24) = iVar15 + 2;
                *(undefined4 *)(puVar12 + 5) = uVar14;
                iVar15 = iVar15 + 3;
                goto LAB_14011fa6c;
              }
              *(int *)(puVar12 + 3) = iVar16;
              *(int *)((longlong)puVar12 + 0x1c) = iVar15 + 1;
              *(int *)(puVar12 + 4) = iVar15;
              *(int *)((longlong)puVar12 + 0x24) = iVar16;
              *(int *)(puVar12 + 5) = iVar15;
              *(int *)((longlong)puVar12 + 0x2c) = iVar17;
              goto LAB_14011fb00;
            }
            if (fVar22 < fVar21) {
              if (fVar20 <= fVar19) {
                *(undefined4 *)(puVar12 + 3) = uVar14;
                *(int *)((longlong)puVar12 + 0x1c) = iVar15;
                *(int *)(puVar12 + 4) = iVar18;
                *(int *)((longlong)puVar12 + 0x24) = iVar18;
                *(int *)(puVar12 + 5) = iVar15;
                iVar17 = iVar15 + 3;
                *(int *)((longlong)puVar12 + 0x2c) = iVar17;
                *(int *)(puVar12 + 6) = iVar18;
                *(int *)((longlong)puVar12 + 0x34) = iVar17;
                *(int *)(puVar12 + 7) = iVar16;
                *(int *)((longlong)puVar12 + 0x3c) = iVar16;
                *(int *)(puVar12 + 8) = iVar17;
                iVar15 = iVar15 + 2;
              }
              else {
                *(int *)(puVar12 + 3) = iVar15 + 1;
                *(int *)((longlong)puVar12 + 0x1c) = iVar18;
                *(undefined4 *)(puVar12 + 4) = uVar14;
                *(int *)((longlong)puVar12 + 0x24) = iVar15 + 1;
                *(undefined4 *)(puVar12 + 5) = uVar14;
                iVar16 = iVar15 + 2;
                *(int *)((longlong)puVar12 + 0x2c) = iVar16;
                *(int *)(puVar12 + 6) = iVar16;
                *(undefined4 *)((longlong)puVar12 + 0x34) = uVar14;
                *(int *)(puVar12 + 7) = iVar17;
                *(int *)((longlong)puVar12 + 0x3c) = iVar16;
                *(int *)(puVar12 + 8) = iVar17;
                iVar15 = iVar15 + 3;
              }
              *(int *)((longlong)puVar12 + 0x44) = iVar15;
              puVar12 = puVar12 + 9;
              iVar11 = iVar11 + 0x12;
              goto LAB_14011fb07;
            }
            iVar11 = iVar11 + 0x12;
            if (fVar20 <= fVar19) {
              *(int *)(puVar12 + 3) = iVar16;
              *(int *)((longlong)puVar12 + 0x1c) = iVar18;
              *(int *)(puVar12 + 4) = iVar15 + 1;
              *(int *)((longlong)puVar12 + 0x24) = iVar16;
              *(int *)(puVar12 + 5) = iVar15 + 1;
              *(int *)((longlong)puVar12 + 0x2c) = iVar15;
              *(int *)(puVar12 + 6) = iVar17;
              *(int *)((longlong)puVar12 + 0x34) = iVar16;
              *(int *)(puVar12 + 7) = iVar15;
              *(int *)((longlong)puVar12 + 0x3c) = iVar17;
              *(int *)(puVar12 + 8) = iVar15;
              iVar15 = iVar15 + 3;
            }
            else {
              *(int *)(puVar12 + 3) = iVar15;
              *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar14;
              *(int *)(puVar12 + 4) = iVar17;
              *(int *)((longlong)puVar12 + 0x24) = iVar15;
              *(int *)(puVar12 + 5) = iVar17;
              iVar18 = iVar15 + 1;
              *(int *)((longlong)puVar12 + 0x2c) = iVar18;
              *(int *)(puVar12 + 6) = iVar18;
              *(int *)((longlong)puVar12 + 0x34) = iVar17;
              *(int *)(puVar12 + 7) = iVar16;
              *(int *)((longlong)puVar12 + 0x3c) = iVar18;
              *(int *)(puVar12 + 8) = iVar16;
              iVar15 = iVar15 + 2;
            }
            *(int *)((longlong)puVar12 + 0x44) = iVar15;
            lVar10 = lVar10 + -1;
            puVar12 = puVar12 + 9;
            fVar19 = fVar20;
            fVar22 = fVar21;
          } while (lVar10 != 0);
LAB_14011fbe6:
          uVar5 = FUN_14011fca0(param_1,0,pfVar7,8,param_1 + 0x204,0,0,0,param_3 << 2,puVar8,iVar11,
                                4,0x3f800000,0x3f800000,1);
          uVar9 = (ulonglong)uVar5;
        }
        FUN_140160cf0(pfVar7);
        FUN_140160cf0(puVar8);
      }
      goto LAB_14011f796;
    }
    FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
  }
  uVar9 = 0;
LAB_14011f796:
  return uVar9 & 0xffffffff;
}

