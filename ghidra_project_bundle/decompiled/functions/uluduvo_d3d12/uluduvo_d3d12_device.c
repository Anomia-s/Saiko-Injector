/**
 * Function: uluduvo_d3d12_device
 * Address:  14053bb40
 * Signature: undefined uluduvo_d3d12_device(void)
 * Body size: 3983 bytes
 */


ulonglong uluduvo_d3d12_device(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong *local_3e8 [3];
  ulonglong local_3d0;
  undefined1 local_2e8 [4];
  undefined1 local_2e4 [12];
  ulonglong local_2d8;
  byte local_2b8;
  longlong local_2b0 [3];
  ulonglong local_298;
  undefined8 local_290;
  undefined1 local_190 [4];
  undefined1 local_18c [52];
  ulonglong local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong *local_120;
  char *local_118 [3];
  ulonglong local_100;
  ulonglong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  int local_b4;
  undefined8 local_b0;
  int local_a8;
  undefined4 local_a4;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52770),
       DAT_14151e360 != 0)) {
      lVar7 = DAT_14151e360;
      local_3e8[0] = (ulonglong *)((ulonglong)local_3e8[0] & 0xffffffffffffff00);
      local_290 = local_3e8;
      cVar5 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_290);
      if (cVar5 == '\0') {
        do {
          local_290 = (ulonglong **)0x64;
          FUN_140008100(&local_290);
          local_290 = local_3e8;
          cVar5 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0,&local_290);
        } while (cVar5 == '\0');
      }
      if (((ulonglong)local_3e8[0] & 1) == 0) {
        do {
          local_290 = (ulonglong **)0x64;
          FUN_140008100(&local_290);
        } while (((ulonglong)local_3e8[0] & 1) == 0);
      }
    }
  }
  else {
    lVar7 = (**(code **)(param_2 + 0x10))(*(undefined8 *)(param_2 + 0x18));
    param_1[6] = lVar7;
    if (lVar7 != 0) {
      if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
        FUN_140b63cd0(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e527c0,param_1 + 6);
      }
      if (param_3 == '\0') {
        if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
          FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52978);
        }
      }
      else {
        local_290 = (ulonglong **)0x0;
        iVar6 = D3D12GetDebugInterface(&DAT_140e52c70,&local_290);
        if (iVar6 < 0) {
          if (*(byte *)(DAT_14151e360 + 0x39) < 7) {
            FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e529a0);
          }
        }
        else {
          (**(code **)((longlong)*local_290 + 0x18))();
          if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
            FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e529c8);
          }
        }
        plVar12 = (longlong *)local_290;
        if (local_290 != (ulonglong **)0x0) {
          local_290 = (ulonglong **)0x0;
          (**(code **)(*plVar12 + 0x10))();
        }
      }
      if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
        local_290 = (ulonglong **)0x14134bc6f;
        if (param_3 != '\0') {
          local_290 = (ulonglong **)0x14134a164;
        }
        index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e529f0,
                            &local_290);
      }
      plVar12 = (longlong *)*param_1;
      if (plVar12 != (longlong *)0x0) {
        *param_1 = 0;
        (**(code **)(*plVar12 + 0x10))();
      }
      iVar6 = CreateDXGIFactory2(param_3,&DAT_140e52c80,param_1);
      if (param_3 == '\x01' && iVar6 < 0) {
        if (*(byte *)(DAT_14151e360 + 0x39) < 7) {
          local_290 = (ulonglong **)CONCAT44(local_290._4_4_,iVar6);
          FUN_140b5c490(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52a18,&local_290);
        }
        plVar12 = (longlong *)*param_1;
        if (plVar12 != (longlong *)0x0) {
          *param_1 = 0;
          (**(code **)(*plVar12 + 0x10))();
        }
        iVar6 = CreateDXGIFactory2(0,&DAT_140e52c80,param_1);
      }
      if (-1 < iVar6) {
        local_290 = (ulonglong **)((ulonglong)local_290._4_4_ << 0x20);
        iVar6 = (**(code **)(*(longlong *)*param_1 + 0xe0))((longlong *)*param_1,0,&local_290);
        *(bool *)((longlong)param_1 + 0x1bc) = (int)local_290 == 1 && -1 < iVar6;
        if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
          FUN_140b53500();
        }
        if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
          local_290 = (ulonglong **)0x14134bc6f;
          if (*(char *)((longlong)param_1 + 0x1bc) != '\0') {
            local_290 = (ulonglong **)0x14134a164;
          }
          index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52a90,
                              &local_290);
        }
        memset(&local_290,0,0x138);
        local_158 = 0;
        lStack_150 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        local_88 = (longlong *)0x0;
        local_68 = (longlong *)0x0;
        local_a8 = 0;
        local_98 = 0;
        local_94 = 0;
        local_a0 = 0;
        local_a4 = 0;
        local_120 = param_1;
        do {
          local_80 = (longlong *)0x0;
          iVar6 = (**(code **)(*(longlong *)*param_1 + 0x60))
                            ((longlong *)*param_1,local_a8,&local_80);
          plVar12 = local_80;
          bVar2 = true;
          if (iVar6 != -0x7785fffe) {
            memset(local_3e8,0,0x138);
            (**(code **)(*plVar12 + 0x50))(plVar12,local_3e8);
            FUN_14053d600(local_2b0,local_3e8);
            if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
              local_f8 = local_2d8 >> 0x14;
              local_118[0] = "Software";
              if ((local_2b8 & 2) == 0) {
                local_118[0] = "Hardware";
              }
              index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52ab8,
                                  &local_a8,local_2b0,local_118,local_2e8,local_2e4,&local_f8);
            }
            if ((local_2b8 & 2) == 0) {
              local_90 = (longlong *)0x0;
              iVar6 = D3D12CreateDevice(local_80,0xc000,&DAT_140e52c90);
              if (iVar6 < 0) {
                plVar12 = local_90;
                if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
                  local_f8 = CONCAT44(local_f8._4_4_,iVar6);
                  FUN_140b64460(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52b08,
                                local_2b0);
                  plVar12 = local_90;
                }
              }
              else {
                if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
                  FUN_140b5c2d0(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52b30,
                                local_2b0);
                }
                plVar12 = local_90;
                uStack_c8 = 0;
                uStack_c4 = 0;
                uStack_d8 = 0;
                uStack_d4 = 0;
                uStack_d0 = 0;
                local_cc = 0;
                local_e8 = 0;
                uStack_e0 = 0;
                local_f8 = 0;
                lStack_f0 = 0;
                local_b0 = 0;
                FUN_14053d600(local_118,local_3e8);
                iVar6 = (**(code **)(*plVar12 + 0x68))(plVar12,0,&local_f8);
                if (iVar6 < 0) {
                  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
                    FUN_140b5c2d0(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52bd0,
                                  local_118);
                  }
joined_r0x00014053c395:
                  bVar3 = false;
                  bVar2 = false;
                }
                else {
                  if ((int)local_e8 < 2) {
                    if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
                      local_b4 = (int)local_e8;
                      FUN_140b5e160(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52bf8,
                                    local_118);
                    }
                    goto joined_r0x00014053c395;
                  }
                  iVar6 = (**(code **)(*plVar12 + 0x68))(plVar12,0x20,&local_b0);
                  bVar3 = true;
                  bVar2 = true;
                  if (iVar6 < 0) {
                    local_b0 = 0;
                  }
                }
                if (0xf < local_100) {
                  uVar13 = local_100 + 1;
                  pcVar8 = local_118[0];
                  if (0xfff < uVar13) {
                    pcVar8 = *(char **)(local_118[0] + -8);
                    if ((char *)0x1f < local_118[0] + (-8 - (longlong)pcVar8)) goto LAB_14053cabb;
                    uVar13 = local_100 + 0x28;
                  }
                  thunk_FUN_140b68ba8(pcVar8,uVar13);
                  bVar2 = bVar3;
                }
                plVar11 = local_80;
                param_1 = local_120;
                plVar12 = local_90;
                if ((bVar2) &&
                   ((uVar13 = local_2d8 >> 0x14, local_68 == (longlong *)0x0 || (local_a0 < uVar13))
                   )) {
                  if (local_68 == local_80) {
                    plVar10 = local_88;
                    plVar11 = local_68;
                    if (local_88 != local_90) goto LAB_14053c366;
                  }
                  else {
                    if (local_80 != (longlong *)0x0) {
                      (**(code **)(*local_80 + 8))(local_80);
                    }
                    if (local_68 != (longlong *)0x0) {
                      (**(code **)(*local_68 + 0x10))();
                    }
                    plVar10 = local_88;
                    if (local_88 != local_90) {
LAB_14053c366:
                      plVar10 = local_90;
                      if (local_90 != (longlong *)0x0) {
                        (**(code **)(*local_90 + 8))(local_90);
                      }
                      if (local_88 != (longlong *)0x0) {
                        (**(code **)(*local_88 + 0x10))();
                      }
                    }
                  }
                  memcpy(&local_290,local_3e8,0x138);
                  local_138 = CONCAT44(uStack_d0,uStack_d4);
                  uStack_130 = CONCAT44(uStack_c8,local_cc);
                  local_148 = CONCAT44((undefined4)uStack_e0,local_e8._4_4_);
                  uStack_140 = CONCAT44(uStack_d8,uStack_e0._4_4_);
                  param_1 = local_120;
                  local_158 = local_f8;
                  lStack_150 = lStack_f0;
                  local_128 = uStack_c4;
                  local_a4 = (int)local_e8;
                  local_a0 = uVar13;
                  local_98 = (undefined4)local_b0;
                  local_94 = local_b0._4_4_;
                  plVar12 = local_90;
                  local_88 = plVar10;
                  local_68 = plVar11;
                }
              }
              local_90 = plVar12;
              if (plVar12 != (longlong *)0x0) {
                local_90 = (longlong *)0x0;
                (**(code **)(*plVar12 + 0x10))();
              }
            }
            else if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
              FUN_140b5c2d0(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52ae0,
                            local_2b0);
            }
            bVar2 = false;
            if (0xf < local_298) {
              uVar13 = local_298 + 1;
              lVar7 = local_2b0[0];
              if (0xfff < uVar13) {
                lVar7 = *(longlong *)(local_2b0[0] + -8);
                if (0x1f < (ulonglong)((local_2b0[0] + -8) - lVar7)) goto LAB_14053cabb;
                uVar13 = local_298 + 0x28;
              }
              thunk_FUN_140b68ba8(lVar7,uVar13);
            }
          }
          plVar12 = local_80;
          if (local_80 != (longlong *)0x0) {
            local_80 = (longlong *)0x0;
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
          plVar12 = local_68;
          plVar11 = local_88;
          uVar4 = local_a4;
          if (bVar2) goto LAB_14053c506;
          local_a8 = local_a8 + 1;
        } while( true );
      }
      if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
        local_290 = (ulonglong **)CONCAT44(local_290._4_4_,iVar6);
        FUN_140b5c490(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52a40,&local_290);
        if (DAT_14151e360 != 0) goto LAB_14053c76d;
      }
      else {
LAB_14053c76d:
        lVar7 = DAT_14151e360;
        local_3e8[0] = (ulonglong *)((ulonglong)local_3e8[0] & 0xffffffffffffff00);
        local_290 = local_3e8;
        cVar5 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_290);
        if (cVar5 == '\0') {
          do {
            local_290 = (ulonglong **)0x64;
            FUN_140008100(&local_290);
            local_290 = local_3e8;
            cVar5 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0,&local_290);
          } while (cVar5 == '\0');
        }
        if (((ulonglong)local_3e8[0] & 1) == 0) {
          do {
            local_290 = (ulonglong **)0x64;
            FUN_140008100(&local_290);
          } while (((ulonglong)local_3e8[0] & 1) == 0);
        }
      }
      goto LAB_14053ca45;
    }
    if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52798),
       DAT_14151e360 != 0)) {
      lVar7 = DAT_14151e360;
      local_3e8[0] = (ulonglong *)((ulonglong)local_3e8[0] & 0xffffffffffffff00);
      local_290 = local_3e8;
      cVar5 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_290);
      if (cVar5 == '\0') {
        do {
          local_290 = (ulonglong **)0x64;
          FUN_140008100(&local_290);
          local_290 = local_3e8;
          cVar5 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0,&local_290);
        } while (cVar5 == '\0');
      }
      if (((ulonglong)local_3e8[0] & 1) == 0) {
        do {
          local_290 = (ulonglong **)0x64;
          FUN_140008100(&local_290);
        } while (((ulonglong)local_3e8[0] & 1) == 0);
      }
    }
  }
  goto LAB_14053ca4d;
LAB_14053c506:
  bVar2 = local_88 != (longlong *)0x0 && local_68 != (longlong *)0x0;
  if (local_88 != (longlong *)0x0 && local_68 != (longlong *)0x0) {
    if ((longlong *)param_1[1] != local_68) {
      (**(code **)(*local_68 + 8))(local_68);
      plVar10 = (longlong *)param_1[1];
      param_1[1] = (longlong)plVar12;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    plVar10 = (longlong *)param_1[2];
    if ((longlong *)param_1[2] != plVar11) {
      (**(code **)(*plVar11 + 8))(plVar11);
      plVar1 = (longlong *)param_1[2];
      param_1[2] = (longlong)plVar11;
      plVar10 = plVar11;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar10 = (longlong *)param_1[2];
      }
    }
    memcpy(param_1 + 7,&local_290,0x138);
    param_1[0x2e] = local_158;
    param_1[0x2f] = lStack_150;
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    *(undefined8 *)((longlong)param_1 + 0x1a4) = local_128;
    *(undefined4 *)((longlong)param_1 + 0x194) = (undefined4)local_138;
    *(undefined4 *)(param_1 + 0x33) = local_138._4_4_;
    *(undefined4 *)((longlong)param_1 + 0x19c) = (undefined4)uStack_130;
    *(undefined4 *)(param_1 + 0x34) = uStack_130._4_4_;
    *(undefined4 *)((longlong)param_1 + 0x184) = (undefined4)local_148;
    *(undefined4 *)(param_1 + 0x31) = local_148._4_4_;
    *(undefined4 *)((longlong)param_1 + 0x18c) = (undefined4)uStack_140;
    *(undefined4 *)(param_1 + 0x32) = uStack_140._4_4_;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = local_98;
    *(undefined4 *)(param_1 + 0x36) = local_94;
    local_70 = plVar11;
    local_78 = plVar12;
    (**(code **)(*plVar10 + 0x30))(plVar10,L"Luduvo D3D12 Device");
    lVar7 = DAT_14151e360;
    if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      local_f8 = local_a0;
      local_70 = plVar11;
      local_78 = plVar12;
      FUN_14053d600(local_3e8,&local_290);
      FUN_140b64630(lVar7,&PTR_s__opt_actions_runner__work_Platfo_140e52b80,local_3e8,local_190,
                    local_18c,&local_f8);
      plVar12 = local_68;
      plVar11 = local_88;
      if (0xf < local_3d0) {
        uVar13 = local_3d0 + 1;
        puVar9 = local_3e8[0];
        if (0xfff < uVar13) {
          puVar9 = (ulonglong *)local_3e8[0][-1];
          if (0x1f < (ulonglong)((longlong)local_3e8[0] + (-8 - (longlong)puVar9))) {
LAB_14053cabb:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar13 = local_3d0 + 0x28;
        }
        thunk_FUN_140b68ba8(puVar9,uVar13);
      }
    }
    if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      local_3e8[0] = (ulonglong *)CONCAT44(local_3e8[0]._4_4_,local_94);
      local_f8 = CONCAT44(local_f8._4_4_,local_98);
      local_118[0] = (char *)CONCAT44(local_118[0]._4_4_,uVar4);
      local_78 = plVar12;
      local_70 = plVar11;
      FUN_140b64820(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52ba8,local_118,
                    &local_f8,local_3e8);
    }
LAB_14053c920:
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  else {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      local_70 = local_88;
      local_78 = local_68;
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52b58);
      if (DAT_14151e360 != 0) goto LAB_14053c851;
    }
    else {
LAB_14053c851:
      lVar7 = DAT_14151e360;
      local_3e8[0] = &local_f8;
      local_f8 = local_f8 & 0xffffffffffffff00;
      local_70 = plVar11;
      local_78 = plVar12;
      cVar5 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,local_3e8);
      if (cVar5 == '\0') {
        do {
          local_3e8[0] = (ulonglong *)0x64;
          local_70 = plVar11;
          local_78 = plVar12;
          FUN_140008100(local_3e8);
          local_3e8[0] = &local_f8;
          local_70 = plVar11;
          local_78 = plVar12;
          cVar5 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0,local_3e8);
        } while (cVar5 == '\0');
      }
      if ((local_f8 & 1) == 0) {
        do {
          local_3e8[0] = (ulonglong *)0x64;
          local_70 = plVar11;
          local_78 = plVar12;
          FUN_140008100(local_3e8);
        } while ((local_f8 & 1) == 0);
      }
    }
    if (plVar11 != (longlong *)0x0) goto LAB_14053c920;
    bVar2 = false;
  }
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if ((((bVar2) &&
       (cVar5 = uluduvo_d3d12_copy_queue(param_1[2],0,"graphics",param_1 + 3), cVar5 != '\0')) &&
      (cVar5 = uluduvo_d3d12_copy_queue(param_1[2],2,"compute",param_1 + 4), cVar5 != '\0')) &&
     (cVar5 = uluduvo_d3d12_copy_queue(param_1[2],3,"copy",param_1 + 5), cVar5 != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x1b4) = 1;
    *(undefined4 *)(param_1 + 0x37) = 0x41800000;
    if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      local_290 = (ulonglong **)0x14134a164;
      index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e527e8,&local_290
                          ,param_1 + 0x37);
    }
    pcVar8 = getenv("LDV_D3D12_STABLE_POWER_STATE");
    if (((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) && (*pcVar8 != '0')) {
      iVar6 = (**(code **)(*(longlong *)param_1[2] + 0x140))((longlong *)param_1[2],0);
      if (iVar6 < 0) {
        if (*(byte *)(DAT_14151e360 + 0x39) < 7) {
          local_290 = (ulonglong **)CONCAT44(local_290._4_4_,iVar6);
          FUN_140b5c490(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52810,&local_290);
        }
      }
      else if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
        FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52838);
      }
    }
    uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e52860);
    }
    goto LAB_14053ca4f;
  }
LAB_14053ca45:
  FUN_14053d040(param_1);
LAB_14053ca4d:
  uVar13 = 0;
LAB_14053ca4f:
  return uVar13 & 0xffffffff;
}

