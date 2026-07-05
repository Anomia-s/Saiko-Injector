/**
 * Function: directory_iterator_directory_iterator
 * Address:  14047cf10
 * Signature: undefined __thiscall directory_iterator_directory_iterator(void * this)
 * Body size: 5081 bytes
 */


/* WARNING: Removing unreachable block (ram,0x00014047dd91) */
/* WARNING: Removing unreachable block (ram,0x00014047dd97) */
/* WARNING: Removing unreachable block (ram,0x00014047dda5) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * __thiscall
directory_iterator_directory_iterator
          (void *this,longlong param_2,basic_istream<char,std::char_traits<char>_>_vbtable param_3,
          undefined2 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  basic_istream<char,std::char_traits<char>_>_vftable *_Size;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  BOOL BVar10;
  ulonglong uVar11;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar12;
  basic_istream<char,std::char_traits<char>_>_vftable *pbVar13;
  ulonglong uVar14;
  char ******ppppppcVar15;
  char *pcVar16;
  char *******pppppppcVar17;
  longlong ******pppppplVar18;
  longlong ******pppppplVar19;
  undefined8 *******pppppppuVar20;
  basic_istream<char,std::char_traits<char>_>_vbtable bVar21;
  longlong lVar22;
  size_t _Size_00;
  char *******_Str;
  char *******pppppppcVar23;
  undefined8 in_stack_fffffffffffffd98;
  undefined4 uVar24;
  longlong local_238;
  undefined8 uStack_230;
  undefined1 local_228 [8];
  undefined8 *******local_220;
  basic_streambuf<char,std::char_traits<char>_> bStack_218;
  basic_istream<char,std::char_traits<char>_>_vftable *local_210;
  basic_istream<char,std::char_traits<char>_>_vftable *local_208;
  longlong ******local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8;
  undefined4 local_1e0;
  uint uStack_1dc;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  undefined8 local_1c0;
  longlong ****local_1a8;
  char local_19c;
  longlong local_198;
  longlong *****local_190;
  int local_188;
  ios_base local_178 [6];
  int local_114;
  basic_istream<char,std::char_traits<char>_>_vbtable local_110;
  char *local_108;
  char *pcStack_100;
  longlong local_f8;
  longlong local_e8;
  longlong *plStack_e0;
  char *******local_d8;
  undefined **local_d0;
  ulonglong local_c0;
  char *******local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 *local_90;
  char *******local_88;
  size_t sStack_80;
  longlong local_78;
  ulonglong local_70;
  char *******local_68;
  longlong lStack_60;
  basic_istream<char,std::char_traits<char>_>_vftable *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffd98 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  local_108 = (char *)0x0;
  pcStack_100 = (char *)0x0;
  local_f8 = 0;
  local_110 = param_3;
  local_220 = (undefined8 *******)strlen((char *)param_3);
  local_228 = (undefined1  [8])param_3;
  uVar8 = FUN_140b6625c();
  FUN_140004460(&local_68,uVar8,local_228);
  cVar6 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x128))();
  pcVar16 = (char *)0x0;
  if (cVar6 == '\x01') {
    pcVar16 = "d3d12";
  }
  pppppppcVar23 = (char *******)0x141341e5e;
  if (cVar6 != '\x02') {
    pppppppcVar23 = (char *******)pcVar16;
  }
  if ((byte)(cVar6 - 1U) < 2) {
    pppppppcVar17 = (char *******)0x0;
    if (cVar6 == '\x01') {
      pppppppcVar17 = (char *******)0x1413436e3;
    }
    _Str = (char *******)&DAT_141328ec2;
    if (cVar6 != '\x02') {
      _Str = pppppppcVar17;
    }
    sStack_80 = strlen((char *)_Str);
    local_88 = _Str;
    uVar8 = FUN_140b6625c();
    FUN_140004460(local_228,uVar8,&local_88);
    FUN_14047e990(&local_68,local_228);
    if ((basic_istream<char,std::char_traits<char>_>_vftable *)&DAT_00000007 < local_210) {
      uVar11 = (longlong)local_210 * 2 + 2;
      bVar21 = (basic_istream<char,std::char_traits<char>_>_vbtable)local_228;
      if (0xfff < uVar11) {
        bVar21 = *(basic_istream<char,std::char_traits<char>_>_vbtable *)((longlong)local_228 + -8);
        if (0x1f < (ulonglong)((longlong)((longlong)local_228 + -8) - (longlong)bVar21))
        goto LAB_14047e0d0;
        uVar11 = (longlong)local_210 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(bVar21,uVar11);
    }
    sStack_80 = strlen((char *)pppppppcVar23);
    local_88 = pppppppcVar23;
    uVar8 = FUN_140b6625c();
    FUN_140004460(local_228,uVar8,&local_88);
    FUN_140003330(&local_88,local_228,&local_68);
    if ((basic_istream<char,std::char_traits<char>_>_vftable *)&DAT_00000007 < local_210) {
      uVar11 = (longlong)local_210 * 2 + 2;
      bVar21 = (basic_istream<char,std::char_traits<char>_>_vbtable)local_228;
      if (0xfff < uVar11) {
        bVar21 = *(basic_istream<char,std::char_traits<char>_>_vbtable *)((longlong)local_228 + -8);
        if (0x1f < (ulonglong)((longlong)((longlong)local_228 + -8) - (longlong)bVar21))
        goto LAB_14047e0d0;
        uVar11 = (longlong)local_210 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(bVar21,uVar11);
    }
    local_d8 = (char *******)0x14135a1e4;
    local_d0 = (undefined **)0x56;
    uVar8 = FUN_140b6625c();
    FUN_140004460(local_228,uVar8,&local_d8);
    FUN_140003330(&local_b8,local_228,&local_88);
    if ((basic_istream<char,std::char_traits<char>_>_vftable *)&DAT_00000007 < local_210) {
      uVar11 = (longlong)local_210 * 2 + 2;
      bVar21 = (basic_istream<char,std::char_traits<char>_>_vbtable)local_228;
      if (0xfff < uVar11) {
        bVar21 = *(basic_istream<char,std::char_traits<char>_>_vbtable *)((longlong)local_228 + -8);
        if (0x1f < (ulonglong)((longlong)((longlong)local_228 + -8) - (longlong)bVar21))
        goto LAB_14047e0d0;
        uVar11 = (longlong)local_210 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(bVar21,uVar11);
    }
    pppppppcVar23 = (char *******)&local_b8;
    if (7 < local_a0) {
      pppppppcVar23 = local_b8;
    }
    iVar9 = FUN_140b65f14(pppppppcVar23,local_228,3);
    if (iVar9 < 0x40) {
      if (iVar9 - 2U < 2) goto LAB_14047d1f9;
      if (iVar9 != 0) {
        if (iVar9 != 0x35) goto LAB_14047e2bb;
        goto LAB_14047d1f9;
      }
    }
    else {
      if (((iVar9 != 0x40) && (iVar9 != 0x7b)) && (iVar9 != 0x10b)) {
LAB_14047e2bb:
        local_d8 = (char *******)CONCAT44(local_d8._4_4_,iVar9);
        local_d0 = &PTR_vftable_140dc1808;
                    /* WARNING: Subroutine does not return */
        FUN_140005380("exists",&local_d8,&local_b8);
      }
LAB_14047d1f9:
      if (7 < local_a0) {
        uVar11 = local_a0 * 2 + 2;
        pppppppcVar23 = local_b8;
        if (0xfff < uVar11) {
          pppppppcVar23 = (char *******)local_b8[-1];
          if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pppppppcVar23)))
          goto LAB_14047e0d0;
          uVar11 = local_a0 * 2 + 0x29;
        }
        thunk_FUN_140b68ba8(pppppppcVar23,uVar11);
      }
      local_a8 = 0;
      local_a0 = 7;
      local_b8 = (char *******)((ulonglong)local_b8 & 0xffffffffffff0000);
      local_228 = (undefined1  [8])
                  ((longlong)
                   "/opt/actions-runner/_work/Platform/Platform/build-release-win-cross/shaders_transpiled"
                  + 0x44);
      local_220 = (undefined8 *******)0x12;
      uVar8 = FUN_140b6625c();
      FUN_140004460(&local_d8,uVar8,local_228);
      FUN_140003330(local_228,&local_d8,&local_88);
      FUN_14047ce00(&local_b8,local_228);
      if ((basic_istream<char,std::char_traits<char>_>_vftable *)&DAT_00000007 < local_210) {
        uVar11 = (longlong)local_210 * 2 + 2;
        bVar21 = (basic_istream<char,std::char_traits<char>_>_vbtable)local_228;
        if (0xfff < uVar11) {
          bVar21 = *(basic_istream<char,std::char_traits<char>_>_vbtable *)
                    ((longlong)local_228 + -8);
          if (0x1f < (ulonglong)((longlong)((longlong)local_228 + -8) - (longlong)bVar21))
          goto LAB_14047e0d0;
          uVar11 = (longlong)local_210 * 2 + 0x29;
        }
        thunk_FUN_140b68ba8(bVar21,uVar11);
      }
      bStack_218 = (basic_streambuf<char,std::char_traits<char>_>)0x0;
      local_210 = (basic_istream<char,std::char_traits<char>_>_vftable *)&DAT_00000007;
      local_228 = (undefined1  [8])((ulonglong)local_228 & 0xffffffffffff0000);
      if (7 < local_c0) {
        uVar11 = local_c0 * 2 + 2;
        pppppppcVar23 = local_d8;
        if (0xfff < uVar11) {
          pppppppcVar23 = (char *******)local_d8[-1];
          if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pppppppcVar23)))
          goto LAB_14047e0d0;
          uVar11 = local_c0 * 2 + 0x29;
        }
        thunk_FUN_140b68ba8(pppppppcVar23,uVar11);
      }
    }
    if (7 < local_70) {
      uVar11 = local_70 * 2 + 2;
      pppppppcVar23 = local_88;
      if (0xfff < uVar11) {
        pppppppcVar23 = (char *******)local_88[-1];
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppcVar23)))
        goto LAB_14047e0d0;
        uVar11 = local_70 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pppppppcVar23,uVar11);
    }
  }
  else {
    local_b8 = (char *******)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 7;
  }
  if (7 < uStack_50) {
    uVar11 = uStack_50 * 2 + 2;
    pppppppcVar23 = local_68;
    if (0xfff < uVar11) {
      pppppppcVar23 = (char *******)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppcVar23)))
      goto LAB_14047e0d0;
      uVar11 = uStack_50 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(pppppppcVar23,uVar11);
  }
  if (local_a8 == 0) {
    if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
       (index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e1a508),
       DAT_14151e360 != 0)) {
      lVar22 = DAT_14151e360;
      local_68 = (char *******)((ulonglong)local_68 & 0xffffffffffffff00);
      local_228 = (undefined1  [8])&local_68;
      cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
      if (cVar6 == '\0') {
        do {
          local_228 = (undefined1  [8])0x64;
          FUN_140008100(local_228);
          local_228 = (undefined1  [8])&local_68;
          cVar6 = FUN_140b53dc0(lVar22,&PTR_DAT_140dc1aa0);
        } while (cVar6 == '\0');
      }
      if (((ulonglong)local_68 & 1) == 0) {
        do {
          local_228._0_4_ = 100;
          local_228._4_4_ = 0;
          FUN_140008100(local_228);
        } while (((ulonglong)local_68 & 1) == 0);
      }
    }
LAB_14047e019:
    *(undefined8 *)this = 0;
  }
  else {
    pppppppcVar23 = local_b8;
    if (local_a0 < 8) {
      pppppppcVar23 = (char *******)&local_b8;
    }
    FUN_140281bd0(local_228,pppppppcVar23,0x24,0x40,CONCAT44(uVar24,1));
    bVar7 = std::ios_base::fail((ios_base *)(local_228 + *(int *)((longlong)local_228 + 4)));
    if (bVar7) {
      bVar7 = false;
    }
    else {
      std::basic_istream<char,std::char_traits<char>_>::tellg
                ((basic_istream<char,std::char_traits<char>_> *)local_228);
      pcVar16 = (char *)((longlong)local_68 + lStack_60);
      if (pcVar16 == (char *)0x0 || SCARRY8(lStack_60,(longlong)local_68) != (longlong)pcVar16 < 0)
      {
        bVar7 = false;
      }
      else {
        _Size_00 = (longlong)pcVar16 - (longlong)(pcStack_100 + -(longlong)local_108);
        if (pcVar16 < pcStack_100 + -(longlong)local_108) {
          pcStack_100 = local_108 + (longlong)pcVar16;
        }
        else if (_Size_00 != 0) {
          if ((char *)(local_f8 - (longlong)local_108) < pcVar16) {
            FUN_140037db0(&local_108);
          }
          else {
            pcVar3 = pcStack_100 + _Size_00;
            memset(pcStack_100,0,_Size_00);
            pcStack_100 = pcVar3;
          }
        }
        std::basic_istream<char,std::char_traits<char>_>::seekg
                  ((basic_istream<char,std::char_traits<char>_> *)local_228,0,0);
        pbVar12 = std::basic_istream<char,std::char_traits<char>_>::read
                            ((basic_istream<char,std::char_traits<char>_> *)local_228,local_108,
                             (__int64)pcVar16);
        bVar7 = std::ios_base::good((ios_base *)(pbVar12 + *(int *)(*(longlong *)pbVar12 + 4)));
      }
    }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
    *(basic_ifstream<char,std::char_traits<char>_>_vftable **)
     (local_228 + *(int *)((longlong)local_228 + 4)) =
         &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)&uStack_230 + (longlong)*(int *)((longlong)local_228 + 4) + 4) =
         *(int *)((longlong)local_228 + 4) + -0xb0;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
    bStack_218 = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
    if ((local_198 != 0) && (*local_200 == &local_1a8)) {
      *local_200 = local_190;
      *(longlong ******)CONCAT44(uStack_1dc,local_1e0) = local_190;
      *(int *)CONCAT71(uStack_1c7,local_1c8) = local_188 - (int)local_190;
    }
    if (local_19c == '\x01') {
      FUN_1400e6190(&bStack_218);
    }
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&bStack_218);
    std::ios_base::~ios_base(local_178);
    bVar21 = local_110;
    if (bVar7 == false) {
      BVar10 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_1416f2528,0,&local_114,(LPVOID *)0x0);
      if (BVar10 == 0) goto LAB_14047e1b5;
      if (local_114 == 0) {
LAB_14047dec2:
        lVar22 = DAT_14151e360;
        if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
          local_68 = local_b8;
          if (local_a0 < 8) {
            local_68 = (char *******)&local_b8;
          }
          lStack_60 = local_a8;
          uVar8 = FUN_140b6625c();
          FUN_14003e640(local_228,uVar8,&local_68);
          FUN_140b5c2d0(lVar22,&PTR_s__opt_actions_runner__work_Platfo_140e1a530);
          if ((basic_istream<char,std::char_traits<char>_>_vftable *)0xf < local_210) {
            pbVar13 = (basic_istream<char,std::char_traits<char>_>_vftable *)
                      ((longlong)&local_210->vfunction1 + 1);
            bVar21 = (basic_istream<char,std::char_traits<char>_>_vbtable)local_228;
            if ((basic_istream<char,std::char_traits<char>_>_vftable *)0xfff < pbVar13) {
              bVar21 = *(basic_istream<char,std::char_traits<char>_>_vbtable *)
                        ((longlong)local_228 + -8);
              if (0x1f < (ulonglong)((longlong)((longlong)local_228 + -8) - (longlong)bVar21))
              goto LAB_14047e0d0;
              pbVar13 = local_210 + 5;
            }
            thunk_FUN_140b68ba8(bVar21,pbVar13);
          }
          if (DAT_14151e360 == 0) goto LAB_14047e019;
        }
        lVar22 = DAT_14151e360;
        local_68 = (char *******)((ulonglong)local_68 & 0xffffffffffffff00);
        local_228 = (undefined1  [8])&local_68;
        cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
        if (cVar6 == '\0') {
          do {
            local_228 = (undefined1  [8])0x64;
            FUN_140008100(local_228);
            local_228 = (undefined1  [8])&local_68;
            cVar6 = FUN_140b53dc0(lVar22,&PTR_DAT_140dc1aa0);
          } while (cVar6 == '\0');
        }
        if (((ulonglong)local_68 & 1) == 0) {
          do {
            local_228._0_4_ = 100;
            local_228._4_4_ = 0;
            FUN_140008100(local_228);
          } while (((ulonglong)local_68 & 1) == 0);
        }
        goto LAB_14047e019;
      }
      FUN_140041410(&local_b8,&local_88);
      FUN_140003540(&local_b8,&local_d8);
      pppppppcVar23 = (char *******)&local_d8;
      if (7 < local_c0) {
        pppppppcVar23 = local_d8;
      }
      iVar9 = FUN_140b65f14(pppppppcVar23,local_228);
      lVar22 = DAT_14151e360;
      if (iVar9 == 0) {
        if (((((ulonglong)bStack_218 & 0x400) == 0) ||
            ((bStack_218._4_4_ != -0x5ffffffd && (bStack_218._4_4_ != -0x5ffffff4)))) &&
           (((ulonglong)bStack_218 & 0x10) != 0)) {
          local_e8 = 0;
          plStack_e0 = (longlong *)0x0;
          iVar9 = FUN_14047eca0(&local_e8);
          plVar5 = plStack_e0;
          if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_14022eed0("directory_iterator::directory_iterator",iVar9,&local_d8);
          }
          if (plStack_e0 == (longlong *)0x0) {
            uStack_230 = (longlong *)0x0;
LAB_14047dcc2:
            local_238 = local_e8;
            local_90 = this;
          }
          else {
            LOCK();
            *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
            UNLOCK();
            local_238 = local_e8;
            uStack_230 = plStack_e0;
            if (plStack_e0 == (longlong *)0x0) goto LAB_14047dcc2;
            LOCK();
            *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
            UNLOCK();
            local_90 = this;
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_e0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_e0)(plStack_e0);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
          }
          while (lVar22 = local_238, local_238 != 0) {
            FUN_140041410(local_238 + 0x20,local_228);
            local_68 = (char *******)&local_88;
            if (7 < local_70) {
              local_68 = local_88;
            }
            lStack_60 = local_78;
            iVar9 = FUN_14003e220(local_228);
            if ((basic_istream<char,std::char_traits<char>_>_vftable *)&DAT_00000007 < local_210) {
              bVar21 = (basic_istream<char,std::char_traits<char>_>_vbtable)local_228;
              if ((0xfff < (longlong)local_210 * 2 + 2U) &&
                 (bVar21 = *(basic_istream<char,std::char_traits<char>_>_vbtable *)
                            ((longlong)local_228 + -8),
                 0x1f < (ulonglong)((longlong)((longlong)local_228 + -8) - (longlong)bVar21)))
              goto LAB_14047e0d0;
              thunk_FUN_140b68ba8(bVar21);
            }
            if (iVar9 == 0) break;
            directory_iterator_operator(&local_238);
          }
          plVar5 = uStack_230;
          if (uStack_230 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_230 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_230)(uStack_230);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 8))(plVar5);
              }
            }
          }
          plVar5 = plStack_e0;
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_e0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_e0)(plStack_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 8))(plVar5);
              }
            }
          }
          this = local_90;
          lVar4 = DAT_14151e360;
          if (lVar22 != 0) {
            if (7 < local_c0) {
              pppppppcVar23 = local_d8;
              if ((0xfff < local_c0 * 2 + 2) &&
                 (pppppppcVar23 = (char *******)local_d8[-1],
                 0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pppppppcVar23))))
              goto LAB_14047e0d0;
              thunk_FUN_140b68ba8(pppppppcVar23);
            }
            if (7 < local_70) {
              pppppppcVar23 = local_88;
              if ((0xfff < local_70 * 2 + 2) &&
                 (pppppppcVar23 = (char *******)local_88[-1],
                 0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppcVar23))))
              goto LAB_14047e0d0;
              thunk_FUN_140b68ba8(pppppppcVar23);
            }
            BVar10 = InitOnceComplete((LPINIT_ONCE)&DAT_1416f2528,0,(LPVOID)0x0);
            if (BVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140b68ee4();
            }
            goto LAB_14047dec2;
          }
          if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
            FUN_14003dd10(&local_88,local_228);
            FUN_14003dd10(&local_d8,&local_68);
            FUN_140b5df50(lVar4,&PTR_s__opt_actions_runner__work_Platfo_140e1a5d0,&local_68,
                          local_228);
            FUN_140004b30(&local_68);
            FUN_140004b30();
            if (DAT_14151e360 != 0) goto LAB_14047e274;
            lVar22 = 0;
          }
          else {
LAB_14047e274:
            FUN_140196ac0(DAT_14151e360,100);
            lVar22 = DAT_14151e360;
          }
          if ((7 < *(byte *)(lVar22 + 0x39)) ||
             (FUN_140b53500(lVar22,&PTR_s__opt_actions_runner__work_Platfo_140e1a5f8),
             lVar22 = DAT_14151e360, DAT_14151e360 != 0)) {
            FUN_140196ac0(lVar22,100);
          }
          goto LAB_14047e1b5;
        }
      }
      else if ((((0x3e < iVar9 - 2U) ||
                ((0x4008000000000003U >> ((ulonglong)(iVar9 - 2U) & 0x3f) & 1) == 0)) &&
               (iVar9 != 0x7b)) && (iVar9 != 0x10b)) {
                    /* WARNING: Subroutine does not return */
        FUN_14022eed0("status",iVar9,&local_d8);
      }
      if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
        FUN_14003dd10(&local_d8,local_228);
        FUN_140b5c2d0(lVar22,&PTR_s__opt_actions_runner__work_Platfo_140e1a580,local_228);
        FUN_140004b30(local_228);
        if (DAT_14151e360 != 0) goto LAB_14047e154;
        lVar22 = 0;
      }
      else {
LAB_14047e154:
        FUN_140196ac0(DAT_14151e360,100);
        lVar22 = DAT_14151e360;
      }
      if (*(byte *)(lVar22 + 0x39) < 8) {
        FUN_14003dd10(&local_88,local_228);
        FUN_140b5c2d0(lVar22,&PTR_s__opt_actions_runner__work_Platfo_140e1a5a8,local_228);
        FUN_140004b30(local_228);
        lVar22 = DAT_14151e360;
        if (DAT_14151e360 == 0) goto LAB_14047e1b5;
      }
      FUN_140196ac0(lVar22,100);
LAB_14047e1b5:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_220 = (undefined8 *******)0x0;
    bStack_218 = (basic_streambuf<char,std::char_traits<char>_>)0x0;
    local_210 = (basic_istream<char,std::char_traits<char>_>_vftable *)0x0;
    local_208 = (basic_istream<char,std::char_traits<char>_>_vftable *)0xf;
    uStack_1f8 = 0;
    local_1f0 = 4;
    local_1e8 = 0xf;
    local_200 = (longlong ******)0x6e69616d;
    local_1e0 = 0xffffffff;
    uStack_1dc = uStack_1dc & 0xffffff00;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_228._0_2_ = param_4;
    local_68 = (char *******)0x0;
    lStack_60 = 0;
    local_58 = (basic_istream<char,std::char_traits<char>_>_vftable *)0x0;
    uStack_50 = 0;
    pbVar13 = (basic_istream<char,std::char_traits<char>_>_vftable *)strlen((char *)local_110);
    if ((longlong)pbVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (pbVar13 < (basic_istream<char,std::char_traits<char>_>_vftable *)0x10) {
      uStack_50 = 0xf;
      local_58 = pbVar13;
      memcpy(&local_68,(void *)bVar21,(size_t)pbVar13);
      *(undefined1 *)((longlong)&local_68 + (longlong)pbVar13) = 0;
      pbVar13 = (basic_istream<char,std::char_traits<char>_>_vftable *)0xf;
      _Size = local_58;
    }
    else {
      uVar14 = (ulonglong)pbVar13 | 0xf;
      uVar11 = 0x16;
      if (0x16 < uVar14) {
        uVar11 = uVar14;
      }
      if (uVar14 < 0xfff) {
        pppppppcVar23 = (char *******)FUN_140b65d30(uVar11 + 1);
      }
      else {
        ppppppcVar15 = (char ******)FUN_140b65d30(uVar11 + 0x28);
        pppppppcVar23 = (char *******)((longlong)ppppppcVar15 + 0x27U & 0xffffffffffffffe0);
        pppppppcVar23[-1] = ppppppcVar15;
      }
      local_68 = pppppppcVar23;
      local_58 = pbVar13;
      uStack_50 = uVar11;
      memcpy(pppppppcVar23,(void *)bVar21,(size_t)pbVar13);
      *(undefined1 *)((longlong)pppppppcVar23 + (longlong)pbVar13) = 0;
      pbVar13 = local_208;
      _Size = local_58;
    }
    pppppppcVar23 = (char *******)&local_68;
    if (0xf < uStack_50) {
      pppppppcVar23 = local_68;
    }
    local_58 = _Size;
    if (pbVar13 < _Size) {
      FUN_1400069b0(&local_220,_Size);
    }
    else {
      pppppppuVar20 = &local_220;
      if ((basic_istream<char,std::char_traits<char>_>_vftable *)0xf < pbVar13) {
        pppppppuVar20 = local_220;
      }
      local_210 = _Size;
      memmove(pppppppuVar20,pppppppcVar23,(size_t)_Size);
      *(undefined1 *)((longlong)pppppppuVar20 + (longlong)_Size) = 0;
    }
    pppppplVar19 = local_200;
    sStack_80 = 0;
    local_78 = 4;
    local_70 = 0xf;
    local_88 = (char *******)0x6e69616d;
    if (local_1e8 < 4) {
      FUN_1400069b0(&local_200,4);
    }
    else {
      bVar7 = 0xf < local_1e8;
      pppppplVar18 = (longlong ******)&local_200;
      if (bVar7) {
        pppppplVar18 = local_200;
      }
      local_1f0 = 4;
      *(undefined4 *)pppppplVar18 = 0x6e69616d;
      pppppplVar18 = (longlong ******)&local_200;
      if (bVar7) {
        pppppplVar18 = pppppplVar19;
      }
      *(undefined1 *)((longlong)pppppplVar18 + 4) = 0;
    }
    if (0xf < local_70) {
      uVar11 = local_70 + 1;
      pppppppcVar23 = local_88;
      if (0xfff < uVar11) {
        pppppppcVar23 = (char *******)local_88[-1];
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppcVar23)))
        goto LAB_14047e0d0;
        uVar11 = local_70 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppcVar23,uVar11);
    }
    if (0xf < uStack_50) {
      uVar11 = uStack_50 + 1;
      pppppppcVar23 = local_68;
      if (0xfff < uVar11) {
        pppppppcVar23 = (char *******)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppcVar23)))
        goto LAB_14047e0d0;
        uVar11 = uStack_50 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppcVar23,uVar11);
    }
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0xb8))
              (*(longlong **)(param_2 + 0x18),this,local_228,local_108,
               (longlong)pcStack_100 - (longlong)local_108);
    if ((*(longlong *)this == 0) &&
       ((local_90 = this, 7 < *(byte *)(DAT_14151e360 + 0x39) ||
        (index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e1a558),
        this = local_90, DAT_14151e360 != 0)))) {
      lVar22 = DAT_14151e360;
      local_88 = (char *******)((ulonglong)local_88 & 0xffffffffffffff00);
      local_68 = (char *******)&local_88;
      cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
      if (cVar6 == '\0') {
        do {
          local_68 = (char *******)0x64;
          FUN_140008100(&local_68);
          local_68 = (char *******)&local_88;
          cVar6 = FUN_140b53dc0(lVar22,&PTR_DAT_140dc1aa0);
        } while (cVar6 == '\0');
      }
      this = local_90;
      if (((ulonglong)local_88 & 1) == 0) {
        do {
          local_68 = (char *******)0x64;
          FUN_140008100(&local_68);
          this = local_90;
        } while (((ulonglong)local_88 & 1) == 0);
      }
    }
    if (0xf < local_1e8) {
      uVar11 = local_1e8 + 1;
      pppppplVar19 = local_200;
      if (0xfff < uVar11) {
        pppppplVar19 = (longlong ******)local_200[-1];
        if (0x1f < (ulonglong)((longlong)local_200 + (-8 - (longlong)pppppplVar19)))
        goto LAB_14047e0d0;
        uVar11 = local_1e8 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppplVar19,uVar11);
    }
    local_1f0 = 0;
    local_1e8 = 0xf;
    local_200 = (longlong ******)((ulonglong)local_200 & 0xffffffffffffff00);
    if ((basic_istream<char,std::char_traits<char>_>_vftable *)0xf < local_208) {
      pbVar13 = (basic_istream<char,std::char_traits<char>_>_vftable *)
                ((longlong)&local_208->vfunction1 + 1);
      pppppppuVar20 = local_220;
      if ((basic_istream<char,std::char_traits<char>_>_vftable *)0xfff < pbVar13) {
        pppppppuVar20 = (undefined8 *******)local_220[-1];
        if (0x1f < (ulonglong)((longlong)local_220 + (-8 - (longlong)pppppppuVar20)))
        goto LAB_14047e0d0;
        pbVar13 = local_208 + 5;
      }
      thunk_FUN_140b68ba8(pppppppuVar20,pbVar13);
    }
  }
  if (7 < local_a0) {
    uVar11 = local_a0 * 2 + 2;
    pppppppcVar23 = local_b8;
    if (0xfff < uVar11) {
      pppppppcVar23 = (char *******)local_b8[-1];
      if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pppppppcVar23)))
      goto LAB_14047e0d0;
      uVar11 = local_a0 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(pppppppcVar23,uVar11);
  }
  if (local_108 != (char *)0x0) {
    uVar11 = local_f8 - (longlong)local_108;
    pcVar16 = local_108;
    if (0xfff < uVar11) {
      pcVar16 = *(char **)(local_108 + -8);
      if ((char *)0x1f < local_108 + (-8 - (longlong)pcVar16)) {
LAB_14047e0d0:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar11 = uVar11 + 0x27;
    }
    thunk_FUN_140b68ba8(pcVar16,uVar11);
  }
  return this;
}

