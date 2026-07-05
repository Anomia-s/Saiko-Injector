/**
 * Function: nametag_glyph_instances
 * Address:  140195e60
 * Signature: undefined nametag_glyph_instances(void)
 * Body size: 2566 bytes
 */


ulonglong nametag_glyph_instances(longlong *param_1,longlong param_2,uint param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  char cVar9;
  longlong ****pppplVar10;
  longlong ***ppplVar11;
  longlong **pplVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  longlong local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined8 local_114;
  undefined4 local_10c;
  longlong ***local_108;
  undefined8 local_100;
  undefined4 *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  undefined5 local_d8;
  undefined3 uStack_d3;
  undefined5 uStack_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined4 local_c0;
  longlong ****local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  undefined5 local_88;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined4 uStack_81;
  undefined1 local_7d;
  undefined1 uStack_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_70;
  longlong **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  *param_1 = param_2;
  *(uint *)(param_1 + 8) = param_3;
  plVar3 = *(longlong **)(param_2 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    directory_iterator_directory_iterator(&local_b8,param_2,"nametag.vsh.hlsl",1);
    pppplVar10 = local_b8;
    local_b8 = (longlong ****)0x0;
    plVar13 = (longlong *)param_1[1];
    param_1[1] = (longlong)pppplVar10;
    if ((plVar13 != (longlong *)0x0) &&
       ((**(code **)(*plVar13 + 0x10))(), pppplVar10 = local_b8, local_b8 != (longlong ****)0x0)) {
      local_b8 = (longlong ****)0x0;
      (*(code *)(*pppplVar10)[2])();
    }
    directory_iterator_directory_iterator(&local_b8,param_2,"nametag.psh.hlsl");
    pppplVar10 = local_b8;
    local_b8 = (longlong ****)0x0;
    plVar13 = (longlong *)param_1[2];
    param_1[2] = (longlong)pppplVar10;
    if ((plVar13 != (longlong *)0x0) &&
       ((**(code **)(*plVar13 + 0x10))(), pppplVar10 = local_b8, local_b8 != (longlong ****)0x0)) {
      local_b8 = (longlong ****)0x0;
      (*(code *)(*pppplVar10)[2])();
    }
    if ((param_1[1] != 0) && (param_1[2] != 0)) {
      local_130 = 0;
      uStack_128._0_4_ = 0;
      uStack_128._4_4_ = 0;
      local_120 = 0;
      uStack_11c = 0;
      uStack_118 = 0;
      local_114 = 0x10000000080;
      local_10c = 0x180;
      local_b8 = (longlong ****)0x1000a00000000;
      FUN_140029790(&local_130,0,&local_b8);
      puVar8 = (undefined8 *)CONCAT44(uStack_128._4_4_,(undefined4)uStack_128);
      local_108 = (longlong ***)&DAT_1000500000000;
      if (puVar8 == (undefined8 *)CONCAT44(uStack_11c,local_120)) {
        FUN_140029790(&local_130,puVar8,&local_108);
        if (uStack_128 != (undefined8 *)CONCAT44(uStack_11c,local_120)) goto LAB_140195fe7;
LAB_140196125:
        local_68 = (longlong **)0x1000100000001;
        FUN_140029790(&local_130,uStack_128,&local_68);
        if (uStack_128 != (undefined8 *)CONCAT44(uStack_11c,local_120)) goto LAB_140196011;
LAB_140196153:
        local_40 = (longlong *)0x1000b00000000;
        FUN_140029790(&local_130,uStack_128,&local_40);
      }
      else {
        *puVar8 = &DAT_1000500000000;
        uStack_128 = (undefined8 *)(CONCAT44(uStack_128._4_4_,(undefined4)uStack_128) + 8);
        if (uStack_128 == (undefined8 *)CONCAT44(uStack_11c,local_120)) goto LAB_140196125;
LAB_140195fe7:
        local_68 = (longlong **)0x1000100000001;
        *uStack_128 = 0x1000100000001;
        uStack_128 = uStack_128 + 1;
        if (uStack_128 == (undefined8 *)CONCAT44(uStack_11c,local_120)) goto LAB_140196153;
LAB_140196011:
        local_40 = (longlong *)0x1000b00000000;
        *uStack_128 = 0x1000b00000000;
        uStack_128 = uStack_128 + 1;
      }
      (**(code **)(*plVar3 + 0x168))(plVar3,&local_b8);
      pppplVar10 = local_b8;
      local_b8 = (longlong ****)0x0;
      plVar13 = (longlong *)param_1[3];
      param_1[3] = (longlong)pppplVar10;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x10))();
        pppplVar10 = local_b8;
        if (local_b8 != (longlong ****)0x0) {
          local_b8 = (longlong ****)0x0;
          (*(code *)(*pppplVar10)[2])();
        }
        pppplVar10 = (longlong ****)param_1[3];
      }
      if (pppplVar10 == (longlong ****)0x0) {
        if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
          FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140deedf8);
          if (DAT_14151e360 != 0) goto LAB_140196360;
        }
        else {
LAB_140196360:
          lVar14 = DAT_14151e360;
          local_108 = (longlong ***)((ulonglong)local_108 & 0xffffffffffffff00);
          local_b8 = &local_108;
          cVar9 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
          if (cVar9 == '\0') {
            do {
              local_b8 = (longlong ****)0x64;
              FUN_140008100(&local_b8);
              local_b8 = &local_108;
              cVar9 = FUN_140b53dc0(lVar14,&PTR_DAT_140dc1aa0);
            } while (cVar9 == '\0');
          }
          if (((ulonglong)local_108 & 1) == 0) {
            do {
              local_b8 = (longlong ****)0x64;
              FUN_140008100(&local_b8);
            } while (((ulonglong)local_108 & 1) == 0);
          }
        }
        uVar17 = 0;
      }
      else {
        lStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0xf;
        local_88 = 0;
        uStack_83 = 0;
        uStack_81 = 0;
        uStack_7c = 0;
        local_78 = 1;
        local_74 = 0;
        local_70 = 0;
        local_b8 = (longlong ****)0x70;
        uStack_82 = 1;
        local_7d = 1;
        local_b0 = 0x4000000000;
        FUN_1400069b0(&lStack_a8,0x11);
        (**(code **)(*plVar3 + 0x88))(plVar3,&local_108);
        ppplVar11 = local_108;
        local_108 = (longlong ***)0x0;
        plVar13 = (longlong *)param_1[6];
        param_1[6] = (longlong)ppplVar11;
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))();
          ppplVar11 = local_108;
          if (local_108 != (longlong ***)0x0) {
            local_108 = (longlong ***)0x0;
            (*(code *)(*ppplVar11)[2])();
          }
          ppplVar11 = (longlong ***)param_1[6];
        }
        if (ppplVar11 == (longlong ***)0x0) {
          if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
            FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140deee20);
            if (DAT_14151e360 != 0) goto LAB_14019640b;
          }
          else {
LAB_14019640b:
            lVar14 = DAT_14151e360;
            local_68 = (longlong **)((ulonglong)local_68 & 0xffffffffffffff00);
            local_108 = &local_68;
            cVar9 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
            if (cVar9 == '\0') {
              do {
                local_108 = (longlong ***)0x64;
                FUN_140008100(&local_108);
                local_108 = &local_68;
                cVar9 = FUN_140b53dc0(lVar14,&PTR_DAT_140dc1aa0);
              } while (cVar9 == '\0');
            }
            if (((ulonglong)local_68 & 1) == 0) {
              do {
                local_108 = (longlong ***)0x64;
                FUN_140008100(&local_108);
              } while (((ulonglong)local_68 & 1) == 0);
            }
          }
          uVar17 = 0;
        }
        else {
          puStack_f8 = (undefined4 *)0x0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_e0 = 0xf;
          local_d8 = 0;
          uStack_d3 = 0;
          uStack_d0 = 0;
          local_c8 = 1;
          local_c4 = 0;
          local_c0 = 0;
          local_108 = (longlong ***)((ulonglong)param_3 << 6);
          local_100 = 0x40;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = (longlong **)0x0;
          uStack_60 = 0;
          pplVar12 = (longlong **)FUN_140b65d30(0x20);
          local_58 = 0x17;
          uStack_50 = 0x1f;
          *(undefined4 *)pplVar12 = 0x656d616e;
          builtin_strncpy((char *)((longlong)pplVar12 + 4),"tag ",4);
          *(undefined4 *)(pplVar12 + 1) = 0x70796c67;
          builtin_strncpy((char *)((longlong)pplVar12 + 0xc),"h in",4);
          builtin_strncpy((char *)((longlong)pplVar12 + 0xf),"nstances",8);
          *(char *)((longlong)pplVar12 + 0x17) = '\0';
          if (local_e0 < 0x17) {
            local_68 = pplVar12;
            FUN_1400069b0(&puStack_f8,0x17);
          }
          else {
            uStack_e8 = 0x17;
            uVar4 = *(undefined4 *)pplVar12;
            uVar5 = *(undefined4 *)((longlong)pplVar12 + 4);
            uVar6 = *(undefined4 *)(pplVar12 + 1);
            uVar7 = *(undefined4 *)((longlong)pplVar12 + 0xc);
            uVar2 = *(undefined4 *)(pplVar12 + 2);
            uVar1 = *(undefined2 *)((longlong)pplVar12 + 0x14);
            *(char *)((longlong)puStack_f8 + 0x16) = *(char *)((longlong)pplVar12 + 0x16);
            *(undefined2 *)(puStack_f8 + 5) = uVar1;
            puStack_f8[4] = uVar2;
            *puStack_f8 = uVar4;
            puStack_f8[1] = uVar5;
            puStack_f8[2] = uVar6;
            puStack_f8[3] = uVar7;
            *(undefined1 *)((longlong)puStack_f8 + 0x17) = 0;
            local_68 = pplVar12;
          }
          local_c8 = 0x20;
          local_c4 = CONCAT11(local_c4._1_1_,1);
          thunk_FUN_140b68ba8(pplVar12,0x20);
          (**(code **)(*plVar3 + 0x88))(plVar3,&local_68);
          pplVar12 = local_68;
          local_68 = (longlong **)0x0;
          plVar13 = (longlong *)param_1[7];
          param_1[7] = (longlong)pplVar12;
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x10))();
            pplVar12 = local_68;
            if (local_68 != (longlong **)0x0) {
              local_68 = (longlong **)0x0;
              (*(code *)(*pplVar12)[2])();
            }
            pplVar12 = (longlong **)param_1[7];
          }
          if (pplVar12 == (longlong **)0x0) {
            if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
              FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140deee48);
              if (DAT_14151e360 == 0) goto LAB_140196792;
            }
            lVar14 = DAT_14151e360;
            local_40 = (longlong *)((ulonglong)local_40 & 0xffffffffffffff00);
            local_68 = &local_40;
            cVar9 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
            if (cVar9 == '\0') {
              do {
                local_68 = (longlong **)0x64;
                FUN_140008100(&local_68);
                local_68 = &local_40;
                cVar9 = FUN_140b53dc0(lVar14,&PTR_DAT_140dc1aa0);
              } while (cVar9 == '\0');
            }
            if (((ulonglong)local_40 & 1) == 0) {
              do {
                local_68 = (longlong **)0x64;
                FUN_140008100(&local_68);
              } while (((ulonglong)local_40 & 1) == 0);
            }
LAB_140196792:
            uVar17 = 0;
          }
          else {
            local_68 = (longlong **)0x3f8000003f800000;
            uStack_60 = 0x3f8000003f800000;
            local_58 = 0x3f800000;
            uVar17 = (ulonglong)uStack_50 >> 0x18;
            uStack_50 = CONCAT53((uint5)uVar17 & 0xff00000000,0x10000);
            uStack_50 = CONCAT62(uStack_50._2_6_,0x101);
            (**(code **)(*plVar3 + 0xd0))(plVar3,&local_40);
            plVar13 = local_40;
            local_40 = (longlong *)0x0;
            plVar3 = (longlong *)param_1[5];
            param_1[5] = (longlong)plVar13;
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x10))();
              plVar3 = local_40;
              if (local_40 != (longlong *)0x0) {
                local_40 = (longlong *)0x0;
                (**(code **)(*plVar3 + 0x10))();
              }
              plVar13 = (longlong *)param_1[5];
            }
            if (plVar13 == (longlong *)0x0) {
              if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140deee70);
                if (DAT_14151e360 == 0) goto LAB_140196792;
              }
              FUN_140196ac0(DAT_14151e360,100);
              goto LAB_140196792;
            }
            lVar14 = FUN_14021de30(param_2);
            if (lVar14 == 0) {
              if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140deee98);
                if (DAT_14151e360 == 0) goto LAB_140196792;
              }
              FUN_140196ac0(DAT_14151e360,100);
              goto LAB_140196792;
            }
            cVar9 = FUN_140196bf0(param_1,lVar14);
            uVar17 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            if (cVar9 == '\0') {
              if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140deeec0);
                if (DAT_14151e360 == 0) goto LAB_140196792;
              }
              FUN_140196ac0(DAT_14151e360,100);
              goto LAB_140196792;
            }
          }
          if (0xf < local_e0) {
            uVar15 = local_e0 + 1;
            puVar16 = puStack_f8;
            if (0xfff < uVar15) {
              puVar16 = *(undefined4 **)(puStack_f8 + -2);
              if (0x1f < (ulonglong)((longlong)puStack_f8 + (-8 - (longlong)puVar16)))
              goto LAB_14019684d;
              uVar15 = local_e0 + 0x28;
            }
            thunk_FUN_140b68ba8(puVar16,uVar15);
          }
        }
        if (0xf < local_90) {
          uVar15 = local_90 + 1;
          lVar14 = lStack_a8;
          if (0xfff < uVar15) {
            lVar14 = *(longlong *)(lStack_a8 + -8);
            if (0x1f < (ulonglong)((lStack_a8 + -8) - lVar14)) goto LAB_14019684d;
            uVar15 = local_90 + 0x28;
          }
          thunk_FUN_140b68ba8(lVar14,uVar15);
        }
      }
      if (local_130 != 0) {
        uVar15 = CONCAT44(uStack_11c,local_120) - local_130;
        lVar14 = local_130;
        if (0xfff < uVar15) {
          lVar14 = *(longlong *)(local_130 + -8);
          if (0x1f < (ulonglong)((local_130 + -8) - lVar14)) {
LAB_14019684d:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar15 = uVar15 + 0x27;
        }
        thunk_FUN_140b68ba8(lVar14,uVar15);
      }
      goto LAB_1401960e8;
    }
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      local_b8 = (longlong ****)CONCAT44(local_b8._4_4_,(uint)(param_1[2] != 0));
      local_108 = (longlong ***)CONCAT44(local_108._4_4_,(uint)(param_1[1] != 0));
      FUN_140b5c130(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140deedd0,&local_108,
                    &local_b8);
      if (DAT_14151e360 == 0) goto LAB_1401960e6;
    }
    lVar14 = DAT_14151e360;
    local_108 = (longlong ***)((ulonglong)local_108 & 0xffffffffffffff00);
    local_b8 = &local_108;
    cVar9 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_b8);
    if (cVar9 == '\0') {
      do {
        local_b8 = (longlong ****)0x64;
        FUN_140008100(&local_b8);
        local_b8 = &local_108;
        cVar9 = FUN_140b53dc0(lVar14,&PTR_DAT_140dc1aa0,&local_b8);
      } while (cVar9 == '\0');
    }
    if (((ulonglong)local_108 & 1) == 0) {
      do {
        local_b8 = (longlong ****)0x64;
        FUN_140008100(&local_b8);
      } while (((ulonglong)local_108 & 1) == 0);
    }
  }
LAB_1401960e6:
  uVar17 = 0;
LAB_1401960e8:
  return uVar17 & 0xffffffff;
}

