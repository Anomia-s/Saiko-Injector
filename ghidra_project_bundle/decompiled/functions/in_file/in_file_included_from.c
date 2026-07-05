/**
 * Function: in_file_included_from
 * Address:  140939220
 * Signature: undefined in_file_included_from(void)
 * Body size: 4801 bytes
 */


void in_file_included_from
               (byte *param_1,ulonglong param_2,byte *param_3,undefined8 *param_4,char param_5,
               char param_6)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  longlong lVar13;
  byte bVar14;
  byte *pbVar15;
  ulonglong uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  byte *pbVar23;
  longlong lVar24;
  ulonglong uVar25;
  bool bVar26;
  byte bVar27;
  undefined1 auStack_298 [40];
  byte *local_270;
  byte local_261;
  undefined8 *local_260;
  byte *local_258;
  ulonglong local_250;
  byte local_248 [512];
  ulonglong local_48;
  uint uVar7;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_298;
  bVar1 = *param_1;
  uVar22 = 0xffffffffffffffff;
  switch(bVar1) {
  case 0x21:
    uVar19 = 10;
    break;
  default:
    iVar5 = strncmp((char *)param_1,"cf90-",5);
    if (iVar5 == 0) {
      uVar19 = 0x12;
    }
    else {
      iVar5 = strncmp((char *)param_1,"fortcom:",8);
      if (iVar5 == 0) {
        uVar19 = 0x11;
      }
      else {
        pcVar8 = strstr((char *)param_1,"File \"");
        if (pcVar8 != (char *)0x0) {
          pcVar8 = strstr((char *)param_1,", line ");
          uVar19 = 1;
          if (pcVar8 != (char *)0x0) break;
        }
        pcVar8 = strstr((char *)param_1," in ");
        if (pcVar8 != (char *)0x0) {
          pcVar8 = strstr((char *)param_1," on line ");
          uVar19 = 0xe;
          if (pcVar8 != (char *)0x0) break;
        }
        local_270 = param_3;
        iVar5 = strncmp((char *)param_1,"Error ",6);
        if (iVar5 == 0) {
          pcVar8 = strstr((char *)param_1," at (");
          if (pcVar8 != (char *)0x0) goto LAB_140939449;
          uVar19 = 5;
          param_3 = local_270;
        }
        else {
          cVar4 = FUN_14093a520(param_1,"Warning ");
          if ((cVar4 != '\0') && (pcVar8 = strstr((char *)param_1," at ("), pcVar8 != (char *)0x0))
          {
LAB_140939449:
            pcVar9 = strstr((char *)param_1,") : ");
            uVar19 = 5;
            if (pcVar8 < pcVar9) {
              uVar19 = 0x10;
            }
            param_3 = local_270;
            if (pcVar8 < pcVar9 || iVar5 == 0) break;
          }
          cVar4 = FUN_14093a520(param_1,"Warning ");
          uVar19 = 5;
          param_3 = local_270;
          if (cVar4 == '\0') {
            pbVar10 = (byte *)strstr((char *)param_1,"at line ");
            param_3 = local_270;
            if ((pbVar10 != (byte *)0x0) && (pbVar10 < param_1 + param_2)) {
              pbVar10 = (byte *)strstr((char *)param_1,"file ");
              uVar19 = 8;
              if (pbVar10 != (byte *)0x0 && pbVar10 < param_1 + param_2) break;
            }
            pbVar10 = (byte *)strstr((char *)param_1," at ");
            if ((pbVar10 != (byte *)0x0) && (pbVar10 < param_1 + param_2)) {
              pbVar11 = (byte *)strstr((char *)param_1," line ");
              uVar19 = 6;
              if ((pbVar10 + 4 < pbVar11 && pbVar11 < param_1 + param_2) && pbVar11 != (byte *)0x0)
              break;
            }
            if ((5 < param_2) &&
               (*(short *)(param_1 + 4) == 0x2074 && *(int *)param_1 == 0x61202020)) {
              pcVar8 = strstr((char *)param_1,":line ");
              uVar19 = 7;
              if (pcVar8 != (char *)0x0) break;
            }
            cVar4 = FUN_14093a520(param_1,"Line ");
            if (cVar4 != '\0') {
              pcVar8 = strstr((char *)param_1,", file ");
              uVar19 = 0xf;
              if (pcVar8 != (char *)0x0) break;
            }
            cVar4 = FUN_14093a520(param_1,"line ");
            if (cVar4 != '\0') {
              pcVar8 = strstr((char *)param_1," column ");
              uVar19 = 0x13;
              if (pcVar8 != (char *)0x0) break;
            }
            cVar4 = FUN_14093a520(param_1,&DAT_1413a046a);
            if ((cVar4 != '\0') && (pcVar8 = strchr((char *)param_1,0x28), pcVar8 != (char *)0x0)) {
              pcVar8 = strstr((char *)param_1,".java:");
              uVar19 = 0x14;
              if (pcVar8 != (char *)0x0) break;
            }
            cVar4 = FUN_14093a520(param_1,"In file included from ");
            uVar19 = 0x16;
            if ((cVar4 == '\0') &&
               (cVar4 = FUN_14093a520(param_1,"                 from "), cVar4 == '\0')) {
              pcVar8 = strstr((char *)param_1,"warning LNK");
              uVar19 = 3;
              if (pcVar8 == (char *)0x0) {
                bVar27 = bVar1 != 9;
                if (param_2 == 0) {
                  uVar19 = 0;
                }
                else {
                  bVar14 = 0;
                  local_250 = 0;
                  uVar16 = 0;
                  uVar22 = 0xffffffffffffffff;
                  do {
                    uVar18 = uVar16 + 1;
                    bVar12 = 0x20;
                    if (uVar18 < param_2) {
                      bVar12 = param_1[uVar18];
                    }
                    uVar25 = uVar22;
                    if (bVar14 < 0xe) {
                      bVar2 = param_1[uVar16];
                      switch(bVar14) {
                      case 0:
                        if (bVar2 == 0x28) {
                          if ((bVar1 == 9) || (bVar14 = 5, 8 < (byte)(bVar12 - 0x31))) {
LAB_14093a0a7:
                            bVar14 = 0;
                            bVar27 = bVar27 & bVar2 != 0x20;
                          }
                        }
                        else if (bVar2 == 0x3a) {
                          if ((bVar12 == 0x5c) || (bVar12 == 0x2f)) {
                            bVar14 = 0;
                          }
                          else {
                            bVar14 = 1;
                            if (bVar12 == 0x20) {
                              bVar14 = 0;
                              local_250 = 1;
                            }
                          }
                        }
                        else {
                          if ((bVar2 == 9 & bVar27) == 0) goto LAB_14093a0a7;
                          bVar14 = 0xb;
                          bVar27 = 1;
                        }
                        break;
                      case 1:
LAB_14093a068:
                        bVar14 = 0x10;
                        uVar25 = uVar22;
                        if ((byte)(bVar2 - 0x30) < 10) {
                          bVar14 = 2;
                        }
                        break;
                      case 2:
                        bVar14 = 3;
                        uVar25 = uVar18;
                        if (bVar2 != 0x3a) goto LAB_14093a068;
                        break;
                      case 3:
                        bVar14 = 3;
                        if (9 < (byte)(bVar2 - 0x30)) {
                          if (bVar2 == 0x3a) {
                            uVar22 = uVar18;
                          }
                          goto LAB_14093a1a7;
                        }
                        break;
                      case 5:
LAB_140939ebe:
                        bVar14 = 0x10;
                        if ((byte)(bVar2 - 0x30) < 10) {
                          bVar14 = 6;
                        }
                        break;
                      case 6:
                        if (bVar2 == 0x20) {
                          bVar14 = 6;
                        }
                        else if (bVar2 == 0x2c) {
                          bVar14 = 9;
                        }
                        else {
                          if (bVar2 != 0x29) goto LAB_140939ebe;
                          bVar14 = 7;
                        }
                        break;
                      case 7:
                        bVar14 = 8;
                        if (bVar12 != 0x3a || bVar2 != 0x20) {
                          if ((bVar2 == 0x20) || (bVar14 = 0x10, bVar12 == 0x20 && bVar2 == 0x3a)) {
                            local_261 = bVar27;
                            if ((bVar2 != 0x20) + uVar16 + 1 < param_2) {
                              local_260 = (undefined8 *)((ulonglong)(bVar2 != 0x20) + 1 + uVar16);
                              local_258 = param_1 + (longlong)local_260;
                              uVar16 = 0;
                              do {
                                bVar27 = local_258[uVar16];
                                uVar22 = uVar16;
                                if ((((char)bVar27 < '\0') ||
                                    (iVar5 = isalpha((int)(char)bVar27), iVar5 == 0)) ||
                                   (0x1fe < uVar16)) break;
                                uVar22 = uVar16 + 1;
                                local_248[uVar16] = bVar27;
                                lVar24 = uVar16 + 1;
                                uVar16 = uVar22;
                              } while ((ulonglong)((longlong)local_260 + lVar24) < param_2);
                            }
                            else {
                              uVar22 = 0;
                            }
                            local_248[uVar22] = 0;
                            iVar5 = FUN_140a8ce50(local_248,"error");
                            bVar14 = 8;
                            bVar27 = local_261;
                            if (((iVar5 != 0) &&
                                (iVar5 = FUN_140a8ce50(local_248,"warning"), bVar27 = local_261,
                                iVar5 != 0)) &&
                               ((iVar5 = FUN_140a8ce50(local_248,"fatal"), bVar27 = local_261,
                                iVar5 != 0 &&
                                ((iVar5 = FUN_140a8ce50(local_248,"catastrophic"),
                                 bVar27 = local_261, iVar5 != 0 &&
                                 (iVar5 = FUN_140a8ce50(local_248,&DAT_14134a9f7),
                                 bVar27 = local_261, iVar5 != 0)))))) {
                              iVar5 = FUN_140a8ce50(local_248,"remark");
                              bVar14 = (iVar5 != 0) * '\b' + 8;
                              bVar27 = local_261;
                            }
                          }
                        }
                        break;
                      case 9:
                        bVar14 = 9;
                        if (bVar2 != 0x20) {
                          if (bVar2 == 0x29) goto LAB_14093a4a0;
                          bVar14 = 0x10;
                          if ((byte)(bVar2 - 0x30) < 10) {
                            bVar14 = 9;
                          }
                        }
                        break;
                      case 0xb:
                        bVar14 = (bVar2 == 9) + 0xb;
                        break;
                      case 0xc:
                        if ((param_1[uVar16 - 1] == 9) &&
                           (((byte)(bVar2 - 0x30) < 10 || (bVar12 == 0x5e && bVar2 == 0x2f)))) {
LAB_14093a4ec:
                          uVar19 = 9;
                          param_3 = local_270;
                          goto joined_r0x0001409393a8;
                        }
                        bVar14 = (bVar12 == 0x5e && bVar2 == 0x2f) | 0xc;
                        break;
                      case 0xd:
                        bVar14 = 0xd;
                        if ((bVar2 == 0x24) && (param_1[uVar18] == 0x2f)) goto LAB_14093a4ec;
                      }
                    }
                    uVar16 = uVar18;
                    uVar22 = uVar25;
                  } while (uVar18 != param_2);
                  if (bVar14 == 4) {
LAB_14093a1a7:
                    uVar19 = 2;
                    param_3 = local_270;
                    if ((local_250 & 1) != 0) {
                      uVar19 = 8;
                    }
                  }
                  else if ((bVar14 & 0xfd) == 8) {
LAB_14093a4a0:
                    uVar19 = 3;
                    param_3 = local_270;
                  }
                  else {
                    param_3 = local_270;
                    if ((bVar14 & 0xfe) == 0xe) {
                      uVar19 = 9;
                    }
                    else if ((local_250 & 1) == 0) {
                      uVar19 = 0;
                    }
                    else {
                      pcVar8 = strstr((char *)param_1,": warning C");
                      uVar19 = (uint)(pcVar8 != (char *)0x0) * 3;
                      param_3 = local_270;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 0x2b:
    iVar5 = strncmp((char *)param_1,"+++ ",4);
    uVar19 = (uint)(iVar5 == 0) * 2 + 0xb;
    break;
  case 0x2d:
    iVar5 = strncmp((char *)param_1,"--- ",4);
    uVar19 = (iVar5 == 0) + 0xc;
    break;
  case 0x3c:
    uVar19 = 0xc;
    break;
  case 0x3e:
    uVar19 = 4;
  }
joined_r0x0001409393a8:
  if ((param_6 == '\0') || (pcVar8 = strstr((char *)param_1,"\x1b["), pcVar8 == (char *)0x0)) {
    if ((param_5 == '\0') || ((longlong)uVar22 < 0)) {
      pbVar10 = (byte *)param_4[0x3ef];
      if (param_3 != pbVar10 + -1) {
        if (param_3 < pbVar10) goto LAB_14093a2c4;
        lVar24 = param_4[0x3ee];
        pbVar11 = param_3 + 1;
        if ((0 < lVar24) && ((byte *)0xf9f < pbVar11 + (lVar24 - (longlong)pbVar10))) {
          (**(code **)(*(longlong *)*param_4 + 0x68))((longlong *)*param_4,lVar24,param_4 + 0x1fa);
          pbVar10 = (byte *)param_4[0x3ef];
          param_4[0x3f0] = param_4[0x3f0] + param_4[0x3ee];
          param_4[0x3ee] = 0;
          lVar24 = 0;
        }
        if (param_3 + (lVar24 - (longlong)pbVar10) + 1 < (byte *)0xfa0) {
          for (; pbVar10 <= param_3; pbVar10 = pbVar10 + 1) {
            lVar24 = param_4[0x3ee];
            param_4[0x3ee] = lVar24 + 1;
            *(char *)((longlong)param_4 + lVar24 + 0xfd0) = (char)uVar19;
          }
        }
        else {
          (**(code **)(*(longlong *)*param_4 + 0x60))
                    ((longlong *)*param_4,param_3 + (1 - (longlong)pbVar10),uVar19);
        }
        goto LAB_14093a2bd;
      }
    }
    else {
      pbVar11 = param_3 + (uVar22 - param_2);
      pbVar10 = (byte *)param_4[0x3ef];
      if (pbVar11 == pbVar10 + -1) {
LAB_14093a1f8:
        pbVar10 = pbVar11 + 1;
        param_4[0x3ef] = pbVar10;
      }
      else if (pbVar10 <= pbVar11) {
        lVar24 = param_4[0x3ee];
        if ((0 < lVar24) && ((byte *)0xf9f < pbVar11 + lVar24 + (1 - (longlong)pbVar10))) {
          (**(code **)(*(longlong *)*param_4 + 0x68))((longlong *)*param_4,lVar24,param_4 + 0x1fa);
          pbVar10 = (byte *)param_4[0x3ef];
          param_4[0x3f0] = param_4[0x3f0] + param_4[0x3ee];
          param_4[0x3ee] = 0;
          lVar24 = 0;
        }
        if (pbVar11 + (lVar24 - (longlong)pbVar10) + 1 < (byte *)0xfa0) {
          for (; pbVar10 <= pbVar11; pbVar10 = pbVar10 + 1) {
            lVar24 = param_4[0x3ee];
            param_4[0x3ee] = lVar24 + 1;
            *(char *)((longlong)param_4 + lVar24 + 0xfd0) = (char)uVar19;
          }
        }
        else {
          (**(code **)(*(longlong *)*param_4 + 0x60))
                    ((longlong *)*param_4,pbVar11 + (1 - (longlong)pbVar10),uVar19);
        }
        goto LAB_14093a1f8;
      }
      if (param_3 != pbVar10 + -1) {
        if (param_3 < pbVar10) goto LAB_14093a2c4;
        lVar24 = param_4[0x3ee];
        pbVar11 = param_3 + 1;
        if ((0 < lVar24) && ((byte *)0xf9f < pbVar11 + (lVar24 - (longlong)pbVar10))) {
          (**(code **)(*(longlong *)*param_4 + 0x68))((longlong *)*param_4,lVar24,param_4 + 0x1fa);
          pbVar10 = (byte *)param_4[0x3ef];
          param_4[0x3f0] = param_4[0x3f0] + param_4[0x3ee];
          param_4[0x3ee] = 0;
          lVar24 = 0;
        }
        if (param_3 + (lVar24 - (longlong)pbVar10) + 1 < (byte *)0xfa0) {
          for (; pbVar10 <= param_3; pbVar10 = pbVar10 + 1) {
            lVar24 = param_4[0x3ee];
            param_4[0x3ee] = lVar24 + 1;
            *(undefined1 *)((longlong)param_4 + lVar24 + 0xfd0) = 0x15;
          }
        }
        else {
          (**(code **)(*(longlong *)*param_4 + 0x60))
                    ((longlong *)*param_4,param_3 + (1 - (longlong)pbVar10),0x15);
        }
        goto LAB_14093a2bd;
      }
    }
    pbVar11 = param_3 + 1;
  }
  else {
    local_270 = param_3;
    pbVar10 = (byte *)strstr((char *)param_1,"\x1b[");
    if (pbVar10 == (byte *)0x0) {
      pbVar15 = (byte *)param_4[0x3ef];
    }
    else {
      local_260 = param_4 + 0x1fa;
      local_258 = (byte *)CONCAT44(local_258._4_4_,uVar19);
      uVar22 = (ulonglong)uVar19;
      pbVar11 = local_270 + -param_2;
      do {
        if (param_1 < pbVar10) {
          pbVar23 = pbVar11 + ((int)pbVar10 - (int)param_1);
          pbVar15 = (byte *)param_4[0x3ef];
          if (pbVar23 != pbVar15 + -1) {
            if (pbVar23 < pbVar15) goto LAB_140939770;
            lVar24 = param_4[0x3ee];
            if ((0 < lVar24) && ((byte *)0xf9f < pbVar23 + lVar24 + (1 - (longlong)pbVar15))) {
              (**(code **)(*(longlong *)*param_4 + 0x68))((longlong *)*param_4,lVar24,local_260);
              pbVar15 = (byte *)param_4[0x3ef];
              param_4[0x3f0] = param_4[0x3f0] + param_4[0x3ee];
              param_4[0x3ee] = 0;
              lVar24 = 0;
            }
            if (pbVar23 + (lVar24 - (longlong)pbVar15) + 1 < (byte *)0xfa0) {
              for (; pbVar15 <= pbVar23; pbVar15 = pbVar15 + 1) {
                lVar24 = param_4[0x3ee];
                param_4[0x3ee] = lVar24 + 1;
                *(char *)((longlong)param_4 + lVar24 + 0xfd0) = (char)uVar22;
              }
            }
            else {
              (**(code **)(*(longlong *)*param_4 + 0x60))
                        ((longlong *)*param_4,pbVar23 + (1 - (longlong)pbVar15),uVar22);
            }
          }
          param_4[0x3ef] = pbVar23 + 1;
        }
LAB_140939770:
        pbVar3 = local_270;
        pbVar23 = pbVar10 + 2;
        lVar24 = 0;
        do {
          bVar1 = pbVar23[lVar24];
          lVar24 = lVar24 + 1;
          if (bVar1 == 0) break;
        } while (0x3e < (int)(char)bVar1 - 0x40U);
        pbVar17 = pbVar10 + (longlong)(pbVar11 + (lVar24 - (longlong)param_1) + 2);
        pbVar15 = (byte *)param_4[0x3ef];
        if (bVar1 == 0x4b) {
          if (pbVar10 + (longlong)(pbVar11 + lVar24 + (-(longlong)pbVar15 - (longlong)param_1)) ==
              (byte *)0xfffffffffffffffd) {
            pbVar3 = pbVar10 + (longlong)(pbVar11 + (lVar24 - (longlong)param_1) + 3);
          }
          else {
            if (pbVar17 < pbVar15) goto LAB_140939700;
            lVar13 = param_4[0x3ee];
            if ((0 < lVar13) &&
               ((byte *)0xf9f <
                pbVar10 + (longlong)
                          (pbVar11 + (lVar13 - (longlong)pbVar15) + (lVar24 - (longlong)param_1) + 3
                          ))) {
              (**(code **)(*(longlong *)*param_4 + 0x68))((longlong *)*param_4,lVar13,local_260);
              pbVar15 = (byte *)param_4[0x3ef];
              param_4[0x3f0] = param_4[0x3f0] + param_4[0x3ee];
              param_4[0x3ee] = 0;
              lVar13 = 0;
            }
            pbVar3 = pbVar10 + (longlong)(pbVar11 + (lVar24 - (longlong)param_1) + 3);
            if (pbVar10 + (longlong)
                          (pbVar11 + lVar24 + ((lVar13 - (longlong)pbVar15) - (longlong)param_1) + 3
                          ) < (byte *)0xfa0) {
              for (; pbVar15 <= pbVar17; pbVar15 = pbVar15 + 1) {
                lVar13 = param_4[0x3ee];
                param_4[0x3ee] = lVar13 + 1;
                *(undefined1 *)((longlong)param_4 + lVar13 + 0xfd0) = 0x17;
              }
            }
            else {
              (**(code **)(*(longlong *)*param_4 + 0x60))
                        ((longlong *)*param_4,
                         pbVar10 + (longlong)
                                   (pbVar11 + lVar24 + (-(longlong)pbVar15 - (longlong)param_1) + 3)
                         ,0x17);
            }
          }
          pbVar15 = pbVar3;
          param_4[0x3ef] = pbVar15;
        }
        else if (bVar1 == 0x6d) {
          if (pbVar10 + (longlong)(pbVar11 + lVar24 + (-(longlong)pbVar15 - (longlong)param_1)) ==
              (byte *)0xfffffffffffffffd) {
            pbVar3 = pbVar10 + (longlong)(pbVar11 + (lVar24 - (longlong)param_1) + 3);
LAB_140939af3:
            pbVar15 = pbVar3;
            param_4[0x3ef] = pbVar15;
          }
          else if (pbVar15 <= pbVar17) {
            lVar13 = param_4[0x3ee];
            if ((0 < lVar13) &&
               ((byte *)0xf9f <
                pbVar10 + (longlong)
                          (pbVar11 + (lVar13 - (longlong)pbVar15) + (lVar24 - (longlong)param_1) + 3
                          ))) {
              (**(code **)(*(longlong *)*param_4 + 0x68))((longlong *)*param_4,lVar13,local_260);
              pbVar15 = (byte *)param_4[0x3ef];
              param_4[0x3f0] = param_4[0x3f0] + param_4[0x3ee];
              param_4[0x3ee] = 0;
              lVar13 = 0;
            }
            pbVar3 = pbVar10 + (longlong)(pbVar11 + (lVar24 - (longlong)param_1) + 3);
            if (pbVar10 + (longlong)
                          (pbVar11 + lVar24 + ((lVar13 - (longlong)pbVar15) - (longlong)param_1) + 3
                          ) < (byte *)0xfa0) {
              for (; pbVar15 <= pbVar17; pbVar15 = pbVar15 + 1) {
                lVar13 = param_4[0x3ee];
                param_4[0x3ee] = lVar13 + 1;
                *(undefined1 *)((longlong)param_4 + lVar13 + 0xfd0) = 0x17;
              }
            }
            else {
              (**(code **)(*(longlong *)*param_4 + 0x60))
                        ((longlong *)*param_4,
                         pbVar10 + (longlong)
                                   (pbVar11 + lVar24 + (-(longlong)pbVar15 - (longlong)param_1) + 3)
                         ,0x17);
            }
            goto LAB_140939af3;
          }
          bVar1 = *pbVar23;
          uVar19 = (uint)(char)bVar1;
          uVar22 = 0x28;
          if (0x3e < uVar19 - 0x40 && bVar1 != 0) {
            uVar7 = 0;
            uVar6 = 0;
            iVar5 = 0;
            pbVar10 = pbVar23;
            uVar21 = (uint)bVar1;
            do {
              if ((byte)((char)uVar21 - 0x30U) < 10) {
                bVar26 = 9 < (byte)(pbVar10[1] - 0x30);
                pbVar11 = pbVar10 + 1;
                if (bVar26) {
                  pbVar11 = pbVar10;
                }
                iVar20 = (pbVar10[1] - 0x210) + uVar19 * 10;
                if (bVar26) {
                  iVar20 = uVar19 - 0x30;
                }
                if (iVar20 == 0) {
                  uVar6 = 0;
                  bVar1 = pbVar11[1];
                  uVar7 = uVar6;
                  iVar5 = iVar20;
                }
                else if (iVar20 == 1) {
                  bVar1 = pbVar11[1];
                  iVar5 = iVar20;
                }
                else {
                  uVar6 = uVar7;
                  if (iVar20 - 0x1eU < 8) {
                    uVar6 = iVar20 - 0x1eU;
                  }
                  bVar1 = pbVar11[1];
                  uVar7 = uVar6;
                }
              }
              else {
                bVar1 = pbVar10[1];
                pbVar11 = pbVar10;
              }
              uVar19 = (uint)(char)bVar1;
            } while ((uVar19 != 0) && (pbVar10 = pbVar11 + 1, uVar21 = uVar19, 0x3e < uVar19 - 0x40)
                    );
            uVar22 = (ulonglong)(uVar6 + iVar5 * 8 + 0x28);
          }
        }
        else {
          if (bVar1 == 0) {
            if (local_270 == pbVar15 + -1) goto LAB_140939c5e;
            if (local_270 < pbVar15) goto LAB_14093a2c4;
            lVar24 = param_4[0x3ee];
            pbVar11 = local_270 + 1;
            if ((0 < lVar24) && ((byte *)0xf9f < pbVar11 + (lVar24 - (longlong)pbVar15))) {
              (**(code **)(*(longlong *)*param_4 + 0x68))((longlong *)*param_4,lVar24,local_260);
              pbVar15 = (byte *)param_4[0x3ef];
              param_4[0x3f0] = param_4[0x3f0] + param_4[0x3ee];
              param_4[0x3ee] = 0;
              lVar24 = 0;
            }
            if (pbVar3 + (lVar24 - (longlong)pbVar15) + 1 < (byte *)0xfa0) {
              for (; pbVar15 <= pbVar3; pbVar15 = pbVar15 + 1) {
                lVar24 = param_4[0x3ee];
                param_4[0x3ee] = lVar24 + 1;
                *(undefined1 *)((longlong)param_4 + lVar24 + 0xfd0) = 0x18;
              }
            }
            else {
              (**(code **)(*(longlong *)*param_4 + 0x60))
                        ((longlong *)*param_4,pbVar3 + (1 - (longlong)pbVar15),0x18);
            }
            goto LAB_14093a2bd;
          }
          if (pbVar10 + (longlong)(pbVar11 + lVar24 + (-(longlong)pbVar15 - (longlong)param_1)) ==
              (byte *)0xfffffffffffffffd) {
            pbVar3 = pbVar10 + (longlong)(pbVar11 + (lVar24 - (longlong)param_1) + 3);
LAB_140939be4:
            pbVar15 = pbVar3;
            param_4[0x3ef] = pbVar15;
          }
          else if (pbVar15 <= pbVar17) {
            lVar13 = param_4[0x3ee];
            if ((0 < lVar13) &&
               ((byte *)0xf9f <
                pbVar10 + (longlong)
                          (pbVar11 + (lVar13 - (longlong)pbVar15) + (lVar24 - (longlong)param_1) + 3
                          ))) {
              (**(code **)(*(longlong *)*param_4 + 0x68))((longlong *)*param_4,lVar13,local_260);
              pbVar15 = (byte *)param_4[0x3ef];
              param_4[0x3f0] = param_4[0x3f0] + param_4[0x3ee];
              param_4[0x3ee] = 0;
              lVar13 = 0;
            }
            pbVar3 = pbVar10 + (longlong)(pbVar11 + (lVar24 - (longlong)param_1) + 3);
            if (pbVar10 + (longlong)
                          (pbVar11 + lVar24 + ((lVar13 - (longlong)pbVar15) - (longlong)param_1) + 3
                          ) < (byte *)0xfa0) {
              for (; pbVar15 <= pbVar17; pbVar15 = pbVar15 + 1) {
                lVar13 = param_4[0x3ee];
                param_4[0x3ee] = lVar13 + 1;
                *(undefined1 *)((longlong)param_4 + lVar13 + 0xfd0) = 0x18;
              }
            }
            else {
              (**(code **)(*(longlong *)*param_4 + 0x60))
                        ((longlong *)*param_4,
                         pbVar10 + (longlong)
                                   (pbVar11 + lVar24 + (-(longlong)pbVar15 - (longlong)param_1) + 3)
                         ,0x18);
            }
            goto LAB_140939be4;
          }
          uVar22 = (ulonglong)local_258 & 0xffffffff;
        }
LAB_140939700:
        uVar19 = (uint)uVar22;
        param_1 = pbVar23 + lVar24;
        pbVar10 = (byte *)strstr((char *)param_1,"\x1b[");
        pbVar11 = pbVar17;
      } while (pbVar10 != (byte *)0x0);
    }
    pbVar10 = local_270;
    if (local_270 == pbVar15 + -1) {
LAB_140939c5e:
      pbVar11 = local_270 + 1;
    }
    else {
      if (local_270 < pbVar15) goto LAB_14093a2c4;
      lVar24 = param_4[0x3ee];
      pbVar11 = local_270 + 1;
      if ((0 < lVar24) && ((byte *)0xf9f < pbVar11 + (lVar24 - (longlong)pbVar15))) {
        (**(code **)(*(longlong *)*param_4 + 0x68))((longlong *)*param_4,lVar24,param_4 + 0x1fa);
        pbVar15 = (byte *)param_4[0x3ef];
        param_4[0x3f0] = param_4[0x3f0] + param_4[0x3ee];
        param_4[0x3ee] = 0;
        lVar24 = 0;
      }
      if (pbVar10 + (lVar24 - (longlong)pbVar15) + 1 < (byte *)0xfa0) {
        for (; pbVar15 <= pbVar10; pbVar15 = pbVar15 + 1) {
          lVar24 = param_4[0x3ee];
          param_4[0x3ee] = lVar24 + 1;
          *(char *)((longlong)param_4 + lVar24 + 0xfd0) = (char)uVar19;
        }
      }
      else {
        (**(code **)(*(longlong *)*param_4 + 0x60))
                  ((longlong *)*param_4,pbVar10 + (1 - (longlong)pbVar15),uVar19);
      }
    }
  }
LAB_14093a2bd:
  param_4[0x3ef] = pbVar11;
LAB_14093a2c4:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_298)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_298);
}

