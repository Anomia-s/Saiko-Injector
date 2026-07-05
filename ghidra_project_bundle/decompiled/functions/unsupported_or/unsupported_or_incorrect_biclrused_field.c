/**
 * Function: unsupported_or_incorrect_biclrused_field
 * Address:  1401641d0
 * Signature: undefined unsupported_or_incorrect_biclrused_field(void)
 * Body size: 2385 bytes
 */


longlong unsupported_or_incorrect_biclrused_field(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_94;
  ulonglong local_90;
  ulonglong local_88;
  ushort local_7c;
  ushort local_7a;
  uint local_78;
  int local_74;
  ushort local_6e;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  char local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  local_6c = 0;
  local_6e = 0;
  local_74 = 0;
  local_78 = 0;
  if (param_1 == 0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","src");
    lVar7 = 0;
  }
  else {
    lVar6 = parameter_s_is_invalid(param_1);
    if (lVar6 < 0) {
LAB_14016429f:
      lVar7 = 0;
    }
    else {
      FUN_1400fc040();
      lVar7 = parameter_s_is_invalid(param_1,local_4a,2);
      if (lVar7 != 2) goto LAB_14016429f;
      iVar2 = strncmp(local_4a,"BM",2);
      if (iVar2 != 0) {
        FUN_1400fbed0("File is not a Windows BMP file");
        goto LAB_14016429f;
      }
      lVar7 = 0;
      cVar1 = parameter_s_is_invalid(param_1,0);
      if (cVar1 != '\0') {
        lVar7 = 0;
        cVar1 = parameter_s_is_invalid(param_1,0);
        if (cVar1 != '\0') {
          lVar7 = 0;
          cVar1 = parameter_s_is_invalid(param_1,0);
          if (cVar1 != '\0') {
            cVar1 = parameter_s_is_invalid(param_1,&local_60);
            if ((cVar1 != '\0') &&
               (cVar1 = parameter_s_is_invalid(param_1,&local_64), cVar1 != '\0')) {
              if (local_64 == 0xc) {
                cVar1 = parameter_s_is_invalid(param_1,&local_7a);
                if ((cVar1 != '\0') &&
                   (((cVar1 = parameter_s_is_invalid(param_1,&local_7c), cVar1 != '\0' &&
                     (cVar1 = parameter_s_is_invalid(param_1,0), cVar1 != '\0')) &&
                    (cVar1 = parameter_s_is_invalid(param_1,&local_6e), cVar1 != '\0')))) {
                  local_68 = (uint)local_7a;
                  local_6c = (uint)local_7c;
                  local_74 = 0;
                  local_78 = 0;
LAB_140164520:
                  uVar3 = local_6c;
                  if (local_6c == 0 || (int)local_68 < 1) {
                    FUN_1400fbed0("BMP file with bad dimensions (%dx%d)",local_68,local_6c);
                  }
                  else {
                    if ((int)local_6c < 0) {
                      local_6c = -local_6c;
                    }
                    uVar8 = out_of_memory();
                    iVar2 = FUN_1400fd200(uVar8,&DAT_1413a2ad6);
                    if (iVar2 == 0) {
                      if ((local_6e < 8) && ((0xe9U >> (local_6e & 0x1f) & 1) != 0)) {
                        FUN_1400fbed0("%u bpp BMP images are not supported");
                      }
                      else {
                        if (local_74 == 0) {
                          local_94 = 0;
                          if (local_6e - 0xf < 2) {
                            local_58 = 0x1f;
                            local_54 = 0x3e0;
                            local_50 = 0x7c00;
                          }
                          else if (local_6e == 0x20) {
                            local_5c = 0xff000000;
                            local_94 = 1;
                            local_58 = 0xff;
                            local_54 = 0xff00;
                            local_50 = 0xff0000;
                          }
                          else if (local_6e == 0x18) {
                            local_58 = 0xff;
                            local_54 = 0xff00;
                            local_50 = 0xff0000;
                            local_94 = 0;
                          }
                        }
                        else {
                          local_94 = 0;
                        }
                        local_a8 = local_5c;
                        uVar4 = FUN_140155c70(local_6e,local_50,local_54,local_58);
                        lVar7 = height_pitch_would_overflow(local_68,local_6c,uVar4);
                        if (lVar7 != 0) {
                          uVar5 = *(uint *)(lVar7 + 4);
                          if (((uVar5 == 0 || (uVar5 & 0xf0000000) == 0x10000000) &&
                              (uVar5 = uVar5 >> 0x18 & 0xf, uVar5 < 0xd)) &&
                             ((0x100eU >> uVar5 & 1) != 0)) {
                            puVar9 = (uint *)the_surface_is_not_indexed_format(lVar7);
                            if (puVar9 != (uint *)0x0) {
                              lVar10 = parameter_s_is_invalid
                                                 (param_1,lVar6 + (ulonglong)local_64 + 0xe,0);
                              if (lVar10 < 0) goto LAB_140164894;
                              if (local_6e < 0x20) {
                                if (local_78 == 0) {
                                  local_78 = 1 << ((byte)local_6e & 0x1f);
                                }
                                if ((local_78 <= *puVar9) ||
                                   (local_78 = 1 << ((byte)local_6e & 0x1f), local_78 <= *puVar9)) {
                                  *puVar9 = local_78;
                                  if (local_64 == 0xc) {
                                    if (0 < (int)local_78) {
                                      lVar10 = 0;
                                      lVar13 = 0;
                                      do {
                                        cVar1 = parameter_s_is_invalid
                                                          (param_1,*(longlong *)(puVar9 + 2) +
                                                                   lVar10 + 2);
                                        if (((cVar1 == '\0') ||
                                            (cVar1 = parameter_s_is_invalid
                                                               (param_1,*(longlong *)(puVar9 + 2) +
                                                                        lVar10 + 1), cVar1 == '\0'))
                                           || (cVar1 = parameter_s_is_invalid
                                                                 (param_1,*(longlong *)(puVar9 + 2)
                                                                          + lVar10), cVar1 == '\0'))
                                        goto LAB_1401642a2;
                                        *(undefined1 *)(*(longlong *)(puVar9 + 2) + 3 + lVar10) =
                                             0xff;
                                        lVar13 = lVar13 + 1;
                                        lVar10 = lVar10 + 4;
                                      } while (lVar13 < (int)*puVar9);
                                    }
                                  }
                                  else if (0 < (int)local_78) {
                                    lVar10 = 3;
                                    lVar13 = 0;
                                    do {
                                      cVar1 = parameter_s_is_invalid
                                                        (param_1,*(longlong *)(puVar9 + 2) + lVar10
                                                                 + -1);
                                      if ((((cVar1 == '\0') ||
                                           (cVar1 = parameter_s_is_invalid
                                                              (param_1,*(longlong *)(puVar9 + 2) +
                                                                       lVar10 + -2), cVar1 == '\0'))
                                          || (cVar1 = parameter_s_is_invalid
                                                                (param_1,*(longlong *)(puVar9 + 2) +
                                                                         lVar10 + -3), cVar1 == '\0'
                                             )) || (cVar1 = parameter_s_is_invalid
                                                                      (param_1,*(longlong *)
                                                                                (puVar9 + 2) +
                                                                               lVar10),
                                                   cVar1 == '\0')) goto LAB_1401642a2;
                                      *(undefined1 *)(*(longlong *)(puVar9 + 2) + lVar10) = 0xff;
                                      lVar13 = lVar13 + 1;
                                      lVar10 = lVar10 + 4;
                                    } while (lVar13 < (int)*puVar9);
                                  }
                                  goto LAB_140164840;
                                }
                                FUN_1400fbed0("Unsupported or incorrect biClrUsed field");
                              }
                              else {
                                FUN_1400fbed0("Unsupported or incorrect biBitCount field");
                              }
                            }
                          }
                          else {
LAB_140164840:
                            lVar10 = parameter_s_is_invalid(param_1,lVar6 + (ulonglong)local_60,0);
                            if (lVar10 < 0) {
LAB_140164894:
                              FUN_1400fbed0("Error seeking in datastream");
                            }
                            else {
                              if (1 < local_74 - 1U) {
                                local_88 = *(ulonglong *)(lVar7 + 0x18);
                                lVar10 = (longlong)*(int *)(lVar7 + 0x10);
                                local_90 = *(int *)(lVar7 + 0xc) * lVar10 + local_88;
                                iVar11 = *(int *)(lVar7 + 0x10) % 4;
                                iVar2 = 4 - iVar11;
                                if (iVar11 == 0) {
                                  iVar2 = 0;
                                }
                                uVar14 = local_90 - lVar10;
                                if ((int)uVar3 < 0) {
                                  uVar14 = local_88;
                                }
                                if ((local_88 <= uVar14) && (uVar14 < local_90)) {
                                  if (iVar2 == 0) {
                                    do {
                                      lVar13 = parameter_s_is_invalid
                                                         (param_1,uVar14,(longlong)(int)lVar10);
                                      lVar10 = (longlong)*(int *)(lVar7 + 0x10);
                                      if (lVar13 != lVar10) goto LAB_1401642a2;
                                      if (((local_6e == 8) &&
                                          (*(longlong *)(lVar7 + 0x48) != 0 && local_78 < 0x100)) &&
                                         (0 < (longlong)*(int *)(lVar7 + 8))) {
                                        lVar12 = 0;
                                        do {
                                          if ((byte)local_78 <= *(byte *)(uVar14 + lVar12))
                                          goto LAB_140164a38;
                                          lVar12 = lVar12 + 1;
                                        } while (*(int *)(lVar7 + 8) != lVar12);
                                      }
                                      lVar12 = -lVar13;
                                      if ((int)uVar3 < 0) {
                                        lVar12 = lVar13;
                                      }
                                      uVar14 = uVar14 + lVar12;
                                    } while ((local_88 <= uVar14) && (uVar14 < local_90));
                                  }
                                  else {
                                    do {
                                      lVar10 = parameter_s_is_invalid
                                                         (param_1,uVar14,(longlong)(int)lVar10);
                                      if (lVar10 != *(int *)(lVar7 + 0x10)) goto LAB_1401642a2;
                                      if (((local_6e == 8) &&
                                          (local_78 < 0x100 && *(longlong *)(lVar7 + 0x48) != 0)) &&
                                         (0 < (longlong)*(int *)(lVar7 + 8))) {
                                        lVar10 = 0;
                                        do {
                                          if ((byte)local_78 <= *(byte *)(uVar14 + lVar10))
                                          goto LAB_140164a38;
                                          lVar10 = lVar10 + 1;
                                        } while (*(int *)(lVar7 + 8) != lVar10);
                                      }
                                      iVar11 = iVar2;
                                      if (0 < iVar2) {
                                        do {
                                          cVar1 = parameter_s_is_invalid(param_1,&local_7a);
                                          if (cVar1 == '\0') goto LAB_1401642a2;
                                          iVar11 = iVar11 + -1;
                                        } while (iVar11 != 0);
                                      }
                                      lVar10 = (longlong)*(int *)(lVar7 + 0x10);
                                      lVar13 = -lVar10;
                                      if ((int)uVar3 < 0) {
                                        lVar13 = lVar10;
                                      }
                                      uVar14 = uVar14 + lVar13;
                                    } while ((local_88 <= uVar14) && (uVar14 < local_90));
                                  }
                                }
                                if ((char)local_94 != '\0') {
                                  FUN_140164d80(lVar7);
                                }
                                goto LAB_1401642d3;
                              }
                              cVar1 = FUN_140164b30(lVar7,param_1,local_74 == 1);
                              if (cVar1 != '\0') goto LAB_1401642d3;
                              FUN_1400fbed0("Error reading from datastream");
                            }
                          }
                          goto LAB_1401642a2;
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (local_64 < 0x28) goto LAB_140164520;
                cVar1 = parameter_s_is_invalid(param_1,&local_68);
                if (cVar1 != '\0') {
                  cVar1 = parameter_s_is_invalid(param_1,&local_6c);
                  lVar7 = 0;
                  if ((cVar1 != '\0') && (cVar1 = parameter_s_is_invalid(param_1,0), cVar1 != '\0'))
                  {
                    cVar1 = parameter_s_is_invalid(param_1,&local_6e);
                    if (cVar1 == '\0') goto LAB_14016429f;
                    cVar1 = parameter_s_is_invalid(param_1,&local_74);
                    lVar7 = 0;
                    if ((cVar1 != '\0') &&
                       (cVar1 = parameter_s_is_invalid(param_1,0), cVar1 != '\0')) {
                      lVar7 = 0;
                      cVar1 = parameter_s_is_invalid(param_1,0);
                      if (cVar1 != '\0') {
                        lVar7 = 0;
                        cVar1 = parameter_s_is_invalid(param_1,0);
                        if (cVar1 != '\0') {
                          cVar1 = parameter_s_is_invalid(param_1,&local_78);
                          lVar7 = 0;
                          if ((cVar1 != '\0') &&
                             (cVar1 = parameter_s_is_invalid(param_1,0), cVar1 != '\0')) {
                            if (local_64 != 0x40) {
                              if (local_74 == 3) {
                                cVar1 = parameter_s_is_invalid(param_1,&local_50);
                                if ((((cVar1 == '\0') ||
                                     (cVar1 = parameter_s_is_invalid(param_1,&local_54),
                                     cVar1 == '\0')) ||
                                    (cVar1 = parameter_s_is_invalid(param_1,&local_58),
                                    cVar1 == '\0')) ||
                                   ((0x37 < local_64 &&
                                    (cVar1 = parameter_s_is_invalid(param_1,&local_5c),
                                    cVar1 == '\0')))) goto LAB_14016429f;
                              }
                              else if (0x33 < local_64) {
                                lVar7 = 0;
                                cVar1 = parameter_s_is_invalid(param_1,0);
                                if (cVar1 != '\0') {
                                  lVar7 = 0;
                                  cVar1 = parameter_s_is_invalid(param_1,0);
                                  if (cVar1 != '\0') {
                                    lVar7 = 0;
                                    cVar1 = parameter_s_is_invalid(param_1,0);
                                    if (cVar1 != '\0') {
                                      if (0x37 < local_64) {
                                        lVar7 = 0;
                                        cVar1 = parameter_s_is_invalid(param_1,0);
                                        if (cVar1 == '\0') goto LAB_1401642a2;
                                      }
                                      goto LAB_1401644ec;
                                    }
                                  }
                                }
                                goto LAB_1401642a2;
                              }
                            }
LAB_1401644ec:
                            iVar2 = parameter_s_is_invalid(param_1);
                            uVar3 = (iVar2 - (int)lVar6) - 0xe;
                            iVar2 = local_64 - uVar3;
                            if ((local_64 < uVar3 || iVar2 == 0) ||
                               (lVar7 = parameter_s_is_invalid(param_1,iVar2,1), -1 < lVar7))
                            goto LAB_140164520;
                            goto LAB_14016429f;
                          }
                        }
                      }
                    }
                  }
                  goto LAB_1401642a2;
                }
              }
            }
            goto LAB_14016429f;
          }
        }
      }
    }
LAB_1401642a2:
    parameter_s_is_invalid(param_1,lVar6,0);
  }
  parameter_s_is_invalid(lVar7);
  lVar7 = 0;
LAB_1401642d3:
  if (param_2 == '\x01' && param_1 != 0) {
    FUN_1400f9140(param_1);
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
LAB_140164a38:
  FUN_1400fbed0("A BMP image contains a pixel with a color out of the palette");
  goto LAB_1401642a2;
}

