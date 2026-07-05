/**
 * Function: camera_already_opened
 * Address:  1400feeb0
 * Signature: undefined camera_already_opened(void)
 * Body size: 2635 bytes
 */


undefined8 * camera_already_opened(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_158 [32];
  code *local_138;
  ulonglong *local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  undefined8 local_118;
  undefined1 local_108 [72];
  ulonglong local_c0;
  
  local_c0 = DAT_1414ef3c0 ^ (ulonglong)auStack_158;
  puVar9 = (undefined8 *)camera_subsystem_is_not_initialized();
  if (puVar9 != (undefined8 *)0x0) {
    if (puVar9[0x3a] == 0) {
      FUN_140106140(puVar9 + 0x37,0);
      puVar9[3] = DAT_141524be8;
      puVar9[4] = DAT_141524bf0;
      puVar9[5] = DAT_141524bf8;
      local_128 = 0;
      auStack_120 = (undefined1  [8])0x0;
      local_118 = 0;
      uVar1 = *(uint *)(puVar9 + 7);
      uVar13 = (ulonglong)uVar1;
      if (uVar13 == 0) {
        if (param_2 == (ulonglong *)0x0) goto LAB_1400ff295;
        local_118 = param_2[2];
        local_128 = *param_2;
        auStack_120 = (undefined1  [8])param_2[1];
        cVar6 = (*DAT_141524bd8)(puVar9,&local_128);
        if (cVar6 != '\0') goto LAB_1400ff2b0;
      }
      else {
        if (param_2 == (ulonglong *)0x0) {
          puVar4 = (ulonglong *)puVar9[6];
          local_118 = puVar4[2];
          local_128 = *puVar4;
          auStack_120 = (undefined1  [8])puVar4[1];
        }
        else {
          uVar15 = param_2[1];
          iVar12 = *(int *)((longlong)param_2 + 0xc);
          if (iVar12 < 1 || (int)uVar15 < 1) {
            local_118 = *(ulonglong *)(puVar9[6] + 0x10);
            auStack_120 = *(undefined1 (*) [8])(puVar9[6] + 8);
            local_130 = param_2;
LAB_1400ff12a:
            param_2 = local_130;
            if ((int)uVar1 < 1) {
              bVar20 = false;
              uVar8 = 0;
              iVar12 = 0;
            }
            else {
              iVar12 = (int)*local_130;
              lVar19 = puVar9[6];
              lVar14 = 0;
              iVar18 = 0;
              uVar8 = 0;
              do {
                if ((*(int *)(lVar19 + 8 + lVar14) == auStack_120._0_4_) &&
                   (*(int *)(lVar19 + 0xc + lVar14) == auStack_120._4_4_)) {
                  if (iVar18 == 0) {
                    uVar8 = *(undefined4 *)(lVar19 + 4 + lVar14);
                    iVar18 = *(int *)(lVar19 + lVar14);
                  }
                  if (*(int *)(lVar19 + lVar14) == iVar12) {
                    uVar8 = *(undefined4 *)(lVar19 + 4 + lVar14);
                    bVar20 = true;
                    goto LAB_1400ff1b1;
                  }
                }
                lVar14 = lVar14 + 0x18;
              } while (uVar13 * 0x18 != lVar14);
              bVar20 = true;
              iVar12 = iVar18;
            }
          }
          else {
            if (0 < (int)uVar1) {
              iVar18 = 9999999;
              fVar23 = 999999.0;
              fVar24 = -9999999.0;
              lVar19 = 0;
              local_130 = param_2;
              do {
                iVar2 = *(int *)(puVar9[6] + 8 + lVar19);
                iVar3 = *(int *)(puVar9[6] + 0xc + lVar19);
                fVar25 = (float)iVar2 / (float)iVar3;
                fVar21 = (float)FUN_14016e270((float)(int)uVar15 / (float)iVar12 - fVar25);
                fVar22 = (float)FUN_14016e270(fVar24 - fVar25);
                iVar7 = FUN_14016e4c0();
                if (1e-06 <= fVar22) {
                  if (fVar21 < fVar23) goto LAB_1400ff020;
                }
                else {
                  fVar21 = fVar23;
                  fVar25 = fVar24;
                  if (iVar7 < iVar18) {
LAB_1400ff020:
                    fVar24 = fVar25;
                    auStack_120._4_4_ = iVar3;
                    auStack_120._0_4_ = iVar2;
                    fVar23 = fVar21;
                    iVar18 = iVar7;
                  }
                }
                lVar19 = lVar19 + 0x18;
              } while (uVar13 * 0x18 != lVar19);
              goto LAB_1400ff12a;
            }
            bVar20 = false;
            uVar8 = 0;
            iVar12 = 0;
          }
LAB_1400ff1b1:
          local_128 = CONCAT44(uVar8,iVar12);
          if (*(int *)((longlong)param_2 + 0x14) == 0) {
            fVar23 = 0.0;
          }
          else {
            fVar23 = (float)(int)param_2[2] / (float)*(int *)((longlong)param_2 + 0x14);
          }
          if (bVar20) {
            uVar8 = auStack_120._0_4_;
            uVar5 = auStack_120._4_4_;
            fVar24 = 9999999.0;
            lVar19 = 0x14;
            do {
              lVar14 = puVar9[6];
              if (((*(int *)(lVar14 + -0x14 + lVar19) == iVar12) &&
                  (*(int *)(lVar14 + -0xc + lVar19) == uVar8)) &&
                 (*(int *)(lVar14 + -8 + lVar19) == uVar5)) {
                iVar18 = *(int *)(lVar14 + -4 + lVar19);
                iVar2 = *(int *)(lVar14 + lVar19);
                if ((iVar18 == (int)param_2[2]) && (iVar2 == *(int *)((longlong)param_2 + 0x14))) {
                  local_118 = CONCAT44(*(undefined4 *)(lVar14 + lVar19),iVar18);
                  break;
                }
                if (iVar2 == 0) {
                  fVar21 = 0.0;
                }
                else {
                  fVar21 = (float)iVar18 / (float)iVar2;
                }
                fVar21 = (float)FUN_14016e270(fVar23 - fVar21);
                if (fVar21 < fVar24) {
                  local_118 = CONCAT44(*(undefined4 *)(lVar14 + lVar19),
                                       *(undefined4 *)(lVar14 + -4 + lVar19));
                  fVar24 = fVar21;
                }
              }
              lVar19 = lVar19 + 0x18;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
LAB_1400ff295:
        cVar6 = (*DAT_141524bd8)(puVar9,&local_128);
        if (cVar6 != '\0') {
          if (param_2 == (ulonglong *)0x0) {
            *(ulonglong *)((longlong)puVar9 + 100) = local_118;
            *(ulonglong *)((longlong)puVar9 + 0x54) = local_128;
            *(undefined1 (*) [8])((longlong)puVar9 + 0x5c) = auStack_120;
          }
          else {
LAB_1400ff2b0:
            *(ulonglong *)((longlong)puVar9 + 100) = param_2[2];
            uVar13 = param_2[1];
            *(ulonglong *)((longlong)puVar9 + 0x54) = *param_2;
            *(ulonglong *)((longlong)puVar9 + 0x5c) = uVar13;
            if (((int)param_2[1] < 1) || (*(int *)((longlong)param_2 + 0xc) < 1)) {
              *(undefined1 (*) [8])((longlong)puVar9 + 0x5c) = auStack_120;
              if ((int)*param_2 != 0) goto LAB_1400ff2d6;
LAB_1400ff2ef:
              *(int *)((longlong)puVar9 + 0x54) = (int)local_128;
              iVar12 = *(int *)((longlong)param_2 + 0x14);
            }
            else {
              if ((int)*param_2 == 0) goto LAB_1400ff2ef;
LAB_1400ff2d6:
              iVar12 = *(int *)((longlong)param_2 + 0x14);
            }
            if (iVar12 == 0) {
              *(ulonglong *)((longlong)puVar9 + 100) = local_118;
            }
          }
          *(ulonglong *)((longlong)puVar9 + 0x4c) = local_118;
          *(int *)((longlong)puVar9 + 0x3c) = (int)local_128;
          *(undefined4 *)(puVar9 + 8) = local_128._4_4_;
          *(undefined4 *)((longlong)puVar9 + 0x44) = auStack_120._0_4_;
          *(undefined4 *)(puVar9 + 9) = auStack_120._4_4_;
          if (auStack_120._4_4_ == *(int *)(puVar9 + 0xc) &&
              *(int *)((longlong)puVar9 + 0x5c) == auStack_120._0_4_) {
            *(undefined4 *)(puVar9 + 0x36) = 0;
          }
          else {
            uVar15 = (longlong)(int)auStack_120._4_4_ * (longlong)(int)auStack_120._0_4_;
            uVar13 = (longlong)*(int *)(puVar9 + 0xc) * (longlong)*(int *)((longlong)puVar9 + 0x5c);
            if (uVar13 < uVar15 || uVar13 - uVar15 == 0) {
              *(undefined4 *)(puVar9 + 0x36) = 0xffffffff;
            }
            else {
              *(undefined4 *)(puVar9 + 0x36) = 1;
            }
          }
          *(bool *)((longlong)puVar9 + 0x1b4) = (int)local_128 != *(int *)((longlong)puVar9 + 0x54);
          local_138 = (code *)((ulonglong)local_138 & 0xffffffff00000000);
          lVar19 = height_pitch_would_overflow
                             ((longlong)(int)auStack_120._0_4_,auStack_120._4_4_,
                              local_128 & 0xffffffff,0);
          puVar9[0x12] = lVar19;
          if (lVar19 != 0) {
            parameter_s_is_invalid(lVar19,local_128._4_4_);
            if (*(int *)(puVar9 + 0x36) == 0) {
              bVar20 = true;
            }
            else if (*(char *)((longlong)puVar9 + 0x1b4) == '\x01') {
              bVar20 = -1 < *(int *)(puVar9 + 0x36);
              puVar10 = &local_128;
              if (bVar20) {
                puVar10 = (undefined8 *)((longlong)puVar9 + 0x54);
              }
              puVar17 = (undefined8 *)(auStack_120 + 4);
              if (!bVar20) {
                puVar17 = puVar9 + 0xc;
              }
              puVar16 = (undefined4 *)((longlong)puVar9 + 0x5c);
              if (bVar20) {
                puVar16 = (undefined4 *)auStack_120;
              }
              lVar19 = height_pitch_would_overflow
                                 (*puVar16,*(undefined4 *)puVar17,*(undefined4 *)puVar10);
              puVar9[0x13] = lVar19;
              if (lVar19 == 0) goto LAB_1400ff869;
              parameter_s_is_invalid(lVar19,local_128._4_4_);
              bVar20 = *(int *)(puVar9 + 0x36) == 0;
            }
            else {
              bVar20 = false;
            }
            puVar9[0x16] = puVar9 + 0x17;
            puVar9[0x19] = puVar9 + 0x1a;
            puVar9[0x1c] = puVar9 + 0x1d;
            puVar9[0x1f] = puVar9 + 0x20;
            puVar9[0x22] = puVar9 + 0x23;
            puVar9[0x25] = puVar9 + 0x26;
            puVar9[0x28] = puVar9 + 0x29;
            puVar9[0x31] = puVar9 + 0x14;
            if ((bVar20) && (*(char *)((longlong)puVar9 + 0x1b4) != '\x01')) {
              local_138 = (code *)((ulonglong)local_138 & 0xffffffff00000000);
              lVar19 = height_pitch_would_overflow
                                 (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                  *(undefined4 *)(puVar9 + 0xc),
                                  *(undefined4 *)((longlong)puVar9 + 0x54),0);
            }
            else {
              lVar19 = height_pitch_would_overflow
                                 (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                  *(undefined4 *)(puVar9 + 0xc),
                                  *(undefined4 *)((longlong)puVar9 + 0x54));
            }
            if (lVar19 != 0) {
              local_128._4_4_ = (undefined4)(local_128 >> 0x20);
              uVar8 = local_128._4_4_;
              parameter_s_is_invalid(lVar19,uVar8);
              puVar9[0x14] = lVar19;
              if ((*(int *)(puVar9 + 0x36) == 0) && (*(char *)((longlong)puVar9 + 0x1b4) == '\0')) {
                local_138 = (code *)((ulonglong)local_138 & 0xffffffff00000000);
                lVar19 = height_pitch_would_overflow
                                   (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                    *(undefined4 *)(puVar9 + 0xc),
                                    *(undefined4 *)((longlong)puVar9 + 0x54),0);
              }
              else {
                lVar19 = height_pitch_would_overflow
                                   (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                    *(undefined4 *)(puVar9 + 0xc),
                                    *(undefined4 *)((longlong)puVar9 + 0x54));
              }
              if (lVar19 != 0) {
                local_128._4_4_ = (undefined4)(local_128 >> 0x20);
                uVar8 = local_128._4_4_;
                parameter_s_is_invalid(lVar19,uVar8);
                puVar9[0x17] = lVar19;
                if ((*(int *)(puVar9 + 0x36) == 0) && (*(char *)((longlong)puVar9 + 0x1b4) == '\0'))
                {
                  local_138 = (code *)((ulonglong)local_138 & 0xffffffff00000000);
                  lVar19 = height_pitch_would_overflow
                                     (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                      *(undefined4 *)(puVar9 + 0xc),
                                      *(undefined4 *)((longlong)puVar9 + 0x54),0);
                }
                else {
                  lVar19 = height_pitch_would_overflow
                                     (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                      *(undefined4 *)(puVar9 + 0xc),
                                      *(undefined4 *)((longlong)puVar9 + 0x54));
                }
                if (lVar19 != 0) {
                  local_128._4_4_ = (undefined4)(local_128 >> 0x20);
                  uVar8 = local_128._4_4_;
                  parameter_s_is_invalid(lVar19,uVar8);
                  puVar9[0x1a] = lVar19;
                  if ((*(int *)(puVar9 + 0x36) == 0) &&
                     (*(char *)((longlong)puVar9 + 0x1b4) == '\0')) {
                    local_138 = (code *)((ulonglong)local_138 & 0xffffffff00000000);
                    lVar19 = height_pitch_would_overflow
                                       (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                        *(undefined4 *)(puVar9 + 0xc),
                                        *(undefined4 *)((longlong)puVar9 + 0x54),0);
                  }
                  else {
                    lVar19 = height_pitch_would_overflow
                                       (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                        *(undefined4 *)(puVar9 + 0xc),
                                        *(undefined4 *)((longlong)puVar9 + 0x54));
                  }
                  if (lVar19 != 0) {
                    local_128._4_4_ = (undefined4)(local_128 >> 0x20);
                    uVar8 = local_128._4_4_;
                    parameter_s_is_invalid(lVar19,uVar8);
                    puVar9[0x1d] = lVar19;
                    if ((*(int *)(puVar9 + 0x36) == 0) &&
                       (*(char *)((longlong)puVar9 + 0x1b4) == '\0')) {
                      local_138 = (code *)((ulonglong)local_138 & 0xffffffff00000000);
                      lVar19 = height_pitch_would_overflow
                                         (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                          *(undefined4 *)(puVar9 + 0xc),
                                          *(undefined4 *)((longlong)puVar9 + 0x54),0);
                    }
                    else {
                      lVar19 = height_pitch_would_overflow
                                         (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                          *(undefined4 *)(puVar9 + 0xc),
                                          *(undefined4 *)((longlong)puVar9 + 0x54));
                    }
                    if (lVar19 != 0) {
                      local_128._4_4_ = (undefined4)(local_128 >> 0x20);
                      uVar8 = local_128._4_4_;
                      parameter_s_is_invalid(lVar19,uVar8);
                      puVar9[0x20] = lVar19;
                      if ((*(int *)(puVar9 + 0x36) == 0) &&
                         (*(char *)((longlong)puVar9 + 0x1b4) == '\0')) {
                        local_138 = (code *)((ulonglong)local_138 & 0xffffffff00000000);
                        lVar19 = height_pitch_would_overflow
                                           (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                            *(undefined4 *)(puVar9 + 0xc),
                                            *(undefined4 *)((longlong)puVar9 + 0x54),0);
                      }
                      else {
                        lVar19 = height_pitch_would_overflow
                                           (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                            *(undefined4 *)(puVar9 + 0xc),
                                            *(undefined4 *)((longlong)puVar9 + 0x54));
                      }
                      if (lVar19 != 0) {
                        local_128._4_4_ = (undefined4)(local_128 >> 0x20);
                        uVar8 = local_128._4_4_;
                        parameter_s_is_invalid(lVar19,uVar8);
                        puVar9[0x23] = lVar19;
                        if ((*(int *)(puVar9 + 0x36) == 0) &&
                           (*(char *)((longlong)puVar9 + 0x1b4) == '\0')) {
                          local_138 = (code *)((ulonglong)local_138 & 0xffffffff00000000);
                          lVar19 = height_pitch_would_overflow
                                             (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                              *(undefined4 *)(puVar9 + 0xc),
                                              *(undefined4 *)((longlong)puVar9 + 0x54),0);
                        }
                        else {
                          lVar19 = height_pitch_would_overflow
                                             (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                              *(undefined4 *)(puVar9 + 0xc),
                                              *(undefined4 *)((longlong)puVar9 + 0x54));
                        }
                        if (lVar19 != 0) {
                          local_128._4_4_ = (undefined4)(local_128 >> 0x20);
                          uVar8 = local_128._4_4_;
                          parameter_s_is_invalid(lVar19,uVar8);
                          puVar9[0x26] = lVar19;
                          if ((*(int *)(puVar9 + 0x36) == 0) &&
                             (*(char *)((longlong)puVar9 + 0x1b4) == '\0')) {
                            local_138 = (code *)((ulonglong)local_138 & 0xffffffff00000000);
                            lVar19 = height_pitch_would_overflow
                                               (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                                *(undefined4 *)(puVar9 + 0xc),
                                                *(undefined4 *)((longlong)puVar9 + 0x54),0);
                          }
                          else {
                            lVar19 = height_pitch_would_overflow
                                               (*(undefined4 *)((longlong)puVar9 + 0x5c),
                                                *(undefined4 *)(puVar9 + 0xc),
                                                *(undefined4 *)((longlong)puVar9 + 0x54));
                          }
                          if (lVar19 != 0) {
                            local_128._4_4_ = (undefined4)(local_128 >> 0x20);
                            uVar8 = local_128._4_4_;
                            parameter_s_is_invalid(lVar19,uVar8);
                            puVar9[0x29] = lVar19;
                            *(undefined4 *)(puVar9 + 0xf) = 1;
                            if ((DAT_141524c10 & 1) == 0) {
                              FUN_1400fd420(local_108,0x40,"SDLCamera%d",
                                            *(undefined4 *)((longlong)puVar9 + 0x6c));
                              local_138 = _endthreadex_exref;
                              lVar19 = sdlthreadcreateentry_function
                                                 (FUN_1400ff930,local_108,puVar9,
                                                  _beginthreadex_exref);
                              puVar9[0x38] = lVar19;
                              if (lVar19 == 0) {
                                FUN_1400fe540(puVar9);
                                FUN_1401552c0(*puVar9);
                                FUN_1400fda30(puVar9);
                                pcVar11 = "Couldn\'t create camera thread";
                                goto LAB_1400fef47;
                              }
                            }
                            FUN_1401552c0(*puVar9);
                            FUN_1400fda30(puVar9);
                            goto LAB_1400ff883;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_1400ff869:
      FUN_1400fe540(puVar9);
      FUN_1401552c0(*puVar9);
      FUN_1400fda30(puVar9);
    }
    else {
      FUN_1401552c0(*puVar9);
      FUN_1400fda30(puVar9);
      pcVar11 = "Camera already opened";
LAB_1400fef47:
      FUN_1400fbed0(pcVar11);
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_1400ff883:
  if (DAT_1414ef3c0 != (local_c0 ^ (ulonglong)auStack_158)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_c0 ^ (ulonglong)auStack_158);
  }
  return puVar9;
}

