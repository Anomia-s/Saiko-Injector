/**
 * Function: errorlevel
 * Address:  1408f0020
 * Signature: undefined errorlevel(void)
 * Body size: 8878 bytes
 */


void errorlevel(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
               undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_118 [40];
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 auStack_b3 [10];
  byte abStack_a9 [97];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_118;
  uVar17 = 0;
  uVar15 = uVar17;
  if (param_2 != 0) {
    do {
      if ((4 < *(byte *)(param_1 + uVar15) - 9) &&
         (uVar17 = uVar15, *(byte *)(param_1 + uVar15) != 0x20)) break;
      uVar15 = uVar15 + 1;
      uVar17 = param_2;
    } while (param_2 != uVar15);
  }
  uVar15 = uVar17 + param_3;
  uVar18 = param_7[0x3ef];
  local_f0 = param_3;
  if (uVar15 - uVar18 == 0) {
LAB_1408f0097:
    param_7[0x3ef] = uVar15;
    uVar18 = uVar15;
  }
  else {
    uVar14 = (uVar17 + param_3) - 1;
    if (uVar18 <= uVar14) {
      lVar8 = param_7[0x3ee];
      if ((0 < lVar8) && (3999 < (uVar15 - uVar18) + lVar8)) {
        (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar8,param_7 + 0x1fa);
        uVar18 = param_7[0x3ef];
        param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
        param_7[0x3ee] = 0;
        lVar8 = 0;
      }
      if ((uVar14 - uVar18) + lVar8 + 1 < 4000) {
        for (; uVar18 <= uVar14; uVar18 = uVar18 + 1) {
          lVar8 = param_7[0x3ee];
          param_7[0x3ee] = lVar8 + 1;
          *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 0;
        }
      }
      else {
        (**(code **)(*(longlong *)*param_7 + 0x60))((longlong *)*param_7,(uVar14 - uVar18) + 1,0);
      }
      goto LAB_1408f0097;
    }
  }
  bVar4 = *(byte *)(param_1 + uVar17);
  if (bVar4 != 0x3a) {
    uVar14 = uVar17;
    if (-1 < (char)bVar4) {
      iVar5 = isalpha((uint)bVar4);
      if (((iVar5 != 0) && (*(char *)(param_1 + 1 + uVar17) == ':')) &&
         (((bVar2 = *(byte *)(param_1 + 2 + uVar17), bVar2 - 9 < 5 || (bVar2 == 0x20)) ||
          ((bVar2 == 0x5c &&
           ((bVar2 = *(byte *)(param_1 + 3 + uVar17), bVar2 - 9 < 5 || (bVar2 == 0x20)))))))) {
        if (param_4 != uVar18 - 1) {
          if (param_4 < uVar18) goto LAB_1408f1fe0;
          lVar8 = param_7[0x3ee];
          if ((0 < lVar8) && (3999 < ((param_4 + 1) - uVar18) + lVar8)) {
            (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar8,param_7 + 0x1fa);
            uVar18 = param_7[0x3ef];
            param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
            param_7[0x3ee] = 0;
            lVar8 = 0;
          }
          if (3999 < (param_4 - uVar18) + lVar8 + 1) {
            lVar6 = (param_4 - uVar18) + 1;
            plVar12 = (longlong *)*param_7;
            lVar8 = *plVar12;
            uVar10 = 2;
            goto LAB_1408f208c;
          }
          for (; uVar18 <= param_4; uVar18 = uVar18 + 1) {
            lVar8 = param_7[0x3ee];
            param_7[0x3ee] = lVar8 + 1;
            *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 2;
          }
        }
        goto LAB_1408f1fd9;
      }
      if (bVar4 != 0x40) goto joined_r0x0001408f0350;
      if (uVar15 == uVar18 - 1) {
LAB_1408f03d9:
        uVar18 = uVar15 + 1;
        param_7[0x3ef] = uVar18;
      }
      else if (uVar18 <= uVar15) {
        lVar8 = param_7[0x3ee];
        if ((0 < lVar8) && (3999 < ((uVar15 + 1) - uVar18) + lVar8)) {
          (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar8,param_7 + 0x1fa);
          uVar18 = param_7[0x3ef];
          param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
          param_7[0x3ee] = 0;
          lVar8 = 0;
        }
        if ((uVar15 - uVar18) + lVar8 + 1 < 4000) {
          for (; uVar18 <= uVar15; uVar18 = uVar18 + 1) {
            lVar8 = param_7[0x3ee];
            param_7[0x3ee] = lVar8 + 1;
            *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 4;
          }
        }
        else {
          (**(code **)(*(longlong *)*param_7 + 0x60))((longlong *)*param_7,(uVar15 - uVar18) + 1,4);
        }
        goto LAB_1408f03d9;
      }
      uVar14 = uVar17 + 1;
    }
joined_r0x0001408f0350:
    if (uVar14 < param_2) {
      do {
        if ((4 < *(byte *)(param_1 + uVar14) - 9) && (*(byte *)(param_1 + uVar14) != 0x20))
        goto LAB_1408f042e;
        uVar14 = uVar14 + 1;
      } while (param_2 != uVar14);
    }
    else {
LAB_1408f042e:
      if (uVar14 < param_2) {
        local_e0 = param_7 + 0x1fa;
        local_c0 = local_f0 - 1;
        local_d8._4_4_ = (undefined4)(local_d8 >> 0x20);
        local_d8 = CONCAT44(local_d8._4_4_,(int)CONCAT71((int7)((ulonglong)local_c0 >> 8),1));
LAB_1408f0452:
        if (local_f0 < uVar14) {
          lVar8 = uVar14 + local_f0;
          uVar15 = param_7[0x3ef];
          lVar6 = lVar8 - uVar15;
          if (lVar6 != 0) {
            uVar18 = (uVar14 + local_f0) - 1;
            if (uVar18 < uVar15) goto LAB_1408f0490;
            lVar7 = param_7[0x3ee];
            if ((0 < lVar7) && (3999 < (ulonglong)(lVar6 + lVar7))) {
              (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar7,local_e0);
              uVar15 = param_7[0x3ef];
              param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
              param_7[0x3ee] = 0;
              lVar7 = 0;
            }
            if (lVar7 + (uVar18 - uVar15) + 1 < 4000) {
              for (; uVar15 <= uVar18; uVar15 = uVar15 + 1) {
                lVar6 = param_7[0x3ee];
                param_7[0x3ee] = lVar6 + 1;
                *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 0;
              }
            }
            else {
              (**(code **)(*(longlong *)*param_7 + 0x60))
                        ((longlong *)*param_7,(uVar18 - uVar15) + 1,0);
            }
          }
          param_7[0x3ef] = lVar8;
        }
LAB_1408f0490:
        if (uVar14 < param_2) {
          uVar18 = 0;
          while( true ) {
            bVar4 = *(byte *)(param_1 + uVar14);
            if (((ulonglong)bVar4 < 0x21) &&
               (uVar15 = uVar18, (0x100003e00U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0)) break;
            iVar5 = tolower((int)(char)bVar4);
            abStack_a9[uVar18 + 1] = (byte)iVar5;
            uVar15 = uVar18 + 1;
            uVar14 = uVar14 + 1;
            if ((param_2 <= uVar14) || (bVar19 = 0x4e < uVar18, uVar18 = uVar15, bVar19)) break;
          }
        }
        else {
          uVar15 = 0;
        }
        abStack_a9[uVar15 + 1] = 0;
        pbVar1 = abStack_a9 + 1;
        iVar5 = FUN_140a8ce50(pbVar1,&DAT_14134252d);
        if (iVar5 != 0) {
          if ((abStack_a9[1] - 0x22 < 0x3b) &&
             ((0x400000002003021U >> ((ulonglong)(abStack_a9[1] - 0x22) & 0x3f) & 1) != 0)) {
            uVar15 = uVar14 - uVar15;
            if ((uVar17 == uVar15) &&
               ((abStack_a9[1] - 0x2e < 0x2f &&
                ((0x400000001001U >> ((ulonglong)(abStack_a9[1] - 0x2e) & 0x3f) & 1) != 0)))) {
              uVar14 = uVar17 + 1;
              cVar3 = FUN_140a8b8d0(param_6);
              if (cVar3 == '\0') {
                lVar8 = uVar14 + local_f0;
                uVar15 = param_7[0x3ef];
                if (lVar8 - uVar15 != 0) {
                  uVar18 = uVar17 + local_f0;
                  uVar17 = uVar14;
                  if (uVar18 < uVar15) goto LAB_1408f0a02;
                  lVar6 = param_7[0x3ee];
                  if ((0 < lVar6) && (3999 < (lVar8 - uVar15) + lVar6)) {
                    (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar6,local_e0)
                    ;
                    uVar15 = param_7[0x3ef];
                    param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                    param_7[0x3ee] = 0;
                    lVar6 = 0;
                  }
                  lVar7 = uVar18 - uVar15;
                  if (lVar6 + lVar7 + 1U < 4000) {
                    for (; uVar15 <= uVar18; uVar15 = uVar15 + 1) {
                      lVar6 = param_7[0x3ee];
                      param_7[0x3ee] = lVar6 + 1;
                      *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 5;
                    }
                  }
                  else {
LAB_1408f0713:
                    plVar12 = (longlong *)*param_7;
                    lVar6 = *plVar12;
                    uVar10 = 5;
LAB_1408f09ef:
                    (**(code **)(lVar6 + 0x60))(plVar12,lVar7 + 1,uVar10);
                  }
                }
              }
              else {
                cVar3 = FUN_140a8bc50(param_6,abStack_a9 + 1);
                lVar8 = uVar14 + local_f0;
                uVar18 = uVar17 + local_f0;
                uVar15 = param_7[0x3ef];
                if (cVar3 == '\0') {
                  if (lVar8 - uVar15 != 0) {
                    uVar17 = uVar14;
                    if (uVar18 < uVar15) goto LAB_1408f0a02;
                    lVar6 = param_7[0x3ee];
                    if ((0 < lVar6) && (3999 < (lVar8 - uVar15) + lVar6)) {
                      (**(code **)(*(longlong *)*param_7 + 0x68))
                                ((longlong *)*param_7,lVar6,local_e0);
                      uVar15 = param_7[0x3ef];
                      param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                      param_7[0x3ee] = 0;
                      lVar6 = 0;
                    }
                    lVar7 = uVar18 - uVar15;
                    if (3999 < lVar6 + lVar7 + 1U) {
                      plVar12 = (longlong *)*param_7;
                      lVar6 = *plVar12;
                      uVar10 = 0;
                      goto LAB_1408f09ef;
                    }
                    for (; uVar15 <= uVar18; uVar15 = uVar15 + 1) {
                      lVar6 = param_7[0x3ee];
                      param_7[0x3ee] = lVar6 + 1;
                      *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 0;
                    }
                  }
                }
                else if (lVar8 - uVar15 != 0) {
                  uVar17 = uVar14;
                  if (uVar18 < uVar15) goto LAB_1408f0a02;
                  lVar6 = param_7[0x3ee];
                  if ((0 < lVar6) && (3999 < (lVar8 - uVar15) + lVar6)) {
                    (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar6,local_e0)
                    ;
                    uVar15 = param_7[0x3ef];
                    param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                    param_7[0x3ee] = 0;
                    lVar6 = 0;
                  }
                  lVar7 = uVar18 - uVar15;
                  if (3999 < lVar6 + lVar7 + 1U) goto LAB_1408f0713;
                  for (; uVar15 <= uVar18; uVar15 = uVar15 + 1) {
                    lVar6 = param_7[0x3ee];
                    param_7[0x3ee] = lVar6 + 1;
                    *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 5;
                  }
                }
              }
              param_7[0x3ef] = lVar8;
              uVar17 = uVar14;
            }
            else {
              uVar14 = uVar15 + 1;
              lVar6 = uVar15 + local_f0 + 1;
              uVar18 = param_7[0x3ef];
              lVar8 = lVar6 - uVar18;
              if (lVar8 != 0) {
                uVar15 = uVar15 + local_f0;
                if (uVar15 < uVar18) goto LAB_1408f0a02;
                lVar7 = param_7[0x3ee];
                if ((0 < lVar7) && (3999 < (ulonglong)(lVar8 + lVar7))) {
                  (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar7,local_e0);
                  uVar18 = param_7[0x3ef];
                  param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                  param_7[0x3ee] = 0;
                  lVar7 = 0;
                }
                if (lVar7 + (uVar15 - uVar18) + 1 < 4000) {
                  for (; uVar18 <= uVar15; uVar18 = uVar18 + 1) {
                    lVar8 = param_7[0x3ee];
                    param_7[0x3ee] = lVar8 + 1;
                    *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 0;
                  }
                }
                else {
                  (**(code **)(*(longlong *)*param_7 + 0x60))
                            ((longlong *)*param_7,(uVar15 - uVar18) + 1,0);
                }
              }
              param_7[0x3ef] = lVar6;
            }
            goto LAB_1408f0a02;
          }
          bVar4 = FUN_140a8bc50(param_5,pbVar1);
          if ((bVar4 & (byte)local_d8) == 1) {
            iVar5 = FUN_140a8ce50(pbVar1,&DAT_14133f35f);
            if (((iVar5 == 0) || (iVar5 = FUN_140a8ce50(pbVar1,&DAT_14133f185), iVar5 == 0)) ||
               (iVar5 = FUN_140a8ce50(pbVar1,"prompt"), iVar5 == 0)) {
LAB_1408f0795:
              local_d8 = local_d8 & 0xffffffff00000000;
            }
            else {
              pbVar11 = pbVar1;
              iVar5 = FUN_140a8ce50(pbVar1,"set");
              local_d8 = CONCAT44(local_d8._4_4_,(int)CONCAT71((int7)((ulonglong)pbVar11 >> 8),1));
              if (iVar5 == 0) goto LAB_1408f0795;
            }
            iVar5 = FUN_140a8ce50(pbVar1,"errorlevel");
            if ((iVar5 == 0) || (iVar5 = FUN_140a8ce50(pbVar1,"exist"), iVar5 == 0)) {
              uVar15 = uVar14;
              if (uVar14 < param_2) {
                do {
                  if ((4 < *(byte *)(param_1 + uVar15) - 9) && (*(byte *)(param_1 + uVar15) != 0x20)
                     ) goto LAB_1408f0b13;
                  uVar15 = uVar15 + 1;
                  uVar17 = param_2;
                } while (param_2 != uVar15);
              }
              else {
LAB_1408f0b13:
                if (uVar15 < param_2) {
                  do {
                    if (((ulonglong)*(byte *)(param_1 + uVar15) < 0x21) &&
                       ((0x100003e00U >> ((ulonglong)*(byte *)(param_1 + uVar15) & 0x3f) & 1) != 0))
                    goto LAB_1408f0b3d;
                    uVar15 = uVar15 + 1;
                    uVar17 = param_2;
                  } while (param_2 != uVar15);
                }
                else {
LAB_1408f0b3d:
                  uVar17 = uVar15;
                  if (uVar15 < param_2) {
                    do {
                      if ((4 < *(byte *)(param_1 + uVar15) - 9) &&
                         (uVar17 = uVar15, *(byte *)(param_1 + uVar15) != 0x20)) break;
                      uVar15 = uVar15 + 1;
                      uVar17 = param_2;
                    } while (param_2 != uVar15);
                  }
                }
              }
            }
            else {
              iVar5 = FUN_140a8ce50(pbVar1,"call");
              if (((((iVar5 == 0) || (iVar5 = FUN_140a8ce50(abStack_a9 + 1,"do"), iVar5 == 0)) ||
                   (iVar5 = FUN_140a8ce50(abStack_a9 + 1,"loadhigh"), iVar5 == 0)) ||
                  (iVar5 = FUN_140a8ce50(abStack_a9 + 1,&DAT_14134719e), iVar5 == 0)) &&
                 (uVar15 = uVar14, uVar17 = uVar14, uVar14 < param_2)) {
                do {
                  if ((4 < *(byte *)(param_1 + uVar15) - 9) &&
                     (uVar17 = uVar15, *(byte *)(param_1 + uVar15) != 0x20)) break;
                  uVar15 = uVar15 + 1;
                  uVar17 = param_2;
                } while (param_2 != uVar15);
              }
            }
            lVar8 = uVar14 + local_f0;
            uVar15 = param_7[0x3ef];
            if (lVar8 - uVar15 != 0) {
              uVar18 = (uVar14 + local_f0) - 1;
              if (uVar18 < uVar15) goto LAB_1408f0a02;
              lVar6 = param_7[0x3ee];
              if ((0 < lVar6) && (3999 < (lVar8 - uVar15) + lVar6)) {
                (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar6,local_e0);
                uVar15 = param_7[0x3ef];
                param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                param_7[0x3ee] = 0;
                lVar6 = 0;
              }
              if (lVar6 + (uVar18 - uVar15) + 1 < 4000) {
                for (; uVar15 <= uVar18; uVar15 = uVar15 + 1) {
                  lVar6 = param_7[0x3ee];
                  param_7[0x3ee] = lVar6 + 1;
                  *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 2;
                }
              }
              else {
                (**(code **)(*(longlong *)*param_7 + 0x60))
                          ((longlong *)*param_7,(uVar18 - uVar15) + 1,2);
              }
            }
LAB_1408f0b76:
            param_7[0x3ef] = lVar8;
          }
          else if ((abStack_a9[1] & 0xfb) == 0x21) {
LAB_1408f0a5b:
            if (abStack_a9[1] < 0x2a) {
              if (abStack_a9[1] == 0x21) {
                uVar18 = local_c0 + uVar14;
                uVar13 = uVar18 - uVar15;
                uVar16 = param_7[0x3ef];
                if (uVar13 == uVar16 - 1) {
                  uVar16 = uVar13 + 1;
LAB_1408f14d1:
                  param_7[0x3ef] = uVar16;
                }
                else if (uVar16 <= uVar13) {
                  lVar8 = param_7[0x3ee];
                  local_d0 = uVar13 + 1;
                  local_e8 = uVar18;
                  if ((0 < lVar8) && (3999 < local_d0 + (lVar8 - uVar16))) {
                    (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar8,local_e0)
                    ;
                    uVar16 = param_7[0x3ef];
                    param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                    param_7[0x3ee] = 0;
                    lVar8 = 0;
                  }
                  uVar9 = uVar16;
                  if (uVar13 + (lVar8 - uVar16) + 1 < 4000) {
                    for (; uVar16 = local_d0, uVar18 = local_e8, uVar9 <= uVar13; uVar9 = uVar9 + 1)
                    {
                      lVar8 = param_7[0x3ee];
                      param_7[0x3ee] = lVar8 + 1;
                      *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 0;
                    }
                  }
                  else {
                    (**(code **)(*(longlong *)*param_7 + 0x60))
                              ((longlong *)*param_7,uVar13 + (1 - uVar16),0);
                    uVar16 = local_d0;
                    uVar18 = local_e8;
                  }
                  goto LAB_1408f14d1;
                }
                uVar9 = 1;
                uVar13 = uVar9;
                if (1 < uVar15) {
                  do {
                    uVar13 = uVar9;
                    switch(abStack_a9[uVar9 + 1]) {
                    case 0x21:
                    case 0x22:
                    case 0x27:
                    case 0x2a:
                    case 0x2b:
                    case 0x2e:
                    case 0x2f:
                    case 0x3b:
                    case 0x3c:
                    case 0x3d:
                    case 0x3e:
                    case 0x3f:
                    case 0x5c:
                    case 0x7c:
                      goto switchD_1408f14fe_caseD_21;
                    }
                    uVar9 = uVar9 + 1;
                    uVar13 = uVar15;
                  } while (uVar15 != uVar9);
                }
switchD_1408f14fe_caseD_21:
                if (abStack_a9[uVar13 + 1] == 0x21) {
                  uVar9 = (uVar14 - uVar15) + uVar13 + 1;
                  if (uVar17 != uVar14 - uVar15) {
                    uVar9 = uVar17;
                  }
                  lVar8 = uVar15 - (uVar13 + 1);
                  uVar18 = uVar18 - lVar8;
                  if (uVar18 != uVar16 - 1) {
                    if (uVar16 <= uVar18) {
                      lVar6 = param_7[0x3ee];
                      uVar13 = uVar18 + 1;
                      if ((0 < lVar6) && (local_e8 = uVar18, 3999 < uVar13 + (lVar6 - uVar16))) {
                        (**(code **)(*(longlong *)*param_7 + 0x68))
                                  ((longlong *)*param_7,lVar6,local_e0);
                        uVar16 = param_7[0x3ef];
                        param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                        param_7[0x3ee] = 0;
                        lVar6 = 0;
                        uVar18 = local_e8;
                      }
                      lVar7 = uVar18 - uVar16;
                      if (3999 < lVar6 + lVar7 + 1U) goto LAB_1408f17f9;
                      for (; uVar16 <= uVar18; uVar16 = uVar16 + 1) {
                        lVar6 = param_7[0x3ee];
                        param_7[0x3ee] = lVar6 + 1;
                        *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 6;
                      }
                      goto LAB_1408f173e;
                    }
                    goto LAB_1408f1745;
                  }
                  uVar13 = uVar18 + 1;
                  goto LAB_1408f173e;
                }
              }
              else {
                if (abStack_a9[1] != 0x25) goto LAB_1408f0e44;
                uVar18 = local_c0 + uVar14;
                uVar13 = uVar18 - uVar15;
                uVar16 = param_7[0x3ef];
                if (uVar13 == uVar16 - 1) {
                  uVar16 = uVar13 + 1;
LAB_1408f1629:
                  param_7[0x3ef] = uVar16;
                }
                else if (uVar16 <= uVar13) {
                  lVar8 = param_7[0x3ee];
                  local_d0 = uVar13 + 1;
                  local_e8 = uVar18;
                  if ((0 < lVar8) && (3999 < local_d0 + (lVar8 - uVar16))) {
                    (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar8,local_e0)
                    ;
                    uVar16 = param_7[0x3ef];
                    param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                    param_7[0x3ee] = 0;
                    lVar8 = 0;
                  }
                  uVar9 = uVar16;
                  if (uVar13 + (lVar8 - uVar16) + 1 < 4000) {
                    for (; uVar16 = local_d0, uVar18 = local_e8, uVar9 <= uVar13; uVar9 = uVar9 + 1)
                    {
                      lVar8 = param_7[0x3ee];
                      param_7[0x3ee] = lVar8 + 1;
                      *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 0;
                    }
                  }
                  else {
                    (**(code **)(*(longlong *)*param_7 + 0x60))
                              ((longlong *)*param_7,uVar13 + (1 - uVar16),0);
                    uVar16 = local_d0;
                    uVar18 = local_e8;
                  }
                  goto LAB_1408f1629;
                }
                uVar9 = 1;
                uVar13 = uVar9;
                if (1 < uVar15) {
                  do {
                    uVar13 = uVar9;
                    switch(abStack_a9[uVar9 + 1]) {
                    case 0x22:
                    case 0x25:
                    case 0x27:
                    case 0x2a:
                    case 0x2b:
                    case 0x2e:
                    case 0x2f:
                    case 0x3b:
                    case 0x3c:
                    case 0x3d:
                    case 0x3e:
                    case 0x3f:
                    case 0x5c:
                    case 0x7c:
                      goto switchD_1408f1656_caseD_22;
                    }
                    uVar9 = uVar9 + 1;
                    uVar13 = uVar15;
                  } while (uVar15 != uVar9);
                }
switchD_1408f1656_caseD_22:
                if (abStack_a9[2] == '*' || (byte)(abStack_a9[2] - 0x30) < 10) {
                  if (abStack_a9[uVar13 + 1] == 0x25) {
LAB_1408f168b:
                    uVar16 = (uVar14 - uVar15) + uVar13 + 1;
                    if (uVar17 != uVar14 - uVar15) {
                      uVar16 = uVar17;
                    }
                    lVar8 = uVar15 - (uVar13 + 1);
                    FUN_1408f22e0(param_7,uVar18 - lVar8,6);
                    uVar14 = uVar14 - lVar8;
                    uVar17 = uVar16;
                  }
                  else {
                    uVar13 = uVar14 - uVar15;
                    uVar14 = uVar14 - (uVar15 - 2);
                    if (uVar17 == uVar13) {
                      uVar17 = uVar14;
                    }
                    uVar18 = uVar18 - (uVar15 - 2);
                    if (uVar18 == uVar16 - 1) {
                      param_7[0x3ef] = uVar16;
                    }
                    else if (uVar16 <= uVar18) {
                      lVar6 = param_7[0x3ee];
                      lVar8 = uVar18 + 1;
                      if ((0 < lVar6) && (3999 < (lVar8 - uVar16) + lVar6)) {
                        (**(code **)(*(longlong *)*param_7 + 0x68))
                                  ((longlong *)*param_7,lVar6,local_e0);
                        uVar16 = param_7[0x3ef];
                        param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                        param_7[0x3ee] = 0;
                        lVar6 = 0;
                      }
                      if (uVar18 + (lVar6 - uVar16) + 1 < 4000) {
                        for (; uVar16 <= uVar18; uVar16 = uVar16 + 1) {
                          lVar6 = param_7[0x3ee];
                          param_7[0x3ee] = lVar6 + 1;
                          *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 6;
                        }
                      }
                      else {
                        (**(code **)(*(longlong *)*param_7 + 0x60))
                                  ((longlong *)*param_7,uVar18 + (1 - uVar16),6);
                      }
                      goto LAB_1408f0b76;
                    }
                  }
                }
                else {
                  if ((1 < uVar15 && abStack_a9[2] == '~') ||
                     (local_e8 = uVar18,
                     (abStack_a9[3] == '~' && abStack_a9[2] == '%') && 2 < uVar15)) {
                    uVar9 = (uVar14 - uVar15) + uVar13;
                    if (uVar17 != uVar14 - uVar15) {
                      uVar9 = uVar17;
                    }
                    lVar8 = uVar15 - uVar13;
                    uVar18 = uVar18 - lVar8;
                    if (uVar18 == uVar16 - 1) {
                      uVar13 = uVar18 + 1;
                    }
                    else {
                      if (uVar18 < uVar16) goto LAB_1408f1745;
                      lVar6 = param_7[0x3ee];
                      uVar13 = uVar18 + 1;
                      local_e8 = uVar18;
                      if ((0 < lVar6) && (3999 < uVar13 + (lVar6 - uVar16))) {
                        (**(code **)(*(longlong *)*param_7 + 0x68))
                                  ((longlong *)*param_7,lVar6,local_e0);
                        uVar16 = param_7[0x3ef];
                        param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                        param_7[0x3ee] = 0;
                        lVar6 = 0;
                      }
                      lVar7 = local_e8 - uVar16;
                      if (lVar6 + lVar7 + 1U < 4000) {
                        for (; uVar16 <= local_e8; uVar16 = uVar16 + 1) {
                          lVar6 = param_7[0x3ee];
                          param_7[0x3ee] = lVar6 + 1;
                          *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 6;
                        }
                        goto LAB_1408f173e;
                      }
LAB_1408f17f9:
                      (**(code **)(*(longlong *)*param_7 + 0x60))((longlong *)*param_7,lVar7 + 1,6);
                    }
                    goto LAB_1408f173e;
                  }
                  if (abStack_a9[2] == '%') {
                    if (2 < uVar15) {
                      if (abStack_a9[3] != '%') {
                        switch(abStack_a9[3]) {
                        case 0x22:
                        case 0x27:
                        case 0x2a:
                        case 0x2b:
                        case 0x2e:
                        case 0x2f:
                        case 0x3b:
                        case 0x3c:
                        case 0x3d:
                        case 0x3e:
                        case 0x3f:
                        case 0x5c:
                        case 0x7c:
                          break;
                        default:
                          uVar16 = uVar14 - uVar15;
                          uVar14 = uVar14 - (uVar15 - 3);
                          if (uVar17 == uVar16) {
                            uVar17 = uVar14;
                          }
                          FUN_1408f22e0(param_7,uVar18 - (uVar15 - 3),6);
                        }
                      }
                    }
                  }
                  else if (abStack_a9[uVar13 + 1] == 0x25) goto LAB_1408f168b;
                }
              }
            }
            else {
              if ((abStack_a9[1] - 0x2a < 2) || (abStack_a9[1] == 0x7c)) goto LAB_1408f0ba1;
LAB_1408f0e44:
              uVar18 = 0;
              uVar16 = uVar18;
              if (uVar15 != 0) {
                do {
                  uVar18 = uVar16;
                  switch(abStack_a9[uVar16 + 1]) {
                  case 0x21:
                  case 0x22:
                  case 0x25:
                  case 0x27:
                  case 0x2a:
                  case 0x2b:
                  case 0x2e:
                  case 0x2f:
                  case 0x3b:
                  case 0x3c:
                  case 0x3d:
                  case 0x3e:
                  case 0x3f:
                  case 0x5c:
                  case 0x7c:
                    goto switchD_1408f0e74_caseD_21;
                  }
                  uVar16 = uVar16 + 1;
                  uVar18 = uVar15;
                } while (uVar15 != uVar16);
              }
switchD_1408f0e74_caseD_21:
              lVar8 = uVar14 + local_f0;
              uVar15 = uVar15 - uVar18;
              uVar16 = ~uVar15 + lVar8;
              uVar18 = param_7[0x3ef];
              if (uVar16 == uVar18 - 1) {
                uVar13 = lVar8 - uVar15;
LAB_1408f1916:
                param_7[0x3ef] = uVar13;
              }
              else if (uVar18 <= uVar16) {
                lVar6 = param_7[0x3ee];
                local_e8 = lVar8 - uVar15;
                if ((0 < lVar6) && (3999 < local_e8 + (lVar6 - uVar18))) {
                  (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar6,local_e0);
                  uVar18 = param_7[0x3ef];
                  param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                  param_7[0x3ee] = 0;
                  lVar6 = 0;
                }
                if (lVar6 + (uVar16 - uVar18) + 1 < 4000) {
                  for (; uVar13 = local_e8, uVar18 <= uVar16; uVar18 = uVar18 + 1) {
                    lVar8 = param_7[0x3ee];
                    param_7[0x3ee] = lVar8 + 1;
                    *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 0;
                  }
                }
                else {
                  (**(code **)(*(longlong *)*param_7 + 0x60))
                            ((longlong *)*param_7,(uVar16 - uVar18) + 1,0);
                  uVar13 = local_e8;
                }
                goto LAB_1408f1916;
              }
              uVar14 = uVar14 - uVar15;
            }
          }
          else {
            if (((0x3f < abStack_a9[1]) ||
                ((0xf0000c0000000000U >> ((ulonglong)abStack_a9[1] & 0x3f) & 1) == 0)) &&
               (abStack_a9[1] != 0x7c)) {
              if ((local_d8 & 1) == 0) goto LAB_1408f0a5b;
              if (2 < uVar15) {
                uVar18 = 3;
LAB_1408f13b3:
                local_d8 = uVar18 - 1;
                memcpy(auStack_b3 + 1,abStack_a9 + 1,local_d8);
                auStack_b3[uVar18] = 0;
                cVar3 = FUN_140a8bc50(param_5,auStack_b3 + 1);
                if (cVar3 == '\0') {
switchD_1408f1403_caseD_23:
                  if ((uVar15 <= uVar18) || (uVar18 = uVar18 + 1, 5 < local_d8)) goto LAB_1408f0dc7;
                  goto LAB_1408f13b3;
                }
                switch(abStack_a9[uVar18]) {
                case 0x22:
                case 0x27:
                case 0x2a:
                case 0x2b:
                case 0x2e:
                case 0x2f:
                case 0x3b:
                case 0x3c:
                case 0x3d:
                case 0x3e:
                case 0x3f:
                case 0x5c:
                case 0x7c:
                  uVar10 = FUN_140a8ce50(auStack_b3 + 1,&DAT_14133f35f);
                  local_d8 = CONCAT44(local_d8._4_4_,
                                      (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),(int)uVar10 != 0)
                                     );
                  uVar13 = (local_f0 + uVar14) - uVar15;
                  uVar16 = param_7[0x3ef];
                  if (uVar13 + (uVar18 - uVar16) == 1) {
                    lVar8 = uVar13 + (uVar18 - 1);
                  }
                  else {
                    local_d0 = uVar13 + (uVar18 - 2);
                    local_e8 = uVar13;
                    if (local_d0 < uVar16) goto LAB_1408f1c25;
                    lVar6 = param_7[0x3ee];
                    if ((0 < lVar6) && (3999 < uVar13 + (lVar6 - uVar16) + uVar18 + -1)) {
                      (**(code **)(*(longlong *)*param_7 + 0x68))
                                ((longlong *)*param_7,lVar6,local_e0);
                      uVar16 = param_7[0x3ef];
                      param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                      param_7[0x3ee] = 0;
                      lVar6 = 0;
                    }
                    lVar8 = local_e8 + (uVar18 - 1);
                    local_c8 = lVar8;
                    if (local_e8 + uVar18 + (lVar6 - uVar16) + -1 < 4000) {
                      for (; uVar16 <= local_d0; uVar16 = uVar16 + 1) {
                        lVar6 = param_7[0x3ee];
                        param_7[0x3ee] = lVar6 + 1;
                        *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 2;
                      }
                    }
                    else {
                      (**(code **)(*(longlong *)*param_7 + 0x60))
                                ((longlong *)*param_7,local_e8 + (uVar18 - uVar16) + -1,
                                 CONCAT71((int7)((ulonglong)lVar8 >> 8),2));
                      lVar8 = local_c8;
                    }
                  }
                  param_7[0x3ef] = lVar8;
LAB_1408f1c25:
                  uVar14 = uVar14 + (uVar18 - uVar15) + -1;
                  break;
                default:
                  goto switchD_1408f1403_caseD_23;
                }
                goto LAB_1408f0a02;
              }
LAB_1408f0dc7:
              if (uVar17 != uVar14 - uVar15) {
                uVar18 = 0;
                uVar16 = uVar18;
                if (uVar15 != 0) {
                  do {
                    uVar18 = uVar16;
                    switch(abStack_a9[uVar16 + 1]) {
                    case 0x21:
                    case 0x22:
                    case 0x25:
                    case 0x27:
                    case 0x2a:
                    case 0x2b:
                    case 0x2e:
                    case 0x2f:
                    case 0x3b:
                    case 0x3c:
                    case 0x3d:
                    case 0x3e:
                    case 0x3f:
                    case 0x5c:
                    case 0x7c:
                      goto switchD_1408f19ef_caseD_21;
                    }
                    uVar16 = uVar16 + 1;
                    uVar18 = uVar15;
                  } while (uVar15 != uVar16);
                }
switchD_1408f19ef_caseD_21:
                uVar16 = uVar14 + local_f0;
                uVar15 = uVar15 - uVar18;
                uVar9 = ~uVar15 + uVar16;
                uVar13 = param_7[0x3ef];
                uVar18 = uVar13 - 1;
                if (uVar9 == uVar18) {
                  uVar16 = uVar16 - uVar15;
LAB_1408f1cc3:
                  param_7[0x3ef] = uVar16;
                }
                else {
                  local_d8 = uVar16;
                  if (uVar13 <= uVar9) {
                    lVar8 = param_7[0x3ee];
                    local_d8 = uVar16 - uVar15;
                    if ((0 < lVar8) && (3999 < local_d8 + (lVar8 - uVar13))) {
                      (**(code **)(*(longlong *)*param_7 + 0x68))
                                ((longlong *)*param_7,lVar8,local_e0);
                      uVar13 = param_7[0x3ef];
                      param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                      param_7[0x3ee] = 0;
                      lVar8 = 0;
                    }
                    uVar18 = uVar9 - uVar13;
                    if (lVar8 + uVar18 + 1 < 4000) {
                      for (; uVar16 = local_d8, uVar13 <= uVar9; uVar13 = uVar13 + 1) {
                        uVar18 = param_7[0x3ee];
                        param_7[0x3ee] = uVar18 + 1;
                        *(undefined1 *)((longlong)param_7 + uVar18 + 0xfd0) = 0;
                      }
                    }
                    else {
                      uVar18 = (**(code **)(*(longlong *)*param_7 + 0x60))
                                         ((longlong *)*param_7,uVar18 + 1,0);
                      uVar16 = local_d8;
                    }
                    goto LAB_1408f1cc3;
                  }
                }
                uVar14 = uVar14 - uVar15;
                local_d8 = CONCAT44(local_d8._4_4_,(int)CONCAT71((int7)(uVar18 >> 8),1));
                goto LAB_1408f0a02;
              }
              uVar17 = 0;
              uVar18 = uVar17;
              if (uVar15 != 0) {
                do {
                  uVar17 = uVar18;
                  switch(abStack_a9[uVar18 + 1]) {
                  case 0x21:
                  case 0x22:
                  case 0x25:
                  case 0x27:
                  case 0x2a:
                  case 0x2b:
                  case 0x2e:
                  case 0x2f:
                  case 0x3b:
                  case 0x3c:
                  case 0x3d:
                  case 0x3e:
                  case 0x3f:
                  case 0x5c:
                  case 0x7c:
                    goto switchD_1408f194c_caseD_21;
                  }
                  uVar18 = uVar18 + 1;
                  uVar17 = uVar15;
                } while (uVar15 != uVar18);
              }
switchD_1408f194c_caseD_21:
              uVar14 = uVar14 + (uVar17 - uVar15);
              uVar10 = FUN_140a8ce50(abStack_a9 + 1,"choice");
              local_d8 = CONCAT44(local_d8._4_4_,
                                  (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),(int)uVar10 != 0));
              iVar5 = FUN_140a8ce50(abStack_a9 + 1,"start");
              uVar17 = uVar14;
              uVar15 = uVar14;
              if (iVar5 == 0) {
                for (; (uVar17 < param_2 &&
                       ((*(byte *)(param_1 + uVar17) - 9 < 5 ||
                        (uVar15 = uVar17, *(byte *)(param_1 + uVar17) == 0x20))));
                    uVar17 = uVar17 + 1) {
                  uVar15 = param_2;
                }
                uVar17 = uVar15;
                if (*(char *)(param_1 + uVar15) == '/') {
                  if (uVar15 < param_2) {
                    do {
                      if (((ulonglong)*(byte *)(param_1 + uVar15) < 0x21) &&
                         ((0x100003e00U >> ((ulonglong)*(byte *)(param_1 + uVar15) & 0x3f) & 1) != 0
                         )) goto LAB_1408f1c6f;
                      uVar15 = uVar15 + 1;
                      uVar17 = param_2;
                    } while (param_2 != uVar15);
                  }
                  else {
LAB_1408f1c6f:
                    uVar17 = uVar15;
                    if (uVar15 < param_2) {
                      do {
                        if ((4 < *(byte *)(param_1 + uVar15) - 9) &&
                           (uVar17 = uVar15, *(byte *)(param_1 + uVar15) != 0x20)) break;
                        uVar15 = uVar15 + 1;
                        uVar17 = param_2;
                      } while (param_2 != uVar15);
                    }
                  }
                }
              }
              cVar3 = FUN_140a8b8d0(param_6);
              if (cVar3 != '\0') {
                cVar3 = FUN_140a8bc50(param_6,abStack_a9 + 1);
                lVar8 = uVar14 + local_f0;
                uVar18 = (uVar14 + local_f0) - 1;
                uVar15 = param_7[0x3ef];
                if (cVar3 == '\0') {
                  if (lVar8 - uVar15 != 0) {
                    if (uVar18 < uVar15) goto LAB_1408f0a02;
                    lVar6 = param_7[0x3ee];
                    if ((0 < lVar6) && (3999 < (lVar8 - uVar15) + lVar6)) {
                      (**(code **)(*(longlong *)*param_7 + 0x68))
                                ((longlong *)*param_7,lVar6,local_e0);
                      uVar15 = param_7[0x3ef];
                      param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                      param_7[0x3ee] = 0;
                      lVar6 = 0;
                    }
                    if (lVar6 + (uVar18 - uVar15) + 1 < 4000) {
                      for (; uVar15 <= uVar18; uVar15 = uVar15 + 1) {
                        lVar6 = param_7[0x3ee];
                        param_7[0x3ee] = lVar6 + 1;
                        *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 0;
                      }
                    }
                    else {
                      (**(code **)(*(longlong *)*param_7 + 0x60))
                                ((longlong *)*param_7,(uVar18 - uVar15) + 1,0);
                    }
                  }
                }
                else if (lVar8 - uVar15 != 0) {
                  if (uVar18 < uVar15) goto LAB_1408f0a02;
                  lVar6 = param_7[0x3ee];
                  if ((0 < lVar6) && (3999 < (lVar8 - uVar15) + lVar6)) {
                    (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar6,local_e0)
                    ;
                    uVar15 = param_7[0x3ef];
                    param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                    param_7[0x3ee] = 0;
                    lVar6 = 0;
                  }
                  if (lVar6 + (uVar18 - uVar15) + 1 < 4000) {
                    for (; uVar15 <= uVar18; uVar15 = uVar15 + 1) {
                      lVar6 = param_7[0x3ee];
                      param_7[0x3ee] = lVar6 + 1;
                      *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 5;
                    }
                  }
                  else {
                    (**(code **)(*(longlong *)*param_7 + 0x60))
                              ((longlong *)*param_7,(uVar18 - uVar15) + 1,5);
                  }
                }
                param_7[0x3ef] = lVar8;
                goto LAB_1408f0a02;
              }
              lVar8 = uVar14 + local_f0;
              uVar15 = param_7[0x3ef];
              if (lVar8 - uVar15 != 0) {
                uVar18 = (uVar14 + local_f0) - 1;
                if (uVar18 < uVar15) goto LAB_1408f0a02;
                lVar6 = param_7[0x3ee];
                if ((0 < lVar6) && (3999 < (lVar8 - uVar15) + lVar6)) {
                  (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar6,local_e0);
                  uVar15 = param_7[0x3ef];
                  param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                  param_7[0x3ee] = 0;
                  lVar6 = 0;
                }
                if (lVar6 + (uVar18 - uVar15) + 1 < 4000) {
                  for (; uVar15 <= uVar18; uVar15 = uVar15 + 1) {
                    lVar6 = param_7[0x3ee];
                    param_7[0x3ee] = lVar6 + 1;
                    *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 5;
                  }
                }
                else {
                  (**(code **)(*(longlong *)*param_7 + 0x60))
                            ((longlong *)*param_7,(uVar18 - uVar15) + 1,5);
                }
              }
              goto LAB_1408f0b76;
            }
LAB_1408f0ba1:
            uVar18 = (uVar14 + local_f0) - 1;
            uVar16 = uVar18 - uVar15;
            uVar13 = param_7[0x3ef];
            if (uVar16 == uVar13 - 1) {
              uVar13 = uVar16 + 1;
LAB_1408f0ece:
              param_7[0x3ef] = uVar13;
            }
            else if (uVar13 <= uVar16) {
              lVar8 = param_7[0x3ee];
              local_e8 = uVar16 + 1;
              if ((0 < lVar8) && (3999 < local_e8 + (lVar8 - uVar13))) {
                local_d0 = uVar18;
                (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar8,local_e0);
                uVar13 = param_7[0x3ef];
                param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                param_7[0x3ee] = 0;
                lVar8 = 0;
                uVar18 = local_d0;
              }
              uVar9 = uVar13;
              if (uVar16 + (lVar8 - uVar13) + 1 < 4000) {
                for (; uVar13 = local_e8, uVar9 <= uVar16; uVar9 = uVar9 + 1) {
                  lVar8 = param_7[0x3ee];
                  param_7[0x3ee] = lVar8 + 1;
                  *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 0;
                }
              }
              else {
                (**(code **)(*(longlong *)*param_7 + 0x60))
                          ((longlong *)*param_7,uVar16 + (1 - uVar13),0);
                uVar13 = local_e8;
              }
              goto LAB_1408f0ece;
            }
            if ((abStack_a9[1] != 0x3d) || (abStack_a9[2] != '=')) {
              lVar8 = uVar14 + local_f0;
              if (abStack_a9[1] == 0x3e) {
                local_d8 = CONCAT44(local_d8._4_4_,1);
              }
              else if (abStack_a9[1] == 0x7c) {
                uVar14 = uVar14 + (1 - uVar15);
                uVar17 = uVar14;
                for (uVar18 = uVar14;
                    (uVar18 < param_2 &&
                    ((*(byte *)(param_1 + uVar18) - 9 < 5 ||
                     (uVar17 = uVar18, *(byte *)(param_1 + uVar18) == 0x20)))); uVar18 = uVar18 + 1)
                {
                  uVar17 = param_2;
                }
                uVar15 = lVar8 - uVar15;
                if (uVar15 == uVar13 - 1) {
                  param_7[0x3ef] = uVar15 + 1;
                }
                else if (uVar13 <= uVar15) {
                  lVar6 = param_7[0x3ee];
                  lVar8 = uVar15 + 1;
                  if ((0 < lVar6) && (3999 < (lVar8 - uVar13) + lVar6)) {
                    (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar6,local_e0)
                    ;
                    uVar13 = param_7[0x3ef];
                    param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                    param_7[0x3ee] = 0;
                    lVar6 = 0;
                  }
                  if (uVar15 + (lVar6 - uVar13) + 1 < 4000) {
                    for (; uVar13 <= uVar15; uVar13 = uVar13 + 1) {
                      lVar6 = param_7[0x3ee];
                      param_7[0x3ee] = lVar6 + 1;
                      *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 7;
                    }
                  }
                  else {
                    (**(code **)(*(longlong *)*param_7 + 0x60))
                              ((longlong *)*param_7,uVar15 + (1 - uVar13),7);
                  }
                  goto LAB_1408f0b76;
                }
                goto LAB_1408f0a02;
              }
              uVar18 = lVar8 - uVar15;
              if (uVar18 == uVar13 - 1) {
LAB_1408f1032:
                param_7[0x3ef] = uVar18 + 1;
              }
              else if (uVar13 <= uVar18) {
                lVar8 = param_7[0x3ee];
                uVar16 = uVar18;
                if ((0 < lVar8) && (3999 < uVar18 + lVar8 + (1 - uVar13))) {
                  local_e8 = uVar18;
                  (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar8,local_e0);
                  uVar13 = param_7[0x3ef];
                  param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                  param_7[0x3ee] = 0;
                  lVar8 = 0;
                  uVar16 = local_e8;
                }
                if (uVar16 + (lVar8 - uVar13) + 1 < 4000) {
                  for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                    lVar8 = param_7[0x3ee];
                    param_7[0x3ee] = lVar8 + 1;
                    *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 7;
                  }
                }
                else {
                  (**(code **)(*(longlong *)*param_7 + 0x60))
                            ((longlong *)*param_7,uVar16 + (1 - uVar13),7);
                }
                goto LAB_1408f1032;
              }
              uVar14 = uVar14 + (1 - uVar15);
              goto LAB_1408f0a02;
            }
            uVar9 = uVar14;
            uVar17 = uVar14;
            if (uVar14 < param_2) {
              do {
                if ((4 < *(byte *)(param_1 + uVar17) - 9) &&
                   (uVar9 = uVar17, *(byte *)(param_1 + uVar17) != 0x20)) break;
                uVar17 = uVar17 + 1;
                uVar9 = param_2;
              } while (param_2 != uVar17);
            }
            lVar8 = uVar15 - 2;
            uVar18 = uVar18 - lVar8;
            if (uVar18 == uVar13 - 1) {
LAB_1408f173e:
              param_7[0x3ef] = uVar13;
            }
            else if (uVar13 <= uVar18) {
              lVar6 = param_7[0x3ee];
              uVar17 = uVar18 + 1;
              if ((0 < lVar6) && (3999 < uVar17 + (lVar6 - uVar13))) {
                local_d0 = uVar18;
                (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar6,local_e0);
                uVar13 = param_7[0x3ef];
                param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
                param_7[0x3ee] = 0;
                lVar6 = 0;
                uVar18 = local_d0;
              }
              uVar15 = uVar13;
              if (uVar18 + (lVar6 - uVar13) + 1 < 4000) {
                for (; uVar13 = uVar17, uVar15 <= uVar18; uVar15 = uVar15 + 1) {
                  lVar6 = param_7[0x3ee];
                  param_7[0x3ee] = lVar6 + 1;
                  *(undefined1 *)((longlong)param_7 + lVar6 + 0xfd0) = 7;
                }
              }
              else {
                (**(code **)(*(longlong *)*param_7 + 0x60))
                          ((longlong *)*param_7,uVar18 + (1 - uVar13),7);
                uVar13 = uVar17;
              }
              goto LAB_1408f173e;
            }
LAB_1408f1745:
            uVar14 = uVar14 - lVar8;
            uVar17 = uVar9;
          }
LAB_1408f0a02:
          if (uVar14 < param_2) {
            while ((*(byte *)(param_1 + uVar14) - 9 < 5 || (*(byte *)(param_1 + uVar14) == 0x20))) {
              uVar14 = uVar14 + 1;
              if (param_2 == uVar14) goto LAB_1408f1fc3;
            }
          }
          if (param_2 <= uVar14) goto LAB_1408f1fc3;
          goto LAB_1408f0452;
        }
        uVar17 = param_7[0x3ef];
        if (param_4 == uVar17 - 1) goto LAB_1408f1fd9;
        if (param_4 < uVar17) goto LAB_1408f1fe0;
        lVar8 = param_7[0x3ee];
        if ((0 < lVar8) && (3999 < ((param_4 + 1) - uVar17) + lVar8)) {
          (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar8,local_e0);
          uVar17 = param_7[0x3ef];
          param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
          param_7[0x3ee] = 0;
          lVar8 = 0;
        }
        lVar6 = param_4 - uVar17;
        if (3999 < lVar8 + lVar6 + 1U) goto LAB_1408f0150;
        for (; uVar17 <= param_4; uVar17 = uVar17 + 1) {
          lVar8 = param_7[0x3ee];
          param_7[0x3ee] = lVar8 + 1;
          *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 1;
        }
        goto LAB_1408f1fd9;
      }
    }
    goto LAB_1408f1fca;
  }
  if (*(char *)(param_1 + 1 + uVar17) == ':') {
    if (param_4 == uVar18 - 1) goto LAB_1408f1fd9;
    if (param_4 < uVar18) goto LAB_1408f1fe0;
    lVar8 = param_7[0x3ee];
    if ((0 < lVar8) && (3999 < ((param_4 + 1) - uVar18) + lVar8)) {
      (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar8,param_7 + 0x1fa);
      uVar18 = param_7[0x3ef];
      param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
      param_7[0x3ee] = 0;
      lVar8 = 0;
    }
    lVar6 = param_4 - uVar18;
    if (lVar6 + lVar8 + 1U < 4000) {
      for (; uVar18 <= param_4; uVar18 = uVar18 + 1) {
        lVar8 = param_7[0x3ee];
        param_7[0x3ee] = lVar8 + 1;
        *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 1;
      }
      goto LAB_1408f1fd9;
    }
LAB_1408f0150:
    lVar6 = lVar6 + 1;
    plVar12 = (longlong *)*param_7;
    lVar8 = *plVar12;
    uVar10 = 1;
LAB_1408f208c:
    (**(code **)(lVar8 + 0x60))(plVar12,lVar6,uVar10);
  }
  else if (param_4 != uVar18 - 1) {
    if (param_4 < uVar18) goto LAB_1408f1fe0;
    lVar8 = param_7[0x3ee];
    if ((0 < lVar8) && (3999 < ((param_4 + 1) - uVar18) + lVar8)) {
      (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar8,param_7 + 0x1fa);
      uVar18 = param_7[0x3ef];
      param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
      param_7[0x3ee] = 0;
      lVar8 = 0;
    }
    if (3999 < (param_4 - uVar18) + lVar8 + 1) {
      lVar6 = (param_4 - uVar18) + 1;
      plVar12 = (longlong *)*param_7;
      lVar8 = *plVar12;
      uVar10 = 3;
      goto LAB_1408f208c;
    }
    for (; uVar18 <= param_4; uVar18 = uVar18 + 1) {
      lVar8 = param_7[0x3ee];
      param_7[0x3ee] = lVar8 + 1;
      *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 3;
    }
  }
LAB_1408f1fd9:
  param_7[0x3ef] = param_4 + 1;
LAB_1408f1fe0:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_118)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_118);
LAB_1408f1fc3:
  uVar18 = param_7[0x3ef];
LAB_1408f1fca:
  if (param_4 != uVar18 - 1) {
    if (param_4 < uVar18) goto LAB_1408f1fe0;
    lVar8 = param_7[0x3ee];
    if ((0 < lVar8) && (3999 < ((param_4 + 1) - uVar18) + lVar8)) {
      (**(code **)(*(longlong *)*param_7 + 0x68))((longlong *)*param_7,lVar8,param_7 + 0x1fa);
      uVar18 = param_7[0x3ef];
      param_7[0x3f0] = param_7[0x3f0] + param_7[0x3ee];
      param_7[0x3ee] = 0;
      lVar8 = 0;
    }
    if (3999 < (param_4 - uVar18) + lVar8 + 1) {
      lVar6 = (param_4 - uVar18) + 1;
      plVar12 = (longlong *)*param_7;
      lVar8 = *plVar12;
      uVar10 = 0;
      goto LAB_1408f208c;
    }
    for (; uVar18 <= param_4; uVar18 = uVar18 + 1) {
      lVar8 = param_7[0x3ee];
      param_7[0x3ee] = lVar8 + 1;
      *(undefined1 *)((longlong)param_7 + lVar8 + 0xfd0) = 0;
    }
  }
  goto LAB_1408f1fd9;
}

