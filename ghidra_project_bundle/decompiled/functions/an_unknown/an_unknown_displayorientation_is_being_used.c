/**
 * Function: an_unknown_displayorientation_is_being_used
 * Address:  14041be60
 * Signature: undefined an_unknown_displayorientation_is_being_used(void)
 * Body size: 1986 bytes
 */


void an_unknown_displayorientation_is_being_used
               (longlong param_1,longlong param_2,int param_3,float *param_4,int param_5,
               longlong *param_6,longlong param_7)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  byte bVar11;
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  longlong *plVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  int local_1a4;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  float local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  float local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_1e8;
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  local_190 = *(longlong *)(lVar1 + 0x58);
  if (local_190 == 0) {
    local_190 = *(longlong *)(lVar1 + 0x50);
  }
  local_198 = param_7;
  local_1a4 = param_3;
  if (param_5 == 0) {
    lVar17 = 0;
    iVar13 = *(int *)(param_2 + 0x2c);
    if (*(longlong *)(lVar1 + 0x3a8) != 0) goto LAB_14041bee8;
  }
  else {
    lVar17 = *param_6;
    iVar13 = *(int *)(param_2 + 0x2c);
    if (lVar17 != *(longlong *)(lVar1 + 0x3a8)) {
LAB_14041bee8:
      local_c0 = 0.0;
      uStack_bc = 0;
      (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x40))
                (*(longlong **)(lVar1 + 0x30),0,1,&local_c0);
      *(undefined8 *)(lVar1 + 0x3a8) = 0;
    }
  }
  if (local_190 != *(longlong *)(lVar1 + 0x1e8)) {
    (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x108))
              (*(longlong **)(lVar1 + 0x30),1,&local_190,0);
    *(longlong *)(lVar1 + 0x1e8) = local_190;
  }
  local_1a0 = lVar17;
  if (*(char *)(lVar1 + 0x3e0) == '\x01') {
    lVar17 = *(longlong *)(param_1 + 0x2c0);
    iVar19 = 1;
    if (*(longlong *)(lVar17 + 0x58) == 0) {
      iVar19 = *(int *)(lVar17 + 0x1e0);
      if (*(int *)(lVar17 + 0x3d4) != 0) goto LAB_14041bf9e;
      goto LAB_14041bfd5;
    }
    if (*(int *)(lVar17 + 0x3d4) == 0) goto LAB_14041bfd5;
LAB_14041bf9e:
    if (*(int *)(lVar17 + 0x3d8) == 0) goto LAB_14041bfd5;
    switch(iVar19) {
    case 1:
      FUN_140634f10(&local_c0);
      goto LAB_14041c46b;
    case 2:
      uVar24 = 0xbfc90fdb;
      break;
    case 3:
      uVar24 = 0x40490fdb;
      break;
    case 4:
      uVar24 = 0x3fc90fdb;
      break;
    default:
      cVar12 = FUN_1400fbed0("An unknown DisplayOrientation is being used");
      cVar10 = *(char *)(lVar1 + 0x3b8);
      goto joined_r0x00014041bfde;
    }
    FUN_140635080(&local_c0,uVar24);
LAB_14041c46b:
    local_148 = 2.0 / (float)*(int *)(lVar17 + 0x3d4);
    local_134 = -2.0 / (float)*(int *)(lVar17 + 0x3d8);
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0x3f800000;
    uStack_118 = 0x3f800000bf800000;
    local_110 = 0x3f80000000000000;
    local_158 = uStack_94._4_4_;
    uStack_154 = (undefined4)local_8c;
    uStack_150 = local_8c._4_4_;
    uStack_14c = (undefined4)uStack_84;
    local_168 = uStack_a4._4_4_;
    uStack_164 = (undefined4)local_9c;
    uStack_160 = local_9c._4_4_;
    uStack_15c = (undefined4)uStack_94;
    local_178 = uStack_b4._4_4_;
    uStack_174 = (undefined4)uStack_ac;
    uStack_170 = uStack_ac._4_4_;
    uStack_16c = (undefined4)uStack_a4;
    local_188 = local_c0;
    uStack_184 = uStack_bc;
    uStack_180 = uStack_b8;
    uStack_17c = (undefined4)uStack_b4;
    FUN_140634f50(&local_108,&local_148,&local_188);
    *(undefined4 *)(lVar17 + 0x1c8) = local_d8;
    *(undefined4 *)(lVar17 + 0x1cc) = uStack_d4;
    *(undefined4 *)(lVar17 + 0x1d0) = uStack_d0;
    *(undefined4 *)(lVar17 + 0x1d4) = uStack_cc;
    *(undefined8 *)(lVar17 + 0x1b8) = local_e8;
    *(undefined8 *)(lVar17 + 0x1c0) = uStack_e0;
    *(ulonglong *)(lVar17 + 0x1a8) = CONCAT44(uStack_f4,uStack_f8);
    *(undefined8 *)(lVar17 + 0x1b0) = uStack_f0;
    *(ulonglong *)(lVar17 + 0x198) = CONCAT44(fStack_104,local_108);
    *(ulonglong *)(lVar17 + 0x1a0) = CONCAT44(fStack_fc,fStack_100);
    bVar23 = (iVar19 - 2U & 0xfffffffd) == 0;
    uVar14 = (ulonglong)bVar23;
    uVar15 = (ulonglong)!bVar23;
    local_108 = (float)*(int *)(lVar17 + 0x3cc + uVar14 * 4);
    fStack_104 = (float)*(int *)(lVar17 + 0x3cc + uVar15 * 4);
    fStack_100 = (float)*(int *)(lVar17 + 0x3d4 + uVar14 * 4);
    fStack_fc = (float)*(int *)(lVar17 + 0x3d4 + uVar15 * 4);
    uStack_f8 = 0;
    uStack_f4 = 0x3f800000;
    (**(code **)(**(longlong **)(lVar17 + 0x30) + 0x160))
              (*(longlong **)(lVar17 + 0x30),1,&local_108);
    *(undefined1 *)(lVar17 + 0x3e0) = 0;
    cVar12 = '\x01';
    cVar10 = *(char *)(lVar1 + 0x3b8);
  }
  else {
LAB_14041bfd5:
    cVar12 = '\0';
    cVar10 = *(char *)(lVar1 + 0x3b8);
  }
joined_r0x00014041bfde:
  if (cVar10 == '\x01') {
    if (*(char *)(lVar1 + 0x3b9) == '\0') {
      plVar22 = *(longlong **)(lVar1 + 0x30);
      lVar17 = *plVar22;
      uVar16 = 0;
      pfVar21 = (float *)0x0;
    }
    else {
      cVar10 = the_physical_display_is_in_an_unknown_or_unsu
                         (*(undefined8 *)(param_1 + 0x2c0),lVar1 + 0x3bc,&local_c0,1);
      if (cVar10 == '\0') goto LAB_14041c36c;
      plVar22 = *(longlong **)(lVar1 + 0x30);
      lVar17 = *plVar22;
      pfVar21 = &local_c0;
      uVar16 = 1;
    }
    (**(code **)(lVar17 + 0x168))(plVar22,uVar16,pfVar21);
    *(undefined1 *)(lVar1 + 0x3b8) = 0;
  }
  lVar17 = *(longlong *)(lVar1 + 0x148 + (ulonglong)*(byte *)(lVar1 + 0x3b9) * 8);
  if (lVar17 != *(longlong *)(lVar1 + 0x1f0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x158))();
    *(longlong *)(lVar1 + 0x1f0) = lVar17;
  }
  if (iVar13 == 0) {
    lVar17 = 0;
  }
  else {
    if (0 < (longlong)*(int *)(lVar1 + 0x110)) {
      lVar17 = 0;
      do {
        if (iVar13 == *(int *)(*(longlong *)(lVar1 + 0x118) + lVar17)) {
          lVar17 = *(longlong *)(*(longlong *)(lVar1 + 0x118) + 8 + lVar17);
          if (lVar17 != 0) goto LAB_14041c0cb;
          break;
        }
        lVar17 = lVar17 + 0x10;
      } while ((longlong)*(int *)(lVar1 + 0x110) * 0x10 != lVar17);
    }
    lVar17 = function_id3d11device1_createblendstate(*(undefined8 *)(param_1 + 0x2c0),iVar13);
    if (lVar17 == 0) goto LAB_14041c36c;
  }
LAB_14041c0cb:
  lVar20 = (longlong)local_1a4;
  if (lVar17 != *(longlong *)(lVar1 + 0x1f8)) {
    (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x118))
              (*(longlong **)(lVar1 + 0x30),lVar17,0,0xffffffff);
    *(longlong *)(lVar1 + 0x1f8) = lVar17;
  }
  lVar17 = lVar20 * 0x68 + lVar1;
  plVar22 = (longlong *)(lVar17 + 0x208);
  if (param_4 == (float *)0x0) {
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_7c = 0;
    uStack_74 = 0;
    local_70 = 0;
    local_8c = 0;
    uStack_84 = 0;
    local_9c = 0;
    uStack_94 = 0;
    uStack_ac = 0;
    uStack_a4 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    bVar11 = FUN_140118890(param_1);
    local_c0 = (float)bVar11;
    uStack_b4 = CONCAT44(uStack_b4._4_4_,*(undefined4 *)(param_2 + 0x18));
    param_4 = &local_c0;
    if (*plVar22 != 0) goto LAB_14041c184;
LAB_14041c1b5:
    fStack_104 = 0.0;
    fStack_fc = 0.0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    local_108 = 1.34525e-43;
    fStack_100 = 5.60519e-45;
    uStack_140 = 0;
    uStack_13c = 0;
    local_148 = SUB84(param_4,0);
    uStack_144 = (undefined4)((ulonglong)param_4 >> 0x20);
    iVar13 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x18))
                       (*(longlong **)(lVar1 + 0x28),&local_108,&local_148,plVar22);
    if (iVar13 < 0) {
      FUN_1403d7600("__FUNCTION__, ID3D11Device::CreateBuffer [create shader constants]",iVar13);
      goto LAB_14041c36c;
    }
    uVar16 = *(undefined8 *)(param_4 + 0x16);
    *(undefined8 *)(lVar17 + 0x260) = *(undefined8 *)(param_4 + 0x14);
    *(undefined8 *)(lVar17 + 0x268) = uVar16;
    uVar16 = *(undefined8 *)(param_4 + 0x12);
    *(undefined8 *)(lVar17 + 0x250) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(lVar17 + 600) = uVar16;
    fVar2 = *param_4;
    fVar3 = param_4[1];
    fVar4 = param_4[2];
    fVar5 = param_4[3];
    uVar16 = *(undefined8 *)(param_4 + 4);
    uVar6 = *(undefined8 *)(param_4 + 6);
    uVar7 = *(undefined8 *)(param_4 + 8);
    uVar8 = *(undefined8 *)(param_4 + 10);
    uVar9 = *(undefined8 *)(param_4 + 0xe);
    *(undefined8 *)(lVar17 + 0x240) = *(undefined8 *)(param_4 + 0xc);
    *(undefined8 *)(lVar17 + 0x248) = uVar9;
    *(undefined8 *)(lVar17 + 0x230) = uVar7;
    *(undefined8 *)(lVar17 + 0x238) = uVar8;
    *(undefined8 *)(lVar17 + 0x220) = uVar16;
    *(undefined8 *)(lVar17 + 0x228) = uVar6;
    *(float *)(lVar17 + 0x210) = fVar2;
    *(float *)(lVar17 + 0x214) = fVar3;
    *(float *)(lVar17 + 0x218) = fVar4;
    *(float *)(lVar17 + 0x21c) = fVar5;
    *(undefined4 *)(lVar1 + 0x200) = 0;
    if (local_1a4 == 0) goto LAB_14041c26b;
LAB_14041c3b3:
    lVar17 = *(longlong *)(lVar1 + 0xf0 + lVar20 * 8);
    if (lVar17 == 0) {
      plVar18 = (longlong *)(lVar20 * 8 + 0xf0 + lVar1);
      cVar10 = function_id3d11device1_createpixelshader
                         (*(undefined8 *)(lVar1 + 0x28),local_1a4,plVar18);
      if (cVar10 == '\0') goto LAB_14041c36c;
      lVar17 = *plVar18;
    }
    (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x48))(*(longlong **)(lVar1 + 0x30),lVar17,0,0);
    if (*plVar22 != 0) {
      (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x80))(*(longlong **)(lVar1 + 0x30),0,1,plVar22);
    }
    *(int *)(lVar1 + 0x200) = local_1a4;
    if (local_1a0 != *(longlong *)(lVar1 + 0x3a8)) goto LAB_14041c279;
  }
  else {
    if (*plVar22 == 0) goto LAB_14041c1b5;
LAB_14041c184:
    iVar13 = FUN_1400fc560(param_4,lVar17 + 0x210,0x60);
    if (iVar13 != 0) {
      if ((longlong *)*plVar22 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar22 + 0x10))();
        *plVar22 = 0;
      }
      goto LAB_14041c1b5;
    }
    if (local_1a4 != *(int *)(lVar1 + 0x200)) goto LAB_14041c3b3;
LAB_14041c26b:
    if (local_1a0 != *(longlong *)(lVar1 + 0x3a8)) {
LAB_14041c279:
      lVar17 = local_1a0;
      (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x40))
                (*(longlong **)(lVar1 + 0x30),0,param_5,param_6);
      *(longlong *)(lVar1 + 0x3a8) = lVar17;
    }
  }
  if (local_198 != *(longlong *)(lVar1 + 0x3b0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x50))(*(longlong **)(lVar1 + 0x30),0,1,&param_7);
    *(longlong *)(lVar1 + 0x3b0) = param_7;
  }
  if ((cVar12 != '\0') ||
     (iVar13 = FUN_1400fc560(lVar1 + 0x158,(undefined4 *)(lVar1 + 0x3e4),0x40), iVar13 != 0)) {
    local_1c8 = lVar1 + 0x158;
    *(undefined4 *)(lVar1 + 0x188) = *(undefined4 *)(lVar1 + 0x414);
    *(undefined4 *)(lVar1 + 0x18c) = *(undefined4 *)(lVar1 + 0x418);
    *(undefined4 *)(lVar1 + 400) = *(undefined4 *)(lVar1 + 0x41c);
    *(undefined4 *)(lVar1 + 0x194) = *(undefined4 *)(lVar1 + 0x420);
    *(undefined4 *)(lVar1 + 0x178) = *(undefined4 *)(lVar1 + 0x404);
    *(undefined4 *)(lVar1 + 0x17c) = *(undefined4 *)(lVar1 + 0x408);
    *(undefined4 *)(lVar1 + 0x180) = *(undefined4 *)(lVar1 + 0x40c);
    *(undefined4 *)(lVar1 + 0x184) = *(undefined4 *)(lVar1 + 0x410);
    *(undefined4 *)(lVar1 + 0x168) = *(undefined4 *)(lVar1 + 0x3f4);
    *(undefined4 *)(lVar1 + 0x16c) = *(undefined4 *)(lVar1 + 0x3f8);
    *(undefined4 *)(lVar1 + 0x170) = *(undefined4 *)(lVar1 + 0x3fc);
    *(undefined4 *)(lVar1 + 0x174) = *(undefined4 *)(lVar1 + 0x400);
    *(undefined4 *)(lVar1 + 0x158) = *(undefined4 *)(lVar1 + 0x3e4);
    *(undefined4 *)(lVar1 + 0x15c) = *(undefined4 *)(lVar1 + 1000);
    *(undefined4 *)(lVar1 + 0x160) = *(undefined4 *)(lVar1 + 0x3ec);
    *(undefined4 *)(lVar1 + 0x164) = *(undefined4 *)(lVar1 + 0x3f0);
    local_1b8 = 0;
    local_1c0 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x180))
              (*(longlong **)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x1d8),0,0);
  }
LAB_14041c36c:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_1e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_1e8);
}

