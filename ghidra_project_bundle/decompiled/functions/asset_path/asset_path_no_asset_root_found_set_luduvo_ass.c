/**
 * Function: asset_path_no_asset_root_found_set_luduvo_ass
 * Address:  14022de30
 * Signature: undefined asset_path_no_asset_root_found_set_luduvo_ass(void)
 * Body size: 2943 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void asset_path_no_asset_root_found_set_luduvo_ass(void)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  DWORD DVar5;
  ulonglong uVar6;
  FILE *_File;
  undefined8 *puVar7;
  char *pcVar8;
  char *******pppppppcVar9;
  char ******ppppppcVar10;
  longlong lVar11;
  char *******pppppppcVar12;
  undefined8 **ppuVar13;
  char ******local_398;
  size_t local_390;
  uint local_388;
  int local_384;
  ulonglong local_380;
  undefined2 local_378;
  undefined6 uStack_376;
  undefined8 local_368;
  ulonglong local_360;
  char *****local_358 [2];
  undefined8 local_348;
  ulonglong local_340;
  longlong local_188 [3];
  ulonglong local_170;
  longlong local_168 [3];
  ulonglong local_150;
  longlong local_148 [3];
  ulonglong local_130;
  char *local_128;
  undefined8 local_120;
  ulonglong local_110;
  char *local_108;
  undefined8 local_100;
  ulonglong local_f0;
  char *local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  longlong local_88 [4];
  char ******local_68;
  char ******local_60;
  char ******local_58;
  char ******local_50;
  longlong local_48 [2];
  uint local_38;
  int local_34;
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_398 = (char ******)getenv("LUDUVO_ASSET_ROOT");
  if ((char *******)local_398 != (char *******)0x0) {
    local_390 = strlen((char *)local_398);
    uVar3 = FUN_140b6625c();
    ppuVar13 = &DAT_1416b8508;
    FUN_140004460(&DAT_1416b8508,uVar3,&local_398);
    if (7 < DAT_1416b8520) {
      ppuVar13 = (undefined8 **)DAT_1416b8508;
    }
    iVar4 = FUN_140b65f14(ppuVar13,&local_398,3);
    if (iVar4 < 0x40) {
      if (1 < iVar4 - 2U) {
        if (iVar4 == 0) {
          if ((((local_388 & 0x400) == 0) ||
              ((local_384 != -0x5ffffffd && (local_384 != -0x5ffffff4)))) &&
             ((local_388 & 0x10) != 0)) {
            return;
          }
        }
        else if (iVar4 != 0x35) goto LAB_14022dee3;
      }
    }
    else if (((iVar4 != 0x40) && (iVar4 != 0x7b)) && (iVar4 != 0x10b)) {
LAB_14022dee3:
                    /* WARNING: Subroutine does not return */
      FUN_14022eed0("status",iVar4,&DAT_1416b8508);
    }
    if (7 < DAT_1416b8520) {
      uVar6 = DAT_1416b8520 * 2 + 2;
      puVar7 = DAT_1416b8508;
      if (0xfff < uVar6) {
        puVar7 = (undefined8 *)DAT_1416b8508[-1];
        if (0x1f < (ulonglong)((longlong)DAT_1416b8508 + (-8 - (longlong)puVar7)))
        goto LAB_14022e985;
        uVar6 = DAT_1416b8520 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(puVar7,uVar6);
    }
    _DAT_1416b8518 = 0;
    DAT_1416b8520 = 7;
    DAT_1416b8508 = (undefined8 *)((ulonglong)DAT_1416b8508 & 0xffffffffffff0000);
  }
  local_398 = (char ******)0x141332cae;
  local_390 = 0x32;
  uVar3 = FUN_140b6625c();
  ppuVar13 = &DAT_1416b8508;
  FUN_140004460(&DAT_1416b8508,uVar3,&local_398);
  if (7 < DAT_1416b8520) {
    ppuVar13 = (undefined8 **)DAT_1416b8508;
  }
  iVar4 = FUN_140b65f14(ppuVar13,&local_398,3);
  if (iVar4 < 0x40) {
    if (1 < iVar4 - 2U) {
      if (iVar4 == 0) {
        if ((((local_388 & 0x400) == 0) ||
            ((local_384 != -0x5ffffffd && (local_384 != -0x5ffffff4)))) && ((local_388 & 0x10) != 0)
           ) {
          return;
        }
      }
      else if (iVar4 != 0x35) goto LAB_14022e007;
    }
  }
  else if (((iVar4 != 0x40) && (iVar4 != 0x7b)) && (iVar4 != 0x10b)) {
LAB_14022e007:
                    /* WARNING: Subroutine does not return */
    FUN_14022eed0("status",iVar4,&DAT_1416b8508);
  }
  if (7 < DAT_1416b8520) {
    uVar6 = DAT_1416b8520 * 2 + 2;
    puVar7 = DAT_1416b8508;
    if (0xfff < uVar6) {
      puVar7 = (undefined8 *)DAT_1416b8508[-1];
      if (0x1f < (ulonglong)((longlong)DAT_1416b8508 + (-8 - (longlong)puVar7))) goto LAB_14022e985;
      uVar6 = DAT_1416b8520 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(puVar7,uVar6);
  }
  _DAT_1416b8518 = 0;
  DAT_1416b8520 = 7;
  DAT_1416b8508 = (undefined8 *)((ulonglong)DAT_1416b8508 & 0xffffffffffff0000);
  DVar5 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&local_398,0x104);
  if (DVar5 - 1 < 0x103) {
    FUN_140005140(local_48,&local_398);
    FUN_140003540(local_48,local_88);
    if (7 < local_30) {
      uVar6 = local_30 * 2 + 2;
      lVar11 = local_48[0];
      if (0xfff < uVar6) {
        lVar11 = *(longlong *)(local_48[0] + -8);
        if (0x1f < (ulonglong)((local_48[0] + -8) - lVar11)) goto LAB_14022e985;
        uVar6 = local_30 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar11,uVar6);
    }
    if (local_88[2] == 0) goto LAB_14022e895;
    local_128 = "assets";
    local_120 = 6;
    uVar3 = FUN_140b6625c();
    local_68 = (char ******)&local_398;
    FUN_140004460(local_48,uVar3,&local_128);
    local_60 = (char ******)&local_398;
    FUN_140003540(local_88,&local_128);
    local_58 = (char ******)&local_398;
    FUN_140003330(local_58,&local_128,local_48);
    pppppppcVar12 = (char *******)&local_378;
    local_108 = "assets";
    local_100 = 6;
    uVar3 = FUN_140b6625c();
    local_58 = (char ******)pppppppcVar12;
    FUN_140004460(local_188,uVar3,&local_108);
    local_50 = (char ******)pppppppcVar12;
    FUN_140003330(pppppppcVar12,local_88,local_188);
    local_c8 = "assets";
    local_c0 = 6;
    uVar3 = FUN_140b6625c();
    local_50 = local_358;
    FUN_140004460(&local_108,uVar3,&local_c8);
    local_a8 = "luduvo";
    local_a0 = 6;
    uVar3 = FUN_140b6625c();
    FUN_140004460(local_168,uVar3,&local_a8);
    local_e8 = "share";
    local_e0 = 5;
    uVar3 = FUN_140b6625c();
    FUN_140004460(local_148,uVar3,&local_e8);
    FUN_140003540(local_88,&local_e8);
    FUN_140003330(&local_a8,&local_e8,local_148);
    FUN_140003330(&local_c8,&local_a8,local_168);
    FUN_140003330(local_358,&local_c8,&local_108);
    if (7 < local_b0) {
      uVar6 = local_b0 * 2 + 2;
      pcVar8 = local_c8;
      if (0xfff < uVar6) {
        pcVar8 = *(char **)(local_c8 + -8);
        if ((char *)0x1f < local_c8 + (-8 - (longlong)pcVar8)) goto LAB_14022e985;
        uVar6 = local_b0 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pcVar8,uVar6);
    }
    local_b8 = 0;
    local_b0 = 7;
    local_c8 = (char *)((ulonglong)local_c8 & 0xffffffffffff0000);
    if (7 < local_90) {
      uVar6 = local_90 * 2 + 2;
      pcVar8 = local_a8;
      if (0xfff < uVar6) {
        pcVar8 = *(char **)(local_a8 + -8);
        if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar8)) goto LAB_14022e985;
        uVar6 = local_90 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pcVar8,uVar6);
    }
    local_98 = 0;
    local_90 = 7;
    local_a8 = (char *)((ulonglong)local_a8 & 0xffffffffffff0000);
    if (7 < local_d0) {
      uVar6 = local_d0 * 2 + 2;
      pcVar8 = local_e8;
      if (0xfff < uVar6) {
        pcVar8 = *(char **)(local_e8 + -8);
        if ((char *)0x1f < local_e8 + (-8 - (longlong)pcVar8)) goto LAB_14022e985;
        uVar6 = local_d0 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pcVar8,uVar6);
    }
    if (7 < local_130) {
      uVar6 = local_130 * 2 + 2;
      lVar11 = local_148[0];
      if (0xfff < uVar6) {
        lVar11 = *(longlong *)(local_148[0] + -8);
        if (0x1f < (ulonglong)((local_148[0] + -8) - lVar11)) goto LAB_14022e985;
        uVar6 = local_130 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar11,uVar6);
    }
    if (7 < local_150) {
      uVar6 = local_150 * 2 + 2;
      lVar11 = local_168[0];
      if (0xfff < uVar6) {
        lVar11 = *(longlong *)(local_168[0] + -8);
        if (0x1f < (ulonglong)((local_168[0] + -8) - lVar11)) goto LAB_14022e985;
        uVar6 = local_150 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar11,uVar6);
    }
    if (7 < local_f0) {
      uVar6 = local_f0 * 2 + 2;
      pcVar8 = local_108;
      if (0xfff < uVar6) {
        pcVar8 = *(char **)(local_108 + -8);
        if ((char *)0x1f < local_108 + (-8 - (longlong)pcVar8)) goto LAB_14022e985;
        uVar6 = local_f0 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pcVar8,uVar6);
    }
    if (7 < local_170) {
      uVar6 = local_170 * 2 + 2;
      lVar11 = local_188[0];
      if (0xfff < uVar6) {
        lVar11 = *(longlong *)(local_188[0] + -8);
        if (0x1f < (ulonglong)((local_188[0] + -8) - lVar11)) goto LAB_14022e985;
        uVar6 = local_170 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar11,uVar6);
    }
    if (7 < local_110) {
      uVar6 = local_110 * 2 + 2;
      pcVar8 = local_128;
      if (0xfff < uVar6) {
        pcVar8 = *(char **)(local_128 + -8);
        if ((char *)0x1f < local_128 + (-8 - (longlong)pcVar8)) goto LAB_14022e985;
        uVar6 = local_110 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pcVar8,uVar6);
    }
    if (7 < local_30) {
      uVar6 = local_30 * 2 + 2;
      lVar11 = local_48[0];
      if (0xfff < uVar6) {
        lVar11 = *(longlong *)(local_48[0] + -8);
        if (0x1f < (ulonglong)((local_48[0] + -8) - lVar11)) goto LAB_14022e985;
        uVar6 = local_30 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar11,uVar6);
    }
    pppppppcVar9 = &local_398;
    if (7 < local_380) {
      pppppppcVar9 = (char *******)local_398;
    }
    iVar4 = FUN_140b65f14(pppppppcVar9,local_48,3);
    pppppppcVar9 = &local_398;
    if (iVar4 < 0x40) {
      if (iVar4 - 2U < 2) goto LAB_14022e6a4;
      if (iVar4 != 0) {
        if (iVar4 != 0x35) goto LAB_14022e99e;
        goto LAB_14022e6a4;
      }
      if ((((local_38 & 0x400) != 0) && ((local_34 == -0x5ffffffd || (local_34 == -0x5ffffff4)))) ||
         ((local_38 & 0x10) == 0)) goto LAB_14022e6a4;
      pppppppcVar12 = &local_398;
LAB_14022e96f:
      FUN_140003d50(&DAT_1416b8508,pppppppcVar12);
      bVar2 = false;
    }
    else {
      if (((iVar4 != 0x40) && (iVar4 != 0x7b)) && (iVar4 != 0x10b)) goto LAB_14022e99e;
LAB_14022e6a4:
      pppppppcVar9 = pppppppcVar12;
      if (7 < local_360) {
        pppppppcVar9 = (char *******)CONCAT62(uStack_376,local_378);
      }
      iVar4 = FUN_140b65f14(pppppppcVar9,local_48,3);
      pppppppcVar9 = pppppppcVar12;
      if (iVar4 < 0x40) {
        if (1 < iVar4 - 2U) {
          if (iVar4 == 0) {
            if ((((local_38 & 0x400) == 0) ||
                ((local_34 != -0x5ffffff4 && (local_34 != -0x5ffffffd)))) &&
               ((local_38 & 0x10) != 0)) goto LAB_14022e96f;
          }
          else if (iVar4 != 0x35) goto LAB_14022e99e;
        }
      }
      else if (((iVar4 != 0x40) && (iVar4 != 0x7b)) && (iVar4 != 0x10b)) goto LAB_14022e99e;
      ppppppcVar10 = local_358;
      if (7 < local_340) {
        ppppppcVar10 = (char ******)CONCAT62(local_358[0]._2_6_,local_358[0]._0_2_);
      }
      iVar4 = FUN_140b65f14(ppppppcVar10,local_48,3);
      if (iVar4 < 0x40) {
        if (1 < iVar4 - 2U) {
          if (iVar4 == 0) {
            if (((local_38 & 0x400) == 0) ||
               ((local_34 != -0x5ffffff4 && (local_34 != -0x5ffffffd)))) {
              bVar2 = true;
              pppppppcVar12 = (char *******)local_358;
              if ((local_38 & 0x10) != 0) goto LAB_14022e96f;
              goto LAB_14022e792;
            }
          }
          else {
            pppppppcVar9 = (char *******)local_358;
            if (iVar4 != 0x35) goto LAB_14022e99e;
          }
        }
      }
      else if (((iVar4 != 0x40) && (iVar4 != 0x7b)) &&
              (pppppppcVar9 = (char *******)local_358, iVar4 != 0x10b)) {
LAB_14022e99e:
                    /* WARNING: Subroutine does not return */
        FUN_14022eed0("status",iVar4,pppppppcVar9);
      }
      bVar2 = true;
    }
LAB_14022e792:
    if (7 < local_340) {
      lVar1 = CONCAT62(local_358[0]._2_6_,local_358[0]._0_2_);
      uVar6 = local_340 * 2 + 2;
      lVar11 = lVar1;
      if (0xfff < uVar6) {
        lVar11 = *(longlong *)(lVar1 + -8);
        if (0x1f < (ulonglong)((lVar1 + -8) - lVar11)) goto LAB_14022e985;
        uVar6 = local_340 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar11,uVar6);
    }
    local_348 = 0;
    local_340 = 7;
    local_358[0]._0_2_ = 0;
    if (7 < local_360) {
      lVar1 = CONCAT62(uStack_376,local_378);
      uVar6 = local_360 * 2 + 2;
      lVar11 = lVar1;
      if (0xfff < uVar6) {
        lVar11 = *(longlong *)(lVar1 + -8);
        if (0x1f < (ulonglong)((lVar1 + -8) - lVar11)) goto LAB_14022e985;
        uVar6 = local_360 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar11,uVar6);
    }
    local_368 = 0;
    local_360 = 7;
    local_378 = 0;
    if (7 < local_380) {
      uVar6 = local_380 * 2 + 2;
      pppppppcVar12 = (char *******)local_398;
      if (0xfff < uVar6) {
        pppppppcVar12 = (char *******)local_398[-1];
        if ((char *)0x1f < (char *)((longlong)local_398 + (-8 - (longlong)pppppppcVar12)))
        goto LAB_14022e985;
        uVar6 = local_380 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pppppppcVar12,uVar6);
    }
    if (bVar2) goto LAB_14022e895;
  }
  else {
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 7;
LAB_14022e895:
    _File = (FILE *)__acrt_iob_func(2);
    fwrite("asset_path: no asset root found (set LUDUVO_ASSET_ROOT or install assets/ next to the exe)\n"
           ,0x5b,1,_File);
    DAT_1416b8508 = (undefined8 *)0x0;
    uRam00000001416b8510 = 0;
    _DAT_1416b8518 = 0;
    DAT_1416b8520 = 7;
  }
  if (7 < (ulonglong)local_88[3]) {
    uVar6 = local_88[3] * 2 + 2;
    lVar11 = local_88[0];
    if (0xfff < uVar6) {
      lVar11 = *(longlong *)(local_88[0] + -8);
      if (0x1f < (ulonglong)((local_88[0] + -8) - lVar11)) {
LAB_14022e985:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = local_88[3] * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(lVar11,uVar6);
  }
  return;
}

