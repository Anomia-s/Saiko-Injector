/**
 * Function: callback_function
 * Address:  1409afbb0
 * Signature: undefined callback_function(void)
 * Body size: 3891 bytes
 */


void callback_function(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 *param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  uint local_5c;
  uint local_58;
  longlong local_50;
  ulonglong local_48;
  
  iVar4 = FUN_140a8c980(param_5,"fold",0);
  if (iVar4 == 0) {
    return;
  }
  local_50 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,param_1);
  if (local_50 < 1) {
    local_58 = 0x400;
    lVar8 = param_5[0x1f6];
    local_5c = local_58;
  }
  else {
    iVar4 = (**(code **)(*(longlong *)*param_5 + 0x38))((longlong *)*param_5,local_50 + -1);
    local_5c = iVar4 >> 0x10;
    lVar8 = param_5[0x1f6];
  }
  if (((longlong)param_1 < lVar8) || ((longlong)param_5[0x1f7] <= (longlong)param_1)) {
    lVar8 = param_1 - 500;
    param_5[0x1f6] = lVar8;
    lVar16 = param_5[0x1f9];
    lVar6 = lVar16 + -4000;
    if ((longlong)(param_1 + 0xdac) <= lVar16) {
      lVar6 = lVar8;
    }
    if (lVar16 < (longlong)(param_1 + 0xdac) || lVar6 < 0) {
      lVar8 = 0;
      if (0 < lVar6) {
        lVar8 = lVar6;
      }
      param_5[0x1f6] = lVar8;
    }
    if (lVar8 + 4000 < lVar16) {
      lVar16 = lVar8 + 4000;
    }
    param_5[0x1f7] = lVar16;
    (**(code **)(*(longlong *)*param_5 + 0x18))
              ((longlong *)*param_5,param_5 + 1,lVar8,lVar16 - lVar8);
    *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
    lVar8 = param_5[0x1f6];
  }
  local_48 = param_2 + param_1;
  if (local_48 <= param_1) {
    return;
  }
  puVar1 = param_5 + 1;
  lVar16 = (longlong)param_5 + param_1 + 8;
  bVar18 = true;
  bVar2 = 0;
  bVar3 = false;
  bVar11 = *(byte *)((longlong)param_5 + (param_1 - lVar8) + 8);
  local_58 = local_5c;
LAB_1409afd29:
  uVar17 = param_1 + 1;
  lVar8 = param_5[0x1f6];
  lVar6 = param_5[0x1f7];
  if ((longlong)uVar17 < lVar8 || lVar6 <= (longlong)uVar17) {
    lVar8 = param_1 - 499;
    param_5[0x1f6] = lVar8;
    lVar6 = param_5[0x1f9];
    lVar5 = lVar6 + -4000;
    if ((longlong)(param_1 + 0xdad) <= lVar6) {
      lVar5 = lVar8;
    }
    if (lVar6 < (longlong)(param_1 + 0xdad) || lVar5 < 0) {
      if (lVar5 < 1) {
        lVar5 = 0;
      }
      param_5[0x1f6] = lVar5;
      lVar8 = lVar5;
    }
    if (lVar8 + 4000 < lVar6) {
      lVar6 = lVar8 + 4000;
    }
    param_5[0x1f7] = lVar6;
    (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,puVar1,lVar8,lVar6 - lVar8);
    *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
    lVar8 = param_5[0x1f6];
    lVar6 = param_5[0x1f7];
    bVar12 = 0x20;
    if ((longlong)uVar17 < lVar6 && lVar8 <= (longlong)uVar17) goto LAB_1409afe03;
  }
  else {
LAB_1409afe03:
    bVar12 = *(byte *)((longlong)puVar1 + (uVar17 - lVar8));
  }
  if (bVar18) {
    switch(bVar11) {
    default:
      uVar14 = local_5c << 0x10 | local_58;
      goto LAB_1409b0a2b;
    case 0x43:
    case 99:
      if ((bVar12 | 0x20) != 0x61) break;
      lVar5 = 0;
      do {
        lVar7 = param_1 + lVar5;
        if ((lVar7 < lVar8) || (lVar6 <= lVar7)) {
          lVar15 = param_1 + lVar5 + -500;
          param_5[0x1f6] = lVar15;
          lVar9 = param_1 + lVar5 + 0xdac;
          lVar8 = param_5[0x1f9];
          lVar6 = lVar8 + -4000;
          if (lVar9 <= lVar8) {
            lVar6 = lVar15;
          }
          if (lVar8 < lVar9 || lVar6 < 0) {
            if (lVar6 < 1) {
              lVar6 = 0;
            }
            param_5[0x1f6] = lVar6;
            lVar15 = lVar6;
          }
          if (lVar15 + 4000 < lVar8) {
            lVar8 = lVar15 + 4000;
          }
          param_5[0x1f7] = lVar8;
          (**(code **)(*(longlong *)*param_5 + 0x18))
                    ((longlong *)*param_5,puVar1,lVar15,lVar8 - lVar15);
          *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
          lVar8 = param_5[0x1f6];
          lVar6 = param_5[0x1f7];
          cVar10 = ' ';
          if (lVar7 < lVar6 && lVar8 <= lVar7) goto LAB_1409aff16;
        }
        else {
LAB_1409aff16:
          cVar13 = *(char *)((lVar16 - lVar8) + lVar5);
          cVar10 = cVar13 + -0x20;
          if (cVar13 < 'a') {
            cVar10 = cVar13;
          }
        }
        if ("CALLBACK FUNCTION"[lVar5] != cVar10) goto LAB_1409b0a39;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x11);
      goto LAB_1409b0a1d;
    case 0x46:
    case 0x66:
      if ((bVar12 | 0x20) == 0x75) {
        lVar5 = 0;
        do {
          lVar7 = param_1 + lVar5;
          if ((lVar7 < lVar8) || (lVar6 <= lVar7)) {
            lVar15 = param_1 + lVar5 + -500;
            param_5[0x1f6] = lVar15;
            lVar9 = param_1 + lVar5 + 0xdac;
            lVar8 = param_5[0x1f9];
            lVar6 = lVar8 + -4000;
            if (lVar9 <= lVar8) {
              lVar6 = lVar15;
            }
            if (lVar8 < lVar9 || lVar6 < 0) {
              if (lVar6 < 1) {
                lVar6 = 0;
              }
              param_5[0x1f6] = lVar6;
              lVar15 = lVar6;
            }
            if (lVar15 + 4000 < lVar8) {
              lVar8 = lVar15 + 4000;
            }
            param_5[0x1f7] = lVar8;
            (**(code **)(*(longlong *)*param_5 + 0x18))
                      ((longlong *)*param_5,puVar1,lVar15,lVar8 - lVar15);
            *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
            lVar8 = param_5[0x1f6];
            lVar6 = param_5[0x1f7];
            cVar10 = ' ';
            if (lVar7 < lVar6 && lVar8 <= lVar7) goto LAB_1409b0036;
          }
          else {
LAB_1409b0036:
            cVar13 = *(char *)((lVar16 - lVar8) + lVar5);
            cVar10 = cVar13 + -0x20;
            if (cVar13 < 'a') {
              cVar10 = cVar13;
            }
          }
          if ("STATIC FUNCTION"[lVar5 + 7] != cVar10) goto LAB_1409b0a39;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 8);
        goto LAB_1409b0a1d;
      }
      break;
    case 0x4d:
    case 0x6d:
      if ((bVar12 | 0x20) == 0x61) {
        if ((longlong)param_1 < lVar8 || lVar6 <= (longlong)param_1) {
          lVar8 = param_1 - 500;
          param_5[0x1f6] = lVar8;
          lVar6 = param_5[0x1f9];
          lVar5 = lVar6 + -4000;
          if ((longlong)(param_1 + 0xdac) <= lVar6) {
            lVar5 = lVar8;
          }
          if (lVar6 < (longlong)(param_1 + 0xdac) || lVar5 < 0) {
            if (lVar5 < 1) {
              lVar5 = 0;
            }
            param_5[0x1f6] = lVar5;
            lVar8 = lVar5;
          }
          if (lVar8 + 4000 < lVar6) {
            lVar6 = lVar8 + 4000;
          }
          param_5[0x1f7] = lVar6;
          (**(code **)(*(longlong *)*param_5 + 0x18))
                    ((longlong *)*param_5,puVar1,lVar8,lVar6 - lVar8);
          *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
          lVar8 = param_5[0x1f6];
          lVar6 = param_5[0x1f7];
          if (lVar6 <= (longlong)param_1 || (longlong)param_1 < lVar8) break;
        }
        cVar10 = *(char *)((longlong)puVar1 + (param_1 - lVar8));
        cVar13 = cVar10 + -0x20;
        if (cVar10 < 'a') {
          cVar13 = cVar10;
        }
        if (cVar13 == 'M') {
          if (((longlong)uVar17 < lVar8) || (lVar6 <= (longlong)uVar17)) {
            lVar8 = param_1 - 499;
            param_5[0x1f6] = lVar8;
            lVar6 = param_5[0x1f9];
            lVar5 = lVar6 + -4000;
            if ((longlong)(param_1 + 0xdad) <= lVar6) {
              lVar5 = lVar8;
            }
            if (lVar6 < (longlong)(param_1 + 0xdad) || lVar5 < 0) {
              if (lVar5 < 1) {
                lVar5 = 0;
              }
              param_5[0x1f6] = lVar5;
              lVar8 = lVar5;
            }
            if (lVar8 + 4000 < lVar6) {
              lVar6 = lVar8 + 4000;
            }
            param_5[0x1f7] = lVar6;
            (**(code **)(*(longlong *)*param_5 + 0x18))
                      ((longlong *)*param_5,puVar1,lVar8,lVar6 - lVar8);
            *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
            lVar8 = param_5[0x1f6];
            lVar6 = param_5[0x1f7];
            if (lVar6 <= (longlong)uVar17 || (longlong)uVar17 < lVar8) break;
          }
          cVar10 = *(char *)((longlong)puVar1 + (uVar17 - lVar8));
          cVar13 = cVar10 + -0x20;
          if (cVar10 < 'a') {
            cVar13 = cVar10;
          }
          if (cVar13 == 'A') {
            lVar5 = param_1 + 2;
            if ((lVar5 < lVar8) || (lVar6 <= lVar5)) {
              lVar8 = param_1 - 0x1f2;
              param_5[0x1f6] = lVar8;
              lVar6 = param_5[0x1f9];
              lVar7 = lVar6 + -4000;
              if ((longlong)(param_1 + 0xdae) <= lVar6) {
                lVar7 = lVar8;
              }
              if (lVar6 < (longlong)(param_1 + 0xdae) || lVar7 < 0) {
                if (lVar7 < 1) {
                  lVar7 = 0;
                }
                param_5[0x1f6] = lVar7;
                lVar8 = lVar7;
              }
              if (lVar8 + 4000 < lVar6) {
                lVar6 = lVar8 + 4000;
              }
              param_5[0x1f7] = lVar6;
              (**(code **)(*(longlong *)*param_5 + 0x18))
                        ((longlong *)*param_5,puVar1,lVar8,lVar6 - lVar8);
              *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
              lVar8 = param_5[0x1f6];
              lVar6 = param_5[0x1f7];
              if (lVar6 <= lVar5 || lVar5 < lVar8) break;
            }
            cVar10 = *(char *)((longlong)puVar1 + (lVar5 - lVar8));
            cVar13 = cVar10 + -0x20;
            if (cVar10 < 'a') {
              cVar13 = cVar10;
            }
            if (cVar13 == 'C') {
              lVar5 = param_1 + 3;
              if ((lVar5 < lVar8) || (lVar6 <= lVar5)) {
                lVar8 = param_1 - 0x1f1;
                param_5[0x1f6] = lVar8;
                lVar6 = param_5[0x1f9];
                lVar7 = lVar6 + -4000;
                if ((longlong)(param_1 + 0xdaf) <= lVar6) {
                  lVar7 = lVar8;
                }
                if (lVar6 < (longlong)(param_1 + 0xdaf) || lVar7 < 0) {
                  if (lVar7 < 1) {
                    lVar7 = 0;
                  }
                  param_5[0x1f6] = lVar7;
                  lVar8 = lVar7;
                }
                if (lVar8 + 4000 < lVar6) {
                  lVar6 = lVar8 + 4000;
                }
                param_5[0x1f7] = lVar6;
                (**(code **)(*(longlong *)*param_5 + 0x18))
                          ((longlong *)*param_5,puVar1,lVar8,lVar6 - lVar8);
                *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
                lVar8 = param_5[0x1f6];
                lVar6 = param_5[0x1f7];
                if (lVar6 <= lVar5 || lVar5 < lVar8) break;
              }
              cVar10 = *(char *)((longlong)puVar1 + (lVar5 - lVar8));
              cVar13 = cVar10 + -0x20;
              if (cVar10 < 'a') {
                cVar13 = cVar10;
              }
              if (cVar13 == 'R') {
                lVar5 = param_1 + 4;
                if ((lVar5 < lVar8) || (lVar6 <= lVar5)) {
                  lVar8 = param_1 - 0x1f0;
                  param_5[0x1f6] = lVar8;
                  lVar6 = param_5[0x1f9];
                  lVar7 = lVar6 + -4000;
                  if ((longlong)(param_1 + 0xdb0) <= lVar6) {
                    lVar7 = lVar8;
                  }
                  if (lVar6 < (longlong)(param_1 + 0xdb0) || lVar7 < 0) {
                    if (lVar7 < 1) {
                      lVar7 = 0;
                    }
                    param_5[0x1f6] = lVar7;
                    lVar8 = lVar7;
                  }
                  if (lVar8 + 4000 < lVar6) {
                    lVar6 = lVar8 + 4000;
                  }
                  param_5[0x1f7] = lVar6;
                  (**(code **)(*(longlong *)*param_5 + 0x18))
                            ((longlong *)*param_5,puVar1,lVar8,lVar6 - lVar8);
                  *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
                  lVar8 = param_5[0x1f6];
                  bVar2 = 0;
                  if ((lVar5 < lVar8) || ((longlong)param_5[0x1f7] <= lVar5))
                  goto switchD_1409b0096_caseD_56;
                }
                cVar10 = *(char *)((longlong)puVar1 + (lVar5 - lVar8));
                cVar13 = cVar10 + -0x20;
                if (cVar10 < 'a') {
                  cVar13 = cVar10;
                }
                bVar3 = (bool)(bVar3 | cVar13 == 'O');
              }
            }
          }
        }
      }
      break;
    case 0x53:
    case 0x73:
      bVar2 = 0;
      switch(bVar12) {
      case 0x54:
      case 0x74:
        lVar5 = 0;
        do {
          lVar7 = param_1 + lVar5;
          if ((lVar7 < lVar8) || (lVar6 <= lVar7)) {
            lVar15 = param_1 + lVar5 + -500;
            param_5[0x1f6] = lVar15;
            lVar9 = param_1 + lVar5 + 0xdac;
            lVar8 = param_5[0x1f9];
            lVar6 = lVar8 + -4000;
            if (lVar9 <= lVar8) {
              lVar6 = lVar15;
            }
            if (lVar8 < lVar9 || lVar6 < 0) {
              if (lVar6 < 1) {
                lVar6 = 0;
              }
              param_5[0x1f6] = lVar6;
              lVar15 = lVar6;
            }
            if (lVar15 + 4000 < lVar8) {
              lVar8 = lVar15 + 4000;
            }
            param_5[0x1f7] = lVar8;
            (**(code **)(*(longlong *)*param_5 + 0x18))
                      ((longlong *)*param_5,puVar1,lVar15,lVar8 - lVar15);
            *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
            lVar8 = param_5[0x1f6];
            lVar6 = param_5[0x1f7];
            cVar10 = ' ';
            if (lVar7 < lVar6 && lVar8 <= lVar7) goto LAB_1409b0166;
          }
          else {
LAB_1409b0166:
            cVar13 = *(char *)((lVar16 - lVar8) + lVar5);
            cVar10 = cVar13 + -0x20;
            if (cVar13 < 'a') {
              cVar10 = cVar13;
            }
          }
          if ("STATIC FUNCTION"[lVar5] != cVar10) {
            lVar5 = 0;
            goto LAB_1409b0920;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0xf);
        goto LAB_1409b0a1d;
      case 0x55:
      case 0x75:
        if ((longlong)param_1 < lVar8 || lVar6 <= (longlong)param_1) {
          lVar8 = param_1 - 500;
          param_5[0x1f6] = lVar8;
          lVar6 = param_5[0x1f9];
          lVar5 = lVar6 + -4000;
          if ((longlong)(param_1 + 0xdac) <= lVar6) {
            lVar5 = lVar8;
          }
          if (lVar6 < (longlong)(param_1 + 0xdac) || lVar5 < 0) {
            if (lVar5 < 1) {
              lVar5 = 0;
            }
            param_5[0x1f6] = lVar5;
            lVar8 = lVar5;
          }
          if (lVar8 + 4000 < lVar6) {
            lVar6 = lVar8 + 4000;
          }
          param_5[0x1f7] = lVar6;
          (**(code **)(*(longlong *)*param_5 + 0x18))
                    ((longlong *)*param_5,puVar1,lVar8,lVar6 - lVar8);
          *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
          lVar8 = param_5[0x1f6];
          lVar6 = param_5[0x1f7];
          if (lVar6 <= (longlong)param_1 || (longlong)param_1 < lVar8) break;
        }
        cVar10 = *(char *)((longlong)puVar1 + (param_1 - lVar8));
        cVar13 = cVar10 + -0x20;
        if (cVar10 < 'a') {
          cVar13 = cVar10;
        }
        if (cVar13 == 'S') {
          if (((longlong)uVar17 < lVar8) || (lVar6 <= (longlong)uVar17)) {
            lVar8 = param_1 - 499;
            param_5[0x1f6] = lVar8;
            lVar6 = param_5[0x1f9];
            lVar5 = lVar6 + -4000;
            if ((longlong)(param_1 + 0xdad) <= lVar6) {
              lVar5 = lVar8;
            }
            if (lVar6 < (longlong)(param_1 + 0xdad) || lVar5 < 0) {
              if (lVar5 < 1) {
                lVar5 = 0;
              }
              param_5[0x1f6] = lVar5;
              lVar8 = lVar5;
            }
            if (lVar8 + 4000 < lVar6) {
              lVar6 = lVar8 + 4000;
            }
            param_5[0x1f7] = lVar6;
            (**(code **)(*(longlong *)*param_5 + 0x18))
                      ((longlong *)*param_5,puVar1,lVar8,lVar6 - lVar8);
            *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
            lVar8 = param_5[0x1f6];
            lVar6 = param_5[0x1f7];
            if (lVar6 <= (longlong)uVar17 || (longlong)uVar17 < lVar8) break;
          }
          cVar10 = *(char *)((longlong)puVar1 + (uVar17 - lVar8));
          cVar13 = cVar10 + -0x20;
          if (cVar10 < 'a') {
            cVar13 = cVar10;
          }
          if (cVar13 == 'U') {
            lVar5 = param_1 + 2;
            if ((lVar5 < lVar8) || (lVar6 <= lVar5)) {
              lVar8 = param_1 - 0x1f2;
              param_5[0x1f6] = lVar8;
              lVar6 = param_5[0x1f9];
              lVar7 = lVar6 + -4000;
              if ((longlong)(param_1 + 0xdae) <= lVar6) {
                lVar7 = lVar8;
              }
              if (lVar6 < (longlong)(param_1 + 0xdae) || lVar7 < 0) {
                if (lVar7 < 1) {
                  lVar7 = 0;
                }
                param_5[0x1f6] = lVar7;
                lVar8 = lVar7;
              }
              if (lVar8 + 4000 < lVar6) {
                lVar6 = lVar8 + 4000;
              }
              param_5[0x1f7] = lVar6;
              (**(code **)(*(longlong *)*param_5 + 0x18))
                        ((longlong *)*param_5,puVar1,lVar8,lVar6 - lVar8);
              *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
              lVar8 = param_5[0x1f6];
              bVar2 = 0;
              if ((lVar5 < lVar8) || ((longlong)param_5[0x1f7] <= lVar5))
              goto switchD_1409b0096_caseD_56;
            }
            cVar10 = *(char *)((longlong)puVar1 + (lVar5 - lVar8));
            cVar13 = cVar10 + -0x20;
            if (cVar10 < 'a') {
              cVar13 = cVar10;
            }
            if (cVar13 == 'B') goto LAB_1409b0a1d;
          }
        }
        break;
      default:
        goto switchD_1409b0096_caseD_56;
      }
    }
    goto LAB_1409b0a39;
  }
  goto switchD_1409b0096_caseD_56;
  while (lVar5 = lVar5 + 1, lVar5 != 10) {
LAB_1409b0920:
    lVar7 = param_1 + lVar5;
    if ((lVar7 < lVar8) || (lVar6 <= lVar7)) {
      lVar15 = param_1 + lVar5 + -500;
      param_5[0x1f6] = lVar15;
      lVar9 = param_1 + lVar5 + 0xdac;
      lVar8 = param_5[0x1f9];
      lVar6 = lVar8 + -4000;
      if (lVar9 <= lVar8) {
        lVar6 = lVar15;
      }
      if (lVar8 < lVar9 || lVar6 < 0) {
        if (lVar6 < 1) {
          lVar6 = 0;
        }
        param_5[0x1f6] = lVar6;
        lVar15 = lVar6;
      }
      if (lVar15 + 4000 < lVar8) {
        lVar8 = lVar15 + 4000;
      }
      param_5[0x1f7] = lVar8;
      (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,puVar1,lVar15,lVar8 - lVar15)
      ;
      *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
      lVar8 = param_5[0x1f6];
      lVar6 = param_5[0x1f7];
      cVar10 = ' ';
      if (lVar7 < lVar6 && lVar8 <= lVar7) goto LAB_1409b09e6;
    }
    else {
LAB_1409b09e6:
      cVar13 = *(char *)((lVar16 - lVar8) + lVar5);
      cVar10 = cVar13 + -0x20;
      if (cVar13 < 'a') {
        cVar10 = cVar13;
      }
    }
    if ("STATIC SUB"[lVar5] != cVar10) goto LAB_1409b0a39;
  }
LAB_1409b0a1d:
  local_5c = 0x401;
  uVar14 = 0x4002000;
LAB_1409b0a2b:
  (**(code **)(*(longlong *)*param_5 + 0x40))((longlong *)*param_5,local_50,uVar14);
LAB_1409b0a39:
  bVar2 = 0;
switchD_1409b0096_caseD_56:
  bVar18 = false;
  if (bVar11 < 0x27) {
    if (bVar11 == 10) {
      if (bVar3) {
        (**(code **)(*(longlong *)*param_5 + 0x40))((longlong *)*param_5,local_50,0x4002000);
        local_5c = 0x401;
      }
      bVar3 = false;
    }
    else {
      if (bVar11 != 0xd) goto LAB_1409afd1b;
      if (bVar12 == 10) goto LAB_1409afd18;
    }
    local_50 = local_50 + 1;
    bVar18 = true;
    local_58 = local_5c;
  }
  else {
    if (bVar11 != 0x27) {
      if (bVar11 == 0x3d) {
        bVar3 = (bool)(bVar2 & bVar3);
        bVar18 = false;
      }
      goto LAB_1409afd1b;
    }
    bVar2 = 1;
LAB_1409afd18:
    bVar18 = false;
  }
LAB_1409afd1b:
  lVar16 = lVar16 + 1;
  param_1 = uVar17;
  bVar11 = bVar12;
  if (uVar17 == local_48) {
    return;
  }
  goto LAB_1409afd29;
}

