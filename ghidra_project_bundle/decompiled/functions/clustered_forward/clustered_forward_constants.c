/**
 * Function: clustered_forward_constants
 * Address:  1404d4f50
 * Signature: undefined clustered_forward_constants(void)
 * Body size: 3623 bytes
 */


ulonglong clustered_forward_constants(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong **ppuVar4;
  ulonglong ***pppuVar5;
  char cVar6;
  ulonglong ***pppuVar7;
  ulonglong **ppuVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined8 in_stack_fffffffffffffd48;
  ulonglong ***local_298;
  longlong *aplStack_290 [8];
  longlong lStack_250;
  undefined1 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined2 local_108;
  undefined4 local_104;
  undefined1 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  ulonglong **local_98;
  longlong *aplStack_90 [8];
  longlong lStack_50;
  ulonglong local_48;
  ulonglong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((param_2 == 0 || param_1 == (longlong *)0x0) || (*(longlong *)(param_2 + 0x18) == 0))
  goto LAB_1404d52fd;
  uVar12 = 0;
  memset(&local_298,0,0x162);
  FUN_1404d6170(param_1,&local_298);
  FUN_1404d6660(&local_298);
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_140220510(param_2,param_1 + 2,(longlong)param_1 + 0x14);
  uVar11 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd48 >> 8),1);
  cVar6 = FUN_1404d8ad0(*param_1,"Clustered Forward Constants",0xc0,1,uVar11,0,param_1 + 0x1c);
  if (cVar6 == '\0') goto LAB_1404d52ff;
  uVar11 = uVar11 & 0xffffffffffffff00;
  cVar6 = FUN_1404d8ad0(*param_1,"Clustered Point Lights",0x30,0x200,uVar11,0,param_1 + 0x1d);
  if (cVar6 != '\0') {
    uVar11 = uVar11 & 0xffffffffffffff00;
    cVar6 = FUN_1404d8ad0(*param_1,"Clustered Spot Lights",0x40,0x200,uVar11,0,param_1 + 0x1e);
    if (cVar6 != '\0') {
      uVar11 = uVar11 & 0xffffffffffffff00;
      cVar6 = FUN_1404d8ad0(*param_1,"Clustered Point Light Cull Data",0x10,0x200,uVar11,0,
                            param_1 + 0x1f);
      if (cVar6 != '\0') {
        uVar11 = uVar11 & 0xffffffffffffff00;
        cVar6 = FUN_1404d8ad0(*param_1,"Clustered Spot Light Cull Data",0x10,0x200,uVar11,0,
                              param_1 + 0x20);
        if (cVar6 != '\0') {
          uVar11 = uVar11 & 0xffffffffffffff00;
          cVar6 = FUN_1404d8ad0(*param_1,"Cluster Records",0x30,0xd80,uVar11,1,param_1 + 0x21);
          if (cVar6 != '\0') {
            uVar11 = uVar11 & 0xffffffffffffff00;
            cVar6 = FUN_1404d8ad0(*param_1,"Cluster Point Light Indices",4,0x1b0000,uVar11,1,
                                  param_1 + 0x22);
            if ((cVar6 != '\0') &&
               (cVar6 = FUN_1404d8ad0(*param_1,"Cluster Spot Light Indices",4,0x1b0000,
                                      uVar11 & 0xffffffffffffff00,1,param_1 + 0x23), cVar6 != '\0'))
            {
              directory_iterator_directory_iterator
                        (&local_298,*param_1,"cluster_build_grid.csh.hlsl",0x20);
              pppuVar7 = local_298;
              local_298 = (ulonglong ***)0x0;
              plVar1 = (longlong *)param_1[0x24];
              param_1[0x24] = (longlong)pppuVar7;
              if ((plVar1 != (longlong *)0x0) &&
                 ((**(code **)(*plVar1 + 0x10))(), pppuVar7 = local_298,
                 local_298 != (ulonglong ***)0x0)) {
                local_298 = (ulonglong ***)0x0;
                (*(code *)(*pppuVar7)[2])();
              }
              directory_iterator_directory_iterator
                        (&local_298,*param_1,"cluster_assign_lights.csh.hlsl");
              pppuVar7 = local_298;
              local_298 = (ulonglong ***)0x0;
              plVar1 = (longlong *)param_1[0x25];
              param_1[0x25] = (longlong)pppuVar7;
              if ((plVar1 != (longlong *)0x0) &&
                 ((**(code **)(*plVar1 + 0x10))(), pppuVar7 = local_298,
                 local_298 != (ulonglong ***)0x0)) {
                local_298 = (ulonglong ***)0x0;
                (*(code *)(*pppuVar7)[2])();
              }
              if ((param_1[0x24] != 0) && (param_1[0x25] != 0)) {
                local_104 = 0;
                local_100 = 0;
                local_f8 = 0;
                uStack_f0._0_4_ = 0;
                uStack_f0._4_4_ = 0;
                local_e8 = 0;
                uStack_e4 = 0;
                uStack_e0 = 0;
                local_dc = 0x10000000080;
                local_d4 = 0x180;
                local_108 = 0x20;
                local_298 = (ulonglong ***)&DAT_1000900000002;
                FUN_140029790(&local_f8,0,&local_298);
                puVar3 = (undefined8 *)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
                local_98 = (ulonglong **)&DAT_1000600000000;
                if (puVar3 == (undefined8 *)CONCAT44(uStack_e4,local_e8)) {
                  FUN_140029790(&local_f8,puVar3,&local_98);
                }
                else {
                  *puVar3 = &DAT_1000600000000;
                  uStack_f0 = CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0) + 8;
                }
                (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x168))
                          (*(longlong **)(*param_1 + 0x18),&local_298);
                pppuVar7 = local_298;
                local_298 = (ulonglong ***)0x0;
                plVar1 = (longlong *)param_1[0x26];
                param_1[0x26] = (longlong)pppuVar7;
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0x10))();
                  pppuVar7 = local_298;
                  if (local_298 != (ulonglong ***)0x0) {
                    local_298 = (ulonglong ***)0x0;
                    (*(code *)(*pppuVar7)[2])();
                  }
                  pppuVar7 = (ulonglong ***)param_1[0x26];
                }
                if (pppuVar7 == (ulonglong ***)0x0) {
                  if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                    FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e493a8);
                    if (DAT_14151e360 != 0) goto LAB_1404d5449;
                  }
                  else {
LAB_1404d5449:
                    lVar10 = DAT_14151e360;
                    local_98 = (ulonglong **)((ulonglong)local_98 & 0xffffffffffffff00);
                    local_298 = &local_98;
                    cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
                    if (cVar6 == '\0') {
                      do {
                        local_298 = (ulonglong ***)0x64;
                        FUN_140008100(&local_298);
                        local_298 = &local_98;
                        cVar6 = FUN_140b53dc0(lVar10,&PTR_DAT_140dc1aa0);
                      } while (cVar6 == '\0');
                    }
                    if (((ulonglong)local_98 & 1) == 0) {
                      do {
                        local_298 = (ulonglong ***)0x64;
                        FUN_140008100(&local_298);
                      } while (((ulonglong)local_98 & 1) == 0);
                    }
                  }
                  uVar12 = 0;
                }
                else {
                  local_cc = 0;
                  local_c8 = 0;
                  local_c0 = 0;
                  uStack_b8._0_4_ = 0;
                  uStack_b8._4_4_ = 0;
                  local_b0 = 0;
                  uStack_ac = 0;
                  uStack_a8 = 0;
                  local_a4 = 0x10000000080;
                  local_9c = 0x180;
                  local_d0 = 0x20;
                  local_298 = (ulonglong ***)&DAT_1000900000001;
                  FUN_140029790(&local_c0,0,&local_298);
                  puVar3 = (undefined8 *)CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
                  local_98 = (ulonglong **)&DAT_1000900000002;
                  if (puVar3 == (undefined8 *)CONCAT44(uStack_ac,local_b0)) {
                    FUN_140029790(&local_c0,puVar3,&local_98);
                  }
                  else {
                    *puVar3 = &DAT_1000900000002;
                    uStack_b8 = (undefined8 *)(CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8) + 8);
                  }
                  local_40 = (ulonglong *)&DAT_1000500000000;
                  if (uStack_b8 == (undefined8 *)CONCAT44(uStack_ac,local_b0)) {
                    FUN_140029790(&local_c0,uStack_b8,&local_40);
                  }
                  else {
                    *uStack_b8 = &DAT_1000500000000;
                    uStack_b8 = uStack_b8 + 1;
                  }
                  local_48 = 0x1000500000001;
                  if (uStack_b8 == (undefined8 *)CONCAT44(uStack_ac,local_b0)) {
                    FUN_140029790(&local_c0,uStack_b8,&local_48);
                  }
                  else {
                    *uStack_b8 = 0x1000500000001;
                    uStack_b8 = uStack_b8 + 1;
                  }
                  local_120 = &DAT_1000600000000;
                  if (uStack_b8 == (undefined8 *)CONCAT44(uStack_ac,local_b0)) {
                    FUN_140029790(&local_c0,uStack_b8,&local_120);
                  }
                  else {
                    *uStack_b8 = &DAT_1000600000000;
                    uStack_b8 = uStack_b8 + 1;
                  }
                  local_118 = 0x1000600000001;
                  if (uStack_b8 == (undefined8 *)CONCAT44(uStack_ac,local_b0)) {
                    FUN_140029790(&local_c0,uStack_b8,&local_118);
                  }
                  else {
                    *uStack_b8 = 0x1000600000001;
                    uStack_b8 = uStack_b8 + 1;
                  }
                  local_110 = 0x1000600000002;
                  if (uStack_b8 == (undefined8 *)CONCAT44(uStack_ac,local_b0)) {
                    FUN_140029790(&local_c0,uStack_b8,&local_110);
                  }
                  else {
                    *uStack_b8 = 0x1000600000002;
                    uStack_b8 = uStack_b8 + 1;
                  }
                  (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x168))
                            (*(longlong **)(*param_1 + 0x18),&local_298);
                  pppuVar7 = local_298;
                  local_298 = (ulonglong ***)0x0;
                  plVar1 = (longlong *)param_1[0x27];
                  param_1[0x27] = (longlong)pppuVar7;
                  if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 0x10))();
                    pppuVar7 = local_298;
                    if (local_298 != (ulonglong ***)0x0) {
                      local_298 = (ulonglong ***)0x0;
                      (*(code *)(*pppuVar7)[2])();
                    }
                    pppuVar7 = (ulonglong ***)param_1[0x27];
                  }
                  if (pppuVar7 == (ulonglong ***)0x0) {
                    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e493d0)
                      ;
                      if (DAT_14151e360 != 0) goto LAB_1404d59ca;
                    }
                    else {
LAB_1404d59ca:
                      lVar10 = DAT_14151e360;
                      local_98 = (ulonglong **)((ulonglong)local_98 & 0xffffffffffffff00);
                      local_298 = &local_98;
                      cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
                      if (cVar6 == '\0') {
                        do {
                          local_298 = (ulonglong ***)0x64;
                          FUN_140008100(&local_298);
                          local_298 = &local_98;
                          cVar6 = FUN_140b53dc0(lVar10,&PTR_DAT_140dc1aa0);
                        } while (cVar6 == '\0');
                      }
                      if (((ulonglong)local_98 & 1) == 0) {
                        do {
                          local_298 = (ulonglong ***)0x64;
                          FUN_140008100(&local_298);
                        } while (((ulonglong)local_98 & 1) == 0);
                      }
                    }
                    uVar12 = 0;
                  }
                  else {
                    aplStack_290[7] = (longlong *)0x0;
                    lStack_250 = 0;
                    aplStack_290[5] = (longlong *)0x0;
                    aplStack_290[6] = (longlong *)0x0;
                    aplStack_290[3] = (longlong *)0x0;
                    aplStack_290[4] = (longlong *)0x0;
                    aplStack_290[1] = (longlong *)0x0;
                    aplStack_290[2] = (longlong *)0x0;
                    local_298 = (ulonglong ***)0x0;
                    aplStack_290[0] = (longlong *)0x0;
                    pppuVar7 = (ulonglong ***)param_1[0x24];
                    pppuVar5 = local_298;
                    if (pppuVar7 != (ulonglong ***)0x0) {
                      (*(code *)(*pppuVar7)[1])(pppuVar7);
                      pppuVar5 = pppuVar7;
                      if (local_298 != (ulonglong ***)0x0) {
                        ppuVar8 = *local_298;
                        local_298 = pppuVar7;
                        (*(code *)ppuVar8[2])();
                        pppuVar5 = local_298;
                      }
                    }
                    local_298 = pppuVar5;
                    plVar1 = (longlong *)param_1[0x26];
                    if (plVar1 != (longlong *)0x0) {
                      (**(code **)(*plVar1 + 8))(plVar1);
                    }
                    plVar2 = aplStack_290[lStack_250];
                    aplStack_290[lStack_250] = plVar1;
                    if (plVar2 != (longlong *)0x0) {
                      (**(code **)(*plVar2 + 0x10))();
                    }
                    lStack_250 = lStack_250 + 1;
                    (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x148))
                              (*(longlong **)(*param_1 + 0x18),&local_98);
                    ppuVar8 = local_98;
                    local_98 = (ulonglong **)0x0;
                    plVar1 = (longlong *)param_1[0x28];
                    param_1[0x28] = (longlong)ppuVar8;
                    if (plVar1 != (longlong *)0x0) {
                      (**(code **)(*plVar1 + 0x10))();
                      ppuVar8 = local_98;
                      if (local_98 != (ulonglong **)0x0) {
                        local_98 = (ulonglong **)0x0;
                        (*(code *)(*ppuVar8)[2])();
                      }
                      ppuVar8 = (ulonglong **)param_1[0x28];
                    }
                    if (ppuVar8 == (ulonglong **)0x0) {
                      if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                        FUN_140b53500(DAT_14151e360,
                                      &PTR_s__opt_actions_runner__work_Platfo_140e493f8);
                        if (DAT_14151e360 == 0) {
                          uVar12 = 0;
                          plVar1 = aplStack_290[7];
                          goto joined_r0x0001404d5d53;
                        }
                      }
                      lVar10 = DAT_14151e360;
                      local_40 = (ulonglong *)((ulonglong)local_40 & 0xffffffffffffff00);
                      local_98 = &local_40;
                      cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
                      if (cVar6 == '\0') {
                        do {
                          local_98 = (ulonglong **)0x64;
                          FUN_140008100(&local_98);
                          local_98 = &local_40;
                          cVar6 = FUN_140b53dc0(lVar10,&PTR_DAT_140dc1aa0);
                        } while (cVar6 == '\0');
                      }
                      if (((ulonglong)local_40 & 1) == 0) {
                        do {
                          local_98 = (ulonglong **)0x64;
                          FUN_140008100(&local_98);
                        } while (((ulonglong)local_40 & 1) == 0);
                      }
                      uVar12 = 0;
                      plVar1 = aplStack_290[7];
                    }
                    else {
                      aplStack_90[7] = (longlong *)0x0;
                      lStack_50 = 0;
                      aplStack_90[5] = (longlong *)0x0;
                      aplStack_90[6] = (longlong *)0x0;
                      aplStack_90[3] = (longlong *)0x0;
                      aplStack_90[4] = (longlong *)0x0;
                      aplStack_90[1] = (longlong *)0x0;
                      aplStack_90[2] = (longlong *)0x0;
                      local_98 = (ulonglong **)0x0;
                      aplStack_90[0] = (longlong *)0x0;
                      ppuVar8 = (ulonglong **)param_1[0x25];
                      if (ppuVar8 != (ulonglong **)0x0) {
                        (*(code *)(*ppuVar8)[1])(ppuVar8);
                        ppuVar4 = local_98;
                        local_98 = ppuVar8;
                        if (ppuVar4 != (ulonglong **)0x0) {
                          (*(code *)(*ppuVar4)[2])();
                        }
                      }
                      plVar1 = (longlong *)param_1[0x27];
                      if (plVar1 != (longlong *)0x0) {
                        (**(code **)(*plVar1 + 8))(plVar1);
                      }
                      plVar2 = aplStack_90[lStack_50];
                      aplStack_90[lStack_50] = plVar1;
                      if (plVar2 != (longlong *)0x0) {
                        (**(code **)(*plVar2 + 0x10))();
                      }
                      lStack_50 = lStack_50 + 1;
                      (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x148))
                                (*(longlong **)(*param_1 + 0x18),&local_40);
                      puVar9 = local_40;
                      local_40 = (ulonglong *)0x0;
                      plVar2 = (longlong *)param_1[0x2a];
                      param_1[0x2a] = (longlong)puVar9;
                      if (plVar2 != (longlong *)0x0) {
                        (**(code **)(*plVar2 + 0x10))();
                        puVar9 = local_40;
                        if (local_40 != (ulonglong *)0x0) {
                          local_40 = (ulonglong *)0x0;
                          (**(code **)(*puVar9 + 0x10))();
                        }
                        puVar9 = (ulonglong *)param_1[0x2a];
                      }
                      uVar12 = CONCAT71((int7)((ulonglong)plVar1 >> 8),puVar9 != (ulonglong *)0x0);
                      if (puVar9 == (ulonglong *)0x0) {
                        if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                          FUN_140b53500(DAT_14151e360,
                                        &PTR_s__opt_actions_runner__work_Platfo_140e49420);
                          if (DAT_14151e360 == 0) goto LAB_1404d588e;
                        }
                        lVar10 = DAT_14151e360;
                        local_48 = local_48 & 0xffffffffffffff00;
                        local_40 = &local_48;
                        cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
                        if (cVar6 == '\0') {
                          do {
                            local_40 = (ulonglong *)0x64;
                            FUN_140008100(&local_40);
                            local_40 = &local_48;
                            cVar6 = FUN_140b53dc0(lVar10,&PTR_DAT_140dc1aa0);
                          } while (cVar6 == '\0');
                        }
                        if ((local_48 & 1) == 0) {
                          do {
                            local_40 = (ulonglong *)0x64;
                            FUN_140008100(&local_40);
                          } while ((local_48 & 1) == 0);
                        }
                      }
                      else {
                        *(undefined2 *)(param_1 + 0x2c) = 0x101;
                      }
LAB_1404d588e:
                      plVar1 = aplStack_90[7];
                      if (aplStack_90[7] != (longlong *)0x0) {
                        aplStack_90[7] = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      plVar1 = aplStack_90[6];
                      if (aplStack_90[6] != (longlong *)0x0) {
                        aplStack_90[6] = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      plVar1 = aplStack_90[5];
                      if (aplStack_90[5] != (longlong *)0x0) {
                        aplStack_90[5] = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      plVar1 = aplStack_90[4];
                      if (aplStack_90[4] != (longlong *)0x0) {
                        aplStack_90[4] = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      plVar1 = aplStack_90[3];
                      if (aplStack_90[3] != (longlong *)0x0) {
                        aplStack_90[3] = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      plVar1 = aplStack_90[2];
                      if (aplStack_90[2] != (longlong *)0x0) {
                        aplStack_90[2] = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      plVar1 = aplStack_90[1];
                      if (aplStack_90[1] != (longlong *)0x0) {
                        aplStack_90[1] = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      plVar1 = aplStack_90[0];
                      if (aplStack_90[0] != (longlong *)0x0) {
                        aplStack_90[0] = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      ppuVar8 = local_98;
                      bVar13 = local_98 != (ulonglong **)0x0;
                      local_98 = (ulonglong **)0x0;
                      plVar1 = aplStack_290[7];
                      if (bVar13) {
                        local_98 = (ulonglong **)0x0;
                        (*(code *)(*ppuVar8)[2])();
                        plVar1 = aplStack_290[7];
                      }
                    }
joined_r0x0001404d5d53:
                    aplStack_290[7] = plVar1;
                    if (plVar1 != (longlong *)0x0) {
                      aplStack_290[7] = (longlong *)0x0;
                      (**(code **)(*plVar1 + 0x10))();
                    }
                    plVar1 = aplStack_290[6];
                    if (aplStack_290[6] != (longlong *)0x0) {
                      aplStack_290[6] = (longlong *)0x0;
                      (**(code **)(*plVar1 + 0x10))();
                    }
                    plVar1 = aplStack_290[5];
                    if (aplStack_290[5] != (longlong *)0x0) {
                      aplStack_290[5] = (longlong *)0x0;
                      (**(code **)(*plVar1 + 0x10))();
                    }
                    plVar1 = aplStack_290[4];
                    if (aplStack_290[4] != (longlong *)0x0) {
                      aplStack_290[4] = (longlong *)0x0;
                      (**(code **)(*plVar1 + 0x10))();
                    }
                    plVar1 = aplStack_290[3];
                    if (aplStack_290[3] != (longlong *)0x0) {
                      aplStack_290[3] = (longlong *)0x0;
                      (**(code **)(*plVar1 + 0x10))();
                    }
                    plVar1 = aplStack_290[2];
                    if (aplStack_290[2] != (longlong *)0x0) {
                      aplStack_290[2] = (longlong *)0x0;
                      (**(code **)(*plVar1 + 0x10))();
                    }
                    plVar1 = aplStack_290[1];
                    if (aplStack_290[1] != (longlong *)0x0) {
                      aplStack_290[1] = (longlong *)0x0;
                      (**(code **)(*plVar1 + 0x10))();
                    }
                    plVar1 = aplStack_290[0];
                    if (aplStack_290[0] != (longlong *)0x0) {
                      aplStack_290[0] = (longlong *)0x0;
                      (**(code **)(*plVar1 + 0x10))();
                    }
                    pppuVar7 = local_298;
                    bVar13 = local_298 != (ulonglong ***)0x0;
                    local_298 = (ulonglong ***)0x0;
                    if (bVar13) {
                      local_298 = (ulonglong ***)0x0;
                      (*(code *)(*pppuVar7)[2])();
                    }
                  }
                  if (local_c0 != 0) {
                    uVar11 = CONCAT44(uStack_ac,local_b0) - local_c0;
                    lVar10 = local_c0;
                    if (0xfff < uVar11) {
                      lVar10 = *(longlong *)(local_c0 + -8);
                      if (0x1f < (ulonglong)((local_c0 + -8) - lVar10)) goto LAB_1404d5d5e;
                      uVar11 = uVar11 + 0x27;
                    }
                    thunk_FUN_140b68ba8(lVar10,uVar11);
                  }
                }
                if (local_f8 != 0) {
                  uVar11 = CONCAT44(uStack_e4,local_e8) - local_f8;
                  lVar10 = local_f8;
                  if (0xfff < uVar11) {
                    lVar10 = *(longlong *)(local_f8 + -8);
                    if (0x1f < (ulonglong)((local_f8 + -8) - lVar10)) {
LAB_1404d5d5e:
                    /* WARNING: Subroutine does not return */
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    }
                    uVar11 = uVar11 + 0x27;
                  }
                  thunk_FUN_140b68ba8(lVar10,uVar11);
                }
                goto LAB_1404d52ff;
              }
            }
          }
        }
      }
    }
  }
LAB_1404d52fd:
  uVar12 = 0;
LAB_1404d52ff:
  return uVar12 & 0xffffffff;
}

