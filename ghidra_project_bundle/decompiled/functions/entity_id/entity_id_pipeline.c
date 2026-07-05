/**
 * Function: entity_id_pipeline
 * Address:  1404e6240
 * Signature: undefined entity_id_pipeline(void)
 * Body size: 963 bytes
 */


undefined8 entity_id_pipeline(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  longlong *plVar8;
  undefined1 local_190 [4];
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 uStack_158;
  uint7 local_157;
  undefined1 uStack_150;
  uint7 uStack_14f;
  undefined1 uStack_148;
  undefined8 local_147;
  undefined8 uStack_13f;
  undefined8 local_137;
  undefined8 uStack_12f;
  undefined8 local_127;
  undefined8 uStack_11f;
  undefined4 local_117;
  undefined4 uStack_113;
  undefined4 uStack_10f;
  undefined4 uStack_10b;
  undefined1 local_104;
  undefined2 uStack_103;
  undefined1 uStack_101;
  undefined1 uStack_100;
  undefined1 local_ff;
  undefined1 uStack_fe;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  longlong local_c0 [9];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_64;
  char *local_50;
  byte *local_48;
  byte local_39 [9];
  
  local_39[1] = 0xfe;
  local_39[2] = 0xff;
  local_39[3] = 0xff;
  local_39[4] = 0xff;
  local_39[5] = 0xff;
  local_39[6] = 0xff;
  local_39[7] = 0xff;
  local_39[8] = 0xff;
  local_50 = "depth pipeline";
  local_16c = 0;
  uStack_164 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  local_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  _local_157 = 0xf010102010102;
  _uStack_14f = 0xf010102010102;
  local_147 = 0xf010102010102;
  uStack_13f = 0xf010102010102;
  local_137 = 0xf010102010102;
  uStack_12f = 0xf010102010102;
  local_127 = 0xf010102010102;
  uStack_11f = 0xf010102010102;
  local_117 = 0x20101;
  uStack_113 = 0xffff;
  uStack_10f = 0x8010101;
  uStack_10b = 0x8010101;
  local_104 = 0;
  uStack_103 = 0;
  uStack_101 = 0;
  uStack_100 = 0;
  local_ff = 0;
  uStack_fe = 0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[6] = 0;
  local_c0[7] = 0;
  local_c0[8] = 0;
  local_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  local_190[0] = 3;
  plVar1 = (longlong *)param_1[0xd];
  plVar8 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      plVar8 = (longlong *)CONCAT44(uStack_184,uStack_188);
    }
    uStack_188 = SUB84(plVar1,0);
    uStack_184 = (undefined4)((ulonglong)plVar1 >> 0x20);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  plVar1 = (longlong *)param_1[0x10];
  plVar8 = (longlong *)CONCAT44(uStack_17c,uStack_180);
  if (plVar8 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      plVar8 = (longlong *)CONCAT44(uStack_17c,uStack_180);
    }
    uStack_180 = SUB84(plVar1,0);
    uStack_17c = (undefined4)((ulonglong)plVar1 >> 0x20);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  plVar1 = (longlong *)param_1[0x11];
  plVar8 = (longlong *)CONCAT44(uStack_15c,uStack_160);
  if (plVar8 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      plVar8 = (longlong *)CONCAT44(uStack_15c,uStack_160);
    }
    uStack_160 = SUB84(plVar1,0);
    uStack_15c = (undefined4)((ulonglong)plVar1 >> 0x20);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  plVar1 = (longlong *)param_1[0xc];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  plVar8 = (longlong *)local_c0[local_c0[8]];
  local_c0[local_c0[8]] = (longlong)plVar1;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x10))();
  }
  local_c0[8] = local_c0[8] + 1;
  uStack_103 = 0x100;
  uVar5 = FUN_140220660(*param_1);
  local_ff = 1 < uVar5;
  local_117 = CONCAT13(local_117._3_1_,0x70101);
  local_157 = (uint7)(uint6)local_157;
  uStack_14f = (uint7)(uint6)uStack_14f;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_64 = 1;
  uVar3 = FUN_140220650(*param_1);
  local_78._0_2_ = CONCAT11(0x21,uVar3);
  uStack_70 = 2;
  local_68 = 0x36;
  uVar6 = FUN_140220660(*param_1);
  local_64 = CONCAT44(local_64._4_4_,uVar6);
  (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x140))
            (*(longlong **)(*param_1 + 0x18),&local_48,local_190,&local_78);
  pbVar7 = local_48;
  local_48 = (byte *)0x0;
  plVar1 = (longlong *)param_1[5];
  param_1[5] = (longlong)pbVar7;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    pbVar7 = local_48;
    if (local_48 != (byte *)0x0) {
      local_48 = (byte *)0x0;
      (**(code **)(*(longlong *)pbVar7 + 0x10))();
    }
    pbVar7 = (byte *)param_1[5];
  }
  if (pbVar7 == (byte *)0x0) {
    if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
       (index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e49900,
                            &local_50), DAT_14151e360 != 0)) {
      lVar2 = DAT_14151e360;
      local_39[0] = 0;
      local_48 = local_39;
      cVar4 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_48);
      if (cVar4 == '\0') {
        do {
          local_48 = (byte *)0x64;
          FUN_140008100(&local_48);
          local_48 = local_39;
          cVar4 = FUN_140b53dc0(lVar2,&PTR_DAT_140dc1aa0,&local_48);
        } while (cVar4 == '\0');
      }
      if ((local_39[0] & 1) == 0) {
        do {
          local_48 = (byte *)0x64;
          FUN_140008100(&local_48);
        } while ((local_39[0] & 1) == 0);
      }
    }
    FUN_1404e8c60(param_1,local_50,local_190,&local_78);
    FUN_140197d40(local_190);
  }
  else {
    FUN_140197d40(local_190);
    cVar4 = FUN_1404e86e0(param_1,param_1 + 3,0,"world pipeline");
    if (cVar4 == '\0') {
      return 0;
    }
    cVar4 = FUN_1404e86e0(param_1,param_1 + 7,1,"entity id pipeline");
    if (cVar4 != '\0') {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0x1010101;
      return 1;
    }
  }
  return 0;
}

