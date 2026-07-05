/**
 * Function: bof_eof_function_pointer_share
 * Address:  1408fb690
 * Signature: undefined bof_eof_function_pointer_share(void)
 * Body size: 8720 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bof_eof_function_pointer_share
               (longlong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4,
               undefined8 *param_5,char param_6)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  void *pvVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char cVar12;
  undefined1 uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint7 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 local_11c0 [1048];
  undefined1 local_da8 [1048];
  undefined1 local_990 [1048];
  char local_578 [512];
  char local_378 [512];
  char local_178 [8];
  undefined7 uStack_170;
  undefined1 local_169;
  undefined7 uStack_168;
  char acStack_161 [9];
  char local_158 [8];
  undefined7 uStack_150;
  undefined4 uStack_149;
  undefined5 local_138;
  undefined3 local_133;
  undefined5 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  int local_cc;
  undefined8 *local_c8 [2];
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_90;
  longlong local_88;
  undefined8 local_78;
  undefined2 local_70;
  uint local_6c;
  undefined8 local_68;
  longlong lStack_60;
  int iStack_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_128 = *param_4;
  local_e0 = param_4[1];
  local_120 = param_4[2];
  local_110 = param_4[3];
  local_100 = param_4[4];
  local_f8 = param_4[5];
  local_f0 = param_4[6];
  local_118 = param_4[7];
  local_108 = param_4[8];
  builtin_strncpy(local_158,"PROCEDUR",8);
  uStack_150 = 0x54434e55462045;
  uStack_149 = 0x4e4f49;
  local_d8 = param_2;
  FUN_140a8b860(local_11c0,0);
  FUN_140a8b940(local_11c0,local_158);
  uStack_130 = 0x54494d4f;
  local_138 = 0x49504d4f43;
  local_133 = 0x20454c;
  FUN_140a8b860(local_da8,0);
  FUN_140a8b940(local_da8,&local_138);
  uStack_168 = 0x45544e494f5020;
  builtin_strncpy(acStack_161,"R SHARE",8);
  builtin_strncpy(local_178,"BOF EOF ",8);
  uStack_170 = 0x4f4954434e5546;
  local_169 = 0x4e;
  FUN_140a8b860(local_990,0);
  FUN_140a8b940(local_990,local_178);
  FUN_1408c6740(local_c8,param_1,local_d8,param_3,param_5,0xff);
  local_d8 = local_d8 + param_1;
  local_e8 = param_5 + 1;
  bVar1 = 0;
  local_cc = 0;
LAB_1408fb874:
  uVar11 = local_68;
  uVar20 = local_90;
  uVar10 = local_b8;
  puVar17 = local_c8[0];
  if (local_b8 <= local_90) {
    FUN_1408c6b70(local_c8);
    FUN_140a8b880(local_990);
    FUN_140a8b880(local_da8);
    FUN_140a8b880(local_11c0);
    return;
  }
  uVar14 = local_68._4_4_;
  switch(local_6c) {
  case 1:
    iVar5 = isalnum(local_68._4_4_);
    puVar17 = local_c8[0];
    if (((iVar5 != 0) || (uVar14 == 0x5f)) || (uVar14 == 0x3a)) goto switchD_1408fb8a4_caseD_2;
    if (uVar14 != 0x2e) {
      FUN_140a8b5b0(local_c8,local_378,0x200);
      if (local_378[0] != '\0' && param_6 == '\0') {
        pcVar9 = local_378;
        cVar2 = local_378[0];
        do {
          pcVar9 = pcVar9 + 1;
          cVar12 = cVar2 + -0x20;
          if ((byte)(cVar2 + 0x85U) < 0xe6) {
            cVar12 = cVar2;
          }
          pcVar9[-1] = cVar12;
          cVar2 = *pcVar9;
        } while (cVar2 != '\0');
      }
      bVar3 = FUN_140a8bc50(local_da8);
      if ((bVar3 & bVar1) == 1) {
LAB_1408fc593:
        local_6c = 9;
      }
      else {
        bVar3 = FUN_140a8bc50(local_118);
        if ((bVar3 & bVar1) == 1) {
LAB_1408fc927:
          local_6c = 0xf;
        }
        else {
          bVar3 = FUN_140a8bc50(local_108);
          if ((bVar3 & bVar1) == 1) {
            if ((longlong)local_90 < (longlong)local_d8) {
              lVar21 = param_5[0x1f6];
              lVar18 = 0;
              uVar10 = local_90;
              do {
                if (((longlong)uVar10 < lVar21) || ((longlong)param_5[0x1f7] <= (longlong)uVar10)) {
                  lVar21 = uVar10 - 500;
                  param_5[0x1f6] = lVar21;
                  lVar19 = param_5[0x1f9];
                  lVar7 = lVar19 + -4000;
                  if ((longlong)(uVar10 + 0xdac) <= lVar19) {
                    lVar7 = lVar21;
                  }
                  if (lVar19 < (longlong)(uVar10 + 0xdac) || lVar7 < 0) {
                    if (lVar7 < 1) {
                      lVar7 = 0;
                    }
                    param_5[0x1f6] = lVar7;
                    lVar21 = lVar7;
                  }
                  if (lVar21 + 4000 < lVar19) {
                    lVar19 = lVar21 + 4000;
                  }
                  param_5[0x1f7] = lVar19;
                  (**(code **)(*(longlong *)*param_5 + 0x18))
                            ((longlong *)*param_5,local_e8,lVar21,lVar19 - lVar21);
                  *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
                  lVar21 = param_5[0x1f6];
                }
                cVar2 = *(char *)((longlong)local_e8 + (uVar10 - lVar21));
                if (cVar2 == 10) break;
                iVar5 = isalpha((int)cVar2);
                if (iVar5 != 0) {
                  cVar12 = cVar2 + -0x20;
                  if ((byte)(cVar2 + 0x85U) < 0xe6) {
                    cVar12 = cVar2;
                  }
                  local_578[lVar18] = cVar12;
                  lVar18 = lVar18 + 1;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 != local_d8);
              local_578[lVar18] = '\0';
              if ((lVar18 != 0) && (cVar2 = FUN_140a8bc50(local_11c0), cVar2 != '\0'))
              goto LAB_1408fc927;
            }
          }
          else {
            cVar2 = FUN_140a8bc50(local_e0);
            if (cVar2 != '\0') goto LAB_1408fc593;
          }
        }
      }
      uVar14 = local_6c;
      puVar17 = local_c8[0];
      uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
      uVar10 = local_c8[0][0x3ef];
      if (uVar20 != uVar10 - 1) {
        if (uVar10 <= uVar20) {
          lVar18 = local_c8[0][0x3ee];
          lVar21 = uVar20 + 1;
          if ((0 < lVar18) && (3999 < (lVar21 - uVar10) + lVar18)) {
            (**(code **)(*(longlong *)*local_c8[0] + 0x68))
                      ((longlong *)*local_c8[0],lVar18,local_c8[0] + 0x1fa);
            uVar10 = puVar17[0x3ef];
            puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
            puVar17[0x3ee] = 0;
            lVar18 = 0;
          }
          if (lVar18 + (uVar20 - uVar10) + 1 < 4000) {
            for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
              lVar18 = puVar17[0x3ee];
              puVar17[0x3ee] = lVar18 + 1;
              *(char *)((longlong)puVar17 + lVar18 + 0xfd0) = (char)uVar14;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar17 + 0x60))
                      ((longlong *)*puVar17,(uVar20 - uVar10) + 1,uVar14);
          }
          goto LAB_1408fcfd5;
        }
        goto LAB_1408fcfdc;
      }
      goto LAB_1408fcfcf;
    }
    uVar15 = (-1 - (ulonglong)(local_b0 < uVar20)) + uVar20;
    uVar11 = local_c8[0][0x3ef];
    if (uVar15 == uVar11 - 1) {
LAB_1408fb90d:
      puVar17[0x3ef] = uVar15 + 1;
      uVar20 = local_90;
      uVar10 = local_b8;
    }
    else if (uVar11 <= uVar15) {
      lVar21 = local_c8[0][0x3ee];
      if ((0 < lVar21) && (3999 < ((uVar15 + 1) - uVar11) + lVar21)) {
        (**(code **)(*(longlong *)*local_c8[0] + 0x68))
                  ((longlong *)*local_c8[0],lVar21,local_c8[0] + 0x1fa);
        uVar11 = puVar17[0x3ef];
        puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
        puVar17[0x3ee] = 0;
        lVar21 = 0;
      }
      if (lVar21 + (uVar15 - uVar11) + 1 < 4000) {
        for (; uVar11 <= uVar15; uVar11 = uVar11 + 1) {
          lVar21 = puVar17[0x3ee];
          puVar17[0x3ee] = lVar21 + 1;
          *(undefined1 *)((longlong)puVar17 + lVar21 + 0xfd0) = 1;
        }
      }
      else {
        (**(code **)(*(longlong *)*puVar17 + 0x60))((longlong *)*puVar17,(uVar15 - uVar11) + 1,1);
      }
      goto LAB_1408fb90d;
    }
    local_6c = 0;
    if (uVar20 < uVar10) {
      local_70 = CONCAT11(local_70._1_1_,local_70._1_1_);
      if (local_70._1_1_ == '\x01') {
        local_88 = local_88 + 1;
        local_78 = (**(code **)(*(longlong *)*local_c8[0] + 0x30))();
        uVar20 = local_90;
      }
      local_90 = uVar20 + lStack_60;
      local_68 = CONCAT44(iStack_58,local_68._4_4_);
      lStack_60 = local_50;
      FUN_1408c6cd0(local_c8);
      uVar14 = local_6c & 0xff;
      uVar20 = local_90;
    }
    else {
      local_70 = 0x100;
      local_68 = 0x2000000020;
      iStack_58 = 0x20;
      uVar14 = 0;
    }
    puVar17 = local_c8[0];
    uVar20 = (-1 - (ulonglong)(local_b0 < uVar20)) + uVar20;
    uVar10 = local_c8[0][0x3ef];
    if (uVar20 == uVar10 - 1) {
LAB_1408fc8a0:
      puVar17[0x3ef] = uVar20 + 1;
    }
    else if (uVar10 <= uVar20) {
      lVar21 = local_c8[0][0x3ee];
      if ((0 < lVar21) && (3999 < ((uVar20 + 1) - uVar10) + lVar21)) {
        (**(code **)(*(longlong *)*local_c8[0] + 0x68))
                  ((longlong *)*local_c8[0],lVar21,local_c8[0] + 0x1fa);
        uVar10 = puVar17[0x3ef];
        puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
        puVar17[0x3ee] = 0;
        lVar21 = 0;
      }
      if (lVar21 + (uVar20 - uVar10) + 1 < 4000) {
        for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
          lVar21 = puVar17[0x3ee];
          puVar17[0x3ee] = lVar21 + 1;
          *(char *)((longlong)puVar17 + lVar21 + 0xfd0) = (char)uVar14;
        }
      }
      else {
        (**(code **)(*(longlong *)*puVar17 + 0x60))
                  ((longlong *)*puVar17,(uVar20 - uVar10) + 1,uVar14);
      }
      goto LAB_1408fc8a0;
    }
    local_6c = 1;
    bVar1 = 0;
    cVar2 = (char)local_70;
    break;
  case 3:
    if (local_68._4_4_ != 0x27) {
LAB_1408fbe3f:
      if (iStack_58 == 0x27) {
        FUN_1408c69d0(local_c8,0);
        if (local_b8 <= local_90) goto LAB_1408fc159;
        local_70 = CONCAT11(local_70._1_1_,local_70._1_1_);
        if (local_70._1_1_ == '\x01') {
          local_88 = local_88 + 1;
          local_78 = (**(code **)(*(longlong *)*local_c8[0] + 0x30))();
        }
        local_90 = local_90 + lStack_60;
        local_68 = CONCAT44(iStack_58,local_68._4_4_);
        lStack_60 = local_50;
        FUN_1408c6cd0(local_c8);
      }
      goto switchD_1408fb8a4_caseD_2;
    }
    uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
    uVar10 = local_c8[0][0x3ef];
    if (uVar20 == uVar10 - 1) {
LAB_1408fba1e:
      puVar17[0x3ef] = uVar20 + 1;
    }
    else if (uVar10 <= uVar20) {
      lVar21 = local_c8[0][0x3ee];
      if ((0 < lVar21) && (3999 < ((uVar20 + 1) - uVar10) + lVar21)) {
        (**(code **)(*(longlong *)*local_c8[0] + 0x68))
                  ((longlong *)*local_c8[0],lVar21,local_c8[0] + 0x1fa);
        uVar10 = puVar17[0x3ef];
        puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
        puVar17[0x3ee] = 0;
        lVar21 = 0;
      }
      if (lVar21 + (uVar20 - uVar10) + 1 < 4000) {
        for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
          lVar21 = puVar17[0x3ee];
          puVar17[0x3ee] = lVar21 + 1;
          *(undefined1 *)((longlong)puVar17 + lVar21 + 0xfd0) = 3;
        }
      }
      else {
        (**(code **)(*(longlong *)*puVar17 + 0x60))((longlong *)*puVar17,(uVar20 - uVar10) + 1,3);
      }
      goto LAB_1408fba1e;
    }
    local_6c = 0;
    if (local_90 < local_b8) {
      local_70 = CONCAT11(local_70._1_1_,local_70._1_1_);
      if (local_70._1_1_ == '\x01') {
        lVar21 = local_88 + 2;
        local_88 = local_88 + 1;
        local_78 = (**(code **)(*(longlong *)*local_c8[0] + 0x30))((longlong *)*local_c8[0],lVar21);
      }
      local_90 = local_90 + lStack_60;
      local_68 = CONCAT44(iStack_58,local_68._4_4_);
      lStack_60 = local_50;
      FUN_1408c6cd0(local_c8);
      goto LAB_1408fbe3f;
    }
LAB_1408fc159:
    local_70 = 0x100;
    local_68 = 0x2000000020;
    iStack_58 = 0x20;
    goto LAB_1408fd000;
  case 5:
    if (9 < local_68._4_4_ - 0x30) {
      if (param_6 == '\0') {
        pvVar8 = memchr("ABCDEFabcdef",local_68._4_4_,0xd);
        if ((uVar14 != 0x2e) && (pvVar8 == (void *)0x0)) {
          pvVar8 = memchr("BOHboh",uVar14,7);
          goto joined_r0x0001408fbc8d;
        }
      }
      else if (((5 < (local_68._4_4_ & 0xff) - 0x41) && ((local_68 & 0xff00000000) != 0)) &&
              (local_68._4_4_ != 0x2e)) {
        pvVar8 = memchr(&DAT_1413691ea,local_68._4_4_,4);
joined_r0x0001408fbc8d:
        if (pvVar8 == (void *)0x0) {
          FUN_140a8b5b0(local_c8,local_378,0x200);
          puVar17 = local_c8[0];
          iVar5 = 0;
          pcVar9 = local_378;
          do {
            if (*pcVar9 == '.') {
              iVar5 = iVar5 + 1;
            }
            else if (*pcVar9 == '\0') goto code_r0x0001408fbcd1;
            pcVar9 = pcVar9 + 1;
          } while( true );
        }
      }
    }
  default:
switchD_1408fb8a4_caseD_2:
    cVar2 = (char)local_70;
    break;
  case 7:
    if (local_68._4_4_ == 0x29) {
      if (local_cc != 0) {
        local_cc = local_cc + -1;
        cVar2 = (char)local_70;
        break;
      }
      uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
      uVar10 = local_c8[0][0x3ef];
      if (uVar20 == uVar10 - 1) {
LAB_1408fc4e0:
        puVar17[0x3ef] = uVar20 + 1;
      }
      else if (uVar10 <= uVar20) {
        lVar21 = local_c8[0][0x3ee];
        if ((0 < lVar21) && (3999 < ((uVar20 + 1) - uVar10) + lVar21)) {
          (**(code **)(*(longlong *)*local_c8[0] + 0x68))
                    ((longlong *)*local_c8[0],lVar21,local_c8[0] + 0x1fa);
          uVar10 = puVar17[0x3ef];
          puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
          puVar17[0x3ee] = 0;
          lVar21 = 0;
        }
        if (lVar21 + (uVar20 - uVar10) + 1 < 4000) {
          for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
            lVar21 = puVar17[0x3ee];
            puVar17[0x3ee] = lVar21 + 1;
            *(undefined1 *)((longlong)puVar17 + lVar21 + 0xfd0) = 7;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar17 + 0x60))((longlong *)*puVar17,(uVar20 - uVar10) + 1,7);
        }
        goto LAB_1408fc4e0;
      }
      local_cc = 0;
      goto joined_r0x0001408fc73c;
    }
    if (local_68._4_4_ != 0x28) goto switchD_1408fb8a4_caseD_2;
    local_cc = local_cc + 1;
    if ((char)local_70 != '\x01') goto LAB_1408fd000;
    goto LAB_1408fbefd;
  case 8:
    if (local_68._4_4_ == 0x3a) {
      local_70 = CONCAT11(local_70._1_1_,local_70._1_1_);
      uVar4 = 0x3a;
      if (local_70._1_1_ == '\x01') {
        lVar21 = local_88 + 2;
        local_88 = local_88 + 1;
        local_78 = (**(code **)(*(longlong *)*local_c8[0] + 0x30))((longlong *)*local_c8[0],lVar21);
        uVar4 = local_68._4_4_;
      }
      local_90 = local_90 + lStack_60;
      local_68 = CONCAT44(iStack_58,uVar4);
      lStack_60 = local_50;
      FUN_1408c6cd0(local_c8);
      FUN_140a8b5b0(local_c8,local_378,0x200);
      if (local_378[0] != '\0' && param_6 == '\0') {
        pcVar9 = local_378;
        cVar2 = local_378[0];
        do {
          pcVar9 = pcVar9 + 1;
          cVar12 = cVar2 + -0x20;
          if ((byte)(cVar2 + 0x85U) < 0xe6) {
            cVar12 = cVar2;
          }
          pcVar9[-1] = cVar12;
          cVar2 = *pcVar9;
        } while (cVar2 != '\0');
      }
      cVar2 = FUN_140a8bc50(local_f0,local_378);
      if (cVar2 != '\0') {
        local_6c = 0xe;
        cVar2 = (char)local_70;
        break;
      }
      goto switchD_1408fb8a4_caseD_2;
    }
    iVar5 = isalnum(local_68._4_4_);
    if ((uVar14 == 0x5f) || (iVar5 != 0)) goto switchD_1408fb8a4_caseD_2;
    FUN_140a8b5b0(local_c8,local_378,0x200);
    if (local_378[0] != '\0' && param_6 == '\0') {
      pcVar9 = local_378;
      cVar2 = local_378[0];
      do {
        pcVar9 = pcVar9 + 1;
        cVar12 = cVar2 + -0x20;
        if ((byte)(cVar2 + 0x85U) < 0xe6) {
          cVar12 = cVar2;
        }
        pcVar9[-1] = cVar12;
        cVar2 = *pcVar9;
      } while (cVar2 != '\0');
    }
    cVar2 = FUN_140a8bc50(local_128,local_378);
    uVar16 = (uint7)(uint3)(uVar11 >> 0x28);
    if (cVar2 == '\0') {
      cVar2 = FUN_140a8bc50(local_e0,local_378);
      if (cVar2 == '\0') {
        cVar2 = FUN_140a8bc50(local_120,local_378);
        if (cVar2 == '\0') {
          cVar2 = FUN_140a8bc50(local_110,local_378);
          if (cVar2 == '\0') {
            cVar2 = FUN_140a8bc50(local_100,local_378);
            if (cVar2 == '\0') {
              cVar2 = FUN_140a8bc50(local_f8,local_378);
              if (cVar2 == '\0') {
                cVar2 = FUN_140a8bc50(local_f0,local_378);
                if (cVar2 == '\0') {
                  bVar3 = FUN_140a8bc50(local_990,local_378);
                  local_6c = (uint)bVar3 << 4;
                  uVar14 = (uint)(byte)(bVar3 << 4);
                }
                else {
                  uVar14 = (uint)CONCAT71(uVar16,0xe);
                  local_6c = 0xe;
                }
              }
              else {
                uVar14 = (uint)CONCAT71(uVar16,0xd);
                local_6c = 0xd;
              }
            }
            else {
              uVar14 = (uint)CONCAT71(uVar16,0xc);
              local_6c = 0xc;
            }
          }
          else {
            uVar14 = (uint)CONCAT71(uVar16,0xb);
            local_6c = 0xb;
          }
        }
        else {
          uVar14 = (uint)CONCAT71(uVar16,10);
          local_6c = 10;
        }
      }
      else {
        uVar14 = (uint)CONCAT71(uVar16,9);
        local_6c = 9;
      }
    }
    else {
      uVar14 = (uint)CONCAT71(uVar16,8);
      local_6c = 8;
    }
    puVar17 = local_c8[0];
    uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
    uVar10 = local_c8[0][0x3ef];
    if (uVar20 == uVar10 - 1) goto LAB_1408fcfcf;
    if (uVar20 < uVar10) goto LAB_1408fcfdc;
    lVar18 = local_c8[0][0x3ee];
    lVar21 = uVar20 + 1;
    if ((0 < lVar18) && (3999 < (lVar21 - uVar10) + lVar18)) {
      (**(code **)(*(longlong *)*local_c8[0] + 0x68))
                ((longlong *)*local_c8[0],lVar18,local_c8[0] + 0x1fa);
      uVar10 = puVar17[0x3ef];
      puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
      puVar17[0x3ee] = 0;
      lVar18 = 0;
    }
    if (lVar18 + (uVar20 - uVar10) + 1 < 4000) {
      for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
        lVar18 = puVar17[0x3ee];
        puVar17[0x3ee] = lVar18 + 1;
        *(char *)((longlong)puVar17 + lVar18 + 0xfd0) = (char)uVar14;
      }
    }
    else {
      (**(code **)(*(longlong *)*puVar17 + 0x60))((longlong *)*puVar17,(uVar20 - uVar10) + 1,uVar14)
      ;
    }
    goto LAB_1408fcfd5;
  case 0xe:
    iVar5 = isalnum(local_68._4_4_);
    puVar17 = local_c8[0];
    if (iVar5 != 0) goto switchD_1408fb8a4_caseD_2;
    uVar20 = (-1 - (ulonglong)(local_b0 < uVar20)) + uVar20;
    uVar10 = local_c8[0][0x3ef];
    if (uVar20 == uVar10 - 1) {
      local_c8[0][0x3ef] = uVar20 + 1;
    }
    else if (uVar10 <= uVar20) {
      lVar21 = local_c8[0][0x3ee];
      if ((0 < lVar21) && (3999 < ((uVar20 + 1) - uVar10) + lVar21)) {
        (**(code **)(*(longlong *)*local_c8[0] + 0x68))
                  ((longlong *)*local_c8[0],lVar21,local_c8[0] + 0x1fa);
        uVar10 = puVar17[0x3ef];
        puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
        puVar17[0x3ee] = 0;
        lVar21 = 0;
      }
      if (lVar21 + (uVar20 - uVar10) + 1 < 4000) {
        for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
          lVar21 = puVar17[0x3ee];
          puVar17[0x3ee] = lVar21 + 1;
          *(undefined1 *)((longlong)puVar17 + lVar21 + 0xfd0) = 0xe;
        }
      }
      else {
        (**(code **)(*(longlong *)*puVar17 + 0x60))((longlong *)*puVar17,(uVar20 - uVar10) + 1,0xe);
      }
      puVar17[0x3ef] = uVar20 + 1;
    }
    goto LAB_1408fcfdc;
  }
  goto joined_r0x0001408fbb7d;
code_r0x0001408fbcd1:
  iVar5 = (0 < iVar5) + 5;
  uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
  uVar10 = local_c8[0][0x3ef];
  if (uVar20 == uVar10 - 1) {
LAB_1408fcfcf:
    lVar21 = uVar20 + 1;
    puVar17 = local_c8[0];
LAB_1408fcfd5:
    puVar17[0x3ef] = lVar21;
  }
  else if (uVar10 <= uVar20) {
    lVar18 = local_c8[0][0x3ee];
    lVar21 = uVar20 + 1;
    local_6c = iVar5;
    if ((0 < lVar18) && (3999 < (lVar21 - uVar10) + lVar18)) {
      (**(code **)(*(longlong *)*local_c8[0] + 0x68))
                ((longlong *)*local_c8[0],lVar18,local_c8[0] + 0x1fa);
      uVar10 = puVar17[0x3ef];
      puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
      puVar17[0x3ee] = 0;
      lVar18 = 0;
    }
    if (lVar18 + (uVar20 - uVar10) + 1 < 4000) {
      for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
        lVar18 = puVar17[0x3ee];
        puVar17[0x3ee] = lVar18 + 1;
        *(char *)((longlong)puVar17 + lVar18 + 0xfd0) = (char)iVar5;
      }
    }
    else {
      (**(code **)(*(longlong *)*puVar17 + 0x60))((longlong *)*puVar17,(uVar20 - uVar10) + 1,iVar5);
    }
    goto LAB_1408fcfd5;
  }
LAB_1408fcfdc:
joined_r0x0001408fc73c:
  local_6c = 0;
  cVar2 = (char)local_70;
joined_r0x0001408fbb7d:
  if (cVar2 == '\x01') {
LAB_1408fbefd:
    uVar14 = local_68._4_4_;
    iVar5 = isalpha(local_68._4_4_);
    puVar17 = local_c8[0];
    uVar13 = (undefined1)local_6c;
    if ((uVar14 == 0x5f) || (iVar5 != 0)) {
      uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
      uVar10 = local_c8[0][0x3ef];
      if (uVar20 != uVar10 - 1) {
        bVar1 = 1;
        uVar14 = 1;
        if (uVar20 < uVar10) goto LAB_1408fd0cb;
        lVar21 = local_c8[0][0x3ee];
        if ((0 < lVar21) && (3999 < ((uVar20 + 1) - uVar10) + lVar21)) {
          (**(code **)(*(longlong *)*local_c8[0] + 0x68))();
          uVar10 = puVar17[0x3ef];
          puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
          puVar17[0x3ee] = 0;
          lVar21 = 0;
        }
        if (lVar21 + (uVar20 - uVar10) + 1 < 4000) {
          for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
            lVar21 = puVar17[0x3ee];
            puVar17[0x3ee] = lVar21 + 1;
            *(undefined1 *)((longlong)puVar17 + lVar21 + 0xfd0) = uVar13;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar17 + 0x60))();
        }
      }
      puVar17[0x3ef] = uVar20 + 1;
      bVar1 = 1;
      uVar14 = 1;
      goto LAB_1408fd0cb;
    }
    if (uVar14 < 0x40) {
      uVar10 = (ulonglong)uVar14;
      if ((0x100003e00U >> (uVar10 & 0x3f) & 1) == 0) {
        if ((0x40200000000U >> (uVar10 & 0x3f) & 1) != 0) {
          uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
          uVar10 = local_c8[0][0x3ef];
          if (uVar20 == uVar10 - 1) {
            local_c8[0][0x3ef] = uVar20 + 1;
          }
          else if (uVar10 <= uVar20) {
            lVar21 = local_c8[0][0x3ee];
            if ((0 < lVar21) && (3999 < ((uVar20 + 1) - uVar10) + lVar21)) {
              (**(code **)(*(longlong *)*local_c8[0] + 0x68))();
              uVar10 = puVar17[0x3ef];
              puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
              puVar17[0x3ee] = 0;
              lVar21 = 0;
            }
            if (lVar21 + (uVar20 - uVar10) + 1 < 4000) {
              for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
                lVar21 = puVar17[0x3ee];
                puVar17[0x3ee] = lVar21 + 1;
                *(undefined1 *)((longlong)puVar17 + lVar21 + 0xfd0) = uVar13;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar17 + 0x60))();
            }
            puVar17[0x3ef] = uVar20 + 1;
          }
          bVar1 = 0;
          uVar14 = 2;
          goto LAB_1408fd0cb;
        }
        if (uVar10 != 0x3f) goto LAB_1408fc3a6;
        local_6c = 9;
        if (local_90 < local_b8) {
          local_70 = CONCAT11(local_70._1_1_,local_70._1_1_);
          uVar4 = 0x3f;
          if (local_70._1_1_ == '\x01') {
            local_88 = local_88 + 1;
            local_78 = (**(code **)(*(longlong *)*local_c8[0] + 0x30))();
            uVar4 = local_68._4_4_;
          }
          local_90 = local_90 + lStack_60;
          local_68 = CONCAT44(iStack_58,uVar4);
          lStack_60 = local_50;
          FUN_1408c6cd0(local_c8);
          uVar13 = (undefined1)local_6c;
        }
        else {
          local_70 = 0x100;
          local_68 = 0x2000000020;
          iStack_58 = 0x20;
          uVar13 = 9;
        }
        puVar17 = local_c8[0];
        uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
        uVar10 = local_c8[0][0x3ef];
        if (uVar20 == uVar10 - 1) goto LAB_1408fbf6a;
        if (uVar10 <= uVar20) {
          lVar18 = local_c8[0][0x3ee];
          lVar21 = uVar20 + 1;
          if ((0 < lVar18) && (3999 < (lVar21 - uVar10) + lVar18)) {
            (**(code **)(*(longlong *)*local_c8[0] + 0x68))();
            uVar10 = puVar17[0x3ef];
            puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
            puVar17[0x3ee] = 0;
            lVar18 = 0;
          }
          if (lVar18 + (uVar20 - uVar10) + 1 < 4000) {
            for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
              lVar18 = puVar17[0x3ee];
              puVar17[0x3ee] = lVar18 + 1;
              *(undefined1 *)((longlong)puVar17 + lVar18 + 0xfd0) = uVar13;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar17 + 0x60))();
          }
          goto LAB_1408fcda1;
        }
      }
      else {
        uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
        uVar10 = local_c8[0][0x3ef];
        if (uVar20 == uVar10 - 1) {
LAB_1408fbf6a:
          local_c8[0][0x3ef] = uVar20 + 1;
        }
        else if (uVar10 <= uVar20) {
          lVar18 = local_c8[0][0x3ee];
          lVar21 = uVar20 + 1;
          if ((0 < lVar18) && (3999 < (lVar21 - uVar10) + lVar18)) {
            (**(code **)(*(longlong *)*local_c8[0] + 0x68))();
            uVar10 = puVar17[0x3ef];
            puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
            puVar17[0x3ee] = 0;
            lVar18 = 0;
          }
          if (lVar18 + (uVar20 - uVar10) + 1 < 4000) {
            for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
              lVar18 = puVar17[0x3ee];
              puVar17[0x3ee] = lVar18 + 1;
              *(undefined1 *)((longlong)puVar17 + lVar18 + 0xfd0) = uVar13;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar17 + 0x60))();
          }
LAB_1408fcda1:
          puVar17[0x3ef] = lVar21;
        }
      }
      bVar1 = 0;
      uVar14 = 0;
    }
    else {
LAB_1408fc3a6:
      uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
      uVar10 = local_c8[0][0x3ef];
      if (uVar20 == uVar10 - 1) {
        local_c8[0][0x3ef] = uVar20 + 1;
      }
      else if (uVar10 <= uVar20) {
        lVar21 = local_c8[0][0x3ee];
        if ((0 < lVar21) && (3999 < ((uVar20 + 1) - uVar10) + lVar21)) {
          (**(code **)(*(longlong *)*local_c8[0] + 0x68))();
          uVar10 = puVar17[0x3ef];
          puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
          puVar17[0x3ee] = 0;
          lVar21 = 0;
        }
        if (lVar21 + (uVar20 - uVar10) + 1 < 4000) {
          for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
            lVar21 = puVar17[0x3ee];
            puVar17[0x3ee] = lVar21 + 1;
            *(undefined1 *)((longlong)puVar17 + lVar21 + 0xfd0) = uVar13;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar17 + 0x60))();
        }
        puVar17[0x3ef] = uVar20 + 1;
      }
      bVar1 = 0;
      uVar14 = 0xf;
    }
    goto LAB_1408fd0cb;
  }
LAB_1408fd000:
  uVar14 = local_6c;
  puVar17 = local_c8[0];
  if (local_70._1_1_ != '\x01') {
    if (local_6c != 0) goto LAB_1408fd0cb;
    iVar5 = local_68._4_4_;
    iVar6 = isalpha(local_68._4_4_);
    puVar17 = local_c8[0];
    if (iVar6 != 0) {
      uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
      uVar10 = local_c8[0][0x3ef];
      if (uVar20 != uVar10 - 1) {
        uVar14 = 8;
        if (uVar20 < uVar10) goto LAB_1408fd0cb;
        lVar21 = local_c8[0][0x3ee];
        if ((0 < lVar21) && (3999 < ((uVar20 + 1) - uVar10) + lVar21)) {
          (**(code **)(*(longlong *)*local_c8[0] + 0x68))();
          uVar10 = puVar17[0x3ef];
          puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
          puVar17[0x3ee] = 0;
          lVar21 = 0;
        }
        if (lVar21 + (uVar20 - uVar10) + 1 < 4000) {
          for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
            lVar21 = puVar17[0x3ee];
            puVar17[0x3ee] = lVar21 + 1;
            *(undefined1 *)((longlong)puVar17 + lVar21 + 0xfd0) = 0;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar17 + 0x60))();
        }
      }
      puVar17[0x3ef] = uVar20 + 1;
      uVar14 = 8;
      goto LAB_1408fd0cb;
    }
    if (iVar5 - 0x30U < 10) {
      uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
      uVar10 = local_c8[0][0x3ef];
      if (uVar20 != uVar10 - 1) {
        uVar14 = 5;
        if (uVar20 < uVar10) goto LAB_1408fd0cb;
        lVar21 = local_c8[0][0x3ee];
        if ((0 < lVar21) && (3999 < ((uVar20 + 1) - uVar10) + lVar21)) {
          (**(code **)(*(longlong *)*local_c8[0] + 0x68))();
          uVar10 = puVar17[0x3ef];
          puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
          puVar17[0x3ee] = 0;
          lVar21 = 0;
        }
        if (lVar21 + (uVar20 - uVar10) + 1 < 4000) {
          for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
            lVar21 = puVar17[0x3ee];
            puVar17[0x3ee] = lVar21 + 1;
            *(undefined1 *)((longlong)puVar17 + lVar21 + 0xfd0) = 0;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar17 + 0x60))();
        }
      }
      puVar17[0x3ef] = uVar20 + 1;
      uVar14 = 5;
      goto LAB_1408fd0cb;
    }
    uVar14 = local_6c;
    if (iVar5 < 0x40) {
      if (iVar5 != 0x21) {
        if (iVar5 == 0x27) {
          if (iStack_58 == 0x27) {
            FUN_1408c69d0(local_c8,0);
            uVar14 = local_6c;
          }
          else {
            FUN_1408c69d0(local_c8,3);
            uVar14 = local_6c;
          }
        }
        goto LAB_1408fd0cb;
      }
    }
    else {
      if (iVar5 == 0x40) {
        if (param_6 == '\0') {
          pvVar8 = memchr("DEKNPSTdeknpst",iStack_58,0xf);
          puVar17 = local_c8[0];
          uVar14 = local_6c;
          if (pvVar8 == (void *)0x0) goto LAB_1408fd0cb;
          uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
          uVar10 = local_c8[0][0x3ef];
          if (uVar20 == uVar10 - 1) goto LAB_1408fd747;
          uVar14 = 7;
          if (uVar20 < uVar10) goto LAB_1408fd0cb;
          lVar18 = local_c8[0][0x3ee];
          lVar21 = uVar20 + 1;
          if ((0 < lVar18) && (3999 < (lVar21 - uVar10) + lVar18)) {
            (**(code **)(*(longlong *)*local_c8[0] + 0x68))
                      ((longlong *)*local_c8[0],lVar18,local_c8[0] + 0x1fa);
            uVar10 = puVar17[0x3ef];
            puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
            puVar17[0x3ee] = 0;
            lVar18 = 0;
          }
          if (lVar18 + (uVar20 - uVar10) + 1 < 4000) {
            for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
              lVar18 = puVar17[0x3ee];
              puVar17[0x3ee] = lVar18 + 1;
              *(undefined1 *)((longlong)puVar17 + lVar18 + 0xfd0) = 0;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar17 + 0x60))
                      ((longlong *)*puVar17,(uVar20 - uVar10) + 1,0);
          }
        }
        else {
          pvVar8 = memchr("DEKNPST",iStack_58,8);
          puVar17 = local_c8[0];
          uVar14 = local_6c;
          if (pvVar8 == (void *)0x0) goto LAB_1408fd0cb;
          uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
          uVar10 = local_c8[0][0x3ef];
          if (uVar20 == uVar10 - 1) {
LAB_1408fd747:
            lVar21 = uVar20 + 1;
            puVar17 = local_c8[0];
          }
          else {
            uVar14 = 7;
            if (uVar20 < uVar10) goto LAB_1408fd0cb;
            lVar18 = local_c8[0][0x3ee];
            lVar21 = uVar20 + 1;
            if ((0 < lVar18) && (3999 < (lVar21 - uVar10) + lVar18)) {
              (**(code **)(*(longlong *)*local_c8[0] + 0x68))
                        ((longlong *)*local_c8[0],lVar18,local_c8[0] + 0x1fa);
              uVar10 = puVar17[0x3ef];
              puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
              puVar17[0x3ee] = 0;
              lVar18 = 0;
            }
            if (lVar18 + (uVar20 - uVar10) + 1 < 4000) {
              for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
                lVar18 = puVar17[0x3ee];
                puVar17[0x3ee] = lVar18 + 1;
                *(undefined1 *)((longlong)puVar17 + lVar18 + 0xfd0) = 0;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar17 + 0x60))
                        ((longlong *)*puVar17,(uVar20 - uVar10) + 1,0);
            }
          }
        }
        puVar17[0x3ef] = lVar21;
        uVar14 = 7;
        goto LAB_1408fd0cb;
      }
      if (iVar5 != 0x7c) goto LAB_1408fd0cb;
    }
    uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
    uVar10 = local_c8[0][0x3ef];
    if (uVar20 != uVar10 - 1) {
      uVar14 = 2;
      if (uVar20 < uVar10) goto LAB_1408fd0cb;
      lVar21 = local_c8[0][0x3ee];
      if ((0 < lVar21) && (3999 < ((uVar20 + 1) - uVar10) + lVar21)) {
        (**(code **)(*(longlong *)*local_c8[0] + 0x68))
                  ((longlong *)*local_c8[0],lVar21,local_c8[0] + 0x1fa);
        uVar10 = puVar17[0x3ef];
        puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
        puVar17[0x3ee] = 0;
        lVar21 = 0;
      }
      if (lVar21 + (uVar20 - uVar10) + 1 < 4000) {
        for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
          lVar21 = puVar17[0x3ee];
          puVar17[0x3ee] = lVar21 + 1;
          *(undefined1 *)((longlong)puVar17 + lVar21 + 0xfd0) = 0;
        }
      }
      else {
        (**(code **)(*(longlong *)*puVar17 + 0x60))((longlong *)*puVar17,(uVar20 - uVar10) + 1,0);
      }
    }
    puVar17[0x3ef] = uVar20 + 1;
    uVar14 = 2;
    goto LAB_1408fd0cb;
  }
  uVar20 = (-1 - (ulonglong)(local_b0 < local_90)) + local_90;
  uVar10 = local_c8[0][0x3ef];
  if (uVar20 == uVar10 - 1) {
LAB_1408fd042:
    puVar17[0x3ef] = uVar20 + 1;
  }
  else if (uVar10 <= uVar20) {
    lVar21 = local_c8[0][0x3ee];
    if ((0 < lVar21) && (3999 < ((uVar20 + 1) - uVar10) + lVar21)) {
      (**(code **)(*(longlong *)*local_c8[0] + 0x68))();
      uVar10 = puVar17[0x3ef];
      puVar17[0x3f0] = puVar17[0x3f0] + puVar17[0x3ee];
      puVar17[0x3ee] = 0;
      lVar21 = 0;
    }
    if (lVar21 + (uVar20 - uVar10) + 1 < 4000) {
      for (; uVar10 <= uVar20; uVar10 = uVar10 + 1) {
        lVar21 = puVar17[0x3ee];
        puVar17[0x3ee] = lVar21 + 1;
        *(char *)((longlong)puVar17 + lVar21 + 0xfd0) = (char)uVar14;
      }
    }
    else {
      (**(code **)(*(longlong *)*puVar17 + 0x60))();
    }
    goto LAB_1408fd042;
  }
  uVar14 = 0;
LAB_1408fd0cb:
  local_6c = uVar14;
  if (local_90 < local_b8) {
    local_70 = CONCAT11(local_70._1_1_,local_70._1_1_);
    if (local_70._1_1_ == '\x01') {
      local_88 = local_88 + 1;
      local_78 = (**(code **)(*(longlong *)*local_c8[0] + 0x30))();
    }
    local_90 = local_90 + lStack_60;
    local_68 = CONCAT44(iStack_58,local_68._4_4_);
    lStack_60 = local_50;
    FUN_1408c6cd0(local_c8);
  }
  else {
    local_70 = 0x100;
    local_68 = 0x2000000020;
    iStack_58 = 0x20;
  }
  goto LAB_1408fb874;
}

