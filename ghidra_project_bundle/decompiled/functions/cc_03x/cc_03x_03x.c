/**
 * Function: cc_03x_03x
 * Address:  140a33de0
 * Signature: undefined cc_03x_03x(void)
 * Body size: 4616 bytes
 */


void cc_03x_03x(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,float *param_5,
               longlong *param_6,longlong param_7)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  size_t _Size;
  uint uVar15;
  undefined ******ppppppuVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined ******in_stack_fffffffffffffd18;
  undefined8 in_stack_fffffffffffffd20;
  undefined4 uVar33;
  undefined8 uVar32;
  undefined ******in_stack_fffffffffffffd28;
  undefined4 uVar34;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_290;
  undefined8 local_28c;
  float local_284;
  float local_280;
  undefined8 local_27c;
  float local_274;
  longlong local_270;
  longlong local_268;
  longlong *local_260;
  undefined *****local_258;
  longlong lStack_250;
  size_t local_248;
  ulonglong uStack_240;
  byte *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined1 local_1a8 [32];
  float *local_188;
  ulonglong local_180;
  ulonglong local_178;
  undefined1 local_170 [4];
  float local_16c;
  uint local_168;
  uint local_164;
  longlong local_160;
  undefined *****local_158;
  longlong lStack_150;
  size_t local_148;
  ulonglong uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  ulonglong local_128;
  int local_11c;
  ulonglong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong *local_100;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  
  local_f0 = 0xfffffffffffffffe;
  local_188 = param_5 + 1;
  fVar26 = *param_5;
  fVar1 = param_5[1];
  fVar27 = *(float *)(param_4 + 0xc);
  if (*(float *)(param_4 + 0xc) <= param_5[3]) {
    fVar27 = param_5[3];
  }
  local_270 = param_4;
  local_268 = param_3;
  local_100 = param_2;
  (**(code **)(*param_6 + 0x10))(param_6,local_170);
  Scintilla::FontAlias::FontAlias((FontAlias *)local_1a8,*(longlong *)(param_7 + 0x28) + 0xcb0);
  local_1a8._24_8_ = param_1 + 0x18;
  local_260 = param_6 + 0x4b;
  uVar19 = 0;
  local_110 = param_1;
  do {
    lVar12 = *(longlong *)(param_7 + 0x120);
    if ((ulonglong)((*(longlong *)(param_7 + 0x128) - lVar12 >> 3) * -0x5555555555555555) <= uVar19)
    {
      local_27c = *(undefined8 *)local_188;
      local_274 = local_188[2];
      local_280 = fVar26;
      (**(code **)(*local_100 + 0x78))
                (local_100,&local_280,*(undefined4 *)(*(longlong *)(param_7 + 0x28) + 0xc3c));
      Scintilla::FontAlias::FontAlias((FontAlias *)local_1a8);
      return;
    }
    iVar9 = *(int *)(lVar12 + 8 + uVar19 * 0x18);
    uVar13 = uVar19;
    fVar28 = fVar26;
    if (0 < iVar9) {
      piVar11 = (int *)(lVar12 + uVar19 * 0x18);
      fVar28 = (float)iVar9 + fVar26;
      iVar9 = *piVar11;
      local_1a8._16_8_ = uVar19;
      if (iVar9 == 1) {
        local_1c8 = fVar26;
        local_1c4 = fVar1;
        local_1c0 = fVar28;
        local_1bc = fVar27;
        (**(code **)(*local_100 + 0x78))
                  (local_100,&local_1c8,*(undefined4 *)(*(longlong *)(param_7 + 0x28) + 0xc9c));
      }
      else if ((uint)piVar11[3] < 0x2000000) {
        if (iVar9 == 6) {
          piVar11 = piVar11 + 1;
        }
        else {
          if (iVar9 == 3) {
            lVar12 = *(longlong *)(param_7 + 0x28);
            lVar23 = 0xc38;
          }
          else if (iVar9 == 2) {
            lVar12 = *(longlong *)(param_7 + 0x28);
            lVar23 = 0xc3c;
          }
          else {
            lVar12 = *(longlong *)(param_7 + 0x28);
            lVar23 = 0xc9c;
          }
          piVar11 = (int *)(lVar12 + lVar23);
        }
        local_1d8 = fVar26;
        local_1d4 = fVar1;
        local_1d0 = fVar28;
        local_1cc = fVar27;
        (**(code **)(*local_100 + 0x78))(local_100,&local_1d8,*piVar11);
      }
      else {
        local_1e8 = fVar26;
        local_1e4 = fVar1;
        local_1e0 = fVar28;
        local_1dc = fVar27;
        (**(code **)(*local_100 + 0x70))
                  (local_100,&local_1e8,
                   *(undefined8 *)(param_1 + 8 + (ulonglong)(((int)local_16c & 1U) == 0) * 8));
      }
      fVar31 = local_16c;
      fVar29 = *local_188;
      iVar9 = *(int *)(param_7 + 0x88);
      lVar12 = (**(code **)(*param_6 + 8))();
      lVar23 = (longlong)((int)(fVar29 + fVar31) / iVar9);
      local_108 = lVar12 + lVar23;
      lVar12 = (longlong)local_16c;
      iVar9 = *(int *)(param_7 + 0x88);
      if (*(uint *)(*(longlong *)(param_7 + 0x120) + 0xc + uVar19 * 0x18) < 0x2000000) {
        local_f8 = 0;
      }
      else {
        lVar14 = param_6[0x5e];
        uVar20 = (**(code **)(*(longlong *)param_6[0x59] + 0x30))();
        uVar18 = (**(code **)(*(longlong *)(lVar14 + 8) + 0x38))(lVar14 + 8,uVar20);
        if ((uVar18 & 0x1000) == 0) {
LAB_140a341c0:
          local_f8 = 0;
          cVar4 = *(char *)(local_110 + 0x38);
        }
        else {
          lVar14 = (**(code **)(*(longlong *)param_6[0x59] + 0x30))
                             ((longlong *)param_6[0x59],local_108);
          uVar6 = uVar18;
          while ((0 < lVar14 && ((uVar6 & 0x1000) != 0))) {
            lVar14 = lVar14 + -1;
            uVar6 = (**(code **)(*(longlong *)(param_6[0x5e] + 8) + 0x38))(param_6[0x5e] + 8,lVar14)
            ;
          }
          if ((uVar6 & 0x2000) != 0) goto LAB_140a341c0;
          local_f8 = CONCAT31((int3)((uVar6 & 0xfff) >> 8),(uVar18 & 0xfff) < (uVar6 & 0xfff));
          cVar4 = *(char *)(local_110 + 0x38);
        }
        if (cVar4 == '\x01') {
          plVar2 = (longlong *)param_6[0x59];
          lVar14 = (**(code **)(*param_6 + 0x18))();
          (**(code **)(*plVar2 + 0x30))(plVar2,lVar14 + local_268);
          lVar14 = param_6[0x5e];
          uVar20 = FUN_140802bf0(local_260);
          uVar20 = FUN_140805860(lVar14,uVar20);
          FUN_140805f70(lVar14,local_1a8._24_8_,uVar20);
        }
      }
      local_160 = iVar9 * lVar23 - lVar12;
      local_168 = 0x2000000;
      if (*(int *)(*(longlong *)(param_7 + 0x48) + 0x580) == 5) {
        local_168 = 0x40000000;
      }
      local_164 = 0x4000000;
      if (*(int *)(*(longlong *)(param_7 + 0x48) + 0x5b8) == 5) {
        local_164 = 0x80000000;
      }
      while ((lVar12 = (**(code **)(*(longlong *)param_6[0x59] + 0x18))(), param_1 = local_110,
             uVar13 = local_1a8._16_8_, (longlong)local_108 < lVar12 &&
             (fVar29 = (float)local_160, fVar29 < *(float *)(local_270 + 0xc)))) {
        lVar12 = (**(code **)(*(longlong *)param_6[0x59] + 0x30))();
        local_128 = (**(code **)(*(longlong *)param_6[0x59] + 0x20))
                              ((longlong *)param_6[0x59],lVar12);
        local_118 = (**(code **)(*(longlong *)param_6[0x59] + 0x28))
                              ((longlong *)param_6[0x59],lVar12);
        uVar6 = FUN_140805120(param_6[0x5e],lVar12);
        local_f4 = 0;
        uVar18 = 0;
        if (local_108 == local_128) {
          uVar18 = uVar6;
        }
        if (0x1ffffff < *(uint *)(*(longlong *)(param_7 + 0x120) + 0xc + uVar19 * 0x18)) {
          uVar7 = (**(code **)(*(longlong *)(param_6[0x5e] + 8) + 0x38))(param_6[0x5e] + 8,lVar12);
          uVar13 = (**(code **)(*(longlong *)(param_6[0x5e] + 8) + 0x38))
                             (param_6[0x5e] + 8,lVar12 + 1);
          uVar24 = uVar7 & 0xfff;
          uVar15 = (uint)uVar13 & 0xfff;
          if ((uVar7 & 0x2000) == 0) {
            if ((uVar7 & 0x1000) == 0) {
              if (0x400 < uVar24) {
                if (uVar15 < uVar24) {
                  if ((uVar13 & 0x1000) != 0) goto LAB_140a344c0;
                  if (local_108 != local_118) goto LAB_140a34690;
                  goto LAB_140a34637;
                }
                uVar18 = uVar18 | 0x20000000;
              }
LAB_140a34660:
              local_f4 = 0;
            }
            else {
              if ((local_f8 & 1) == 0) {
                if (0x400 < uVar24) {
                  if (uVar15 < uVar24) goto LAB_140a34637;
LAB_140a34690:
                  uVar18 = uVar18 | 0x20000000;
                }
              }
              else {
                if ((uVar13 & 0x1000) != 0) {
LAB_140a344c0:
                  uVar18 = uVar18 | 0x20000000;
                  local_f8 = (uint)CONCAT71((int7)(uVar13 >> 8),1);
                  goto LAB_140a34660;
                }
LAB_140a34637:
                if (uVar15 < 0x401) {
                  uVar18 = uVar18 | 0x10000000;
                }
                else {
                  uVar18 = uVar18 | 0x8000000;
                }
              }
              local_f4 = 0;
              local_f8 = 0;
            }
          }
          else {
            if (local_108 == local_128) {
              if (uVar24 < uVar15) {
                cVar4 = (**(code **)(*(longlong *)param_6[0x59] + 0x78))
                                  ((longlong *)param_6[0x59],lVar12);
                if (cVar4 == '\0') {
                  if (uVar24 == 0x400) {
                    uVar18 = uVar6 | 0x40000000;
                  }
                  else {
                    uVar18 = uVar6 | local_168;
                  }
                }
                else if (uVar24 == 0x400) {
                  uVar18 = uVar6 | 0x80000000;
                }
                else {
                  uVar18 = uVar6 | local_164;
                }
              }
              else {
                uVar18 = uVar6 | 0x20000000;
                if (uVar24 < 0x401) {
                  uVar18 = uVar6;
                }
              }
            }
            else {
              if (uVar24 < uVar15) {
                cVar4 = (**(code **)(*(longlong *)param_6[0x59] + 0x78))
                                  ((longlong *)param_6[0x59],lVar12);
                uVar18 = 0x20000000;
                if (cVar4 != '\0') goto LAB_140a3451e;
              }
              uVar18 = (uint)(0x400 < uVar24) << 0x1d;
            }
LAB_140a3451e:
            plVar2 = (longlong *)param_6[0x59];
            uVar20 = (**(code **)(*plVar2 + 0x20))(plVar2,lVar12 + 1);
            lVar23 = *plVar2;
            lVar14 = (**(code **)(lVar23 + 0x30))(plVar2,uVar20);
            uVar6 = (**(code **)(*(longlong *)(param_6[0x5e] + 8) + 0x38))(param_6[0x5e] + 8,lVar14)
            ;
            uVar7 = (**(code **)(*(longlong *)(param_6[0x5e] + 8) + 0x38))
                              (param_6[0x5e] + 8,lVar14 + 1);
            cVar4 = (**(code **)(*(longlong *)param_6[0x59] + 0x78))
                              ((longlong *)param_6[0x59],lVar12);
            if (cVar4 == '\0') {
              local_f8 = (uint)CONCAT71((int7)((ulonglong)lVar23 >> 8),
                                        (uVar7 & 0xfff) < uVar24 & (byte)(uVar6 >> 0xc));
              if (*(char *)(local_110 + 0x38) == '\x01') {
                lVar23 = *(longlong *)local_1a8._24_8_;
                local_f4 = 0;
                if ((lVar23 != -1) && (lVar23 <= lVar14)) {
                  local_f4 = (uint)CONCAT71((int7)((ulonglong)lVar23 >> 8),
                                            lVar14 <= *(longlong *)(local_110 + 0x20));
                }
              }
              else {
                local_f4 = 0;
              }
            }
            else {
              local_f4 = 0;
              local_f8 = 0;
            }
          }
        }
        uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffd28 >> 0x20);
        uVar33 = (undefined4)((ulonglong)in_stack_fffffffffffffd20 >> 0x20);
        uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffd18 >> 0x20);
        uVar18 = uVar18 & *(uint *)(*(longlong *)(param_7 + 0x120) + 0xc + uVar19 * 0x18);
        fVar31 = (float)(*(int *)(param_7 + 0x88) + local_160);
        iVar9 = *(int *)(*(longlong *)(param_7 + 0x120) + uVar19 * 0x18);
        local_138 = fVar26;
        fStack_134 = fVar29;
        fStack_130 = fVar28;
        fStack_12c = fVar31;
        if (iVar9 - 4U < 2) {
          FUN_14080c140(param_6[0x5e]);
          if ((lStack_250 != 0) && (cVar4 = FUN_140a35360(), cVar4 != '\0')) {
            if (local_108 == local_128) {
              uVar13 = uStack_240;
              if ((char)local_248 == '\x01') {
                uVar13 = (ulonglong)*local_238;
              }
              local_2c8 = local_138;
              fStack_2c4 = fStack_134;
              fStack_2c0 = fStack_130;
              fStack_2bc = fStack_12c;
              (**(code **)(*local_100 + 0x78))
                        (local_100,&local_2c8,
                         *(undefined4 *)
                          ((longlong)*(int *)(param_7 + 0x18c) * 0x60 + 0x3c +
                          uVar13 * 0x60 + *(longlong *)(param_7 + 0x28)));
              if (*(int *)(*(longlong *)(param_7 + 0x120) + uVar19 * 0x18) == 5) {
                iVar9 = FUN_140a353e0(local_100,param_7,*(undefined4 *)(param_7 + 0x18c),&local_258)
                ;
                local_138 = (fStack_130 - (float)iVar9) + -3.0;
              }
              local_2b8 = local_138;
              fStack_2b4 = fStack_134;
              fStack_2b0 = fStack_130;
              fStack_2ac = fStack_12c;
              in_stack_fffffffffffffd18 = &local_258;
              in_stack_fffffffffffffd20 = 0;
              in_stack_fffffffffffffd28 = (undefined ******)local_258;
              FUN_140a357d0(local_100,param_7,*(undefined4 *)(param_7 + 0x18c),&local_2b8,
                            in_stack_fffffffffffffd18,0,local_258,0x1ff);
            }
            else {
              iVar9 = FUN_14080c800(param_6[0x5e]);
              if ((iVar9 != 0) && ((longlong)(local_118 - (longlong)iVar9) < (longlong)local_108)) {
                local_2a8 = local_138;
                fStack_2a4 = fStack_134;
                fStack_2a0 = fStack_130;
                fStack_29c = fStack_12c;
                (**(code **)(*local_100 + 0x78))();
              }
            }
          }
        }
        else if (iVar9 == 1) {
          if (local_108 == local_128) {
            local_158 = (undefined *****)0x0;
            lStack_150 = 0;
            local_148 = 0;
            uStack_140 = 0xf;
            if (-1 < lVar12) {
              FUN_140a351e0(&local_258,lVar12 + 1);
              if (0xf < uStack_140) {
                uVar13 = uStack_140 + 1;
                ppppppuVar16 = (undefined ******)local_158;
                if (0xfff < uVar13) {
                  ppppppuVar16 = (undefined ******)local_158[-1];
                  if (0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)ppppppuVar16)))
                  goto LAB_140a35006;
                  uVar13 = uStack_140 + 0x28;
                }
                thunk_FUN_140b68ba8(ppppppuVar16,uVar13);
              }
              local_148 = local_248;
              uStack_140 = uStack_240;
              local_158 = local_258;
              lStack_150 = lStack_250;
            }
            if ((*(uint *)(param_6 + 0x58) & 0xc0) != 0) {
              local_208 = 0;
              uStack_200 = 0;
              local_218 = 0;
              uStack_210 = 0;
              local_228 = 0;
              uStack_220 = 0;
              local_238 = (byte *)0x0;
              uStack_230 = 0;
              local_248 = 0;
              uStack_240 = 0;
              local_258 = (undefined *****)0x0;
              lStack_250 = 0;
              local_1f8 = 0;
              lVar23 = param_6[0x5e] + 8;
              lVar14 = *(longlong *)(param_6[0x5e] + 8);
              if ((*(uint *)(param_6 + 0x58) & 0x40) == 0) {
                uVar8 = (**(code **)(lVar14 + 0x48))(lVar23,lVar12);
                FUN_1401a5af0(&local_258,&DAT_141361210,uVar8);
              }
              else {
                uVar6 = (**(code **)(lVar14 + 0x38))(lVar23,lVar12);
                uVar20 = 0x48;
                if ((uVar6 & 0x2000) == 0) {
                  uVar20 = 0x5f;
                }
                uVar32 = CONCAT44(uVar33,(int)uVar6 >> 0x10);
                FUN_1401a5af0(&local_258,"%c%c %03X %03X",uVar20,
                              ((uVar6 & 0x1000) == 0) * '\b' + 'W',
                              CONCAT44(uVar8,uVar6) & 0xffffffff00000fff,uVar32);
                uVar33 = (undefined4)((ulonglong)uVar32 >> 0x20);
              }
              _Size = strlen((char *)&local_258);
              if (uStack_140 < _Size) {
                FUN_1400069b0(&local_158,_Size);
              }
              else {
                ppppppuVar16 = &local_158;
                if (0xf < uStack_140) {
                  ppppppuVar16 = (undefined ******)local_158;
                }
                local_148 = _Size;
                memmove(ppppppuVar16,&local_258,_Size);
                *(undefined1 *)((longlong)ppppppuVar16 + _Size) = 0;
              }
            }
            fVar30 = fStack_12c;
            fVar31 = fStack_130;
            fVar29 = fStack_134;
            uVar20 = CONCAT44(fStack_130,fStack_134);
            ppppppuVar16 = &local_158;
            if (0xf < uStack_140) {
              ppppppuVar16 = (undefined ******)local_158;
            }
            fVar25 = (float)(**(code **)(*local_100 + 0xd0))(local_100,local_1a8,ppppppuVar16);
            in_stack_fffffffffffffd18 = &local_158;
            if (0xf < uStack_140) {
              in_stack_fffffffffffffd18 = (undefined ******)local_158;
            }
            local_290 = (fVar31 - fVar25) - (float)*(int *)(param_7 + 0x1d0);
            local_284 = fVar30;
            in_stack_fffffffffffffd20 = CONCAT44(uVar33,(undefined4)local_148);
            in_stack_fffffffffffffd28 = (undefined ******)CONCAT44(uVar34,0x1ff);
            local_28c = uVar20;
            FUN_140a35680(local_100,&local_290,*(longlong *)(param_7 + 0x28) + 0xc60,
                          (float)*(uint *)(param_7 + 0x90) + fVar29,in_stack_fffffffffffffd18,
                          in_stack_fffffffffffffd20,in_stack_fffffffffffffd28);
            if (0xf < uStack_140) {
              ppppppuVar16 = (undefined ******)local_158;
              if ((0xfff < uStack_140 + 1) &&
                 (ppppppuVar16 = (undefined ******)local_158[-1],
                 0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)ppppppuVar16)))) {
LAB_140a35006:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
              thunk_FUN_140b68ba8(ppppppuVar16);
            }
          }
          else if ((*(byte *)(param_7 + 0x1e0) & 4) != 0) {
            fVar25 = fVar28 - (float)*(int *)(local_110 + 0x40);
            fVar30 = fVar25 - *(float *)(*(longlong *)(param_7 + 0x28) + 0xc8c);
            if (*(code **)(local_110 + 0x48) == (code *)0x0) {
              (**(code **)(*local_100 + 0x38))
                        (local_100,*(undefined4 *)(*(longlong *)(param_7 + 0x28) + 0xc98));
              uVar6 = (uint)fVar29;
              local_180 = (ulonglong)uVar6;
              local_178 = (ulonglong)(uint)(int)fVar25;
              iVar9 = (int)((int)fVar31 - uVar6) / 5;
              iVar22 = (int)((int)fVar31 - uVar6) / 2;
              iVar17 = iVar22 + iVar9;
              local_118 = (ulonglong)(uVar6 + iVar17);
              local_11c = (int)fVar25 - 2;
              (**(code **)(*local_100 + 0x50))();
              iVar21 = (int)fVar30;
              iVar10 = (int)local_178 - iVar21;
              iVar10 = (int)((ulonglong)((longlong)(iVar10 * 2 + -4) * 0x55555555) >> 0x20) +
                       iVar10 * -2 + 4;
              iVar10 = ((iVar10 >> 1) - (iVar10 >> 0x1f)) + local_11c;
              (**(code **)(*local_100 + 0x58))(local_100,iVar10,iVar22 + (int)local_180);
              (**(code **)(*local_100 + 0x50))(local_100,local_11c,local_118);
              (**(code **)(*local_100 + 0x58))(local_100,iVar10,(int)local_118 + iVar9);
              (**(code **)(*local_100 + 0x50))(local_100,local_11c,local_118);
              (**(code **)(*local_100 + 0x58))(local_100,iVar21,local_118);
              iVar9 = iVar17 + iVar9 * -2 + (int)local_180;
              (**(code **)(*local_100 + 0x58))(local_100,iVar21,iVar9);
              (**(code **)(*local_100 + 0x58))(local_100,(int)local_178 + -1,iVar9);
            }
            else {
              local_1b8 = fVar30;
              local_1b4 = fVar29;
              local_1b0 = fVar25;
              local_1ac = fVar31;
              (**(code **)(local_110 + 0x48))(local_100,&local_1b8,0);
            }
          }
        }
        if (uVar18 != 0) {
          uVar7 = local_f4 & 0xff;
          uVar6 = local_f4 & 0xff;
          uVar13 = 0;
          while( true ) {
            uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffd18 >> 0x20);
            uVar33 = (undefined4)((ulonglong)in_stack_fffffffffffffd20 >> 0x20);
            if ((0x1f < (uint)uVar13) || (uVar18 == 0)) break;
            if ((uVar18 & 1) != 0) {
              lVar23 = *(longlong *)(param_7 + 0x120);
              iVar9 = 0;
              if ((0x1ffffff < *(uint *)(lVar23 + 0xc + uVar19 * 0x18)) &&
                 (*(char *)(local_110 + 0x38) != '\0')) {
                lVar14 = *(longlong *)(local_110 + 0x18);
                lVar3 = *(longlong *)(local_110 + 0x20);
                if ((lVar12 <= lVar3 && lVar14 <= lVar12) && lVar14 != -1) {
                  if (lVar14 < lVar12) {
                    iVar9 = 2;
                    if (lVar3 <= lVar12) {
                      iVar9 = (uint)(lVar12 == lVar3) + (uint)(lVar12 == lVar3) * 2;
                    }
                  }
                  else {
                    iVar9 = uVar6 + uVar7 * 2 + 1;
                    if (lVar3 <= lVar12 || lVar14 != lVar12) {
                      iVar9 = 0;
                    }
                    if (local_108 != local_128 && (lVar3 > lVar12 && lVar14 == lVar12)) {
                      bVar5 = (**(code **)(*(longlong *)param_6[0x59] + 0x78))
                                        ((longlong *)param_6[0x59],lVar12);
                      iVar9 = (uint)(bVar5 | (byte)local_f4) * 2;
                      lVar23 = *(longlong *)(param_7 + 0x120);
                    }
                  }
                }
              }
              in_stack_fffffffffffffd20 = CONCAT44(uVar33,*(undefined4 *)(lVar23 + uVar19 * 0x18));
              in_stack_fffffffffffffd18 = (undefined ******)CONCAT44(uVar8,iVar9);
              FUN_140a4a330(uVar13 * 0x38 + *(longlong *)(param_7 + 0x48),local_100,&local_138,
                            local_1a8,in_stack_fffffffffffffd18,in_stack_fffffffffffffd20);
            }
            uVar18 = (int)uVar18 >> 1;
            uVar13 = (ulonglong)((uint)uVar13 + 1);
          }
        }
        local_108 = local_108 + 1;
        local_160 = local_160 + *(int *)(param_7 + 0x88);
      }
    }
    uVar19 = uVar13 + 1;
    fVar26 = fVar28;
  } while( true );
}

