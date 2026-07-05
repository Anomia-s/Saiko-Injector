/**
 * Function: proxy_authenticate
 * Address:  1401c7e20
 * Signature: undefined proxy_authenticate(void)
 * Body size: 3667 bytes
 */


/* WARNING: Type propagation algorithm not settling */

ulonglong proxy_authenticate(longlong param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *******pppppppuVar4;
  int ******ppppppiVar5;
  undefined8 ******ppppppuVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *******pppppppuVar9;
  char *_Src;
  size_t sVar10;
  longlong lVar11;
  int *******_Dst;
  int *******pppppppiVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  bool bVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  longlong local_228 [2];
  undefined8 local_218;
  int *******local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 *local_1f8;
  uint local_1f0;
  longlong local_1e8;
  undefined1 local_1e0;
  longlong *local_1d8;
  longlong *plStack_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  longlong local_190;
  longlong lStack_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined1 local_150;
  void *local_148;
  longlong lStack_140;
  longlong local_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined7 uStack_107;
  longlong local_100;
  longlong lStack_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  void *local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  int *******local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 *******local_a8;
  undefined8 uStack_a0;
  size_t local_98;
  ulonglong uStack_90;
  undefined8 *******local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  _Src = "WWW-Authenticate";
  if (param_3 != 0) {
    _Src = "Proxy-Authenticate";
  }
  puVar20 = (undefined8 *)((ulonglong)param_3 * 2 + 0x10);
  local_218 = param_2;
  pvVar3 = (void *)FUN_140b65d30(0x20);
  memcpy(pvVar3,_Src,(size_t)puVar20);
  *(undefined1 *)((longlong)pvVar3 + (ulonglong)param_3 * 2 + 0x10) = 0;
  uVar23 = (ulonglong)((uint)puVar20 & 2);
  uVar16 = 0;
  lVar13 = 0;
  do {
    uVar16 = (ulonglong)
             (byte)"tion establishedConnection estab"
                   [(ulonglong)*(byte *)((longlong)pvVar3 + lVar13 + 3) + 0x20] ^
             ((ulonglong)
              (byte)"tion establishedConnection estab"
                    [(ulonglong)*(byte *)((longlong)pvVar3 + lVar13 + 2) + 0x20] ^
             ((ulonglong)
              (byte)"tion establishedConnection estab"
                    [(ulonglong)*(byte *)((longlong)pvVar3 + lVar13 + 1) + 0x20] ^
             ((ulonglong)
              (byte)"tion establishedConnection estab"
                    [(ulonglong)*(byte *)((longlong)pvVar3 + lVar13) + 0x20] ^ uVar16 * 0x21) * 0x21
             ) * 0x21) * 0x21 & 0x3ffffffffffffff;
    lVar13 = lVar13 + 4;
  } while (lVar13 != 0x10);
  if (uVar23 != 0) {
    uVar17 = 0;
    do {
      uVar16 = (ulonglong)
               (byte)"tion establishedConnection estab"
                     [(ulonglong)*(byte *)((longlong)pvVar3 + uVar17 + 0x10) + 0x20] ^
               uVar16 * 0x21 & 0x3ffffffffffffff;
      uVar17 = uVar17 + 1;
    } while (uVar23 != uVar17);
  }
  plVar21 = *(longlong **)(param_1 + 0x50);
  lVar13 = (uVar16 & *(ulonglong *)(param_1 + 0x78)) * 0x10;
  plVar18 = *(longlong **)(*(longlong *)(param_1 + 0x60) + lVar13);
  if (plVar18 == plVar21) {
LAB_1401c7fe6:
    thunk_FUN_140b68ba8(pvVar3,0x20);
    if (plVar18 != plVar21) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x140) < DAT_1416b4df0) && (FUN_140b6864c(&DAT_1416b4df0), DAT_1416b4df0 == -1))
      {
        FUN_1401d1520(&DAT_1416b4dc8,"(?:(?:,\\s*)?(.+?)=(?:\"(.*?)\"|([^,]*)))",1);
        atexit(FUN_1401e0050);
        _Init_thread_footer(&DAT_1416b4df0);
      }
      uStack_170 = 0;
      pppppppuVar4 = (undefined8 *******)FUN_140b65d30(0x20);
      uStack_160 = 0x1f;
      local_178 = pppppppuVar4;
      local_168 = puVar20;
      memcpy(pppppppuVar4,_Src,(size_t)puVar20);
      *(undefined1 *)((longlong)pppppppuVar4 + (longlong)puVar20) = 0;
      uVar23 = 0;
      pppppppuVar4 = &local_88;
      FUN_1401ddfa0(param_1,pppppppuVar4,&local_178,&DAT_1413a2ad6,0);
      if (0xf < uStack_160) {
        uVar16 = uStack_160 + 1;
        pppppppuVar9 = local_178;
        if (0xfff < uVar16) {
          pppppppuVar9 = (undefined8 *******)local_178[-1];
          if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)pppppppuVar9)))
          goto LAB_1401c8c0f;
          uVar16 = uStack_160 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar9,uVar16);
      }
      bVar22 = true;
      if (CONCAT44(uStack_74,local_78) != 0) {
        if (0xf < CONCAT44(uStack_6c,uStack_70)) {
          pppppppuVar4 = local_88;
        }
        lVar11 = CONCAT44(uStack_74,local_78) + (longlong)pppppppuVar4;
        lVar13 = thunk_FUN_140b66da0(pppppppuVar4,lVar11,0x20);
        uVar16 = lVar13 - (longlong)pppppppuVar4;
        if (uVar16 != 0xffffffffffffffff && lVar13 != lVar11) {
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = (int *******)0x0;
          uStack_c0 = 0;
          uVar17 = CONCAT44(uStack_74,local_78);
          if (uVar16 <= CONCAT44(uStack_74,local_78)) {
            uVar17 = uVar16;
          }
          pppppppuVar4 = local_88;
          if (CONCAT44(uStack_6c,uStack_70) < 0x10) {
            pppppppuVar4 = &local_88;
          }
          if ((longlong)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
            string_too_long();
          }
          if (uVar17 < 0x10) {
            uStack_b0 = 0xf;
            local_b8 = uVar17;
            memcpy(&local_c8,pppppppuVar4,uVar17);
            *(undefined1 *)((longlong)&local_c8 + uVar17) = 0;
            pppppppiVar12 = (int *******)&local_c8;
            if (0xf < uStack_b0) {
              pppppppiVar12 = local_c8;
            }
            _Dst = local_c8;
            uVar17 = local_b8;
            if (local_b8 == 6) goto LAB_1401c8268;
LAB_1401c81b2:
            bVar22 = true;
            if (uVar17 == 5) {
              bVar22 = *(char *)((longlong)pppppppiVar12 + 4) != 'c' ||
                       *(int *)pppppppiVar12 != 0x69736142;
              pppppppuVar4 = (undefined8 *******)0x0;
            }
          }
          else {
            uVar19 = uVar17 | 0xf;
            uVar15 = 0x16;
            if (0x16 < uVar19) {
              uVar15 = uVar19;
            }
            if (uVar19 < 0xfff) {
              _Dst = (int *******)FUN_140b65d30(uVar15 + 1);
            }
            else {
              ppppppiVar5 = (int ******)FUN_140b65d30(uVar15 + 0x28);
              _Dst = (int *******)((longlong)ppppppiVar5 + 0x27U & 0xffffffffffffffe0);
              _Dst[-1] = ppppppiVar5;
            }
            local_c8 = _Dst;
            local_b8 = uVar17;
            uStack_b0 = uVar15;
            memcpy(_Dst,pppppppuVar4,uVar17);
            *(undefined1 *)((longlong)_Dst + uVar17) = 0;
            pppppppiVar12 = _Dst;
            if (uVar17 != 6) goto LAB_1401c81b2;
LAB_1401c8268:
            bVar22 = true;
            if (*(short *)((longlong)pppppppiVar12 + 4) == 0x7473 &&
                *(int *)pppppppiVar12 == 0x65676944) {
              local_168 = (undefined8 *)0x0;
              uStack_160 = 0;
              local_178 = (undefined8 *******)0x0;
              uStack_170 = 0;
              if (CONCAT44(uStack_74,local_78) <= uVar16) {
                    /* WARNING: Subroutine does not return */
                invalid_string_position();
              }
              uVar17 = CONCAT44(uStack_6c,uStack_70);
              pppppppuVar4 = local_88;
              if (uVar17 < 0x10) {
                pppppppuVar4 = &local_88;
              }
              puVar20 = (undefined8 *)(CONCAT44(uStack_74,local_78) - (uVar16 + 1));
              if ((longlong)puVar20 < 0) {
                    /* WARNING: Subroutine does not return */
                string_too_long();
              }
              pvVar3 = (void *)((longlong)pppppppuVar4 + uVar16 + 1);
              if (puVar20 < (undefined8 *)0x10) {
                uStack_160 = 0xf;
                local_168 = puVar20;
                memcpy(&local_178,pvVar3,(size_t)puVar20);
                *(undefined1 *)((longlong)&local_178 + (longlong)puVar20) = 0;
              }
              else {
                uVar17 = (ulonglong)puVar20 | 0xf;
                uVar16 = 0x16;
                if (0x16 < uVar17) {
                  uVar16 = uVar17;
                }
                if (uVar17 < 0xfff) {
                  pppppppuVar4 = (undefined8 *******)FUN_140b65d30(uVar16 + 1);
                }
                else {
                  ppppppuVar6 = (undefined8 ******)FUN_140b65d30(uVar16 + 0x28);
                  pppppppuVar4 = (undefined8 *******)
                                 ((longlong)ppppppuVar6 + 0x27U & 0xffffffffffffffe0);
                  pppppppuVar4[-1] = ppppppuVar6;
                }
                local_178 = pppppppuVar4;
                local_168 = puVar20;
                uStack_160 = uVar16;
                memcpy(pppppppuVar4,pvVar3,(size_t)puVar20);
                *(undefined1 *)((longlong)pppppppuVar4 + (longlong)puVar20) = 0;
                uVar17 = CONCAT44(uStack_6c,uStack_70);
              }
              if (0xf < uVar17) {
                uVar16 = uVar17 + 1;
                pppppppuVar4 = local_88;
                if (0xfff < uVar16) {
                  pppppppuVar4 = (undefined8 *******)local_88[-1];
                  if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar4)))
                  goto LAB_1401c8c0f;
                  uVar16 = uVar17 + 0x28;
                }
                thunk_FUN_140b68ba8(pppppppuVar4,uVar16);
              }
              local_78 = (undefined4)local_168;
              uStack_74 = local_168._4_4_;
              uStack_70 = (uint)uStack_160;
              uStack_6c = uStack_160._4_4_;
              local_88 = local_178;
              lStack_80 = uStack_170;
              if (uStack_160 < 0x10) {
                local_178 = &local_88;
              }
              uStack_170 = (longlong)local_168 + (longlong)local_178;
              local_168 = &DAT_1416b4dc8;
              uStack_160 = (ulonglong)uStack_160._4_4_ << 0x20;
              local_158 = 0;
              local_150 = 0;
              local_118 = 0;
              uStack_110 = 0;
              local_108 = 0;
              local_100 = 0;
              lStack_f8 = 0;
              local_f0 = 0;
              local_148 = (void *)0x0;
              lStack_140 = 0;
              local_138 = 0;
              uStack_130 = 0;
              uStack_12f = 0;
              uStack_128 = 0;
              uStack_127 = 0;
              uStack_120 = 0;
              uVar23 = uVar23 & 0xffffffff00000000;
              cVar1 = FUN_1401e00e0(0,uStack_170,&local_158,&DAT_1416b4dc8,uVar23,local_178);
              if (cVar1 == '\0') {
                local_168 = (undefined8 *)0x0;
              }
              local_1f8 = local_168;
              local_1f0 = (uint)uStack_160;
              local_208 = (undefined4)local_178;
              uStack_204 = local_178._4_4_;
              uStack_200 = (undefined4)uStack_170;
              uStack_1fc = uStack_170._4_4_;
              local_1e8 = local_158;
              local_1e0 = local_150;
              local_1d8 = (longlong *)0x0;
              plStack_1d0 = (longlong *)0x0;
              local_1c8 = 0;
              lVar13 = lStack_140 - (longlong)local_148;
              if (lVar13 != 0) {
                uVar16 = (lStack_140 - (longlong)local_148 >> 3) * -0x5555555555555555;
                if (0xaaaaaaaaaaaaaaa < uVar16) {
                    /* WARNING: Subroutine does not return */
                  vector_too_long();
                }
                if (uVar16 < 0xab) {
                  plVar21 = (longlong *)FUN_140b65d30(lVar13);
                }
                else {
                  lVar11 = FUN_140b65d30(lVar13 + 0x27);
                  plVar21 = (longlong *)(lVar11 + 0x27U & 0xffffffffffffffe0);
                  plVar21[-1] = lVar11;
                }
                local_1c8 = lVar13 + (longlong)plVar21;
                sVar10 = lStack_140 - (longlong)local_148;
                local_1d8 = plVar21;
                plStack_1d0 = plVar21;
                memmove(plVar21,local_148,sVar10);
                plStack_1d0 = (longlong *)(sVar10 + (longlong)plVar21);
              }
              local_180 = CONCAT71(uStack_ef,local_f0);
              local_1c0 = CONCAT71(uStack_12f,uStack_130);
              uStack_1b8 = CONCAT71(uStack_127,uStack_128);
              local_1b0 = CONCAT71(uStack_11f,uStack_120);
              uStack_198 = CONCAT71(uStack_107,local_108);
              local_190 = local_100;
              lStack_188 = lStack_f8;
              local_1a0 = uStack_110;
              uStack_1a8 = local_118;
              local_210 = _Dst;
LAB_1401c8598:
              plVar21 = local_1d8;
              _Dst = local_210;
              if (local_1f8 != (undefined8 *)0x0) {
                uVar16 = ((longlong)plStack_1d0 - (longlong)local_1d8 >> 3) * -0x5555555555555555;
                plVar8 = local_1d8 + 5;
                plVar18 = local_1d8 + 3;
                if (uVar16 < 2) {
                  plVar8 = &local_180;
                  plVar18 = &local_190;
                }
                plVar7 = local_1d8 + 4;
                if (uVar16 < 2) {
                  plVar7 = &lStack_188;
                }
                uVar17 = *plVar18 - local_1e8;
                local_e8 = (void *)0x0;
                uStack_e0 = 0;
                local_d8 = 0;
                uStack_d0 = 0;
                uVar15 = CONCAT44(uStack_74,local_78) - uVar17;
                if (CONCAT44(uStack_74,local_78) < uVar17) {
                    /* WARNING: Subroutine does not return */
                  invalid_string_position();
                }
                uVar19 = *plVar7 - *plVar18;
                if (uVar15 < uVar19) {
                  uVar19 = uVar15;
                }
                if ((char)*plVar8 == '\0') {
                  uVar19 = 0;
                }
                pppppppuVar4 = &local_88;
                if (0xf < CONCAT44(uStack_6c,uStack_70)) {
                  pppppppuVar4 = local_88;
                }
                if ((longlong)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                  string_too_long();
                }
                if (uVar19 < 0x10) {
                  uStack_d0 = 0xf;
                  local_d8 = uVar19;
                  memcpy(&local_e8,(void *)((longlong)pppppppuVar4 + uVar17),uVar19);
                  *(undefined1 *)((longlong)&local_e8 + uVar19) = 0;
                }
                else {
                  uVar15 = uVar19 | 0xf;
                  uVar16 = uVar15;
                  if (uVar15 < 0x17) {
                    uVar16 = 0x16;
                  }
                  if (uVar15 < 0xfff) {
                    pvVar3 = (void *)FUN_140b65d30(uVar16 + 1);
                  }
                  else {
                    lVar13 = FUN_140b65d30(uVar16 + 0x28);
                    pvVar3 = (void *)(lVar13 + 0x27U & 0xffffffffffffffe0);
                    *(longlong *)((longlong)pvVar3 - 8) = lVar13;
                  }
                  local_e8 = pvVar3;
                  local_d8 = uVar19;
                  uStack_d0 = uVar16;
                  memcpy(pvVar3,(void *)((longlong)pppppppuVar4 + uVar17),uVar19);
                  *(undefined1 *)((longlong)pvVar3 + uVar19) = 0;
                  uVar16 = ((longlong)plStack_1d0 - (longlong)local_1d8 >> 3) * -0x5555555555555555;
                  plVar21 = local_1d8;
                }
                plVar8 = plVar21 + 8;
                plVar18 = plVar21 + 6;
                if (uVar16 < 3) {
                  plVar8 = &local_180;
                  plVar18 = &local_190;
                }
                plVar7 = plVar21 + 7;
                if (uVar16 < 3) {
                  plVar7 = &lStack_188;
                }
                if (((char)*plVar8 == '\0') || (uVar17 = *plVar7 - *plVar18, (longlong)uVar17 < 1))
                {
                  plVar8 = plVar21 + 0xb;
                  plVar18 = plVar21 + 9;
                  if (uVar16 < 4) {
                    plVar8 = &local_180;
                    plVar18 = &local_190;
                  }
                  plVar21 = plVar21 + 10;
                  if (uVar16 < 4) {
                    plVar21 = &lStack_188;
                  }
                  uVar16 = *plVar18 - local_1e8;
                  local_a8 = (undefined8 *******)0x0;
                  uStack_a0 = 0;
                  local_98 = 0;
                  uStack_90 = 0;
                  uVar15 = CONCAT44(uStack_74,local_78) - uVar16;
                  if (CONCAT44(uStack_74,local_78) < uVar16) {
                    /* WARNING: Subroutine does not return */
                    invalid_string_position();
                  }
                  uVar17 = *plVar21 - *plVar18;
                  if (uVar15 < uVar17) {
                    uVar17 = uVar15;
                  }
                  if ((char)*plVar8 == '\0') {
                    uVar17 = 0;
                  }
                  pppppppuVar4 = &local_88;
                  if (0xf < CONCAT44(uStack_6c,uStack_70)) {
                    pppppppuVar4 = local_88;
                  }
                  if ((longlong)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
                    string_too_long();
                  }
                  pvVar3 = (void *)((longlong)pppppppuVar4 + uVar16);
                  if (uVar17 < 0x10) goto LAB_1401c8859;
                  uVar15 = uVar17 | 0xf;
                  uVar16 = uVar15;
                  if (uVar15 < 0x17) {
                    uVar16 = 0x16;
                  }
                  if (0xffe < uVar15) {
                    ppppppuVar6 = (undefined8 ******)FUN_140b65d30(uVar16 + 0x28);
                    goto LAB_1401c88b6;
                  }
                  pppppppuVar4 = (undefined8 *******)FUN_140b65d30(uVar16 + 1);
LAB_1401c88df:
                  local_a8 = pppppppuVar4;
                  local_98 = uVar17;
                  uStack_90 = uVar16;
                  memcpy(pppppppuVar4,pvVar3,uVar17);
                  *(undefined1 *)((longlong)pppppppuVar4 + uVar17) = 0;
                }
                else {
                  uVar16 = *plVar18 - local_1e8;
                  local_a8 = (undefined8 *******)0x0;
                  uStack_a0 = 0;
                  local_98 = 0;
                  uStack_90 = 0;
                  uVar15 = CONCAT44(uStack_74,local_78) - uVar16;
                  if (CONCAT44(uStack_74,local_78) < uVar16) {
                    /* WARNING: Subroutine does not return */
                    invalid_string_position();
                  }
                  if (uVar15 < uVar17) {
                    uVar17 = uVar15;
                  }
                  pppppppuVar4 = &local_88;
                  if (0xf < CONCAT44(uStack_6c,uStack_70)) {
                    pppppppuVar4 = local_88;
                  }
                  pvVar3 = (void *)((longlong)pppppppuVar4 + uVar16);
                  if (0xf < uVar17) {
                    uVar15 = uVar17 | 0xf;
                    uVar16 = uVar15;
                    if (uVar15 < 0x17) {
                      uVar16 = 0x16;
                    }
                    if (uVar15 < 0xfff) {
                      pppppppuVar4 = (undefined8 *******)FUN_140b65d30(uVar16 + 1);
                    }
                    else {
                      ppppppuVar6 = (undefined8 ******)FUN_140b65d30(uVar16 + 0x28);
LAB_1401c88b6:
                      pppppppuVar4 = (undefined8 *******)
                                     ((longlong)ppppppuVar6 + 0x27U & 0xffffffffffffffe0);
                      pppppppuVar4[-1] = ppppppuVar6;
                    }
                    goto LAB_1401c88df;
                  }
LAB_1401c8859:
                  uStack_a0 = 0;
                  local_a8 = (undefined8 *******)0x0;
                  uStack_90 = 0xf;
                  local_98 = uVar17;
                  memcpy(&local_a8,pvVar3,uVar17);
                  *(undefined1 *)((longlong)&local_a8 + uVar17) = 0;
                }
                FUN_1401e2d70(local_218,local_228);
                sVar10 = local_98;
                pppppppuVar4 = (undefined8 *******)(local_228[0] + 0x40);
                if ((undefined8 ********)pppppppuVar4 != &local_a8) {
                  pppppppuVar9 = &local_a8;
                  if (0xf < uStack_90) {
                    pppppppuVar9 = local_a8;
                  }
                  if (*(ulonglong *)(local_228[0] + 0x58) < local_98) {
                    FUN_1400069b0(pppppppuVar4,local_98);
                  }
                  else {
                    if (0xf < *(ulonglong *)(local_228[0] + 0x58)) {
                      pppppppuVar4 = *(undefined8 ********)(local_228[0] + 0x40);
                    }
                    *(size_t *)(local_228[0] + 0x50) = local_98;
                    memmove(pppppppuVar4,pppppppuVar9,local_98);
                    *(undefined1 *)((longlong)pppppppuVar4 + sVar10) = 0;
                  }
                }
                if (0xf < uStack_90) {
                  uVar16 = uStack_90 + 1;
                  pppppppuVar4 = local_a8;
                  if (0xfff < uVar16) {
                    pppppppuVar4 = *(undefined8 ********)((longlong)local_a8 + 0xfffffffffffffff8);
                    if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pppppppuVar4)))
                    goto LAB_1401c8c0f;
                    uVar16 = uStack_90 + 0x28;
                  }
                  thunk_FUN_140b68ba8(pppppppuVar4,uVar16);
                }
                if (0xf < uStack_d0) {
                  uVar16 = uStack_d0 + 1;
                  pvVar3 = local_e8;
                  if (0xfff < uVar16) {
                    pvVar3 = *(void **)((longlong)local_e8 + -8);
                    if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar3)))
                    goto LAB_1401c8c0f;
                    uVar16 = uStack_d0 + 0x28;
                  }
                  thunk_FUN_140b68ba8(pvVar3,uVar16);
                }
                uVar24 = (undefined4)(uVar23 >> 0x20);
                lVar13 = local_1d8[1];
                if (*local_1d8 != lVar13) {
                  uVar2 = local_1f0 | 0x100;
                  local_1f0 = uVar2;
                  goto LAB_1401c8a58;
                }
                if (CONCAT44(uStack_1fc,uStack_200) != *local_1d8) goto code_r0x0001401c8a9d;
                goto LAB_1401c8590;
              }
              if (local_1d8 != (longlong *)0x0) {
                uVar23 = local_1c8 - (longlong)local_1d8;
                if (0xfff < uVar23) {
                  plVar21 = (longlong *)local_1d8[-1];
                  if (0x1f < (ulonglong)((longlong)local_1d8 + (-8 - (longlong)plVar21)))
                  goto LAB_1401c8c0f;
                  uVar23 = uVar23 + 0x27;
                }
                thunk_FUN_140b68ba8(plVar21,uVar23);
              }
              if (local_148 != (void *)0x0) {
                uVar23 = local_138 - (longlong)local_148;
                pvVar3 = local_148;
                if (0xfff < uVar23) {
                  pvVar3 = *(void **)((longlong)local_148 + -8);
                  if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)pvVar3)))
                  goto LAB_1401c8c0f;
                  uVar23 = uVar23 + 0x27;
                }
                thunk_FUN_140b68ba8(pvVar3,uVar23);
              }
              pppppppuVar4 = (undefined8 *******)CONCAT71((int7)((ulonglong)&local_190 >> 8),1);
              bVar22 = false;
            }
          }
          if (0xf < uStack_b0) {
            uVar23 = uStack_b0 + 1;
            pppppppiVar12 = _Dst;
            if (0xfff < uVar23) {
              pppppppiVar12 = (int *******)_Dst[-1];
              if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pppppppiVar12)))
              goto LAB_1401c8c0f;
              uVar23 = uStack_b0 + 0x28;
            }
            thunk_FUN_140b68ba8(pppppppiVar12,uVar23);
          }
        }
      }
      uVar23 = CONCAT44(uStack_6c,uStack_70);
      if (0xf < uVar23) {
        uVar16 = uVar23 + 1;
        pppppppuVar9 = local_88;
        if (0xfff < uVar16) {
          pppppppuVar9 = (undefined8 *******)local_88[-1];
          if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar9))) {
LAB_1401c8c0f:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar16 = uVar23 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar9,uVar16);
      }
      if (!bVar22) goto LAB_1401c8bed;
    }
  }
  else {
    puVar14 = (undefined8 *)plVar18[4];
    while( true ) {
      if (puVar14 == puVar20) {
        if ((ulonglong)plVar18[5] < 0x10) {
          plVar8 = plVar18 + 2;
        }
        else {
          plVar8 = (longlong *)plVar18[2];
        }
        puVar14 = (undefined8 *)0x0;
        while ("tion establishedConnection estab"
               [(ulonglong)*(byte *)((longlong)plVar8 + (longlong)puVar14) + 0x20] ==
               "tion establishedConnection estab"
               [(ulonglong)*(byte *)((longlong)pvVar3 + (longlong)puVar14) + 0x20]) {
          puVar14 = (undefined8 *)((longlong)puVar14 + 1);
          if (puVar20 == puVar14) goto LAB_1401c7fe6;
        }
      }
      if (plVar18 == *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + lVar13)) break;
      plVar18 = (longlong *)*plVar18;
      puVar14 = (undefined8 *)plVar18[4];
    }
    thunk_FUN_140b68ba8(pvVar3,0x20);
  }
  pppppppuVar4 = (undefined8 *******)0x0;
LAB_1401c8bed:
  return (ulonglong)pppppppuVar4 & 0xffffff01;
code_r0x0001401c8a9d:
  uVar23 = CONCAT44(uVar24,local_1f0) | 0x60;
  cVar1 = FUN_1401e00e0(lVar13,CONCAT44(uStack_1fc,uStack_200),&local_1e8,local_1f8,uVar23,
                        CONCAT44(uStack_204,local_208));
  uVar24 = (undefined4)(uVar23 >> 0x20);
  if (cVar1 == '\0') {
    uVar2 = local_1f0 | 0x4100;
    local_1f0 = local_1f0 | 0x100;
LAB_1401c8a58:
    uVar23 = CONCAT44(uVar24,uVar2);
    cVar1 = FUN_1401e00e0(lVar13,CONCAT44(uStack_1fc,uStack_200),&local_1e8,local_1f8,uVar23,
                          CONCAT44(uStack_204,local_208));
    if (cVar1 == '\0') {
LAB_1401c8590:
      local_1f8 = (undefined8 *)0x0;
    }
  }
  goto LAB_1401c8598;
}

