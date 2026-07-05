/**
 * Function: failed_to_issue_intermediate_batch
 * Address:  140432700
 * Signature: undefined failed_to_issue_intermediate_batch(void)
 * Body size: 3396 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
failed_to_issue_intermediate_batch(longlong param_1,int *param_2,void *param_3,ulonglong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  float *pfVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  float *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  longlong *local_1a0;
  ulonglong local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  void *local_178;
  float *local_170;
  longlong local_168;
  longlong *local_160;
  undefined8 local_158;
  float fStack_150;
  int iStack_14c;
  longlong local_140 [4];
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 local_108;
  float *pfStack_100;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined8 uStack_e4;
  undefined8 local_dc;
  int local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_1414ef3c0 ^ (ulonglong)auStack_1e8;
  lVar4 = *(longlong *)(param_1 + 0x2c0);
  iVar10 = 1;
  if (*(longlong *)(lVar4 + 0x28d8) == 0) {
    iVar10 = *(int *)(lVar4 + 0x2870);
    lVar21 = *(longlong *)(lVar4 + 0x660);
  }
  else {
    lVar21 = *(longlong *)(lVar4 + 0x660);
  }
  local_178 = param_3;
  if (lVar21 == 0) {
    local_140[0] = 0;
    uVar12 = FUN_1400fbed0("Device lost and couldn\'t be recovered");
    if (DAT_1414ef3c0 == (local_d0 ^ (ulonglong)auStack_1e8)) {
      return uVar12;
    }
    goto LAB_140433434;
  }
  local_140[0] = 0;
  lVar21 = lVar4;
  if (*(int *)(lVar4 + 0x2904) != iVar10) {
    *(int *)(lVar4 + 0x2904) = iVar10;
    *(undefined1 *)(lVar4 + 0x2908) = 1;
    *(undefined1 *)(lVar4 + 0x28e0) = 1;
    lVar21 = *(longlong *)(param_1 + 0x2c0);
  }
  if (*(char *)(lVar4 + 0x6e8) == '\x01') {
    (*DAT_1416f1508)(*(undefined8 *)(lVar21 + 0x650));
    iVar10 = vulkan_createframebuffersandrenderpasses(param_1);
    if (iVar10 == 0) {
      *(undefined1 *)(lVar4 + 0x6e8) = 0;
      lVar21 = *(longlong *)(param_1 + 0x2c0);
      goto LAB_14043284a;
    }
LAB_1404327ed:
    uVar12 = 0;
  }
  else {
LAB_14043284a:
    if (param_4 != 0) {
      iVar10 = *(int *)(lVar21 + 0x295c);
      if ((*(char *)(lVar21 + 0x2960) == '\x01') && (iVar11 = FUN_1404379e0(lVar21), iVar11 != 0)) {
        cVar8 = FUN_1400fbed0("Failed to issue intermediate batch");
        if (cVar8 == '\0') goto LAB_1404327ed;
      }
      else {
        lVar20 = (longlong)iVar10 * 0x20;
        lVar13 = lVar21 + lVar20;
        plVar19 = (longlong *)(lVar13 + 0x758);
        if (*(ulonglong *)(lVar21 + 0x768 + lVar20) < param_4) {
          FUN_1404379e0(lVar21);
          (*DAT_1416f1508)(*(undefined8 *)(lVar21 + 0x650));
          if (*(longlong *)(lVar13 + 0x760) != 0) {
            (*DAT_1416f14c0)(*(undefined8 *)(lVar21 + 0x660),*(longlong *)(lVar13 + 0x760),0);
            *(undefined8 *)(lVar13 + 0x760) = 0;
          }
          if (*plVar19 != 0) {
            (*DAT_1416f1488)(*(undefined8 *)(lVar21 + 0x660),*plVar19,0);
          }
          *(undefined8 *)(lVar13 + 0x768) = 0;
          *(undefined8 *)(lVar13 + 0x770) = 0;
          *plVar19 = 0;
          *(undefined8 *)(lVar13 + 0x760) = 0;
          sdl_render_vulkan_debug(lVar21,param_4,0x80,plVar19);
        }
        memcpy(*(void **)(lVar13 + 0x770),local_178,param_4);
        local_140[0] = *(longlong *)(lVar13 + 0x760);
        iVar10 = *(int *)(lVar21 + 0x295c);
        *(int *)(lVar21 + 0x295c) = iVar10 + 1;
        if (0xfe < iVar10) {
          *(undefined4 *)(lVar21 + 0x295c) = 0;
          *(undefined1 *)(lVar21 + 0x2960) = 1;
        }
      }
    }
    uVar12 = 1;
    if (param_2 != (int *)0x0) {
      local_180 = (undefined8 *)(lVar4 + 0x28e4);
      local_188 = (undefined8 *)(lVar4 + 0x28f4);
      local_170 = (float *)(param_1 + 0x1f8);
      do {
        pvVar7 = local_178;
        switch(*param_2 - 1) {
        case 0:
          iVar10 = FUN_1400fc560(local_188,param_2 + 4);
          if (iVar10 != 0) {
            uVar12 = *(undefined8 *)(param_2 + 6);
            *local_188 = *(undefined8 *)(param_2 + 4);
            local_188[1] = uVar12;
            *(undefined1 *)(lVar4 + 0x2908) = 1;
            *(undefined1 *)(lVar4 + 0x28e0) = 1;
          }
          break;
        case 1:
          if (*(char *)(lVar4 + 0x28e1) != (char)param_2[2]) {
            *(char *)(lVar4 + 0x28e1) = (char)param_2[2];
            *(undefined1 *)(lVar4 + 0x28e0) = 1;
          }
          iVar10 = FUN_1400fc560(local_180,param_2 + 3);
          if (iVar10 != 0) {
            uVar12 = *(undefined8 *)(param_2 + 5);
            *local_180 = *(undefined8 *)(param_2 + 3);
            local_180[1] = uVar12;
            *(undefined1 *)(lVar4 + 0x28e0) = 1;
          }
          break;
        case 3:
          cVar8 = FUN_140118890(param_1);
          local_158._0_4_ = (float)param_2[5];
          local_158._4_4_ = (float)param_2[6];
          fStack_150 = (float)param_2[7];
          iStack_14c = param_2[8];
          if (cVar8 != '\0') {
            FUN_1401188c0(&local_158);
          }
          iVar10 = iStack_14c;
          fVar25 = (float)param_2[4];
          fVar26 = fVar25 * (float)local_158;
          fVar27 = fVar25 * local_158._4_4_;
          local_158 = CONCAT44(fVar27,fVar26);
          fVar25 = fVar25 * fStack_150;
          lVar21 = *(longlong *)(param_1 + 0x2c0);
          fStack_150 = fVar25;
          FUN_1404372e0(lVar21);
          if (*(longlong *)(lVar21 + 0x710) != 0) {
            (*DAT_1416f14e8)(*(undefined8 *)(lVar21 + 0x698));
            *(undefined8 *)(lVar21 + 0x710) = 0;
          }
          lVar13 = *(longlong *)(lVar21 + 0x28d8);
          bVar22 = lVar13 == 0;
          puVar18 = (undefined4 *)(lVar13 + 0x74);
          puVar6 = (undefined4 *)(lVar13 + 0x78);
          if (bVar22) {
            puVar18 = (undefined4 *)(lVar21 + 0x2868);
            puVar6 = (undefined4 *)(lVar21 + 0x286c);
          }
          uVar2 = *puVar18;
          uVar3 = *puVar6;
          puVar14 = (undefined8 *)(lVar21 + 0x708);
          if (!bVar22) {
            puVar14 = (undefined8 *)(lVar13 + 0x30);
          }
          local_140[3] = *puVar14;
          *(longlong *)(lVar21 + 0x710) = local_140[3];
          if (bVar22) {
            puVar14 = (undefined8 *)
                      ((ulonglong)*(uint *)(lVar21 + 0x28a8) * 8 + *(longlong *)(lVar21 + 0x6f8));
          }
          else {
            puVar14 = (undefined8 *)(lVar13 + 0x38);
          }
          local_140[2] = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          local_140[1] = 0x2b;
          iStack_120 = (int)*puVar14;
          uStack_11c = (undefined4)((ulonglong)*puVar14 >> 0x20);
          uStack_110 = CONCAT44(uVar3,uVar2);
          local_108 = 1;
          uStack_e4 = CONCAT44(uStack_e4._4_4_,iVar10);
          pfStack_100 = &local_f0;
          local_f0 = fVar26;
          fStack_ec = fVar27;
          fStack_e8 = fVar25;
          (*DAT_1416f1518)(*(undefined8 *)(lVar21 + 0x698),local_140 + 1);
          if (local_140[0] != 0) {
            local_140[1] = 0;
            local_1c8 = local_140 + 1;
            (*DAT_1416f1510)(*(undefined8 *)(lVar21 + 0x698),0);
          }
          break;
        case 4:
          uVar1 = param_2[4];
          local_1c8 = *(longlong **)(lVar4 + 0x748);
          local_1a0 = local_140;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1b8 = 0;
          local_1c0 = (float *)0x0;
          unable_to_create_required_pipeline_state(param_1,param_2,0,*(undefined8 *)(lVar4 + 0x750))
          ;
          uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 0x698);
          uVar17 = (ulonglong)uVar1;
          goto LAB_140432a2f;
        case 5:
          lVar21 = *(longlong *)(param_2 + 2);
          uVar17 = *(ulonglong *)(param_2 + 4);
          local_1c8 = *(longlong **)(lVar4 + 0x748);
          local_1a0 = local_140;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1b8 = 2;
          local_1c0 = (float *)0x0;
          unable_to_create_required_pipeline_state(param_1,param_2,0,*(undefined8 *)(lVar4 + 0x750))
          ;
          local_1c8 = (longlong *)((ulonglong)local_1c8 & 0xffffffff00000000);
          (*DAT_1416f1568)(*(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 0x698),
                           uVar17 & 0xffffffff);
          lVar13 = (uVar17 - 1) * 0x20;
          pfVar15 = (float *)((longlong)pvVar7 + lVar13 + lVar21);
          if ((*(float *)((longlong)pvVar7 + lVar21) == *pfVar15) &&
             (!NAN(*(float *)((longlong)pvVar7 + lVar21)) && !NAN(*pfVar15))) {
            fVar25 = *(float *)((longlong)pvVar7 + lVar21 + 4);
            pfVar15 = (float *)((longlong)pvVar7 + lVar13 + lVar21 + 4);
            if ((fVar25 == *pfVar15) && (!NAN(fVar25) && !NAN(*pfVar15))) break;
          }
          local_1c8 = *(longlong **)(lVar4 + 0x748);
          local_1a0 = local_140;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1b8 = 0;
          local_1c0 = (float *)0x0;
          unable_to_create_required_pipeline_state(param_1,param_2,0,*(undefined8 *)(lVar4 + 0x750))
          ;
          uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 0x698);
          uVar17 = 1;
          goto LAB_140432a2f;
        case 9:
          piVar5 = *(int **)(param_2 + 0xc);
          uVar17 = *(ulonglong *)(param_2 + 4);
          if (piVar5 == (int *)0x0) {
            local_1c8 = *(longlong **)(lVar4 + 0x748);
            local_1a0 = local_140;
            local_1b0 = 0;
            uStack_1a8 = 0;
            local_1b8 = 3;
            local_1c0 = (float *)0x0;
            unable_to_create_required_pipeline_state
                      (param_1,param_2,0,*(undefined8 *)(lVar4 + 0x750));
          }
          else {
            lVar21 = *(longlong *)(param_1 + 0x2c0);
            lVar13 = *(longlong *)(piVar5 + 0x3c);
            local_160 = *(longlong **)(lVar13 + 0x90);
            if (local_160 == (longlong *)0x0) {
              local_160 = *(longlong **)(lVar21 + 0x748);
              local_168 = *(longlong *)(lVar13 + 0x98);
            }
            else {
              local_168 = *(longlong *)(lVar13 + 0x98);
            }
            if (local_168 == 0) {
              local_168 = *(longlong *)(lVar21 + 0x750);
            }
            fStack_ec = 0.0;
            fStack_e8 = 0.0;
            uStack_e4 = 0;
            local_dc = 0;
            local_190 = uVar17;
            bVar9 = FUN_140118890(param_1);
            local_f0 = (float)bVar9;
            fStack_e8 = (float)param_2[6];
            iVar10 = *piVar5;
            if (iVar10 < 0x3231564e) {
              if (iVar10 == 0x30313050) {
                fStack_ec = 3.0;
              }
              else {
                fStack_ec = 1.0;
                if (iVar10 != 0x3132564e) goto LAB_140432f0d;
              }
            }
            else {
              fStack_ec = 1.0;
              if (((iVar10 != 0x3231564e) && (fStack_ec = 1.0, iVar10 != 0x32315659)) &&
                 (fStack_ec = 1.0, iVar10 != 0x56555949)) {
LAB_140432f0d:
                fStack_ec = 2.0;
                if ((piVar5[4] != 0x12000500) && (fStack_ec = 3.0, (piVar5[4] & 0x7fe0U) != 0x2600))
                {
                  fStack_ec = 0.0;
                }
              }
            }
            local_d4 = piVar5[5];
            pfVar15 = (float *)(*(longlong *)(param_1 + 0x1e0) + 0x18);
            if (*(longlong *)(param_1 + 0x1e0) == 0) {
              pfVar15 = local_170;
            }
            fVar25 = *pfVar15;
            fVar26 = (float)piVar5[6];
            if (fVar25 < fVar26) {
              uStack_e4 = CONCAT44(0x40000000,(undefined4)uStack_e4);
              auVar23._4_4_ = 0x3f800000;
              auVar23._0_4_ = fVar25;
              auVar23._8_8_ = 0;
              auVar24._4_4_ = fVar25;
              auVar24._0_4_ = fVar26 * fVar26;
              auVar24._8_8_ = 0;
              auVar24 = divps(auVar23,auVar24);
              local_dc = auVar24._0_8_;
            }
            if (*(int *)(lVar13 + 0x60) == 1) {
              if (param_2[0xe] == 1) {
                uVar12 = *(undefined8 *)(lVar21 + 0x2810);
                iVar10 = *(int *)(lVar13 + 0x20);
              }
              else {
                if (param_2[0xe] != 2) {
LAB_14043301d:
                  pcVar16 = "Unknown texture address mode: %d";
                  goto LAB_140433024;
                }
                uVar12 = *(undefined8 *)(lVar21 + 0x2818);
                iVar10 = *(int *)(lVar13 + 0x20);
              }
            }
            else {
              if (*(int *)(lVar13 + 0x60) != 0) {
                pcVar16 = "Unknown scale mode: %d";
LAB_140433024:
                FUN_1400fbed0(pcVar16);
                uVar17 = local_190;
                goto LAB_140433396;
              }
              if (param_2[0xe] == 1) {
                uVar12 = *(undefined8 *)(lVar21 + 0x2800);
                iVar10 = *(int *)(lVar13 + 0x20);
              }
              else {
                if (param_2[0xe] != 2) goto LAB_14043301d;
                uVar12 = *(undefined8 *)(lVar21 + 0x2808);
                iVar10 = *(int *)(lVar13 + 0x20);
              }
            }
            if (iVar10 != 5) {
              if (*(longlong *)(lVar21 + 0x710) == 0) {
                uStack_110 = *(undefined8 *)(lVar13 + 8);
                local_140[2] = 0;
                local_140[1] = 0x2d;
                local_140[3] = 0x20000011a0;
                uStack_11c = 5;
                uStack_118 = 0xffffffff;
                uStack_114 = 0xffffffff;
                local_108 = 1;
                pfStack_100 = (float *)0x1;
                local_f8 = 1;
                local_1a0 = local_140 + 1;
                uStack_1a8 = CONCAT44(uStack_1a8._4_4_,1);
                local_1b0 = 0;
                local_1b8 = 0;
                local_1c0 = (float *)0x0;
                local_1c8 = (longlong *)((ulonglong)local_1c8 & 0xffffffff00000000);
                iStack_120 = iVar10;
                (*DAT_1416f14f0)(*(undefined8 *)(lVar21 + 0x698),0x1480,0x80,0);
                *(undefined4 *)(lVar13 + 0x20) = 5;
              }
              else {
                (*DAT_1416f14e8)(*(undefined8 *)(lVar21 + 0x698));
                *(undefined8 *)(lVar21 + 0x710) = 0;
                uStack_110 = *(undefined8 *)(lVar13 + 8);
                local_140[2] = 0;
                local_140[1] = 0x2d;
                local_140[3] = 0x20000011a0;
                iStack_120 = *(undefined4 *)(lVar13 + 0x20);
                uStack_11c = 5;
                uStack_118 = 0xffffffff;
                uStack_114 = 0xffffffff;
                local_108 = 1;
                pfStack_100 = (float *)0x1;
                local_f8 = 1;
                local_1a0 = local_140 + 1;
                uStack_1a8 = CONCAT44(uStack_1a8._4_4_,1);
                local_1b0 = 0;
                local_1b8 = 0;
                local_1c0 = (float *)0x0;
                local_1c8 = (longlong *)((ulonglong)local_1c8 & 0xffffffff00000000);
                (*DAT_1416f14f0)(*(undefined8 *)(lVar21 + 0x698),0x1480,0x80,0);
                *(undefined4 *)(lVar13 + 0x20) = 5;
                lVar20 = *(longlong *)(lVar21 + 0x28d8);
                bVar22 = lVar20 == 0;
                puVar18 = (undefined4 *)(lVar20 + 0x74);
                puVar6 = (undefined4 *)(lVar20 + 0x78);
                if (bVar22) {
                  puVar18 = (undefined4 *)(lVar21 + 0x2868);
                  puVar6 = (undefined4 *)(lVar21 + 0x286c);
                }
                uVar2 = *puVar18;
                uVar3 = *puVar6;
                puVar14 = (undefined8 *)(lVar21 + 0x700);
                if (!bVar22) {
                  puVar14 = (undefined8 *)(lVar20 + 0x28);
                }
                local_140[3] = *puVar14;
                *(longlong *)(lVar21 + 0x710) = local_140[3];
                if (bVar22) {
                  puVar14 = (undefined8 *)
                            ((ulonglong)*(uint *)(lVar21 + 0x28a8) * 8 +
                            *(longlong *)(lVar21 + 0x6f8));
                }
                else {
                  puVar14 = (undefined8 *)(lVar20 + 0x38);
                }
                local_140[2] = 0;
                uStack_118 = 0;
                uStack_114 = 0;
                local_108 = 0;
                pfStack_100 = (float *)0x0;
                local_140[1] = 0x2b;
                iStack_120 = (int)*puVar14;
                uStack_11c = (undefined4)((ulonglong)*puVar14 >> 0x20);
                uStack_110 = CONCAT44(uVar3,uVar2);
                (*DAT_1416f1518)(*(undefined8 *)(lVar21 + 0x698),local_140 + 1,0);
              }
            }
            local_1b0 = *(undefined8 *)(lVar13 + 0x10);
            local_1a0 = local_140;
            local_1c0 = &local_f0;
            local_1c8 = local_160;
            local_1b8 = 3;
            uStack_1a8 = uVar12;
            unable_to_create_required_pipeline_state
                      (param_1,param_2,*(undefined4 *)(lVar13 + 0x7c),local_168);
            uVar17 = local_190;
          }
LAB_140433396:
          uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 0x698);
          uVar17 = uVar17 & 0xffffffff;
LAB_140432a2f:
          local_1c8 = (longlong *)((ulonglong)local_1c8 & 0xffffffff00000000);
          (*DAT_1416f1568)(uVar12,uVar17);
        }
        param_2 = *(int **)(param_2 + 0x10);
      } while (param_2 != (int *)0x0);
      uVar12 = 1;
    }
  }
  if (DAT_1414ef3c0 == (local_d0 ^ (ulonglong)auStack_1e8)) {
    return uVar12;
  }
LAB_140433434:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_d0 ^ (ulonglong)auStack_1e8);
}

