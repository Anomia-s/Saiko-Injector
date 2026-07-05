/**
 * Function: gtao_linear_depth
 * Address:  1404cca90
 * Signature: undefined gtao_linear_depth(void)
 * Body size: 4161 bytes
 */


ulonglong gtao_linear_depth(longlong *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  byte bVar13;
  longlong *plVar14;
  undefined8 unaff_R14;
  undefined **ppuVar15;
  undefined8 local_188;
  undefined4 *puStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  longlong local_158;
  longlong *plStack_150;
  longlong *local_148;
  undefined1 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  undefined7 uStack_e8;
  undefined4 uStack_e1;
  undefined5 uStack_dd;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined4 local_c7;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if (param_1 != (longlong *)0x0) {
    ppuVar15 = (undefined **)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if (param_3 == 0 || param_2 == 0) goto LAB_1404cd92b;
    if ((*param_1 != 0) && (iVar7 = FUN_140220660(), iVar7 != (int)param_1[0x21])) {
      plVar14 = (longlong *)param_1[0x1d];
      if (plVar14 != (longlong *)0x0) {
        param_1[0x1d] = 0;
        (**(code **)(*plVar14 + 0x10))();
      }
      plVar14 = (longlong *)param_1[0x1c];
      if (plVar14 != (longlong *)0x0) {
        param_1[0x1c] = 0;
        (**(code **)(*plVar14 + 0x10))();
      }
      cVar6 = FUN_1404cc330(param_1);
      if (cVar6 == '\0') goto LAB_1404cd928;
    }
    if ((param_2 == (int)param_1[1]) && (param_3 == *(int *)((longlong)param_1 + 0xc))) {
LAB_1404cd1c0:
      plVar14 = (longlong *)param_1[0x1f];
      if (plVar14 != (longlong *)0x0) {
        param_1[0x1f] = 0;
        (**(code **)(*plVar14 + 0x10))();
      }
      param_1[0x20] = 0;
      param_1[0x22] = 0;
      cVar6 = FUN_1404ce650(param_1);
      if (((cVar6 != '\0') && (param_1[9] != 0)) && (param_1[10] != 0)) {
        local_188 = 0;
        puStack_180 = (undefined4 *)0x0;
        local_178 = 0;
        uStack_174 = 0;
        uStack_170 = CONCAT31(uStack_170._1_3_,1);
        plVar14 = (longlong *)param_1[8];
        if (plVar14 == (longlong *)0x0) {
          bVar13 = 9;
          puVar12 = (undefined4 *)0x0;
        }
        else {
          lVar11 = (**(code **)(*plVar14 + 0x28))(plVar14);
          bVar13 = *(char *)(lVar11 + 0x3b) + 9;
          puVar12 = (undefined4 *)CONCAT44(uStack_174,local_178);
        }
        uStack_100 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0xffffffffffffff;
        uStack_e1 = CONCAT31(uStack_e1._1_3_,0xff);
        uStack_f8 = (ulonglong)bVar13;
        local_108 = plVar14;
        if (puStack_180 == puVar12) {
          FUN_140197fb0(&local_188,puStack_180,&local_108);
          puVar12 = (undefined4 *)CONCAT44(uStack_174,local_178);
        }
        else {
          *(undefined8 *)(puStack_180 + 8) = 0xffffffffffffffff;
          local_108._0_4_ = SUB84(plVar14,0);
          local_108._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
          *(ulonglong *)(puStack_180 + 4) = uStack_f8;
          *(undefined8 *)(puStack_180 + 6) = 0;
          *puStack_180 = (undefined4)local_108;
          puStack_180[1] = local_108._4_4_;
          puStack_180[2] = 0;
          puStack_180[3] = 0;
          puStack_180 = puStack_180 + 10;
        }
        local_98 = (longlong *)param_1[9];
        uStack_90 = 0;
        local_88 = 1;
        uStack_80 = 0xffffffff00000000;
        local_78 = 0xffffffff00000000;
        if (puStack_180 == puVar12) {
          FUN_140197fb0(&local_188,puStack_180,&local_98);
          puVar12 = (undefined4 *)CONCAT44(uStack_174,local_178);
        }
        else {
          *(undefined8 *)(puStack_180 + 8) = 0xffffffff00000000;
          local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
          *(undefined8 *)(puStack_180 + 4) = 1;
          *(undefined8 *)(puStack_180 + 6) = 0xffffffff00000000;
          *puStack_180 = (undefined4)local_98;
          puStack_180[1] = local_98._4_4_;
          puStack_180[2] = 0;
          puStack_180[3] = 0;
          puStack_180 = puStack_180 + 10;
        }
        local_130 = param_1[10];
        uStack_128 = 0;
        uStack_10c = 0xffffffff;
        local_120 = 2;
        uStack_11c = 0;
        uStack_118 = 0;
        uStack_114 = 1;
        uStack_110 = 0;
        if (puStack_180 == puVar12) {
          FUN_140197fb0(&local_188,puStack_180,&local_130);
        }
        else {
          *(undefined8 *)(puStack_180 + 8) = 0xffffffff00000000;
          local_130._4_4_ = (undefined4)(local_130 >> 0x20);
          *(undefined8 *)(puStack_180 + 4) = 2;
          *(undefined8 *)(puStack_180 + 6) = 0x100000000;
          *puStack_180 = (undefined4)local_130;
          puStack_180[1] = local_130._4_4_;
          puStack_180[2] = 0;
          puStack_180[3] = 0;
          puStack_180 = puStack_180 + 10;
        }
        (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x178))();
        plVar10 = local_108;
        local_108 = (longlong *)0x0;
        plVar14 = (longlong *)param_1[0x15];
        param_1[0x15] = (longlong)plVar10;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))();
          plVar14 = local_108;
          if (local_108 != (longlong *)0x0) {
            local_108 = (longlong *)0x0;
            (**(code **)(*plVar14 + 0x10))();
          }
          plVar10 = (longlong *)param_1[0x15];
        }
        if ((plVar10 == (longlong *)0x0) &&
           ((7 < *(byte *)(DAT_14151e360 + 0x39) ||
            (FUN_140b53500(DAT_14151e360), DAT_14151e360 != 0)))) {
          lVar11 = DAT_14151e360;
          local_98 = (longlong *)((ulonglong)local_98 & 0xffffffffffffff00);
          local_108 = &local_98;
          cVar6 = FUN_140b53dc0(DAT_14151e360);
          if (cVar6 == '\0') {
            ppuVar15 = &PTR_DAT_140dc1aa0;
            do {
              local_108 = (longlong *)0x64;
              FUN_140008100(&local_108);
              local_108 = &local_98;
              cVar6 = FUN_140b53dc0(lVar11);
            } while (cVar6 == '\0');
          }
          if (((ulonglong)local_98 & 1) == 0) {
            do {
              local_108 = (longlong *)0x64;
              FUN_140008100(&local_108);
            } while (((ulonglong)local_98 & 1) == 0);
          }
        }
        if (local_188 != 0) {
          lVar11 = local_188;
          if ((0xfff < (ulonglong)(CONCAT44(uStack_174,local_178) - local_188)) &&
             (lVar11 = *(longlong *)(local_188 + -8), 0x1f < (ulonglong)((local_188 + -8) - lVar11))
             ) goto LAB_1404cdab8;
          thunk_FUN_140b68ba8(lVar11);
        }
        if ((((plVar10 != (longlong *)0x0) && (param_1[10] != 0)) && (param_1[9] != 0)) &&
           (param_1[0xb] != 0)) {
          local_158 = 0;
          plStack_150 = (longlong *)0x0;
          local_148 = (longlong *)0x0;
          local_140 = 1;
          plVar14 = (longlong *)param_1[8];
          if (plVar14 == (longlong *)0x0) {
            bVar13 = 9;
          }
          else {
            lVar11 = (**(code **)(*plVar14 + 0x28))(plVar14);
            bVar13 = *(char *)(lVar11 + 0x3b) + 9;
          }
          uStack_100 = 0;
          uStack_f0 = 0;
          uStack_e8 = 0xffffffffffffff;
          uStack_e1 = CONCAT31(uStack_e1._1_3_,0xff);
          uStack_f8 = (ulonglong)bVar13;
          local_108 = plVar14;
          if (plStack_150 == local_148) {
            FUN_140197fb0(&local_158,plStack_150,&local_108);
          }
          else {
            plStack_150[4] = -1;
            local_108._0_4_ = SUB84(plVar14,0);
            local_108._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
            plStack_150[2] = uStack_f8;
            plStack_150[3] = 0;
            *(undefined4 *)plStack_150 = (undefined4)local_108;
            *(undefined4 *)((longlong)plStack_150 + 4) = local_108._4_4_;
            *(undefined4 *)(plStack_150 + 1) = 0;
            *(undefined4 *)((longlong)plStack_150 + 0xc) = 0;
            plStack_150 = plStack_150 + 5;
          }
          local_98 = (longlong *)param_1[10];
          uStack_90 = 0;
          local_88 = 1;
          uStack_80 = 0xffffffff00000000;
          local_78 = 0xffffffff00000000;
          if (plStack_150 == local_148) {
            FUN_140197fb0(&local_158,plStack_150,&local_98);
          }
          else {
            plStack_150[4] = -0x100000000;
            plStack_150[2] = 1;
            plStack_150[3] = -0x100000000;
            *plStack_150 = (longlong)local_98;
            plStack_150[1] = 0;
            plStack_150 = plStack_150 + 5;
          }
          local_130 = param_1[9];
          uStack_128 = 1;
          local_120 = 1;
          uStack_11c = 0;
          uStack_118 = 0;
          uStack_114 = 0xffffffff;
          uStack_110 = 0;
          uStack_10c = 0xffffffff;
          if (plStack_150 == local_148) {
            FUN_140197fb0(&local_158,plStack_150,&local_130);
          }
          else {
            plStack_150[4] = -0x100000000;
            local_130._4_4_ = (undefined4)(local_130 >> 0x20);
            plStack_150[2] = 1;
            plStack_150[3] = -0x100000000;
            *(undefined4 *)plStack_150 = (undefined4)local_130;
            *(undefined4 *)((longlong)plStack_150 + 4) = local_130._4_4_;
            *(undefined4 *)(plStack_150 + 1) = 1;
            *(undefined4 *)((longlong)plStack_150 + 0xc) = 0;
            plStack_150 = plStack_150 + 5;
          }
          local_188 = param_1[0xb];
          puStack_180 = (undefined4 *)0x0;
          uStack_164 = 0xffffffff;
          local_178 = 2;
          uStack_174 = 0;
          uStack_170 = 0;
          uStack_16c = 1;
          uStack_168 = 0;
          if (plStack_150 == local_148) {
            FUN_140197fb0(&local_158,plStack_150,&local_188);
          }
          else {
            plStack_150[4] = -0x100000000;
            local_188._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
            plStack_150[2] = 2;
            plStack_150[3] = 0x100000000;
            *(undefined4 *)plStack_150 = (undefined4)local_188;
            *(undefined4 *)((longlong)plStack_150 + 4) = local_188._4_4_;
            *(undefined4 *)(plStack_150 + 1) = 0;
            *(undefined4 *)((longlong)plStack_150 + 0xc) = 0;
            plStack_150 = plStack_150 + 5;
          }
          (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x178))
                    (*(longlong **)(*param_1 + 0x18),&local_108);
          plVar10 = local_108;
          local_108 = (longlong *)0x0;
          plVar14 = (longlong *)param_1[0x19];
          param_1[0x19] = (longlong)plVar10;
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x10))();
            plVar14 = local_108;
            if (local_108 != (longlong *)0x0) {
              local_108 = (longlong *)0x0;
              (**(code **)(*plVar14 + 0x10))();
            }
            plVar10 = (longlong *)param_1[0x19];
          }
          if ((plVar10 == (longlong *)0x0) &&
             ((7 < *(byte *)(DAT_14151e360 + 0x39) ||
              (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49000),
              DAT_14151e360 != 0)))) {
            lVar11 = DAT_14151e360;
            local_98 = (longlong *)((ulonglong)local_98 & 0xffffffffffffff00);
            local_108 = &local_98;
            cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
            if (cVar6 == '\0') {
              ppuVar15 = &PTR_DAT_140dc1aa0;
              do {
                local_108 = (longlong *)0x64;
                FUN_140008100(&local_108);
                local_108 = &local_98;
                cVar6 = FUN_140b53dc0(lVar11,&PTR_DAT_140dc1aa0);
              } while (cVar6 == '\0');
            }
            if (((ulonglong)local_98 & 1) == 0) {
              do {
                local_108 = (longlong *)0x64;
                FUN_140008100(&local_108);
              } while (((ulonglong)local_98 & 1) == 0);
            }
          }
          if (local_158 != 0) {
            uVar9 = (longlong)local_148 - local_158;
            lVar11 = local_158;
            if (0xfff < uVar9) {
              lVar11 = *(longlong *)(local_158 + -8);
              if (0x1f < (ulonglong)((local_158 + -8) - lVar11)) goto LAB_1404cdab8;
              uVar9 = uVar9 + 0x27;
            }
            thunk_FUN_140b68ba8(lVar11,uVar9);
          }
          if ((plVar10 != (longlong *)0x0) &&
             (local_108 = (longlong *)param_1[0xb], local_108 != (longlong *)0x0)) {
            local_98 = (longlong *)0x0;
            uStack_90 = 0;
            local_88 = 0;
            uStack_80 = CONCAT71(uStack_80._1_7_,1);
            uStack_100 = 0;
            uStack_f8 = 1;
            uStack_f0 = 0xffffffff00000000;
            uStack_e8 = 0xffffff00000000;
            uStack_e1 = CONCAT31(uStack_e1._1_3_,0xff);
            FUN_140197fb0(&local_98,0,&local_108);
            (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x178))
                      (*(longlong **)(*param_1 + 0x18),&local_108);
            lVar11 = (longlong)local_108;
            local_108 = (longlong *)0x0;
            plVar14 = (longlong *)param_1[0x1e];
            param_1[0x1e] = lVar11;
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 0x10))();
              plVar14 = local_108;
              if (local_108 != (longlong *)0x0) {
                local_108 = (longlong *)0x0;
                (**(code **)(*plVar14 + 0x10))();
              }
              lVar11 = param_1[0x1e];
            }
            ppuVar15 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar15 >> 8),lVar11 != 0);
            if ((lVar11 == 0) &&
               ((7 < *(byte *)(DAT_14151e360 + 0x39) ||
                (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49028),
                DAT_14151e360 != 0)))) {
              lVar11 = DAT_14151e360;
              local_130 = local_130 & 0xffffffffffffff00;
              local_108 = &local_130;
              cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
              if (cVar6 == '\0') {
                do {
                  local_108 = (longlong *)0x64;
                  FUN_140008100(&local_108);
                  local_108 = &local_130;
                  cVar6 = FUN_140b53dc0(lVar11,&PTR_DAT_140dc1aa0);
                } while (cVar6 == '\0');
              }
              if ((local_130 & 1) == 0) {
                do {
                  local_108 = (longlong *)0x64;
                  FUN_140008100(&local_108);
                } while ((local_130 & 1) == 0);
              }
            }
            if (local_98 != (longlong *)0x0) {
              uVar9 = local_88 - (longlong)local_98;
              plVar14 = local_98;
              if (0xfff < uVar9) {
                plVar14 = (longlong *)local_98[-1];
                if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)plVar14))) {
LAB_1404cdab8:
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
                uVar9 = uVar9 + 0x27;
              }
              thunk_FUN_140b68ba8(plVar14,uVar9);
            }
            goto LAB_1404cd92b;
          }
        }
      }
    }
    else {
      *(int *)(param_1 + 1) = param_2;
      *(int *)((longlong)param_1 + 0xc) = param_3;
      ppuVar15 = *(undefined ***)(*param_1 + 0x18);
      uStack_e8 = 0;
      uStack_e1 = 0;
      uStack_dd = 0;
      local_d8 = 0;
      local_d0 = 0xf;
      local_c8 = 1;
      local_c0 = 0;
      local_bc = 0;
      local_a4 = 0;
      local_a0 = 0;
      local_c7 = 0x100;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_108 = (longlong *)CONCAT44(param_3,param_2);
      uStack_100 = 0x100000001;
      uStack_f8 = 0x100000005;
      uStack_f0 = CONCAT26((short)((ulonglong)uStack_f0 >> 0x30),0x32300000000);
      local_88 = 0;
      uStack_80 = 0;
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      pcVar8 = (char *)FUN_140b65d30(0x20);
      local_88 = 0x11;
      uStack_80 = 0x1f;
      builtin_strncpy(pcVar8,"GTAO Linear Depth",0x12);
      if (local_d0 < 0x11) {
        local_98 = (longlong *)pcVar8;
        FUN_1400069b0(&uStack_e8,0x11);
      }
      else {
        puVar12 = (undefined4 *)CONCAT17((undefined1)uStack_e1,uStack_e8);
        local_d8 = 0x11;
        uVar1 = *(undefined4 *)pcVar8;
        uVar2 = *(undefined4 *)(pcVar8 + 4);
        uVar3 = *(undefined4 *)(pcVar8 + 8);
        uVar4 = *(undefined4 *)(pcVar8 + 0xc);
        *(char *)(puVar12 + 4) = pcVar8[0x10];
        *puVar12 = uVar1;
        puVar12[1] = uVar2;
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        *(undefined1 *)((longlong)puVar12 + 0x11) = 0;
        local_98 = (longlong *)pcVar8;
      }
      local_a4 = 0x40;
      local_a0 = 1;
      thunk_FUN_140b68ba8(pcVar8,0x20);
      (**(code **)(*ppuVar15 + 0x30))(ppuVar15,&local_98,&local_108);
      pcVar8 = (char *)local_98;
      local_98 = (longlong *)0x0;
      plVar14 = (longlong *)param_1[9];
      param_1[9] = (longlong)pcVar8;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))();
        plVar14 = local_98;
        if (local_98 != (longlong *)0x0) {
          local_98 = (longlong *)0x0;
          (**(code **)(*plVar14 + 0x10))();
        }
        pcVar8 = (char *)param_1[9];
      }
      if (pcVar8 == (char *)0x0) {
        if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
           (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e48f60),
           DAT_14151e360 != 0)) {
          lVar11 = DAT_14151e360;
          local_130 = local_130 & 0xffffffffffffff00;
          local_98 = &local_130;
          cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_98);
          if (cVar6 == '\0') {
            do {
              local_98 = (longlong *)0x64;
              FUN_140008100(&local_98);
              local_98 = &local_130;
              cVar6 = FUN_140b53dc0(lVar11,&PTR_DAT_140dc1aa0,&local_98);
            } while (cVar6 == '\0');
          }
          if ((local_130 & 1) == 0) {
            do {
              local_98 = (longlong *)0x64;
              FUN_140008100(&local_98);
            } while ((local_130 & 1) == 0);
          }
        }
      }
      else {
        if (0xf < local_d0) {
          lVar5 = CONCAT17((undefined1)uStack_e1,uStack_e8);
          uVar9 = local_d0 + 1;
          lVar11 = lVar5;
          if (0xfff < uVar9) {
            lVar11 = *(longlong *)(lVar5 + -8);
            if (0x1f < (ulonglong)((lVar5 + -8) - lVar11)) goto LAB_1404cdab8;
            uVar9 = local_d0 + 0x28;
          }
          thunk_FUN_140b68ba8(lVar11,uVar9);
        }
        uStack_dd = 0;
        local_d0 = 0xf;
        local_c8 = 1;
        local_c0 = 0;
        local_bc = 0;
        local_c7 = 0x100;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        local_108 = (longlong *)CONCAT44(param_3,param_2);
        uStack_100 = 0x100000001;
        uStack_f8 = 0x100000001;
        uStack_f0 = CONCAT26((short)((ulonglong)uStack_f0 >> 0x30),0x30d00000000);
        local_d8 = 0xb;
        uStack_e8 = 0x6152204f415447;
        uStack_e1 = 0x4f412077;
        local_a4 = 0x40;
        local_a0 = 1;
        (**(code **)(*ppuVar15 + 0x30))(ppuVar15,&local_98,&local_108);
        plVar10 = local_98;
        local_98 = (longlong *)0x0;
        plVar14 = (longlong *)param_1[10];
        param_1[10] = (longlong)plVar10;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))();
          plVar14 = local_98;
          if (local_98 != (longlong *)0x0) {
            local_98 = (longlong *)0x0;
            (**(code **)(*plVar14 + 0x10))();
          }
          plVar10 = (longlong *)param_1[10];
        }
        if (plVar10 != (longlong *)0x0) {
          if (0xf < local_d0) {
            lVar5 = CONCAT17((undefined1)uStack_e1,uStack_e8);
            uVar9 = local_d0 + 1;
            lVar11 = lVar5;
            if (0xfff < uVar9) {
              lVar11 = *(longlong *)(lVar5 + -8);
              if (0x1f < (ulonglong)((lVar5 + -8) - lVar11)) goto LAB_1404cdab8;
              uVar9 = local_d0 + 0x28;
            }
            thunk_FUN_140b68ba8(lVar11,uVar9);
          }
          uStack_e8 = 0;
          uStack_e1 = 0;
          uStack_dd = 0;
          local_d8 = 0;
          local_d0 = 0xf;
          local_c8 = 1;
          local_c0 = 0;
          local_bc = 0;
          local_a4 = 0;
          local_a0 = 0;
          local_c7 = 0x100;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          local_108 = (longlong *)CONCAT44(param_3,param_2);
          uStack_100 = 0x100000001;
          uStack_f8 = 0x100000001;
          uStack_f0 = CONCAT26((short)((ulonglong)uStack_f0 >> 0x30),0x30d00000000);
          local_88 = 0;
          uStack_80 = 0;
          local_98 = (longlong *)0x0;
          uStack_90 = 0;
          pcVar8 = (char *)FUN_140b65d30(0x20);
          local_88 = 0x10;
          uStack_80 = 0x1f;
          builtin_strncpy(pcVar8,"GTAO Denoised AO",0x11);
          if (local_d0 < 0x10) {
            local_98 = (longlong *)pcVar8;
            FUN_1400069b0(&uStack_e8,0x10);
          }
          else {
            puVar12 = (undefined4 *)CONCAT17((undefined1)uStack_e1,uStack_e8);
            local_d8 = 0x10;
            uVar1 = *(undefined4 *)(pcVar8 + 4);
            uVar2 = *(undefined4 *)(pcVar8 + 8);
            uVar3 = *(undefined4 *)(pcVar8 + 0xc);
            *puVar12 = *(undefined4 *)pcVar8;
            puVar12[1] = uVar1;
            puVar12[2] = uVar2;
            puVar12[3] = uVar3;
            *(undefined1 *)(puVar12 + 4) = 0;
            local_98 = (longlong *)pcVar8;
          }
          local_a4 = 0x40;
          local_a0 = 1;
          thunk_FUN_140b68ba8(pcVar8,0x20);
          (**(code **)(*ppuVar15 + 0x30))(ppuVar15,&local_98,&local_108);
          pcVar8 = (char *)local_98;
          local_98 = (longlong *)0x0;
          plVar14 = (longlong *)param_1[0xb];
          param_1[0xb] = (longlong)pcVar8;
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x10))();
            plVar14 = local_98;
            if (local_98 != (longlong *)0x0) {
              local_98 = (longlong *)0x0;
              (**(code **)(*plVar14 + 0x10))();
            }
            pcVar8 = (char *)param_1[0xb];
          }
          if ((pcVar8 == (char *)0x0) &&
             ((7 < *(byte *)(DAT_14151e360 + 0x39) ||
              (FUN_140b53500(DAT_14151e360), DAT_14151e360 != 0)))) {
            lVar11 = DAT_14151e360;
            local_130 = local_130 & 0xffffffffffffff00;
            local_98 = &local_130;
            cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_98);
            if (cVar6 == '\0') {
              ppuVar15 = &PTR_DAT_140dc1aa0;
              do {
                local_98 = (longlong *)0x64;
                FUN_140008100(&local_98);
                local_98 = &local_130;
                cVar6 = FUN_140b53dc0(lVar11,&PTR_DAT_140dc1aa0,&local_98);
              } while (cVar6 == '\0');
            }
            if ((local_130 & 1) == 0) {
              do {
                local_98 = (longlong *)0x64;
                FUN_140008100(&local_98);
              } while ((local_130 & 1) == 0);
            }
          }
          if (0xf < local_d0) {
            lVar5 = CONCAT17((undefined1)uStack_e1,uStack_e8);
            lVar11 = lVar5;
            if ((0xfff < local_d0 + 1) &&
               (lVar11 = *(longlong *)(lVar5 + -8), 0x1f < (ulonglong)((lVar5 + -8) - lVar11)))
            goto LAB_1404cdab8;
            thunk_FUN_140b68ba8(lVar11);
          }
          if (pcVar8 == (char *)0x0) goto LAB_1404cd928;
          goto LAB_1404cd1c0;
        }
        if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
           (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e48f88),
           DAT_14151e360 != 0)) {
          lVar11 = DAT_14151e360;
          local_130 = local_130 & 0xffffffffffffff00;
          local_98 = &local_130;
          cVar6 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_98);
          if (cVar6 == '\0') {
            do {
              local_98 = (longlong *)0x64;
              FUN_140008100(&local_98);
              local_98 = &local_130;
              cVar6 = FUN_140b53dc0(lVar11,&PTR_DAT_140dc1aa0,&local_98);
            } while (cVar6 == '\0');
          }
          if ((local_130 & 1) == 0) {
            do {
              local_98 = (longlong *)0x64;
              FUN_140008100(&local_98);
            } while ((local_130 & 1) == 0);
          }
        }
      }
      if (0xf < local_d0) {
        lVar5 = CONCAT17((undefined1)uStack_e1,uStack_e8);
        uVar9 = local_d0 + 1;
        lVar11 = lVar5;
        if (0xfff < uVar9) {
          lVar11 = *(longlong *)(lVar5 + -8);
          if (0x1f < (ulonglong)((lVar5 + -8) - lVar11)) goto LAB_1404cdab8;
          uVar9 = local_d0 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar11,uVar9);
      }
    }
  }
LAB_1404cd928:
  ppuVar15 = (undefined **)0x0;
LAB_1404cd92b:
  return (ulonglong)ppuVar15 & 0xffffffff;
}

