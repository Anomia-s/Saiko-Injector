/**
 * Function: _Ref_count_obj2<quill::v11::PatternFormatter>_Constructor_or_Destructor
 * Address:  140b57ac0
 * Signature: void __fastcall _Ref_count_obj2<quill::v11::PatternFormatter>_Constructor_or_Destructor(longlong param_1, undefined8 * param_2, undefined4 * param_3, undefined8 * param_4, undefined8 * param_5, undefined8 * param_6, undefined8 * param_7)
 * Body size: 1413 bytes
 */


void std::_Ref_count_obj2<quill::v11::PatternFormatter>::
     _Ref_count_obj2<quill::v11::PatternFormatter>_Constructor_or_Destructor
               (longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar7 = *(longlong **)(param_2[2] + 0xb0);
  local_70 = *(longlong **)(param_2[2] + 0xb8);
  if (plVar7 != local_70) {
    local_58 = param_1 + 0x570;
    local_68 = 0;
    local_60 = 0;
    do {
      lVar6 = *plVar7;
      if (*(char *)(lVar6 + 0x78) == '\0') {
        lVar6 = local_68;
        uVar8 = local_60;
        if (local_68 == 0) {
          lVar6 = param_2[2];
          local_218 = *param_7;
          uStack_210 = param_7[1];
          local_208 = *param_6;
          uStack_200 = param_6[1];
          local_1f8 = *param_5;
          uStack_1f0 = param_5[1];
          if (*(ulonglong *)(lVar6 + 0x20) < 0x10) {
            local_f0 = lVar6 + 8;
          }
          else {
            local_f0 = *(longlong *)(lVar6 + 8);
          }
          local_e8 = *(undefined8 *)(lVar6 + 0x18);
          local_e0 = local_58;
          if (0xf < *(ulonglong *)(param_1 + 0x588)) {
            local_e0 = *(longlong *)(param_1 + 0x570);
          }
          local_d8 = *(undefined8 *)(param_1 + 0x580);
          local_1e8 = *param_4;
          uStack_1e0 = param_4[1];
          local_1d8 = *param_3;
          uStack_1d4 = param_3[1];
          uStack_1d0 = param_3[2];
          uStack_1cc = param_3[3];
          FUN_140b580a0(*(undefined8 *)(lVar6 + 200),&local_288,*param_2,&local_1d8,&local_1e8,
                        &local_e0,&local_f0,&local_1f8,&local_208,param_2[1],param_2[4],&local_218);
          local_68 = local_280;
          local_60 = local_288;
          lVar6 = local_280;
          uVar8 = local_288;
        }
      }
      else {
        if (*(longlong *)(lVar6 + 0x80) == 0) {
          local_50 = (undefined8 *)FUN_140b65d30(0x8d8);
          local_50[1] = 0x100000001;
          *local_50 = &vftable;
          FUN_1400311e0(&local_288,lVar6 + 8);
          puVar5 = local_50 + 2;
          FUN_140031490(puVar5,&local_288);
          lVar6 = *plVar7;
          *(undefined8 **)(lVar6 + 0x80) = puVar5;
          plVar3 = *(longlong **)(lVar6 + 0x88);
          *(undefined8 **)(lVar6 + 0x88) = local_50;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 8))(plVar3);
              }
            }
          }
        }
        local_1c8 = *param_7;
        uStack_1c0 = param_7[1];
        local_1b8 = *param_6;
        uStack_1b0 = param_6[1];
        local_1a8 = *param_5;
        uStack_1a0 = param_5[1];
        local_d0 = param_2[2];
        local_c8 = *(undefined8 *)(local_d0 + 0x18);
        if (*(ulonglong *)(local_d0 + 0x20) < 0x10) {
          local_d0 = local_d0 + 8;
        }
        else {
          local_d0 = *(longlong *)(local_d0 + 8);
        }
        local_b8 = *(undefined8 *)(param_1 + 0x580);
        local_c0 = local_58;
        if (0xf < *(ulonglong *)(param_1 + 0x588)) {
          local_c0 = *(longlong *)(param_1 + 0x570);
        }
        local_198 = *param_4;
        uStack_190 = param_4[1];
        local_188 = *param_3;
        uStack_184 = param_3[1];
        uStack_180 = param_3[2];
        uStack_17c = param_3[3];
        FUN_140b580a0(*(undefined8 *)(*plVar7 + 0x80),&local_288,*param_2,&local_188,&local_198,
                      &local_c0,&local_d0,&local_1a8,&local_1b8,param_2[1],param_2[4],&local_1c8);
        lVar6 = local_280;
        uVar8 = local_288;
      }
      local_178 = *param_7;
      uStack_170 = param_7[1];
      local_a0 = param_2[2];
      local_98 = *(undefined8 *)(local_a0 + 0x18);
      if (*(ulonglong *)(local_a0 + 0x20) < 0x10) {
        local_a0 = local_a0 + 8;
      }
      else {
        local_a0 = *(longlong *)(local_a0 + 8);
      }
      local_168 = *param_4;
      uStack_160 = param_4[1];
      local_158 = *param_3;
      uStack_154 = param_3[1];
      uStack_150 = param_3[2];
      uStack_14c = param_3[3];
      local_b0 = uVar8;
      local_a8 = lVar6;
      cVar4 = FUN_140036e70(*plVar7,param_2[1],*param_2,&local_158,&local_168,&local_a0,
                            *(undefined1 *)(param_2[1] + 0x24),&local_178,&local_b0);
      if (cVar4 != '\0') {
        local_148 = *param_7;
        uStack_140 = param_7[1];
        local_138 = *param_6;
        uStack_130 = param_6[1];
        local_128 = *param_5;
        uStack_120 = param_5[1];
        local_80 = param_2[2];
        local_78 = *(undefined8 *)(local_80 + 0x18);
        if (*(ulonglong *)(local_80 + 0x20) < 0x10) {
          local_80 = local_80 + 8;
        }
        else {
          local_80 = *(longlong *)(local_80 + 8);
        }
        local_118 = *param_4;
        uStack_110 = param_4[1];
        local_108 = *param_3;
        uStack_104 = param_3[1];
        uStack_100 = param_3[2];
        uStack_fc = param_3[3];
        local_90 = uVar8;
        local_88 = lVar6;
        (**(code **)(*(longlong *)*plVar7 + 8))
                  ((longlong *)*plVar7,param_2[1],*param_2,&local_108,&local_118,local_58,&local_80,
                   *(undefined1 *)(param_2[1] + 0x24),&local_128,&local_138,param_2[4],&local_148,
                   &local_90);
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != local_70);
  }
  return;
}

