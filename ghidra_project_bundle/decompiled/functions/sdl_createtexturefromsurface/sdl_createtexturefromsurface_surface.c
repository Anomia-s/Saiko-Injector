/**
 * Function: sdl_createtexturefromsurface_surface
 * Address:  14011b1f0
 * Signature: undefined sdl_createtexturefromsurface_surface(void)
 * Body size: 2245 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong sdl_createtexturefromsurface_surface(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  byte bVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_98 [32];
  int local_78;
  undefined4 local_68;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  cVar2 = FUN_1403d8fa0(param_1,2);
  if (cVar2 == '\0') {
    pcVar15 = "renderer";
LAB_14011b24e:
    FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar15);
  }
  else if (*(char *)(param_1 + 0x2b8) == '\x01') {
    FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
  }
  else {
    cVar2 = FUN_140110960(param_2);
    if (cVar2 == '\0') {
      pcVar15 = "SDL_CreateTextureFromSurface(): surface";
      goto LAB_14011b24e;
    }
    uVar13 = *(uint *)(param_2 + 4);
    if (uVar13 == 0 || (uVar13 & 0xf0000000) == 0x10000000) {
      uVar4 = uVar13 >> 0x18 & 0xf;
      if (uVar4 - 4 < 3) {
        uVar13 = (uVar13 >> 0x14 & 0xf) - 3;
        bVar16 = uVar13 < 6 & 0x33U >> ((byte)uVar13 & 0x1f);
      }
      else {
        if (4 < uVar4 - 7) goto LAB_14011b30e;
        uVar13 = (uVar13 >> 0x14 & 0xf) - 2;
        bVar16 = uVar13 < 5 & 0x1bU >> ((byte)uVar13 & 0x1f);
      }
      bVar3 = 1;
      if (bVar16 == 0) goto LAB_14011b30e;
    }
    else {
LAB_14011b30e:
      bVar3 = FUN_140111ce0(param_2);
    }
    lVar9 = FUN_140111520(param_2);
    bVar16 = bVar3;
    if (lVar9 != 0) {
      FUN_140156ac0(lVar9);
      bVar16 = 1;
      if ((char)local_68 != '\0') {
        bVar16 = bVar3;
      }
    }
    uVar4 = FUN_140111170(param_2);
    uVar13 = *(uint *)(param_2 + 4);
    if (uVar13 == 0 || (uVar13 & 0xf0000000) == 0x10000000) {
      uVar5 = uVar13 >> 0x18 & 0xf;
      if (2 < uVar5 - 4) {
        if ((uVar5 - 7 < 5) && (uVar5 = uVar13 >> 0x14 & 0xf, uVar5 < 7)) {
          uVar14 = 0x6c;
          goto LAB_14011b3b3;
        }
        goto LAB_14011b3c9;
      }
      uVar5 = uVar13 >> 0x14 & 0xf;
      if (8 < uVar5) goto LAB_14011b3c9;
      uVar14 = 0x198;
LAB_14011b3b3:
      if ((uVar14 >> uVar5 & 1) == 0) goto LAB_14011b3c9;
      iVar7 = *(int *)(param_1 + 0xf8);
joined_r0x00014011b433:
      if (0 < (longlong)iVar7) {
        lVar9 = 0;
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0xf0) + lVar9 * 4) == uVar13) {
            uVar5 = uVar13;
            if (uVar13 != 0) goto LAB_14011b612;
            uVar13 = 0;
            goto LAB_14011b500;
          }
          lVar9 = lVar9 + 1;
        } while (iVar7 != lVar9);
      }
LAB_14011b451:
      if (((uVar13 & 0xff0f0000) == 0x16070000) && (0 < (longlong)*(int *)(param_1 + 0xf8))) {
        lVar9 = 0;
        do {
          uVar5 = *(uint *)(*(longlong *)(param_1 + 0xf0) + lVar9 * 4);
          if ((uVar5 & 0xff0f0000) == 0x16070000) goto LAB_14011b612;
          lVar9 = lVar9 + 1;
        } while (*(int *)(param_1 + 0xf8) != lVar9);
      }
      if (uVar13 == 0 || (uVar13 & 0xf0000000) == 0x10000000) goto LAB_14011b500;
    }
    else {
LAB_14011b3c9:
      cVar2 = FUN_140111ce0(param_2);
      uVar13 = *(uint *)(param_2 + 4);
      if (cVar2 == '\0') {
        iVar7 = *(int *)(param_1 + 0xf8);
        goto joined_r0x00014011b433;
      }
      if (uVar13 != 0x16161804) {
        if (uVar13 == 0x16561804) {
          uVar13 = 0x16561804;
          if (0 < (longlong)*(int *)(param_1 + 0xf8)) {
            lVar9 = 0;
            do {
              if (*(int *)(*(longlong *)(param_1 + 0xf0) + lVar9 * 4) == 0x16762004) {
                uVar5 = 0x16762004;
                goto LAB_14011b612;
              }
              lVar9 = lVar9 + 1;
            } while (*(int *)(param_1 + 0xf8) != lVar9);
          }
          goto LAB_14011b500;
        }
        goto LAB_14011b451;
      }
      uVar13 = 0x16161804;
      if (0 < (longlong)*(int *)(param_1 + 0xf8)) {
        lVar9 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 0xf0) + lVar9 * 4) == 0x16362004) {
            uVar5 = 0x16362004;
            goto LAB_14011b612;
          }
          lVar9 = lVar9 + 1;
        } while (*(int *)(param_1 + 0xf8) != lVar9);
      }
LAB_14011b500:
      if (((uVar13 & 0xf0f0000) == 0x6070000 || (uVar13 & 0xe000000) == 0xa000000) &&
         (0 < (longlong)*(int *)(param_1 + 0xf8))) {
        lVar9 = 0;
        do {
          uVar5 = *(uint *)(*(longlong *)(param_1 + 0xf0) + lVar9 * 4);
          if ((uVar5 & 0xfe000000) == 0x1a000000) goto LAB_14011b612;
          lVar9 = lVar9 + 1;
        } while (*(int *)(param_1 + 0xf8) != lVar9);
      }
    }
    uVar13 = **(uint **)(param_1 + 0xf0);
    uVar5 = uVar13;
    if (0 < (longlong)*(int *)(param_1 + 0xf8)) {
      lVar9 = 0;
      do {
        uVar5 = (*(uint **)(param_1 + 0xf0))[lVar9];
        if (uVar5 == 0 || (uVar5 & 0xf0000000) == 0x10000000) {
          uVar14 = uVar5 >> 0x18 & 0xf;
          if (uVar14 - 4 < 3) {
            bVar3 = ((uVar5 >> 0x14 & 0xf) - 3 & 0xfffffffa) == 0;
          }
          else if (uVar14 - 7 < 5) {
            bVar3 = (byte)(0x6c >> ((byte)(uVar5 >> 0x14) & 0xf));
          }
          else {
            bVar3 = 0;
          }
          if (bVar16 == (bVar3 & 1)) break;
        }
        lVar9 = lVar9 + 1;
        uVar5 = uVar13;
      } while (*(int *)(param_1 + 0xf8) != lVar9);
    }
LAB_14011b612:
    uVar13 = 0;
    if (((uVar4 == 0x12000500 || (uVar4 & 0x3e0) == 0x200) &&
        (uVar13 = 0x12000500, (uVar5 & 0xfe000000) != 0x1a000000)) &&
       (uVar13 = 0x120005a0, (uVar5 & 0xff0f0000) == 0x16070000)) {
      uVar13 = 0x12002600;
    }
    uVar6 = FUN_14014f270();
    FUN_14014fc70(uVar6,"SDL.texture.create.colorspace",uVar13);
    if (uVar4 == uVar13) {
      uVar17 = FUN_1401111d0(param_2,uVar4);
      FUN_14014fcc0(uVar6,"SDL.texture.create.SDR_white_point",uVar17);
    }
    uVar17 = FUN_140111260(param_2,uVar4);
    FUN_14014fcc0(uVar6,"SDL.texture.create.HDR_headroom",uVar17);
    FUN_14014fc70(uVar6,"SDL.texture.create.format",(longlong)(int)uVar5);
    FUN_14014fc70(uVar6,"SDL.texture.create.access",0);
    FUN_14014fc70(uVar6,"SDL.texture.create.width",(longlong)*(int *)(param_2 + 8));
    FUN_14014fc70(uVar6,"SDL.texture.create.height",(longlong)*(int *)(param_2 + 0xc));
    lVar10 = texture_dimensions_are_limited_to_dxd(param_1,uVar6);
    FUN_14014f0d0(uVar6);
    lVar9 = 0;
    if (lVar10 == 0) goto LAB_14011b255;
    cVar2 = FUN_1403d8fa0(lVar10,3);
    if (cVar2 == '\0') {
      FUN_1400fbed0("Parameter \'%s\' is invalid","texture");
    }
    else {
      iVar7 = *(int *)(lVar10 + 0xec);
      if (iVar7 == 0) {
        iVar7 = FUN_14014f270();
        *(int *)(lVar10 + 0xec) = iVar7;
        if (iVar7 == 0) goto LAB_14011b866;
      }
      iVar8 = parameter_s_is_invalid(param_2);
      if (iVar8 != 0) {
        uVar11 = FUN_140150150(iVar7,"SDL.texture.format",0);
        uVar12 = FUN_140150150(iVar7,"SDL.texture.access",0);
        if ((uVar12 & 0xfffffffe) == 0) {
          uVar4 = FUN_140111170(param_2);
          uVar5 = (uint)uVar11;
          uVar13 = uVar4;
          if (((uVar4 == 0x12000500 || (uVar4 & 0x3e0) == 0x200) &&
              (uVar13 = 0x12000500, (uVar5 & 0xfe000000) != 0x1a000000)) &&
             (uVar13 = 0x120005a0, (uVar5 & 0xff0f0000) == 0x16070000)) {
            uVar13 = 0x12002600;
          }
          if ((uVar13 == uVar4) && (*(uint *)(param_2 + 4) == uVar5)) {
            if (uVar5 == 0 || (uVar5 & 0xf0000000) == 0x10000000) {
              uVar13 = (uint)(uVar11 >> 0x18) & 0xf;
              if (uVar13 - 4 < 3) {
                uVar13 = (uint)(uVar11 >> 0x14) & 0xf;
                if (uVar13 < 9) {
                  uVar4 = 0x198;
LAB_14011b8dc:
                  if (((uVar4 >> uVar13 & 1) != 0) &&
                     (cVar2 = FUN_140111ce0(param_2), cVar2 != '\0')) goto LAB_14011b8f3;
                }
              }
              else if ((uVar13 - 7 < 5) && (uVar13 = (uint)(uVar11 >> 0x14) & 0xf, uVar13 < 7)) {
                uVar4 = 0x6c;
                goto LAB_14011b8dc;
              }
            }
            if ((*param_2 & 2) == 0) {
              parameter_s_is_invalid
                        (lVar10,0,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x10));
            }
            else {
              parameter_s_is_invalid(param_2);
              parameter_s_is_invalid
                        (lVar10,0,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x10));
              FUN_140113f30(param_2);
            }
          }
          else {
LAB_14011b8f3:
            local_78 = iVar8;
            lVar9 = empty_destination_palette(param_2,uVar11 & 0xffffffff,0);
            if (lVar9 == 0) goto LAB_14011b866;
            parameter_s_is_invalid
                      (lVar10,0,*(undefined8 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x10));
            parameter_s_is_invalid(lVar9);
          }
          parameter_s_is_invalid(param_2,&local_61,&local_62,&local_63);
          auVar18._0_4_ = (float)local_61;
          auVar18._4_4_ = (float)local_62;
          auVar18._8_8_ = 0;
          auVar18 = divps(auVar18,_DAT_140dea030);
          lVar9 = lVar10;
          do {
            cVar2 = FUN_1403d8fa0(lVar9,3);
            if (cVar2 == '\0') {
              FUN_1400fbed0("Parameter \'%s\' is invalid","texture");
              break;
            }
            *(longlong *)(lVar9 + 0x28) = auVar18._0_8_;
            *(float *)(lVar9 + 0x30) = (float)local_63 / 255.0;
            lVar9 = *(longlong *)(lVar9 + 0xb0);
          } while (lVar9 != 0);
          parameter_s_is_invalid(param_2,&local_64);
          lVar9 = lVar10;
          do {
            cVar2 = FUN_1403d8fa0(lVar9,3);
            if (cVar2 == '\0') {
              FUN_1400fbed0("Parameter \'%s\' is invalid","texture");
              break;
            }
            *(float *)(lVar9 + 0x34) = (float)local_64 / 255.0;
            lVar9 = *(longlong *)(lVar9 + 0xb0);
          } while (lVar9 != 0);
          cVar2 = FUN_140111ce0(param_2);
          lVar9 = lVar10;
          if (cVar2 == '\0') {
            parameter_s_is_invalid(param_2,&local_68);
            parameter_s_is_invalid(lVar10,local_68);
          }
          else {
            do {
              cVar2 = FUN_1403d8fa0(lVar10,3);
              if (cVar2 == '\0') {
                FUN_1400fbed0("Parameter \'%s\' is invalid","texture");
                break;
              }
              *(undefined4 *)(lVar10 + 0x20) = 1;
              plVar1 = (longlong *)(lVar10 + 0xb0);
              lVar10 = *plVar1;
            } while (*plVar1 != 0);
          }
          goto LAB_14011b255;
        }
      }
    }
LAB_14011b866:
    cVar2 = FUN_1403d8fa0(lVar10,3);
    if (cVar2 == '\0') {
      pcVar15 = "texture";
      goto LAB_14011b24e;
    }
    iVar7 = *(int *)(lVar10 + 0xc);
    *(int *)(lVar10 + 0xc) = iVar7 + -1;
    if (iVar7 < 2) {
      FUN_140124dd0(lVar10,0);
    }
  }
  lVar9 = 0;
LAB_14011b255:
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_98);
  }
  return lVar9;
}

