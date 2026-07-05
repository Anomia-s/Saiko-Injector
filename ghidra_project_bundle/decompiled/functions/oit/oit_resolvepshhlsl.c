/**
 * Function: oit_resolvepshhlsl
 * Address:  1404eefe0
 * Signature: undefined oit_resolvepshhlsl(void)
 * Body size: 5750 bytes
 */


ulonglong oit_resolvepshhlsl(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                            longlong *param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 ***pppuVar5;
  undefined1 ****ppppuVar6;
  longlong lVar7;
  undefined1 **ppuVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined2 uStack_1dc;
  undefined1 uStack_1da;
  undefined1 uStack_1d9;
  undefined1 uStack_1d8;
  undefined2 uStack_1d7;
  undefined1 uStack_1d5;
  undefined8 local_1d4;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined2 local_19f;
  undefined1 uStack_19d;
  undefined5 uStack_19c;
  undefined3 uStack_197;
  undefined5 uStack_194;
  undefined4 uStack_18f;
  undefined4 uStack_18b;
  undefined3 uStack_187;
  undefined2 uStack_184;
  undefined3 uStack_182;
  undefined2 uStack_17f;
  undefined1 uStack_17d;
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined2 local_17a;
  undefined1 uStack_178;
  undefined4 uStack_177;
  undefined4 uStack_173;
  uint uStack_16f;
  undefined1 uStack_16b;
  undefined1 uStack_16a;
  undefined1 uStack_169;
  undefined1 uStack_168;
  undefined2 uStack_167;
  undefined1 local_165;
  undefined8 local_164;
  undefined8 uStack_15c;
  uint local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined2 uStack_12f;
  undefined1 uStack_12d;
  undefined4 local_12c;
  longlong alStack_128 [9];
  undefined1 *local_e0;
  undefined1 ***local_d8;
  longlong lStack_d0;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined1 ****local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  undefined4 uStack_9d;
  undefined1 uStack_99;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined1 **local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x1b] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  if (param_5 != (longlong *)0x0) {
    (**(code **)(*param_5 + 8))(param_5);
    plVar9 = (longlong *)param_1[6];
    param_1[6] = (longlong)param_5;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  *(undefined2 *)(param_1 + 0x1b) = 0x101;
  if ((*param_1 != 0) && (cVar2 = FUN_14021cba0(), cVar2 != '\0')) {
    plVar4 = (longlong *)FUN_140220540(*param_1);
    plVar9 = (longlong *)param_1[0x12];
    if (plVar9 != plVar4) {
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        plVar9 = (longlong *)param_1[0x12];
      }
      param_1[0x12] = (longlong)plVar4;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))();
        plVar4 = (longlong *)param_1[0x12];
      }
    }
    if (plVar4 == (longlong *)0x0) {
      if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
         (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49cf0),
         DAT_14151e360 != 0)) {
        lVar7 = DAT_14151e360;
        local_b8 = (undefined1 ****)((ulonglong)local_b8 & 0xffffffffffffff00);
        local_1f8 = &local_b8;
        cVar2 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_1f8);
        while (cVar2 == '\0') {
          local_1f8._0_4_ = 100;
          local_1f8._4_4_ = 0;
          FUN_140008100(&local_1f8);
          local_1f8 = &local_b8;
          cVar2 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0,&local_1f8);
        }
        while (((ulonglong)local_b8 & 1) == 0) {
          local_1f8._0_4_ = 100;
          local_1f8._4_4_ = 0;
          FUN_140008100(&local_1f8);
        }
      }
    }
    else {
      local_1f8._0_4_ = 0x3f800000;
      local_1f8._4_4_ = 0x3f800000;
      uStack_1f0 = 0x3f800000;
      uStack_1ec = 0x3f800000;
      local_1e8 = 0x3f800000;
      uStack_1e4 = 0;
      uStack_1da = 0;
      uStack_1e0 = 0x1010101;
      uStack_1dc = 0x101;
      (**(code **)(**(longlong **)(*param_1 + 0x18) + 0xd0))
                (*(longlong **)(*param_1 + 0x18),&local_b8,&local_1f8);
      ppppuVar6 = local_b8;
      local_b8 = (undefined1 ****)0x0;
      plVar9 = (longlong *)param_1[0x10];
      param_1[0x10] = (longlong)ppppuVar6;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))();
        ppppuVar6 = local_b8;
        if (local_b8 != (undefined1 ****)0x0) {
          local_b8 = (undefined1 ****)0x0;
          (*(code *)(*ppppuVar6)[2])();
        }
        ppppuVar6 = (undefined1 ****)param_1[0x10];
      }
      if (ppppuVar6 == (undefined1 ****)0x0) {
        if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
           (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49d18),
           DAT_14151e360 != 0)) {
          lVar7 = DAT_14151e360;
          local_d8 = (undefined1 ***)((ulonglong)local_d8 & 0xffffffffffffff00);
          local_b8 = &local_d8;
          cVar2 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_b8);
          if (cVar2 == '\0') {
            do {
              local_b8 = (undefined1 ****)0x64;
              FUN_140008100(&local_b8);
              local_b8 = &local_d8;
              cVar2 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0,&local_b8);
            } while (cVar2 == '\0');
          }
          if (((ulonglong)local_d8 & 1) == 0) {
            do {
              local_b8 = (undefined1 ****)0x64;
              FUN_140008100(&local_b8);
            } while (((ulonglong)local_d8 & 1) == 0);
          }
        }
      }
      else {
        local_b8 = (undefined1 ****)0x3f8000003f800000;
        uStack_b0 = 0x3f8000003f800000;
        local_a8 = 0x3f800000;
        uStack_9d = 0;
        uStack_9e = 1;
        uStack_a0 = 0x101;
        (**(code **)(**(longlong **)(*param_1 + 0x18) + 0xd0))
                  (*(longlong **)(*param_1 + 0x18),&local_d8,&local_b8);
        pppuVar5 = local_d8;
        local_d8 = (undefined1 ***)0x0;
        plVar9 = (longlong *)param_1[0x11];
        param_1[0x11] = (longlong)pppuVar5;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))();
          pppuVar5 = local_d8;
          if (local_d8 != (undefined1 ***)0x0) {
            local_d8 = (undefined1 ***)0x0;
            (*(code *)(*pppuVar5)[2])();
          }
          pppuVar5 = (undefined1 ***)param_1[0x11];
        }
        if (pppuVar5 == (undefined1 ***)0x0) {
          if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
             (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49d40),
             DAT_14151e360 != 0)) {
            lVar7 = DAT_14151e360;
            local_78 = (undefined1 **)((ulonglong)local_78 & 0xffffffffffffff00);
            local_d8 = &local_78;
            cVar2 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_d8);
            while (cVar2 == '\0') {
              local_d8 = (undefined1 ***)0x64;
              FUN_140008100(&local_d8);
              local_d8 = &local_78;
              cVar2 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0,&local_d8);
            }
            if (((ulonglong)local_78 & 1) == 0) {
              do {
                local_d8 = (undefined1 ***)0x64;
                FUN_140008100(&local_d8);
              } while (((ulonglong)local_78 & 1) == 0);
            }
          }
        }
        else {
          directory_iterator_directory_iterator(&local_1f8,*param_1,"part.vsh.hlsl",1);
          lVar7 = CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
          local_1f8._0_4_ = 0;
          local_1f8._4_4_ = 0;
          plVar9 = (longlong *)param_1[0xc];
          param_1[0xc] = lVar7;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))();
            plVar9 = (longlong *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
            if (plVar9 != (longlong *)0x0) {
              local_1f8._0_4_ = 0;
              local_1f8._4_4_ = 0;
              (**(code **)(*plVar9 + 0x10))();
            }
          }
          directory_iterator_directory_iterator(&local_1f8,*param_1,"oit_weighted.psh.hlsl",0x10);
          lVar7 = CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
          local_1f8._0_4_ = 0;
          local_1f8._4_4_ = 0;
          plVar9 = (longlong *)param_1[0xd];
          param_1[0xd] = lVar7;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))();
            plVar9 = (longlong *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
            if (plVar9 != (longlong *)0x0) {
              local_1f8._0_4_ = 0;
              local_1f8._4_4_ = 0;
              (**(code **)(*plVar9 + 0x10))();
            }
          }
          if ((param_1[0xc] != 0) && (param_1[0xd] != 0)) {
            uStack_1d5 = 0;
            uStack_1d7 = 0;
            local_1e8 = 8;
            uStack_1e4 = 0;
            uStack_1e0 = 0xf;
            uStack_1dc = 0;
            uStack_1da = 0;
            uStack_1d9 = 0;
            local_1f8._0_4_ = 0x49534f50;
            local_1f8._4_4_ = 0x4e4f4954;
            uStack_1f0 = 0;
            uStack_1ec = 0;
            uStack_1d8 = 0x2e;
            local_1d4 = 1;
            uStack_1cc = 0;
            uStack_1c8 = 0x20;
            uStack_1c4 = uStack_1c4 & 0xffffff00;
            local_19f = 0;
            uStack_19d = 0;
            local_1b0 = 8;
            uStack_1af = 0;
            uStack_1a8 = 0xf;
            uStack_1a7 = 0;
            uStack_1c0 = 0x43584554;
            uStack_1bc = 0x44524f4f;
            uStack_1b8 = 0;
            uStack_1b4 = 0;
            uStack_1a0 = 0x2b;
            uStack_19c = 1;
            uStack_197 = 0;
            uStack_194 = 0x200000000c;
            uStack_18f = 0;
            local_165 = 0;
            uStack_167 = 0;
            uStack_184 = 0x4c41;
            uStack_18b = CONCAT13(0x4e,(undefined3)uStack_18b);
            uStack_187 = 0x4d524f;
            uStack_178 = 6;
            uStack_177 = 0;
            uStack_173 = 0xf000000;
            uStack_16f = 0;
            uStack_16b = 0;
            uStack_16a = 0;
            uStack_169 = 0;
            uStack_182 = 0;
            uStack_17f = 0;
            uStack_17d = 0;
            uStack_17c = 0;
            uStack_17b = 0;
            local_17a = 0;
            uStack_168 = 0x2e;
            local_164 = 1;
            uStack_15c = 0x2000000014;
            local_154 = local_154 & 0xffffff00;
            uStack_12f = 0;
            uStack_12d = 0;
            uStack_140 = 0xb;
            uStack_13c = 0;
            uStack_138 = 0xf;
            uStack_134 = 0;
            uStack_150 = 0x454a424f;
            uStack_14c = 0x4e495443;
            uStack_148 = 0x584544;
            local_144 = 0;
            uStack_130 = 0x21;
            local_12c = 1;
            alStack_128[0] = 1;
            alStack_128[1] = CONCAT35(alStack_128[1]._5_3_,0x100000004);
            (**(code **)(**(longlong **)(*param_1 + 0x18) + 0xd8))
                      (*(longlong **)(*param_1 + 0x18),&local_b8,&local_1f8,4,param_1[0xc]);
            ppppuVar6 = local_b8;
            local_b8 = (undefined1 ****)0x0;
            plVar9 = (longlong *)param_1[0xb];
            param_1[0xb] = (longlong)ppppuVar6;
            if (plVar9 != (longlong *)0x0) {
              (**(code **)(*plVar9 + 0x10))();
              ppppuVar6 = local_b8;
              if (local_b8 != (undefined1 ****)0x0) {
                local_b8 = (undefined1 ****)0x0;
                (*(code *)(*ppppuVar6)[2])();
              }
              ppppuVar6 = (undefined1 ****)param_1[0xb];
            }
            if (ppppuVar6 == (undefined1 ****)0x0) {
              if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
                 (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49db8),
                 DAT_14151e360 != 0)) {
                lVar7 = DAT_14151e360;
                local_d8 = (undefined1 ***)((ulonglong)local_d8 & 0xffffffffffffff00);
                local_b8 = &local_d8;
                cVar2 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_b8);
                if (cVar2 == '\0') {
                  do {
                    local_b8 = (undefined1 ****)0x64;
                    FUN_140008100(&local_b8);
                    local_b8 = &local_d8;
                    cVar2 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0,&local_b8);
                  } while (cVar2 == '\0');
                }
                if (((ulonglong)local_d8 & 1) == 0) {
                  do {
                    local_b8 = (undefined1 ****)0x64;
                    FUN_140008100(&local_b8);
                  } while (((ulonglong)local_d8 & 1) == 0);
                }
              }
              FUN_1404e4680(&local_1f8);
            }
            else {
              FUN_1404e4680(&local_1f8);
              uStack_98 = 0;
              uStack_94 = 0;
              uStack_90 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              uStack_9e = 0;
              uStack_9d = 0;
              uStack_99 = 0;
              local_8c = 0x10000000080;
              local_84 = 0x180;
              local_b8 = (undefined1 ****)CONCAT62(local_b8._2_6_,0xdf);
              local_b8 = (undefined1 ****)((ulonglong)local_b8 & 0xffffffff);
              uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
              local_1f8._0_4_ = 0;
              local_1f8._4_4_ = 0x10009;
              FUN_140029790(&local_a8,0,&local_1f8);
              puVar10 = (undefined8 *)
                        CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              local_d8 = (undefined1 ***)&DAT_1000900000001;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_d8);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = &DAT_1000900000001;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_78 = (undefined1 **)&DAT_1000900000002;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_78);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = &DAT_1000900000002;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_e0 = &DAT_1000500000000;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_e0);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = &DAT_1000500000000;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_250 = 0x1000100000001;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_250);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = 0x1000100000001;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_248 = 0x1000900000003;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_248);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = 0x1000900000003;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_240 = 0x8000100000002;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_240);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = 0x8000100000002;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_238 = 0x400010000000a;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_238);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = 0x400010000000a;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_230 = 0x100050000000e;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_230);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = 0x100050000000e;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_228 = 0x100050000000f;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_228);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = 0x100050000000f;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_220 = 0x1000500000010;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_220);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = 0x1000500000010;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_218 = 0x1000500000011;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_218);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = 0x1000500000011;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_210 = 0x1000500000012;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_210);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = 0x1000500000012;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_208 = 0x1000b00000000;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_208);
                puVar10 = (undefined8 *)
                          CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
              }
              else {
                *puVar10 = 0x1000b00000000;
                puVar10 = (undefined8 *)
                          (CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8
                          );
                uStack_a0 = SUB82(puVar10,0);
                uStack_9e = (undefined1)((ulonglong)puVar10 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)puVar10 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)puVar10 >> 0x38);
              }
              local_200 = 0x1000b00000001;
              if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                FUN_140029790(&local_a8,puVar10,&local_200);
              }
              else {
                *puVar10 = 0x1000b00000001;
                lVar7 = CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 8;
                uStack_a0 = (undefined2)lVar7;
                uStack_9e = (undefined1)((ulonglong)lVar7 >> 0x10);
                uStack_9d = (undefined4)((ulonglong)lVar7 >> 0x18);
                uStack_99 = (undefined1)((ulonglong)lVar7 >> 0x38);
              }
              (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x168))
                        (*(longlong **)(*param_1 + 0x18),&local_1f8);
              lVar7 = CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
              local_1f8._0_4_ = 0;
              local_1f8._4_4_ = 0;
              plVar9 = (longlong *)param_1[4];
              param_1[4] = lVar7;
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x10))();
                plVar9 = (longlong *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                if (plVar9 != (longlong *)0x0) {
                  local_1f8._0_4_ = 0;
                  local_1f8._4_4_ = 0;
                  (**(code **)(*plVar9 + 0x10))();
                }
                lVar7 = param_1[4];
              }
              if (lVar7 == 0) {
                if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                  FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49d68);
                  if (DAT_14151e360 != 0) goto LAB_1404efee7;
                }
                else {
LAB_1404efee7:
                  lVar7 = DAT_14151e360;
                  local_d8 = (undefined1 ***)((ulonglong)local_d8 & 0xffffffffffffff00);
                  local_1f8 = (undefined1 *****)&local_d8;
                  cVar2 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
                  while (cVar2 == '\0') {
                    local_1f8._0_4_ = 100;
                    local_1f8._4_4_ = 0;
                    FUN_140008100(&local_1f8);
                    local_1f8 = (undefined1 *****)&local_d8;
                    cVar2 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0);
                  }
                  while (((ulonglong)local_d8 & 1) == 0) {
                    local_1f8._0_4_ = 100;
                    local_1f8._4_4_ = 0;
                    FUN_140008100(&local_1f8);
                  }
                }
                bVar1 = false;
              }
              else {
                local_1d4 = 0;
                uStack_1cc = 0;
                uStack_1e4 = 0;
                uStack_1e0 = 0;
                uStack_1dc = 0;
                uStack_1da = 0;
                uStack_1d9 = 0;
                uStack_1d8 = 0;
                uStack_1d7 = 0;
                uStack_1d5 = 0;
                local_1f8._4_4_ = 0;
                uStack_1f0 = 0;
                uStack_1ec = 0;
                local_1e8 = 0;
                uStack_1c8 = 0;
                uStack_1c4 = 0;
                uStack_1c0 = 0x1010200;
                uStack_1bc = 0xf010102;
                uStack_1b8 = 0x1010200;
                uStack_1b4 = 0xf010102;
                local_1b0 = 0;
                uStack_1af = 0xf010102010102;
                uStack_1a8 = 0;
                uStack_1a7 = 0xf010102010102;
                uStack_1a0 = 0;
                local_19f = 0x102;
                uStack_19d = 1;
                uStack_19c = 0xf010102;
                uStack_197 = 0x10102;
                uStack_194 = 0xf010102;
                uStack_18f = 0x2010102;
                uStack_18b = 0xf0101;
                uStack_187 = 0x10102;
                uStack_184 = 0x102;
                uStack_182 = 0xf01;
                uStack_17f = 0x101;
                uStack_17d = 2;
                uStack_17c = 0;
                uStack_17b = 0xff;
                local_17a = 0xff;
                uStack_178 = 0;
                uStack_177 = 0x8010101;
                uStack_173 = 0x8010101;
                uStack_16f = uStack_16f & 0xffffff;
                uStack_16b = 0;
                uStack_16a = 0;
                uStack_169 = 0;
                uStack_168 = 0;
                uStack_167 = 0;
                alStack_128[0] = 0;
                alStack_128[1] = 0;
                alStack_128[2] = 0;
                alStack_128[3] = 0;
                alStack_128[4] = 0;
                alStack_128[5] = 0;
                alStack_128[6] = 0;
                alStack_128[7] = 0;
                alStack_128[8] = 0;
                local_164 = 0;
                uStack_15c = 0;
                local_154 = 0;
                uStack_150 = 0;
                uStack_14c = 0;
                uStack_148 = 0;
                local_144 = 0;
                uStack_140 = 0;
                uStack_13c = 0;
                uStack_138 = 0;
                uStack_134 = 0;
                uStack_130 = 0;
                uStack_12f = 0;
                uStack_12d = 0;
                local_1f8._0_4_ = CONCAT31(local_1f8._1_3_,3);
                plVar9 = (longlong *)param_1[0xb];
                plVar4 = (longlong *)0x0;
                if (plVar9 != (longlong *)0x0) {
                  if (plVar9 != (longlong *)0x0) {
                    (**(code **)(*plVar9 + 8))(plVar9);
                    plVar4 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
                  }
                  uStack_1f0 = SUB84(plVar9,0);
                  uStack_1ec = (undefined4)((ulonglong)plVar9 >> 0x20);
                  if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 0x10))();
                  }
                }
                plVar9 = (longlong *)param_1[0xc];
                plVar4 = (longlong *)CONCAT44(uStack_1e4,local_1e8);
                if (plVar4 != plVar9) {
                  if (plVar9 != (longlong *)0x0) {
                    (**(code **)(*plVar9 + 8))(plVar9);
                    plVar4 = (longlong *)CONCAT44(uStack_1e4,local_1e8);
                  }
                  local_1e8 = SUB84(plVar9,0);
                  uStack_1e4 = (undefined4)((ulonglong)plVar9 >> 0x20);
                  if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 0x10))();
                  }
                }
                plVar9 = (longlong *)param_1[0xd];
                plVar4 = (longlong *)CONCAT44(uStack_1c4,uStack_1c8);
                if (plVar4 != plVar9) {
                  if (plVar9 != (longlong *)0x0) {
                    (**(code **)(*plVar9 + 8))(plVar9);
                    plVar4 = (longlong *)CONCAT44(uStack_1c4,uStack_1c8);
                  }
                  uStack_1c8 = SUB84(plVar9,0);
                  uStack_1c4 = (uint)((ulonglong)plVar9 >> 0x20);
                  if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 0x10))();
                  }
                }
                plVar9 = (longlong *)param_1[4];
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 8))(plVar9);
                }
                plVar4 = (longlong *)alStack_128[alStack_128[8]];
                alStack_128[alStack_128[8]] = (longlong)plVar9;
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x10))();
                }
                alStack_128[8] = alStack_128[8] + 1;
                plVar9 = (longlong *)param_1[6];
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 8))(plVar9);
                }
                plVar4 = (longlong *)alStack_128[alStack_128[8]];
                alStack_128[alStack_128[8]] = (longlong)plVar9;
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x10))();
                }
                alStack_128[8] = alStack_128[8] + 1;
                uStack_16b = 0;
                uStack_16a = 1;
                uStack_17f = 1;
                uStack_17d = 7;
                uStack_1c0 = 0x1020201;
                uStack_1bc = 0xf010202;
                uStack_1b8 = 0x1060101;
                uStack_1b4 = 0xf010601;
                local_d8 = (undefined1 ***)0x210326;
                lStack_d0 = 3;
                local_c8 = 0x36;
                local_c4 = 1;
                (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x140))
                          (*(longlong **)(*param_1 + 0x18),&local_78);
                ppuVar8 = local_78;
                local_78 = (undefined1 **)0x0;
                plVar9 = (longlong *)param_1[3];
                param_1[3] = (longlong)ppuVar8;
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 0x10))();
                  ppuVar8 = local_78;
                  if (local_78 != (undefined1 **)0x0) {
                    local_78 = (undefined1 **)0x0;
                    (**(code **)(*ppuVar8 + 0x10))();
                  }
                  ppuVar8 = (undefined1 **)param_1[3];
                }
                bVar1 = ppuVar8 != (undefined1 **)0x0;
                if (ppuVar8 == (undefined1 **)0x0) {
                  if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
                     (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49d90)
                     , DAT_14151e360 != 0)) {
                    lVar7 = DAT_14151e360;
                    local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
                    local_78 = &local_e0;
                    cVar2 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
                    if (cVar2 == '\0') {
                      do {
                        local_78 = (undefined1 **)0x64;
                        FUN_140008100(&local_78);
                        local_78 = &local_e0;
                        cVar2 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0);
                      } while (cVar2 == '\0');
                    }
                    if (((ulonglong)local_e0 & 1) == 0) {
                      do {
                        local_78 = (undefined1 **)0x64;
                        FUN_140008100(&local_78);
                      } while (((ulonglong)local_e0 & 1) == 0);
                    }
                  }
                }
                else {
                  *(undefined1 *)(param_1 + 0x1b) = 1;
                }
                FUN_140197d40(&local_1f8);
              }
              if (local_a8 != 0) {
                uVar11 = CONCAT44(uStack_94,uStack_98) - local_a8;
                lVar7 = local_a8;
                if (0xfff < uVar11) {
                  lVar7 = *(longlong *)(local_a8 + -8);
                  if (0x1f < (ulonglong)((local_a8 + -8) - lVar7)) goto LAB_1404f063d;
                  uVar11 = uVar11 + 0x27;
                }
                thunk_FUN_140b68ba8(lVar7,uVar11);
              }
              if (bVar1) {
                directory_iterator_directory_iterator(&local_1f8,*param_1,"ao_apply.vsh.hlsl",1);
                ppppuVar6 = (undefined1 ****)local_1f8;
                local_1f8._0_4_ = 0;
                local_1f8._4_4_ = 0;
                plVar9 = (longlong *)param_1[0xe];
                param_1[0xe] = (longlong)ppppuVar6;
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 0x10))();
                  plVar9 = (longlong *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                  if (plVar9 != (longlong *)0x0) {
                    local_1f8._0_4_ = 0;
                    local_1f8._4_4_ = 0;
                    (**(code **)(*plVar9 + 0x10))();
                  }
                }
                directory_iterator_directory_iterator(&local_1f8,*param_1,"oit_resolve.psh.hlsl");
                lVar7 = CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                local_1f8._0_4_ = 0;
                local_1f8._4_4_ = 0;
                plVar9 = (longlong *)param_1[0xf];
                param_1[0xf] = lVar7;
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 0x10))();
                  plVar9 = (longlong *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                  if (plVar9 != (longlong *)0x0) {
                    local_1f8._0_4_ = 0;
                    local_1f8._4_4_ = 0;
                    (**(code **)(*plVar9 + 0x10))();
                  }
                }
                if ((param_1[0xe] != 0) && (param_1[0xf] != 0)) {
                  local_b8._2_6_ = (uint6)((ulonglong)local_b8 >> 0x10) & 0xffff;
                  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
                  local_a8 = 0;
                  uStack_a0 = 0;
                  uStack_9e = 0;
                  uStack_9d = 0;
                  uStack_99 = 0;
                  uStack_98 = 0;
                  uStack_94 = 0;
                  uStack_90 = 0;
                  local_8c = 0x10000000080;
                  local_84 = 0x180;
                  local_b8 = (undefined1 ****)CONCAT62(local_b8._2_6_,0x10);
                  local_1f8._0_4_ = 0;
                  local_1f8._4_4_ = 0x10001;
                  FUN_140029790(&local_a8,0,&local_1f8);
                  puVar10 = (undefined8 *)
                            CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
                  local_d8 = (undefined1 ***)0x1000100000001;
                  if (puVar10 == (undefined8 *)CONCAT44(uStack_94,uStack_98)) {
                    FUN_140029790(&local_a8,puVar10,&local_d8);
                  }
                  else {
                    *puVar10 = 0x1000100000001;
                    lVar7 = CONCAT17(uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) +
                            8;
                    uStack_a0 = (undefined2)lVar7;
                    uStack_9e = (undefined1)((ulonglong)lVar7 >> 0x10);
                    uStack_9d = (undefined4)((ulonglong)lVar7 >> 0x18);
                    uStack_99 = (undefined1)((ulonglong)lVar7 >> 0x38);
                  }
                  (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x168))
                            (*(longlong **)(*param_1 + 0x18),&local_1f8);
                  lVar7 = CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                  local_1f8._0_4_ = 0;
                  local_1f8._4_4_ = 0;
                  plVar9 = (longlong *)param_1[9];
                  param_1[9] = lVar7;
                  if (plVar9 != (longlong *)0x0) {
                    (**(code **)(*plVar9 + 0x10))();
                    plVar9 = (longlong *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
                    if (plVar9 != (longlong *)0x0) {
                      local_1f8._0_4_ = 0;
                      local_1f8._4_4_ = 0;
                      (**(code **)(*plVar9 + 0x10))();
                    }
                    lVar7 = param_1[9];
                  }
                  if (lVar7 == 0) {
                    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49de0)
                      ;
                      if (DAT_14151e360 != 0) goto LAB_1404f04b0;
                    }
                    else {
LAB_1404f04b0:
                      lVar7 = DAT_14151e360;
                      local_d8 = (undefined1 ***)((ulonglong)local_d8 & 0xffffffffffffff00);
                      local_1f8 = (undefined1 *****)&local_d8;
                      cVar2 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
                      while (cVar2 == '\0') {
                        local_1f8._0_4_ = 100;
                        local_1f8._4_4_ = 0;
                        FUN_140008100(&local_1f8);
                        local_1f8 = (undefined1 *****)&local_d8;
                        cVar2 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0);
                      }
                      while (((ulonglong)local_d8 & 1) == 0) {
                        local_1f8._0_4_ = 100;
                        local_1f8._4_4_ = 0;
                        FUN_140008100(&local_1f8);
                      }
                    }
                    uVar11 = 0;
                  }
                  else {
                    local_1d4 = 0;
                    uStack_1cc = 0;
                    uStack_1e4 = 0;
                    uStack_1e0 = 0;
                    uStack_1dc = 0;
                    uStack_1da = 0;
                    uStack_1d9 = 0;
                    uStack_1d8 = 0;
                    uStack_1d7 = 0;
                    uStack_1d5 = 0;
                    local_1f8._4_4_ = 0;
                    uStack_1f0 = 0;
                    uStack_1ec = 0;
                    local_1e8 = 0;
                    uStack_1c8 = 0;
                    uStack_1c4 = 0;
                    uStack_1c0 = 0x1010200;
                    uStack_1bc = 0xf010102;
                    uStack_1b8 = 0x1010200;
                    uStack_1b4 = 0xf010102;
                    local_1b0 = 0;
                    uStack_1af = 0xf010102010102;
                    uStack_1a8 = 0;
                    uStack_1a7 = 0xf010102010102;
                    uStack_1a0 = 0;
                    local_19f = 0x102;
                    uStack_19d = 1;
                    uStack_19c = 0xf010102;
                    uStack_197 = 0x10102;
                    uStack_194 = 0xf010102;
                    uStack_18f = 0x2010102;
                    uStack_18b = 0xf0101;
                    uStack_187 = 0x10102;
                    uStack_184 = 0x102;
                    uStack_182 = 0xf01;
                    uStack_17f = 0x101;
                    uStack_17d = 2;
                    uStack_17c = 0;
                    uStack_17b = 0xff;
                    local_17a = 0xff;
                    uStack_178 = 0;
                    uStack_177 = 0x8010101;
                    uStack_173 = 0x8010101;
                    uStack_16f = uStack_16f & 0xffffff;
                    uStack_16b = 0;
                    uStack_16a = 0;
                    uStack_169 = 0;
                    uStack_168 = 0;
                    uStack_167 = 0;
                    alStack_128[0] = 0;
                    alStack_128[1] = 0;
                    alStack_128[2] = 0;
                    alStack_128[3] = 0;
                    alStack_128[4] = 0;
                    alStack_128[5] = 0;
                    alStack_128[6] = 0;
                    alStack_128[7] = 0;
                    alStack_128[8] = 0;
                    local_164 = 0;
                    uStack_15c = 0;
                    local_154 = 0;
                    uStack_150 = 0;
                    uStack_14c = 0;
                    uStack_148 = 0;
                    local_144 = 0;
                    uStack_140 = 0;
                    uStack_13c = 0;
                    uStack_138 = 0;
                    uStack_134 = 0;
                    uStack_130 = 0;
                    uStack_12f = 0;
                    uStack_12d = 0;
                    local_1f8._0_4_ = CONCAT31(local_1f8._1_3_,3);
                    plVar9 = (longlong *)param_1[0xe];
                    plVar4 = (longlong *)0x0;
                    if (plVar9 != (longlong *)0x0) {
                      if (plVar9 != (longlong *)0x0) {
                        (**(code **)(*plVar9 + 8))(plVar9);
                        plVar4 = (longlong *)CONCAT44(uStack_1e4,local_1e8);
                      }
                      local_1e8 = SUB84(plVar9,0);
                      uStack_1e4 = (undefined4)((ulonglong)plVar9 >> 0x20);
                      if (plVar4 != (longlong *)0x0) {
                        (**(code **)(*plVar4 + 0x10))();
                      }
                    }
                    plVar9 = (longlong *)param_1[0xf];
                    plVar4 = (longlong *)CONCAT44(uStack_1c4,uStack_1c8);
                    if (plVar4 != plVar9) {
                      if (plVar9 != (longlong *)0x0) {
                        (**(code **)(*plVar9 + 8))(plVar9);
                        plVar4 = (longlong *)CONCAT44(uStack_1c4,uStack_1c8);
                      }
                      uStack_1c8 = SUB84(plVar9,0);
                      uStack_1c4 = (uint)((ulonglong)plVar9 >> 0x20);
                      if (plVar4 != (longlong *)0x0) {
                        (**(code **)(*plVar4 + 0x10))();
                      }
                    }
                    plVar9 = (longlong *)param_1[9];
                    if (plVar9 != (longlong *)0x0) {
                      (**(code **)(*plVar9 + 8))(plVar9);
                    }
                    plVar4 = (longlong *)alStack_128[alStack_128[8]];
                    alStack_128[alStack_128[8]] = (longlong)plVar9;
                    if (plVar4 != (longlong *)0x0) {
                      (**(code **)(*plVar4 + 0x10))();
                    }
                    alStack_128[8] = alStack_128[8] + 1;
                    uStack_16b = 2;
                    uStack_17f = 0;
                    uStack_1c0 = 0x1050601;
                    uStack_1bc = 0xf010506;
                    local_d8 = (undefined1 ***)0x0;
                    lStack_d0 = 0;
                    local_c8 = 0;
                    local_c4 = 1;
                    uVar3 = FUN_140220650(*param_1);
                    *(undefined1 *)((longlong)&local_d8 + lStack_d0) = uVar3;
                    lStack_d0 = lStack_d0 + 1;
                    local_c4 = CONCAT44(local_c4._4_4_,1);
                    (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x140))
                              (*(longlong **)(*param_1 + 0x18),&local_78);
                    ppuVar8 = local_78;
                    local_78 = (undefined1 **)0x0;
                    plVar4 = (longlong *)param_1[8];
                    param_1[8] = (longlong)ppuVar8;
                    if (plVar4 != (longlong *)0x0) {
                      (**(code **)(*plVar4 + 0x10))();
                      ppuVar8 = local_78;
                      if (local_78 != (undefined1 **)0x0) {
                        local_78 = (undefined1 **)0x0;
                        (**(code **)(*ppuVar8 + 0x10))();
                      }
                      ppuVar8 = (undefined1 **)param_1[8];
                    }
                    uVar11 = CONCAT71((int7)((ulonglong)plVar9 >> 8),ppuVar8 != (undefined1 **)0x0);
                    if (ppuVar8 == (undefined1 **)0x0) {
                      if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
                         (FUN_140b53500(DAT_14151e360,
                                        &PTR_s__opt_actions_runner__work_Platfo_140e49e08),
                         DAT_14151e360 != 0)) {
                        lVar7 = DAT_14151e360;
                        local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
                        local_78 = &local_e0;
                        cVar2 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
                        if (cVar2 == '\0') {
                          do {
                            local_78 = (undefined1 **)0x64;
                            FUN_140008100(&local_78);
                            local_78 = &local_e0;
                            cVar2 = FUN_140b53dc0(lVar7,&PTR_DAT_140dc1aa0);
                          } while (cVar2 == '\0');
                        }
                        if (((ulonglong)local_e0 & 1) == 0) {
                          do {
                            local_78 = (undefined1 **)0x64;
                            FUN_140008100(&local_78);
                          } while (((ulonglong)local_e0 & 1) == 0);
                        }
                      }
                    }
                    else {
                      *(undefined1 *)((longlong)param_1 + 0xd9) = 1;
                    }
                    FUN_140197d40(&local_1f8);
                  }
                  if (local_a8 != 0) {
                    uVar12 = CONCAT44(uStack_94,uStack_98) - local_a8;
                    lVar7 = local_a8;
                    if (0xfff < uVar12) {
                      lVar7 = *(longlong *)(local_a8 + -8);
                      if (0x1f < (ulonglong)((local_a8 + -8) - lVar7)) {
LAB_1404f063d:
                    /* WARNING: Subroutine does not return */
                        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                      }
                      uVar12 = uVar12 + 0x27;
                    }
                    thunk_FUN_140b68ba8(lVar7,uVar12);
                  }
                  goto LAB_1404f01d1;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar11 = 0;
LAB_1404f01d1:
  return uVar11 & 0xffffffff;
}

