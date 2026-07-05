/**
 * Function: selecterror
 * Address:  1408e6f60
 * Signature: undefined selecterror(void)
 * Body size: 3286 bytes
 */


undefined8 selecterror(longlong param_1,undefined8 *param_2,byte param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  undefined7 uVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar7 = (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,param_1);
  lVar8 = (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,param_1 + 1);
  if (lVar7 < lVar8 + -1) {
    puVar1 = param_2 + 1;
    lVar15 = (longlong)param_2 + lVar7 + 8;
    do {
      lVar10 = param_2[0x1f6];
      if ((lVar7 < lVar10) || ((longlong)param_2[0x1f7] <= lVar7)) {
        lVar10 = lVar7 + -500;
        param_2[0x1f6] = lVar10;
        lVar14 = param_2[0x1f9];
        lVar9 = lVar14 + -4000;
        if (lVar7 + 0xdac <= lVar14) {
          lVar9 = lVar10;
        }
        if (lVar14 < lVar7 + 0xdac || lVar9 < 0) {
          if (lVar9 < 1) {
            lVar9 = 0;
          }
          param_2[0x1f6] = lVar9;
          lVar10 = lVar9;
        }
        if (lVar10 + 4000 < lVar14) {
          lVar14 = lVar10 + 4000;
        }
        param_2[0x1f7] = lVar14;
        (**(code **)(*(longlong *)*param_2 + 0x18))
                  ((longlong *)*param_2,puVar1,lVar10,lVar14 - lVar10);
        *(undefined1 *)((longlong)param_2 + (param_2[0x1f7] - param_2[0x1f6]) + 8) = 0;
        lVar10 = param_2[0x1f6];
      }
      cVar2 = *(char *)((longlong)param_2 + (lVar7 - lVar10) + 8);
      cVar4 = (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,lVar7);
      if (cVar4 == '\x04') {
        lVar10 = param_2[0x1f6];
        lVar14 = param_2[0x1f7];
        if (lVar7 < lVar10 || lVar14 <= lVar7) {
          lVar10 = lVar7 + -500;
          param_2[0x1f6] = lVar10;
          lVar14 = param_2[0x1f9];
          lVar9 = lVar14 + -4000;
          if (lVar7 + 0xdac <= lVar14) {
            lVar9 = lVar10;
          }
          if (lVar14 < lVar7 + 0xdac || lVar9 < 0) {
            if (lVar9 < 1) {
              lVar9 = 0;
            }
            param_2[0x1f6] = lVar9;
            lVar10 = lVar9;
          }
          if (lVar10 + 4000 < lVar14) {
            lVar14 = lVar10 + 4000;
          }
          param_2[0x1f7] = lVar14;
          (**(code **)(*(longlong *)*param_2 + 0x18))
                    ((longlong *)*param_2,puVar1,lVar10,lVar14 - lVar10);
          *(undefined1 *)((longlong)param_2 + (param_2[0x1f7] - param_2[0x1f6]) + 8) = 0;
          lVar10 = param_2[0x1f6];
          lVar14 = param_2[0x1f7];
          if (lVar7 < lVar14 && lVar10 <= lVar7) goto LAB_1408e7146;
LAB_1408e73c0:
          if ((lVar7 < lVar10) || (lVar14 <= lVar7)) {
            lVar10 = lVar7 + -500;
            param_2[0x1f6] = lVar10;
            lVar14 = param_2[0x1f9];
            lVar9 = lVar14 + -4000;
            if (lVar7 + 0xdac <= lVar14) {
              lVar9 = lVar10;
            }
            if (lVar14 < lVar7 + 0xdac || lVar9 < 0) {
              if (lVar9 < 1) {
                lVar9 = 0;
              }
              param_2[0x1f6] = lVar9;
              lVar10 = lVar9;
            }
            if (lVar10 + 4000 < lVar14) {
              lVar14 = lVar10 + 4000;
            }
            param_2[0x1f7] = lVar14;
            (**(code **)(*(longlong *)*param_2 + 0x18))
                      ((longlong *)*param_2,puVar1,lVar10,lVar14 - lVar10);
            *(undefined1 *)((longlong)param_2 + (param_2[0x1f7] - param_2[0x1f6]) + 8) = 0;
            lVar10 = param_2[0x1f6];
            lVar14 = param_2[0x1f7];
            if (lVar14 <= lVar7 || lVar7 < lVar10) goto LAB_1408e76f0;
          }
          pcVar12 = (char *)(lVar7 - lVar10);
          if (*(char *)((longlong)puVar1 + (longlong)pcVar12) != 'c') {
LAB_1408e76f0:
            cVar4 = 'd';
            lVar9 = 0;
            do {
              lVar11 = lVar7 + lVar9;
              if ((lVar11 < lVar10) || (lVar14 <= lVar11)) {
                lVar14 = lVar7 + lVar9 + -500;
                param_2[0x1f6] = lVar14;
                lVar10 = param_2[0x1f9];
                lVar3 = lVar10 + -4000;
                if ((lVar10 < lVar7 + lVar9 + 0xdac) || (lVar3 = lVar14, lVar14 < 0)) {
                  lVar14 = lVar3;
                  if (lVar14 < 1) {
                    lVar14 = 0;
                  }
                  param_2[0x1f6] = lVar14;
                }
                if (lVar14 + 4000 < lVar10) {
                  lVar10 = lVar14 + 4000;
                }
                param_2[0x1f7] = lVar10;
                (**(code **)(*(longlong *)*param_2 + 0x18))
                          ((longlong *)*param_2,puVar1,lVar14,lVar10 - lVar14);
                *(undefined1 *)((longlong)param_2 + (param_2[0x1f7] - param_2[0x1f6]) + 8) = 0;
                lVar10 = param_2[0x1f6];
                lVar14 = param_2[0x1f7];
                cVar5 = ' ';
                if (lVar11 < lVar14 && lVar10 <= lVar11) goto LAB_1408e77be;
              }
              else {
LAB_1408e77be:
                cVar5 = *(char *)((lVar15 - lVar10) + lVar9);
              }
              if (cVar4 != cVar5) goto LAB_1408e77f0;
              pcVar12 = "default";
              cVar4 = "SGML default"[lVar9 + 6];
              lVar9 = lVar9 + 1;
              if (lVar9 == 7) goto LAB_1408e7c1b;
            } while( true );
          }
          lVar9 = lVar7 + 1;
          if ((lVar9 < lVar10) || (lVar14 <= lVar9)) {
            lVar10 = lVar7 + -499;
            param_2[0x1f6] = lVar10;
            lVar14 = param_2[0x1f9];
            lVar11 = lVar14 + -4000;
            if (lVar7 + 0xdad <= lVar14) {
              lVar11 = lVar10;
            }
            if (lVar14 < lVar7 + 0xdad || lVar11 < 0) {
              if (lVar11 < 1) {
                lVar11 = 0;
              }
              param_2[0x1f6] = lVar11;
              lVar10 = lVar11;
            }
            if (lVar10 + 4000 < lVar14) {
              lVar14 = lVar10 + 4000;
            }
            param_2[0x1f7] = lVar14;
            (**(code **)(*(longlong *)*param_2 + 0x18))
                      ((longlong *)*param_2,puVar1,lVar10,lVar14 - lVar10);
            lVar11 = param_2[0x1f7];
            lVar3 = param_2[0x1f6];
            *(undefined1 *)((longlong)param_2 + (lVar11 - lVar3) + 8) = 0;
            lVar10 = param_2[0x1f6];
            lVar14 = param_2[0x1f7];
            pcVar12 = (char *)CONCAT71((int7)((ulonglong)(lVar11 - lVar3) >> 8),lVar10 <= lVar9);
            if (lVar14 <= lVar9 || lVar10 > lVar9) goto LAB_1408e76f0;
          }
          if (*(char *)((longlong)puVar1 + (lVar9 - lVar10)) != 'a') goto LAB_1408e76f0;
          lVar9 = lVar7 + 2;
          if ((lVar9 < lVar10) || (lVar14 <= lVar9)) {
            lVar10 = lVar7 + -0x1f2;
            param_2[0x1f6] = lVar10;
            lVar14 = param_2[0x1f9];
            lVar11 = lVar14 + -4000;
            if (lVar7 + 0xdae <= lVar14) {
              lVar11 = lVar10;
            }
            if (lVar14 < lVar7 + 0xdae || lVar11 < 0) {
              if (lVar11 < 1) {
                lVar11 = 0;
              }
              param_2[0x1f6] = lVar11;
              lVar10 = lVar11;
            }
            if (lVar10 + 4000 < lVar14) {
              lVar14 = lVar10 + 4000;
            }
            param_2[0x1f7] = lVar14;
            (**(code **)(*(longlong *)*param_2 + 0x18))
                      ((longlong *)*param_2,puVar1,lVar10,lVar14 - lVar10);
            lVar11 = param_2[0x1f7];
            lVar3 = param_2[0x1f6];
            *(undefined1 *)((longlong)param_2 + (lVar11 - lVar3) + 8) = 0;
            lVar10 = param_2[0x1f6];
            lVar14 = param_2[0x1f7];
            pcVar12 = (char *)CONCAT71((int7)((ulonglong)(lVar11 - lVar3) >> 8),lVar10 <= lVar9);
            if (lVar14 <= lVar9 || lVar10 > lVar9) goto LAB_1408e76f0;
          }
          if (*(char *)((longlong)puVar1 + (lVar9 - lVar10)) != 's') goto LAB_1408e76f0;
          lVar9 = lVar7 + 3;
          if ((lVar9 < lVar10) || (lVar14 <= lVar9)) {
            lVar10 = lVar7 + -0x1f1;
            param_2[0x1f6] = lVar10;
            lVar14 = param_2[0x1f9];
            lVar11 = lVar14 + -4000;
            if (lVar7 + 0xdaf <= lVar14) {
              lVar11 = lVar10;
            }
            if (lVar14 < lVar7 + 0xdaf || lVar11 < 0) {
              if (lVar11 < 1) {
                lVar11 = 0;
              }
              param_2[0x1f6] = lVar11;
              lVar10 = lVar11;
            }
            if (lVar10 + 4000 < lVar14) {
              lVar14 = lVar10 + 4000;
            }
            param_2[0x1f7] = lVar14;
            (**(code **)(*(longlong *)*param_2 + 0x18))
                      ((longlong *)*param_2,puVar1,lVar10,lVar14 - lVar10);
            lVar11 = param_2[0x1f7];
            lVar3 = param_2[0x1f6];
            *(undefined1 *)((longlong)param_2 + (lVar11 - lVar3) + 8) = 0;
            lVar10 = param_2[0x1f6];
            lVar14 = param_2[0x1f7];
            pcVar12 = (char *)CONCAT71((int7)((ulonglong)(lVar11 - lVar3) >> 8),lVar10 <= lVar9);
            if (lVar14 <= lVar9 || lVar10 > lVar9) goto LAB_1408e76f0;
          }
          if (*(char *)((longlong)puVar1 + (lVar9 - lVar10)) != 'e') goto LAB_1408e76f0;
        }
        else {
LAB_1408e7146:
          if (*(char *)((longlong)puVar1 + (lVar7 - lVar10)) != 'e') goto LAB_1408e73c0;
          lVar9 = lVar7 + 1;
          pcVar12 = (char *)CONCAT71((int7)((ulonglong)(lVar7 - lVar10) >> 8),lVar10 <= lVar9);
          if (lVar10 > lVar9 || lVar14 <= lVar9) {
            lVar10 = lVar7 + -499;
            param_2[0x1f6] = lVar10;
            lVar14 = param_2[0x1f9];
            lVar11 = lVar14 + -4000;
            if (lVar7 + 0xdad <= lVar14) {
              lVar11 = lVar10;
            }
            if (lVar14 < lVar7 + 0xdad || lVar11 < 0) {
              if (lVar11 < 1) {
                lVar11 = 0;
              }
              param_2[0x1f6] = lVar11;
              lVar10 = lVar11;
            }
            if (lVar10 + 4000 < lVar14) {
              lVar14 = lVar10 + 4000;
            }
            param_2[0x1f7] = lVar14;
            (**(code **)(*(longlong *)*param_2 + 0x18))
                      ((longlong *)*param_2,puVar1,lVar10,lVar14 - lVar10);
            lVar11 = param_2[0x1f7];
            lVar3 = param_2[0x1f6];
            *(undefined1 *)((longlong)param_2 + (lVar11 - lVar3) + 8) = 0;
            lVar10 = param_2[0x1f6];
            lVar14 = param_2[0x1f7];
            pcVar12 = (char *)CONCAT71((int7)((ulonglong)(lVar11 - lVar3) >> 8),lVar10 <= lVar9);
            if (lVar14 <= lVar9 || lVar10 > lVar9) goto LAB_1408e73c0;
          }
          if (*(char *)((longlong)puVar1 + (lVar9 - lVar10)) != 'l') goto LAB_1408e73c0;
          lVar9 = lVar7 + 2;
          if ((lVar9 < lVar10) || (lVar14 <= lVar9)) {
            lVar10 = lVar7 + -0x1f2;
            param_2[0x1f6] = lVar10;
            lVar14 = param_2[0x1f9];
            lVar11 = lVar14 + -4000;
            if (lVar7 + 0xdae <= lVar14) {
              lVar11 = lVar10;
            }
            if (lVar14 < lVar7 + 0xdae || lVar11 < 0) {
              if (lVar11 < 1) {
                lVar11 = 0;
              }
              param_2[0x1f6] = lVar11;
              lVar10 = lVar11;
            }
            if (lVar10 + 4000 < lVar14) {
              lVar14 = lVar10 + 4000;
            }
            param_2[0x1f7] = lVar14;
            (**(code **)(*(longlong *)*param_2 + 0x18))
                      ((longlong *)*param_2,puVar1,lVar10,lVar14 - lVar10);
            lVar11 = param_2[0x1f7];
            lVar3 = param_2[0x1f6];
            *(undefined1 *)((longlong)param_2 + (lVar11 - lVar3) + 8) = 0;
            lVar10 = param_2[0x1f6];
            lVar14 = param_2[0x1f7];
            pcVar12 = (char *)CONCAT71((int7)((ulonglong)(lVar11 - lVar3) >> 8),lVar10 <= lVar9);
            if (lVar14 <= lVar9 || lVar10 > lVar9) goto LAB_1408e73c0;
          }
          if (*(char *)((longlong)puVar1 + (lVar9 - lVar10)) != 's') goto LAB_1408e73c0;
          lVar9 = lVar7 + 3;
          if ((lVar9 < lVar10) || (lVar14 <= lVar9)) {
            lVar10 = lVar7 + -0x1f1;
            param_2[0x1f6] = lVar10;
            lVar14 = param_2[0x1f9];
            lVar11 = lVar14 + -4000;
            if (lVar7 + 0xdaf <= lVar14) {
              lVar11 = lVar10;
            }
            if (lVar14 < lVar7 + 0xdaf || lVar11 < 0) {
              if (lVar11 < 1) {
                lVar11 = 0;
              }
              param_2[0x1f6] = lVar11;
              lVar10 = lVar11;
            }
            if (lVar10 + 4000 < lVar14) {
              lVar14 = lVar10 + 4000;
            }
            param_2[0x1f7] = lVar14;
            (**(code **)(*(longlong *)*param_2 + 0x18))
                      ((longlong *)*param_2,puVar1,lVar10,lVar14 - lVar10);
            lVar11 = param_2[0x1f7];
            lVar3 = param_2[0x1f6];
            *(undefined1 *)((longlong)param_2 + (lVar11 - lVar3) + 8) = 0;
            lVar10 = param_2[0x1f6];
            lVar14 = param_2[0x1f7];
            pcVar12 = (char *)CONCAT71((int7)((ulonglong)(lVar11 - lVar3) >> 8),lVar10 <= lVar9);
            if (lVar14 <= lVar9 || lVar10 > lVar9) goto LAB_1408e73c0;
          }
          if (*(char *)((longlong)puVar1 + (lVar9 - lVar10)) != 'e') goto LAB_1408e73c0;
        }
LAB_1408e7c1b:
        uVar13 = (undefined7)((ulonglong)pcVar12 >> 8);
        bVar6 = 1;
        param_3 = 1;
        break;
      }
LAB_1408e7bf0:
      if ((cVar2 != ' ') && (cVar2 != '\t')) {
        uVar13 = 0;
        bVar6 = 1;
        param_3 = 0;
        break;
      }
      lVar7 = lVar7 + 1;
      lVar15 = lVar15 + 1;
      bVar6 = 0;
      uVar13 = 0;
      param_3 = 0;
    } while (lVar7 != lVar8 + -1);
  }
  else {
    bVar6 = 0;
    uVar13 = 0;
  }
LAB_1408e7c20:
  return CONCAT71(uVar13,bVar6 & param_3);
LAB_1408e77f0:
  cVar4 = 's';
  lVar9 = 0;
  do {
    lVar11 = lVar7 + lVar9;
    if ((lVar11 < lVar10) || (lVar14 <= lVar11)) {
      lVar14 = lVar7 + lVar9 + -500;
      param_2[0x1f6] = lVar14;
      lVar10 = param_2[0x1f9];
      lVar3 = lVar10 + -4000;
      if ((lVar10 < lVar7 + lVar9 + 0xdac) || (lVar3 = lVar14, lVar14 < 0)) {
        lVar14 = lVar3;
        if (lVar14 < 1) {
          lVar14 = 0;
        }
        param_2[0x1f6] = lVar14;
      }
      if (lVar14 + 4000 < lVar10) {
        lVar10 = lVar14 + 4000;
      }
      param_2[0x1f7] = lVar10;
      (**(code **)(*(longlong *)*param_2 + 0x18))
                ((longlong *)*param_2,puVar1,lVar14,lVar10 - lVar14);
      *(undefined1 *)((longlong)param_2 + (param_2[0x1f7] - param_2[0x1f6]) + 8) = 0;
      lVar10 = param_2[0x1f6];
      lVar14 = param_2[0x1f7];
      cVar5 = ' ';
      if (lVar11 < lVar14 && lVar10 <= lVar11) goto LAB_1408e78be;
    }
    else {
LAB_1408e78be:
      cVar5 = *(char *)((lVar15 - lVar10) + lVar9);
    }
    if (cVar4 != cVar5) break;
    pcVar12 = "selectdo";
    cVar4 = "selectdo"[lVar9 + 1];
    lVar9 = lVar9 + 1;
    if (lVar9 == 8) goto LAB_1408e7c1b;
  } while( true );
  cVar4 = 's';
  lVar9 = 0;
  do {
    lVar11 = lVar7 + lVar9;
    if ((lVar11 < lVar10) || (lVar14 <= lVar11)) {
      lVar14 = lVar7 + lVar9 + -500;
      param_2[0x1f6] = lVar14;
      lVar10 = param_2[0x1f9];
      lVar3 = lVar10 + -4000;
      if ((lVar10 < lVar7 + lVar9 + 0xdac) || (lVar3 = lVar14, lVar14 < 0)) {
        lVar14 = lVar3;
        if (lVar14 < 1) {
          lVar14 = 0;
        }
        param_2[0x1f6] = lVar14;
      }
      if (lVar14 + 4000 < lVar10) {
        lVar10 = lVar14 + 4000;
      }
      param_2[0x1f7] = lVar10;
      (**(code **)(*(longlong *)*param_2 + 0x18))
                ((longlong *)*param_2,puVar1,lVar14,lVar10 - lVar14);
      *(undefined1 *)((longlong)param_2 + (param_2[0x1f7] - param_2[0x1f6]) + 8) = 0;
      lVar10 = param_2[0x1f6];
      lVar14 = param_2[0x1f7];
      cVar5 = ' ';
      if (lVar11 < lVar14 && lVar10 <= lVar11) goto LAB_1408e79be;
    }
    else {
LAB_1408e79be:
      cVar5 = *(char *)((lVar15 - lVar10) + lVar9);
    }
    if (cVar4 != cVar5) break;
    pcVar12 = "selecteos";
    cVar4 = "selecteos"[lVar9 + 1];
    lVar9 = lVar9 + 1;
    if (lVar9 == 9) goto LAB_1408e7c1b;
  } while( true );
  cVar4 = 's';
  lVar9 = 0;
  do {
    lVar11 = lVar7 + lVar9;
    if ((lVar11 < lVar10) || (lVar14 <= lVar11)) {
      lVar14 = lVar7 + lVar9 + -500;
      param_2[0x1f6] = lVar14;
      lVar10 = param_2[0x1f9];
      lVar3 = lVar10 + -4000;
      if ((lVar10 < lVar7 + lVar9 + 0xdac) || (lVar3 = lVar14, lVar14 < 0)) {
        lVar14 = lVar3;
        if (lVar14 < 1) {
          lVar14 = 0;
        }
        param_2[0x1f6] = lVar14;
      }
      if (lVar14 + 4000 < lVar10) {
        lVar10 = lVar14 + 4000;
      }
      param_2[0x1f7] = lVar10;
      (**(code **)(*(longlong *)*param_2 + 0x18))
                ((longlong *)*param_2,puVar1,lVar14,lVar10 - lVar14);
      *(undefined1 *)((longlong)param_2 + (param_2[0x1f7] - param_2[0x1f6]) + 8) = 0;
      lVar10 = param_2[0x1f6];
      lVar14 = param_2[0x1f7];
      cVar5 = ' ';
      if (lVar11 < lVar14 && lVar10 <= lVar11) goto LAB_1408e7abe;
    }
    else {
LAB_1408e7abe:
      cVar5 = *(char *)((lVar15 - lVar10) + lVar9);
    }
    if (cVar4 != cVar5) break;
    pcVar12 = "selectempty";
    cVar4 = "selectempty"[lVar9 + 1];
    lVar9 = lVar9 + 1;
    if (lVar9 == 0xb) goto LAB_1408e7c1b;
  } while( true );
  cVar4 = 's';
  lVar9 = 0;
  do {
    lVar11 = lVar7 + lVar9;
    if ((lVar11 < lVar10) || (lVar14 <= lVar11)) {
      lVar14 = lVar7 + lVar9 + -500;
      param_2[0x1f6] = lVar14;
      lVar10 = param_2[0x1f9];
      lVar3 = lVar10 + -4000;
      if ((lVar10 < lVar7 + lVar9 + 0xdac) || (lVar3 = lVar14, lVar14 < 0)) {
        lVar14 = lVar3;
        if (lVar14 < 1) {
          lVar14 = 0;
        }
        param_2[0x1f6] = lVar14;
      }
      if (lVar14 + 4000 < lVar10) {
        lVar10 = lVar14 + 4000;
      }
      param_2[0x1f7] = lVar10;
      (**(code **)(*(longlong *)*param_2 + 0x18))
                ((longlong *)*param_2,puVar1,lVar14,lVar10 - lVar14);
      *(undefined1 *)((longlong)param_2 + (param_2[0x1f7] - param_2[0x1f6]) + 8) = 0;
      lVar10 = param_2[0x1f6];
      lVar14 = param_2[0x1f7];
      cVar5 = ' ';
      if (lVar11 < lVar14 && lVar10 <= lVar11) goto LAB_1408e7bbe;
    }
    else {
LAB_1408e7bbe:
      cVar5 = *(char *)((lVar15 - lVar10) + lVar9);
    }
    if (cVar4 != cVar5) goto LAB_1408e7bf0;
    cVar4 = "selecterror"[lVar9 + 1];
    lVar9 = lVar9 + 1;
    bVar6 = 1;
    uVar13 = 0x14133b0;
    param_3 = 1;
    if (lVar9 == 0xb) goto LAB_1408e7c20;
  } while( true );
}

