/**
 * Function: uurlluduvo_protocol
 * Address:  140001da0
 * Signature: undefined uurlluduvo_protocol(void)
 * Body size: 4346 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 uurlluduvo_protocol(int param_1,longlong param_2)

{
  longlong *_Str;
  undefined8 *****pppppuVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  undefined4 uVar6;
  int iVar7;
  LSTATUS LVar8;
  long lVar9;
  ulonglong uVar10;
  undefined8 *******pppppppuVar11;
  undefined8 ******ppppppuVar12;
  HKEY *ppHVar13;
  HKEY pHVar14;
  size_t sVar15;
  undefined8 uVar16;
  char *pcVar17;
  HKEY pHVar18;
  char *pcVar19;
  char *pcVar20;
  int *piVar21;
  HKEY pHVar22;
  undefined8 ****ppppuVar23;
  undefined8 *****pppppuVar24;
  longlong lVar25;
  undefined8 *******pppppppuVar26;
  undefined8 *******pppppppuVar27;
  HKEY pHVar28;
  undefined8 *****pppppuVar29;
  undefined8 *****pppppuVar30;
  void *_Dst;
  uint uVar31;
  ulonglong uVar32;
  HKEY pHVar33;
  undefined8 local_368;
  undefined8 uStack_360;
  HKEY local_358;
  undefined8 *****pppppuStack_350;
  longlong local_160 [3];
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  HKEY local_110;
  undefined8 local_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  HKEY local_e8;
  char *local_e0;
  HKEY local_d8;
  int local_cc;
  undefined8 *******local_c8;
  undefined8 ****ppppuStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  HKEY local_a8;
  HKEY pHStack_a0;
  HKEY local_98;
  HKEY pHStack_90;
  HKEY local_88;
  undefined8 ******ppppppuStack_80;
  undefined8 ******local_78;
  undefined8 ******ppppppuStack_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_f0 = param_2;
  local_cc = param_1;
  DVar5 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&local_368,0x104);
  if (0xfffffefc < DVar5 - 0x104) {
    local_110 = (HKEY)&DAT_141349c55;
    local_108 = 10;
    uVar6 = FUN_140b6625c();
    FUN_140004460(&local_a8,uVar6,&local_110);
    FUN_140005140(local_160,&local_368);
    FUN_140003540(local_160,&local_c8);
    pppppppuVar11 = &local_c8;
    FUN_140003540(pppppppuVar11,&local_88);
    ppHVar13 = &local_88;
    FUN_140003330((HKEY)&local_110,ppHVar13,&local_a8);
    if ((undefined8 ******)0x7 < ppppppuStack_70) {
      uVar10 = (longlong)ppppppuStack_70 * 2 + 2;
      pHVar14 = local_88;
      if (0xfff < uVar10) {
        pHVar14 = *(HKEY *)(local_88 + -2);
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pHVar14))) goto LAB_140002e65;
        uVar10 = (longlong)ppppppuStack_70 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pHVar14,uVar10);
    }
    local_78 = (undefined8 ******)0x0;
    ppppppuStack_70 = (undefined8 ******)0x7;
    local_88 = (HKEY)((ulonglong)local_88 & 0xffffffffffff0000);
    if (7 < uStack_b0) {
      uVar10 = uStack_b0 * 2 + 2;
      pppppppuVar26 = local_c8;
      if (0xfff < uVar10) {
        pppppppuVar26 = (undefined8 *******)local_c8[-1];
        if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pppppppuVar26)))
        goto LAB_140002e65;
        uVar10 = uStack_b0 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pppppppuVar26,uVar10);
    }
    local_b8 = 0;
    uStack_b0 = 7;
    local_c8 = (undefined8 *******)((ulonglong)local_c8 & 0xffffffffffff0000);
    if (7 < local_148) {
      uVar10 = local_148 * 2 + 2;
      lVar25 = local_160[0];
      if (0xfff < uVar10) {
        lVar25 = *(longlong *)(local_160[0] + -8);
        if (0x1f < (ulonglong)((local_160[0] + -8) - lVar25)) goto LAB_140002e65;
        uVar10 = local_148 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar25,uVar10);
    }
    if ((HKEY)0x7 < pHStack_90) {
      uVar10 = (longlong)pHStack_90 * 2 + 2;
      pHVar14 = local_a8;
      if (0xfff < uVar10) {
        pHVar14 = *(HKEY *)(local_a8 + -2);
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pHVar14))) goto LAB_140002e65;
        uVar10 = (longlong)pHStack_90 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pHVar14,uVar10);
    }
    pHVar14 = (HKEY)&local_110;
    if (7 < local_f8) {
      pHVar14 = local_110;
    }
    iVar7 = FUN_140b65f14(pHVar14,(HKEY)&local_a8);
    if (iVar7 < 0x40) {
      if (1 < iVar7 - 2U) {
        if (iVar7 == 0) {
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = (undefined8 *******)0x0;
          ppppuStack_c0 = (undefined8 ****)0x0;
          pHVar14 = local_110;
          if (local_f8 < 8) {
            pHVar14 = (HKEY)&local_110;
          }
          if (0x7ffffffffffffffe < local_100) {
                    /* WARNING: Subroutine does not return */
            string_too_long();
          }
          if (local_100 < 8) {
            local_b8 = local_100;
            uStack_b0 = 7;
            local_c8 = *(undefined8 ********)pHVar14;
            ppppuStack_c0 = *(undefined8 *****)(pHVar14 + 2);
            if (local_100 != 7) goto LAB_1400021e0;
LAB_140002106:
            pppppppuVar11 = (undefined8 *******)FUN_1400067e0(&local_c8,1);
          }
          else {
            uVar10 = local_100 | 7;
            if (0x7ffffffffffffffe < uVar10) {
LAB_140002e8d:
                    /* WARNING: Subroutine does not return */
              std::bad_array_new_length::bad_array_new_length();
            }
            uVar32 = 10;
            if (10 < uVar10) {
              uVar32 = uVar10;
            }
            if (uVar10 < 0x7ff) {
              local_c8 = (undefined8 *******)FUN_140b65d30(uVar32 * 2 + 2);
            }
            else {
              if (0x7fffffffffffffeb < uVar10) goto LAB_140002e8d;
              ppppppuVar12 = (undefined8 ******)FUN_140b65d30(uVar32 * 2 + 0x29);
              local_c8 = (undefined8 *******)((longlong)ppppppuVar12 + 0x27U & 0xffffffffffffffe0);
              local_c8[-1] = ppppppuVar12;
            }
            local_b8 = local_100;
            uStack_b0 = uVar32;
            memcpy(local_c8,pHVar14,local_100 * 2 + 2);
            local_100 = local_b8;
            if (uStack_b0 == local_b8) goto LAB_140002106;
LAB_1400021e0:
            local_b8 = local_100 + 1;
            pppppppuVar26 = pppppppuVar11;
            if (7 < uStack_b0) {
              pppppppuVar26 = local_c8;
            }
            lVar25 = 1;
            if ((pppppppuVar26 < (undefined8 *******)0x1413a5710) &&
               ((wchar_t *)((longlong)L"\" \"%1\"" + 9) <
                (wchar_t *)((longlong)pppppppuVar26 + local_100 * 2))) {
              if (pppppppuVar26 < (undefined8 *******)0x1413a570e ||
                  (wchar_t *)((longlong)pppppppuVar26 + -0x1413a570e) == (wchar_t *)0x0) {
                lVar25 = 0;
              }
              else {
                lVar25 = (longlong)pppppppuVar26 + -0x1413a570e >> 1;
              }
            }
            pppppppuVar27 = local_c8;
            if (uStack_b0 < 8) {
              pppppppuVar27 = pppppppuVar11;
            }
            memmove((wchar_t *)((longlong)pppppppuVar27 + 2),pppppppuVar26,local_100 * 2 + 2);
            memcpy(pppppppuVar26,L"\"",lVar25 * 2);
            memcpy((wchar_t *)((longlong)pppppppuVar26 + lVar25 * 2),L"\" \"%1\"" + lVar25 + 6,
                   lVar25 * -2 + 2);
          }
          local_78 = pppppppuVar11[2];
          ppppppuStack_70 = pppppppuVar11[3];
          local_88 = (HKEY)*pppppppuVar11;
          ppppppuStack_80 = pppppppuVar11[1];
          pppppppuVar11[2] = (undefined8 ******)0x0;
          pppppppuVar11[3] = (undefined8 ******)0x7;
          *(wchar_t *)pppppppuVar11 = L'\0';
          ppppppuVar12 = local_78;
          if ((ulonglong)((longlong)ppppppuStack_70 - (longlong)local_78) < 6) {
            ppHVar13 = (HKEY *)FUN_1400042c0(&local_88,6);
          }
          else {
            local_78 = (undefined8 ******)((longlong)local_78 + 6);
            pHVar14 = (HKEY)ppHVar13;
            if ((undefined8 ******)0x7 < ppppppuStack_70) {
              pHVar14 = local_88;
            }
            *(undefined8 *)((longlong)&pHVar14->unused + (longlong)ppppppuVar12 * 2) =
                 0x25002200200022;
            *(undefined4 *)((longlong)(pHVar14 + 2) + (longlong)ppppppuVar12 * 2) = 0x220031;
            *(undefined2 *)((longlong)(pHVar14 + 3) + ppppppuVar12 * 2) = 0;
          }
          local_a8 = *ppHVar13;
          pHStack_a0 = ppHVar13[1];
          local_98 = ppHVar13[2];
          pHStack_90 = ppHVar13[3];
          ppHVar13[2] = (HKEY)0x0;
          ppHVar13[3] = (HKEY)0x7;
          *(undefined2 *)ppHVar13 = 0;
          if ((undefined8 ******)0x7 < ppppppuStack_70) {
            uVar10 = (longlong)ppppppuStack_70 * 2 + 2;
            pHVar14 = local_88;
            if (0xfff < uVar10) {
              pHVar14 = *(HKEY *)(local_88 + -2);
              if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pHVar14)))
              goto LAB_140002e65;
              uVar10 = (longlong)ppppppuStack_70 * 2 + 0x29;
            }
            thunk_FUN_140b68ba8(pHVar14,uVar10);
          }
          local_78 = (undefined8 ******)0x0;
          ppppppuStack_70 = (undefined8 ******)0x7;
          local_88 = (HKEY)((ulonglong)local_88 & 0xffffffffffff0000);
          if (7 < uStack_b0) {
            uVar10 = uStack_b0 * 2 + 2;
            pppppppuVar11 = local_c8;
            if (0xfff < uVar10) {
              pppppppuVar11 = (undefined8 *******)local_c8[-1];
              if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pppppppuVar11)))
              goto LAB_140002e65;
              uVar10 = uStack_b0 * 2 + 0x29;
            }
            thunk_FUN_140b68ba8(pppppppuVar11,uVar10);
          }
          local_88 = (HKEY)0x0;
          LVar8 = RegCreateKeyExW((HKEY)&DAT_ffffffff80000001,L"Software\\Classes\\luduvo",0,
                                  (LPWSTR)0x0,0,2,(LPSECURITY_ATTRIBUTES)0x0,&local_88,(LPDWORD)0x0)
          ;
          if (LVar8 == 0) {
            RegSetValueExW(local_88,(LPCWSTR)0x0,0,1,(BYTE *)L"URL:Luduvo Protocol",0x28);
            RegSetValueExW(local_88,L"URL Protocol",0,1,(BYTE *)L"",2);
            RegCloseKey(local_88);
            LVar8 = RegCreateKeyExW((HKEY)&DAT_ffffffff80000001,
                                    L"Software\\Classes\\luduvo\\shell\\open\\command",0,(LPWSTR)0x0
                                    ,0,2,(LPSECURITY_ATTRIBUTES)0x0,&local_88,(LPDWORD)0x0);
            if (LVar8 == 0) {
              pHVar14 = (HKEY)&local_a8;
              if ((HKEY)0x7 < pHStack_90) {
                pHVar14 = local_a8;
              }
              RegSetValueExW(local_88,(LPCWSTR)0x0,0,1,(BYTE *)pHVar14,(int)local_98 * 2 + 2);
              RegCloseKey(local_88);
            }
          }
          if ((HKEY)0x7 < pHStack_90) {
            uVar10 = (longlong)pHStack_90 * 2 + 2;
            pHVar14 = local_a8;
            if (0xfff < uVar10) {
              pHVar14 = *(HKEY *)(local_a8 + -2);
              if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pHVar14)))
              goto LAB_140002e65;
              uVar10 = (longlong)pHStack_90 * 2 + 0x29;
            }
            thunk_FUN_140b68ba8(pHVar14,uVar10);
          }
        }
        else if (iVar7 != 0x35) goto LAB_140002062;
      }
    }
    else if (((iVar7 != 0x40) && (iVar7 != 0x7b)) && (iVar7 != 0x10b)) {
LAB_140002062:
      local_88 = (HKEY)CONCAT44(local_88._4_4_,iVar7);
      ppppppuStack_80 = (undefined8 ******)&PTR_vftable_140dc1808;
                    /* WARNING: Subroutine does not return */
      FUN_140005380("exists",&local_88,&local_110);
    }
    if (7 < local_f8) {
      uVar10 = local_f8 * 2 + 2;
      pHVar14 = local_110;
      if (0xfff < uVar10) {
        pHVar14 = *(HKEY *)(local_110 + -2);
        if (0x1f < (ulonglong)((longlong)local_110 + (-8 - (longlong)pHVar14))) {
LAB_140002e65:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar10 = local_f8 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pHVar14,uVar10);
    }
  }
  local_130 = 10;
  local_128 = 0xf;
  local_140 = 0x6c2e746e65696c63;
  local_138 = 0x676f;
  local_120 = 1;
  time_log_level_message(&local_140);
  FUN_1400435d0();
  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
    FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dc1388);
  }
  thunk_FUN_140054900();
  thunk_FUN_140053e50("Luduvo",&DAT_14137a905,"com.luduvo.client");
  cVar4 = thunk_FUN_140051f00(0x20);
  lVar25 = DAT_14151e360;
  if (cVar4 == '\0') {
    if (7 < *(byte *)(DAT_14151e360 + 0x39)) {
      return 1;
    }
    local_368 = (void *)thunk_FUN_14004efd0();
    index_out_of_bounds(lVar25,&PTR_s__opt_actions_runner__work_Platfo_140dc13b0,&local_368);
    return 1;
  }
  pHVar14 = (HKEY)FUN_140b65d30(0x5a920);
  memset(pHVar14,0,0x5a920);
  local_d8 = pHVar14;
  FUN_140009490(pHVar14);
  local_88 = local_d8;
  local_c8 = (undefined8 *******)0x0;
  local_118 = 0;
  bVar2 = false;
  for (uVar31 = 1; pHVar14 = local_88, (int)uVar31 < local_cc; uVar31 = uVar31 + 1) {
    local_d8 = (HKEY)(ulonglong)uVar31;
    _Str = *(longlong **)(local_f0 + (longlong)local_d8 * 8);
    sVar15 = strlen((char *)_Str);
    pHVar14 = local_88;
    if ((sVar15 >> 1 | (ulonglong)((sVar15 & 1) != 0) << 0x3f) < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014000273b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar16 = (*(code *)(&DAT_140dc1b7c + *(int *)(&DAT_140dc1b7c + (sVar15 >> 1) * 4)))
                         (&DAT_140dc1b7c + *(int *)(&DAT_140dc1b7c + (sVar15 >> 1) * 4));
      return uVar16;
    }
    if ((char)*_Str != '-') {
      if ((8 < sVar15) && ((char)_Str[1] == '/' && *_Str == 0x2f3a6f767564756c)) {
        pcVar19 = (char *)((longlong)_Str + 9);
        pHVar33 = (HKEY)(sVar15 - 9);
        if ((pHVar33 == (HKEY)0x0) ||
           ((*(char *)((longlong)_Str + (sVar15 - 1)) == '/' &&
            (pHVar33 = (HKEY)(sVar15 - 10), pHVar33 == (HKEY)0x0)))) {
          pHVar33 = (HKEY)0x0;
LAB_140002893:
          pHVar18 = *(HKEY *)(pHVar14 + 6);
          pcVar20 = (char *)0x0;
          pHVar28 = (HKEY)0x0;
          pcVar17 = pcVar19;
LAB_14000289f:
          pHVar22 = pHVar14;
          if ((HKEY)0xf < pHVar18) {
            pHVar22 = *(HKEY *)pHVar14;
          }
          *(HKEY *)(pHVar14 + 4) = pHVar28;
          memmove(pHVar22,pcVar20,(size_t)pHVar28);
          *(char *)((longlong)&pHVar22->unused + (longlong)pHVar28) = '\0';
          if (pHVar33 == (HKEY)0x0) goto LAB_1400028f0;
LAB_1400028c6:
          pcVar19 = (char *)thunk_FUN_140b66da0(pcVar17,pcVar17 + (longlong)pHVar33,0x2f);
          pHVar18 = (HKEY)(pcVar19 + -(longlong)pcVar17);
          if (pcVar19 == pcVar17 + (longlong)pHVar33 || pHVar18 == (HKEY)0xffffffffffffffff)
          goto LAB_1400028f0;
          pHVar28 = pHVar18;
          if (pHVar33 < pHVar18) {
            pHVar28 = pHVar33;
          }
          pcVar19 = pcVar17 + (longlong)((longlong)&pHVar18->unused + 1);
          pHVar33 = (HKEY)((longlong)pHVar33 - (longlong)((longlong)&pHVar18->unused + 1));
          local_e8 = pHVar14 + 8;
          pHVar18 = *(HKEY *)(pHVar14 + 0xe);
          pcVar20 = pcVar17;
          if (pHVar28 <= pHVar18) goto LAB_1400028ff;
          FUN_1400069b0(local_e8,pHVar28);
        }
        else {
          pcVar17 = (char *)thunk_FUN_140b66da0(pcVar19,pcVar19 + (longlong)pHVar33,0x2f);
          pHVar18 = (HKEY)(pcVar17 + -(longlong)pcVar19);
          if (pcVar17 == pcVar19 + (longlong)pHVar33 || pHVar18 == (HKEY)0xffffffffffffffff)
          goto LAB_140002893;
          pHVar28 = pHVar18;
          if (pHVar33 < pHVar18) {
            pHVar28 = pHVar33;
          }
          pcVar17 = pcVar19 + (longlong)((longlong)&pHVar18->unused + 1);
          pHVar33 = (HKEY)((longlong)pHVar33 - (longlong)((longlong)&pHVar18->unused + 1));
          pHVar18 = *(HKEY *)(pHVar14 + 6);
          pcVar20 = pcVar19;
          if (pHVar28 <= pHVar18) goto LAB_14000289f;
          FUN_1400069b0(pHVar14,pHVar28);
          if (pHVar33 != (HKEY)0x0) goto LAB_1400028c6;
LAB_1400028f0:
          pHVar18 = *(HKEY *)(pHVar14 + 0xe);
          pHVar28 = (HKEY)0x0;
          pcVar20 = (char *)0x0;
          pcVar19 = pcVar17;
LAB_1400028ff:
          local_e8 = pHVar14 + 8;
          pHVar22 = local_e8;
          if ((HKEY)0xf < pHVar18) {
            pHVar22 = *(HKEY *)(pHVar14 + 8);
          }
          *(HKEY *)(pHVar14 + 0xc) = pHVar28;
          memmove(pHVar22,pcVar20,(size_t)pHVar28);
          *(char *)((longlong)&pHVar22->unused + (longlong)pHVar28) = '\0';
        }
        if ((*(undefined8 ******)(pHVar14 + 4) != (undefined8 *****)0x0) &&
           (*(undefined8 ******)(local_e8 + 4) != (undefined8 *****)0x0)) {
          if (pHVar33 == (HKEY)0x0) {
            local_e0 = (char *)0x0;
            pHVar33 = (HKEY)0x0;
            pHVar18 = (HKEY)0x0;
LAB_140002a82:
            pHStack_a0 = (HKEY)0x0;
            local_a8 = (HKEY)0x0;
            pHStack_90 = (HKEY)0xf;
            local_98 = pHVar18;
            memcpy(&local_a8,pcVar19,(size_t)pHVar18);
            *(char *)((longlong)&local_a8 + (longlong)pHVar18) = '\0';
            piVar21 = _errno();
          }
          else {
            pcVar17 = (char *)thunk_FUN_140b66da0(pcVar19,pcVar19 + (longlong)pHVar33,0x2f);
            pHVar28 = (HKEY)(pcVar17 + -(longlong)pcVar19);
            if (pHVar28 == (HKEY)0xffffffffffffffff || pcVar17 == pcVar19 + (longlong)pHVar33) {
              pcVar20 = (char *)0x0;
              pHVar18 = pHVar33;
              pHVar33 = (HKEY)0x0;
            }
            else {
              pHVar18 = pHVar28;
              if (pHVar33 < pHVar28) {
                pHVar18 = pHVar33;
              }
              pHVar33 = (HKEY)((longlong)pHVar33 - (longlong)((longlong)&pHVar28->unused + 1));
              pcVar20 = pcVar19 + (longlong)((longlong)&pHVar28->unused + 1);
              if (pcVar17 == pcVar19) {
                pcVar20 = (char *)0x0;
                pcVar19 = pcVar19 + (longlong)((longlong)&pHVar28->unused + 1);
                pHVar18 = pHVar33;
                pHVar33 = (HKEY)0x0;
              }
            }
            local_98 = (HKEY)0x0;
            pHStack_90 = (HKEY)0x0;
            local_a8 = (HKEY)0x0;
            pHStack_a0 = (HKEY)0x0;
            if ((longlong)pHVar18 < 0) {
                    /* WARNING: Subroutine does not return */
              string_too_long();
            }
            local_e0 = pcVar20;
            if (pHVar18 < (HKEY)0x10) goto LAB_140002a82;
            pHVar22 = (HKEY)((ulonglong)pHVar18 | 0xf);
            pHVar28 = pHVar22;
            if (pHVar22 < (HKEY)0x17) {
              pHVar28 = (HKEY)0x16;
            }
            if (pHVar22 < (HKEY)0xfff) {
              pHVar22 = (HKEY)FUN_140b65d30((undefined1 *)((longlong)&pHVar28->unused + 1));
            }
            else {
              ppppuVar23 = (undefined8 ****)FUN_140b65d30(pHVar28 + 10);
              pHVar22 = (HKEY)((longlong)ppppuVar23 + 0x27U & 0xffffffffffffffe0);
              *(undefined8 *****)(pHVar22 + -2) = ppppuVar23;
            }
            local_a8 = pHVar22;
            local_98 = pHVar18;
            pHStack_90 = pHVar28;
            memcpy(pHVar22,pcVar19,(size_t)pHVar18);
            *(char *)((longlong)&pHVar22->unused + (longlong)pHVar18) = '\0';
            piVar21 = _errno();
          }
          pHVar18 = (HKEY)&local_a8;
          if ((HKEY)0xf < pHStack_90) {
            pHVar18 = local_a8;
          }
          *piVar21 = 0;
          lVar9 = strtol((char *)pHVar18,(char **)&local_110,10);
          if (pHVar18 != local_110) {
            if (*piVar21 == 0x22) {
                    /* WARNING: Subroutine does not return */
              std::_Xout_of_range("stoi argument out of range");
            }
            *(short *)&pHVar14[0x18].unused = (short)lVar9;
            if ((HKEY)0xf < pHStack_90) {
              pHVar18 = (HKEY)((longlong)&pHStack_90->unused + 1);
              pHVar28 = local_a8;
              if ((HKEY)0xfff < pHVar18) {
                pHVar28 = *(HKEY *)(local_a8 + -2);
                if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pHVar28)))
                goto LAB_140002e65;
                pHVar18 = pHStack_90 + 10;
              }
              thunk_FUN_140b68ba8(pHVar28,pHVar18);
            }
            if (pHVar33 != (HKEY)0x0) {
              local_358 = (HKEY)0x0;
              pppppuStack_350 = (undefined8 *****)0x0;
              local_368 = (void *)0x0;
              uStack_360 = 0;
              if ((longlong)pHVar33 < 0) {
                    /* WARNING: Subroutine does not return */
                string_too_long();
              }
              if (pHVar33 < (HKEY)0x10) {
                pppppuStack_350 = (undefined8 *****)0xf;
                local_358 = pHVar33;
                memcpy(&local_368,local_e0,(size_t)pHVar33);
                *(char *)((longlong)&local_368 + (longlong)pHVar33) = '\0';
                pppppuVar30 = *(undefined8 ******)(pHVar14 + 0x16);
              }
              else {
                pppppuVar24 = (undefined8 *****)((ulonglong)pHVar33 | 0xf);
                pppppuVar30 = pppppuVar24;
                if (pppppuVar24 < (undefined8 *****)0x17) {
                  pppppuVar30 = (undefined8 *****)0x16;
                }
                if (pppppuVar24 < (undefined8 *****)0xfff) {
                  _Dst = (void *)FUN_140b65d30((longlong)pppppuVar30 + 1);
                }
                else {
                  lVar25 = FUN_140b65d30(pppppuVar30 + 5);
                  _Dst = (void *)(lVar25 + 0x27U & 0xffffffffffffffe0);
                  *(longlong *)((longlong)_Dst - 8) = lVar25;
                }
                local_368 = _Dst;
                local_358 = pHVar33;
                pppppuStack_350 = pppppuVar30;
                memcpy(_Dst,local_e0,(size_t)pHVar33);
                *(char *)((longlong)_Dst + (longlong)pHVar33) = '\0';
                pppppuVar30 = *(undefined8 ******)(pHVar14 + 0x16);
              }
              if ((undefined8 *****)0xf < pppppuVar30) {
                pppppuVar1 = *(undefined8 ******)(pHVar14 + 0x10);
                pppppuVar24 = (undefined8 *****)((longlong)pppppuVar30 + 1);
                pppppuVar29 = pppppuVar1;
                if ((undefined8 *****)0xfff < pppppuVar24) {
                  pppppuVar29 = (undefined8 *****)pppppuVar1[-1];
                  if (0x1f < (ulonglong)((longlong)pppppuVar1 + (-8 - (longlong)pppppuVar29)))
                  goto LAB_140002e65;
                  pppppuVar24 = pppppuVar30 + 5;
                }
                thunk_FUN_140b68ba8(pppppuVar29,pppppuVar24);
              }
              *(HKEY *)(pHVar14 + 0x14) = local_358;
              *(undefined8 ******)(pHVar14 + 0x16) = pppppuStack_350;
              pHVar14[0x10].unused = (int)local_368;
              pHVar14[0x11].unused = local_368._4_4_;
              pHVar14[0x12].unused = (int)uStack_360;
              pHVar14[0x13].unused = uStack_360._4_4_;
            }
            bVar2 = true;
            if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
              FUN_140b53920(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dc14a0,local_e8
                           );
            }
            goto LAB_1400026f0;
          }
          std::_Xinvalid_argument("invalid stoi argument");
          goto LAB_140002e65;
        }
      }
      local_c8 = *(undefined8 ********)(local_f0 + (longlong)local_d8 * 8);
      bVar2 = true;
      pHVar14 = local_88;
      break;
    }
LAB_1400026f0:
  }
  local_88 = pHVar14;
  if (local_c8 == (undefined8 *******)0x0) {
    if (((~(byte)local_118 & 1) == 0 && !bVar2) &&
       (*(char *)((longlong)&pHVar14[0x18].unused + 2) == '\0')) {
      if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
        FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dc1400);
      }
      *(undefined1 *)((longlong)&pHVar14[0x18].unused + 2) = 1;
    }
    cVar4 = https_apiluduvocom(pHVar14,local_cc,local_f0);
    if (cVar4 == '\0') {
      if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
        FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dc1428);
      }
      goto LAB_140002ede;
    }
    while ((char)pHVar14[0x16a17].unused != '\0') {
      while (cVar4 = thunk_FUN_140052ac0(&local_368), cVar4 != '\0') {
        if ((int)local_368 == 0x100) {
          uVar16 = 0;
          bVar3 = true;
          bVar2 = true;
          pHVar14 = local_88;
          goto joined_r0x000140002ef5;
        }
        FUN_140059e40(pHVar14,&local_368);
      }
      FUN_14005a510(pHVar14);
    }
    uVar16 = 0;
    bVar3 = true;
  }
  else {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dc13d8,&local_c8)
      ;
    }
LAB_140002ede:
    uVar16 = 1;
    bVar3 = false;
    bVar2 = false;
    pHVar14 = local_88;
joined_r0x000140002ef5:
    local_88 = (HKEY)0x0;
    if (pHVar14 == (HKEY)0x0) goto LAB_140002f0c;
  }
  bVar2 = bVar3;
  local_88 = (HKEY)0x0;
  FUN_140059240(pHVar14);
  thunk_FUN_140b68ba8(pHVar14,0x5a920);
LAB_140002f0c:
  FUN_140043620();
  thunk_FUN_140052d00();
  if ((bVar2) && (*(byte *)(DAT_14151e360 + 0x39) < 5)) {
    FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dc1450);
  }
  pHVar14 = local_88;
  if (local_88 != (HKEY)0x0) {
    FUN_140059240(local_88);
    thunk_FUN_140b68ba8(pHVar14,0x5a920);
  }
  return uVar16;
}

