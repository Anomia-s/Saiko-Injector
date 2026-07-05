/**
 * Function: couldnt_convert_image_to_d_bpp
 * Address:  140164e00
 * Signature: undefined couldnt_convert_image_to_d_bpp(void)
 * Body size: 2027 bytes
 */


ulonglong couldnt_convert_image_to_d_bpp(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong unaff_RBP;
  undefined7 uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  uint local_54;
  int local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  local_4a = 0x4d42;
  cVar3 = FUN_140110960();
  uVar15 = (undefined7)(unaff_RBP >> 8);
  if (cVar3 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","surface");
    uVar13 = CONCAT71(uVar15,1);
  }
  else {
    if (param_2 == 0) {
      FUN_1400fbed0("Parameter \'%s\' is invalid","dst");
      uVar13 = CONCAT71(uVar15,1);
      goto LAB_1401655b3;
    }
    uVar17 = *(uint *)(param_1 + 4);
    if (uVar17 == 0 || (uVar17 & 0xf0000000) == 0x10000000) {
      lVar6 = param_1;
      if ((uVar17 & 0xf800) == 0) {
LAB_140164f36:
        if (*(longlong *)(param_1 + 0x48) == 0) {
          cVar3 = '\x01';
          if (uVar17 != 0x17401803) {
            unaff_RBP = 0x17401803;
            bVar2 = false;
            goto LAB_140164f81;
          }
        }
        else {
          cVar3 = '\x01';
          if ((uVar17 & 0xff00) != 0x800) {
            uVar13 = (ulonglong)(uVar17 >> 8 & 0xff);
            goto LAB_140164edc;
          }
        }
      }
      else {
        uVar11 = uVar17 >> 0x18 & 0xf;
        if (uVar11 - 4 < 3) {
          uVar11 = uVar17 >> 0x14 & 0xf;
          if (8 < uVar11) goto LAB_140164f2d;
          uVar11 = 0x198 >> uVar11;
joined_r0x000140164f2b:
          if ((uVar11 & 1) == 0) goto LAB_140164f2d;
        }
        else {
          if ((uVar11 - 7 < 5) && (uVar11 = uVar17 >> 0x14 & 0xf, uVar11 < 7)) {
            uVar11 = 0x6c >> uVar11;
            goto joined_r0x000140164f2b;
          }
LAB_140164f2d:
          if ((*(byte *)(param_1 + 0x101) & 4) == 0) goto LAB_140164f36;
        }
        if (uVar17 != 0x16362004) {
          bVar2 = true;
          unaff_RBP = 0x16362004;
LAB_140164f81:
          uVar17 = (uint)unaff_RBP;
          lVar6 = parameter_s_is_invalid(param_1,unaff_RBP);
          if (lVar6 == 0) goto LAB_1401650ad;
          cVar3 = '\x01';
          if (!bVar2) goto LAB_140164fb0;
        }
        cVar3 = FUN_1401106d0("SDL_BMP_SAVE_LEGACY_FORMAT",0);
      }
LAB_140164fb0:
      cVar4 = parameter_s_is_invalid(lVar6);
      uVar13 = CONCAT71((int7)(unaff_RBP >> 8),1);
      if (cVar4 != '\0') {
        uVar17 = (uint)*(byte *)(*(longlong *)(lVar6 + 0x38) + 5) * *(int *)(lVar6 + 8);
        lVar7 = parameter_s_is_invalid(param_2);
        if ((((-1 < lVar7) && (lVar8 = parameter_s_is_invalid(param_2,&local_4a,2), lVar8 == 2)) &&
            (cVar4 = parameter_s_is_invalid(param_2,0), cVar4 != '\0')) &&
           ((cVar4 = parameter_s_is_invalid(param_2,0), cVar4 != '\0' &&
            (cVar4 = parameter_s_is_invalid(param_2,0), cVar4 != '\0')))) {
          local_88 = local_88 & 0xffffffff00000000;
          cVar4 = parameter_s_is_invalid(param_2,0);
          if (cVar4 != '\0') {
            if (*(undefined4 **)(lVar6 + 0x48) != (undefined4 *)0x0) {
              local_88 = CONCAT44(local_88._4_4_,**(undefined4 **)(lVar6 + 0x48));
            }
            local_50 = *(int *)(lVar6 + 0xc);
            if (cVar3 == '\0') {
              local_74 = 2;
              local_70 = 0x73524742;
              local_6c = 0xff000000;
              local_68 = 0xff;
              local_64 = 0xff00;
              local_60 = 0xff0000;
              local_5c = 3;
              uVar14 = 0x7c;
            }
            else {
              local_5c = 0;
              uVar14 = 0x28;
              local_60 = 0;
              local_64 = 0;
              local_68 = 0;
              local_6c = 0;
              local_70 = 0;
              local_74 = 0;
            }
            local_54 = (uint)*(byte *)(*(longlong *)(lVar6 + 0x38) + 4);
            local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar6 + 8));
            local_58 = *(int *)(lVar6 + 0x10) * local_50;
            cVar4 = parameter_s_is_invalid(param_2,uVar14);
            if ((((((cVar4 != '\0') &&
                   (cVar4 = parameter_s_is_invalid(param_2,local_80 & 0xffffffff), cVar4 != '\0'))
                  && ((cVar4 = parameter_s_is_invalid(param_2,local_50), cVar4 != '\0' &&
                      (((cVar4 = parameter_s_is_invalid(param_2,1), cVar4 != '\0' &&
                        (cVar4 = parameter_s_is_invalid(param_2,local_54), cVar4 != '\0')) &&
                       (cVar4 = parameter_s_is_invalid(param_2,local_5c), cVar4 != '\0')))))) &&
                 ((cVar4 = parameter_s_is_invalid(param_2,local_58), cVar4 != '\0' &&
                  (cVar4 = parameter_s_is_invalid(param_2,0), cVar4 != '\0')))) &&
                ((cVar4 = parameter_s_is_invalid(param_2,0), cVar4 != '\0' &&
                 ((cVar4 = parameter_s_is_invalid(param_2,local_88 & 0xffffffff), cVar4 != '\0' &&
                  (cVar4 = parameter_s_is_invalid(param_2,0), cVar4 != '\0')))))) &&
               ((cVar3 != '\0' ||
                (((((cVar3 = parameter_s_is_invalid(param_2,local_60), cVar3 != '\0' &&
                    (cVar3 = parameter_s_is_invalid(param_2,local_64), cVar3 != '\0')) &&
                   (cVar3 = parameter_s_is_invalid(param_2,local_68), cVar3 != '\0')) &&
                  (((cVar3 = parameter_s_is_invalid(param_2,local_6c), cVar3 != '\0' &&
                    (cVar3 = parameter_s_is_invalid(param_2,local_70), cVar3 != '\0')) &&
                   ((cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0' &&
                    ((cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0' &&
                     (cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0')))))))) &&
                 ((cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0' &&
                  (((((((cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0' &&
                        (cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0')) &&
                       (cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0')) &&
                      ((cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0' &&
                       (cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0')))) &&
                     (cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0')) &&
                    ((cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0' &&
                     (cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0')))) &&
                   ((cVar3 = parameter_s_is_invalid(param_2,local_74), cVar3 != '\0' &&
                    (((cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0' &&
                      (cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0')) &&
                     (cVar3 = parameter_s_is_invalid(param_2,0), cVar3 != '\0')))))))))))))) {
              piVar1 = *(int **)(lVar6 + 0x48);
              if ((piVar1 != (int *)0x0) && (local_80 = (ulonglong)*piVar1, 0 < (longlong)local_80))
              {
                local_88 = *(ulonglong *)(piVar1 + 2);
                uVar16 = 0;
                do {
                  cVar3 = parameter_s_is_invalid(param_2,*(undefined1 *)(local_88 + 2 + uVar16 * 4))
                  ;
                  if (((cVar3 == '\0') ||
                      (cVar3 = parameter_s_is_invalid
                                         (param_2,*(undefined1 *)(local_88 + 1 + uVar16 * 4)),
                      cVar3 == '\0')) ||
                     ((cVar3 = parameter_s_is_invalid
                                         (param_2,*(undefined1 *)(local_88 + uVar16 * 4)),
                      cVar3 == '\0' ||
                      (cVar3 = parameter_s_is_invalid
                                         (param_2,*(undefined1 *)(local_88 + 3 + uVar16 * 4)),
                      cVar3 == '\0')))) goto LAB_14016558c;
                  uVar16 = uVar16 + 1;
                } while (local_80 != uVar16);
              }
              lVar8 = parameter_s_is_invalid(param_2);
              lVar9 = parameter_s_is_invalid(param_2,lVar7 + 10,0);
              if (-1 < lVar9) {
                cVar3 = parameter_s_is_invalid(param_2,lVar8 - lVar7 & 0xffffffff);
                if ((cVar3 != '\0') &&
                   (lVar8 = parameter_s_is_invalid(param_2,(lVar8 - lVar7 & 0xffffffffU) + lVar7,0),
                   -1 < lVar8)) {
                  uVar11 = *(int *)(lVar6 + 0x10) * *(int *)(lVar6 + 0xc);
                  if (0 < (int)uVar11) {
                    uVar16 = (ulonglong)(int)uVar17;
                    uVar17 = uVar17 & 3;
                    local_88 = (ulonglong)uVar11 + *(longlong *)(lVar6 + 0x18);
                    local_80 = uVar16;
                    if (uVar17 == 0) {
                      do {
                        local_88 = local_88 - (longlong)*(int *)(lVar6 + 0x10);
                        uVar10 = parameter_s_is_invalid(param_2,local_88,uVar16);
                        if (uVar10 != uVar16) goto LAB_14016558c;
                      } while (*(ulonglong *)(lVar6 + 0x18) < local_88);
                    }
                    else {
                      do {
                        local_88 = local_88 - (longlong)*(int *)(lVar6 + 0x10);
                        uVar16 = parameter_s_is_invalid(param_2,local_88,local_80);
                        uVar11 = uVar17 | 0xfffffffc;
                        if (uVar16 != local_80) goto LAB_14016558c;
                        do {
                          cVar3 = parameter_s_is_invalid(param_2,0);
                          if (cVar3 == '\0') goto LAB_14016558c;
                          uVar11 = uVar11 + 1;
                        } while (uVar11 != 0);
                      } while (*(ulonglong *)(lVar6 + 0x18) < local_88);
                    }
                  }
                  lVar8 = parameter_s_is_invalid(param_2);
                  if ((-1 < lVar8) &&
                     (lVar9 = parameter_s_is_invalid(param_2,lVar7 + 2,0), -1 < lVar9)) {
                    cVar3 = parameter_s_is_invalid(param_2,lVar8 - lVar7 & 0xffffffff);
                    if ((cVar3 != '\0') &&
                       (lVar7 = parameter_s_is_invalid
                                          (param_2,(lVar8 - lVar7 & 0xffffffffU) + lVar7,0),
                       -1 < lVar7)) {
                      FUN_140113f30(lVar6);
                      uVar13 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_14016558c:
      if (lVar6 != param_1) {
        parameter_s_is_invalid(lVar6);
      }
    }
    else {
      uVar13 = 0;
      if (*(longlong *)(param_1 + 0x48) == 0) {
        unaff_RBP = 0x17401803;
        uVar17 = 0x17401803;
        lVar6 = parameter_s_is_invalid(param_1,0x17401803);
        if (lVar6 != 0) {
          cVar3 = '\x01';
          goto LAB_140164fb0;
        }
LAB_1401650ad:
        uVar13 = (ulonglong)(uVar17 >> 8 & 0x38);
        pcVar12 = "Couldn\'t convert image to %d bpp";
        unaff_RBP = uVar13;
      }
      else {
LAB_140164edc:
        pcVar12 = "%u bpp BMP files not supported";
      }
      FUN_1400fbed0(pcVar12,uVar13);
      uVar13 = CONCAT71((int7)(unaff_RBP >> 8),1);
    }
  }
  if (param_3 == '\x01' && param_2 != 0) {
    bVar5 = FUN_1400f9140(param_2);
    uVar13 = CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 | bVar5 ^ 1);
  }
LAB_1401655b3:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_a8)) {
    return (uVar13 ^ 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
}

