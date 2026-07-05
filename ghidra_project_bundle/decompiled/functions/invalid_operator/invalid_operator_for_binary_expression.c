/**
 * Function: invalid_operator_for_binary_expression
 * Address:  14075a930
 * Signature: undefined invalid_operator_for_binary_expression(void)
 * Body size: 26186 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
invalid_operator_for_binary_expression
          (longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,int param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  byte bVar10;
  longlong lVar9;
  undefined1 uVar11;
  short sVar12;
  ushort uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  char *pcVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  char *_Str2;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  float fVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  switch(param_5 + -0x25) {
  case 0:
  case 10:
    cVar5 = FUN_140760f80(param_3);
    if (cVar5 != '\0') {
      pcVar18 = "anonymous script";
      if (*(char **)(param_1 + 8) != (char *)0x0) {
        pcVar18 = *(char **)(param_1 + 8);
      }
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                    ,0xe9,"%s: division by zero",pcVar18);
      return 0xffffffff;
    }
    switch(param_5 + -0x25) {
    case 0:
      lVar9 = *param_3;
      if (lVar9 == 0x157) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
            uVar15 = **(ulonglong **)(param_2 + 8);
            uVar16 = *(ulonglong *)param_3[1];
            if ((uVar15 | uVar16) >> 0x20 == 0) {
              uVar20 = (undefined4)((uVar15 & 0xffffffff) % (uVar16 & 0xffffffff));
            }
            else {
              uVar20 = (undefined4)(uVar15 % uVar16);
            }
            *(undefined4 *)param_4[1] = uVar20;
            return 0;
          }
          if (lVar9 == 0x155) {
            uVar15 = **(ulonglong **)(param_2 + 8);
            uVar16 = *(ulonglong *)param_3[1];
            if ((uVar15 | uVar16) >> 0x20 == 0) {
              uVar19 = (undefined2)((uVar15 & 0xffffffff) % (uVar16 & 0xffffffff));
            }
            else {
              uVar19 = (undefined2)(uVar15 % uVar16);
            }
            *(undefined2 *)param_4[1] = uVar19;
            return 0;
          }
          if (lVar9 == 0x154) {
            uVar15 = **(ulonglong **)(param_2 + 8);
            uVar16 = *(ulonglong *)param_3[1];
            if ((uVar15 | uVar16) >> 0x20 == 0) {
              uVar11 = (undefined1)((uVar15 & 0xffffffff) % (uVar16 & 0xffffffff));
            }
            else {
              uVar11 = (undefined1)(uVar15 % uVar16);
            }
            *(undefined1 *)param_4[1] = uVar11;
            return 0;
          }
          if (lVar9 != 0x15c) {
            if (lVar9 != 0x15b) {
              if (lVar9 == 0x15a) {
                uVar15 = **(ulonglong **)(param_2 + 8);
                uVar16 = *(ulonglong *)param_3[1];
                if ((uVar15 | uVar16) >> 0x20 != 0) {
                  uVar19 = (undefined2)(uVar15 % uVar16);
                  goto LAB_14075ef99;
                }
LAB_14075ef95:
                uVar19 = (undefined2)((uVar15 & 0xffffffff) % (uVar16 & 0xffffffff));
LAB_14075ef99:
                *(undefined2 *)param_4[1] = uVar19;
                return 0;
              }
              if (lVar9 != 0x159) {
                if (lVar9 == 0x15f) {
                  uVar15 = **(ulonglong **)(param_2 + 8);
                  uVar16 = *(ulonglong *)param_3[1];
                  if ((uVar15 | uVar16) >> 0x20 == 0) {
                    uVar15 = (uVar15 & 0xffffffff) % (uVar16 & 0xffffffff);
                  }
                  else {
                    uVar15 = uVar15 % uVar16;
                  }
LAB_14076012c:
                  auVar27._8_4_ = (int)(uVar15 >> 0x20);
                  auVar27._0_8_ = uVar15;
                  auVar27._12_4_ = 0x45300000;
                  *(double *)param_4[1] =
                       (auVar27._8_8_ - 1.9342813113834067e+25) +
                       ((double)CONCAT44(0x43300000,(int)uVar15) - 4503599627370496.0);
                  return 0;
                }
                if (lVar9 == 0x15e) {
                  uVar15 = **(ulonglong **)(param_2 + 8);
                  uVar16 = *(ulonglong *)param_3[1];
                  if ((uVar15 | uVar16) >> 0x20 == 0) {
                    uVar15 = (uVar15 & 0xffffffff) % (uVar16 & 0xffffffff);
                  }
                  else {
                    uVar15 = uVar15 % uVar16;
                  }
                  if (-1 < (longlong)uVar15) {
                    fVar24 = (float)(longlong)uVar15;
                    goto LAB_1407604f9;
                  }
                  uVar15 = (ulonglong)((uint)uVar15 & 1) | uVar15 >> 1;
LAB_1407604f5:
                  fVar24 = (float)uVar15 + (float)uVar15;
LAB_1407604f9:
                  *(float *)param_4[1] = fVar24;
                  return 0;
                }
                if (lVar9 != 0x152) goto LAB_140760dc3;
              }
              uVar15 = **(ulonglong **)(param_2 + 8);
              uVar16 = *(ulonglong *)param_3[1];
              if ((uVar15 | uVar16) >> 0x20 != 0) {
                uVar11 = (undefined1)(uVar15 % uVar16);
                goto LAB_14075f594;
              }
LAB_14075f590:
              uVar11 = (undefined1)((uVar15 & 0xffffffff) % (uVar16 & 0xffffffff));
LAB_14075f594:
              *(undefined1 *)param_4[1] = uVar11;
              return 0;
            }
            uVar15 = **(ulonglong **)(param_2 + 8);
            uVar16 = *(ulonglong *)param_3[1];
            if ((uVar15 | uVar16) >> 0x20 != 0) {
              uVar20 = (undefined4)(uVar15 % uVar16);
              goto LAB_14075e815;
            }
LAB_14075e811:
            uVar20 = (undefined4)((uVar15 & 0xffffffff) % (uVar16 & 0xffffffff));
LAB_14075e815:
            *(undefined4 *)param_4[1] = uVar20;
            return 0;
          }
        }
        uVar15 = **(ulonglong **)(param_2 + 8);
        uVar16 = *(ulonglong *)param_3[1];
        if ((uVar15 | uVar16) >> 0x20 != 0) {
          uVar15 = uVar15 % uVar16;
          goto LAB_14075ce30;
        }
LAB_14075ce2c:
        uVar15 = (uVar15 & 0xffffffff) % (uVar16 & 0xffffffff);
LAB_14075ce30:
        *(ulonglong *)param_4[1] = uVar15;
        return 0;
      }
      if (lVar9 == 0x156) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
            *(uint *)param_4[1] = **(uint **)(param_2 + 8) % *(uint *)param_3[1];
            return 0;
          }
          if (lVar9 == 0x155) {
            *(short *)param_4[1] = (short)(**(uint **)(param_2 + 8) % *(uint *)param_3[1]);
            return 0;
          }
          if (lVar9 == 0x154) {
            *(char *)param_4[1] = (char)(**(uint **)(param_2 + 8) % *(uint *)param_3[1]);
            return 0;
          }
          if (lVar9 != 0x15c) {
            if (lVar9 != 0x15b) {
              if (lVar9 == 0x15a) {
                sVar12 = (short)(**(uint **)(param_2 + 8) % *(uint *)param_3[1]);
                goto LAB_14075f1ba;
              }
              if (lVar9 != 0x159) {
                if (lVar9 == 0x15f) {
                  dVar25 = (double)((ulonglong)**(uint **)(param_2 + 8) %
                                   (ulonglong)*(uint *)param_3[1]);
                  goto LAB_14075fe03;
                }
                if (lVar9 == 0x15e) {
                  fVar24 = (float)((ulonglong)**(uint **)(param_2 + 8) %
                                  (ulonglong)*(uint *)param_3[1]);
                  goto LAB_1407604f9;
                }
                if (lVar9 != 0x152) goto LAB_140760dc3;
              }
              uVar11 = (undefined1)(**(uint **)(param_2 + 8) % *(uint *)param_3[1]);
              goto LAB_14075f657;
            }
            uVar7 = **(uint **)(param_2 + 8) % *(uint *)param_3[1];
            goto LAB_14075ead9;
          }
        }
        uVar15 = (ulonglong)**(uint **)(param_2 + 8) % (ulonglong)*(uint *)param_3[1];
        goto LAB_14075ce30;
      }
      if (lVar9 == 0x155) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
            uVar7 = (uint)(**(ushort **)(param_2 + 8) % *(ushort *)param_3[1]);
            goto LAB_14075c441;
          }
          if (lVar9 == 0x155) {
            *(ushort *)param_4[1] = **(ushort **)(param_2 + 8) % *(ushort *)param_3[1];
            return 0;
          }
          if (lVar9 == 0x154) {
            *(char *)param_4[1] = (char)(**(ushort **)(param_2 + 8) % *(ushort *)param_3[1]);
            return 0;
          }
          if (lVar9 != 0x15c) {
            if (lVar9 == 0x15b) {
              uVar7 = (uint)(**(ushort **)(param_2 + 8) % *(ushort *)param_3[1]);
              goto LAB_14075f390;
            }
            if (lVar9 == 0x15a) {
              uVar6 = **(ushort **)(param_2 + 8) % *(ushort *)param_3[1];
LAB_14075f434:
              *(ushort *)param_4[1] = uVar6;
              return 0;
            }
            if (lVar9 != 0x159) {
              if (lVar9 == 0x15f) {
                uVar7 = (uint)(**(ushort **)(param_2 + 8) % *(ushort *)param_3[1]);
                goto LAB_14075fdff;
              }
              if (lVar9 == 0x15e) {
                fVar24 = (float)((uint)**(ushort **)(param_2 + 8) % (uint)*(ushort *)param_3[1]);
                goto LAB_1407604f9;
              }
              if (lVar9 != 0x152) goto LAB_140760dc3;
            }
            cVar5 = (char)(**(ushort **)(param_2 + 8) % *(ushort *)param_3[1]);
LAB_14075f87a:
            *(char *)param_4[1] = cVar5;
            return 0;
          }
          uVar15 = (ulonglong)(**(ushort **)(param_2 + 8) % *(ushort *)param_3[1]);
          goto LAB_140760159;
        }
        uVar15 = (ulonglong)(**(ushort **)(param_2 + 8) % *(ushort *)param_3[1]);
      }
      else if (lVar9 == 0x154) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
            uVar7 = (uint)(**(byte **)(param_2 + 8) % *(byte *)param_3[1]);
            goto LAB_14075c441;
          }
          if (lVar9 == 0x155) {
            *(ushort *)param_4[1] = (ushort)**(byte **)(param_2 + 8) % (ushort)*(byte *)param_3[1];
            return 0;
          }
          if (lVar9 != 0x154) {
            if (lVar9 == 0x15c) {
              uVar15 = (ulonglong)(**(byte **)(param_2 + 8) % *(byte *)param_3[1]);
              goto LAB_140760159;
            }
            if (lVar9 == 0x15b) {
              uVar7 = (uint)(**(byte **)(param_2 + 8) % *(byte *)param_3[1]);
              goto LAB_14075f390;
            }
            if (lVar9 == 0x15a) {
              uVar6 = (ushort)(**(byte **)(param_2 + 8) % *(byte *)param_3[1]);
              goto LAB_14075fe60;
            }
            if (lVar9 != 0x159) {
              if (lVar9 == 0x15f) {
                uVar7 = (uint)(**(byte **)(param_2 + 8) % *(byte *)param_3[1]);
                goto LAB_14075fdff;
              }
              if (lVar9 == 0x15e) {
                fVar24 = (float)(**(byte **)(param_2 + 8) % *(byte *)param_3[1]);
                goto LAB_1407604f9;
              }
              if (lVar9 != 0x152) goto LAB_140760dc3;
            }
          }
          bVar10 = **(byte **)(param_2 + 8) % *(byte *)param_3[1];
          goto LAB_14075e47e;
        }
        uVar15 = (ulonglong)(**(byte **)(param_2 + 8) % *(byte *)param_3[1]);
      }
      else {
        if (lVar9 == 0x15c) {
          lVar9 = *param_4;
          if (lVar9 != 0x157) {
            if (lVar9 != 0x156) {
              if (lVar9 == 0x155) {
LAB_14075e43d:
                uVar15 = **(ulonglong **)(param_2 + 8);
                uVar16 = *(ulonglong *)param_3[1];
                if ((uVar15 | uVar16) >> 0x20 != 0) {
                  uVar19 = (undefined2)((longlong)uVar15 % (longlong)uVar16);
                  goto LAB_14075ef99;
                }
                goto LAB_14075ef95;
              }
              if (lVar9 != 0x154) {
                if (lVar9 == 0x15c) {
                  uVar15 = **(ulonglong **)(param_2 + 8);
                  uVar16 = *(ulonglong *)param_3[1];
                  if ((uVar15 | uVar16) >> 0x20 == 0) {
                    uVar15 = (uVar15 & 0xffffffff) % (uVar16 & 0xffffffff);
                  }
                  else {
                    uVar15 = (longlong)uVar15 % (longlong)uVar16;
                  }
                  goto LAB_14075f40c;
                }
                if (lVar9 == 0x15b) {
                  uVar15 = **(ulonglong **)(param_2 + 8);
                  puVar17 = (ulonglong *)param_3[1];
                  goto LAB_14075dce9;
                }
                if (lVar9 == 0x15a) goto LAB_14075e43d;
                if (lVar9 != 0x159) {
                  if (lVar9 == 0x15f) {
                    uVar15 = **(ulonglong **)(param_2 + 8);
                    uVar16 = *(ulonglong *)param_3[1];
                    if ((uVar15 | uVar16) >> 0x20 == 0) {
                      dVar25 = (double)((uVar15 & 0xffffffff) % (uVar16 & 0xffffffff));
                    }
                    else {
                      dVar25 = (double)((longlong)uVar15 % (longlong)uVar16);
                    }
                    goto LAB_14075fe03;
                  }
                  if (lVar9 == 0x15e) {
                    uVar15 = **(ulonglong **)(param_2 + 8);
                    uVar16 = *(ulonglong *)param_3[1];
                    if ((uVar15 | uVar16) >> 0x20 == 0) {
                      fVar24 = (float)((uVar15 & 0xffffffff) % (uVar16 & 0xffffffff));
                    }
                    else {
                      fVar24 = (float)((longlong)uVar15 % (longlong)uVar16);
                    }
                    goto LAB_1407604f9;
                  }
                  if (lVar9 != 0x152) goto LAB_140760dc3;
                }
              }
              uVar15 = **(ulonglong **)(param_2 + 8);
              uVar16 = *(ulonglong *)param_3[1];
              if ((uVar15 | uVar16) >> 0x20 != 0) {
                uVar11 = (undefined1)((longlong)uVar15 % (longlong)uVar16);
                goto LAB_14075f594;
              }
              goto LAB_14075f590;
            }
            uVar15 = **(ulonglong **)(param_2 + 8);
            puVar17 = (ulonglong *)param_3[1];
LAB_14075dce9:
            uVar16 = *puVar17;
            if ((uVar15 | uVar16) >> 0x20 != 0) {
              uVar20 = (undefined4)((longlong)uVar15 % (longlong)uVar16);
              goto LAB_14075e815;
            }
            goto LAB_14075e811;
          }
          uVar15 = **(ulonglong **)(param_2 + 8);
          uVar16 = *(ulonglong *)param_3[1];
          if ((uVar15 | uVar16) >> 0x20 != 0) {
            uVar15 = (longlong)uVar15 % (longlong)uVar16;
            goto LAB_14075ce30;
          }
          goto LAB_14075ce2c;
        }
        if (lVar9 != 0x15b) {
          if (lVar9 != 0x15a) {
            if (lVar9 != 0x159) {
LAB_140760dc3:
              redabortreset_bluesreset
                        (7,
                         "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                         ,0xfc,"unexpected type in binary expression");
              (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 == 0x156) {
                uVar7 = (uint)(short)((short)**(char **)(param_2 + 8) % (short)*(char *)param_3[1]);
                goto LAB_14075f390;
              }
              if (lVar9 == 0x155) {
                uVar6 = (short)**(char **)(param_2 + 8) % (short)*(char *)param_3[1];
                goto LAB_14075f434;
              }
              if (lVar9 == 0x154) {
                cVar5 = **(char **)(param_2 + 8) % *(char *)param_3[1];
                goto LAB_14075f87a;
              }
              if (lVar9 != 0x15c) {
                if (lVar9 == 0x15b) {
                  *(int *)param_4[1] =
                       (int)(short)((short)**(char **)(param_2 + 8) % (short)*(char *)param_3[1]);
                  return 0;
                }
                if (lVar9 == 0x15a) {
                  *(short *)param_4[1] =
                       (short)**(char **)(param_2 + 8) % (short)*(char *)param_3[1];
                  return 0;
                }
                if (lVar9 != 0x159) {
                  if (lVar9 == 0x15f) {
                    *(double *)param_4[1] =
                         (double)(int)(short)((short)**(char **)(param_2 + 8) %
                                             (short)*(char *)param_3[1]);
                    return 0;
                  }
                  if (lVar9 == 0x15e) {
                    *(float *)param_4[1] =
                         (float)(int)(short)((short)**(char **)(param_2 + 8) %
                                            (short)*(char *)param_3[1]);
                    return 0;
                  }
                  if (lVar9 != 0x152) goto LAB_140760dc3;
                }
                *(char *)param_4[1] = **(char **)(param_2 + 8) % *(char *)param_3[1];
                return 0;
              }
            }
            uVar15 = (ulonglong)
                     (short)((short)**(char **)(param_2 + 8) % (short)*(char *)param_3[1]);
            goto LAB_140760159;
          }
          lVar9 = *param_4;
          if (lVar9 != 0x157) {
            if (lVar9 == 0x156) {
LAB_14075eac8:
              uVar7 = (int)**(short **)(param_2 + 8) % (int)*(short *)param_3[1];
              goto LAB_14075ead9;
            }
            if (lVar9 == 0x155) {
LAB_14075f1a9:
              sVar12 = **(short **)(param_2 + 8) % *(short *)param_3[1];
              goto LAB_14075f1ba;
            }
            if (lVar9 != 0x154) {
              if (lVar9 == 0x15c) goto LAB_14075dd9c;
              if (lVar9 == 0x15b) goto LAB_14075eac8;
              if (lVar9 == 0x15a) goto LAB_14075f1a9;
              if (lVar9 != 0x159) {
                if (lVar9 == 0x15f) {
                  dVar25 = (double)((int)**(short **)(param_2 + 8) % (int)*(short *)param_3[1]);
                  goto LAB_14075fe03;
                }
                if (lVar9 == 0x15e) {
                  fVar24 = (float)((int)**(short **)(param_2 + 8) % (int)*(short *)param_3[1]);
                  goto LAB_1407604f9;
                }
                if (lVar9 != 0x152) goto LAB_140760dc3;
              }
            }
            uVar11 = (undefined1)(**(short **)(param_2 + 8) % *(short *)param_3[1]);
            goto LAB_14075f657;
          }
LAB_14075dd9c:
          uVar15 = (ulonglong)((int)**(short **)(param_2 + 8) % (int)*(short *)param_3[1]);
          goto LAB_140760159;
        }
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
LAB_14075e422:
            uVar7 = **(int **)(param_2 + 8) % *(int *)param_3[1];
LAB_14075ead9:
            *(uint *)param_4[1] = uVar7;
            return 0;
          }
          if (lVar9 == 0x155) {
LAB_14075eb22:
            sVar12 = (short)(**(int **)(param_2 + 8) % *(int *)param_3[1]);
LAB_14075f1ba:
            *(short *)param_4[1] = sVar12;
            return 0;
          }
          if (lVar9 != 0x154) {
            if (lVar9 == 0x15c) {
              uVar15 = (ulonglong)(**(int **)(param_2 + 8) % *(int *)param_3[1]);
              goto LAB_140760159;
            }
            if (lVar9 == 0x15b) goto LAB_14075e422;
            if (lVar9 == 0x15a) goto LAB_14075eb22;
            if (lVar9 != 0x159) {
              if (lVar9 == 0x15f) {
                dVar25 = (double)(**(int **)(param_2 + 8) % *(int *)param_3[1]);
                goto LAB_14075fe03;
              }
              if (lVar9 == 0x15e) {
                fVar24 = (float)(**(int **)(param_2 + 8) % *(int *)param_3[1]);
                goto LAB_1407604f9;
              }
              if (lVar9 != 0x152) goto LAB_140760dc3;
            }
          }
          uVar11 = (undefined1)(**(int **)(param_2 + 8) % *(int *)param_3[1]);
LAB_14075f657:
          *(undefined1 *)param_4[1] = uVar11;
          return 0;
        }
        uVar15 = (ulonglong)(**(int **)(param_2 + 8) % *(int *)param_3[1]);
      }
      break;
    case 1:
      goto switchD_14075a963_caseD_1;
    default:
      goto switchD_14075a963_caseD_2;
    case 5:
      goto switchD_14075a963_caseD_5;
    case 6:
      goto switchD_14075a963_caseD_6;
    case 8:
      goto switchD_14075a963_caseD_8;
    case 10:
      lVar9 = *param_3;
      if (lVar9 == 0x157) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
            uVar15 = **(ulonglong **)(param_2 + 8);
            uVar16 = *(ulonglong *)param_3[1];
            if ((uVar15 | uVar16) >> 0x20 == 0) {
              uVar20 = (undefined4)((uVar15 & 0xffffffff) / (uVar16 & 0xffffffff));
            }
            else {
              uVar20 = (undefined4)(uVar15 / uVar16);
            }
            goto LAB_14075d5dc;
          }
          if (lVar9 == 0x155) {
            uVar15 = **(ulonglong **)(param_2 + 8);
            uVar16 = *(ulonglong *)param_3[1];
            if ((uVar15 | uVar16) >> 0x20 == 0) {
              uVar19 = (undefined2)((uVar15 & 0xffffffff) / (uVar16 & 0xffffffff));
            }
            else {
              uVar19 = (undefined2)(uVar15 / uVar16);
            }
            goto LAB_14075b726;
          }
          if (lVar9 == 0x154) {
            uVar15 = **(ulonglong **)(param_2 + 8);
            uVar16 = *(ulonglong *)param_3[1];
            if ((uVar15 | uVar16) >> 0x20 == 0) {
              uVar11 = (undefined1)((uVar15 & 0xffffffff) / (uVar16 & 0xffffffff));
            }
            else {
              uVar11 = (undefined1)(uVar15 / uVar16);
            }
            goto LAB_14075be17;
          }
          if (lVar9 != 0x15c) {
            if (lVar9 == 0x15b) {
              uVar15 = **(ulonglong **)(param_2 + 8);
              uVar16 = *(ulonglong *)param_3[1];
              if ((uVar15 | uVar16) >> 0x20 != 0) {
                uVar20 = (undefined4)(uVar15 / uVar16);
                goto LAB_14075e806;
              }
LAB_14075e802:
              uVar20 = (undefined4)((uVar15 & 0xffffffff) / (uVar16 & 0xffffffff));
LAB_14075e806:
              *(undefined4 *)param_4[1] = uVar20;
              return 0;
            }
            if (lVar9 == 0x15a) {
              uVar15 = **(ulonglong **)(param_2 + 8);
              uVar16 = *(ulonglong *)param_3[1];
              if ((uVar15 | uVar16) >> 0x20 != 0) {
                uVar19 = (undefined2)(uVar15 / uVar16);
                goto LAB_14075ef89;
              }
LAB_14075ef85:
              uVar19 = (undefined2)((uVar15 & 0xffffffff) / (uVar16 & 0xffffffff));
LAB_14075ef89:
              *(undefined2 *)param_4[1] = uVar19;
              return 0;
            }
            if (lVar9 != 0x159) {
              if (lVar9 == 0x15f) {
                uVar15 = **(ulonglong **)(param_2 + 8);
                uVar16 = *(ulonglong *)param_3[1];
                if ((uVar15 | uVar16) >> 0x20 == 0) {
                  uVar15 = (uVar15 & 0xffffffff) / (uVar16 & 0xffffffff);
                }
                else {
                  uVar15 = uVar15 / uVar16;
                }
                goto LAB_14076012c;
              }
              if (lVar9 == 0x15e) {
                uVar15 = **(ulonglong **)(param_2 + 8);
                uVar16 = *(ulonglong *)param_3[1];
                if ((uVar15 | uVar16) >> 0x20 == 0) {
                  uVar15 = (uVar15 & 0xffffffff) / (uVar16 & 0xffffffff);
                }
                else {
                  uVar15 = uVar15 / uVar16;
                }
                if (-1 < (longlong)uVar15) {
                  fVar24 = (float)(longlong)uVar15;
                  goto LAB_1407604f9;
                }
                uVar15 = (ulonglong)((uint)uVar15 & 1) | uVar15 >> 1;
                goto LAB_1407604f5;
              }
              if (lVar9 != 0x152) goto LAB_140760ed2;
            }
            uVar15 = **(ulonglong **)(param_2 + 8);
            uVar16 = *(ulonglong *)param_3[1];
            if ((uVar15 | uVar16) >> 0x20 != 0) {
              uVar11 = (undefined1)(uVar15 / uVar16);
              goto LAB_14075f585;
            }
LAB_14075f581:
            uVar11 = (undefined1)((uVar15 & 0xffffffff) / (uVar16 & 0xffffffff));
LAB_14075f585:
            *(undefined1 *)param_4[1] = uVar11;
            return 0;
          }
        }
        uVar15 = **(ulonglong **)(param_2 + 8);
        uVar16 = *(ulonglong *)param_3[1];
        if ((uVar15 | uVar16) >> 0x20 == 0) {
LAB_14075ceef:
          uVar15 = (uVar15 & 0xffffffff) / (uVar16 & 0xffffffff);
        }
        else {
          uVar15 = uVar15 / uVar16;
        }
      }
      else if (lVar9 == 0x156) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
            uVar7 = **(uint **)(param_2 + 8) / *(uint *)param_3[1];
            goto LAB_14075c441;
          }
          if (lVar9 == 0x155) {
            uVar6 = (ushort)(**(uint **)(param_2 + 8) / *(uint *)param_3[1]);
            goto LAB_14075cc44;
          }
          if (lVar9 == 0x154) {
            cVar5 = (char)(**(uint **)(param_2 + 8) / *(uint *)param_3[1]);
            goto LAB_14075d4a5;
          }
          if (lVar9 != 0x15c) {
            if (lVar9 == 0x15b) {
              uVar7 = **(uint **)(param_2 + 8) / *(uint *)param_3[1];
              goto LAB_14075f390;
            }
            if (lVar9 != 0x15a) {
              if (lVar9 != 0x159) {
                if (lVar9 == 0x15f) {
                  dVar25 = (double)((ulonglong)**(uint **)(param_2 + 8) /
                                   (ulonglong)*(uint *)param_3[1]);
                  goto LAB_14075fe03;
                }
                if (lVar9 == 0x15e) {
                  fVar24 = (float)((ulonglong)**(uint **)(param_2 + 8) /
                                  (ulonglong)*(uint *)param_3[1]);
                  goto LAB_1407604f9;
                }
                if (lVar9 != 0x152) goto LAB_140760ed2;
              }
              *(char *)param_4[1] = (char)(**(uint **)(param_2 + 8) / *(uint *)param_3[1]);
              return 0;
            }
            uVar6 = (ushort)(**(uint **)(param_2 + 8) / *(uint *)param_3[1]);
            goto LAB_14075fe60;
          }
        }
        uVar15 = (ulonglong)**(uint **)(param_2 + 8) / (ulonglong)*(uint *)param_3[1];
      }
      else if (lVar9 == 0x155) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
            uVar7 = (uint)(**(ushort **)(param_2 + 8) / *(ushort *)param_3[1]);
            goto LAB_14075c441;
          }
          if (lVar9 == 0x155) {
            *(ushort *)param_4[1] = **(ushort **)(param_2 + 8) / *(ushort *)param_3[1];
            return 0;
          }
          if (lVar9 == 0x154) {
            *(char *)param_4[1] = (char)(**(ushort **)(param_2 + 8) / *(ushort *)param_3[1]);
            return 0;
          }
          if (lVar9 != 0x15c) {
            if (lVar9 == 0x15b) {
              uVar7 = (uint)(**(ushort **)(param_2 + 8) / *(ushort *)param_3[1]);
              goto LAB_14075f390;
            }
            if (lVar9 == 0x15a) {
              *(ushort *)param_4[1] = **(ushort **)(param_2 + 8) / *(ushort *)param_3[1];
              return 0;
            }
            if (lVar9 == 0x159) {
LAB_14075f843:
              *(char *)param_4[1] = (char)(**(ushort **)(param_2 + 8) / *(ushort *)param_3[1]);
              return 0;
            }
            if (lVar9 != 0x15f) {
              if (lVar9 == 0x15e) {
                fVar24 = (float)((uint)**(ushort **)(param_2 + 8) / (uint)*(ushort *)param_3[1]);
                goto LAB_1407604f9;
              }
              if (lVar9 != 0x152) goto LAB_140760ed2;
              goto LAB_14075f843;
            }
            uVar7 = (uint)(**(ushort **)(param_2 + 8) / *(ushort *)param_3[1]);
LAB_14075fdff:
            dVar25 = (double)(int)uVar7;
LAB_14075fe03:
            *(double *)param_4[1] = dVar25;
            return 0;
          }
          uVar15 = (ulonglong)(**(ushort **)(param_2 + 8) / *(ushort *)param_3[1]);
LAB_140760159:
          puVar17 = (ulonglong *)param_4[1];
          goto LAB_14075cef7;
        }
        uVar15 = (ulonglong)(**(ushort **)(param_2 + 8) / *(ushort *)param_3[1]);
      }
      else if (lVar9 == 0x154) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
            uVar7 = (uint)(**(byte **)(param_2 + 8) / *(byte *)param_3[1]);
            goto LAB_14075c441;
          }
          if (lVar9 == 0x155) {
            uVar6 = (ushort)(**(byte **)(param_2 + 8) / *(byte *)param_3[1]);
            goto LAB_14075cc44;
          }
          if (lVar9 == 0x154) goto LAB_14075e56d;
          if (lVar9 != 0x15c) {
            if (lVar9 == 0x15b) {
              uVar7 = (uint)(**(byte **)(param_2 + 8) / *(byte *)param_3[1]);
              goto LAB_14075f390;
            }
            if (lVar9 == 0x15a) {
              uVar6 = (ushort)(**(byte **)(param_2 + 8) / *(byte *)param_3[1]);
              goto LAB_14075fe60;
            }
            if (lVar9 == 0x159) {
LAB_14075e56d:
              *(byte *)param_4[1] = **(byte **)(param_2 + 8) / *(byte *)param_3[1];
              return 0;
            }
            if (lVar9 != 0x15f) {
              if (lVar9 == 0x15e) {
                fVar24 = (float)(**(byte **)(param_2 + 8) / *(byte *)param_3[1]);
                goto LAB_1407604f9;
              }
              if (lVar9 != 0x152) goto LAB_140760ed2;
              goto LAB_14075e56d;
            }
            uVar7 = (uint)(**(byte **)(param_2 + 8) / *(byte *)param_3[1]);
            goto LAB_14075fdff;
          }
          uVar15 = (ulonglong)(**(byte **)(param_2 + 8) / *(byte *)param_3[1]);
          goto LAB_140760159;
        }
        uVar15 = (ulonglong)(**(byte **)(param_2 + 8) / *(byte *)param_3[1]);
      }
      else if (lVar9 == 0x15c) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
            uVar15 = **(ulonglong **)(param_2 + 8);
            puVar17 = (ulonglong *)param_3[1];
LAB_14075ddc9:
            uVar16 = *puVar17;
            if ((uVar15 | uVar16) >> 0x20 != 0) {
              uVar20 = (undefined4)((longlong)uVar15 / (longlong)uVar16);
              goto LAB_14075e806;
            }
            goto LAB_14075e802;
          }
          if (lVar9 == 0x155) {
LAB_14075e53c:
            uVar15 = **(ulonglong **)(param_2 + 8);
            uVar16 = *(ulonglong *)param_3[1];
            if ((uVar15 | uVar16) >> 0x20 != 0) {
              uVar19 = (undefined2)((longlong)uVar15 / (longlong)uVar16);
              goto LAB_14075ef89;
            }
            goto LAB_14075ef85;
          }
          if (lVar9 != 0x154) {
            if (lVar9 == 0x15c) {
              uVar15 = **(ulonglong **)(param_2 + 8);
              uVar16 = *(ulonglong *)param_3[1];
              if ((uVar15 | uVar16) >> 0x20 == 0) {
                uVar15 = (uVar15 & 0xffffffff) / (uVar16 & 0xffffffff);
              }
              else {
                uVar15 = (longlong)uVar15 / (longlong)uVar16;
              }
              goto LAB_140760159;
            }
            if (lVar9 == 0x15b) {
              uVar15 = **(ulonglong **)(param_2 + 8);
              puVar17 = (ulonglong *)param_3[1];
              goto LAB_14075ddc9;
            }
            if (lVar9 == 0x15a) goto LAB_14075e53c;
            if (lVar9 != 0x159) {
              if (lVar9 == 0x15f) {
                uVar15 = **(ulonglong **)(param_2 + 8);
                uVar16 = *(ulonglong *)param_3[1];
                if ((uVar15 | uVar16) >> 0x20 == 0) {
                  dVar25 = (double)((uVar15 & 0xffffffff) / (uVar16 & 0xffffffff));
                }
                else {
                  dVar25 = (double)((longlong)uVar15 / (longlong)uVar16);
                }
                goto LAB_14075fe03;
              }
              if (lVar9 == 0x15e) {
                uVar15 = **(ulonglong **)(param_2 + 8);
                uVar16 = *(ulonglong *)param_3[1];
                if ((uVar15 | uVar16) >> 0x20 == 0) {
                  fVar24 = (float)((uVar15 & 0xffffffff) / (uVar16 & 0xffffffff));
                }
                else {
                  fVar24 = (float)((longlong)uVar15 / (longlong)uVar16);
                }
                goto LAB_1407604f9;
              }
              if (lVar9 != 0x152) goto LAB_140760ed2;
            }
          }
          uVar15 = **(ulonglong **)(param_2 + 8);
          uVar16 = *(ulonglong *)param_3[1];
          if ((uVar15 | uVar16) >> 0x20 != 0) {
            uVar11 = (undefined1)((longlong)uVar15 / (longlong)uVar16);
            goto LAB_14075f585;
          }
          goto LAB_14075f581;
        }
        uVar15 = **(ulonglong **)(param_2 + 8);
        uVar16 = *(ulonglong *)param_3[1];
        if ((uVar15 | uVar16) >> 0x20 == 0) goto LAB_14075ceef;
        uVar15 = (longlong)uVar15 / (longlong)uVar16;
      }
      else {
        if (lVar9 != 0x15b) {
          if (lVar9 == 0x15a) {
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 == 0x156) {
LAB_14075ebd5:
                uVar7 = (int)**(short **)(param_2 + 8) / (int)*(short *)param_3[1];
                goto LAB_14075f390;
              }
              if (lVar9 == 0x155) {
LAB_14075f2dc:
                uVar6 = **(short **)(param_2 + 8) / *(short *)param_3[1];
                goto LAB_14075fe60;
              }
              if (lVar9 != 0x154) {
                if (lVar9 == 0x15c) goto LAB_14075de75;
                if (lVar9 == 0x15b) goto LAB_14075ebd5;
                if (lVar9 == 0x15a) goto LAB_14075f2dc;
                if (lVar9 != 0x159) {
                  if (lVar9 == 0x15f) {
                    uVar7 = (int)**(short **)(param_2 + 8) / (int)*(short *)param_3[1];
                    goto LAB_14075fdff;
                  }
                  if (lVar9 == 0x15e) {
                    fVar24 = (float)((int)**(short **)(param_2 + 8) / (int)*(short *)param_3[1]);
                    goto LAB_1407604f9;
                  }
                  if (lVar9 != 0x152) goto LAB_140760ed2;
                }
              }
              bVar10 = (byte)(**(short **)(param_2 + 8) / *(short *)param_3[1]);
              goto LAB_14075e47e;
            }
LAB_14075de75:
            uVar15 = (ulonglong)((int)**(short **)(param_2 + 8) / (int)*(short *)param_3[1]);
          }
          else {
            if (lVar9 != 0x159) {
              if (lVar9 == 0x15f) {
                lVar9 = *param_4;
                if (lVar9 != 0x157) {
                  if (lVar9 == 0x156) {
                    uVar20 = (undefined4)
                             (longlong)(**(double **)(param_2 + 8) / *(double *)param_3[1]);
                    goto LAB_14075e806;
                  }
                  if (lVar9 == 0x155) {
LAB_14075fc5e:
                    uVar6 = (ushort)(int)(**(double **)(param_2 + 8) / *(double *)param_3[1]);
                    goto LAB_14075fe60;
                  }
                  if (lVar9 != 0x154) {
                    if (lVar9 == 0x15c) {
                      uVar15 = (ulonglong)(**(double **)(param_2 + 8) / *(double *)param_3[1]);
                      goto LAB_140760159;
                    }
                    if (lVar9 == 0x15b) {
                      uVar7 = (uint)(**(double **)(param_2 + 8) / *(double *)param_3[1]);
                      goto LAB_14075f390;
                    }
                    if (lVar9 == 0x15a) goto LAB_14075fc5e;
                    if (lVar9 != 0x159) {
                      if (lVar9 == 0x15f) {
                        dVar25 = **(double **)(param_2 + 8) / *(double *)param_3[1];
                        goto LAB_14075fe03;
                      }
                      if (lVar9 == 0x15e) {
                        fVar24 = (float)(**(double **)(param_2 + 8) / *(double *)param_3[1]);
                        goto LAB_1407604f9;
                      }
                      if (lVar9 != 0x152) goto LAB_140760ed2;
                    }
                  }
                  bVar10 = (byte)(int)(**(double **)(param_2 + 8) / *(double *)param_3[1]);
                  goto LAB_14075e47e;
                }
                dVar25 = **(double **)(param_2 + 8) / *(double *)param_3[1];
                uVar15 = (ulonglong)dVar25;
                uVar16 = (ulonglong)(dVar25 - 9.223372036854776e+18);
              }
              else {
                if (lVar9 != 0x15e) {
LAB_140760ed2:
                  redabortreset_bluesreset
                            (7,
                             "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                             ,0xf9,"unexpected type in binary expression");
                  (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar9 = *param_4;
                if (lVar9 != 0x157) {
                  if (lVar9 == 0x156) {
                    uVar20 = (undefined4)
                             (longlong)(**(float **)(param_2 + 8) / *(float *)param_3[1]);
                    goto LAB_14075e806;
                  }
                  if (lVar9 == 0x155) {
LAB_14075fe4c:
                    uVar6 = (ushort)(int)(**(float **)(param_2 + 8) / *(float *)param_3[1]);
                    goto LAB_14075fe60;
                  }
                  if (lVar9 != 0x154) {
                    if (lVar9 == 0x15c) {
                      uVar15 = (ulonglong)(**(float **)(param_2 + 8) / *(float *)param_3[1]);
                      goto LAB_140760159;
                    }
                    if (lVar9 == 0x15b) {
                      uVar7 = (uint)(**(float **)(param_2 + 8) / *(float *)param_3[1]);
                      goto LAB_14075f390;
                    }
                    if (lVar9 == 0x15a) goto LAB_14075fe4c;
                    if (lVar9 != 0x159) {
                      if (lVar9 == 0x15f) {
                        dVar25 = (double)(**(float **)(param_2 + 8) / *(float *)param_3[1]);
                        goto LAB_14075fe03;
                      }
                      if (lVar9 == 0x15e) {
                        fVar24 = **(float **)(param_2 + 8) / *(float *)param_3[1];
                        goto LAB_1407604f9;
                      }
                      if (lVar9 != 0x152) goto LAB_140760ed2;
                    }
                  }
                  bVar10 = (byte)(int)(**(float **)(param_2 + 8) / *(float *)param_3[1]);
                  goto LAB_14075e47e;
                }
                fVar24 = **(float **)(param_2 + 8) / *(float *)param_3[1];
                uVar15 = (ulonglong)fVar24;
                uVar16 = (ulonglong)(fVar24 - 9.223372e+18);
              }
              uVar15 = uVar16 & (longlong)uVar15 >> 0x3f | uVar15;
LAB_14075f40c:
              *(ulonglong *)param_4[1] = uVar15;
              return 0;
            }
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 != 0x156) {
                if (lVar9 == 0x155) {
LAB_14075f742:
                  *(short *)param_4[1] =
                       (short)**(char **)(param_2 + 8) / (short)*(char *)param_3[1];
                  return 0;
                }
                if (lVar9 == 0x154) goto LAB_14075fc80;
                if (lVar9 == 0x15c) goto LAB_14075e5c6;
                if (lVar9 != 0x15b) {
                  if (lVar9 == 0x15a) goto LAB_14075f742;
                  if (lVar9 == 0x159) {
LAB_14075fc80:
                    *(char *)param_4[1] = **(char **)(param_2 + 8) / *(char *)param_3[1];
                    return 0;
                  }
                  if (lVar9 != 0x15f) {
                    if (lVar9 == 0x15e) {
                      fVar24 = (float)(int)(short)((short)**(char **)(param_2 + 8) /
                                                  (short)*(char *)param_3[1]);
                      goto LAB_1407604f9;
                    }
                    if (lVar9 != 0x152) goto LAB_140760ed2;
                    goto LAB_14075fc80;
                  }
                  uVar7 = (uint)(short)((short)**(char **)(param_2 + 8) / (short)*(char *)param_3[1]
                                       );
                  goto LAB_14075fdff;
                }
              }
              uVar7 = (uint)(short)((short)**(char **)(param_2 + 8) / (short)*(char *)param_3[1]);
              goto LAB_14075f390;
            }
LAB_14075e5c6:
            uVar15 = (ulonglong)
                     (short)((short)**(char **)(param_2 + 8) / (short)*(char *)param_3[1]);
          }
          goto LAB_140760159;
        }
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
LAB_14075e521:
            uVar7 = **(int **)(param_2 + 8) / *(int *)param_3[1];
LAB_14075f390:
            *(uint *)param_4[1] = uVar7;
            return 0;
          }
          if (lVar9 == 0x155) {
LAB_14075ec29:
            uVar6 = (ushort)(**(int **)(param_2 + 8) / *(int *)param_3[1]);
LAB_14075fe60:
            *(ushort *)param_4[1] = uVar6;
            return 0;
          }
          if (lVar9 != 0x154) {
            if (lVar9 == 0x15c) {
              uVar15 = (ulonglong)(**(int **)(param_2 + 8) / *(int *)param_3[1]);
              goto LAB_140760159;
            }
            if (lVar9 == 0x15b) goto LAB_14075e521;
            if (lVar9 == 0x15a) goto LAB_14075ec29;
            if (lVar9 != 0x159) {
              if (lVar9 == 0x15f) {
                uVar7 = **(int **)(param_2 + 8) / *(int *)param_3[1];
                goto LAB_14075fdff;
              }
              if (lVar9 == 0x15e) {
                fVar24 = (float)(**(int **)(param_2 + 8) / *(int *)param_3[1]);
                goto LAB_1407604f9;
              }
              if (lVar9 != 0x152) goto LAB_140760ed2;
            }
          }
          bVar10 = (byte)(**(int **)(param_2 + 8) / *(int *)param_3[1]);
LAB_14075e47e:
          *(byte *)param_4[1] = bVar10;
          return 0;
        }
        uVar15 = (ulonglong)(**(int **)(param_2 + 8) / *(int *)param_3[1]);
      }
    }
    break;
  case 1:
switchD_14075a963_caseD_1:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) {
LAB_14075b59d:
          *(uint *)param_4[1] = *(uint *)param_3[1] & **(uint **)(param_2 + 8);
          return 0;
        }
        if (lVar9 == 0x155) {
LAB_14075bb0d:
          *(ushort *)param_4[1] =
               (ushort)*(undefined4 *)param_3[1] & (ushort)**(undefined4 **)(param_2 + 8);
          return 0;
        }
        if (lVar9 == 0x154) goto LAB_14075c27f;
        if (lVar9 != 0x15c) {
          if (lVar9 == 0x15b) goto LAB_14075b59d;
          if (lVar9 == 0x15a) goto LAB_14075bb0d;
          if (lVar9 == 0x159) goto LAB_14075c27f;
          if (lVar9 == 0x15f) {
            uVar15 = *(ulonglong *)param_3[1] & **(ulonglong **)(param_2 + 8);
LAB_14075c4d0:
            auVar26._8_4_ = (int)(uVar15 >> 0x20);
            auVar26._0_8_ = uVar15;
            auVar26._12_4_ = 0x45300000;
            *(double *)param_4[1] =
                 (auVar26._8_8_ - 1.9342813113834067e+25) +
                 ((double)CONCAT44(0x43300000,(int)uVar15) - 4503599627370496.0);
            return 0;
          }
          if (lVar9 != 0x15e) goto joined_r0x00014076069e;
          uVar15 = *(ulonglong *)param_3[1] & **(ulonglong **)(param_2 + 8);
          goto joined_r0x00014075e671;
        }
      }
LAB_14075aae1:
      uVar15 = *(ulonglong *)param_3[1] & **(ulonglong **)(param_2 + 8);
LAB_14075b588:
      *(ulonglong *)param_4[1] = uVar15;
      return 0;
    }
    if (lVar9 == 0x156) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) goto LAB_14075b59d;
        if (lVar9 == 0x155) goto LAB_14075bb0d;
        if (lVar9 == 0x154) goto LAB_14075c27f;
        if (lVar9 != 0x15c) {
          if (lVar9 == 0x15b) goto LAB_14075b59d;
          if (lVar9 == 0x15a) goto LAB_14075bb0d;
          if (lVar9 == 0x159) goto LAB_14075c27f;
          if (lVar9 != 0x15f) {
            if (lVar9 != 0x15e) goto joined_r0x00014076069e;
            uVar15 = (ulonglong)(*(uint *)param_3[1] & **(uint **)(param_2 + 8));
            goto LAB_14075f033;
          }
          uVar15 = (ulonglong)(*(uint *)param_3[1] & **(uint **)(param_2 + 8));
          goto LAB_14075cbc5;
        }
      }
      uVar15 = (ulonglong)(*(uint *)param_3[1] & **(uint **)(param_2 + 8));
      goto LAB_14075b588;
    }
    if (lVar9 == 0x155) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 != 0x156) {
          if (lVar9 == 0x155) {
LAB_14075c258:
            *(ushort *)param_4[1] = *(ushort *)param_3[1] & **(ushort **)(param_2 + 8);
            return 0;
          }
          if (lVar9 == 0x154) goto LAB_14075c9dd;
          if (lVar9 == 0x15c) goto LAB_14075b1ea;
          if (lVar9 != 0x15b) {
            if (lVar9 == 0x15a) goto LAB_14075c258;
            if (lVar9 == 0x159) goto LAB_14075c9dd;
            if (lVar9 == 0x15f) {
              uVar7 = (uint)(*(ushort *)param_3[1] & **(ushort **)(param_2 + 8));
              goto LAB_14075dbd2;
            }
            if (lVar9 != 0x15e) {
joined_r0x000140760950:
              if (lVar9 == 0x152) {
LAB_14075c9dd:
                *(byte *)param_4[1] =
                     (byte)*(undefined2 *)param_3[1] & (byte)**(undefined2 **)(param_2 + 8);
                return 0;
              }
              goto LAB_14075eef5;
            }
            uVar7 = (uint)(*(ushort *)param_3[1] & **(ushort **)(param_2 + 8));
            goto LAB_14075fabe;
          }
        }
        uVar7 = (uint)(*(ushort *)param_3[1] & **(ushort **)(param_2 + 8));
LAB_14075c441:
        *(uint *)param_4[1] = uVar7;
        return 0;
      }
LAB_14075b1ea:
      uVar15 = (ulonglong)(*(ushort *)param_3[1] & **(ushort **)(param_2 + 8));
    }
    else {
      if (lVar9 != 0x154) {
        if (lVar9 != 0x15c) {
          if (lVar9 == 0x15b) {
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 == 0x156) goto LAB_14075b59d;
              if (lVar9 == 0x155) goto LAB_14075bb0d;
              if (lVar9 == 0x154) goto LAB_14075c27f;
              if (lVar9 != 0x15c) {
                if (lVar9 == 0x15b) goto LAB_14075b59d;
                if (lVar9 == 0x15a) goto LAB_14075bb0d;
                if (lVar9 == 0x159) goto LAB_14075c27f;
                if (lVar9 == 0x15f) {
                  dVar25 = (double)(int)(*(uint *)param_3[1] & **(uint **)(param_2 + 8));
                  goto LAB_14075dbd6;
                }
                if (lVar9 == 0x15e) {
                  fVar24 = (float)(int)(*(uint *)param_3[1] & **(uint **)(param_2 + 8));
                  goto LAB_14075fac2;
                }
joined_r0x00014076069e:
                if (lVar9 == 0x152) {
LAB_14075c27f:
                  *(byte *)param_4[1] =
                       (byte)*(undefined4 *)param_3[1] & (byte)**(undefined4 **)(param_2 + 8);
                  return 0;
                }
LAB_14075eef5:
                redabortreset_bluesreset
                          (7,
                           "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                           ,0x117,"unexpected type in binary expression");
                (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            uVar15 = (ulonglong)(int)(*(uint *)param_3[1] & **(uint **)(param_2 + 8));
            break;
          }
          if (lVar9 != 0x15a) {
            if (lVar9 != 0x159) goto LAB_14075eef5;
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 == 0x156) {
LAB_14075da25:
                uVar7 = (uint)(char)(*(byte *)param_3[1] & **(byte **)(param_2 + 8));
                goto LAB_14075c441;
              }
              if (lVar9 != 0x155) {
                if (lVar9 == 0x154) goto LAB_14075d1af;
                if (lVar9 == 0x15c) goto LAB_14075d237;
                if (lVar9 == 0x15b) goto LAB_14075da25;
                if (lVar9 != 0x15a) {
                  if (lVar9 == 0x159) goto LAB_14075d1af;
                  if (lVar9 == 0x15f) {
                    uVar7 = (uint)(char)(*(byte *)param_3[1] & **(byte **)(param_2 + 8));
                    goto LAB_14075dbd2;
                  }
                  if (lVar9 != 0x15e) goto joined_r0x000140760962;
                  uVar7 = (uint)(char)(*(byte *)param_3[1] & **(byte **)(param_2 + 8));
                  goto LAB_14075fabe;
                }
              }
              uVar6 = (ushort)(char)(*(byte *)param_3[1] & **(byte **)(param_2 + 8));
              goto LAB_14075cc44;
            }
LAB_14075d237:
            uVar15 = (ulonglong)(char)(*(byte *)param_3[1] & **(byte **)(param_2 + 8));
            break;
          }
          lVar9 = *param_4;
          if (lVar9 != 0x157) {
            if (lVar9 != 0x156) {
              if (lVar9 == 0x155) goto LAB_14075c258;
              if (lVar9 == 0x154) goto LAB_14075c9dd;
              if (lVar9 == 0x15c) goto LAB_14075ca64;
              if (lVar9 != 0x15b) {
                if (lVar9 == 0x15a) goto LAB_14075c258;
                if (lVar9 == 0x159) goto LAB_14075c9dd;
                if (lVar9 == 0x15f) {
                  uVar7 = (uint)(short)(*(ushort *)param_3[1] & **(ushort **)(param_2 + 8));
                  goto LAB_14075dbd2;
                }
                if (lVar9 != 0x15e) goto joined_r0x000140760950;
                uVar7 = (uint)(short)(*(ushort *)param_3[1] & **(ushort **)(param_2 + 8));
                goto LAB_14075fabe;
              }
            }
            uVar7 = (uint)(short)(*(ushort *)param_3[1] & **(ushort **)(param_2 + 8));
            goto LAB_14075c441;
          }
LAB_14075ca64:
          uVar15 = (ulonglong)(short)(*(ushort *)param_3[1] & **(ushort **)(param_2 + 8));
          break;
        }
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) goto LAB_14075b59d;
          if (lVar9 == 0x155) goto LAB_14075bb0d;
          if (lVar9 == 0x154) goto LAB_14075c27f;
          if (lVar9 != 0x15c) {
            if (lVar9 == 0x15b) goto LAB_14075b59d;
            if (lVar9 == 0x15a) goto LAB_14075bb0d;
            if (lVar9 == 0x159) goto LAB_14075c27f;
            if (lVar9 != 0x15f) {
              if (lVar9 == 0x15e) {
                uVar15 = *(ulonglong *)param_3[1] & **(ulonglong **)(param_2 + 8);
                goto LAB_14075f033;
              }
              goto joined_r0x00014076069e;
            }
            uVar15 = *(ulonglong *)param_3[1] & **(ulonglong **)(param_2 + 8);
            goto LAB_14075cbc5;
          }
        }
        goto LAB_14075aae1;
      }
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) {
LAB_14075c23a:
          uVar7 = (uint)(*(byte *)param_3[1] & **(byte **)(param_2 + 8));
          goto LAB_14075c441;
        }
        if (lVar9 != 0x155) {
          if (lVar9 == 0x154) goto LAB_14075d1af;
          if (lVar9 == 0x15c) goto LAB_14075b5d0;
          if (lVar9 == 0x15b) goto LAB_14075c23a;
          if (lVar9 != 0x15a) {
            if (lVar9 == 0x159) goto LAB_14075d1af;
            if (lVar9 == 0x15f) {
              uVar7 = (uint)(*(byte *)param_3[1] & **(byte **)(param_2 + 8));
              goto LAB_14075dbd2;
            }
            if (lVar9 != 0x15e) {
joined_r0x000140760962:
              if (lVar9 == 0x152) {
LAB_14075d1af:
                *(byte *)param_4[1] = *(byte *)param_3[1] & **(byte **)(param_2 + 8);
                return 0;
              }
              goto LAB_14075eef5;
            }
            uVar7 = (uint)(*(byte *)param_3[1] & **(byte **)(param_2 + 8));
            goto LAB_14075fabe;
          }
        }
        uVar6 = (ushort)(*(byte *)param_3[1] & **(byte **)(param_2 + 8));
LAB_14075cc44:
        *(ushort *)param_4[1] = uVar6;
        return 0;
      }
LAB_14075b5d0:
      uVar15 = (ulonglong)(*(byte *)param_3[1] & **(byte **)(param_2 + 8));
    }
    break;
  default:
switchD_14075a963_caseD_2:
    redabortreset_bluesreset
              (7,
               "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
               ,0x14e,"invalid operator for binary expression");
    (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
    abort();
  case 5:
switchD_14075a963_caseD_5:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
      lVar9 = *param_4;
      if (lVar9 == 0x157) {
LAB_14075aaae:
        uVar15 = *(longlong *)param_3[1] * **(longlong **)(param_2 + 8);
        goto LAB_14075b588;
      }
      if (lVar9 == 0x156) {
LAB_14075b542:
        iVar8 = *(int *)param_3[1] * **(int **)(param_2 + 8);
LAB_14075b54f:
        *(int *)param_4[1] = iVar8;
        return 0;
      }
      if (lVar9 != 0x155) {
        if (lVar9 == 0x154) goto LAB_14075c1ea;
        if (lVar9 == 0x15c) goto LAB_14075aaae;
        if (lVar9 == 0x15b) goto LAB_14075b542;
        if (lVar9 != 0x15a) {
          if (lVar9 == 0x159) goto LAB_14075c1ea;
          if (lVar9 == 0x15f) {
            uVar15 = *(longlong *)param_3[1] * **(longlong **)(param_2 + 8);
            goto LAB_14075c4d0;
          }
          if (lVar9 != 0x15e) goto joined_r0x000140760669;
          uVar15 = *(longlong *)param_3[1] * **(longlong **)(param_2 + 8);
          goto joined_r0x00014075e671;
        }
      }
    }
    else {
      if (lVar9 != 0x156) {
        if (lVar9 == 0x155) {
          lVar9 = *param_4;
          if (lVar9 != 0x157) {
            if (lVar9 != 0x156) {
              if (lVar9 == 0x155) {
LAB_14075c1c2:
                *(short *)param_4[1] = *(short *)param_3[1] * **(short **)(param_2 + 8);
                return 0;
              }
              if (lVar9 == 0x154) goto LAB_14075d0f4;
              if (lVar9 == 0x15c) goto LAB_14075b13b;
              if (lVar9 != 0x15b) {
                if (lVar9 == 0x15a) goto LAB_14075c1c2;
                if (lVar9 == 0x159) goto LAB_14075d0f4;
                if (lVar9 == 0x15f) {
                  uVar7 = (uint)**(ushort **)(param_2 + 8);
                  uVar14 = (uint)*(ushort *)param_3[1];
LAB_14075d951:
                  dVar25 = (double)(int)(uVar14 * uVar7);
                  goto LAB_14075dbd6;
                }
                if (lVar9 != 0x15e) {
joined_r0x000140760bbc:
                  if (lVar9 == 0x152) {
LAB_14075d0f4:
                    *(char *)param_4[1] = *(char *)param_3[1] * **(char **)(param_2 + 8);
                    return 0;
                  }
                  goto LAB_14075ff85;
                }
                uVar7 = (uint)**(ushort **)(param_2 + 8);
                uVar14 = (uint)*(ushort *)param_3[1];
LAB_14075f965:
                fVar24 = (float)(int)(uVar14 * uVar7);
                goto LAB_14075fac2;
              }
            }
            uVar7 = (uint)**(ushort **)(param_2 + 8);
            uVar14 = (uint)*(ushort *)param_3[1];
LAB_14075c1b1:
            iVar8 = uVar14 * uVar7;
            goto LAB_14075b54f;
          }
LAB_14075b13b:
          uVar16 = (ulonglong)**(ushort **)(param_2 + 8);
          uVar15 = (ulonglong)*(ushort *)param_3[1];
        }
        else if (lVar9 == 0x154) {
          lVar9 = *param_4;
          if (lVar9 != 0x157) {
            if (lVar9 == 0x156) {
LAB_14075c1a3:
              uVar7 = (uint)**(byte **)(param_2 + 8);
              uVar14 = (uint)*(byte *)param_3[1];
              goto LAB_14075c1b1;
            }
            if (lVar9 != 0x155) {
              if (lVar9 == 0x154) goto LAB_14075d0f4;
              if (lVar9 == 0x15c) goto LAB_14075b576;
              if (lVar9 == 0x15b) goto LAB_14075c1a3;
              if (lVar9 != 0x15a) {
                if (lVar9 == 0x159) goto LAB_14075d0f4;
                if (lVar9 == 0x15f) {
                  uVar7 = (uint)**(byte **)(param_2 + 8);
                  uVar14 = (uint)*(byte *)param_3[1];
                  goto LAB_14075d951;
                }
                if (lVar9 != 0x15e) goto joined_r0x000140760bbc;
                uVar7 = (uint)**(byte **)(param_2 + 8);
                uVar14 = (uint)*(byte *)param_3[1];
                goto LAB_14075f965;
              }
            }
            uVar6 = (ushort)**(byte **)(param_2 + 8);
            uVar13 = (ushort)*(byte *)param_3[1];
LAB_14075c8c5:
            sVar12 = uVar13 * uVar6;
            goto LAB_14075ba55;
          }
LAB_14075b576:
          uVar16 = (ulonglong)**(byte **)(param_2 + 8);
          uVar15 = (ulonglong)*(byte *)param_3[1];
        }
        else {
          if (lVar9 == 0x15c) {
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 == 0x156) goto LAB_14075b542;
              if (lVar9 != 0x155) {
                if (lVar9 == 0x154) goto LAB_14075c1ea;
                if (lVar9 == 0x15c) goto LAB_14075aaae;
                if (lVar9 == 0x15b) goto LAB_14075b542;
                if (lVar9 != 0x15a) {
                  if (lVar9 == 0x159) goto LAB_14075c1ea;
                  if (lVar9 == 0x15f) {
                    uVar15 = *(longlong *)param_3[1] * **(longlong **)(param_2 + 8);
                    goto LAB_14075cbc5;
                  }
                  if (lVar9 != 0x15e) goto joined_r0x000140760669;
                  uVar15 = *(longlong *)param_3[1] * **(longlong **)(param_2 + 8);
                  goto LAB_14075f033;
                }
              }
              goto LAB_14075ba48;
            }
            goto LAB_14075aaae;
          }
          if (lVar9 == 0x15b) {
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 == 0x156) goto LAB_14075b542;
              if (lVar9 != 0x155) {
                if (lVar9 == 0x154) goto LAB_14075c1ea;
                if (lVar9 == 0x15c) goto LAB_14075c21e;
                if (lVar9 == 0x15b) goto LAB_14075b542;
                if (lVar9 != 0x15a) {
                  if (lVar9 == 0x159) goto LAB_14075c1ea;
                  if (lVar9 == 0x15f) {
                    dVar25 = (double)(*(int *)param_3[1] * **(int **)(param_2 + 8));
                    goto LAB_14075dbd6;
                  }
                  if (lVar9 == 0x15e) {
                    fVar24 = (float)(*(int *)param_3[1] * **(int **)(param_2 + 8));
                    goto LAB_14075fac2;
                  }
joined_r0x000140760669:
                  if (lVar9 == 0x152) {
LAB_14075c1ea:
                    *(char *)param_4[1] =
                         (char)*(undefined4 *)param_3[1] * (char)**(undefined4 **)(param_2 + 8);
                    return 0;
                  }
LAB_14075ff85:
                  redabortreset_bluesreset
                            (7,
                             "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                             ,0xf6,"unexpected type in binary expression");
                  (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              goto LAB_14075ba48;
            }
LAB_14075c21e:
            uVar16 = (ulonglong)**(int **)(param_2 + 8);
            uVar15 = (ulonglong)*(int *)param_3[1];
          }
          else if (lVar9 == 0x15a) {
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 != 0x156) {
                if (lVar9 == 0x155) goto LAB_14075c1c2;
                if (lVar9 == 0x154) goto LAB_14075d0f4;
                if (lVar9 == 0x15c) goto LAB_14075c99d;
                if (lVar9 != 0x15b) {
                  if (lVar9 == 0x15a) goto LAB_14075c1c2;
                  if (lVar9 == 0x159) goto LAB_14075d0f4;
                  if (lVar9 == 0x15f) {
                    uVar7 = (uint)**(short **)(param_2 + 8);
                    uVar14 = (uint)*(short *)param_3[1];
                    goto LAB_14075d951;
                  }
                  if (lVar9 != 0x15e) goto joined_r0x000140760bbc;
                  uVar7 = (uint)**(short **)(param_2 + 8);
                  uVar14 = (uint)*(short *)param_3[1];
                  goto LAB_14075f965;
                }
              }
              uVar7 = (uint)**(short **)(param_2 + 8);
              uVar14 = (uint)*(short *)param_3[1];
              goto LAB_14075c1b1;
            }
LAB_14075c99d:
            uVar16 = (ulonglong)**(short **)(param_2 + 8);
            uVar15 = (ulonglong)*(short *)param_3[1];
          }
          else {
            if (lVar9 != 0x159) {
              if (lVar9 != 0x15f) {
                if (lVar9 != 0x15e) goto LAB_14075ff85;
                lVar9 = *param_4;
                if (lVar9 == 0x157) {
                  fVar24 = **(float **)(param_2 + 8) * *(float *)param_3[1];
                  goto LAB_14075e078;
                }
                if (lVar9 == 0x156) {
                  uVar20 = (undefined4)(longlong)(**(float **)(param_2 + 8) * *(float *)param_3[1]);
                  goto LAB_14075d5dc;
                }
                if (lVar9 == 0x155) {
LAB_14075ef6c:
                  uVar6 = (ushort)(int)(**(float **)(param_2 + 8) * *(float *)param_3[1]);
                  goto LAB_14075cc44;
                }
                if (lVar9 != 0x154) {
                  if (lVar9 == 0x15c) {
                    uVar15 = (ulonglong)(**(float **)(param_2 + 8) * *(float *)param_3[1]);
                    break;
                  }
                  if (lVar9 == 0x15b) {
                    uVar7 = (uint)(**(float **)(param_2 + 8) * *(float *)param_3[1]);
                    goto LAB_14075c441;
                  }
                  if (lVar9 == 0x15a) goto LAB_14075ef6c;
                  if (lVar9 != 0x159) {
                    if (lVar9 == 0x15f) {
                      dVar25 = (double)(**(float **)(param_2 + 8) * *(float *)param_3[1]);
                      goto LAB_14075dbd6;
                    }
                    if (lVar9 == 0x15e) {
                      fVar24 = **(float **)(param_2 + 8) * *(float *)param_3[1];
                      goto LAB_14075fac2;
                    }
                    if (lVar9 != 0x152) goto LAB_14075ff85;
                  }
                }
                fVar24 = **(float **)(param_2 + 8) * *(float *)param_3[1];
                goto LAB_14075f578;
              }
              lVar9 = *param_4;
              if (lVar9 == 0x157) {
                dVar25 = **(double **)(param_2 + 8) * *(double *)param_3[1];
                goto LAB_14075d989;
              }
              if (lVar9 == 0x156) {
                uVar20 = (undefined4)(longlong)(**(double **)(param_2 + 8) * *(double *)param_3[1]);
LAB_14075d5dc:
                *(undefined4 *)param_4[1] = uVar20;
                return 0;
              }
              if (lVar9 != 0x155) {
                if (lVar9 != 0x154) {
                  if (lVar9 == 0x15c) {
                    uVar15 = (ulonglong)(**(double **)(param_2 + 8) * *(double *)param_3[1]);
                    break;
                  }
                  if (lVar9 == 0x15b) {
                    uVar7 = (uint)(**(double **)(param_2 + 8) * *(double *)param_3[1]);
                    goto LAB_14075c441;
                  }
                  if (lVar9 == 0x15a) goto LAB_14075ee68;
                  if (lVar9 != 0x159) {
                    if (lVar9 == 0x15f) {
                      dVar25 = **(double **)(param_2 + 8) * *(double *)param_3[1];
                      goto LAB_14075dbd6;
                    }
                    if (lVar9 == 0x15e) {
                      fVar24 = (float)(**(double **)(param_2 + 8) * *(double *)param_3[1]);
                      goto LAB_14075fac2;
                    }
                    if (lVar9 != 0x152) goto LAB_14075ff85;
                  }
                }
                cVar5 = (char)(int)(**(double **)(param_2 + 8) * *(double *)param_3[1]);
LAB_14075d4a5:
                *(char *)param_4[1] = cVar5;
                return 0;
              }
LAB_14075ee68:
              uVar6 = (ushort)(int)(**(double **)(param_2 + 8) * *(double *)param_3[1]);
              goto LAB_14075cc44;
            }
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 == 0x156) {
LAB_14075dfe2:
                uVar7 = (uint)**(char **)(param_2 + 8);
                uVar14 = (uint)*(char *)param_3[1];
                goto LAB_14075c1b1;
              }
              if (lVar9 != 0x155) {
                if (lVar9 == 0x154) goto LAB_14075d0f4;
                if (lVar9 == 0x15c) goto LAB_14075d128;
                if (lVar9 == 0x15b) goto LAB_14075dfe2;
                if (lVar9 != 0x15a) {
                  if (lVar9 == 0x159) goto LAB_14075d0f4;
                  if (lVar9 == 0x15f) {
                    uVar7 = (uint)**(char **)(param_2 + 8);
                    uVar14 = (uint)*(char *)param_3[1];
                    goto LAB_14075d951;
                  }
                  if (lVar9 != 0x15e) goto joined_r0x000140760bbc;
                  uVar7 = (uint)**(char **)(param_2 + 8);
                  uVar14 = (uint)*(char *)param_3[1];
                  goto LAB_14075f965;
                }
              }
              uVar6 = (ushort)**(char **)(param_2 + 8);
              uVar13 = (ushort)*(char *)param_3[1];
              goto LAB_14075c8c5;
            }
LAB_14075d128:
            uVar16 = (ulonglong)**(char **)(param_2 + 8);
            uVar15 = (ulonglong)*(char *)param_3[1];
          }
        }
        uVar15 = uVar15 * uVar16;
        goto LAB_14075b588;
      }
      lVar9 = *param_4;
      if (lVar9 == 0x157) {
LAB_14075ad8d:
        uVar15 = (ulonglong)(uint)(*(int *)param_3[1] * **(int **)(param_2 + 8));
        goto LAB_14075b588;
      }
      if (lVar9 == 0x156) goto LAB_14075b542;
      if (lVar9 != 0x155) {
        if (lVar9 == 0x154) goto LAB_14075c1ea;
        if (lVar9 == 0x15c) goto LAB_14075ad8d;
        if (lVar9 == 0x15b) goto LAB_14075b542;
        if (lVar9 != 0x15a) {
          if (lVar9 == 0x159) goto LAB_14075c1ea;
          if (lVar9 != 0x15f) {
            if (lVar9 != 0x15e) goto joined_r0x000140760669;
            uVar15 = (ulonglong)(uint)(*(int *)param_3[1] * **(int **)(param_2 + 8));
            goto LAB_14075f033;
          }
          uVar15 = (ulonglong)(uint)(*(int *)param_3[1] * **(int **)(param_2 + 8));
          goto LAB_14075cbc5;
        }
      }
    }
LAB_14075ba48:
    sVar12 = (short)*(undefined4 *)param_3[1] * (short)**(undefined4 **)(param_2 + 8);
LAB_14075ba55:
    *(short *)param_4[1] = sVar12;
    return 0;
  case 6:
switchD_14075a963_caseD_6:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
      lVar9 = *param_4;
      if (lVar9 == 0x157) {
LAB_14075aa7c:
        uVar15 = *(longlong *)param_3[1] + **(longlong **)(param_2 + 8);
        goto LAB_14075b588;
      }
      if (lVar9 == 0x156) {
LAB_14075b4fc:
        iVar8 = *(int *)param_3[1] + **(int **)(param_2 + 8);
        goto LAB_14075b54f;
      }
      if (lVar9 != 0x155) {
        if (lVar9 == 0x154) goto LAB_14075c151;
        if (lVar9 == 0x15c) goto LAB_14075aa7c;
        if (lVar9 == 0x15b) goto LAB_14075b4fc;
        if (lVar9 != 0x15a) {
          if (lVar9 == 0x159) goto LAB_14075c151;
          if (lVar9 == 0x15f) {
            uVar15 = *(longlong *)param_3[1] + **(longlong **)(param_2 + 8);
            goto LAB_14075c4d0;
          }
          if (lVar9 != 0x15e) goto joined_r0x000140760637;
          uVar15 = *(longlong *)param_3[1] + **(longlong **)(param_2 + 8);
          goto joined_r0x00014075e671;
        }
      }
      goto LAB_14075b98f;
    }
    if (lVar9 != 0x156) {
      if (lVar9 == 0x155) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 != 0x156) {
            if (lVar9 == 0x155) {
LAB_14075c12a:
              *(short *)param_4[1] = *(short *)param_3[1] + **(short **)(param_2 + 8);
              return 0;
            }
            if (lVar9 == 0x154) goto LAB_14075d035;
            if (lVar9 == 0x15c) goto LAB_14075b08d;
            if (lVar9 != 0x15b) {
              if (lVar9 == 0x15a) goto LAB_14075c12a;
              if (lVar9 == 0x159) goto LAB_14075d035;
              if (lVar9 != 0x15f) {
                if (lVar9 != 0x15e) {
joined_r0x000140760b84:
                  if (lVar9 == 0x152) {
LAB_14075d035:
                    *(char *)param_4[1] = *(char *)param_3[1] + **(char **)(param_2 + 8);
                    return 0;
                  }
                  goto LAB_14075ff0f;
                }
                uVar7 = (uint)**(ushort **)(param_2 + 8);
                uVar14 = (uint)*(ushort *)param_3[1];
LAB_14075f90a:
                fVar24 = (float)(int)(uVar14 + uVar7);
                goto LAB_14075fac2;
              }
              uVar7 = (uint)**(ushort **)(param_2 + 8);
              uVar14 = (uint)*(ushort *)param_3[1];
              goto LAB_14075d8aa;
            }
          }
          iVar8 = (uint)*(ushort *)param_3[1] + (uint)**(ushort **)(param_2 + 8);
          goto LAB_14075b54f;
        }
LAB_14075b08d:
        uVar15 = (ulonglong)*(ushort *)param_3[1] + (ulonglong)**(ushort **)(param_2 + 8);
        goto LAB_14075b588;
      }
      if (lVar9 == 0x154) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 == 0x156) {
LAB_14075c10c:
            iVar8 = (uint)*(byte *)param_3[1] + (uint)**(byte **)(param_2 + 8);
            goto LAB_14075b54f;
          }
          if (lVar9 != 0x155) {
            if (lVar9 == 0x154) goto LAB_14075d035;
            if (lVar9 == 0x15c) goto LAB_14075b526;
            if (lVar9 == 0x15b) goto LAB_14075c10c;
            if (lVar9 != 0x15a) {
              if (lVar9 == 0x159) goto LAB_14075d035;
              if (lVar9 != 0x15f) {
                if (lVar9 != 0x15e) goto joined_r0x000140760b84;
                uVar7 = (uint)**(byte **)(param_2 + 8);
                uVar14 = (uint)*(byte *)param_3[1];
                goto LAB_14075f90a;
              }
              uVar7 = (uint)**(byte **)(param_2 + 8);
              uVar14 = (uint)*(byte *)param_3[1];
              goto LAB_14075d8aa;
            }
          }
          sVar12 = (ushort)*(byte *)param_3[1] + (ushort)**(byte **)(param_2 + 8);
          goto LAB_14075ba55;
        }
LAB_14075b526:
        uVar15 = (ulonglong)*(byte *)param_3[1] + (ulonglong)**(byte **)(param_2 + 8);
        goto LAB_14075b588;
      }
      if (lVar9 == 0x15c) {
        lVar9 = *param_4;
        if (lVar9 == 0x157) goto LAB_14075aa7c;
        if (lVar9 == 0x156) goto LAB_14075b4fc;
        if (lVar9 != 0x155) {
          if (lVar9 == 0x154) goto LAB_14075c151;
          if (lVar9 == 0x15c) goto LAB_14075aa7c;
          if (lVar9 == 0x15b) goto LAB_14075b4fc;
          if (lVar9 != 0x15a) {
            if (lVar9 == 0x159) goto LAB_14075c151;
            if (lVar9 == 0x15f) {
              uVar15 = *(longlong *)param_3[1] + **(longlong **)(param_2 + 8);
              goto LAB_14075cbc5;
            }
            if (lVar9 == 0x15e) {
              uVar15 = *(longlong *)param_3[1] + **(longlong **)(param_2 + 8);
              goto LAB_14075f033;
            }
joined_r0x000140760637:
            if (lVar9 == 0x152) {
LAB_14075c151:
              *(char *)param_4[1] =
                   (char)*(undefined4 *)param_3[1] + (char)**(undefined4 **)(param_2 + 8);
              return 0;
            }
LAB_14075ff0f:
            redabortreset_bluesreset
                      (7,
                       "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                       ,0xf0,"unexpected type in binary expression");
            (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
LAB_14075b98f:
        sVar12 = (short)*(undefined4 *)param_3[1] + (short)**(undefined4 **)(param_2 + 8);
        goto LAB_14075ba55;
      }
      if (lVar9 == 0x15b) {
        lVar9 = *param_4;
        if (lVar9 == 0x157) {
LAB_14075c184:
          uVar15 = (longlong)*(int *)param_3[1] + (longlong)**(int **)(param_2 + 8);
          goto LAB_14075b588;
        }
        if (lVar9 == 0x156) goto LAB_14075b4fc;
        if (lVar9 != 0x155) {
          if (lVar9 == 0x154) goto LAB_14075c151;
          if (lVar9 == 0x15c) goto LAB_14075c184;
          if (lVar9 == 0x15b) goto LAB_14075b4fc;
          if (lVar9 != 0x15a) {
            if (lVar9 == 0x159) goto LAB_14075c151;
            if (lVar9 == 0x15f) {
              dVar25 = (double)(*(int *)param_3[1] + **(int **)(param_2 + 8));
              goto LAB_14075dbd6;
            }
            if (lVar9 == 0x15e) {
              fVar24 = (float)(*(int *)param_3[1] + **(int **)(param_2 + 8));
              goto LAB_14075fac2;
            }
            goto joined_r0x000140760637;
          }
        }
        goto LAB_14075b98f;
      }
      if (lVar9 == 0x15a) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 != 0x156) {
            if (lVar9 == 0x155) goto LAB_14075c12a;
            if (lVar9 == 0x154) goto LAB_14075d035;
            if (lVar9 == 0x15c) goto LAB_14075c896;
            if (lVar9 != 0x15b) {
              if (lVar9 == 0x15a) goto LAB_14075c12a;
              if (lVar9 == 0x159) goto LAB_14075d035;
              if (lVar9 != 0x15f) {
                if (lVar9 != 0x15e) goto joined_r0x000140760b84;
                uVar7 = (uint)**(short **)(param_2 + 8);
                uVar14 = (uint)*(short *)param_3[1];
                goto LAB_14075f90a;
              }
              uVar7 = (uint)**(short **)(param_2 + 8);
              uVar14 = (uint)*(short *)param_3[1];
LAB_14075d8aa:
              dVar25 = (double)(int)(uVar14 + uVar7);
              goto LAB_14075dbd6;
            }
          }
          iVar8 = (int)*(short *)param_3[1] + (int)**(short **)(param_2 + 8);
          goto LAB_14075b54f;
        }
LAB_14075c896:
        uVar15 = (longlong)*(short *)param_3[1] + (longlong)**(short **)(param_2 + 8);
        goto LAB_14075b588;
      }
      if (lVar9 == 0x159) {
        lVar9 = *param_4;
        if (lVar9 != 0x157) {
          if (lVar9 != 0x156) {
            if (lVar9 == 0x155) {
LAB_14075e6aa:
              *(short *)param_4[1] = (short)*(char *)param_3[1] + (short)**(char **)(param_2 + 8);
              return 0;
            }
            if (lVar9 == 0x154) goto LAB_14075d035;
            if (lVar9 == 0x15c) goto LAB_14075d069;
            if (lVar9 != 0x15b) {
              if (lVar9 == 0x15a) goto LAB_14075e6aa;
              if (lVar9 == 0x159) goto LAB_14075d035;
              if (lVar9 != 0x15f) {
                if (lVar9 != 0x15e) goto joined_r0x000140760b84;
                uVar7 = (uint)**(char **)(param_2 + 8);
                uVar14 = (uint)*(char *)param_3[1];
                goto LAB_14075f90a;
              }
              uVar7 = (uint)**(char **)(param_2 + 8);
              uVar14 = (uint)*(char *)param_3[1];
              goto LAB_14075d8aa;
            }
          }
          iVar8 = (int)*(char *)param_3[1] + (int)**(char **)(param_2 + 8);
          goto LAB_14075b54f;
        }
LAB_14075d069:
        uVar15 = (longlong)*(char *)param_3[1] + (longlong)**(char **)(param_2 + 8);
        goto LAB_14075b588;
      }
      if (lVar9 == 0x15f) {
        lVar9 = *param_4;
        if (lVar9 == 0x157) {
          dVar25 = **(double **)(param_2 + 8) + *(double *)param_3[1];
          goto LAB_14075d989;
        }
        if (lVar9 == 0x156) {
          dVar25 = **(double **)(param_2 + 8) + *(double *)param_3[1];
LAB_14075e691:
          *(int *)param_4[1] = (int)(longlong)dVar25;
          return 0;
        }
        if (lVar9 != 0x155) {
          if (lVar9 != 0x154) {
            if (lVar9 == 0x15c) {
              dVar25 = **(double **)(param_2 + 8) + *(double *)param_3[1];
              goto LAB_14075f940;
            }
            if (lVar9 == 0x15b) {
              uVar7 = (uint)(**(double **)(param_2 + 8) + *(double *)param_3[1]);
              goto LAB_14075c441;
            }
            if (lVar9 == 0x15a) goto LAB_14075edda;
            if (lVar9 != 0x159) {
              if (lVar9 == 0x15f) {
                dVar25 = **(double **)(param_2 + 8) + *(double *)param_3[1];
                goto LAB_14075dbd6;
              }
              if (lVar9 == 0x15e) {
                fVar24 = (float)(**(double **)(param_2 + 8) + *(double *)param_3[1]);
                goto LAB_14075fac2;
              }
              if (lVar9 != 0x152) goto LAB_14075ff0f;
            }
          }
          cVar5 = (char)(int)(**(double **)(param_2 + 8) + *(double *)param_3[1]);
          goto LAB_14075d4a5;
        }
LAB_14075edda:
        uVar6 = (ushort)(int)(**(double **)(param_2 + 8) + *(double *)param_3[1]);
        goto LAB_14075cc44;
      }
      if (lVar9 != 0x15e) goto LAB_14075ff0f;
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) {
          fVar24 = **(float **)(param_2 + 8) + *(float *)param_3[1];
LAB_14075e780:
          *(int *)param_4[1] = (int)(longlong)fVar24;
          return 0;
        }
        if (lVar9 == 0x155) {
LAB_14075ef4a:
          uVar6 = (ushort)(int)(**(float **)(param_2 + 8) + *(float *)param_3[1]);
          goto LAB_14075cc44;
        }
        if (lVar9 != 0x154) {
          if (lVar9 == 0x15c) {
            fVar24 = **(float **)(param_2 + 8) + *(float *)param_3[1];
            goto LAB_14075fa0e;
          }
          if (lVar9 == 0x15b) {
            uVar7 = (uint)(**(float **)(param_2 + 8) + *(float *)param_3[1]);
            goto LAB_14075c441;
          }
          if (lVar9 == 0x15a) goto LAB_14075ef4a;
          if (lVar9 != 0x159) {
            if (lVar9 == 0x15f) {
              dVar25 = (double)(**(float **)(param_2 + 8) + *(float *)param_3[1]);
              goto LAB_14075dbd6;
            }
            if (lVar9 == 0x15e) {
              fVar24 = **(float **)(param_2 + 8) + *(float *)param_3[1];
              goto LAB_14075fac2;
            }
            if (lVar9 != 0x152) goto LAB_14075ff0f;
          }
        }
        fVar24 = **(float **)(param_2 + 8) + *(float *)param_3[1];
        goto LAB_14075f578;
      }
      fVar24 = **(float **)(param_2 + 8) + *(float *)param_3[1];
LAB_14075e078:
      uVar15 = (ulonglong)fVar24;
      uVar16 = (ulonglong)(fVar24 - 9.223372e+18);
LAB_14075e091:
      *(ulonglong *)param_4[1] = uVar16 & (longlong)uVar15 >> 0x3f | uVar15;
      return 0;
    }
    lVar9 = *param_4;
    if (lVar9 == 0x157) {
LAB_14075ad60:
      uVar15 = (ulonglong)(uint)(*(int *)param_3[1] + **(int **)(param_2 + 8));
      goto LAB_14075b588;
    }
    if (lVar9 == 0x156) goto LAB_14075b4fc;
    if (lVar9 == 0x155) goto LAB_14075b98f;
    if (lVar9 == 0x154) goto LAB_14075c151;
    if (lVar9 == 0x15c) goto LAB_14075ad60;
    if (lVar9 == 0x15b) goto LAB_14075b4fc;
    if (lVar9 == 0x15a) goto LAB_14075b98f;
    if (lVar9 == 0x159) goto LAB_14075c151;
    if (lVar9 != 0x15f) {
      if (lVar9 == 0x15e) {
        uVar15 = (ulonglong)(uint)(*(int *)param_3[1] + **(int **)(param_2 + 8));
        goto LAB_14075f033;
      }
      goto joined_r0x000140760637;
    }
    uVar15 = (ulonglong)(uint)(*(int *)param_3[1] + **(int **)(param_2 + 8));
LAB_14075cbc5:
    dVar25 = (double)(longlong)uVar15;
LAB_14075dbd6:
    *(double *)param_4[1] = dVar25;
    return 0;
  case 8:
switchD_14075a963_caseD_8:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) {
LAB_14075b4ac:
          uVar7 = **(int **)(param_2 + 8) - *(int *)param_3[1];
          goto LAB_14075c441;
        }
        if (lVar9 == 0x155) {
LAB_14075b8cf:
          uVar6 = (short)**(undefined4 **)(param_2 + 8) - (short)*(undefined4 *)param_3[1];
          goto LAB_14075cc44;
        }
        if (lVar9 != 0x154) {
          if (lVar9 == 0x15c) goto LAB_14075aa46;
          if (lVar9 == 0x15b) goto LAB_14075b4ac;
          if (lVar9 == 0x15a) goto LAB_14075b8cf;
          if (lVar9 != 0x159) {
            if (lVar9 == 0x15f) {
              uVar15 = **(longlong **)(param_2 + 8) - *(longlong *)param_3[1];
              goto LAB_14075c4d0;
            }
            if (lVar9 != 0x15e) goto joined_r0x000140760605;
            uVar15 = **(longlong **)(param_2 + 8) - *(longlong *)param_3[1];
            goto joined_r0x00014075e671;
          }
        }
LAB_14075c0c3:
        cVar5 = (char)**(undefined4 **)(param_2 + 8) - (char)*(undefined4 *)param_3[1];
        goto LAB_14075d4a5;
      }
LAB_14075aa46:
      uVar15 = **(longlong **)(param_2 + 8) - *(longlong *)param_3[1];
      puVar17 = (ulonglong *)param_4[1];
      goto LAB_14075cef7;
    }
    if (lVar9 == 0x156) {
      lVar9 = *param_4;
      if (lVar9 == 0x157) {
LAB_14075ad2f:
        uVar15 = (ulonglong)(uint)(**(int **)(param_2 + 8) - *(int *)param_3[1]);
        puVar17 = (ulonglong *)param_4[1];
        goto LAB_14075cef7;
      }
      if (lVar9 == 0x156) goto LAB_14075b4ac;
      if (lVar9 == 0x155) goto LAB_14075b8cf;
      if (lVar9 != 0x154) {
        if (lVar9 == 0x15c) goto LAB_14075ad2f;
        if (lVar9 == 0x15b) goto LAB_14075b4ac;
        if (lVar9 == 0x15a) goto LAB_14075b8cf;
        if (lVar9 != 0x159) {
          if (lVar9 == 0x15f) {
            dVar25 = (double)(uint)(**(int **)(param_2 + 8) - *(int *)param_3[1]);
            goto LAB_14075dbd6;
          }
          if (lVar9 == 0x15e) {
            fVar24 = (float)(uint)(**(int **)(param_2 + 8) - *(int *)param_3[1]);
            goto LAB_14075fac2;
          }
joined_r0x000140760605:
          if (lVar9 != 0x152) goto LAB_14075fe9a;
        }
      }
      goto LAB_14075c0c3;
    }
    if (lVar9 == 0x155) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 != 0x156) {
          if (lVar9 == 0x155) {
LAB_14075c09c:
            *(short *)param_4[1] = **(short **)(param_2 + 8) - *(short *)param_3[1];
            return 0;
          }
          if (lVar9 == 0x154) goto LAB_14075cf7a;
          if (lVar9 == 0x15c) goto LAB_14075afde;
          if (lVar9 != 0x15b) {
            if (lVar9 == 0x15a) goto LAB_14075c09c;
            if (lVar9 == 0x159) goto LAB_14075cf7a;
            if (lVar9 == 0x15f) {
              uVar7 = (uint)**(ushort **)(param_2 + 8);
              uVar14 = (uint)*(ushort *)param_3[1];
              goto LAB_14075d805;
            }
            if (lVar9 != 0x15e) goto joined_r0x000140760b72;
            uVar7 = (uint)**(ushort **)(param_2 + 8);
            uVar14 = (uint)*(ushort *)param_3[1];
LAB_14075f8bf:
            uVar7 = uVar7 - uVar14;
            goto LAB_14075fabe;
          }
        }
        uVar7 = (uint)**(ushort **)(param_2 + 8) - (uint)*(ushort *)param_3[1];
        goto LAB_14075c441;
      }
LAB_14075afde:
      uVar15 = (ulonglong)**(ushort **)(param_2 + 8);
      uVar16 = (ulonglong)*(ushort *)param_3[1];
LAB_14075b4e7:
      uVar15 = uVar15 - uVar16;
      puVar17 = (ulonglong *)param_4[1];
      goto LAB_14075cef7;
    }
    if (lVar9 == 0x154) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) {
LAB_14075c07e:
          uVar7 = (uint)**(byte **)(param_2 + 8) - (uint)*(byte *)param_3[1];
          goto LAB_14075c441;
        }
        if (lVar9 != 0x155) {
          if (lVar9 == 0x154) goto LAB_14075cf7a;
          if (lVar9 == 0x15c) goto LAB_14075b4d9;
          if (lVar9 == 0x15b) goto LAB_14075c07e;
          if (lVar9 != 0x15a) {
            if (lVar9 == 0x159) goto LAB_14075cf7a;
            if (lVar9 != 0x15f) {
              if (lVar9 == 0x15e) {
                uVar7 = (uint)**(byte **)(param_2 + 8);
                uVar14 = (uint)*(byte *)param_3[1];
                goto LAB_14075f8bf;
              }
              goto joined_r0x000140760b72;
            }
            uVar7 = (uint)**(byte **)(param_2 + 8);
            uVar14 = (uint)*(byte *)param_3[1];
LAB_14075d805:
            uVar7 = uVar7 - uVar14;
            goto LAB_14075dbd2;
          }
        }
        uVar6 = (ushort)**(byte **)(param_2 + 8) - (ushort)*(byte *)param_3[1];
        goto LAB_14075cc44;
      }
LAB_14075b4d9:
      uVar15 = (ulonglong)**(byte **)(param_2 + 8);
      uVar16 = (ulonglong)*(byte *)param_3[1];
      goto LAB_14075b4e7;
    }
    if (lVar9 == 0x15c) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) goto LAB_14075b4ac;
        if (lVar9 == 0x155) goto LAB_14075b8cf;
        if (lVar9 != 0x154) {
          if (lVar9 == 0x15c) goto LAB_14075aa46;
          if (lVar9 == 0x15b) goto LAB_14075b4ac;
          if (lVar9 == 0x15a) goto LAB_14075b8cf;
          if (lVar9 != 0x159) {
            if (lVar9 == 0x15f) {
              dVar25 = (double)(**(longlong **)(param_2 + 8) - *(longlong *)param_3[1]);
              goto LAB_14075dbd6;
            }
            if (lVar9 == 0x15e) {
              fVar24 = (float)(**(longlong **)(param_2 + 8) - *(longlong *)param_3[1]);
              goto LAB_14075fac2;
            }
            goto joined_r0x000140760605;
          }
        }
        goto LAB_14075c0c3;
      }
      goto LAB_14075aa46;
    }
    if (lVar9 == 0x15b) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) goto LAB_14075b4ac;
        if (lVar9 == 0x155) goto LAB_14075b8cf;
        if (lVar9 != 0x154) {
          if (lVar9 == 0x15c) goto LAB_14075c0f0;
          if (lVar9 == 0x15b) goto LAB_14075b4ac;
          if (lVar9 == 0x15a) goto LAB_14075b8cf;
          if (lVar9 != 0x159) {
            if (lVar9 == 0x15f) {
              uVar7 = **(int **)(param_2 + 8) - *(int *)param_3[1];
              goto LAB_14075dbd2;
            }
            if (lVar9 != 0x15e) goto joined_r0x000140760605;
            uVar7 = **(int **)(param_2 + 8) - *(int *)param_3[1];
            goto LAB_14075fabe;
          }
        }
        goto LAB_14075c0c3;
      }
LAB_14075c0f0:
      uVar15 = (ulonglong)**(int **)(param_2 + 8);
      uVar16 = (ulonglong)*(int *)param_3[1];
      goto LAB_14075b4e7;
    }
    if (lVar9 == 0x15a) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 != 0x156) {
          if (lVar9 == 0x155) goto LAB_14075c09c;
          if (lVar9 == 0x154) goto LAB_14075cf7a;
          if (lVar9 == 0x15c) goto LAB_14075c794;
          if (lVar9 != 0x15b) {
            if (lVar9 == 0x15a) goto LAB_14075c09c;
            if (lVar9 == 0x159) goto LAB_14075cf7a;
            if (lVar9 == 0x15f) {
              uVar7 = (uint)**(short **)(param_2 + 8);
              uVar14 = (uint)*(short *)param_3[1];
              goto LAB_14075d805;
            }
            if (lVar9 == 0x15e) {
              uVar7 = (uint)**(short **)(param_2 + 8);
              uVar14 = (uint)*(short *)param_3[1];
              goto LAB_14075f8bf;
            }
joined_r0x000140760b72:
            if (lVar9 == 0x152) {
LAB_14075cf7a:
              *(char *)param_4[1] = **(char **)(param_2 + 8) - *(char *)param_3[1];
              return 0;
            }
LAB_14075fe9a:
            redabortreset_bluesreset
                      (7,
                       "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                       ,0xf3,"unexpected type in binary expression");
            (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        uVar7 = (int)**(short **)(param_2 + 8) - (int)*(short *)param_3[1];
        goto LAB_14075c441;
      }
LAB_14075c794:
      uVar15 = (ulonglong)**(short **)(param_2 + 8);
      uVar16 = (ulonglong)*(short *)param_3[1];
      goto LAB_14075b4e7;
    }
    if (lVar9 == 0x159) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) {
LAB_14075de96:
          uVar7 = (int)**(char **)(param_2 + 8) - (int)*(char *)param_3[1];
          goto LAB_14075c441;
        }
        if (lVar9 != 0x155) {
          if (lVar9 == 0x154) goto LAB_14075cf7a;
          if (lVar9 == 0x15c) goto LAB_14075cfae;
          if (lVar9 == 0x15b) goto LAB_14075de96;
          if (lVar9 != 0x15a) {
            if (lVar9 == 0x159) goto LAB_14075cf7a;
            if (lVar9 == 0x15f) {
              uVar7 = (uint)**(char **)(param_2 + 8);
              uVar14 = (uint)*(char *)param_3[1];
              goto LAB_14075d805;
            }
            if (lVar9 == 0x15e) {
              uVar7 = (uint)**(char **)(param_2 + 8);
              uVar14 = (uint)*(char *)param_3[1];
              goto LAB_14075f8bf;
            }
            goto joined_r0x000140760b72;
          }
        }
        uVar6 = (short)**(char **)(param_2 + 8) - (short)*(char *)param_3[1];
        goto LAB_14075cc44;
      }
LAB_14075cfae:
      uVar15 = (ulonglong)**(char **)(param_2 + 8);
      uVar16 = (ulonglong)*(char *)param_3[1];
      goto LAB_14075b4e7;
    }
    if (lVar9 == 0x15f) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) {
          dVar25 = **(double **)(param_2 + 8) - *(double *)param_3[1];
          goto LAB_14075e691;
        }
        if (lVar9 == 0x155) {
LAB_14075ed4d:
          uVar6 = (ushort)(int)(**(double **)(param_2 + 8) - *(double *)param_3[1]);
          goto LAB_14075cc44;
        }
        if (lVar9 == 0x154) {
LAB_14075f469:
          cVar5 = (char)(int)(**(double **)(param_2 + 8) - *(double *)param_3[1]);
          goto LAB_14075d4a5;
        }
        if (lVar9 != 0x15c) {
          if (lVar9 == 0x15b) {
            uVar7 = (uint)(**(double **)(param_2 + 8) - *(double *)param_3[1]);
            goto LAB_14075c441;
          }
          if (lVar9 == 0x15a) goto LAB_14075ed4d;
          if (lVar9 != 0x159) {
            if (lVar9 == 0x15f) {
              dVar25 = **(double **)(param_2 + 8) - *(double *)param_3[1];
              goto LAB_14075dbd6;
            }
            if (lVar9 == 0x15e) {
              fVar24 = (float)(**(double **)(param_2 + 8) - *(double *)param_3[1]);
              goto LAB_14075fac2;
            }
            if (lVar9 != 0x152) goto LAB_14075fe9a;
          }
          goto LAB_14075f469;
        }
        dVar25 = **(double **)(param_2 + 8) - *(double *)param_3[1];
LAB_14075f940:
        uVar15 = (ulonglong)dVar25;
        puVar17 = (ulonglong *)param_4[1];
        goto LAB_14075cef7;
      }
      dVar25 = **(double **)(param_2 + 8) - *(double *)param_3[1];
LAB_14075d989:
      uVar15 = (ulonglong)dVar25;
      uVar16 = (ulonglong)(dVar25 - 9.223372036854776e+18);
      goto LAB_14075e091;
    }
    if (lVar9 != 0x15e) goto LAB_14075fe9a;
    lVar9 = *param_4;
    if (lVar9 == 0x157) {
      fVar24 = **(float **)(param_2 + 8) - *(float *)param_3[1];
      goto LAB_14075e078;
    }
    if (lVar9 == 0x156) {
      fVar24 = **(float **)(param_2 + 8) - *(float *)param_3[1];
      goto LAB_14075e780;
    }
    if (lVar9 == 0x155) {
LAB_14075ef28:
      uVar6 = (ushort)(int)(**(float **)(param_2 + 8) - *(float *)param_3[1]);
      goto LAB_14075cc44;
    }
    if (lVar9 != 0x154) {
      if (lVar9 != 0x15c) {
        if (lVar9 == 0x15b) {
          uVar7 = (uint)(**(float **)(param_2 + 8) - *(float *)param_3[1]);
          goto LAB_14075c441;
        }
        if (lVar9 == 0x15a) goto LAB_14075ef28;
        if (lVar9 != 0x159) {
          if (lVar9 == 0x15f) {
            dVar25 = (double)(**(float **)(param_2 + 8) - *(float *)param_3[1]);
            goto LAB_14075dbd6;
          }
          if (lVar9 == 0x15e) {
            fVar24 = **(float **)(param_2 + 8) - *(float *)param_3[1];
            goto LAB_14075fac2;
          }
          if (lVar9 != 0x152) goto LAB_14075fe9a;
        }
        goto LAB_14075f532;
      }
      fVar24 = **(float **)(param_2 + 8) - *(float *)param_3[1];
LAB_14075fa0e:
      uVar15 = (ulonglong)fVar24;
      puVar17 = (ulonglong *)param_4[1];
      goto LAB_14075cef7;
    }
LAB_14075f532:
    fVar24 = **(float **)(param_2 + 8) - *(float *)param_3[1];
LAB_14075f578:
    cVar5 = (char)(int)fVar24;
    goto LAB_14075d4a5;
  case 0x3f:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
LAB_14075ab86:
      bVar21 = **(longlong **)(param_2 + 8) == *(longlong *)param_3[1];
    }
    else if (lVar9 == 0x156) {
LAB_14075adf7:
      bVar21 = **(int **)(param_2 + 8) == *(int *)param_3[1];
    }
    else if (lVar9 == 0x155) {
LAB_14075b22d:
      bVar21 = **(short **)(param_2 + 8) == *(short *)param_3[1];
    }
    else {
      if (lVar9 != 0x154) {
        if (lVar9 == 0x15c) goto LAB_14075ab86;
        if (lVar9 == 0x15b) goto LAB_14075adf7;
        if (lVar9 == 0x15a) goto LAB_14075b22d;
        if (((lVar9 != 0x159) && (lVar9 != 0x152)) && (lVar9 != 0x151)) {
          if (lVar9 == 0x161) {
            bVar21 = **(longlong **)(param_2 + 8) == *(longlong *)param_3[1];
          }
          else {
            if (lVar9 != 0x160) {
              redabortreset_bluesreset
                        (7,
                         "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                         ,0xff,"unexpected type in binary expression");
              (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
              abort();
            }
            pcVar18 = (char *)**(undefined8 **)(param_2 + 8);
            _Str2 = *(char **)param_3[1];
            if (_Str2 == (char *)0x0 || pcVar18 == (char *)0x0) goto LAB_14075f174;
            iVar8 = strcmp(pcVar18,_Str2);
            bVar21 = iVar8 == 0;
          }
LAB_14075f177:
          lVar9 = param_4[1];
          goto LAB_14075b622;
        }
      }
      bVar21 = **(char **)(param_2 + 8) == *(char *)param_3[1];
    }
    lVar9 = param_4[1];
LAB_14075b622:
    *(bool *)lVar9 = bVar21;
    return 0;
  case 0x40:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
LAB_14075ac93:
      bVar21 = **(longlong **)(param_2 + 8) == *(longlong *)param_3[1];
    }
    else {
      if (lVar9 == 0x156) {
LAB_14075aed9:
        bVar21 = **(int **)(param_2 + 8) == *(int *)param_3[1];
        goto LAB_14075b7cd;
      }
      if (lVar9 == 0x155) {
LAB_14075b3e5:
        bVar21 = **(short **)(param_2 + 8) == *(short *)param_3[1];
        goto LAB_14075b7cd;
      }
      if (lVar9 != 0x154) {
        if (lVar9 == 0x15c) goto LAB_14075ac93;
        if (lVar9 == 0x15b) goto LAB_14075aed9;
        if (lVar9 == 0x15a) goto LAB_14075b3e5;
        if (((lVar9 != 0x159) && (lVar9 != 0x152)) && (lVar9 != 0x151)) {
          if (lVar9 == 0x161) {
            bVar21 = **(longlong **)(param_2 + 8) == *(longlong *)param_3[1];
LAB_14075f122:
            *(bool *)param_4[1] = !bVar21;
            return 0;
          }
          if (lVar9 != 0x160) {
            redabortreset_bluesreset
                      (7,
                       "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                       ,0x102,"unexpected type in binary expression");
            (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pcVar18 = (char *)**(undefined8 **)(param_2 + 8);
          _Str2 = *(char **)param_3[1];
          if (_Str2 != (char *)0x0 && pcVar18 != (char *)0x0) {
            iVar8 = strcmp(pcVar18,_Str2);
            bVar21 = iVar8 == 0;
            goto LAB_14075f122;
          }
LAB_14075f174:
          bVar21 = pcVar18 == _Str2;
          goto LAB_14075f177;
        }
      }
      bVar21 = **(char **)(param_2 + 8) == *(char *)param_3[1];
    }
LAB_14075b7cd:
    *(bool *)param_4[1] = !bVar21;
    return 0;
  case 0x41:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
      bVar22 = **(ulonglong **)(param_2 + 8) < *(ulonglong *)param_3[1];
      bVar21 = **(ulonglong **)(param_2 + 8) == *(ulonglong *)param_3[1];
      goto LAB_14075b781;
    }
    if (lVar9 == 0x156) {
      bVar22 = **(uint **)(param_2 + 8) < *(uint *)param_3[1];
      bVar21 = **(uint **)(param_2 + 8) == *(uint *)param_3[1];
      goto LAB_14075b781;
    }
    if (lVar9 == 0x155) {
      bVar22 = **(ushort **)(param_2 + 8) < *(ushort *)param_3[1];
      bVar21 = **(ushort **)(param_2 + 8) == *(ushort *)param_3[1];
      goto LAB_14075b781;
    }
    if (lVar9 == 0x154) {
LAB_14075b774:
      bVar22 = **(byte **)(param_2 + 8) < *(byte *)param_3[1];
      bVar21 = **(byte **)(param_2 + 8) == *(byte *)param_3[1];
LAB_14075b781:
      *(bool *)param_4[1] = !bVar22 && !bVar21;
      return 0;
    }
    if (lVar9 == 0x15c) {
      lVar9 = **(longlong **)(param_2 + 8);
      lVar4 = *(longlong *)param_3[1];
      bVar23 = SBORROW8(lVar9,lVar4);
      bVar22 = lVar9 - lVar4 < 0;
      bVar21 = lVar9 == lVar4;
      goto LAB_14075d54b;
    }
    if (lVar9 == 0x15b) {
      iVar3 = **(int **)(param_2 + 8);
      iVar8 = *(int *)param_3[1];
      bVar23 = SBORROW4(iVar3,iVar8);
      bVar22 = iVar3 - iVar8 < 0;
      bVar21 = iVar3 == iVar8;
      goto LAB_14075d54b;
    }
    if (lVar9 == 0x15a) {
      sVar12 = **(short **)(param_2 + 8);
      sVar2 = *(short *)param_3[1];
      bVar23 = SBORROW2(sVar12,sVar2);
      bVar22 = (short)(sVar12 - sVar2) < 0;
      bVar21 = sVar12 == sVar2;
      goto LAB_14075d54b;
    }
    if (lVar9 != 0x159) {
      if (lVar9 == 0x15f) {
        bVar21 = **(double **)(param_2 + 8) == *(double *)param_3[1];
        bVar22 = **(double **)(param_2 + 8) < *(double *)param_3[1];
        goto LAB_14075b781;
      }
      if (lVar9 == 0x15e) {
        bVar21 = **(float **)(param_2 + 8) == *(float *)param_3[1];
        bVar22 = **(float **)(param_2 + 8) < *(float *)param_3[1];
        goto LAB_14075b781;
      }
      if (lVar9 != 0x152) {
        if (lVar9 != 0x151) {
          redabortreset_bluesreset
                    (7,
                     "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                     ,0x105,"unexpected type in binary expression");
          (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_14075b774;
      }
    }
    cVar5 = **(char **)(param_2 + 8);
    cVar1 = *(char *)param_3[1];
    bVar23 = SBORROW1(cVar5,cVar1);
    bVar22 = (char)(cVar5 - cVar1) < '\0';
    bVar21 = cVar5 == cVar1;
LAB_14075d54b:
    *(bool *)param_4[1] = !bVar21 && bVar23 == bVar22;
    return 0;
  case 0x42:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
      bVar21 = **(ulonglong **)(param_2 + 8) < *(ulonglong *)param_3[1];
      goto LAB_14075b7a7;
    }
    if (lVar9 == 0x156) {
      bVar21 = **(uint **)(param_2 + 8) < *(uint *)param_3[1];
      goto LAB_14075b7a7;
    }
    if (lVar9 == 0x155) {
      bVar21 = **(ushort **)(param_2 + 8) < *(ushort *)param_3[1];
      goto LAB_14075b7a7;
    }
    if (lVar9 == 0x154) {
LAB_14075b79a:
      bVar21 = **(byte **)(param_2 + 8) < *(byte *)param_3[1];
LAB_14075b7a7:
      *(bool *)param_4[1] = !bVar21;
      return 0;
    }
    if (lVar9 == 0x15c) {
      bVar22 = SBORROW8(**(longlong **)(param_2 + 8),*(longlong *)param_3[1]);
      bVar21 = **(longlong **)(param_2 + 8) - *(longlong *)param_3[1] < 0;
      goto LAB_14075d571;
    }
    if (lVar9 == 0x15b) {
      bVar22 = SBORROW4(**(int **)(param_2 + 8),*(int *)param_3[1]);
      bVar21 = **(int **)(param_2 + 8) - *(int *)param_3[1] < 0;
      goto LAB_14075d571;
    }
    if (lVar9 == 0x15a) {
      bVar22 = SBORROW2(**(short **)(param_2 + 8),*(short *)param_3[1]);
      bVar21 = (short)(**(short **)(param_2 + 8) - *(short *)param_3[1]) < 0;
      goto LAB_14075d571;
    }
    if (lVar9 != 0x159) {
      if (lVar9 == 0x15f) {
        bVar21 = **(double **)(param_2 + 8) < *(double *)param_3[1];
        goto LAB_14075b7a7;
      }
      if (lVar9 == 0x15e) {
        bVar21 = **(float **)(param_2 + 8) < *(float *)param_3[1];
        goto LAB_14075b7a7;
      }
      if (lVar9 != 0x152) {
        if (lVar9 != 0x151) {
          redabortreset_bluesreset
                    (7,
                     "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                     ,0x108,"unexpected type in binary expression");
          (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_14075b79a;
      }
    }
    bVar22 = SBORROW1(**(char **)(param_2 + 8),*(char *)param_3[1]);
    bVar21 = (char)(**(char **)(param_2 + 8) - *(char *)param_3[1]) < '\0';
LAB_14075d571:
    *(bool *)param_4[1] = bVar22 == bVar21;
    return 0;
  case 0x43:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
      bVar21 = **(ulonglong **)(param_2 + 8) < *(ulonglong *)param_3[1];
    }
    else if (lVar9 == 0x156) {
      bVar21 = **(uint **)(param_2 + 8) < *(uint *)param_3[1];
    }
    else if (lVar9 == 0x155) {
      bVar21 = **(ushort **)(param_2 + 8) < *(ushort *)param_3[1];
    }
    else {
      if (lVar9 != 0x154) {
        if (lVar9 == 0x15c) {
          bVar22 = SBORROW8(**(longlong **)(param_2 + 8),*(longlong *)param_3[1]);
          bVar21 = **(longlong **)(param_2 + 8) - *(longlong *)param_3[1] < 0;
        }
        else if (lVar9 == 0x15b) {
          bVar22 = SBORROW4(**(int **)(param_2 + 8),*(int *)param_3[1]);
          bVar21 = **(int **)(param_2 + 8) - *(int *)param_3[1] < 0;
        }
        else {
          if (lVar9 != 0x15a) {
            if (lVar9 == 0x159) {
LAB_14075d5b0:
              *(bool *)param_4[1] = **(char **)(param_2 + 8) < *(char *)param_3[1];
              return 0;
            }
            if (lVar9 == 0x15f) {
              bVar21 = *(double *)param_3[1] == **(double **)(param_2 + 8);
              bVar22 = *(double *)param_3[1] < **(double **)(param_2 + 8);
            }
            else {
              if (lVar9 != 0x15e) {
                if (lVar9 != 0x152) {
                  if (lVar9 == 0x151) {
                    *(bool *)param_4[1] = **(byte **)(param_2 + 8) < *(byte *)param_3[1];
                    return 0;
                  }
                  redabortreset_bluesreset
                            (7,
                             "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                             ,0x10b,"unexpected type in binary expression");
                  (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                goto LAB_14075d5b0;
              }
              bVar21 = *(float *)param_3[1] == **(float **)(param_2 + 8);
              bVar22 = *(float *)param_3[1] < **(float **)(param_2 + 8);
            }
            goto LAB_14075b781;
          }
          bVar22 = SBORROW2(**(short **)(param_2 + 8),*(short *)param_3[1]);
          bVar21 = (short)(**(short **)(param_2 + 8) - *(short *)param_3[1]) < 0;
        }
        *(bool *)param_4[1] = bVar22 != bVar21;
        return 0;
      }
      bVar21 = **(byte **)(param_2 + 8) < *(byte *)param_3[1];
    }
    *(bool *)param_4[1] = bVar21;
    return 0;
  case 0x44:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
      bVar21 = **(ulonglong **)(param_2 + 8) < *(ulonglong *)param_3[1];
      bVar22 = **(ulonglong **)(param_2 + 8) == *(ulonglong *)param_3[1];
      goto LAB_14075b814;
    }
    if (lVar9 == 0x156) {
      bVar21 = **(uint **)(param_2 + 8) < *(uint *)param_3[1];
      bVar22 = **(uint **)(param_2 + 8) == *(uint *)param_3[1];
      goto LAB_14075b814;
    }
    if (lVar9 == 0x155) {
      bVar21 = **(ushort **)(param_2 + 8) < *(ushort *)param_3[1];
      bVar22 = **(ushort **)(param_2 + 8) == *(ushort *)param_3[1];
      goto LAB_14075b814;
    }
    if (lVar9 == 0x154) {
LAB_14075b807:
      bVar21 = **(byte **)(param_2 + 8) < *(byte *)param_3[1];
      bVar22 = **(byte **)(param_2 + 8) == *(byte *)param_3[1];
LAB_14075b814:
      *(bool *)param_4[1] = bVar21 || bVar22;
      return 0;
    }
    if (lVar9 == 0x15c) {
      lVar9 = **(longlong **)(param_2 + 8);
      lVar4 = *(longlong *)param_3[1];
      bVar23 = SBORROW8(lVar9,lVar4);
      bVar22 = lVar9 - lVar4 < 0;
      bVar21 = lVar9 == lVar4;
      goto LAB_14075d597;
    }
    if (lVar9 == 0x15b) {
      iVar3 = **(int **)(param_2 + 8);
      iVar8 = *(int *)param_3[1];
      bVar23 = SBORROW4(iVar3,iVar8);
      bVar22 = iVar3 - iVar8 < 0;
      bVar21 = iVar3 == iVar8;
      goto LAB_14075d597;
    }
    if (lVar9 == 0x15a) {
      sVar12 = **(short **)(param_2 + 8);
      sVar2 = *(short *)param_3[1];
      bVar23 = SBORROW2(sVar12,sVar2);
      bVar22 = (short)(sVar12 - sVar2) < 0;
      bVar21 = sVar12 == sVar2;
      goto LAB_14075d597;
    }
    if (lVar9 != 0x159) {
      if (lVar9 == 0x15f) {
        bVar21 = *(double *)param_3[1] < **(double **)(param_2 + 8);
        goto LAB_14075b7a7;
      }
      if (lVar9 == 0x15e) {
        bVar21 = *(float *)param_3[1] < **(float **)(param_2 + 8);
        goto LAB_14075b7a7;
      }
      if (lVar9 != 0x152) {
        if (lVar9 != 0x151) {
          redabortreset_bluesreset
                    (7,
                     "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                     ,0x10e,"unexpected type in binary expression");
          (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_14075b807;
      }
    }
    cVar5 = **(char **)(param_2 + 8);
    cVar1 = *(char *)param_3[1];
    bVar23 = SBORROW1(cVar5,cVar1);
    bVar22 = (char)(cVar5 - cVar1) < '\0';
    bVar21 = cVar5 == cVar1;
LAB_14075d597:
    *(bool *)param_4[1] = bVar21 || bVar23 != bVar22;
    return 0;
  case 0x45:
    if (*param_3 != 0x151) {
      redabortreset_bluesreset
                (7,
                 "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                 ,0x111,"unexpected type in binary expression");
      (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar11 = 0;
    if (**(char **)(param_2 + 8) == '\x01') {
      uVar11 = *(undefined1 *)param_3[1];
    }
    *(undefined1 *)param_4[1] = uVar11;
    return 0;
  case 0x46:
    if (*param_3 == 0x151) {
      uVar11 = 1;
      if (**(char **)(param_2 + 8) == '\0') {
        uVar11 = *(undefined1 *)param_3[1];
      }
      *(undefined1 *)param_4[1] = uVar11;
      return 0;
    }
    redabortreset_bluesreset
              (7,
               "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
               ,0x114,"unexpected type in binary expression");
    (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
    abort();
  case 0x49:
    lVar9 = *param_3;
    if (lVar9 != 0x157) {
      if (lVar9 == 0x156) {
        lVar9 = *param_4;
        if (lVar9 == 0x157) {
LAB_14075ae24:
          uVar15 = (ulonglong)(uint)(**(int **)(param_2 + 8) << (*(byte *)param_3[1] & 0x1f));
          puVar17 = (ulonglong *)param_4[1];
          goto LAB_14075cef7;
        }
        if (lVar9 == 0x156) {
LAB_14075b633:
          uVar7 = **(uint **)(param_2 + 8);
LAB_14075c2d6:
          uVar7 = uVar7 << (*(byte *)param_3[1] & 0x1f);
          goto LAB_14075c441;
        }
        if (lVar9 == 0x155) {
LAB_14075bc91:
          uVar7 = **(uint **)(param_2 + 8);
LAB_14075ca8b:
          uVar6 = (ushort)(uVar7 << (*(byte *)param_3[1] & 0x1f));
          goto LAB_14075cc44;
        }
        if (lVar9 != 0x154) {
          if (lVar9 == 0x15c) goto LAB_14075ae24;
          if (lVar9 == 0x15b) goto LAB_14075b633;
          if (lVar9 == 0x15a) goto LAB_14075bc91;
          if (lVar9 != 0x159) {
            if (lVar9 == 0x15f) {
              dVar25 = (double)(uint)(**(int **)(param_2 + 8) << (*(byte *)param_3[1] & 0x1f));
              goto LAB_14075dbd6;
            }
            if (lVar9 == 0x15e) {
              fVar24 = (float)(uint)(**(int **)(param_2 + 8) << (*(byte *)param_3[1] & 0x1f));
              goto LAB_14075fac2;
            }
joined_r0x00014076070e:
            if (lVar9 != 0x152) {
LAB_1407609aa:
              redabortreset_bluesreset
                        (7,
                         "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                         ,0x11d,"unexpected type in binary expression");
              (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
        }
LAB_14075c306:
        uVar7 = **(uint **)(param_2 + 8);
      }
      else if (lVar9 == 0x155) {
        lVar9 = *param_4;
        if (lVar9 == 0x157) {
LAB_14075b285:
          uVar7 = (uint)**(ushort **)(param_2 + 8);
LAB_14075b68b:
          uVar15 = (ulonglong)(int)(uVar7 << (*(byte *)param_3[1] & 0x1f));
          puVar17 = (ulonglong *)param_4[1];
          goto LAB_14075cef7;
        }
        if (lVar9 == 0x156) {
LAB_14075bc78:
          uVar7 = (uint)**(ushort **)(param_2 + 8);
          goto LAB_14075c2d6;
        }
        if (lVar9 == 0x155) {
LAB_14075c2ed:
          uVar7 = (uint)**(ushort **)(param_2 + 8);
          goto LAB_14075ca8b;
        }
        if (lVar9 != 0x154) {
          if (lVar9 == 0x15c) goto LAB_14075b285;
          if (lVar9 == 0x15b) goto LAB_14075bc78;
          if (lVar9 == 0x15a) goto LAB_14075c2ed;
          if (lVar9 != 0x159) {
            if (lVar9 == 0x15f) {
              uVar7 = (uint)**(ushort **)(param_2 + 8);
LAB_14075dab6:
              uVar7 = uVar7 << (*(byte *)param_3[1] & 0x1f);
              goto LAB_14075dbd2;
            }
            if (lVar9 == 0x15e) {
              uVar7 = (uint)**(ushort **)(param_2 + 8);
              goto LAB_14075fa53;
            }
joined_r0x000140760974:
            if (lVar9 != 0x152) goto LAB_1407609aa;
          }
        }
LAB_14075caa6:
        uVar7 = (uint)**(ushort **)(param_2 + 8);
      }
      else {
        if (lVar9 != 0x154) {
          if (lVar9 == 0x15c) {
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 == 0x156) goto LAB_14075b24d;
              if (lVar9 == 0x155) {
LAB_14075bcf3:
                uVar19 = (undefined2)(**(longlong **)(param_2 + 8) << (*(byte *)param_3[1] & 0x3f));
                goto LAB_14075b726;
              }
              if (lVar9 != 0x154) {
                if (lVar9 == 0x15c) goto LAB_14075abb8;
                if (lVar9 == 0x15b) goto LAB_14075b24d;
                if (lVar9 == 0x15a) goto LAB_14075bcf3;
                if (lVar9 != 0x159) {
                  if (lVar9 == 0x15f) {
                    dVar25 = (double)(**(longlong **)(param_2 + 8) << (*(byte *)param_3[1] & 0x3f));
                    goto LAB_14075dbd6;
                  }
                  if (lVar9 == 0x15e) {
                    fVar24 = (float)(**(longlong **)(param_2 + 8) << (*(byte *)param_3[1] & 0x3f));
                    goto LAB_14075fac2;
                  }
                  if (lVar9 != 0x152) goto LAB_1407609aa;
                }
              }
              uVar11 = (undefined1)(**(longlong **)(param_2 + 8) << (*(byte *)param_3[1] & 0x3f));
              goto LAB_14075be17;
            }
            goto LAB_14075abb8;
          }
          if (lVar9 == 0x15b) {
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 == 0x156) goto LAB_14075b633;
              if (lVar9 == 0x155) goto LAB_14075bc91;
              if (lVar9 != 0x154) {
                if (lVar9 == 0x15c) goto LAB_14075c384;
                if (lVar9 == 0x15b) goto LAB_14075b633;
                if (lVar9 == 0x15a) goto LAB_14075bc91;
                if (lVar9 != 0x159) {
                  if (lVar9 == 0x15f) {
                    uVar7 = **(uint **)(param_2 + 8);
                    goto LAB_14075dab6;
                  }
                  if (lVar9 != 0x15e) goto joined_r0x00014076070e;
                  uVar7 = **(uint **)(param_2 + 8);
LAB_14075fa53:
                  uVar7 = uVar7 << (*(byte *)param_3[1] & 0x1f);
                  goto LAB_14075fabe;
                }
              }
              goto LAB_14075c306;
            }
LAB_14075c384:
            iVar8 = **(int **)(param_2 + 8);
          }
          else if (lVar9 == 0x15a) {
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 != 0x156) {
                if (lVar9 == 0x155) goto LAB_14075c2ed;
                if (lVar9 != 0x154) {
                  if (lVar9 == 0x15c) goto LAB_14075cb28;
                  if (lVar9 == 0x15b) goto LAB_14075da62;
                  if (lVar9 == 0x15a) goto LAB_14075c2ed;
                  if (lVar9 != 0x159) {
                    if (lVar9 == 0x15f) {
                      uVar7 = (uint)**(short **)(param_2 + 8);
                      goto LAB_14075dab6;
                    }
                    if (lVar9 != 0x15e) goto joined_r0x000140760974;
                    uVar7 = (uint)**(short **)(param_2 + 8);
                    goto LAB_14075fa53;
                  }
                }
                goto LAB_14075caa6;
              }
LAB_14075da62:
              uVar7 = (uint)**(short **)(param_2 + 8);
              goto LAB_14075c2d6;
            }
LAB_14075cb28:
            iVar8 = (int)**(short **)(param_2 + 8);
          }
          else {
            if (lVar9 != 0x159) goto LAB_1407609aa;
            lVar9 = *param_4;
            if (lVar9 != 0x157) {
              if (lVar9 == 0x156) {
LAB_14075dc8d:
                uVar7 = (uint)**(char **)(param_2 + 8);
                goto LAB_14075c2d6;
              }
              if (lVar9 != 0x155) {
                if (lVar9 != 0x154) {
                  if (lVar9 == 0x15c) goto LAB_14075d330;
                  if (lVar9 == 0x15b) goto LAB_14075dc8d;
                  if (lVar9 == 0x15a) goto LAB_14075e39c;
                  if (lVar9 != 0x159) {
                    if (lVar9 == 0x15f) {
                      uVar7 = (uint)**(char **)(param_2 + 8);
                      goto LAB_14075dab6;
                    }
                    if (lVar9 != 0x15e) goto joined_r0x0001407609a4;
                    uVar7 = (uint)**(char **)(param_2 + 8);
                    goto LAB_14075fa53;
                  }
                }
                goto LAB_14075d2b5;
              }
LAB_14075e39c:
              uVar7 = (uint)**(char **)(param_2 + 8);
              goto LAB_14075ca8b;
            }
LAB_14075d330:
            iVar8 = (int)**(char **)(param_2 + 8);
          }
          iVar8 = iVar8 << (*(byte *)param_3[1] & 0x1f);
LAB_14075d526:
          uVar15 = (ulonglong)iVar8;
          puVar17 = (ulonglong *)param_4[1];
          goto LAB_14075cef7;
        }
        lVar9 = *param_4;
        if (lVar9 == 0x157) {
LAB_14075b684:
          uVar7 = (uint)**(byte **)(param_2 + 8);
          goto LAB_14075b68b;
        }
        if (lVar9 == 0x156) {
LAB_14075c2cf:
          uVar7 = (uint)**(byte **)(param_2 + 8);
          goto LAB_14075c2d6;
        }
        if (lVar9 == 0x155) {
LAB_14075ca84:
          uVar7 = (uint)**(byte **)(param_2 + 8);
          goto LAB_14075ca8b;
        }
        if (lVar9 != 0x154) {
          if (lVar9 == 0x15c) goto LAB_14075b684;
          if (lVar9 == 0x15b) goto LAB_14075c2cf;
          if (lVar9 == 0x15a) goto LAB_14075ca84;
          if (lVar9 != 0x159) {
            if (lVar9 == 0x15f) {
              uVar7 = (uint)**(byte **)(param_2 + 8);
              goto LAB_14075dab6;
            }
            if (lVar9 == 0x15e) {
              uVar7 = (uint)**(byte **)(param_2 + 8);
              goto LAB_14075fa53;
            }
joined_r0x0001407609a4:
            if (lVar9 != 0x152) goto LAB_1407609aa;
          }
        }
LAB_14075d2b5:
        uVar7 = (uint)**(byte **)(param_2 + 8);
      }
      cVar5 = (char)(uVar7 << (*(byte *)param_3[1] & 0x1f));
      goto LAB_14075d4a5;
    }
    lVar9 = *param_4;
    if (lVar9 == 0x157) {
LAB_14075abb8:
      uVar15 = **(longlong **)(param_2 + 8) << (*(byte *)param_3[1] & 0x3f);
      puVar17 = (ulonglong *)param_4[1];
      goto LAB_14075cef7;
    }
    if (lVar9 == 0x156) {
LAB_14075b24d:
      *(int *)param_4[1] = (int)(**(longlong **)(param_2 + 8) << (*(byte *)param_3[1] & 0x3f));
      return 0;
    }
    if (lVar9 == 0x155) {
LAB_14075b64b:
      *(short *)param_4[1] = (short)(**(longlong **)(param_2 + 8) << (*(byte *)param_3[1] & 0x3f));
      return 0;
    }
    if (lVar9 == 0x154) goto LAB_14075bca9;
    if (lVar9 == 0x15c) goto LAB_14075abb8;
    if (lVar9 == 0x15b) goto LAB_14075b24d;
    if (lVar9 == 0x15a) goto LAB_14075b64b;
    if (lVar9 == 0x159) {
LAB_14075bca9:
      *(char *)param_4[1] = (char)(**(longlong **)(param_2 + 8) << (*(byte *)param_3[1] & 0x3f));
      return 0;
    }
    if (lVar9 == 0x15f) {
      uVar15 = **(longlong **)(param_2 + 8) << (*(byte *)param_3[1] & 0x3f);
      goto LAB_14075c4d0;
    }
    if (lVar9 != 0x15e) {
      if (lVar9 != 0x152) goto LAB_1407609aa;
      goto LAB_14075bca9;
    }
    uVar15 = **(longlong **)(param_2 + 8) << (*(byte *)param_3[1] & 0x3f);
joined_r0x00014075e671:
    if ((longlong)uVar15 < 0) {
      fVar24 = (float)uVar15;
    }
    else {
      fVar24 = (float)(longlong)uVar15;
    }
LAB_14075fac2:
    *(float *)param_4[1] = fVar24;
    return 0;
  case 0x4a:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) {
LAB_14075b354:
          *(int *)param_4[1] = (int)(**(ulonglong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f));
          return 0;
        }
        if (lVar9 == 0x155) {
LAB_14075b715:
          uVar19 = (undefined2)(**(ulonglong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f));
LAB_14075b726:
          *(undefined2 *)param_4[1] = uVar19;
          return 0;
        }
        if (lVar9 != 0x154) {
          if (lVar9 == 0x15c) goto LAB_14075ac23;
          if (lVar9 == 0x15b) goto LAB_14075b354;
          if (lVar9 == 0x15a) goto LAB_14075b715;
          if (lVar9 != 0x159) {
            if (lVar9 == 0x15f) {
              uVar15 = **(ulonglong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f);
              goto LAB_14075c4d0;
            }
            if (lVar9 == 0x15e) {
              uVar15 = **(ulonglong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f);
              goto joined_r0x00014075e671;
            }
            if (lVar9 != 0x152) goto LAB_1407609f3;
          }
        }
        uVar11 = (undefined1)(**(ulonglong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f));
LAB_14075be17:
        *(undefined1 *)param_4[1] = uVar11;
        return 0;
      }
LAB_14075ac23:
      uVar15 = **(ulonglong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f);
      puVar17 = (ulonglong *)param_4[1];
      goto LAB_14075cef7;
    }
    if (lVar9 == 0x156) {
      lVar9 = *param_4;
      if (lVar9 == 0x157) {
LAB_14075ae85:
        uVar7 = **(uint **)(param_2 + 8);
LAB_14075b755:
        uVar15 = (ulonglong)(uVar7 >> (*(byte *)param_3[1] & 0x1f));
        puVar17 = (ulonglong *)param_4[1];
        goto LAB_14075cef7;
      }
      if (lVar9 == 0x156) {
LAB_14075b6fd:
        uVar7 = **(uint **)(param_2 + 8);
LAB_14075c438:
        uVar7 = uVar7 >> (*(byte *)param_3[1] & 0x1f);
        goto LAB_14075c441;
      }
      if (lVar9 == 0x155) {
LAB_14075bdee:
        uVar7 = **(uint **)(param_2 + 8);
LAB_14075cc3b:
        uVar6 = (ushort)(uVar7 >> (*(byte *)param_3[1] & 0x1f));
        goto LAB_14075cc44;
      }
      if (lVar9 != 0x154) {
        if (lVar9 == 0x15c) goto LAB_14075ae85;
        if (lVar9 == 0x15b) goto LAB_14075b6fd;
        if (lVar9 == 0x15a) goto LAB_14075bdee;
        if (lVar9 != 0x159) {
          if (lVar9 == 0x15f) {
            dVar25 = (double)(**(uint **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x1f));
            goto LAB_14075dbd6;
          }
          if (lVar9 == 0x15e) {
            fVar24 = (float)(**(uint **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x1f));
            goto LAB_14075fac2;
          }
          if (lVar9 != 0x152) goto LAB_1407609f3;
        }
      }
      uVar7 = **(uint **)(param_2 + 8);
    }
    else if (lVar9 == 0x155) {
      lVar9 = *param_4;
      if (lVar9 == 0x157) {
LAB_14075b38c:
        uVar7 = (uint)**(ushort **)(param_2 + 8);
        goto LAB_14075b755;
      }
      if (lVar9 == 0x156) {
LAB_14075bdd5:
        uVar7 = (uint)**(ushort **)(param_2 + 8);
        goto LAB_14075c438;
      }
      if (lVar9 == 0x155) {
LAB_14075c455:
        uVar7 = (uint)**(ushort **)(param_2 + 8);
        goto LAB_14075cc3b;
      }
      if (lVar9 != 0x154) {
        if (lVar9 == 0x15c) goto LAB_14075b38c;
        if (lVar9 == 0x15b) goto LAB_14075bdd5;
        if (lVar9 == 0x15a) goto LAB_14075c455;
        if (lVar9 != 0x159) {
          if (lVar9 == 0x15f) {
            uVar7 = (uint)**(ushort **)(param_2 + 8);
LAB_14075dbc9:
            uVar7 = uVar7 >> (*(byte *)param_3[1] & 0x1f);
            goto LAB_14075dbd2;
          }
          if (lVar9 == 0x15e) {
            uVar7 = (uint)**(ushort **)(param_2 + 8);
LAB_14075fab5:
            uVar7 = uVar7 >> (*(byte *)param_3[1] & 0x1f);
            goto LAB_14075fabe;
          }
          if (lVar9 != 0x152) goto LAB_1407609f3;
        }
      }
      uVar7 = (uint)**(ushort **)(param_2 + 8);
    }
    else {
      if (lVar9 != 0x154) {
        if (lVar9 == 0x15c) {
          lVar9 = *param_4;
          if (lVar9 != 0x157) {
            if (lVar9 == 0x156) {
LAB_14075cc0f:
              *(int *)param_4[1] =
                   (int)(**(longlong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f));
              return 0;
            }
            if (lVar9 == 0x155) {
LAB_14075d476:
              uVar19 = (undefined2)(**(longlong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f));
              goto LAB_14075b726;
            }
            if (lVar9 != 0x154) {
              if (lVar9 == 0x15c) goto LAB_14075be3e;
              if (lVar9 == 0x15b) goto LAB_14075cc0f;
              if (lVar9 == 0x15a) goto LAB_14075d476;
              if (lVar9 != 0x159) {
                if (lVar9 == 0x15f) {
                  dVar25 = (double)(**(longlong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f));
                  goto LAB_14075dbd6;
                }
                if (lVar9 == 0x15e) {
                  fVar24 = (float)(**(longlong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f));
                  goto LAB_14075fac2;
                }
                if (lVar9 != 0x152) goto LAB_1407609f3;
              }
            }
            uVar11 = (undefined1)(**(longlong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f));
            goto LAB_14075be17;
          }
LAB_14075be3e:
          uVar15 = **(longlong **)(param_2 + 8) >> (*(byte *)param_3[1] & 0x3f);
          puVar17 = (ulonglong *)param_4[1];
          goto LAB_14075cef7;
        }
        if (lVar9 == 0x15b) {
          lVar9 = *param_4;
          if (lVar9 != 0x157) {
            if (lVar9 == 0x156) {
LAB_14075d462:
              iVar8 = **(int **)(param_2 + 8);
LAB_14075dcc7:
              uVar7 = iVar8 >> (*(byte *)param_3[1] & 0x1f);
              goto LAB_14075c441;
            }
            if (lVar9 == 0x155) {
LAB_14075db57:
              iVar8 = **(int **)(param_2 + 8);
LAB_14075e3d6:
              uVar6 = (ushort)(iVar8 >> (*(byte *)param_3[1] & 0x1f));
              goto LAB_14075cc44;
            }
            if (lVar9 != 0x154) {
              if (lVar9 == 0x15c) goto LAB_14075c515;
              if (lVar9 == 0x15b) goto LAB_14075d462;
              if (lVar9 == 0x15a) goto LAB_14075db57;
              if (lVar9 != 0x159) {
                if (lVar9 == 0x15f) {
                  iVar8 = **(int **)(param_2 + 8);
LAB_14075f166:
                  uVar7 = iVar8 >> (*(byte *)param_3[1] & 0x1f);
                  goto LAB_14075dbd2;
                }
                if (lVar9 == 0x15e) {
                  iVar8 = **(int **)(param_2 + 8);
LAB_1407607a2:
                  uVar7 = iVar8 >> (*(byte *)param_3[1] & 0x1f);
                  goto LAB_14075fabe;
                }
                if (lVar9 != 0x152) goto LAB_1407609f3;
              }
            }
            iVar8 = **(int **)(param_2 + 8);
LAB_14075ea91:
            cVar5 = (char)(iVar8 >> (*(byte *)param_3[1] & 0x1f));
            goto LAB_14075d4a5;
          }
LAB_14075c515:
          iVar8 = **(int **)(param_2 + 8);
        }
        else if (lVar9 == 0x15a) {
          lVar9 = *param_4;
          if (lVar9 != 0x157) {
            if (lVar9 == 0x156) {
LAB_14075db42:
              iVar8 = (int)**(short **)(param_2 + 8);
              goto LAB_14075dcc7;
            }
            if (lVar9 == 0x155) {
LAB_14075e257:
              iVar8 = (int)**(short **)(param_2 + 8);
              goto LAB_14075e3d6;
            }
            if (lVar9 != 0x154) {
              if (lVar9 == 0x15c) goto LAB_14075ccdf;
              if (lVar9 == 0x15b) goto LAB_14075db42;
              if (lVar9 == 0x15a) goto LAB_14075e257;
              if (lVar9 != 0x159) {
                if (lVar9 == 0x15f) {
                  iVar8 = (int)**(short **)(param_2 + 8);
                  goto LAB_14075f166;
                }
                if (lVar9 == 0x15e) {
                  iVar8 = (int)**(short **)(param_2 + 8);
                  goto LAB_1407607a2;
                }
                if (lVar9 != 0x152) goto LAB_1407609f3;
              }
            }
            iVar8 = (int)**(short **)(param_2 + 8);
            goto LAB_14075ea91;
          }
LAB_14075ccdf:
          iVar8 = (int)**(short **)(param_2 + 8);
        }
        else {
          if (lVar9 != 0x159) {
LAB_1407609f3:
            redabortreset_bluesreset
                      (7,
                       "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                       ,0x120,"unexpected type in binary expression");
            (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar9 = *param_4;
          if (lVar9 != 0x157) {
            if (lVar9 == 0x156) {
LAB_14075dcc0:
              iVar8 = (int)**(char **)(param_2 + 8);
              goto LAB_14075dcc7;
            }
            if (lVar9 == 0x155) {
LAB_14075e3cf:
              iVar8 = (int)**(char **)(param_2 + 8);
              goto LAB_14075e3d6;
            }
            if (lVar9 != 0x154) {
              if (lVar9 == 0x15c) goto LAB_14075d516;
              if (lVar9 == 0x15b) goto LAB_14075dcc0;
              if (lVar9 == 0x15a) goto LAB_14075e3cf;
              if (lVar9 != 0x159) {
                if (lVar9 == 0x15f) {
                  iVar8 = (int)**(char **)(param_2 + 8);
                  goto LAB_14075f166;
                }
                if (lVar9 == 0x15e) {
                  iVar8 = (int)**(char **)(param_2 + 8);
                  goto LAB_1407607a2;
                }
                if (lVar9 != 0x152) goto LAB_1407609f3;
              }
            }
            iVar8 = (int)**(char **)(param_2 + 8);
            goto LAB_14075ea91;
          }
LAB_14075d516:
          iVar8 = (int)**(char **)(param_2 + 8);
        }
        iVar8 = iVar8 >> (*(byte *)param_3[1] & 0x1f);
        goto LAB_14075d526;
      }
      lVar9 = *param_4;
      if (lVar9 == 0x157) {
LAB_14075b74e:
        uVar7 = (uint)**(byte **)(param_2 + 8);
        goto LAB_14075b755;
      }
      if (lVar9 == 0x156) {
LAB_14075c431:
        uVar7 = (uint)**(byte **)(param_2 + 8);
        goto LAB_14075c438;
      }
      if (lVar9 == 0x155) {
LAB_14075cc34:
        uVar7 = (uint)**(byte **)(param_2 + 8);
        goto LAB_14075cc3b;
      }
      if (lVar9 != 0x154) {
        if (lVar9 == 0x15c) goto LAB_14075b74e;
        if (lVar9 == 0x15b) goto LAB_14075c431;
        if (lVar9 == 0x15a) goto LAB_14075cc34;
        if (lVar9 != 0x159) {
          if (lVar9 == 0x15f) {
            uVar7 = (uint)**(byte **)(param_2 + 8);
            goto LAB_14075dbc9;
          }
          if (lVar9 == 0x15e) {
            uVar7 = (uint)**(byte **)(param_2 + 8);
            goto LAB_14075fab5;
          }
          if (lVar9 != 0x152) goto LAB_1407609f3;
        }
      }
      uVar7 = (uint)**(byte **)(param_2 + 8);
    }
    cVar5 = (char)(uVar7 >> (*(byte *)param_3[1] & 0x1f));
    goto LAB_14075d4a5;
  case 0x57:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) {
LAB_14075b6a8:
          *(uint *)param_4[1] = *(uint *)param_3[1] | **(uint **)(param_2 + 8);
          return 0;
        }
        if (lVar9 == 0x155) {
LAB_14075bd35:
          *(ushort *)param_4[1] =
               (ushort)*(undefined4 *)param_3[1] | (ushort)**(undefined4 **)(param_2 + 8);
          return 0;
        }
        if (lVar9 == 0x154) goto LAB_14075c3dd;
        if (lVar9 != 0x15c) {
          if (lVar9 == 0x15b) goto LAB_14075b6a8;
          if (lVar9 == 0x15a) goto LAB_14075bd35;
          if (lVar9 == 0x159) goto LAB_14075c3dd;
          if (lVar9 == 0x15f) {
            uVar15 = *(ulonglong *)param_3[1] | **(ulonglong **)(param_2 + 8);
            goto LAB_14075c4d0;
          }
          if (lVar9 != 0x15e) goto joined_r0x000140760720;
          uVar15 = *(ulonglong *)param_3[1] | **(ulonglong **)(param_2 + 8);
          goto joined_r0x00014075e671;
        }
      }
LAB_14075abf1:
      uVar15 = *(ulonglong *)param_3[1] | **(ulonglong **)(param_2 + 8);
      goto LAB_14075b588;
    }
    if (lVar9 == 0x156) {
      lVar9 = *param_4;
      if (lVar9 == 0x157) {
LAB_14075ae58:
        uVar15 = (ulonglong)(*(uint *)param_3[1] | **(uint **)(param_2 + 8));
        goto LAB_14075b588;
      }
      if (lVar9 == 0x156) goto LAB_14075b6a8;
      if (lVar9 == 0x155) goto LAB_14075bd35;
      if (lVar9 == 0x154) goto LAB_14075c3dd;
      if (lVar9 == 0x15c) goto LAB_14075ae58;
      if (lVar9 == 0x15b) goto LAB_14075b6a8;
      if (lVar9 == 0x15a) goto LAB_14075bd35;
      if (lVar9 == 0x159) goto LAB_14075c3dd;
      if (lVar9 == 0x15f) {
        uVar15 = (ulonglong)(*(uint *)param_3[1] | **(uint **)(param_2 + 8));
        goto LAB_14075cbc5;
      }
      if (lVar9 != 0x15e) goto joined_r0x000140760720;
      uVar15 = (ulonglong)(*(uint *)param_3[1] | **(uint **)(param_2 + 8));
LAB_14075f033:
      fVar24 = (float)(longlong)uVar15;
      goto LAB_14075fac2;
    }
    if (lVar9 == 0x155) {
      lVar9 = *param_4;
      if (lVar9 == 0x157) {
LAB_14075b32d:
        uVar15 = (ulonglong)(*(ushort *)param_3[1] | **(ushort **)(param_2 + 8));
        puVar17 = (ulonglong *)param_4[1];
        goto LAB_14075cef7;
      }
      if (lVar9 == 0x156) {
LAB_14075bd12:
        uVar7 = (uint)(*(ushort *)param_3[1] | **(ushort **)(param_2 + 8));
        goto LAB_14075c441;
      }
      if (lVar9 == 0x155) {
LAB_14075c3b6:
        *(ushort *)param_4[1] = *(ushort *)param_3[1] | **(ushort **)(param_2 + 8);
        return 0;
      }
      if (lVar9 == 0x154) goto LAB_14075cb5f;
      if (lVar9 == 0x15c) goto LAB_14075b32d;
      if (lVar9 == 0x15b) goto LAB_14075bd12;
      if (lVar9 == 0x15a) goto LAB_14075c3b6;
      if (lVar9 == 0x159) goto LAB_14075cb5f;
      if (lVar9 != 0x15f) {
        if (lVar9 != 0x15e) {
joined_r0x000140760983:
          if (lVar9 == 0x152) {
LAB_14075cb5f:
            *(byte *)param_4[1] =
                 (byte)*(undefined2 *)param_3[1] | (byte)**(undefined2 **)(param_2 + 8);
            return 0;
          }
          goto LAB_14075f04a;
        }
        uVar7 = (uint)(*(ushort *)param_3[1] | **(ushort **)(param_2 + 8));
        goto LAB_14075fabe;
      }
      uVar7 = (uint)(*(ushort *)param_3[1] | **(ushort **)(param_2 + 8));
LAB_14075dbd2:
      dVar25 = (double)(int)uVar7;
      goto LAB_14075dbd6;
    }
    if (lVar9 == 0x154) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) {
LAB_14075c398:
          uVar7 = (uint)(*(byte *)param_3[1] | **(byte **)(param_2 + 8));
          goto LAB_14075c441;
        }
        if (lVar9 != 0x155) {
          if (lVar9 == 0x154) goto LAB_14075d3b7;
          if (lVar9 == 0x15c) goto LAB_14075b6db;
          if (lVar9 == 0x15b) goto LAB_14075c398;
          if (lVar9 != 0x15a) {
            if (lVar9 == 0x159) goto LAB_14075d3b7;
            if (lVar9 == 0x15f) {
              uVar7 = (uint)(*(byte *)param_3[1] | **(byte **)(param_2 + 8));
              goto LAB_14075dbd2;
            }
            if (lVar9 != 0x15e) {
joined_r0x0001407609db:
              if (lVar9 == 0x152) {
LAB_14075d3b7:
                *(byte *)param_4[1] = *(byte *)param_3[1] | **(byte **)(param_2 + 8);
                return 0;
              }
              goto LAB_14075f04a;
            }
            uVar7 = (uint)(*(byte *)param_3[1] | **(byte **)(param_2 + 8));
            goto LAB_14075fabe;
          }
        }
        uVar6 = (ushort)(*(byte *)param_3[1] | **(byte **)(param_2 + 8));
        goto LAB_14075cc44;
      }
LAB_14075b6db:
      uVar15 = (ulonglong)(*(byte *)param_3[1] | **(byte **)(param_2 + 8));
      puVar17 = (ulonglong *)param_4[1];
      goto LAB_14075cef7;
    }
    if (lVar9 == 0x15c) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) goto LAB_14075b6a8;
        if (lVar9 == 0x155) goto LAB_14075bd35;
        if (lVar9 == 0x154) goto LAB_14075c3dd;
        if (lVar9 != 0x15c) {
          if (lVar9 == 0x15b) goto LAB_14075b6a8;
          if (lVar9 == 0x15a) goto LAB_14075bd35;
          if (lVar9 == 0x159) goto LAB_14075c3dd;
          if (lVar9 == 0x15f) {
            uVar15 = *(ulonglong *)param_3[1] | **(ulonglong **)(param_2 + 8);
            goto LAB_14075cbc5;
          }
          if (lVar9 == 0x15e) {
            uVar15 = *(ulonglong *)param_3[1] | **(ulonglong **)(param_2 + 8);
            goto LAB_14075f033;
          }
joined_r0x000140760720:
          if (lVar9 == 0x152) {
LAB_14075c3dd:
            *(byte *)param_4[1] =
                 (byte)*(undefined4 *)param_3[1] | (byte)**(undefined4 **)(param_2 + 8);
            return 0;
          }
LAB_14075f04a:
          redabortreset_bluesreset
                    (7,
                     "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                     ,0x11a,"unexpected type in binary expression");
          (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      goto LAB_14075abf1;
    }
    if (lVar9 == 0x15b) {
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) goto LAB_14075b6a8;
        if (lVar9 == 0x155) goto LAB_14075bd35;
        if (lVar9 == 0x154) goto LAB_14075c3dd;
        if (lVar9 != 0x15c) {
          if (lVar9 == 0x15b) goto LAB_14075b6a8;
          if (lVar9 == 0x15a) goto LAB_14075bd35;
          if (lVar9 == 0x159) goto LAB_14075c3dd;
          if (lVar9 == 0x15f) {
            dVar25 = (double)(int)(*(uint *)param_3[1] | **(uint **)(param_2 + 8));
            goto LAB_14075dbd6;
          }
          if (lVar9 == 0x15e) {
            fVar24 = (float)(int)(*(uint *)param_3[1] | **(uint **)(param_2 + 8));
            goto LAB_14075fac2;
          }
          goto joined_r0x000140760720;
        }
      }
      uVar15 = (ulonglong)(int)(*(uint *)param_3[1] | **(uint **)(param_2 + 8));
      puVar17 = (ulonglong *)param_4[1];
      goto LAB_14075cef7;
    }
    if (lVar9 != 0x15a) {
      if (lVar9 != 0x159) goto LAB_14075f04a;
      lVar9 = *param_4;
      if (lVar9 != 0x157) {
        if (lVar9 == 0x156) {
LAB_14075dca2:
          uVar7 = (uint)(char)(*(byte *)param_3[1] | **(byte **)(param_2 + 8));
          goto LAB_14075c441;
        }
        if (lVar9 != 0x155) {
          if (lVar9 == 0x154) goto LAB_14075d3b7;
          if (lVar9 == 0x15c) goto LAB_14075d43f;
          if (lVar9 == 0x15b) goto LAB_14075dca2;
          if (lVar9 != 0x15a) {
            if (lVar9 == 0x159) goto LAB_14075d3b7;
            if (lVar9 == 0x15f) {
              uVar7 = (uint)(char)(*(byte *)param_3[1] | **(byte **)(param_2 + 8));
              goto LAB_14075dbd2;
            }
            if (lVar9 != 0x15e) goto joined_r0x0001407609db;
            uVar7 = (uint)(char)(*(byte *)param_3[1] | **(byte **)(param_2 + 8));
            goto LAB_14075fabe;
          }
        }
        uVar6 = (ushort)(char)(*(byte *)param_3[1] | **(byte **)(param_2 + 8));
        goto LAB_14075cc44;
      }
LAB_14075d43f:
      uVar15 = (ulonglong)(char)(*(byte *)param_3[1] | **(byte **)(param_2 + 8));
      puVar17 = (ulonglong *)param_4[1];
      goto LAB_14075cef7;
    }
    lVar9 = *param_4;
    if (lVar9 == 0x157) {
LAB_14075cbeb:
      uVar15 = (ulonglong)(short)(*(ushort *)param_3[1] | **(ushort **)(param_2 + 8));
      puVar17 = (ulonglong *)param_4[1];
      goto LAB_14075cef7;
    }
    if (lVar9 == 0x156) {
LAB_14075dacd:
      uVar7 = (uint)(short)(*(ushort *)param_3[1] | **(ushort **)(param_2 + 8));
      goto LAB_14075c441;
    }
    if (lVar9 == 0x155) goto LAB_14075c3b6;
    if (lVar9 == 0x154) goto LAB_14075cb5f;
    if (lVar9 == 0x15c) goto LAB_14075cbeb;
    if (lVar9 == 0x15b) goto LAB_14075dacd;
    if (lVar9 == 0x15a) goto LAB_14075c3b6;
    if (lVar9 == 0x159) goto LAB_14075cb5f;
    if (lVar9 == 0x15f) {
      uVar7 = (uint)(short)(*(ushort *)param_3[1] | **(ushort **)(param_2 + 8));
      goto LAB_14075dbd2;
    }
    if (lVar9 != 0x15e) goto joined_r0x000140760983;
    uVar7 = (uint)(short)(*(ushort *)param_3[1] | **(ushort **)(param_2 + 8));
LAB_14075fabe:
    fVar24 = (float)(int)uVar7;
    goto LAB_14075fac2;
  case 99:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
LAB_14075ab63:
      *(longlong *)param_4[1] = *(longlong *)param_4[1] + *(longlong *)param_3[1];
      return 0;
    }
    if (lVar9 == 0x156) {
LAB_14075add9:
      *(int *)param_4[1] = *(int *)param_4[1] + *(int *)param_3[1];
      return 0;
    }
    if (lVar9 == 0x155) {
LAB_14075b20d:
      *(short *)param_4[1] = *(short *)param_4[1] + *(short *)param_3[1];
      return 0;
    }
    if (lVar9 != 0x154) {
      if (lVar9 == 0x15c) goto LAB_14075ab63;
      if (lVar9 == 0x15b) goto LAB_14075add9;
      if (lVar9 == 0x15a) goto LAB_14075b20d;
      if (lVar9 != 0x159) {
        if (lVar9 == 0x15f) {
          *(double *)param_4[1] = *(double *)param_3[1] + *(double *)param_4[1];
          return 0;
        }
        if (lVar9 == 0x15e) {
          *(float *)param_4[1] = *(float *)param_3[1] + *(float *)param_4[1];
          return 0;
        }
        return 0;
      }
    }
    *(char *)param_4[1] = *(char *)param_4[1] + *(char *)param_3[1];
    return 0;
  case 100:
    lVar9 = *param_3;
    if (lVar9 == 0x157) {
LAB_14075acb6:
      *(longlong *)param_4[1] = *(longlong *)param_4[1] * *(longlong *)param_3[1];
      return 0;
    }
    if (lVar9 == 0x156) {
LAB_14075aef7:
      *(int *)param_4[1] = *(int *)param_4[1] * *(int *)param_3[1];
      return 0;
    }
    if (lVar9 == 0x155) {
LAB_14075b405:
      *(short *)param_4[1] = *(short *)param_4[1] * *(short *)param_3[1];
      return 0;
    }
    if (lVar9 != 0x154) {
      if (lVar9 == 0x15c) goto LAB_14075acb6;
      if (lVar9 == 0x15b) goto LAB_14075aef7;
      if (lVar9 == 0x15a) goto LAB_14075b405;
      if (lVar9 != 0x159) {
        if (lVar9 == 0x15f) {
          *(double *)param_4[1] = *(double *)param_3[1] * *(double *)param_4[1];
          return 0;
        }
        if (lVar9 == 0x15e) {
          *(float *)param_4[1] = *(float *)param_3[1] * *(float *)param_4[1];
          return 0;
        }
        return 0;
      }
    }
    *(char *)param_4[1] = *(char *)param_4[1] * *(char *)param_3[1];
    return 0;
  }
  puVar17 = (ulonglong *)param_4[1];
LAB_14075cef7:
  *puVar17 = uVar15;
  return 0;
}

