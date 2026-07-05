/**
 * Function: empty_destination_palette
 * Address:  140114210
 * Signature: undefined empty_destination_palette(void)
 * Body size: 2727 bytes
 */


uint * empty_destination_palette
                 (longlong param_1,undefined8 param_2,int *param_3,uint param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  undefined1 uVar18;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  uint local_d0;
  uint local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  uint local_b0;
  uint local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  int *local_98;
  int *local_90;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  longlong local_78;
  char local_69;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  if ((param_1 == 0) || (*(undefined **)(param_1 + 0x28) != &DAT_14152553c)) {
    pcVar15 = "surface";
LAB_140114258:
    FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar15);
  }
  else {
    uVar7 = (uint)param_2;
    if (uVar7 == 0) {
      pcVar15 = "format";
      goto LAB_140114258;
    }
    local_a0 = uVar7;
    if (param_3 == (int *)0x0) {
      if ((uVar7 & 0xf0000000) == 0x10000000) {
        uVar7 = (uint)((ulonglong)param_2 >> 0x18) & 0xf;
        local_90 = (int *)0x0;
        if (uVar7 < 0xd) {
          local_90 = (int *)0x0;
          local_98 = (int *)0x0;
          if ((0x100eU >> uVar7 & 1) != 0) {
            local_90 = (int *)parameter_s_is_invalid(1 << ((byte)((ulonglong)param_2 >> 8) & 0x1f));
            if (local_90 == (int *)0x0) goto LAB_14011434b;
            FUN_140156900(local_90);
            local_98 = local_90;
          }
        }
        else {
          local_98 = (int *)0x0;
        }
      }
      else {
LAB_14011434b:
        local_90 = (int *)0x0;
        local_98 = (int *)0x0;
      }
LAB_14011436e:
      uVar7 = *(uint *)(param_1 + 0x40);
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      puVar9 = (uint *)height_pitch_would_overflow
                                 (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                                  local_a0);
      if (puVar9 == (uint *)0x0) goto LAB_140114c82;
      uVar17 = local_a0 & 0xf0000000;
      if (((uVar17 == 0x10000000) && (uVar6 = local_a0 >> 0x18 & 0xf, uVar6 < 0xd)) &&
         ((0x100eU >> uVar6 & 1) != 0)) {
        if (*(undefined **)(puVar9 + 10) == &DAT_14152553c) {
          if (local_98 != (int *)0x0) {
            iVar8 = 1 << ((byte)(puVar9[1] >> 8) & 0x1f);
            if ((puVar9[1] & 0xf0000000) != 0x10000000) {
              iVar8 = 1;
            }
            if (iVar8 < *local_98) {
              FUN_1400fbed0(
                           "SDL_SetSurfacePalette() passed a palette that doesn\'t match the surface format"
                           );
              goto LAB_140114460;
            }
          }
          if (local_98 != *(int **)(puVar9 + 0x12)) {
            if (*(int **)(puVar9 + 0x12) != (int *)0x0) {
              FUN_1401568c0();
            }
            *(int **)(puVar9 + 0x12) = local_98;
            if (local_98 != (int *)0x0) {
              local_98[5] = local_98[5] + 1;
            }
          }
          FUN_1401579d0(puVar9 + 0x1e);
        }
        else {
          FUN_1400fbed0("Parameter \'%s\' is invalid","surface");
        }
      }
LAB_140114460:
      if (param_4 == 0) {
        param_4 = uVar7;
      }
      if (*(undefined **)(puVar9 + 10) == &DAT_14152553c) {
        puVar9[0x10] = param_4;
        uVar6 = *(uint *)(param_1 + 4);
        if (uVar17 == 0x10000000) goto LAB_1401144a7;
LAB_14011459a:
        local_d0 = puVar9[1];
        local_b0 = puVar9[4];
        local_b8 = *(undefined8 *)(puVar9 + 6);
        local_d8 = *(undefined4 *)(param_1 + 0x10);
        local_e0 = *(undefined8 *)(param_1 + 0x18);
        local_c0 = param_5;
        local_e8 = uVar2;
        local_c8 = param_4;
        cVar5 = parameter_s_is_invalid
                          (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),uVar6,uVar7);
        if (cVar5 != '\0') {
          uVar7 = *(uint *)(param_1 + 0x100);
LAB_14011490a:
          if (local_90 != (int *)0x0) {
            FUN_1401568c0();
          }
          if (*(undefined **)(puVar9 + 10) == &DAT_14152553c) {
            local_58 = 0;
            local_50 = *(undefined8 *)(puVar9 + 2);
            potential_rect_math_overflow(param_1 + 100,&local_58,puVar9 + 0x19);
          }
          if (uVar17 == 0x10000000) {
            uVar17 = local_a0 >> 0x18 & 0xf;
            if (2 < uVar17 - 4) {
              if ((uVar17 - 7 < 5) && (uVar17 = local_a0 >> 0x14 & 0xf, uVar17 < 7)) {
                uVar6 = 0x6c;
                goto LAB_140114995;
              }
              goto LAB_14011499a;
            }
            uVar17 = local_a0 >> 0x14 & 0xf;
            if (8 < uVar17) goto LAB_14011499a;
            uVar6 = 0x198;
LAB_140114995:
            if ((uVar6 >> uVar17 & 1) == 0) goto LAB_14011499a;
LAB_1401149a0:
            if (*(undefined **)(puVar9 + 10) == &DAT_14152553c) {
              uVar17 = puVar9[0x40];
              uVar6 = uVar17 & 0xfffffc0f | 0x10;
              puVar9[0x40] = uVar6;
              if (uVar6 != uVar17) {
                FUN_1401579d0(puVar9 + 0x1e);
              }
            }
            else {
              FUN_1400fbed0("Parameter \'%s\' is invalid","surface");
            }
          }
          else {
LAB_14011499a:
            if ((uVar7 & 2) != 0) goto LAB_1401149a0;
          }
          if ((uVar7 & 0x1000) != 0) {
            if (*(undefined **)(puVar9 + 10) == &DAT_14152553c) {
              uVar7 = puVar9[0x40];
              puVar9[0x40] = uVar7 | 0x1000;
              if ((uVar7 | 0x1000) == uVar7) {
LAB_140114a36:
                if ((uVar7 & 0x1000) == 0) goto LAB_140114a3d;
                uVar7 = *puVar9 | 2;
              }
              else {
                FUN_1401579d0(puVar9 + 0x1e);
                if (*(undefined **)(puVar9 + 10) == &DAT_14152553c) {
                  uVar7 = puVar9[0x40];
                  goto LAB_140114a36;
                }
LAB_140114a3d:
                uVar7 = *puVar9 & 0xfffffffd;
              }
              *puVar9 = uVar7;
            }
            else {
              FUN_1400fbed0("Parameter \'%s\' is invalid","surface");
            }
          }
          if (0 < *(int *)(param_1 + 0x50)) {
            lVar13 = 0;
            do {
              while (*(undefined **)(puVar9 + 10) != &DAT_14152553c) {
                cVar5 = FUN_1400fbed0("Parameter \'%s\' is invalid","surface");
                if (cVar5 == '\0') goto LAB_140114c82;
LAB_140114adf:
                lVar13 = lVar13 + 1;
                if (*(int *)(param_1 + 0x50) <= lVar13) goto LAB_14011425f;
              }
              lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x58) + lVar13 * 8);
              if ((lVar12 == 0) || (*(undefined **)(lVar12 + 0x28) != &DAT_14152553c)) {
                cVar5 = FUN_1400fbed0("Parameter \'%s\' is invalid","image");
                if (cVar5 != '\0') goto LAB_140114adf;
                goto LAB_140114c82;
              }
              lVar11 = FUN_140160cc0(*(undefined8 *)(puVar9 + 0x16),
                                     (longlong)(int)puVar9[0x14] * 8 + 8);
              if (lVar11 == 0) goto LAB_140114c82;
              *(longlong *)(lVar11 + (longlong)(int)puVar9[0x14] * 8) = lVar12;
              *(longlong *)(puVar9 + 0x16) = lVar11;
              puVar9[0x14] = puVar9[0x14] + 1;
              *(int *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) + 1;
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)(param_1 + 0x50));
          }
          goto LAB_14011425f;
        }
      }
      else {
        FUN_1400fbed0("Parameter \'%s\' is invalid","surface");
        uVar6 = *(uint *)(param_1 + 4);
        if (uVar17 != 0x10000000) goto LAB_14011459a;
LAB_1401144a7:
        if ((uVar6 & 0xf0000000) != 0x10000000 && uVar6 != 0) goto LAB_14011459a;
        lVar13 = param_1 + 0x78;
        uVar7 = *(uint *)(param_1 + 0x100);
        uVar18 = *(undefined1 *)(param_1 + 0x108);
        uVar1 = *(undefined1 *)(param_1 + 0x109);
        local_9b = *(undefined1 *)(param_1 + 0x10a);
        local_9c = *(undefined1 *)(param_1 + 0x10b);
        *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
        *(uint *)(param_1 + 0x100) = uVar7 & 0x6000;
        local_7c = param_4;
        FUN_1401579d0(lVar13);
        local_68 = 0;
        local_60 = *(undefined8 *)(param_1 + 8);
        local_9a = uVar1;
        local_99 = uVar18;
        local_80 = uVar7;
        local_78 = lVar13;
        if (*(longlong *)(param_1 + 0x48) == 0) {
LAB_140114610:
          lVar13 = 0;
          uVar16 = 0;
        }
        else {
          uVar7 = local_a0 >> 0x18 & 0xf;
          if (uVar7 - 4 < 3) {
            uVar7 = local_a0 >> 0x14 & 0xf;
            if (uVar7 < 9) {
              uVar6 = 0x198;
LAB_14011463e:
              lVar13 = 0;
              uVar16 = 0;
              if ((uVar6 >> uVar7 & 1) != 0) {
                FUN_140156ac0(*(longlong *)(param_1 + 0x48),&local_58,&local_69);
                lVar13 = 0;
                if ((char)local_58 != '\x01') goto LAB_140114610;
                uVar16 = 0;
                if (local_69 == '\0') {
                  uVar16 = **(uint **)(param_1 + 0x48);
                  if ((int)uVar16 < 1) {
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = FUN_140160c40();
                    if (uVar16 == 1) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = 0;
                      do {
                        *(undefined1 *)(lVar13 + uVar10) =
                             *(undefined1 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 3 + uVar10 * 4);
                        *(undefined1 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 3 + uVar10 * 4) = 0xff;
                        *(undefined1 *)(lVar13 + 1 + uVar10) =
                             *(undefined1 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 7 + uVar10 * 4);
                        *(undefined1 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 7 + uVar10 * 4) = 0xff;
                        uVar10 = uVar10 + 2;
                      } while ((uVar16 & 0x7ffffffe) != uVar10);
                    }
                    if ((uVar16 & 1) != 0) {
                      *(undefined1 *)(lVar13 + uVar10) =
                           *(undefined1 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 3 + uVar10 * 4);
                      *(undefined1 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 3 + uVar10 * 4) = 0xff;
                    }
                  }
                }
              }
              goto LAB_140114735;
            }
          }
          else if ((uVar7 - 7 < 5) && (uVar7 = local_a0 >> 0x14 & 0xf, uVar7 < 7)) {
            uVar6 = 0x6c;
            goto LAB_14011463e;
          }
          lVar13 = 0;
          uVar16 = 0;
        }
LAB_140114735:
        bVar4 = false;
        uVar18 = 0;
        if ((local_80 & 0x400) != 0) {
          bVar4 = false;
          if (local_98 == (int *)0x0 && *(longlong *)(param_1 + 0x48) != 0) {
            lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
            uVar18 = *(undefined1 *)(lVar12 + 3 + (ulonglong)*(uint *)(param_1 + 0x104) * 4);
            *(undefined1 *)(lVar12 + 3 + (ulonglong)*(uint *)(param_1 + 0x104) * 4) = 0;
            bVar4 = true;
          }
        }
        cVar5 = FUN_140157280(param_1,puVar9);
        if (cVar5 == '\0') {
          local_84 = 0;
        }
        else {
          local_84 = (**(code **)(param_1 + 0x80))(param_1,&local_68,puVar9,&local_68);
        }
        if (bVar4) {
          *(undefined1 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 3 +
           (ulonglong)*(uint *)(param_1 + 0x104) * 4) = uVar18;
        }
        if (lVar13 != 0) {
          if (0 < (int)uVar16) {
            uVar10 = (ulonglong)(uVar16 & 3);
            if (uVar16 < 4) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              do {
                *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 3 + uVar14 * 4) =
                     *(undefined1 *)(lVar13 + uVar14);
                *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 7 + uVar14 * 4) =
                     *(undefined1 *)(lVar13 + 1 + uVar14);
                *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 0xb + uVar14 * 4)
                     = *(undefined1 *)(lVar13 + 2 + uVar14);
                *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 0xf + uVar14 * 4)
                     = *(undefined1 *)(lVar13 + 3 + uVar14);
                uVar14 = uVar14 + 4;
              } while ((uVar16 & 0x7ffffffc) != uVar14);
            }
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 3 + uVar14 * 4) =
                   *(undefined1 *)(lVar13 + uVar14);
              uVar14 = uVar14 + 1;
            }
          }
          FUN_140160cf0(lVar13);
        }
        uVar7 = local_80;
        *(undefined1 *)(puVar9 + 0x42) = local_99;
        *(undefined1 *)((longlong)puVar9 + 0x109) = local_9a;
        *(undefined1 *)((longlong)puVar9 + 0x10a) = local_9b;
        *(undefined1 *)((longlong)puVar9 + 0x10b) = local_9c;
        puVar9[0x40] = local_80 & 0xffff8bef;
        *(undefined1 *)(param_1 + 0x108) = local_99;
        *(undefined1 *)(param_1 + 0x109) = local_9a;
        *(undefined1 *)(param_1 + 0x10a) = local_9b;
        *(undefined1 *)(param_1 + 0x10b) = local_9c;
        *(uint *)(param_1 + 0x100) = local_80;
        FUN_1401579d0(local_78);
        if ((char)local_84 == '\0') goto LAB_140114c82;
        if ((uVar7 & 0x400) == 0) goto LAB_14011490a;
        piVar3 = *(int **)(param_1 + 0x48);
        bVar4 = true;
        if (piVar3 != (int *)0x0) {
          if (local_98 == (int *)0x0) {
            uVar6 = local_a0 >> 0x18 & 0xf;
            if (uVar6 - 4 < 3) {
              uVar6 = local_a0 >> 0x14 & 0xf;
              bVar4 = false;
              if (uVar6 < 9) {
                uVar16 = 0x198;
LAB_140114b9b:
                bVar4 = false;
                if ((uVar16 >> uVar6 & 1) != 0) goto LAB_14011490a;
              }
            }
            else if (uVar6 - 7 < 5) {
              uVar6 = local_a0 >> 0x14 & 0xf;
              bVar4 = false;
              if (uVar6 < 7) {
                uVar16 = 0x6c;
                goto LAB_140114b9b;
              }
            }
            else {
              bVar4 = false;
            }
          }
          else if (*piVar3 <= *local_98) {
            iVar8 = FUN_1400fc560(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(local_98 + 2),
                                  (longlong)*piVar3 << 2);
            if (iVar8 == 0) {
              parameter_s_is_invalid(puVar9,1,*(undefined4 *)(param_1 + 0x104));
              goto LAB_14011490a;
            }
          }
        }
        local_58 = local_58 & 0xffffffff00000000;
        lVar13 = height_pitch_would_overflow(1,1,*(undefined4 *)(param_1 + 4));
        if (lVar13 != 0) {
          if (*(longlong *)(param_1 + 0x48) != 0) {
            parameter_s_is_invalid(lVar13);
          }
          sdl_fillsurfacerect_dst(lVar13,0,*(undefined4 *)(param_1 + 0x104));
          *(byte *)(lVar13 + 0x101) = *(byte *)(lVar13 + 0x101) & 0xfb;
          local_e8 = param_5;
          lVar12 = empty_destination_palette(lVar13,local_a0,local_98,local_7c);
          if (lVar12 != 0) {
            memcpy(&local_58,*(void **)(lVar12 + 0x18),
                   (ulonglong)*(byte *)(*(longlong *)(lVar12 + 0x38) + 5));
            parameter_s_is_invalid(lVar13);
            parameter_s_is_invalid(lVar12);
            parameter_s_is_invalid(puVar9,1,local_58 & 0xffffffff);
            if (bVar4) {
              parameter_s_is_invalid(puVar9);
            }
            goto LAB_14011490a;
          }
          parameter_s_is_invalid(lVar13);
        }
      }
LAB_140114c82:
      if (local_90 != (int *)0x0) {
        FUN_1401568c0();
      }
      if (puVar9 != (uint *)0x0) {
        parameter_s_is_invalid(puVar9);
      }
    }
    else {
      iVar8 = *param_3;
      if ((longlong)iVar8 < 1) {
        lVar13 = 0;
LAB_140114354:
        if ((int)lVar13 != iVar8) {
          local_90 = (int *)0x0;
          local_98 = param_3;
          goto LAB_14011436e;
        }
      }
      else {
        lVar12 = *(longlong *)(param_3 + 2);
        lVar13 = 0;
        do {
          if (((*(char *)(lVar12 + lVar13 * 4) != -1) || (*(char *)(lVar12 + 1 + lVar13 * 4) != -1))
             || (*(char *)(lVar12 + 2 + lVar13 * 4) != -1)) goto LAB_140114354;
          lVar13 = lVar13 + 1;
        } while (iVar8 != lVar13);
      }
      FUN_1400fbed0("Empty destination palette");
    }
  }
  puVar9 = (uint *)0x0;
LAB_14011425f:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_108)) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_108);
}

