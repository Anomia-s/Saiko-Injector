/**
 * Function: create_directories
 * Address:  1402baa60
 * Signature: undefined __thiscall create_directories(void * this)
 * Body size: 5245 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void __thiscall create_directories(void *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  char *_Str;
  size_t sVar11;
  byte ******ppppppbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *******pppppppuVar17;
  ulonglong uVar18;
  _Iosb<int> *p_Var19;
  _Iosb<int> _Var20;
  ulonglong uVar21;
  byte *******pppppppbVar22;
  byte bVar23;
  ulonglong uVar24;
  _Iosb<int> _Var25;
  uint uVar26;
  byte *******pppppppbVar27;
  undefined8 *******pppppppuVar28;
  _Iosb<int> *in_stack_fffffffffffffd38;
  undefined8 local_2b0;
  basic_ios<char,std::char_traits<char>_> local_2a8;
  _Iosb<int> local_298;
  ulonglong uStack_290;
  longlong *local_288;
  longlong *local_268;
  int *local_250;
  undefined1 local_230 [12];
  char local_224;
  longlong local_220;
  longlong local_218;
  int local_210;
  ios_base local_200 [6];
  uint local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 ******local_188;
  undefined8 ******ppppppuStack_180;
  undefined8 *local_170;
  _Iosb<int> local_168;
  undefined8 uStack_160;
  longlong local_158;
  ulonglong local_150;
  undefined8 *******local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  ulonglong uStack_130;
  undefined8 local_120;
  _Iosb<int> local_118;
  _Iosb<int> _Stack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *local_f8;
  uint local_ec;
  byte *******local_e8;
  undefined8 uStack_e0;
  size_t local_d8;
  ulonglong uStack_d0;
  _Iosb<int> local_c8;
  longlong lStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 *******local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  _Iosb<int> local_88;
  undefined **ppuStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  puVar10 = *(undefined8 **)((longlong)this + 0x10);
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  if ((puVar10 != puVar1) && (*(longlong *)((longlong)this + 0xf0) != 0)) {
    local_ec = 0;
    local_f8 = this;
    while (puVar10 != puVar1) {
      uVar2 = *puVar10;
      local_170 = puVar10;
      cVar6 = FUN_1400b9b40(*(undefined8 *)this,uVar2,DAT_14151f7a0);
      if (cVar6 == '\0') {
        local_2b0 = uVar2;
        _Str = (char *)FUN_1400ba4f0(*(undefined8 *)this,uVar2,DAT_14151f5f8);
        if (_Str == (char *)0x0) {
          uStack_e0 = 0;
          local_d8 = 6;
          uStack_d0 = 0xf;
          local_e8 = (byte *******)0x747069726353;
          local_a8 = (undefined8 *******)0x0;
          uStack_a0 = 0;
          local_98 = 0;
          local_90 = 0xf;
LAB_1402bac15:
          local_90 = 0xf;
          uStack_a0 = 0;
          local_a8 = (undefined8 *******)0x0;
          sVar11 = local_d8;
        }
        else {
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = (byte *******)0x0;
          uStack_e0 = 0;
          sVar11 = strlen(_Str);
          if ((longlong)sVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            string_too_long();
          }
          if (sVar11 < 0x10) {
            uStack_d0 = 0xf;
            local_d8 = sVar11;
            memcpy(&local_e8,_Str,sVar11);
            *(undefined1 *)((longlong)&local_e8 + sVar11) = 0;
            local_a8 = (undefined8 *******)0x0;
            uStack_a0 = 0;
            local_98 = 0;
            local_90 = 0xf;
            sVar11 = local_d8;
            if (local_d8 < 0x10) goto LAB_1402bac15;
          }
          else {
            uVar18 = sVar11 | 0xf;
            uVar13 = 0x16;
            if (0x16 < uVar18) {
              uVar13 = uVar18;
            }
            if (uVar18 < 0xfff) {
              pppppppbVar27 = (byte *******)FUN_140b65d30(uVar13 + 1);
            }
            else {
              ppppppbVar12 = (byte ******)FUN_140b65d30(uVar13 + 0x28);
              pppppppbVar27 = (byte *******)((longlong)ppppppbVar12 + 0x27U & 0xffffffffffffffe0);
              pppppppbVar27[-1] = ppppppbVar12;
            }
            local_e8 = pppppppbVar27;
            local_d8 = sVar11;
            uStack_d0 = uVar13;
            memcpy(pppppppbVar27,_Str,sVar11);
            *(byte *)((longlong)pppppppbVar27 + sVar11) = 0;
          }
          local_90 = 0xf;
          local_98 = 0;
          uStack_a0 = 0;
          local_a8 = (undefined8 *******)0x0;
          FUN_140006520(&local_a8,sVar11);
          local_98 = 0;
        }
        pppppppbVar27 = (byte *******)&local_e8;
        if (0xf < uStack_d0) {
          pppppppbVar27 = local_e8;
        }
        local_98 = 0;
        pppppppbVar22 = (byte *******)((longlong)pppppppbVar27 + sVar11);
        for (; pppppppbVar27 != pppppppbVar22;
            pppppppbVar27 = (byte *******)((longlong)pppppppbVar27 + 1)) {
          bVar23 = *(byte *)pppppppbVar27;
          iVar7 = isalnum((uint)bVar23);
          uVar13 = local_98;
          if (((iVar7 == 0) && (bVar23 != 0x5f)) && (bVar23 != 0x2d)) {
            bVar23 = 0x5f;
            if (local_98 < local_90) {
LAB_1402bac7d:
              local_98 = local_98 + 1;
              pppppppuVar17 = &local_a8;
              if (0xf < local_90) {
                pppppppuVar17 = local_a8;
              }
              *(byte *)((longlong)pppppppuVar17 + uVar13) = bVar23;
              *(undefined1 *)((longlong)pppppppuVar17 + uVar13 + 1) = 0;
            }
            else {
              FUN_140006670(&local_a8,1);
            }
          }
          else {
            if (local_98 < local_90) goto LAB_1402bac7d;
            FUN_140006670(&local_a8,1);
          }
        }
        if (local_98 == 0) {
          if (local_90 < 6) {
            FUN_1400069b0(&local_a8,6);
          }
          else {
            pppppppuVar17 = &local_a8;
            if (0xf < local_90) {
              pppppppuVar17 = local_a8;
            }
            local_98 = 6;
            *(undefined2 *)((longlong)pppppppuVar17 + 4) = 0x7470;
            *(undefined4 *)pppppppuVar17 = 0x69726353;
            *(undefined1 *)((longlong)pppppppuVar17 + 6) = 0;
          }
        }
        local_120 = *(undefined8 *)((longlong)this + 0xf0);
        local_2a8.vftablePtr = (basic_ios<char,std::char_traits<char>_>_vftable *)0x141332299;
        local_2a8._Iosb<int> = (_Iosb<int>)0x7;
        uVar8 = FUN_140b6625c();
        FUN_140004460(&local_c8,uVar8,&local_2a8);
        FUN_140003330(&local_2a8,local_120,&local_c8);
        local_88 = (_Iosb<int>)((ulonglong)local_88 & 0xffffffff00000000);
        ppuStack_80 = &PTR_vftable_140dc1808;
        FUN_14003d9c0(&local_2a8,&local_88);
        if (local_88._0_4_ != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140005380("create_directories",&local_88,&local_2a8);
        }
        if (7 < uStack_290) {
          uVar13 = uStack_290 * 2 + 2;
          _Var25 = (_Iosb<int>)local_2a8.vftablePtr;
          if (0xfff < uVar13) {
            _Var25 = *(_Iosb<int> *)((longlong)local_2a8.vftablePtr + -8);
            if ((char *)0x1f < (char *)((longlong)local_2a8.vftablePtr + (-8 - (longlong)_Var25)))
            goto LAB_1402bbeaa;
            uVar13 = uStack_290 * 2 + 0x29;
          }
          thunk_FUN_140b68ba8(_Var25,uVar13);
        }
        local_298 = (_Iosb<int>)0x0;
        uStack_290 = 7;
        local_2a8.vftablePtr =
             (basic_ios<char,std::char_traits<char>_>_vftable *)
             ((ulonglong)local_2a8.vftablePtr & 0xffffffffffff0000);
        if (7 < uStack_b0) {
          uVar13 = uStack_b0 * 2 + 2;
          _Var25 = local_c8;
          if (0xfff < uVar13) {
            _Var25 = *(_Iosb<int> *)((longlong)local_c8 + -8);
            if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)_Var25)))
            goto LAB_1402bbeaa;
            uVar13 = uStack_b0 * 2 + 0x29;
          }
          thunk_FUN_140b68ba8(_Var25,uVar13);
        }
        uVar18 = local_90;
        uVar13 = local_98;
        pppppppuVar17 = local_a8;
        if (local_98 >> 3 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          string_too_long();
        }
        local_88 = (_Iosb<int>)0x0;
        ppuStack_80 = (undefined **)0x0;
        uVar24 = local_98 + 8;
        uVar21 = 0xf;
        _Var25 = (_Iosb<int>)&local_88;
        if (0xf < uVar24) {
          uVar21 = 0x7fffffffffffffff;
          if (-9 < (longlong)local_98) {
            uVar14 = uVar24 | 0xf;
            uVar21 = 0x16;
            if (0x16 < uVar14) {
              uVar21 = uVar14;
            }
            if (uVar14 < 0xfff) {
              _Var25 = (_Iosb<int>)FUN_140b65d30(uVar21 + 1);
              local_88 = _Var25;
              goto LAB_1402bb005;
            }
          }
          lVar15 = FUN_140b65d30(uVar21 + 0x28);
          _Var25 = (_Iosb<int>)(lVar15 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)((longlong)_Var25 + -8) = lVar15;
          local_88 = _Var25;
        }
LAB_1402bb005:
        if (uVar18 < 0x10) {
          pppppppuVar17 = &local_a8;
        }
        local_78 = uVar24;
        uStack_70 = uVar21;
        *(_Iosb<int> *)_Var25 = (_Iosb<int>)0x2f73747069726373;
        memcpy((_Iosb<int> *)((longlong)_Var25 + 8),pppppppuVar17,uVar13);
        *(undefined1 *)((longlong)_Var25 + uVar13 + 8) = 0;
        uVar13 = local_78;
        if (uStack_70 - local_78 < 4) {
          in_stack_fffffffffffffd38 = (_Iosb<int> *)0x0;
          _Var25 = (_Iosb<int>)FUN_140006210(&local_88,4);
        }
        else {
          local_78 = local_78 + 4;
          _Var25 = (_Iosb<int>)&local_88;
          _Var20 = _Var25;
          if (0xf < uStack_70) {
            _Var20 = local_88;
          }
          *(undefined4 *)((longlong)_Var20 + uVar13) = 0x61756c2e;
          *(undefined1 *)((longlong)_Var20 + uVar13 + 4) = 0;
        }
        this = local_f8;
        local_2a8.vftablePtr = *(basic_ios<char,std::char_traits<char>_>_vftable **)_Var25;
        local_2a8._Iosb<int> = *(_Iosb<int> *)((longlong)_Var25 + 8);
        local_298 = *(_Iosb<int> *)((longlong)_Var25 + 0x10);
        uStack_290 = *(ulonglong *)((longlong)_Var25 + 0x18);
        *(longlong *)((longlong)_Var25 + 0x10) = 0;
        *(longlong *)((longlong)_Var25 + 0x18) = 0xf;
        *(undefined1 *)_Var25 = 0;
        local_118 = (_Iosb<int>)&local_2a8;
        if (0xf < uStack_290) {
          local_118 = (_Iosb<int>)local_2a8.vftablePtr;
        }
        _Stack_110 = local_298;
        uVar8 = FUN_140b6625c();
        FUN_140004460(&local_c8,uVar8,&local_118);
        if (0xf < uStack_290) {
          uVar13 = uStack_290 + 1;
          _Var25 = (_Iosb<int>)local_2a8.vftablePtr;
          if (0xfff < uVar13) {
            _Var25 = *(_Iosb<int> *)((longlong)local_2a8.vftablePtr + -8);
            if ((char *)0x1f < (char *)((longlong)local_2a8.vftablePtr + (-8 - (longlong)_Var25)))
            goto LAB_1402bbeaa;
            uVar13 = uStack_290 + 0x28;
          }
          thunk_FUN_140b68ba8(_Var25,uVar13);
        }
        local_298 = (_Iosb<int>)0x0;
        uStack_290 = 0xf;
        local_2a8.vftablePtr =
             (basic_ios<char,std::char_traits<char>_>_vftable *)
             ((ulonglong)local_2a8.vftablePtr & 0xffffffffffffff00);
        if (0xf < uStack_70) {
          uVar13 = uStack_70 + 1;
          _Var25 = local_88;
          if (0xfff < uVar13) {
            _Var25 = *(_Iosb<int> *)((longlong)local_88 + -8);
            if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_88 + (-8 - (longlong)_Var25)))
            goto LAB_1402bbeaa;
            uVar13 = uStack_70 + 0x28;
          }
          thunk_FUN_140b68ba8(_Var25,uVar13);
        }
        FUN_140003330(&local_88,local_120,&local_c8);
        _Var25 = (_Iosb<int>)&local_88;
        if (7 < uStack_70) {
          _Var25 = local_88;
        }
        iVar7 = FUN_140b65f14(_Var25,&local_2a8,3);
        bVar5 = false;
        bVar4 = false;
        if (iVar7 < 0x40) {
          if (1 < iVar7 - 2U) {
            if (iVar7 == 0) {
              bVar5 = true;
              bVar4 = true;
            }
            else if (iVar7 != 0x35) goto LAB_1402bbf13;
          }
        }
        else if (((iVar7 != 0x40) && (iVar7 != 0x7b)) && (iVar7 != 0x10b)) {
LAB_1402bbf13:
          local_2a8.vftablePtr =
               (basic_ios<char,std::char_traits<char>_>_vftable *)
               CONCAT44(local_2a8.vftablePtr._4_4_,iVar7);
          local_2a8._Iosb<int> = (_Iosb<int>)&PTR_vftable_140dc1808;
                    /* WARNING: Subroutine does not return */
          FUN_140005380("exists",&local_2a8,&local_88);
        }
        if (7 < uStack_70) {
          uVar13 = uStack_70 * 2 + 2;
          _Var25 = local_88;
          if (0xfff < uVar13) {
            _Var25 = *(_Iosb<int> *)((longlong)local_88 + -8);
            if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_88 + (-8 - (longlong)_Var25)))
            goto LAB_1402bbeaa;
            uVar13 = uStack_70 * 2 + 0x29;
          }
          thunk_FUN_140b68ba8(_Var25,uVar13);
          bVar4 = bVar5;
        }
        if (bVar4) {
          uVar26 = 1;
          do {
            if (9999 < uVar26) {
              local_168 = (_Iosb<int>)0x0;
              uStack_160 = 0;
              local_158 = 0;
              local_150 = 0xf;
              goto joined_r0x0001402bb86a;
            }
            FUN_140007930(&local_118,uVar26);
            uVar18 = local_90;
            uVar13 = local_98;
            pppppppuVar17 = local_a8;
            if (local_98 >> 3 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              string_too_long();
            }
            local_148 = (undefined8 *******)0x0;
            uStack_140 = 0;
            uVar24 = local_98 + 8;
            uVar21 = 0xf;
            pppppppuVar28 = &local_148;
            if (0xf < uVar24) {
              uVar21 = 0x7fffffffffffffff;
              if (-9 < (longlong)local_98) {
                uVar14 = uVar24 | 0xf;
                uVar21 = 0x16;
                if (0x16 < uVar14) {
                  uVar21 = uVar14;
                }
                if (uVar14 < 0xfff) {
                  pppppppuVar28 = (undefined8 *******)FUN_140b65d30(uVar21 + 1);
                  local_148 = pppppppuVar28;
                  goto LAB_1402bb3a6;
                }
              }
              ppppppuVar16 = (undefined8 ******)FUN_140b65d30(uVar21 + 0x28);
              pppppppuVar28 =
                   (undefined8 *******)((longlong)ppppppuVar16 + 0x27U & 0xffffffffffffffe0);
              pppppppuVar28[-1] = ppppppuVar16;
              local_148 = pppppppuVar28;
            }
LAB_1402bb3a6:
            if (uVar18 < 0x10) {
              pppppppuVar17 = &local_a8;
            }
            local_138 = uVar24;
            uStack_130 = uVar21;
            *pppppppuVar28 = (undefined8 ******)0x2f73747069726373;
            memcpy(pppppppuVar28 + 1,pppppppuVar17,uVar13);
            *(undefined1 *)((longlong)pppppppuVar28 + uVar13 + 8) = 0;
            this = local_f8;
            uVar13 = local_138;
            if (uStack_130 == local_138) {
              in_stack_fffffffffffffd38 = (_Iosb<int> *)0x0;
              pppppppuVar17 = (undefined8 *******)FUN_140006210(&local_148,1);
              this = local_f8;
            }
            else {
              local_138 = local_138 + 1;
              pppppppuVar17 = &local_148;
              if (0xf < uStack_130) {
                pppppppuVar17 = local_148;
              }
              *(undefined2 *)((longlong)pppppppuVar17 + uVar13) = 0x2d;
              pppppppuVar17 = &local_148;
            }
            local_198 = *(uint *)pppppppuVar17;
            uStack_194 = *(undefined4 *)((longlong)pppppppuVar17 + 4);
            uStack_190 = *(undefined4 *)(pppppppuVar17 + 1);
            uStack_18c = *(undefined4 *)((longlong)pppppppuVar17 + 0xc);
            uVar8 = *(undefined4 *)(pppppppuVar17 + 2);
            local_188 = pppppppuVar17[2];
            ppppppuStack_180 = pppppppuVar17[3];
            pppppppuVar17[2] = (undefined8 ******)0x0;
            pppppppuVar17[3] = (undefined8 ******)0xf;
            *(undefined1 *)pppppppuVar17 = 0;
            FUN_140007770(&local_88,uVar8,&local_198);
            uVar13 = local_78;
            if (uStack_70 - local_78 < 4) {
              in_stack_fffffffffffffd38 = (_Iosb<int> *)0x0;
              _Var25 = (_Iosb<int>)FUN_140006210(&local_88,4);
            }
            else {
              local_78 = local_78 + 4;
              _Var25 = (_Iosb<int>)&local_88;
              if (0xf < uStack_70) {
                _Var25 = local_88;
              }
              *(undefined4 *)((longlong)_Var25 + uVar13) = 0x61756c2e;
              *(undefined1 *)((longlong)_Var25 + uVar13 + 4) = 0;
              _Var25 = (_Iosb<int>)&local_88;
            }
            local_2a8.vftablePtr = *(basic_ios<char,std::char_traits<char>_>_vftable **)_Var25;
            local_2a8._Iosb<int> = *(_Iosb<int> *)((longlong)_Var25 + 8);
            local_298 = *(_Iosb<int> *)((longlong)_Var25 + 0x10);
            uStack_290 = *(ulonglong *)((longlong)_Var25 + 0x18);
            *(longlong *)((longlong)_Var25 + 0x10) = 0;
            *(longlong *)((longlong)_Var25 + 0x18) = 0xf;
            *(undefined1 *)_Var25 = 0;
            FUN_1402bc650(&local_c8,&local_2a8);
            if (0xf < uStack_290) {
              uVar13 = uStack_290 + 1;
              _Var25 = (_Iosb<int>)local_2a8.vftablePtr;
              if (0xfff < uVar13) {
                _Var25 = *(_Iosb<int> *)((longlong)local_2a8.vftablePtr + -8);
                if ((char *)0x1f <
                    (char *)((longlong)local_2a8.vftablePtr + (-8 - (longlong)_Var25)))
                goto LAB_1402bbeaa;
                uVar13 = uStack_290 + 0x28;
              }
              thunk_FUN_140b68ba8(_Var25,uVar13);
            }
            local_298 = (_Iosb<int>)0x0;
            uStack_290 = 0xf;
            local_2a8.vftablePtr =
                 (basic_ios<char,std::char_traits<char>_>_vftable *)
                 ((ulonglong)local_2a8.vftablePtr & 0xffffffffffffff00);
            if (0xf < uStack_70) {
              uVar13 = uStack_70 + 1;
              _Var25 = local_88;
              if (0xfff < uVar13) {
                _Var25 = *(_Iosb<int> *)((longlong)local_88 + -8);
                if ((undefined1 *)0x1f <
                    (undefined1 *)((longlong)local_88 + (-8 - (longlong)_Var25)))
                goto LAB_1402bbeaa;
                uVar13 = uStack_70 + 0x28;
              }
              thunk_FUN_140b68ba8(_Var25,uVar13);
            }
            local_78 = 0;
            uStack_70 = 0xf;
            local_88 = (_Iosb<int>)((ulonglong)local_88 & 0xffffffffffffff00);
            if ((undefined8 ******)0xf < ppppppuStack_180) {
              lVar3 = CONCAT44(uStack_194,local_198);
              ppppppuVar16 = (undefined8 ******)((longlong)ppppppuStack_180 + 1);
              lVar15 = lVar3;
              if ((undefined8 ******)0xfff < ppppppuVar16) {
                lVar15 = *(longlong *)(lVar3 + -8);
                if (0x1f < (ulonglong)((lVar3 + -8) - lVar15)) goto LAB_1402bbeaa;
                ppppppuVar16 = ppppppuStack_180 + 5;
              }
              thunk_FUN_140b68ba8(lVar15,ppppppuVar16);
            }
            local_188 = (undefined8 ******)0x0;
            ppppppuStack_180 = (undefined8 ******)0xf;
            local_198 = local_198 & 0xffffff00;
            if (0xf < uStack_130) {
              uVar13 = uStack_130 + 1;
              pppppppuVar17 = local_148;
              if (0xfff < uVar13) {
                pppppppuVar17 = (undefined8 *******)local_148[-1];
                if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)pppppppuVar17)))
                goto LAB_1402bbeaa;
                uVar13 = uStack_130 + 0x28;
              }
              thunk_FUN_140b68ba8(pppppppuVar17,uVar13);
            }
            uVar13 = CONCAT44(uStack_fc,uStack_100);
            if (0xf < uVar13) {
              uVar18 = uVar13 + 1;
              _Var25 = local_118;
              if (0xfff < uVar18) {
                _Var25 = *(_Iosb<int> *)((longlong)local_118 + -8);
                if ((char *)0x1f < (char *)((longlong)local_118 + (-8 - (longlong)_Var25)))
                goto LAB_1402bbeaa;
                uVar18 = uVar13 + 0x28;
              }
              thunk_FUN_140b68ba8(_Var25,uVar18);
            }
            FUN_140003330(&local_88,local_120,&local_c8);
            _Var25 = (_Iosb<int>)&local_88;
            if (7 < uStack_70) {
              _Var25 = local_88;
            }
            iVar7 = FUN_140b65f14(_Var25,&local_2a8,3);
            bVar5 = false;
            bVar4 = false;
            if (iVar7 < 0x40) {
              if (1 < iVar7 - 2U) {
                if (iVar7 == 0) {
                  bVar5 = true;
                  bVar4 = true;
                }
                else if (iVar7 != 0x35) goto LAB_1402bbec8;
              }
            }
            else if (((iVar7 != 0x40) && (iVar7 != 0x7b)) && (iVar7 != 0x10b)) {
LAB_1402bbec8:
              local_2a8.vftablePtr =
                   (basic_ios<char,std::char_traits<char>_>_vftable *)
                   CONCAT44(local_2a8.vftablePtr._4_4_,iVar7);
              local_2a8._Iosb<int> = (_Iosb<int>)&PTR_vftable_140dc1808;
                    /* WARNING: Subroutine does not return */
              FUN_140005380("exists",&local_2a8,&local_88);
            }
            if (7 < uStack_70) {
              uVar13 = uStack_70 * 2 + 2;
              _Var25 = local_88;
              if (0xfff < uVar13) {
                _Var25 = *(_Iosb<int> *)((longlong)local_88 + -8);
                if ((undefined1 *)0x1f <
                    (undefined1 *)((longlong)local_88 + (-8 - (longlong)_Var25)))
                goto LAB_1402bbeaa;
                uVar13 = uStack_70 * 2 + 0x29;
              }
              thunk_FUN_140b68ba8(_Var25,uVar13);
              bVar4 = bVar5;
            }
            uVar26 = uVar26 + 1;
          } while (bVar4);
          FUN_1402bc750(&local_c8,&local_168,&local_2a8);
        }
        else {
          FUN_1402bc750(&local_c8,&local_168,&local_2a8);
        }
joined_r0x0001402bb86a:
        uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffd38 >> 0x20);
        if (7 < uStack_b0) {
          uVar13 = uStack_b0 * 2 + 2;
          _Var25 = local_c8;
          if (0xfff < uVar13) {
            _Var25 = *(_Iosb<int> *)((longlong)local_c8 + -8);
            if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)_Var25)))
            goto LAB_1402bbeaa;
            uVar13 = uStack_b0 * 2 + 0x29;
          }
          thunk_FUN_140b68ba8(_Var25,uVar13);
          uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffd38 >> 0x20);
        }
        if (local_158 != 0) {
          local_c8 = (_Iosb<int>)&local_168;
          if (0xf < local_150) {
            local_c8 = local_168;
          }
          lStack_c0 = local_158;
          uVar9 = FUN_140b6625c();
          FUN_140004460(&local_2a8,uVar9,&local_c8);
          FUN_140003330(&local_88,*(undefined8 *)((longlong)this + 0xf0),&local_2a8);
          if (7 < uStack_290) {
            uVar13 = uStack_290 * 2 + 2;
            _Var25 = (_Iosb<int>)local_2a8.vftablePtr;
            if (0xfff < uVar13) {
              _Var25 = *(_Iosb<int> *)((longlong)local_2a8.vftablePtr + -8);
              if ((char *)0x1f < (char *)((longlong)local_2a8.vftablePtr + (-8 - (longlong)_Var25)))
              goto LAB_1402bbeaa;
              uVar13 = uStack_290 * 2 + 0x29;
            }
            thunk_FUN_140b68ba8(_Var25,uVar13);
          }
          _Var25 = (_Iosb<int>)&local_88;
          if (7 < uStack_70) {
            _Var25 = local_88;
          }
          FUN_1401f80d0(&local_2a8,_Var25,2,0x40,CONCAT44(uVar8,1));
          uVar13 = uStack_d0;
          sVar11 = local_d8;
          pppppppbVar27 = local_e8;
          if (0x7ffffffffffffffc < (longlong)local_d8) {
                    /* WARNING: Subroutine does not return */
            string_too_long();
          }
          local_c8 = (_Iosb<int>)0x0;
          lStack_c0 = 0;
          uVar18 = local_d8 + 3;
          uVar24 = 0xf;
          _Var25 = (_Iosb<int>)&local_c8;
          if (0xf < uVar18) {
            uVar24 = 0x7fffffffffffffff;
            if (-4 < (longlong)local_d8) {
              uVar21 = uVar18 | 0xf;
              uVar24 = 0x16;
              if (0x16 < uVar21) {
                uVar24 = uVar21;
              }
              if (uVar21 < 0xfff) {
                _Var25 = (_Iosb<int>)FUN_140b65d30(uVar24 + 1);
                local_c8 = _Var25;
                goto LAB_1402bba5c;
              }
            }
            lVar15 = FUN_140b65d30(uVar24 + 0x28);
            _Var25 = (_Iosb<int>)(lVar15 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)((longlong)_Var25 + -8) = lVar15;
            local_c8 = _Var25;
          }
LAB_1402bba5c:
          if (uVar13 < 0x10) {
            pppppppbVar27 = (byte *******)&local_e8;
          }
          local_b8 = uVar18;
          uStack_b0 = uVar24;
          *(undefined1 *)((longlong)_Var25 + 2) = 0x20;
          *(undefined2 *)_Var25 = 0x2d2d;
          memcpy((void *)((longlong)_Var25 + 3),pppppppbVar27,sVar11);
          *(undefined1 *)((longlong)_Var25 + sVar11 + 3) = 0;
          uVar13 = local_b8;
          if (uStack_b0 - local_b8 < 100) {
            p_Var19 = (_Iosb<int> *)FUN_140006210(&local_c8,100);
          }
          else {
            local_b8 = local_b8 + 100;
            _Var25 = (_Iosb<int>)&local_c8;
            if (0xf < uStack_b0) {
              _Var25 = local_c8;
            }
            builtin_strncpy((char *)((longlong)_Var25 + uVar13 + 0x50),"ick()) * dt, 0)\n",0x10);
            builtin_strncpy((char *)((longlong)_Var25 + uVar13 + 0x40),"ew(0, math.sin(t",0x10);
            builtin_strncpy((char *)((longlong)_Var25 + uVar13 + 0x30),"tion + Vector3.n",0x10);
            builtin_strncpy((char *)((longlong)_Var25 + uVar13 + 0x20),"tion = self.Posi",0x10);
            builtin_strncpy((char *)((longlong)_Var25 + uVar13 + 0x10),"e(dt)\n\tself.Posi",0x10);
            builtin_strncpy((char *)((longlong)_Var25 + uVar13),"\n\nfunction Updat",0x10);
            *(undefined4 *)((longlong)_Var25 + uVar13 + 0x60) = 0xa646e65;
            *(undefined1 *)((longlong)_Var25 + uVar13 + 100) = 0;
            p_Var19 = &local_c8;
          }
          local_118 = *p_Var19;
          _Stack_110 = p_Var19[1];
          local_108 = *(undefined4 *)(p_Var19 + 2);
          uStack_104 = *(undefined4 *)&p_Var19[2].field_0x4;
          uStack_100 = *(undefined4 *)(p_Var19 + 3);
          uStack_fc = *(undefined4 *)&p_Var19[3].field_0x4;
          p_Var19[2] = (_Iosb<int>)0x0;
          p_Var19[3] = (_Iosb<int>)0xf;
          *(undefined1 *)p_Var19 = 0;
          if (0xf < uStack_b0) {
            uVar13 = uStack_b0 + 1;
            _Var25 = local_c8;
            if (0xfff < uVar13) {
              _Var25 = *(_Iosb<int> *)((longlong)local_c8 + -8);
              if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)_Var25)))
              goto LAB_1402bbeaa;
              uVar13 = uStack_b0 + 0x28;
            }
            thunk_FUN_140b68ba8(_Var25,uVar13);
          }
          _Var25 = (_Iosb<int>)&local_118;
          if (0xf < CONCAT44(uStack_fc,uStack_100)) {
            _Var25 = local_118;
          }
          FUN_1400e73f0(&local_2a8,_Var25);
          uVar13 = CONCAT44(uStack_fc,uStack_100);
          if (0xf < uVar13) {
            uVar18 = uVar13 + 1;
            _Var25 = local_118;
            if (0xfff < uVar18) {
              _Var25 = *(_Iosb<int> *)((longlong)local_118 + -8);
              if ((char *)0x1f < (char *)((longlong)local_118 + (-8 - (longlong)_Var25)))
              goto LAB_1402bbeaa;
              uVar18 = uVar13 + 0x28;
            }
            thunk_FUN_140b68ba8(_Var25,uVar18);
          }
          lVar15 = FUN_1400e6190(&local_2a8._Iosb<int>);
          if (lVar15 == 0) {
            std::basic_ios<char,std::char_traits<char>_>::clear
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&local_2a8.vftablePtr +
                       (longlong)*(int *)((longlong)local_2a8.vftablePtr + 4)),
                       *(uint *)(&local_298.field_0x0 + *(int *)((longlong)local_2a8.vftablePtr + 4)
                                ) | 2,false);
          }
          local_c8 = (_Iosb<int>)FUN_140288d50(*(undefined8 *)((longlong)this + 0xf0),0,&local_168);
          lStack_c0 = CONCAT71(lStack_c0._1_7_,3);
          in_stack_fffffffffffffd38 = &local_c8;
          FUN_1400bb430(*(undefined8 *)this,local_2b0,DAT_14151f7a0,0x10,in_stack_fffffffffffffd38);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ofstream<char,std::char_traits<char>_> */
          *(basic_ofstream<char,std::char_traits<char>_>_vftable **)
           ((longlong)&local_2a8.vftablePtr + (longlong)*(int *)((longlong)local_2a8.vftablePtr + 4)
           ) = &std::basic_ofstream<char,std::char_traits<char>_>::vftable;
          *(int *)((longlong)&local_2b0 + (longlong)*(int *)((longlong)local_2a8.vftablePtr + 4) + 4
                  ) = *(int *)((longlong)local_2a8.vftablePtr + 4) + -0xa8;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
          local_2a8._Iosb<int> =
               (_Iosb<int>)&std::basic_filebuf<char,std::char_traits<char>_>::vftable;
          if ((local_220 != 0) && ((undefined1 *)*local_288 == local_230)) {
            *local_288 = local_218;
            *local_268 = local_218;
            *local_250 = local_210 - (int)local_218;
          }
          if (local_224 == '\x01') {
            FUN_1400e6190(&local_2a8._Iosb<int>);
          }
          std::basic_streambuf<char,std::char_traits<char>_>::
          ~basic_streambuf<char,std::char_traits<char>_>
                    ((basic_streambuf<char,std::char_traits<char>_> *)&local_2a8._Iosb<int>);
          std::ios_base::~ios_base(local_200);
          uVar13 = uStack_70;
          if (7 < uStack_70) {
            uVar13 = uStack_70 * 2 + 2;
            _Var25 = local_88;
            if (0xfff < uVar13) {
              _Var25 = *(_Iosb<int> *)((longlong)local_88 + -8);
              if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_88 + (-8 - (longlong)_Var25)))
              goto LAB_1402bbeaa;
              uVar13 = uStack_70 * 2 + 0x29;
            }
            uVar13 = thunk_FUN_140b68ba8(_Var25,uVar13);
          }
          local_ec = (uint)CONCAT71((int7)(uVar13 >> 8),1);
        }
        if (0xf < local_150) {
          uVar13 = local_150 + 1;
          _Var25 = local_168;
          if (0xfff < uVar13) {
            _Var25 = *(_Iosb<int> *)((longlong)local_168 + -8);
            if (0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)_Var25)))
            goto LAB_1402bbeaa;
            uVar13 = local_150 + 0x28;
          }
          thunk_FUN_140b68ba8(_Var25,uVar13);
        }
        if (0xf < local_90) {
          uVar13 = local_90 + 1;
          pppppppuVar17 = local_a8;
          if (0xfff < uVar13) {
            pppppppuVar17 = (undefined8 *******)local_a8[-1];
            if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pppppppuVar17)))
            goto LAB_1402bbeaa;
            uVar13 = local_90 + 0x28;
          }
          thunk_FUN_140b68ba8(pppppppuVar17,uVar13);
        }
        if (0xf < uStack_d0) {
          uVar13 = uStack_d0 + 1;
          pppppppbVar27 = local_e8;
          if (0xfff < uVar13) {
            pppppppbVar27 = (byte *******)local_e8[-1];
            if ((byte *)0x1f < (byte *)((longlong)local_e8 + (-8 - (longlong)pppppppbVar27))) {
LAB_1402bbeaa:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            uVar13 = uStack_d0 + 0x28;
          }
          thunk_FUN_140b68ba8(pppppppbVar27,uVar13);
        }
      }
      puVar10 = local_170 + 1;
    }
    if ((local_ec & 1) != 0) {
      *(undefined1 *)((longlong)this + 0x110) = 1;
    }
    FUN_140099e60(this,1);
  }
  return;
}

