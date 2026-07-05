/**
 * Function: unsupported_texture_format
 * Address:  14042e960
 * Signature: undefined unsupported_texture_format(void)
 * Body size: 2448 bytes
 */


/* WARNING: Type propagation algorithm not settling */

ulonglong unsupported_texture_format(longlong param_1,int *param_2,undefined8 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined8 unaff_RSI;
  uint *puVar14;
  char *pcVar15;
  byte bVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined8 uVar21;
  int *piVar22;
  bool bVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_128 [32];
  char *local_108;
  char *local_100;
  int local_f8;
  char local_e9;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined4 local_cc;
  int *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  int local_98;
  int local_94;
  ulonglong local_90;
  
  local_90 = DAT_1414ef3c0 ^ (ulonglong)auStack_128;
  plVar12 = *(longlong **)(param_1 + 0x2c0);
  local_b8 = param_3;
  if (*(int **)(param_1 + 0x1e0) == (int *)0x0) {
    puVar14 = (uint *)0x0;
    lVar8 = video_subsystem_has_not_been_initialized();
    if (lVar8 != *plVar12) goto LAB_14042e9f9;
LAB_14042ea18:
    lVar8 = *(longlong *)(param_1 + 0x2c0);
    if (*(char *)(lVar8 + 8) == '\x01') {
      do {
        iVar7 = (**(code **)(lVar8 + 200))();
      } while (iVar7 != 0);
    }
    lVar8 = *(longlong *)(param_1 + 0x1e0);
    plVar12[0x4b] = lVar8;
    if ((lVar8 == 0) &&
       ((video_subsystem_has_not_been_initialized
                   (*(undefined8 *)(param_1 + 0x100),&local_94,&local_98),
        local_94 != (int)plVar12[0x52] || (local_98 != *(int *)((longlong)plVar12 + 0x294))))) {
      *(undefined1 *)(plVar12 + 0x49) = 1;
      *(undefined1 *)((longlong)plVar12 + 0x266) = 1;
      *(int *)(plVar12 + 0x52) = local_94;
      *(int *)((longlong)plVar12 + 0x294) = local_98;
    }
    if (param_2 != (int *)0x0) {
      plVar20 = plVar12 + 0x47;
      plVar17 = plVar12 + 0x4d;
      local_a0 = (ulonglong)puVar14 & 0xff;
      local_a8 = (ulonglong)(byte)((byte)puVar14 ^ 1);
      local_e8 = plVar17;
      local_e0 = plVar20;
      local_d8 = param_1;
      local_b0 = plVar12;
      do {
        iVar7 = *param_2;
        piVar11 = param_2;
        switch(iVar7) {
        case 1:
          iVar7 = FUN_1400fc560(plVar20,param_2 + 4,0x10);
          if (iVar7 != 0) {
            iVar7 = param_2[5];
            iVar2 = param_2[6];
            iVar3 = param_2[7];
            *(int *)plVar20 = param_2[4];
            *(int *)((longlong)plVar20 + 4) = iVar7;
            *(int *)(plVar20 + 1) = iVar2;
            *(int *)((longlong)plVar20 + 0xc) = iVar3;
            *(undefined1 *)(plVar12 + 0x49) = 1;
            *(undefined1 *)((longlong)plVar12 + 0x266) = 1;
          }
          break;
        case 2:
          if (*(char *)((longlong)plVar12 + 0x265) != (char)param_2[2]) {
            *(char *)((longlong)plVar12 + 0x265) = (char)param_2[2];
            *(undefined1 *)((longlong)plVar12 + 0x264) = 1;
          }
          iVar7 = FUN_1400fc560(plVar17,param_2 + 3,0x10);
          if (iVar7 != 0) {
            iVar7 = param_2[4];
            iVar2 = param_2[5];
            iVar3 = param_2[6];
            *(int *)plVar17 = param_2[3];
            *(int *)((longlong)plVar17 + 4) = iVar7;
            *(int *)(plVar17 + 1) = iVar2;
            *(int *)((longlong)plVar17 + 0xc) = iVar3;
            *(undefined1 *)((longlong)plVar12 + 0x266) = 1;
          }
          break;
        default:
switchD_14042eb23_caseD_3:
          break;
        case 4:
          fVar25 = (float)param_2[4];
          fVar1 = (float)param_2[8];
          fVar26 = (float)param_2[local_a0 * 2 + 5] * fVar25;
          fVar27 = (float)param_2[6] * fVar25;
          fVar25 = fVar25 * (float)param_2[local_a8 * 2 + 5];
          if (((((*(char *)((longlong)plVar12 + 0x28c) != '\0') ||
                (fVar26 != *(float *)((longlong)plVar12 + 0x27c))) ||
               (NAN(fVar26) || NAN(*(float *)((longlong)plVar12 + 0x27c)))) ||
              ((fVar27 != *(float *)(plVar12 + 0x50) ||
               (NAN(fVar27) || NAN(*(float *)(plVar12 + 0x50)))))) ||
             ((fVar25 != *(float *)((longlong)plVar12 + 0x284) ||
              (NAN(fVar25) || NAN(*(float *)((longlong)plVar12 + 0x284)))))) {
LAB_14042ed21:
            (*(code *)plVar12[9])(fVar26,fVar27,fVar25,fVar1);
            *(float *)((longlong)plVar12 + 0x27c) = fVar26;
            *(float *)(plVar12 + 0x50) = fVar27;
            *(float *)((longlong)plVar12 + 0x284) = fVar25;
            *(float *)(plVar12 + 0x51) = fVar1;
            *(undefined1 *)((longlong)plVar12 + 0x28c) = 0;
          }
          else if ((fVar1 != *(float *)(plVar12 + 0x51)) ||
                  (NAN(fVar1) || NAN(*(float *)(plVar12 + 0x51)))) goto LAB_14042ed21;
          if ((*(char *)((longlong)plVar12 + 0x265) != '\0') ||
             (*(char *)((longlong)plVar12 + 0x264) == '\x01')) {
            (*(code *)plVar12[0x10])(0xc11);
            *(undefined1 *)((longlong)plVar12 + 0x264) = *(undefined1 *)((longlong)plVar12 + 0x265);
          }
          (*(code *)plVar12[8])(0x4000);
          break;
        case 5:
        case 10:
          piVar22 = *(int **)(param_2 + 0xc);
          uVar18 = *(ulonglong *)(param_2 + 4);
          piVar10 = *(int **)(param_2 + 0x10);
          if ((piVar10 == (int *)0x0) || (*piVar10 != iVar7)) {
            if (piVar22 != (int *)0x0) goto LAB_14042eb89;
LAB_14042ec32:
            cVar6 = FUN_14042fb80(plVar12,param_2,1,local_b8);
            param_1 = param_1;
          }
          else {
            while ((piVar9 = piVar10, *(int **)(piVar9 + 0xc) == piVar22 &&
                   (piVar9[0xb] == param_2[0xb]))) {
              uVar18 = uVar18 + *(longlong *)(piVar9 + 4);
              piVar10 = *(int **)(piVar9 + 0x10);
              piVar11 = piVar9;
              if ((piVar10 == (int *)0x0) || (*piVar10 != iVar7)) break;
            }
            if (piVar22 == (int *)0x0) goto LAB_14042ec32;
LAB_14042eb89:
            puVar19 = *(undefined8 **)(param_1 + 0x2c0);
            if (*(int **)(param_1 + 0x1e0) == (int *)0x0) {
              iVar2 = *piVar22;
              if (iVar2 < 0x2053454f) {
                if (iVar2 < 0x16561804) {
                  if (iVar2 == 0x16161804) {
LAB_14042f1e2:
                    bVar16 = 4;
                  }
                  else {
                    bVar16 = 3;
                    if (iVar2 != 0x16362004) goto LAB_14042f185;
                  }
                }
                else {
                  if (iVar2 == 0x16561804) goto LAB_14042f1d7;
                  if (iVar2 != 0x16762004) goto LAB_14042f185;
                  bVar16 = 2;
                }
              }
              else if (iVar2 < 0x3231564e) {
                if (iVar2 == 0x2053454f) {
LAB_14042f17a:
                  bVar16 = 9;
                }
                else {
                  if (iVar2 != 0x3132564e) goto LAB_14042f185;
LAB_14042f164:
                  bVar16 = 8;
                }
              }
              else if (iVar2 == 0x3231564e) {
LAB_14042f16f:
                bVar16 = 7;
              }
              else {
                if ((iVar2 != 0x32315659) && (iVar2 != 0x56555949)) goto LAB_14042f185;
                bVar16 = 6;
              }
LAB_14042ebb3:
              cVar6 = FUN_14042fb80(puVar19,param_2,bVar16,local_b8);
              param_1 = local_d8;
              if (piVar22 != (int *)puVar19[0x4a]) {
                puVar5 = *(undefined4 **)(piVar22 + 0x3c);
                local_e9 = cVar6;
                if (*(char *)(puVar5 + 9) == '\x01') {
                  (*(code *)puVar19[2])(0x84c2);
                  local_c0 = puVar19;
                  (*(code *)puVar19[5])(puVar5[2],puVar5[10]);
                  puVar19 = local_c0;
                  uVar4 = puVar5[2];
                  if (param_2[0xe] == 1) {
                    uVar21 = 0x812f;
                  }
                  else {
                    if (param_2[0xe] != 2) {
                      cVar6 = FUN_1400fbed0("Unknown texture address mode: %d");
                      plVar17 = local_e8;
                      puVar19 = local_c0;
                      param_1 = local_d8;
                      plVar20 = local_e0;
                      if (cVar6 == '\0') break;
                      goto LAB_14042efbf;
                    }
                    uVar21 = 0x2901;
                  }
                  local_c8 = piVar22;
                  (*(code *)local_c0[0x26])(uVar4,0x2802,uVar21);
                  (*(code *)puVar19[0x26])(uVar4,0x2803,uVar21);
                  plVar12 = local_b0;
                  piVar22 = local_c8;
LAB_14042efbf:
                  local_c0 = puVar19 + 2;
                  (*(code *)puVar19[2])(0x84c1);
                  (*(code *)puVar19[5])(puVar5[2],puVar5[0xc]);
                  if (param_2[0xe] == 1) {
                    local_cc = 0x812f;
LAB_14042effd:
                    local_c8 = (int *)CONCAT44(local_c8._4_4_,puVar5[2]);
                    (*(code *)puVar19[0x26])(puVar5[2],0x2802);
                    (*(code *)puVar19[0x26])((ulonglong)local_c8 & 0xffffffff,0x2803,local_cc);
                  }
                  else {
                    if (param_2[0xe] == 2) {
                      local_cc = 0x2901;
                      goto LAB_14042effd;
                    }
                    cVar6 = FUN_1400fbed0("Unknown texture address mode: %d");
                    plVar17 = local_e8;
                    param_1 = local_d8;
                    plVar20 = local_e0;
                    if (cVar6 == '\0') break;
                  }
                  (*(code *)*local_c0)(0x84c0);
                }
                else if (*(char *)((longlong)puVar5 + 0x25) == '\x01') goto LAB_14042efbf;
                (*(code *)puVar19[5])(puVar5[2],*puVar5);
                uVar4 = puVar5[2];
                if (param_2[0xe] == 1) {
                  uVar13 = 0x812f;
LAB_14042f05a:
                  (*(code *)puVar19[0x26])(uVar4,0x2802,uVar13);
                  (*(code *)puVar19[0x26])(uVar4,0x2803,uVar13);
                }
                else {
                  if (param_2[0xe] == 2) {
                    uVar13 = 0x2901;
                    goto LAB_14042f05a;
                  }
                  cVar6 = FUN_1400fbed0("Unknown texture address mode: %d");
                  plVar17 = local_e8;
                  param_1 = local_d8;
                  plVar20 = local_e0;
                  if (cVar6 == '\0') break;
                }
                puVar19[0x4a] = piVar22;
                param_1 = local_d8;
                cVar6 = local_e9;
              }
            }
            else {
              iVar2 = **(int **)(param_1 + 0x1e0);
              iVar3 = *piVar22;
              bVar16 = 2;
              if (iVar2 == iVar3) goto LAB_14042ebb3;
              if (iVar3 < 0x2053454f) {
                if (iVar3 < 0x16561804) {
                  if (iVar3 == 0x16161804) {
                    if (iVar2 == 0x16362004) {
LAB_14042f1d7:
                      bVar16 = 5;
                    }
                    else if ((iVar2 == 0x16762004) || (iVar2 == 0x16561804)) goto LAB_14042f1ed;
                  }
                  else {
                    if (iVar3 != 0x16362004) goto LAB_14042f185;
                    bVar23 = iVar2 == 0x16762004;
                    bVar24 = iVar2 == 0x16561804;
LAB_14042f142:
                    bVar16 = bVar24 | bVar23 | 2;
                  }
                }
                else {
                  if (iVar3 != 0x16561804) {
                    if (iVar3 == 0x16762004) {
                      bVar23 = iVar2 == 0x16362004;
                      bVar24 = iVar2 == 0x16161804;
                      goto LAB_14042f142;
                    }
                    goto LAB_14042f185;
                  }
                  if (iVar2 == 0x16161804) {
LAB_14042f1ed:
                    bVar16 = 3;
                  }
                  else {
                    if (iVar2 == 0x16362004) goto LAB_14042f1e2;
                    if (iVar2 == 0x16762004) goto LAB_14042f1d7;
                  }
                }
                goto LAB_14042ebb3;
              }
              if (iVar3 < 0x3231564e) {
                if (iVar3 == 0x2053454f) goto LAB_14042f17a;
                if (iVar3 == 0x3132564e) goto LAB_14042f164;
              }
              else {
                if (iVar3 == 0x3231564e) goto LAB_14042f16f;
                bVar16 = 6;
                if ((iVar3 == 0x32315659) || (iVar3 == 0x56555949)) goto LAB_14042ebb3;
              }
LAB_14042f185:
              cVar6 = FUN_1400fbed0("Unsupported texture format");
              param_1 = local_d8;
            }
          }
          plVar17 = local_e8;
          plVar20 = local_e0;
          if (cVar6 != '\0') {
            (*(code *)plVar12[0x12])((ulonglong)(iVar7 != 5) << 2,0,uVar18 & 0xffffffff);
            plVar17 = local_e8;
            plVar20 = local_e0;
          }
          break;
        case 6:
          cVar6 = FUN_14042fb80(plVar12,param_2,1,local_b8);
          if (cVar6 == '\0') goto switchD_14042eb23_caseD_3;
          uVar18 = *(ulonglong *)(param_2 + 4);
          if (uVar18 < 3) {
            piVar22 = *(int **)(param_2 + 0x10);
            if ((piVar22 != (int *)0x0) && (*piVar22 == 6)) {
              while ((piVar10 = piVar22, *(longlong *)(piVar10 + 4) == 2 &&
                     (piVar10[0xb] == param_2[0xb]))) {
                piVar22 = *(int **)(piVar10 + 0x10);
                uVar18 = uVar18 + 2;
                piVar11 = piVar10;
                if ((piVar22 == (int *)0x0) || (*piVar22 != 6)) break;
              }
            }
            (*(code *)plVar12[0x12])(1,0,uVar18);
          }
          else {
            (*(code *)plVar12[0x12])(3,0);
          }
        }
        puVar14 = &switchD_14042eb23::switchdataD_140e15a78;
        param_2 = *(int **)(piVar11 + 0x10);
      } while (param_2 != (int *)0x0);
    }
    lVar8 = *(longlong *)(param_1 + 0x2c0);
    uVar18 = CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
    if ((*(char *)(lVar8 + 8) != '\x01') || (iVar7 = (**(code **)(lVar8 + 200))(), iVar7 == 0))
    goto LAB_14042f29d;
    pcVar15 = "";
    do {
      local_f8 = iVar7;
      if (*pcVar15 == '\0') {
        pcVar15 = "generic";
      }
      local_100 = "UNKNOWN";
      if (local_f8 - 0x500U < 6) {
        local_100 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[local_f8 - 0x500U];
      }
      local_108 = "GLES2_RunCommandQueue";
      FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)",pcVar15,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                    ,0x596);
      iVar7 = (**(code **)(lVar8 + 200))();
    } while (iVar7 != 0);
  }
  else {
    iVar7 = **(int **)(param_1 + 0x1e0);
    puVar14 = (uint *)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                               iVar7 == 0x16161804 || iVar7 == 0x16362004);
    lVar8 = video_subsystem_has_not_been_initialized();
    if (lVar8 == *plVar12) goto LAB_14042ea18;
LAB_14042e9f9:
    plVar12[0x53] = 0;
    cVar6 = video_subsystem_has_not_been_initialized(*(undefined8 *)(param_1 + 0x100));
    if (cVar6 != '\0') goto LAB_14042ea18;
  }
  uVar18 = 0;
LAB_14042f29d:
  if (DAT_1414ef3c0 != (local_90 ^ (ulonglong)auStack_128)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_90 ^ (ulonglong)auStack_128);
  }
  return uVar18 & 0xffffffff;
}

