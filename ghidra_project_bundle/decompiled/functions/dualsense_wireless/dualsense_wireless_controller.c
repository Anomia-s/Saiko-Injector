/**
 * Function: dualsense_wireless_controller
 * Address:  14063df10
 * Signature: undefined dualsense_wireless_controller(void)
 * Body size: 1172 bytes
 */


ulonglong dualsense_wireless_controller(longlong param_1)

{
  short sVar1;
  ushort *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 uVar9;
  char *pcVar10;
  undefined8 unaff_RBX;
  ulonglong uVar11;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_100;
  uint local_f8;
  uint local_f0;
  uint local_e8;
  ushort local_d8;
  undefined1 local_d6;
  ushort local_d5;
  undefined1 local_d3;
  ushort local_d2;
  undefined1 local_d0;
  ushort local_cf;
  undefined1 local_cd;
  ushort local_cc;
  undefined1 local_ca;
  ushort local_c9;
  undefined1 local_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_128;
  plVar7 = (longlong *)FUN_140160c70(1,0xc0);
  if (plVar7 == (longlong *)0x0) {
    uVar11 = 0;
    goto LAB_14063e368;
  }
  *plVar7 = param_1;
  *(longlong **)(param_1 + 0x70) = plVar7;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (lVar8 = FUN_1400fc570(), lVar8 != 0xc)) {
    local_d8 = local_d8 & 0xff00;
  }
  else {
    puVar2 = *(ushort **)(param_1 + 0x28);
    local_d8 = *puVar2;
    local_d6 = 0x2d;
    local_d5 = puVar2[1];
    local_d3 = 0x2d;
    local_d2 = puVar2[2];
    local_d0 = 0x2d;
    local_cf = puVar2[3];
    local_cd = 0x2d;
    local_cc = puVar2[4];
    local_ca = 0x2d;
    local_c9 = puVar2[5];
    local_c7 = 0;
  }
  iVar4 = FUN_14017a630(*(undefined8 *)(param_1 + 0x80),&local_b8,0x80,0x10);
  if ((iVar4 == 0x40) || ((0 < iVar4 && ((char)local_b8 == '1')))) {
    *(undefined1 *)((longlong)plVar7 + 0x1c) = 1;
  }
  if (*(short *)(param_1 + 0x20) == 0x54c) {
    if (*(char *)((longlong)plVar7 + 0x1c) == '\x01') {
      uStack_b0 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 9;
      iVar4 = FUN_14017a7a0(*(undefined8 *)(param_1 + 0x80),&local_b8,0x80);
      if (6 < iVar4) {
        local_e8 = (uint)local_b8._1_1_;
        local_f0 = (uint)local_b8._2_1_;
        local_f8 = (uint)local_b8._3_1_;
        local_100 = (uint)local_b8._4_1_;
        local_108 = (uint)local_b8._5_1_;
        FUN_1400fd420(&local_d8,0x12,&DAT_141327634,local_b8._6_1_);
      }
      uStack_b0 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0x20;
      iVar4 = FUN_14017a7a0(*(undefined8 *)(param_1 + 0x80),&local_b8,0x40);
      if (0x2d < iVar4) {
        *(undefined2 *)((longlong)plVar7 + 0x54) = uStack_90._4_2_;
      }
    }
    if (*(short *)(param_1 + 0x20) != 0x54c) goto LAB_14063e127;
    *(undefined1 *)((longlong)plVar7 + 0x16) = 1;
    *(undefined4 *)((longlong)plVar7 + 0x12) = 0x1010101;
    uVar5 = 1;
  }
  else {
LAB_14063e127:
    uStack_b0 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 3;
    iVar4 = FUN_14017a7a0(*(undefined8 *)(param_1 + 0x80),&local_b8,0x80);
    if ((iVar4 == 0x30) && (local_b8._2_1_ == '(')) {
      if ((local_b8 & 0x200000000) == 0) {
        if ((local_b8 & 0x400000000) == 0) goto LAB_14063e1a4;
LAB_14063e230:
        *(undefined1 *)((longlong)plVar7 + 0x13) = 1;
        if ((local_b8 & 0x800000000) != 0) goto LAB_14063e23c;
LAB_14063e1ac:
        if ((local_b8 & 0x4000000000) == 0) goto LAB_14063e1c1;
LAB_14063e255:
        *(undefined1 *)((longlong)plVar7 + 0x16) = 1;
        if (local_a8._4_1_ < '\0') goto LAB_14063e261;
LAB_14063e1c9:
        if (8 < local_b8._5_1_) goto LAB_14063e1d4;
LAB_14063e270:
        uVar5 = *(undefined4 *)(&DAT_14120ef4c + (ulonglong)local_b8._5_1_ * 4);
        *(undefined1 *)((longlong)plVar7 + 0x11) = 1;
        sVar1 = *(short *)(param_1 + 0x20);
      }
      else {
        *(undefined1 *)((longlong)plVar7 + 0x12) = 1;
        if ((local_b8 & 0x400000000) != 0) goto LAB_14063e230;
LAB_14063e1a4:
        if ((local_b8 & 0x800000000) == 0) goto LAB_14063e1ac;
LAB_14063e23c:
        *(undefined1 *)((longlong)plVar7 + 0x14) = 1;
        if ((local_b8 & 0x4000000000) != 0) goto LAB_14063e255;
LAB_14063e1c1:
        if (-1 < local_a8._4_1_) goto LAB_14063e1c9;
LAB_14063e261:
        *(undefined1 *)((longlong)plVar7 + 0x15) = 1;
        if (local_b8._5_1_ < 9) goto LAB_14063e270;
LAB_14063e1d4:
        uVar5 = 0;
        *(undefined1 *)((longlong)plVar7 + 0x11) = 1;
        sVar1 = *(short *)(param_1 + 0x20);
      }
      if ((sVar1 == 0x3285) && ((*(ushort *)(param_1 + 0x22) & 0xfffe) == 0xd18)) {
        *(undefined1 *)((longlong)plVar7 + 0x14) = 1;
      }
    }
    else {
      uVar5 = 1;
      if (*(short *)(param_1 + 0x20) == 0x1532) {
        if ((ushort)(*(short *)(param_1 + 0x22) + 0xeff5U) < 2) {
          *(undefined1 *)((longlong)plVar7 + 0x16) = 1;
          *(undefined2 *)((longlong)plVar7 + 0x11) = 0x101;
        }
        else if (*(short *)(param_1 + 0x22) == 0x1012) {
          *(undefined1 *)((longlong)plVar7 + 0x16) = 1;
          *(undefined1 *)((longlong)plVar7 + 0x11) = 1;
          uVar5 = 3;
        }
      }
    }
  }
  uVar9 = 1;
  if ((*(char *)((longlong)plVar7 + 0x13) == '\0') && (*(char *)((longlong)plVar7 + 0x14) == '\0'))
  {
    uVar9 = *(undefined1 *)((longlong)plVar7 + 0x15);
  }
  *(undefined1 *)((longlong)plVar7 + 0x17) = uVar9;
  sVar1 = *(short *)(param_1 + 0x20);
  if (sVar1 == 0x3285) {
    if (*(short *)(param_1 + 0x22) == 0xd18) {
      *(undefined1 *)(plVar7 + 2) = 1;
      sVar1 = *(short *)(param_1 + 0x20);
      goto LAB_14063e2e4;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(undefined4 *)(param_1 + 0x5c) = 6;
  }
  else {
LAB_14063e2e4:
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(undefined4 *)(param_1 + 0x5c) = 6;
    if (sVar1 == 0x54c) {
      cVar3 = FUN_14012d4c0(0x54c,*(undefined2 *)(param_1 + 0x22));
      if (cVar3 == '\0') {
        pcVar10 = "DualSense Wireless Controller";
      }
      else {
        pcVar10 = "DualSense Edge Wireless Controller";
      }
      FUN_14043fe30(param_1,pcVar10);
    }
  }
  FUN_14043ff20(param_1,&local_d8);
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((char)plVar7[2] == '\0') {
    if (*(char *)(param_1 + 0x54) == '\x01') {
      cVar3 = FUN_14043ffd0();
      if (cVar3 != '\0') goto LAB_14063e368;
    }
    else {
      FUN_140440040(*(undefined8 *)(param_1 + 0x28));
    }
    uVar6 = FUN_140440300(param_1,0);
    uVar11 = (ulonglong)uVar6;
  }
LAB_14063e368:
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_128)) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_128);
}

