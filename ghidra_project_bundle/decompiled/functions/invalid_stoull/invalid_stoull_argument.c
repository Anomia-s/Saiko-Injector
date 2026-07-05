/**
 * Function: invalid_stoull_argument
 * Address:  1402867f0
 * Signature: undefined __thiscall invalid_stoull_argument(void * this)
 * Body size: 3198 bytes
 */


/* WARNING: Type propagation algorithm not settling */

ulonglong __thiscall invalid_stoull_argument(void *this,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char *_Str;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  size_t _Size;
  int ******ppppppiVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *******pppppppuVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  undefined8 unaff_R12;
  longlong *plVar19;
  int *******pppppppiVar20;
  void *pvVar21;
  char cVar22;
  undefined8 in_stack_fffffffffffffd68;
  undefined4 uVar23;
  int iStack_28c;
  longlong local_288 [2];
  basic_streambuf<char,std::char_traits<char>_> local_278;
  ulonglong local_270;
  longlong *local_260;
  longlong *local_240 [3];
  int *local_228;
  undefined1 local_208 [12];
  char local_1fc;
  longlong local_1f8;
  longlong local_1f0;
  int local_1e8;
  ios_base local_1d8 [6];
  undefined8 local_178;
  undefined2 local_170;
  undefined8 *******local_168 [3];
  ulonglong local_150;
  longlong local_148;
  undefined1 local_140;
  undefined1 local_13f;
  void *local_138;
  longlong *local_130;
  int *******local_128 [2];
  undefined8 local_118;
  longlong local_110;
  int *******local_108 [2];
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 *local_e8;
  int *******pppppppiStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  int *******local_c0;
  undefined8 uStack_b8;
  size_t local_b0;
  ulonglong uStack_a8;
  undefined1 local_a0;
  uint local_94;
  longlong local_90;
  int *******local_88;
  undefined8 uStack_80;
  size_t local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  
  puVar4 = PTR_s_project_json_141500ba0;
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffd68 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  pppppppiStack_e0 = (int *******)strlen(PTR_s_project_json_141500ba0);
  local_e8 = (undefined8 *)puVar4;
  uVar5 = FUN_140b6625c();
  FUN_140004460(local_288,uVar5,&local_e8);
  FUN_140003330(local_108,param_2,local_288);
  if (7 < local_270) {
    uVar7 = local_270 * 2 + 2;
    lVar11 = local_288[0];
    if (0xfff < uVar7) {
      lVar11 = *(longlong *)(local_288[0] + -8);
      if (0x1f < (ulonglong)((local_288[0] + -8) - lVar11)) goto LAB_140287429;
      uVar7 = local_270 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(lVar11,uVar7);
  }
  pppppppiVar20 = (int *******)local_108;
  if (7 < local_f0) {
    pppppppiVar20 = local_108[0];
  }
  iVar6 = FUN_140b65f14(pppppppiVar20,local_288,3);
  lVar11 = DAT_14151e360;
  if (iVar6 < 0x40) {
    if (iVar6 - 2U < 2) goto LAB_140286912;
    if (iVar6 != 0) {
      if (iVar6 != 0x35) goto LAB_140287464;
      goto LAB_140286912;
    }
    pppppppiVar20 = local_108[0];
    if (local_f0 < 8) {
      pppppppiVar20 = (int *******)local_108;
    }
    FUN_140281bd0(local_288,pppppppiVar20,1,0x40,CONCAT44(uVar23,1));
    if (local_1f8 == 0) {
      uVar7 = 0;
    }
    else {
      local_178 = 0;
      local_170 = 1;
      local_148 = *(longlong *)((longlong)local_240 + (longlong)*(int *)(local_288[0] + 4));
      local_140 = local_148 == 0;
      local_13f = 0;
      FUN_140287720(local_168,&local_148,&local_178);
      pppppppuVar16 = local_168;
      if (0xf < local_150) {
        pppppppuVar16 = local_168[0];
      }
      local_90 = cJSON_Parse(pppppppuVar16);
      lVar11 = DAT_14151e360;
      uVar7 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),local_90 != 0);
      if (local_90 == 0) {
        if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
          lVar9 = cJSON_GetErrorPtr();
          if (lVar9 == 0) {
            local_128[0] = (int *******)0x14133fda9;
          }
          else {
            local_128[0] = (int *******)cJSON_GetErrorPtr();
          }
          local_88 = local_108[0];
          if (local_f0 < 8) {
            local_88 = (int *******)local_108;
          }
          uStack_80 = local_f8;
          uVar5 = FUN_140b6625c();
          FUN_14003e640(&local_e8,uVar5,&local_88,&local_118);
          index_out_of_bounds(lVar11,&PTR_s__opt_actions_runner__work_Platfo_140dfd530,&local_e8);
          if (0xf < uStack_d0) {
            uVar8 = uStack_d0 + 1;
            puVar15 = local_e8;
            if (0xfff < uVar8) {
              puVar15 = (undefined8 *)local_e8[-1];
              if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)puVar15)))
              goto LAB_140287429;
              uVar8 = uStack_d0 + 0x28;
            }
            thunk_FUN_140b68ba8(puVar15,uVar8);
          }
        }
      }
      else {
        if (this != param_2) {
          uVar8 = param_2[2];
          if (7 < (ulonglong)param_2[3]) {
            param_2 = (undefined8 *)*param_2;
          }
          if (*(ulonglong *)((longlong)this + 0x18) < uVar8) {
            FUN_140003fc0(this,uVar8);
          }
          else {
            pvVar21 = this;
            if (7 < *(ulonglong *)((longlong)this + 0x18)) {
              pvVar21 = *(void **)this;
            }
            *(ulonglong *)((longlong)this + 0x10) = uVar8;
            memmove(pvVar21,param_2,uVar8 * 2);
            *(undefined2 *)((longlong)pvVar21 + uVar8 * 2) = 0;
          }
        }
        FUN_140287860(&local_e8,local_90,"name");
        plVar19 = (longlong *)((longlong)this + 0x20);
        uVar8 = *(ulonglong *)((longlong)this + 0x38);
        if (0xf < uVar8) {
          lVar11 = *plVar19;
          uVar10 = uVar8 + 1;
          lVar9 = lVar11;
          if (0xfff < uVar10) {
            lVar9 = *(longlong *)(lVar11 + -8);
            if (0x1f < (ulonglong)((lVar11 + -8) - lVar9)) goto LAB_140287429;
            uVar10 = uVar8 + 0x28;
          }
          thunk_FUN_140b68ba8(lVar9,uVar10);
        }
        *(undefined4 *)((longlong)this + 0x30) = (undefined4)local_d8;
        *(undefined4 *)((longlong)this + 0x34) = local_d8._4_4_;
        *(undefined4 *)((longlong)this + 0x38) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)this + 0x3c) = uStack_d0._4_4_;
        *plVar19 = (longlong)local_e8;
        *(int ********)((longlong)this + 0x28) = pppppppiStack_e0;
        local_110 = (longlong)this + 0x40;
        if (*(ulonglong *)((longlong)this + 0x50) != 0) {
          puVar15 = *(undefined8 **)((longlong)this + 0x48);
          if (*(ulonglong *)((longlong)this + 0x50) < *(ulonglong *)((longlong)this + 0x78) >> 3) {
            FUN_14028a2e0(local_110,*puVar15);
          }
          else {
            *(undefined8 *)puVar15[1] = 0;
            puVar15 = (undefined8 *)*puVar15;
            while (puVar15 != (undefined8 *)0x0) {
              puVar2 = (undefined8 *)*puVar15;
              FUN_14009c720(puVar15 + 2);
              thunk_FUN_140b68ba8(puVar15,0x68);
              puVar15 = puVar2;
            }
            lVar11 = *(longlong *)((longlong)this + 0x48);
            *(longlong *)lVar11 = lVar11;
            *(longlong *)(lVar11 + 8) = lVar11;
            *(undefined8 *)((longlong)this + 0x50) = 0;
            puVar17 = *(undefined4 **)((longlong)this + 0x58);
            puVar3 = *(undefined4 **)((longlong)this + 0x60);
            if (puVar17 != puVar3) {
              uVar5 = *(undefined4 *)((longlong)this + 0x48);
              uVar23 = *(undefined4 *)((longlong)this + 0x4c);
              uVar8 = (longlong)puVar3 + (-8 - (longlong)puVar17);
              if (0x17 < uVar8) {
                uVar8 = (uVar8 >> 3) + 1;
                uVar10 = uVar8 & 0xfffffffffffffffc;
                uVar18 = 0;
                do {
                  puVar1 = puVar17 + uVar18 * 2;
                  *puVar1 = uVar5;
                  puVar1[1] = uVar23;
                  puVar1[2] = uVar5;
                  puVar1[3] = uVar23;
                  puVar1 = puVar17 + uVar18 * 2 + 4;
                  *puVar1 = uVar5;
                  puVar1[1] = uVar23;
                  puVar1[2] = uVar5;
                  puVar1[3] = uVar23;
                  uVar18 = uVar18 + 4;
                } while (uVar10 != uVar18);
                puVar17 = puVar17 + uVar10 * 2;
                if (uVar8 == uVar10) goto LAB_140286dcc;
              }
              do {
                *puVar17 = uVar5;
                puVar17[1] = uVar23;
                puVar17 = puVar17 + 2;
              } while (puVar17 != puVar3);
            }
          }
        }
LAB_140286dcc:
        local_94 = (uint)uVar7;
        local_138 = this;
        local_130 = plVar19;
        lVar11 = cJSON_GetObjectItem(local_90,"assets");
        if ((lVar11 != 0) && (iVar6 = cJSON_IsObject(lVar11), iVar6 != 0)) {
          plVar19 = (longlong *)(lVar11 + 0x10);
          while (plVar19 = (longlong *)*plVar19, plVar19 != (longlong *)0x0) {
            pppppppiStack_e0 = (int *******)0x0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_c8 = 0xf;
            local_c0 = (int *******)0x0;
            uStack_b8 = 0;
            local_b0 = 0;
            uStack_a8 = 0xf;
            local_a0 = 0;
            FUN_140287860(&local_88,plVar19,"type");
            pppppppiVar20 = (int *******)&local_88;
            if (0xf < uStack_70) {
              pppppppiVar20 = local_88;
            }
            if (local_78 == 5) {
              cVar22 = (*(char *)((longlong)pppppppiVar20 + 4) == 'e' &&
                       *(int *)pppppppiVar20 == 0x6e656373) * '\x02';
joined_r0x000140286f05:
              local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,cVar22);
            }
            else {
              if (local_78 == 4) {
                cVar22 = *(int *)pppppppiVar20 == 0x6873656d;
                goto joined_r0x000140286f05;
              }
              local_e8 = (undefined8 *)((ulonglong)local_e8._1_7_ << 8);
            }
            if (0xf < uStack_70) {
              uVar7 = uStack_70 + 1;
              pppppppiVar20 = local_88;
              if (0xfff < uVar7) {
                pppppppiVar20 = (int *******)local_88[-1];
                if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppiVar20)))
                goto LAB_140287429;
                uVar7 = uStack_70 + 0x28;
              }
              thunk_FUN_140b68ba8(pppppppiVar20,uVar7);
            }
            FUN_140287860(&local_88,plVar19,"path");
            if (0xf < local_c8) {
              uVar7 = local_c8 + 1;
              pppppppiVar20 = pppppppiStack_e0;
              if (0xfff < uVar7) {
                pppppppiVar20 = (int *******)pppppppiStack_e0[-1];
                if (0x1f < (ulonglong)((longlong)pppppppiStack_e0 + (-8 - (longlong)pppppppiVar20)))
                goto LAB_140287429;
                uVar7 = local_c8 + 0x28;
              }
              thunk_FUN_140b68ba8(pppppppiVar20,uVar7);
            }
            uStack_d0 = local_78;
            local_c8 = uStack_70;
            pppppppiStack_e0 = local_88;
            local_d8 = uStack_80;
            FUN_140287860(&local_88,plVar19,"checksum");
            if (0xf < uStack_a8) {
              uVar7 = uStack_a8 + 1;
              pppppppiVar20 = local_c0;
              if (0xfff < uVar7) {
                pppppppiVar20 = (int *******)local_c0[-1];
                if (0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)pppppppiVar20)))
                goto LAB_140287429;
                uVar7 = uStack_a8 + 0x28;
              }
              thunk_FUN_140b68ba8(pppppppiVar20,uVar7);
            }
            local_b0 = local_78;
            uStack_a8 = uStack_70;
            local_c0 = local_88;
            uStack_b8 = uStack_80;
            lVar11 = cJSON_GetObjectItem(plVar19,"uploaded");
            if ((lVar11 == 0) || (iVar6 = cJSON_IsBool(lVar11), iVar6 == 0)) {
              local_a0 = false;
            }
            else {
              iVar6 = cJSON_IsTrue(lVar11);
              local_a0 = iVar6 != 0;
            }
            _Str = (char *)plVar19[7];
            local_78 = 0;
            uStack_70 = 0;
            local_88 = (int *******)0x0;
            uStack_80 = 0;
            _Size = strlen(_Str);
            if ((longlong)_Size < 0) {
                    /* WARNING: Subroutine does not return */
              string_too_long();
            }
            if (_Size < 0x10) {
              uStack_70 = 0xf;
              local_78 = _Size;
              memcpy(&local_88,_Str,_Size);
              *(undefined1 *)((longlong)&local_88 + _Size) = 0;
            }
            else {
              uVar8 = _Size | 0xf;
              uVar7 = 0x16;
              if (0x16 < uVar8) {
                uVar7 = uVar8;
              }
              if (uVar8 < 0xfff) {
                pppppppiVar20 = (int *******)FUN_140b65d30(uVar7 + 1);
              }
              else {
                ppppppiVar12 = (int ******)FUN_140b65d30(uVar7 + 0x28);
                pppppppiVar20 = (int *******)((longlong)ppppppiVar12 + 0x27U & 0xffffffffffffffe0);
                pppppppiVar20[-1] = ppppppiVar12;
              }
              local_88 = pppppppiVar20;
              local_78 = _Size;
              uStack_70 = uVar7;
              memcpy(pppppppiVar20,_Str,_Size);
              *(undefined1 *)((longlong)pppppppiVar20 + _Size) = 0;
            }
            piVar13 = _errno();
            pppppppiVar20 = (int *******)&local_88;
            if (0xf < uStack_70) {
              pppppppiVar20 = local_88;
            }
            *piVar13 = 0;
            uVar14 = strtoull(pppppppiVar20,local_128,0x10);
            if (pppppppiVar20 == local_128[0]) {
              std::_Xinvalid_argument("invalid stoull argument");
LAB_140287458:
                    /* WARNING: Subroutine does not return */
              std::_Xout_of_range("stoull argument out of range");
            }
            if (*piVar13 == 0x22) goto LAB_140287458;
            local_118 = uVar14;
            unordered_map_set_too_long(local_110,local_128,&local_118);
            FUN_140287950(local_128[0] + 3,&local_e8);
            if (0xf < uStack_70) {
              uVar7 = uStack_70 + 1;
              pppppppiVar20 = local_88;
              if (0xfff < uVar7) {
                pppppppiVar20 = (int *******)local_88[-1];
                if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppiVar20)))
                goto LAB_140287429;
                uVar7 = uStack_70 + 0x28;
              }
              thunk_FUN_140b68ba8(pppppppiVar20,uVar7);
            }
            if (0xf < uStack_a8) {
              uVar7 = uStack_a8 + 1;
              pppppppiVar20 = local_c0;
              if (0xfff < uVar7) {
                pppppppiVar20 = (int *******)local_c0[-1];
                if (0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)pppppppiVar20)))
                goto LAB_140287429;
                uVar7 = uStack_a8 + 0x28;
              }
              thunk_FUN_140b68ba8(pppppppiVar20,uVar7);
            }
            local_b0 = 0;
            uStack_a8 = 0xf;
            local_c0 = (int *******)((ulonglong)local_c0 & 0xffffffffffffff00);
            if (0xf < local_c8) {
              uVar7 = local_c8 + 1;
              pppppppiVar20 = pppppppiStack_e0;
              if (0xfff < uVar7) {
                pppppppiVar20 = (int *******)pppppppiStack_e0[-1];
                if (0x1f < (ulonglong)((longlong)pppppppiStack_e0 + (-8 - (longlong)pppppppiVar20)))
                goto LAB_140287429;
                uVar7 = local_c8 + 0x28;
              }
              thunk_FUN_140b68ba8(pppppppiVar20,uVar7);
            }
          }
        }
        cJSON_Delete(local_90);
        pvVar21 = local_138;
        uVar7 = (ulonglong)local_94;
        if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
          local_e8 = *(undefined8 **)((longlong)local_138 + 0x50);
          FUN_140b5dd80(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dfd558,local_130);
        }
        lVar9 = *(longlong *)((longlong)pvVar21 + 0x88);
        for (lVar11 = *(longlong *)((longlong)pvVar21 + 0x80); lVar11 != lVar9;
            lVar11 = lVar11 + 0x40) {
          if (*(longlong **)(lVar11 + 0x38) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_Xbad_function_call();
          }
          (**(code **)(**(longlong **)(lVar11 + 0x38) + 0x10))();
        }
      }
      if (0xf < local_150) {
        uVar8 = local_150 + 1;
        pppppppuVar16 = local_168[0];
        if (0xfff < uVar8) {
          pppppppuVar16 = (undefined8 *******)local_168[0][-1];
          if (0x1f < (ulonglong)((longlong)local_168[0] + (-8 - (longlong)pppppppuVar16)))
          goto LAB_140287429;
          uVar8 = local_150 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar16,uVar8);
      }
    }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
    *(basic_ifstream<char,std::char_traits<char>_>_vftable **)
     ((longlong)local_288 + (longlong)*(int *)(local_288[0] + 4)) =
         &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)&iStack_28c + (longlong)*(int *)(local_288[0] + 4)) =
         *(int *)(local_288[0] + 4) + -0xb0;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
    local_278 = (basic_streambuf<char,std::char_traits<char>_>)
                &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
    if ((local_1f8 != 0) && ((undefined1 *)*local_260 == local_208)) {
      *local_260 = local_1f0;
      *local_240[0] = local_1f0;
      *local_228 = local_1e8 - (int)local_1f0;
    }
    if (local_1fc == '\x01') {
      FUN_1400e6190(&local_278);
    }
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_278);
    std::ios_base::~ios_base(local_1d8);
  }
  else {
    if (((iVar6 != 0x40) && (iVar6 != 0x7b)) && (iVar6 != 0x10b)) {
LAB_140287464:
      local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,iVar6);
      pppppppiStack_e0 = (int *******)&PTR_vftable_140dc1808;
                    /* WARNING: Subroutine does not return */
      FUN_140005380("exists",&local_e8,local_108);
    }
LAB_140286912:
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      pppppppiStack_e0 = (int *******)param_2[2];
      if (7 < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      local_e8 = param_2;
      uVar5 = FUN_140b6625c();
      FUN_14003e640(local_288,uVar5,&local_e8,local_168);
      index_out_of_bounds(lVar11,&PTR_s__opt_actions_runner__work_Platfo_140dfd508,
                          &PTR_s_project_json_141500ba0);
      if (0xf < local_270) {
        uVar7 = local_270 + 1;
        lVar11 = local_288[0];
        if (0xfff < uVar7) {
          lVar11 = *(longlong *)(local_288[0] + -8);
          if (0x1f < (ulonglong)((local_288[0] + -8) - lVar11)) goto LAB_140287429;
          uVar7 = local_270 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar11,uVar7);
      }
    }
    uVar7 = 0;
  }
  if (7 < local_f0) {
    uVar8 = local_f0 * 2 + 2;
    pppppppiVar20 = local_108[0];
    if (0xfff < uVar8) {
      pppppppiVar20 = (int *******)local_108[0][-1];
      if (0x1f < (ulonglong)((longlong)local_108[0] + (-8 - (longlong)pppppppiVar20))) {
LAB_140287429:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar8 = local_f0 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(pppppppiVar20,uVar8);
  }
  return uVar7 & 0xffffffff;
}

