/**
 * Function: architecture_begin_block_case_component_else
 * Address:  140a25810
 * Signature: undefined architecture_begin_block_case_component_else(void)
 * Body size: 5816 bytes
 */


void architecture_begin_block_case_component_else
               (ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined8 *puVar1;
  uint3 uVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  size_t sVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 local_5b0 [1048];
  undefined1 local_198 [148];
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  ulonglong local_f0;
  undefined2 local_e8;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  char cStack_e0;
  undefined4 uStack_df;
  undefined3 uStack_db;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int local_c0;
  uint local_bc;
  ulonglong local_b8;
  int local_b0;
  uint local_ac;
  undefined4 local_a8;
  char cStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  char local_a0;
  undefined4 uStack_9f;
  undefined1 uStack_9b;
  ulonglong local_80;
  longlong local_78;
  char local_6d;
  uint local_6c;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_f0 = param_2;
  local_68 = param_1;
  memcpy(local_198,
         "architecture begin block case component else elsif end entity generate loop package process record then procedure protected function when units"
         ,0x90);
  FUN_140a8b860(local_5b0,0);
  FUN_140a8b940(local_5b0,local_198);
  local_104 = FUN_140a8c980(param_5,"fold.comment",1);
  local_fc = FUN_140a8c980(param_5,"fold.compact",1);
  local_f8 = FUN_140a8c980(param_5,"fold.at.else",1);
  local_f4 = FUN_140a8c980(param_5,"fold.at.Begin",1);
  local_100 = FUN_140a8c980(param_5,"fold.at.Parenthese",1);
  local_78 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,local_68);
  if (local_78 < 1) {
    local_50 = 0x400;
  }
  else {
    iVar7 = (**(code **)(*(longlong *)*param_5 + 0x38))((longlong *)*param_5,local_78 + -1);
    local_50 = (ulonglong)(uint)(iVar7 >> 0x10);
  }
  local_f0 = local_f0 + local_68;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e6 = 0;
  uStack_e4 = 0;
  cStack_e0 = '\0';
  uStack_df = 0;
  uStack_db = 0;
  puVar1 = param_5 + 1;
  local_60 = 0;
  uVar18 = local_68;
  do {
    do {
      do {
        uVar17 = uVar18;
        if (uVar17 == 0) goto LAB_140a25d6c;
        lVar14 = param_5[0x1f6];
        lVar15 = param_5[0x1f7];
        if ((longlong)uVar17 < lVar14 || lVar15 <= (longlong)uVar17) {
          lVar15 = uVar17 - 500;
          param_5[0x1f6] = lVar15;
          lVar14 = param_5[0x1f9];
          lVar11 = lVar14 + -4000;
          if ((longlong)(uVar17 + 0xdac) <= lVar14) {
            lVar11 = lVar15;
          }
          if (lVar14 < (longlong)(uVar17 + 0xdac) || lVar11 < 0) {
            if (lVar11 < 1) {
              lVar11 = 0;
            }
            param_5[0x1f6] = lVar11;
            lVar15 = lVar11;
          }
          if (lVar15 + 4000 < lVar14) {
            lVar14 = lVar15 + 4000;
          }
          param_5[0x1f7] = lVar14;
          (**(code **)(*(longlong *)*param_5 + 0x18))
                    ((longlong *)*param_5,puVar1,lVar15,lVar14 - lVar15);
          *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
          lVar14 = param_5[0x1f6];
          lVar15 = param_5[0x1f7];
          iVar7 = 0x20;
          if ((longlong)uVar17 < lVar15 && lVar14 <= (longlong)uVar17) goto LAB_140a25a7d;
        }
        else {
LAB_140a25a7d:
          iVar7 = (int)*(char *)((longlong)puVar1 + (uVar17 - lVar14));
        }
        uVar18 = uVar17 - 1;
        if ((longlong)uVar18 < lVar14 || lVar15 <= (longlong)uVar18) {
          lVar15 = uVar17 - 0x1f5;
          param_5[0x1f6] = lVar15;
          lVar14 = param_5[0x1f9];
          lVar11 = lVar14 + -4000;
          if ((longlong)(uVar17 + 0xdab) <= lVar14) {
            lVar11 = lVar15;
          }
          if (lVar14 < (longlong)(uVar17 + 0xdab) || lVar11 < 0) {
            if (lVar11 < 1) {
              lVar11 = 0;
            }
            param_5[0x1f6] = lVar11;
            lVar15 = lVar11;
          }
          if (lVar15 + 4000 < lVar14) {
            lVar14 = lVar15 + 4000;
          }
          param_5[0x1f7] = lVar14;
          (**(code **)(*(longlong *)*param_5 + 0x18))
                    ((longlong *)*param_5,puVar1,lVar15,lVar14 - lVar15);
          *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
          lVar14 = param_5[0x1f6];
          iVar19 = 0x20;
          if ((lVar14 <= (longlong)uVar18) && ((longlong)uVar18 < (longlong)param_5[0x1f7]))
          goto LAB_140a25b3f;
        }
        else {
LAB_140a25b3f:
          iVar19 = (int)*(char *)((longlong)puVar1 + (uVar18 - lVar14));
        }
        bVar3 = (**(code **)(*(longlong *)*param_5 + 0x20))((longlong *)*param_5,uVar17);
        cVar4 = (**(code **)(*(longlong *)*param_5 + 0x20))((longlong *)*param_5,uVar18);
        local_80 = CONCAT44(local_80._4_4_,iVar7);
        if ((((0xf < bVar3) || ((0x8006U >> (bVar3 & 0x1f) & 1) == 0)) && (cVar4 != '\x04')) &&
           (((iVar7 = isalnum(iVar19), iVar7 != 0 || (iVar19 == 0x5f)) || (iVar19 == 0x2e)))) {
          iVar7 = isalnum((int)local_80);
          uVar16 = uVar18;
          if (iVar7 != 0) {
            uVar16 = local_60;
          }
          if ((int)local_80 == 0x2e) {
            uVar16 = local_60;
          }
          if ((int)local_80 != 0x5f) {
            local_60 = uVar16;
          }
        }
      } while (((bVar3 < 0x10) && ((0x8016U >> (bVar3 & 0x1f) & 1) != 0)) ||
              ((iVar7 = isalnum(iVar19), iVar7 != 0 || ((iVar19 == 0x2e || (iVar19 == 0x5f))))));
      iVar7 = (int)local_80;
      iVar19 = isalnum((int)local_80);
    } while ((iVar7 != 0x5f && iVar19 == 0) || (local_60 == 0));
    uVar16 = (local_60 - uVar17) + 1;
    if (0x1e < uVar16) {
      uVar16 = 0x1f;
    }
    for (uVar20 = 0; uVar20 < uVar16; uVar20 = uVar20 + 1) {
      lVar15 = uVar20 + uVar17;
      lVar14 = param_5[0x1f6];
      if ((lVar15 < lVar14) || ((longlong)param_5[0x1f7] <= lVar15)) {
        lVar14 = lVar15 + -500;
        param_5[0x1f6] = lVar14;
        lVar11 = param_5[0x1f9];
        lVar12 = lVar11 + -4000;
        if (lVar15 + 0xdac <= lVar11) {
          lVar12 = lVar14;
        }
        if (lVar11 < lVar15 + 0xdac || lVar12 < 0) {
          if (lVar12 < 1) {
            lVar12 = 0;
          }
          param_5[0x1f6] = lVar12;
          lVar14 = lVar12;
        }
        if (lVar14 + 4000 < lVar11) {
          lVar11 = lVar14 + 4000;
        }
        param_5[0x1f7] = lVar11;
        (**(code **)(*(longlong *)*param_5 + 0x18))
                  ((longlong *)*param_5,puVar1,lVar14,lVar11 - lVar14);
        *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
        lVar14 = param_5[0x1f6];
      }
      iVar7 = tolower((int)*(char *)((longlong)puVar1 + (lVar15 - lVar14)));
      *(char *)((longlong)&local_a8 + uVar20) = (char)iVar7;
    }
    *(undefined1 *)((longlong)&local_a8 + uVar20) = 0;
    cVar4 = FUN_140a8bc50(local_5b0,&local_a8);
  } while (cVar4 == '\0');
  strcpy((char *)&local_e8,(char *)&local_a8);
LAB_140a25d6c:
  sVar13 = strlen((char *)&local_e8);
  uVar17 = sVar13 + uVar17;
  while( true ) {
    lVar15 = param_5[0x1f6];
    if (local_f0 <= uVar17) break;
    if ((longlong)uVar17 < lVar15 || (longlong)param_5[0x1f7] <= (longlong)uVar17) {
      lVar15 = uVar17 - 500;
      param_5[0x1f6] = lVar15;
      lVar14 = param_5[0x1f9];
      lVar11 = lVar14 + -4000;
      if ((longlong)(uVar17 + 0xdac) <= lVar14) {
        lVar11 = lVar15;
      }
      if (lVar14 < (longlong)(uVar17 + 0xdac) || lVar11 < 0) {
        lVar15 = lVar11;
        if (lVar11 < 1) {
          lVar15 = 0;
        }
        param_5[0x1f6] = lVar15;
      }
      if (lVar15 + 4000 < lVar14) {
        lVar14 = lVar15 + 4000;
      }
      param_5[0x1f7] = lVar14;
      (**(code **)(*(longlong *)*param_5 + 0x18))
                ((longlong *)*param_5,puVar1,lVar15,lVar14 - lVar15);
      *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
      lVar15 = param_5[0x1f6];
      bVar21 = false;
      if ((lVar15 <= (longlong)uVar17) && ((longlong)uVar17 < (longlong)param_5[0x1f7]))
      goto LAB_140a25e58;
    }
    else {
LAB_140a25e58:
      bVar21 = *(char *)((longlong)puVar1 + (uVar17 - lVar15)) == ';';
    }
    bVar3 = (**(code **)(*(longlong *)*param_5 + 0x20))((longlong *)*param_5,uVar17);
    if (((0xf < bVar3) || ((0x8006U >> (bVar3 & 0x1f) & 1) == 0)) &&
       ((bVar21 && bVar3 != 4 && (CONCAT22(uStack_e6,local_e8) == 0x646e65)))) {
      local_e8 = 0x3b;
    }
    uVar17 = uVar17 + 1;
  }
  if ((longlong)local_68 < lVar15 || (longlong)param_5[0x1f7] <= (longlong)local_68) {
    lVar15 = local_68 - 500;
    param_5[0x1f6] = lVar15;
    lVar14 = param_5[0x1f9];
    lVar11 = lVar14 + -4000;
    if ((longlong)(local_68 + 0xdac) <= lVar14) {
      lVar11 = lVar15;
    }
    if (lVar14 < (longlong)(local_68 + 0xdac) || lVar11 < 0) {
      lVar15 = 0;
      if (0 < lVar11) {
        lVar15 = lVar11;
      }
      param_5[0x1f6] = lVar15;
    }
    if (lVar15 + 4000 < lVar14) {
      lVar14 = lVar15 + 4000;
    }
    param_5[0x1f7] = lVar14;
    (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,puVar1,lVar15,lVar14 - lVar15);
    *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
    lVar15 = param_5[0x1f6];
  }
  cVar4 = *(char *)((longlong)param_5 + (local_68 - lVar15) + 8);
  uVar5 = (**(code **)(*(longlong *)*param_5 + 0x20))();
  local_6c = CONCAT31(local_6c._1_3_,uVar5);
  local_b8 = 0;
  local_bc = (uint)local_50;
  iVar7 = 0;
  uVar18 = local_68;
  local_ac = local_bc;
  local_54 = local_bc;
LAB_140a25fe7:
  if (local_f0 <= uVar18) {
    FUN_140a8b880(local_5b0);
    return;
  }
  local_68 = CONCAT71(local_68._1_7_,cVar4);
  local_80 = uVar18 + 1;
  lVar15 = param_5[0x1f6];
  lVar14 = param_5[0x1f7];
  local_c0 = iVar7;
  if ((longlong)local_80 < lVar15 || lVar14 <= (longlong)local_80) {
    lVar15 = uVar18 - 499;
    param_5[0x1f6] = lVar15;
    lVar14 = param_5[0x1f9];
    lVar11 = lVar14 + -4000;
    if ((longlong)(uVar18 + 0xdad) <= lVar14) {
      lVar11 = lVar15;
    }
    if (lVar14 < (longlong)(uVar18 + 0xdad) || lVar11 < 0) {
      if (lVar11 < 1) {
        lVar11 = 0;
      }
      param_5[0x1f6] = lVar11;
      lVar15 = lVar11;
    }
    if (lVar15 + 4000 < lVar14) {
      lVar14 = lVar15 + 4000;
    }
    param_5[0x1f7] = lVar14;
    (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,puVar1,lVar15,lVar14 - lVar15);
    *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
    lVar15 = param_5[0x1f6];
    lVar14 = param_5[0x1f7];
    uVar5 = 0x20;
    if ((longlong)local_80 < lVar14 && lVar15 <= (longlong)local_80) goto LAB_140a260e4;
  }
  else {
LAB_140a260e4:
    uVar5 = *(undefined1 *)((longlong)puVar1 + (local_80 - lVar15));
  }
  local_60 = CONCAT71(local_60._1_7_,uVar5);
  lVar11 = uVar18 - 1;
  if (lVar11 < lVar15 || lVar14 <= lVar11) {
    lVar15 = uVar18 - 0x1f5;
    param_5[0x1f6] = lVar15;
    lVar14 = param_5[0x1f9];
    lVar12 = lVar14 + -4000;
    if ((longlong)(uVar18 + 0xdab) <= lVar14) {
      lVar12 = lVar15;
    }
    if (lVar14 < (longlong)(uVar18 + 0xdab) || lVar12 < 0) {
      if (lVar12 < 1) {
        lVar12 = 0;
      }
      param_5[0x1f6] = lVar12;
      lVar15 = lVar12;
    }
    if (lVar15 + 4000 < lVar14) {
      lVar14 = lVar15 + 4000;
    }
    param_5[0x1f7] = lVar14;
    (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,puVar1,lVar15,lVar14 - lVar15);
    *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
    lVar15 = param_5[0x1f6];
    lVar14 = param_5[0x1f7];
    iVar7 = 0x20;
    if (lVar11 < lVar14 && lVar15 <= lVar11) goto LAB_140a261c1;
  }
  else {
LAB_140a261c1:
    iVar7 = (int)*(char *)((longlong)puVar1 + (lVar11 - lVar15));
  }
  uVar16 = local_60 & 0xff;
  uVar17 = local_80;
LAB_140a261ee:
  if ((((byte)uVar16 < 0x21) && ((0x100000a00U >> (uVar16 & 0x3f) & 1) != 0)) && (uVar17 < local_f0)
     ) {
    uVar20 = uVar17 + 1;
    if (((longlong)uVar20 < lVar15) || (lVar14 <= (longlong)uVar20)) goto LAB_140a26221;
    goto LAB_140a261e0;
  }
  uVar5 = (**(code **)(*(longlong *)*param_5 + 0x20))((longlong *)*param_5,local_80);
  local_6d = (char)local_68 == '\n' || (char)local_60 != '\n' && (char)local_68 == '\r';
  cVar6 = (char)local_68;
  if ((local_104 != 0) &&
     ((char)local_68 == '\n' || (char)local_60 != '\n' && (char)local_68 == '\r')) {
    cVar4 = FUN_140a28a10(local_78,param_5);
    if (cVar4 == '\0') {
      cVar4 = FUN_140a28c20(local_78,param_5);
      if ((cVar4 != '\0') && (cVar4 = FUN_140a28e30(local_78,param_5), cVar4 == '\0'))
      goto LAB_140a2640f;
      cVar4 = FUN_140a28e30(local_78,param_5);
      if (cVar4 != '\0') {
        bVar3 = FUN_140a28c20(local_78,param_5);
        goto LAB_140a263f8;
      }
    }
    else {
      lVar15 = local_78 + -1;
      cVar4 = FUN_140a28a10(lVar15,param_5);
      if ((cVar4 == '\0') && (cVar4 = FUN_140a28a10(local_78 + 1,param_5), cVar4 != '\0')) {
LAB_140a2640f:
        local_50 = (ulonglong)((int)local_50 + 1);
      }
      else {
        cVar4 = FUN_140a28a10(lVar15,param_5);
        if (cVar4 != '\0') {
          bVar3 = FUN_140a28a10(local_78 + 1,param_5);
LAB_140a263f8:
          local_50 = (ulonglong)((int)local_50 - (uint)(bVar3 ^ 1));
        }
      }
    }
    cVar6 = (char)local_68;
  }
  local_b0 = (int)cVar6;
  if ((local_100 != 0) && ((byte)local_6c == 5)) {
    if (cVar6 == ')') {
      uVar8 = (int)local_50 - 1;
    }
    else {
      if (cVar6 != '(') goto LAB_140a26490;
      uVar8 = (int)local_50 + 1;
    }
    local_50 = (ulonglong)uVar8;
    iVar19 = isalnum(iVar7);
joined_r0x000140a264d5:
    if (((iVar19 == 0) && (iVar7 != 0x2e)) && (iVar7 != 0x5f)) {
      iVar7 = isalnum(local_b0);
      if (iVar7 != 0) {
        local_b8 = uVar18;
      }
      if (cVar6 == '_') {
        local_b8 = uVar18;
      }
    }
    cVar4 = (char)local_60;
    iVar7 = isalnum(local_b0);
    if (((((iVar7 == 0) && (cVar6 != '_')) && (cVar6 != '.')) ||
        ((iVar7 = isalnum((int)cVar4), iVar7 != 0 || (cVar4 == '.')))) || (cVar4 == '_'))
    goto LAB_140a2653e;
    uVar18 = local_80 - local_b8;
    if (0x1e < uVar18) {
      uVar18 = 0x1f;
    }
    for (uVar17 = 0; uVar17 < uVar18; uVar17 = uVar17 + 1) {
      lVar15 = uVar17 + local_b8;
      lVar14 = param_5[0x1f6];
      if ((lVar15 < lVar14) || ((longlong)param_5[0x1f7] <= lVar15)) {
        lVar14 = lVar15 + -500;
        param_5[0x1f6] = lVar14;
        lVar11 = param_5[0x1f9];
        lVar12 = lVar11 + -4000;
        if (lVar15 + 0xdac <= lVar11) {
          lVar12 = lVar14;
        }
        if (lVar11 < lVar15 + 0xdac || lVar12 < 0) {
          if (lVar12 < 1) {
            lVar12 = 0;
          }
          param_5[0x1f6] = lVar12;
          lVar14 = lVar12;
        }
        if (lVar14 + 4000 < lVar11) {
          lVar11 = lVar14 + 4000;
        }
        param_5[0x1f7] = lVar11;
        (**(code **)(*(longlong *)*param_5 + 0x18))
                  ((longlong *)*param_5,puVar1,lVar14,lVar11 - lVar14);
        *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
        lVar14 = param_5[0x1f6];
      }
      iVar7 = tolower((int)*(char *)((longlong)puVar1 + (lVar15 - lVar14)));
      *(char *)((longlong)&local_a8 + uVar17) = (char)iVar7;
    }
    *(undefined1 *)((longlong)&local_a8 + uVar17) = 0;
    cVar6 = FUN_140a8bc50(local_5b0,&local_a8);
    cVar4 = (char)local_60;
    if (cVar6 != '\0') {
      uVar8 = (uint)local_50;
      if ((((((CONCAT44(uStack_9f,
                        CONCAT13(local_a0,CONCAT12(uStack_a1,CONCAT11(uStack_a2,uStack_a3)))) ==
               0x65727574636574 &&
               CONCAT17(uStack_a1,
                        CONCAT16(uStack_a2,CONCAT15(uStack_a3,CONCAT14(cStack_a4,local_a8)))) ==
               0x6365746968637261) || (cStack_a4 == '\0' && local_a8 == 0x65736163)) ||
            (local_a0 == '\0' &&
             CONCAT17(uStack_a1,CONCAT16(uStack_a2,CONCAT15(uStack_a3,CONCAT14(cStack_a4,local_a8)))
                     ) == 0x65746172656e6567)) ||
           ((CONCAT11(uStack_a3,cStack_a4) == 0x6b && local_a8 == 0x636f6c62 ||
            (cStack_a4 == '\0' && local_a8 == 0x706f6f6c)))) ||
          (lVar15 = CONCAT17(uStack_a1,
                             CONCAT16(uStack_a2,CONCAT15(uStack_a3,CONCAT14(cStack_a4,local_a8)))),
          lVar15 == 0x6567616b636170)) ||
         (((lVar15 == 0x737365636f7270 ||
           (CONCAT11((undefined1)uStack_9f,local_a0) == 100 &&
            CONCAT17(uStack_a1,CONCAT16(uStack_a2,CONCAT15(uStack_a3,CONCAT14(cStack_a4,local_a8))))
            == 0x65746365746f7270)) ||
          ((CONCAT13(uStack_a2,CONCAT12(uStack_a3,CONCAT11(cStack_a4,local_a8._3_1_))) == 0x64726f
            && local_a8 == 0x6f636572 ||
           ((cStack_a4 == '\0' && local_a8 == 0x6e656874 ||
            (CONCAT11(uStack_a3,cStack_a4) == 0x73 && local_a8 == 0x74696e75)))))))) {
        if (CONCAT22(uStack_e6,local_e8) != 0x646e65) {
          if ((int)uVar8 <= (int)local_54) {
            local_54 = uVar8;
          }
          uVar8 = uVar8 + 1;
LAB_140a26abb:
          local_50 = (ulonglong)uVar8;
        }
      }
      else if (((CONCAT11((undefined1)uStack_9f,local_a0) == 0x74 &&
                 CONCAT17(uStack_a1,
                          CONCAT16(uStack_a2,CONCAT15(uStack_a3,CONCAT14(cStack_a4,local_a8)))) ==
                 0x6e656e6f706d6f63) ||
               (CONCAT13(uStack_a2,CONCAT12(uStack_a3,CONCAT11(cStack_a4,local_a8._3_1_))) ==
                0x797469 && local_a8 == 0x69746e65)) ||
              (CONCAT17(uStack_9b,
                        CONCAT43(uStack_9f,CONCAT12(local_a0,CONCAT11(uStack_a1,uStack_a2)))) ==
               0x6e6f6974617275 &&
               CONCAT17(uStack_a1,
                        CONCAT16(uStack_a2,CONCAT15(uStack_a3,CONCAT14(cStack_a4,local_a8)))) ==
               0x72756769666e6f63)) {
        if (CONCAT22(uStack_e6,local_e8) != 0x646e65) {
          bVar3 = 0;
          uVar18 = local_b8;
LAB_140a26af7:
          if (uVar18 != 0) {
            do {
              uVar17 = uVar18 - 1;
              uVar8 = (**(code **)(*(longlong *)*param_5 + 0x20))((longlong *)*param_5,uVar17);
              lVar15 = param_5[0x1f6];
              if (((longlong)uVar17 < lVar15) || ((longlong)param_5[0x1f7] <= (longlong)uVar17)) {
                lVar15 = uVar18 - 0x1f5;
                param_5[0x1f6] = lVar15;
                lVar14 = param_5[0x1f9];
                lVar11 = lVar14 + -4000;
                if ((longlong)(uVar18 + 0xdab) <= lVar14) {
                  lVar11 = lVar15;
                }
                if (lVar14 < (longlong)(uVar18 + 0xdab) || lVar11 < 0) {
                  if (lVar11 < 1) {
                    lVar11 = 0;
                  }
                  param_5[0x1f6] = lVar11;
                  lVar15 = lVar11;
                }
                if (lVar15 + 4000 < lVar14) {
                  lVar14 = lVar15 + 4000;
                }
                param_5[0x1f7] = lVar14;
                (**(code **)(*(longlong *)*param_5 + 0x18))
                          ((longlong *)*param_5,puVar1,lVar15,lVar14 - lVar15);
                *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
                lVar15 = param_5[0x1f6];
                bVar3 = 0x20;
                if ((lVar15 <= (longlong)uVar17) && ((longlong)uVar17 < (longlong)param_5[0x1f7]))
                goto LAB_140a26bca;
              }
              else {
LAB_140a26bca:
                bVar3 = *(byte *)((longlong)puVar1 + (uVar17 - lVar15));
              }
              if (uVar17 == 0) break;
              uVar18 = uVar17;
              if ((bVar3 < 0x21) && ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0))
              goto LAB_140a26af7;
              if ((0xf < (byte)uVar8) || ((0x8006U >> (uVar8 & 0x1f) & 1) == 0)) break;
            } while( true );
          }
          uVar10 = (uint)local_50;
          uVar8 = uVar10;
          if ((int)local_54 < (int)uVar10) {
            uVar8 = local_54;
          }
          if (bVar3 != 0x3a) {
            local_54 = uVar8;
          }
          local_50 = (ulonglong)(uVar10 + (bVar3 != 0x3a));
          cVar4 = (char)local_60;
        }
      }
      else if ((CONCAT11((undefined1)uStack_9f,local_a0) == 0x65 &&
                CONCAT17(uStack_a1,
                         CONCAT16(uStack_a2,CONCAT15(uStack_a3,CONCAT14(cStack_a4,local_a8)))) ==
                0x72756465636f7270) ||
              (local_a0 == '\0' &&
               CONCAT17(uStack_a1,
                        CONCAT16(uStack_a2,CONCAT15(uStack_a3,CONCAT14(cStack_a4,local_a8)))) ==
               0x6e6f6974636e7566)) {
        if (CONCAT22(uStack_e6,local_e8) != 0x646e65) {
          uVar8 = 0;
          uVar18 = local_80;
LAB_140a26c7a:
          if ((longlong)param_5[0x1f9] <= (longlong)uVar18) goto LAB_140a26ea6;
          uVar10 = (**(code **)(*(longlong *)*param_5 + 0x20))((longlong *)*param_5,uVar18);
          lVar15 = param_5[0x1f6];
          if (((longlong)uVar18 < lVar15) || ((longlong)param_5[0x1f7] <= (longlong)uVar18)) {
            lVar14 = uVar18 - 500;
            param_5[0x1f6] = lVar14;
            lVar15 = param_5[0x1f9];
            lVar11 = lVar15 + -4000;
            if ((longlong)(uVar18 + 0xdac) <= lVar15) {
              lVar11 = lVar14;
            }
            if (lVar15 < (longlong)(uVar18 + 0xdac) || lVar11 < 0) {
              if (lVar11 < 1) {
                lVar11 = 0;
              }
              param_5[0x1f6] = lVar11;
              lVar14 = lVar11;
            }
            if (lVar14 + 4000 < lVar15) {
              lVar15 = lVar14 + 4000;
            }
            param_5[0x1f7] = lVar15;
            (**(code **)(*(longlong *)*param_5 + 0x18))
                      ((longlong *)*param_5,puVar1,lVar14,lVar15 - lVar14);
            *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
            lVar15 = param_5[0x1f6];
            uVar17 = CONCAT71((int7)((ulonglong)lVar14 >> 8),0x20);
            if ((lVar15 <= (longlong)uVar18) && ((longlong)uVar18 < (longlong)param_5[0x1f7]))
            goto LAB_140a26d4b;
          }
          else {
LAB_140a26d4b:
            bVar3 = *(byte *)((longlong)puVar1 + (uVar18 - lVar15));
            uVar17 = (ulonglong)bVar3;
            uVar8 = (uVar8 + (bVar3 == 0x28)) - (uint)(bVar3 == 0x29);
          }
          if (uVar8 == 0) {
            if ((0xf < (byte)uVar10) || (uVar16 = uVar17, (0x8016U >> (uVar10 & 0x1f) & 1) == 0)) {
              uVar2 = (uint3)(uVar10 >> 8);
              uVar16 = (ulonglong)CONCAT31(uVar2,(byte)uVar17);
              local_6c = uVar8;
              cVar4 = FUN_14095e470(param_5,uVar18 - 1,CONCAT71((int7)(uVar17 >> 8),0x20));
              iVar7 = (int)cVar4;
              uVar8 = local_6c;
              if ((((byte)uVar17 & 0xdf) == 0x49) &&
                 (((cVar4 != '_' && (cVar4 != '.')) &&
                  ((0x19 < iVar7 - 0x61U && 9 < iVar7 - 0x30U) && 0x19 < iVar7 - 0x41U)))) {
                bVar3 = FUN_14095e470(param_5,uVar18 + 1,CONCAT71((uint7)uVar2,0x20));
                uVar8 = local_6c;
                if ((bVar3 & 0xdf) == 0x53) {
                  cVar4 = FUN_14095e470(param_5,uVar18 + 2,0x20);
                  iVar7 = (int)cVar4;
                  uVar8 = local_6c;
                  if (((iVar7 - 0x41U < 0x1a || (iVar7 - 0x61U < 0x1a || iVar7 - 0x30U < 10)) ||
                      (cVar4 == '.')) || (cVar4 == '_')) goto LAB_140a26c77;
                  uVar8 = (uint)local_50;
                  if ((int)uVar8 <= (int)local_54) {
                    local_54 = uVar8;
                  }
                  local_50 = (ulonglong)(uVar8 + 1);
                  cVar4 = (char)local_60;
                  goto LAB_140a26ac2;
                }
                goto LAB_140a26c77;
              }
            }
            if ((char)uVar16 == ';') goto LAB_140a26ea6;
          }
LAB_140a26c77:
          uVar18 = uVar18 + 1;
          goto LAB_140a26c7a;
        }
      }
      else {
        if ((local_a8 == 0x646e65) ||
           (CONCAT11(uStack_a3,cStack_a4) == 0x66 && local_a8 == 0x69736c65)) {
          uVar8 = uVar8 - 1;
          goto LAB_140a26abb;
        }
        if (cStack_a4 == '\0' && local_a8 == 0x65736c65) {
          if ((char)uStack_e4 != '\0' || CONCAT22(uStack_e6,local_e8) != 0x6e656877) {
            local_54 = uVar8 - 1;
          }
        }
        else if ((CONCAT11(uStack_a3,cStack_a4) == 0x6e && local_a8 == 0x69676562) &&
                (((CONCAT44(uStack_df,CONCAT13(cStack_e0,uStack_e4._1_3_)) == 0x65727574636574 &&
                   CONCAT44(uStack_e4,CONCAT22(uStack_e6,local_e8)) == 0x6365746968637261 ||
                  (cStack_e0 == '\0' &&
                   CONCAT44(uStack_e4,CONCAT22(uStack_e6,local_e8)) == 0x6e6f6974636e7566)) ||
                 (CONCAT11((undefined1)uStack_df,cStack_e0) == 0x65 &&
                  CONCAT44(uStack_e4,CONCAT22(uStack_e6,local_e8)) == 0x72756465636f7270)))) {
          local_ac = uVar8 - 1;
        }
      }
      goto LAB_140a26ac2;
    }
    goto LAB_140a26ad5;
  }
  if ((0xf < (byte)local_6c) || ((0x8016U >> (local_6c & 0x1f) & 1) == 0)) {
LAB_140a26490:
    if ((cVar6 == ';') && (CONCAT22(uStack_e6,local_e8) == 0x646e65)) {
      local_e8 = 0x3b;
    }
    iVar19 = isalnum(iVar7);
    goto joined_r0x000140a264d5;
  }
  cVar4 = (char)local_60;
  goto LAB_140a2653e;
LAB_140a26221:
  lVar15 = uVar17 - 499;
  param_5[0x1f6] = lVar15;
  lVar14 = param_5[0x1f9];
  lVar11 = lVar14 + -4000;
  if ((longlong)(uVar17 + 0xdad) <= lVar14) {
    lVar11 = lVar15;
  }
  if (lVar14 < (longlong)(uVar17 + 0xdad) || lVar11 < 0) {
    if (lVar11 < 1) {
      lVar11 = 0;
    }
    param_5[0x1f6] = lVar11;
    lVar15 = lVar11;
  }
  if (lVar15 + 4000 < lVar14) {
    lVar14 = lVar15 + 4000;
  }
  param_5[0x1f7] = lVar14;
  (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,puVar1,lVar15,lVar14 - lVar15);
  *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
  lVar15 = param_5[0x1f6];
  lVar14 = param_5[0x1f7];
  uVar16 = 0x20;
  uVar17 = uVar20;
  if ((longlong)uVar20 < lVar14 && lVar15 <= (longlong)uVar20) {
LAB_140a261e0:
    uVar16 = (ulonglong)*(byte *)((longlong)puVar1 + (uVar20 - lVar15));
    uVar17 = uVar20;
  }
  goto LAB_140a261ee;
LAB_140a26ea6:
  cVar4 = (char)local_60;
LAB_140a26ac2:
  strcpy((char *)&local_e8,(char *)&local_a8);
LAB_140a26ad5:
  cVar6 = (char)local_68;
LAB_140a2653e:
  iVar7 = local_c0;
  if (local_6d != '\0') {
    uVar8 = local_54;
    if ((int)local_bc <= (int)local_54) {
      uVar8 = local_bc;
    }
    if (local_f8 == 0) {
      uVar8 = local_bc;
    }
    uVar10 = local_ac;
    if ((int)uVar8 <= (int)local_ac) {
      uVar10 = uVar8;
    }
    if (local_f4 == 0) {
      uVar10 = uVar8;
    }
    uVar9 = (int)local_50 << 0x10 | uVar10;
    uVar8 = uVar9 | 0x1000;
    if (local_c0 != 0) {
      uVar8 = uVar9;
    }
    if (local_fc == 0) {
      uVar8 = uVar9;
    }
    uVar9 = uVar8 | 0x2000;
    if ((int)local_50 <= (int)uVar10) {
      uVar9 = uVar8;
    }
    uVar8 = (**(code **)(*(longlong *)*param_5 + 0x38))();
    if (uVar9 != uVar8) {
      (**(code **)(*(longlong *)*param_5 + 0x40))((longlong *)*param_5,local_78,uVar9);
    }
    local_78 = local_78 + 1;
    local_bc = (uint)local_50;
    cVar4 = (char)local_60;
    iVar7 = 0;
    cVar6 = (char)local_68;
    local_ac = local_bc;
    local_54 = local_bc;
  }
  iVar7 = iVar7 + (uint)(local_b0 - 0xeU < 0xfffffffb && cVar6 != ' ');
  local_6c = CONCAT31(local_6c._1_3_,uVar5);
  uVar18 = local_80;
  goto LAB_140a25fe7;
}

