/**
 * Function: vulkan_createframebuffersandrenderpasses
 * Address:  1404353f0
 * Signature: undefined vulkan_createframebuffersandrenderpasses(void)
 * Body size: 4810 bytes
 */


int vulkan_createframebuffersandrenderpasses(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  longlong *plVar15;
  int *piVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  longlong local_150;
  uint local_144;
  uint local_140;
  uint local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong lStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8 [4];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  int iStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_198;
  lVar20 = *(longlong *)(param_1 + 0x2c0);
  FUN_1404379e0(lVar20);
  (*DAT_1416f1508)(*(undefined8 *)(lVar20 + 0x650));
  video_subsystem_has_not_been_initialized(*(undefined8 *)(param_1 + 0x100),&local_13c,&local_140);
  lVar2 = *(longlong *)(param_1 + 0x2c0);
  iVar7 = (*DAT_1416f1698)(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x18),lVar2 + 0x6a8
                          );
  if (iVar7 != 0) {
    cVar6 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
    if (cVar6 != '\0') {
      uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(6,"%s: %s","vkGetPhysicalDeviceSurfaceCapabilitiesKHR()",uVar11);
    }
    uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
    pcVar14 = "vkGetPhysicalDeviceSurfaceCapabilitiesKHR()";
    goto LAB_1404354cc;
  }
  lVar19 = *(longlong *)(lVar2 + 0x2880);
  if (lVar19 != 0) {
    if (*(int *)(lVar2 + 0x2874) != 0) {
      uVar17 = 0;
      do {
        (*DAT_1416f1478)(*(undefined8 *)(lVar2 + 0x660),
                         *(undefined8 *)(*(longlong *)(lVar2 + 0x2880) + uVar17 * 8),0);
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(uint *)(lVar2 + 0x2874));
      lVar19 = *(longlong *)(lVar2 + 0x2880);
    }
    FUN_140160cf0(lVar19);
    *(undefined8 *)(lVar2 + 0x2880) = 0;
  }
  lVar19 = *(longlong *)(lVar2 + 0x6a0);
  if (lVar19 != 0) {
    uVar22 = *(uint *)(lVar2 + 0x2874);
    if (uVar22 != 0) {
      uVar17 = 0;
      do {
        lVar19 = *(longlong *)(*(longlong *)(lVar2 + 0x6a0) + uVar17 * 8);
        if (lVar19 != 0) {
          (*DAT_1416f1598)(*(undefined8 *)(lVar2 + 0x660),lVar19,0);
          uVar22 = *(uint *)(lVar2 + 0x2874);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar22);
      lVar19 = *(longlong *)(lVar2 + 0x6a0);
    }
    FUN_140160cf0(lVar19);
    *(undefined8 *)(lVar2 + 0x6a0) = 0;
  }
  if (*(longlong *)(lVar2 + 0x688) != 0) {
    (*DAT_1416f1718)(*(undefined8 *)(lVar2 + 0x660),*(undefined8 *)(lVar2 + 0x680),0);
    FUN_140160cf0(*(undefined8 *)(lVar2 + 0x688));
    *(undefined8 *)(lVar2 + 0x688) = 0;
    *(undefined8 *)(lVar2 + 0x698) = 0;
    *(undefined4 *)(lVar2 + 0x690) = 0;
  }
  lVar19 = *(longlong *)(lVar2 + 0x6f8);
  if (lVar19 != 0) {
    uVar22 = *(uint *)(lVar2 + 0x2874);
    if (uVar22 != 0) {
      uVar17 = 0;
      do {
        lVar19 = *(longlong *)(*(longlong *)(lVar2 + 0x6f8) + uVar17 * 8);
        if (lVar19 != 0) {
          (*DAT_1416f15a0)(*(undefined8 *)(lVar2 + 0x660),lVar19,0);
          uVar22 = *(uint *)(lVar2 + 0x2874);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar22);
      lVar19 = *(longlong *)(lVar2 + 0x6f8);
    }
    FUN_140160cf0(lVar19);
    *(undefined8 *)(lVar2 + 0x6f8) = 0;
  }
  lVar19 = *(longlong *)(lVar2 + 0x2820);
  if (lVar19 != 0) {
    if (*(int *)(lVar2 + 0x2874) != 0) {
      uVar17 = 0;
      do {
        lVar19 = *(longlong *)(lVar2 + 0x2828);
        if (*(int *)(lVar19 + uVar17 * 4) != 0) {
          uVar18 = 0;
          do {
            lVar3 = *(longlong *)
                     (*(longlong *)(*(longlong *)(lVar2 + 0x2820) + uVar17 * 8) + uVar18 * 8);
            if (lVar3 != 0) {
              (*DAT_1416f15d0)(*(undefined8 *)(lVar2 + 0x660),lVar3,0);
              lVar19 = *(longlong *)(lVar2 + 0x2828);
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < *(uint *)(lVar19 + uVar17 * 4));
        }
        FUN_140160cf0(*(undefined8 *)(*(longlong *)(lVar2 + 0x2820) + uVar17 * 8));
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(uint *)(lVar2 + 0x2874));
      lVar19 = *(longlong *)(lVar2 + 0x2820);
    }
    FUN_140160cf0(lVar19);
    *(undefined8 *)(lVar2 + 0x2820) = 0;
    FUN_140160cf0(*(undefined8 *)(lVar2 + 0x2828));
    *(undefined8 *)(lVar2 + 0x2828) = 0;
  }
  lVar19 = *(longlong *)(lVar2 + 0x2890);
  if (lVar19 != 0) {
    uVar22 = *(uint *)(lVar2 + 0x2874);
    if (uVar22 != 0) {
      uVar17 = 0;
      do {
        lVar19 = *(longlong *)(*(longlong *)(lVar2 + 0x2890) + uVar17 * 8);
        if (lVar19 != 0) {
          (*DAT_1416f15b8)(*(undefined8 *)(lVar2 + 0x660),lVar19,0);
          uVar22 = *(uint *)(lVar2 + 0x2874);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar22);
      lVar19 = *(longlong *)(lVar2 + 0x2890);
    }
    FUN_140160cf0(lVar19);
    *(undefined8 *)(lVar2 + 0x2890) = 0;
  }
  lVar19 = *(longlong *)(lVar2 + 0x2898);
  if (lVar19 != 0) {
    uVar22 = *(uint *)(lVar2 + 0x2874);
    if (uVar22 != 0) {
      uVar17 = 0;
      do {
        lVar19 = *(longlong *)(*(longlong *)(lVar2 + 0x2898) + uVar17 * 8);
        if (lVar19 != 0) {
          (*DAT_1416f15b8)(*(undefined8 *)(lVar2 + 0x660),lVar19,0);
          uVar22 = *(uint *)(lVar2 + 0x2874);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar22);
      lVar19 = *(longlong *)(lVar2 + 0x2898);
    }
    FUN_140160cf0(lVar19);
    *(undefined8 *)(lVar2 + 0x2898) = 0;
  }
  lVar19 = *(longlong *)(lVar2 + 0x27d8);
  if (lVar19 != 0) {
    if (*(int *)(lVar2 + 0x2874) != 0) {
      uVar17 = 0;
      local_150 = param_1;
      do {
        lVar19 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x27d8) + uVar17 * 8);
          lVar4 = *(longlong *)(lVar3 + 8 + lVar19);
          if (lVar4 != 0) {
            (*DAT_1416f14c0)(*(undefined8 *)(lVar2 + 0x660),lVar4,0);
            *(undefined8 *)(lVar19 + 8 + lVar3) = 0;
          }
          plVar15 = (longlong *)(lVar3 + lVar19);
          if (*plVar15 != 0) {
            (*DAT_1416f1488)(*(undefined8 *)(lVar2 + 0x660));
          }
          plVar15[2] = 0;
          plVar15[3] = 0;
          *plVar15 = 0;
          plVar15[1] = 0;
          lVar19 = lVar19 + 0x20;
        } while (lVar19 != 0x400);
        FUN_140160cf0(*(undefined8 *)(*(longlong *)(lVar2 + 0x27d8) + uVar17 * 8));
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(uint *)(lVar2 + 0x2874));
      lVar19 = *(longlong *)(lVar2 + 0x27d8);
      param_1 = local_150;
    }
    FUN_140160cf0(lVar19);
    *(undefined8 *)(lVar2 + 0x27d8) = 0;
  }
  lVar19 = *(longlong *)(lVar2 + 0x27e8);
  uVar22 = local_13c;
  if (lVar19 != 0) {
    if (*(int *)(lVar2 + 0x2874) != 0) {
      local_144 = local_13c;
      uVar17 = 0;
      local_150 = lVar20;
      do {
        if (*(int *)(*(longlong *)(lVar2 + 0x27f0) + uVar17 * 4) != 0) {
          lVar20 = 8;
          uVar18 = 0;
          do {
            lVar19 = *(longlong *)(*(longlong *)(lVar2 + 0x27e8) + uVar17 * 8);
            if (*(longlong *)(lVar19 + lVar20) != 0) {
              (*DAT_1416f14c0)(*(undefined8 *)(lVar2 + 0x660),*(longlong *)(lVar19 + lVar20),0);
              *(undefined8 *)(lVar19 + lVar20) = 0;
            }
            puVar21 = (undefined8 *)(lVar19 + lVar20);
            if (puVar21[-1] != 0) {
              (*DAT_1416f1488)(*(undefined8 *)(lVar2 + 0x660));
            }
            puVar21[1] = 0;
            puVar21[2] = 0;
            puVar21[-1] = 0;
            *puVar21 = 0;
            uVar18 = uVar18 + 1;
            lVar20 = lVar20 + 0x20;
          } while (uVar18 < *(uint *)(*(longlong *)(lVar2 + 0x27f0) + uVar17 * 4));
        }
        FUN_140160cf0(*(undefined8 *)(*(longlong *)(lVar2 + 0x27e8) + uVar17 * 8));
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(uint *)(lVar2 + 0x2874));
      lVar19 = *(longlong *)(lVar2 + 0x27e8);
      lVar20 = local_150;
      uVar22 = local_144;
    }
    FUN_140160cf0(lVar19);
    *(undefined8 *)(lVar2 + 0x27e8) = 0;
    FUN_140160cf0(*(undefined8 *)(lVar2 + 0x27f0));
    *(undefined8 *)(lVar2 + 0x27f0) = 0;
  }
  uVar9 = *(uint *)(lVar2 + 0x6ac);
  uVar8 = *(int *)(lVar2 + 0x6a8) + 2;
  uVar13 = uVar9;
  if (uVar8 < uVar9) {
    uVar13 = uVar8;
  }
  if (uVar9 == 0) {
    uVar13 = uVar8;
  }
  *(uint *)(lVar2 + 0x285c) = uVar13;
  if (*(int *)(param_1 + 0x1f0) == 0x12000500) {
    iVar7 = 0x3b9c6042;
    iVar12 = 0x61;
    uVar9 = *(uint *)(lVar2 + 0x2858);
    piVar16 = *(int **)(lVar2 + 0x6e0);
joined_r0x000140435aea:
    uVar17 = (ulonglong)uVar9;
    if (uVar17 == 1) goto LAB_140435aec;
LAB_140435b35:
    *(undefined8 *)(lVar2 + 0x2860) = *(undefined8 *)piVar16;
    *(int *)(lVar2 + 0x2864) = piVar16[1];
    if (uVar17 != 0) goto LAB_140435b5d;
LAB_140435b8f:
    uVar9 = *(uint *)(lVar2 + 0x6b8);
  }
  else {
    if (*(int *)(param_1 + 0x1f0) != 0x12002600) {
      iVar7 = 0;
      iVar12 = 0x2c;
      uVar9 = *(uint *)(lVar2 + 0x2858);
      piVar16 = *(int **)(lVar2 + 0x6e0);
      goto joined_r0x000140435aea;
    }
    iVar7 = 0x3b9c6048;
    iVar12 = 0x40;
    uVar17 = (ulonglong)*(uint *)(lVar2 + 0x2858);
    piVar16 = *(int **)(lVar2 + 0x6e0);
    if (uVar17 != 1) goto LAB_140435b35;
LAB_140435aec:
    if (*piVar16 != 0) {
      *(undefined8 *)(lVar2 + 0x2860) = *(undefined8 *)piVar16;
      *(int *)(lVar2 + 0x2864) = piVar16[1];
LAB_140435b5d:
      uVar18 = 0;
      do {
        if ((piVar16[uVar18 * 2] == iVar12) && (piVar16[uVar18 * 2 + 1] == iVar7)) {
          *(int *)(lVar2 + 0x2864) = iVar7;
          *(undefined8 *)(lVar2 + 0x2860) = *(undefined8 *)(piVar16 + uVar18 * 2);
          break;
        }
        uVar18 = uVar18 + 1;
      } while (uVar17 != uVar18);
      goto LAB_140435b8f;
    }
    *(undefined4 *)(lVar2 + 0x2864) = 0;
    *(int *)(lVar2 + 0x2860) = iVar12;
    uVar9 = *(uint *)(lVar2 + 0x6b8);
  }
  if ((uVar9 <= uVar22) && (uVar9 = *(uint *)(lVar2 + 0x6c0), uVar22 < *(uint *)(lVar2 + 0x6c0))) {
    uVar9 = uVar22;
  }
  *(uint *)(lVar2 + 0x2868) = uVar9;
  uVar22 = *(uint *)(lVar2 + 0x6bc);
  if ((*(uint *)(lVar2 + 0x6bc) <= local_140) &&
     (uVar22 = *(uint *)(lVar2 + 0x6c4), local_140 < *(uint *)(lVar2 + 0x6c4))) {
    uVar22 = local_140;
  }
  *(uint *)(lVar2 + 0x286c) = uVar22;
  iVar7 = *(int *)(lVar2 + 0x6d0);
  *(int *)(lVar2 + 0x2870) = iVar7;
  if ((iVar7 == 8) || (iVar7 == 2)) {
    *(uint *)(lVar2 + 0x2868) = uVar22;
    *(uint *)(lVar2 + 0x286c) = uVar9;
    iVar7 = -0x3b9acdec;
    if (uVar9 != 0 || uVar22 != 0) goto LAB_140435c0f;
  }
  else {
    iVar7 = -0x3b9acdec;
    if (uVar22 != 0 || uVar9 != 0) {
LAB_140435c0f:
      iVar7 = 2;
      if (*(int *)(lVar2 + 0x6ec) < 1) {
        local_c8[0] = local_c8[0] & 0xffffffff00000000;
        iVar7 = (*DAT_1416f16a8)(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x18),
                                 local_c8,0);
        if (iVar7 != 0) {
          cVar6 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          if (cVar6 != '\0') {
            uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
                    /* WARNING: Subroutine does not return */
            FUN_1400fb950(6,"%s: %s","vkGetPhysicalDeviceSurfacePresentModesKHR()",uVar11);
          }
          uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
          pcVar14 = "vkGetPhysicalDeviceSurfacePresentModesKHR()";
          goto LAB_1404354cc;
        }
        if ((local_c8[0] & 0xffffffff) == 0) {
          iVar7 = 2;
        }
        else {
          lVar19 = FUN_140160c70(local_c8[0] & 0xffffffff,4);
          iVar7 = (*DAT_1416f16a8)(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x18),
                                   local_c8,lVar19);
          if (iVar7 != 0) {
            cVar6 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
            if (cVar6 != '\0') {
              uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
                    /* WARNING: Subroutine does not return */
              FUN_1400fb950(6,"%s: %s","vkGetPhysicalDeviceSurfacePresentModesKHR()",uVar11);
            }
            uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
            FUN_1400fbed0("%s: %s","vkGetPhysicalDeviceSurfacePresentModesKHR()",uVar11);
            FUN_140160cf0(lVar19);
            goto LAB_1404354d4;
          }
          iVar7 = 2;
          if (*(int *)(lVar2 + 0x6ec) == 0) {
            if ((local_c8[0] & 0xffffffff) != 0) {
              uVar17 = 0;
              iVar12 = 2;
              do {
                iVar7 = *(int *)(lVar19 + uVar17 * 4);
                iVar5 = iVar7;
                if (iVar7 != 1) {
                  if (iVar7 == 0) break;
                  iVar5 = 1;
                  if ((iVar12 != 1) && (iVar5 = iVar12, iVar7 == 3)) {
                    iVar5 = iVar7;
                  }
                }
                iVar7 = iVar5;
                uVar17 = uVar17 + 1;
                iVar12 = iVar7;
              } while ((local_c8[0] & 0xffffffff) != uVar17);
            }
          }
          else if ((*(int *)(lVar2 + 0x6ec) == -1) && ((local_c8[0] & 0xffffffff) != 0)) {
            uVar17 = 0;
            do {
              if (*(int *)(lVar19 + uVar17 * 4) == 3) {
                iVar7 = 3;
                break;
              }
              uVar17 = uVar17 + 1;
            } while ((local_c8[0] & 0xffffffff) != uVar17);
          }
          FUN_140160cf0(lVar19);
        }
      }
      local_c8[1] = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_8c = 0;
      local_c8[2] = 0;
      local_c8[0] = 0x3b9acde8;
      local_c8[3] = *(undefined8 *)(lVar2 + 0x18);
      local_a8 = *(undefined8 *)(lVar2 + 0x285c);
      uStack_a0 = *(undefined4 *)(lVar2 + 0x2864);
      uStack_9c = (undefined4)*(undefined8 *)(lVar2 + 0x2868);
      uStack_98 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x2868) >> 0x20);
      uStack_94 = 1;
      uStack_90 = 0x12;
      local_78 = (ulonglong)
                 CONCAT14((*(uint *)(*(longlong *)(param_1 + 0x100) + 0x48) & 0x40000000) == 0,
                          *(undefined4 *)(lVar2 + 0x2870));
      _iStack_70 = CONCAT44(1,iVar7);
      local_68 = *(longlong *)(lVar2 + 0x678);
      iVar7 = (*DAT_1416f1700)(*(undefined8 *)(lVar2 + 0x660),local_c8,0,
                               (undefined8 *)(lVar2 + 0x678));
      if (local_68 != 0) {
        (*DAT_1416f1590)(*(undefined8 *)(lVar2 + 0x660),local_68,0);
      }
      if (iVar7 == 0) {
        FUN_140160cf0(*(undefined8 *)(lVar2 + 0x2878));
        *(undefined8 *)(lVar2 + 0x2878) = 0;
        puVar1 = (uint *)(lVar2 + 0x2874);
        iVar7 = (*DAT_1416f1710)(*(undefined8 *)(lVar2 + 0x660),*(undefined8 *)(lVar2 + 0x678),
                                 puVar1,0);
        if (iVar7 == 0) {
          uVar11 = FUN_140160c40((ulonglong)*(uint *)(lVar2 + 0x2874) << 3);
          *(undefined8 *)(lVar2 + 0x2878) = uVar11;
          iVar7 = (*DAT_1416f1710)(*(undefined8 *)(lVar2 + 0x660),*(undefined8 *)(lVar2 + 0x678),
                                   puVar1,uVar11);
          if (iVar7 == 0) {
            uStack_110 = 0;
            local_108 = 0;
            lStack_100 = 0;
            local_118 = 0xf;
            uStack_f0 = 0;
            local_e8 = 0;
            uStack_e0 = 1;
            uStack_d0 = 1;
            local_d8 = 1;
            _local_f8 = CONCAT44(*(undefined4 *)(lVar2 + 0x2860),1);
            uVar11 = FUN_140160c70(*(undefined4 *)(lVar2 + 0x2874),8);
            *(undefined8 *)(lVar2 + 0x2880) = uVar11;
            FUN_140160cf0(*(undefined8 *)(lVar2 + 0x2888));
            uVar11 = FUN_140160c70(*(undefined4 *)(lVar2 + 0x2874),4);
            *(undefined8 *)(lVar2 + 0x2888) = uVar11;
            if (*(int *)(lVar2 + 0x2874) == 0) {
              uVar22 = 0;
            }
            else {
              lVar19 = 0;
              uVar17 = 0;
              do {
                lStack_100 = *(longlong *)(*(longlong *)(lVar2 + 0x2878) + lVar19);
                iVar7 = (*DAT_1416f1470)(*(undefined8 *)(lVar2 + 0x660),&local_118,0,
                                         *(longlong *)(lVar2 + 0x2880) + lVar19);
                if (iVar7 != 0) {
                  FUN_140439470(param_1);
                  cVar6 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
                  if (cVar6 != '\0') {
                    uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
                    /* WARNING: Subroutine does not return */
                    FUN_1400fb950(6,"%s: %s","vkCreateImageView()",uVar11);
                  }
                  uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
                  pcVar14 = "vkCreateImageView()";
                  goto LAB_1404354cc;
                }
                *(undefined4 *)(*(longlong *)(lVar2 + 0x2888) + uVar17 * 4) = 0;
                uVar17 = uVar17 + 1;
                uVar22 = *(uint *)(lVar2 + 0x2874);
                lVar19 = lVar19 + 8;
              } while (uVar17 < uVar22);
            }
            uStack_110 = 0;
            local_118 = 0x28;
            local_108 = *(undefined8 *)(lVar2 + 0x680);
            lStack_100 = (ulonglong)uVar22 << 0x20;
            uVar11 = FUN_140160c70(uVar22,8);
            *(undefined8 *)(lVar2 + 0x688) = uVar11;
            iVar7 = (*DAT_1416f16e0)(*(undefined8 *)(lVar2 + 0x660),&local_118,uVar11);
            if (iVar7 == 0) {
              uVar11 = FUN_140160c70(*(undefined4 *)(lVar2 + 0x2874),8);
              *(undefined8 *)(lVar2 + 0x6a0) = uVar11;
              if (*(int *)(lVar2 + 0x2874) != 0) {
                lVar19 = 0;
                uVar17 = 0;
                do {
                  uStack_130 = 0;
                  local_138 = 8;
                  local_128 = 1;
                  iVar7 = (*DAT_1416f16f0)(*(undefined8 *)(lVar2 + 0x660),&local_138,0,
                                           *(longlong *)(lVar2 + 0x6a0) + lVar19);
                  if (iVar7 != 0) {
                    FUN_140439470(param_1);
                    cVar6 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
                    if (cVar6 != '\0') {
                      uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
                    /* WARNING: Subroutine does not return */
                      FUN_1400fb950(6,"%s: %s","vkCreateFence()",uVar11);
                    }
                    uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
                    pcVar14 = "vkCreateFence()";
                    goto LAB_1404354cc;
                  }
                  uVar17 = uVar17 + 1;
                  lVar19 = lVar19 + 8;
                } while (uVar17 < *puVar1);
              }
              if (*(longlong *)(lVar2 + 0x700) != 0) {
                (*DAT_1416f15b0)(*(undefined8 *)(lVar2 + 0x660),*(longlong *)(lVar2 + 0x700),0);
                *(undefined8 *)(lVar2 + 0x700) = 0;
              }
              if (*(longlong *)(lVar2 + 0x708) != 0) {
                (*DAT_1416f15b0)(*(undefined8 *)(lVar2 + 0x660),*(longlong *)(lVar2 + 0x708),0);
                *(undefined8 *)(lVar2 + 0x708) = 0;
              }
              local_168 = FUN_140160c70(*(undefined4 *)(lVar2 + 0x2874),8);
              *(undefined8 *)(lVar2 + 0x6f8) = local_168;
              local_170 = *(undefined8 *)(lVar2 + 0x2880);
              local_178 = *(undefined4 *)(lVar2 + 0x2874);
              local_160 = lVar2 + 0x700;
              iVar7 = sdl_render_vulkan_debug
                                (*(undefined8 *)(param_1 + 0x2c0),*(undefined4 *)(lVar2 + 0x2868),
                                 *(undefined4 *)(lVar2 + 0x286c),*(undefined4 *)(lVar2 + 0x2860));
              if (iVar7 == 0) {
                uVar11 = FUN_140160c70(*(undefined4 *)(lVar2 + 0x2874),8);
                *(undefined8 *)(lVar2 + 0x2820) = uVar11;
                uVar11 = FUN_140160c70(*(undefined4 *)(lVar2 + 0x2874),4);
                *(undefined8 *)(lVar2 + 0x2828) = uVar11;
                if (*(int *)(lVar2 + 0x2874) == 0) {
                  uVar17 = 0;
                }
                else {
                  uVar18 = 0;
                  do {
                    *(undefined4 *)(*(longlong *)(lVar2 + 0x2828) + uVar18 * 4) = 1;
                    uVar11 = FUN_140160c70(1,8);
                    *(undefined8 *)(*(longlong *)(lVar2 + 0x2820) + uVar18 * 8) = uVar11;
                    uVar11 = sdl_render_vulkan_debug(*(undefined8 *)(lVar2 + 0x660));
                    **(undefined8 **)(*(longlong *)(lVar2 + 0x2820) + uVar18 * 8) = uVar11;
                    uVar18 = uVar18 + 1;
                    uVar17 = (ulonglong)*(uint *)(lVar2 + 0x2874);
                  } while (uVar18 < uVar17);
                }
                uVar11 = FUN_140160c70(uVar17,8);
                *(undefined8 *)(lVar2 + 0x2890) = uVar11;
                uVar11 = FUN_140160c70(*(undefined4 *)(lVar2 + 0x2874),8);
                *(undefined8 *)(lVar2 + 0x2898) = uVar11;
                if (*(int *)(lVar2 + 0x2874) == 0) {
                  uVar17 = 0;
                }
                else {
                  uVar18 = 0;
                  do {
                    uVar11 = sdl_render_vulkan_debug(*(undefined8 *)(lVar2 + 0x660));
                    *(undefined8 *)(*(longlong *)(lVar2 + 0x2890) + uVar18 * 8) = uVar11;
                    if (*(longlong *)(*(longlong *)(lVar2 + 0x2890) + uVar18 * 8) == 0) {
LAB_1404365d1:
                      FUN_140439470(param_1);
                      iVar7 = -0xd;
                      goto LAB_1404354d4;
                    }
                    uVar11 = sdl_render_vulkan_debug(*(undefined8 *)(lVar2 + 0x660));
                    *(undefined8 *)(*(longlong *)(lVar2 + 0x2898) + uVar18 * 8) = uVar11;
                    if (*(longlong *)(*(longlong *)(lVar2 + 0x2898) + uVar18 * 8) == 0)
                    goto LAB_1404365d1;
                    uVar18 = uVar18 + 1;
                    uVar17 = (ulonglong)*puVar1;
                  } while (uVar18 < uVar17);
                }
                uVar11 = FUN_140160c70(uVar17,8);
                *(undefined8 *)(lVar2 + 0x27d8) = uVar11;
                if (*(int *)(lVar2 + 0x2874) != 0) {
                  uVar17 = 0;
                  do {
                    uVar11 = FUN_140160c70(0x20,0x20);
                    *(undefined8 *)(*(longlong *)(lVar2 + 0x27d8) + uVar17 * 8) = uVar11;
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < *(uint *)(lVar2 + 0x2874));
                }
                FUN_140160cf0(*(undefined8 *)(lVar2 + 0x27e0));
                uVar11 = FUN_140160c70(*(undefined4 *)(lVar2 + 0x2874),4);
                *(undefined8 *)(lVar2 + 0x27e0) = uVar11;
                uVar11 = FUN_140160c70(*(undefined4 *)(lVar2 + 0x2874),8);
                *(undefined8 *)(lVar2 + 0x27e8) = uVar11;
                uVar11 = FUN_140160c70(*(undefined4 *)(lVar2 + 0x2874),4);
                *(undefined8 *)(lVar2 + 0x27f0) = uVar11;
                if (*(int *)(lVar2 + 0x2874) != 0) {
                  uVar17 = 0;
                  do {
                    *(undefined4 *)(*(longlong *)(lVar2 + 0x27f0) + uVar17 * 4) = 1;
                    uVar11 = FUN_140160c70(1,0x20);
                    *(undefined8 *)(*(longlong *)(lVar2 + 0x27e8) + uVar17 * 8) = uVar11;
                    iVar7 = sdl_render_vulkan_debug
                                      (lVar2,0x10000,0x10,
                                       *(undefined8 *)(*(longlong *)(lVar2 + 0x27e8) + uVar17 * 8));
                    if (iVar7 != 0) {
                      FUN_140439470(param_1);
                      goto LAB_1404354d4;
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < *puVar1);
                }
                *(undefined8 *)(lVar2 + 0x27f8) = 0xffffffff00000000;
                sdl_render_vulkan_debug(param_1);
                uVar10 = parameter_s_is_invalid(param_1);
                FUN_14014fc70(uVar10,"SDL.renderer.vulkan.swapchain_image_count",
                              *(undefined4 *)(lVar2 + 0x2874));
                iVar7 = 0;
                goto LAB_1404354db;
              }
              FUN_140439470(param_1);
              cVar6 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
              if (cVar6 != '\0') {
                uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
                    /* WARNING: Subroutine does not return */
                FUN_1400fb950(6,"%s: %s","VULKAN_CreateFramebuffersAndRenderPasses()",uVar11);
              }
              uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
              pcVar14 = "VULKAN_CreateFramebuffersAndRenderPasses()";
            }
            else {
              FUN_140439470(param_1);
              cVar6 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
              if (cVar6 != '\0') {
                uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
                    /* WARNING: Subroutine does not return */
                FUN_1400fb950(6,"%s: %s","vkAllocateCommandBuffers()",uVar11);
              }
              uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
              pcVar14 = "vkAllocateCommandBuffers()";
            }
            goto LAB_1404354cc;
          }
          FUN_140160cf0(*(undefined8 *)(lVar2 + 0x2878));
          *(undefined8 *)(lVar2 + 0x2878) = 0;
          *(undefined4 *)(lVar2 + 0x2874) = 0;
        }
        else {
          *puVar1 = 0;
        }
        cVar6 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
        if (cVar6 != '\0') {
          uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(6,"%s: %s","vkGetSwapchainImagesKHR()",uVar11);
        }
        uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
        pcVar14 = "vkGetSwapchainImagesKHR()";
      }
      else {
        *(undefined8 *)(lVar2 + 0x678) = 0;
        cVar6 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
        if (cVar6 != '\0') {
          uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(6,"%s: %s","vkCreateSwapchainKHR()",uVar11);
        }
        uVar11 = vk_error_invalid_opaque_capture_address(iVar7);
        pcVar14 = "vkCreateSwapchainKHR()";
      }
LAB_1404354cc:
      FUN_1400fbed0("%s: %s",pcVar14,uVar11);
    }
  }
LAB_1404354d4:
  *(undefined1 *)(lVar20 + 0x6e8) = 1;
LAB_1404354db:
  *(undefined1 *)(lVar20 + 0x2908) = 1;
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_198)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_198);
  }
  return iVar7;
}

