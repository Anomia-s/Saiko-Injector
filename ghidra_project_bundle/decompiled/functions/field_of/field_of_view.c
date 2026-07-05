/**
 * Function: field_of_view
 * Address:  14018d710
 * Signature: undefined field_of_view(void)
 * Body size: 2280 bytes
 */


void field_of_view(longlong *param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  undefined4 local_2c0;
  uint local_2b8;
  undefined **local_2b0;
  int local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined8 uStack_234;
  longlong local_228;
  longlong lStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined7 local_20f;
  undefined1 uStack_208;
  longlong lStack_207;
  longlong local_1f8;
  undefined4 uStack_1f0;
  float fStack_1ec;
  undefined4 local_1e8;
  float fStack_1e4;
  undefined4 uStack_1e0;
  float fStack_1dc;
  undefined4 uStack_1d8;
  undefined8 local_1d4;
  longlong local_1c8;
  ulonglong uStack_1c0;
  undefined4 local_1b8;
  float fStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined8 uStack_1a4;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined7 local_17f;
  undefined1 uStack_178;
  undefined8 uStack_177;
  longlong local_168;
  longlong lStack_160;
  undefined4 local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  ulonglong local_c0;
  
  local_c0 = DAT_1414ef3c0 ^ (ulonglong)auStack_2e8;
  fVar11 = *(float *)((longlong)param_1 + 0x25c);
  fVar10 = fVar11 * 12.0;
  fVar9 = fVar11 * 48.0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0x3f800000;
  uStack_110 = 0;
  local_138 = (undefined4)param_1[0x3f];
  uStack_134 = *(undefined4 *)((longlong)param_1 + 0x1fc);
  uStack_130 = (undefined4)param_1[0x40];
  uStack_12c = *(undefined4 *)((longlong)param_1 + 0x204);
  fVar13 = *(float *)(param_1 + 0x4b);
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  fStack_dc = 0.0;
  local_f8 = 0;
  lStack_f0 = 0;
  fStack_10c = fVar9;
  uVar3 = FUN_14005c130(0,&local_128,&local_f8,param_2);
  puVar4 = (undefined8 *)FUN_14005c5d0(param_1,uVar3);
  if ((ulonglong)puVar4[3] < 8) {
    FUN_1400069b0(puVar4,8);
  }
  else {
    puVar5 = puVar4;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar5 = (undefined8 *)*puVar4;
    }
    puVar4[2] = 8;
    *puVar5 = 0x73676e6974746553;
    *(undefined1 *)(puVar5 + 1) = 0;
  }
  *(undefined1 *)((longlong)puVar4 + 0x4b) = 1;
  *(float *)(puVar4 + 4) = fVar13 * fVar11;
  *(ulonglong *)((longlong)puVar4 + 0x24) = CONCAT44(uStack_134,local_138);
  *(ulonglong *)((longlong)puVar4 + 0x2c) = CONCAT44(uStack_12c,uStack_130);
  *(undefined2 *)(puVar4 + 9) = 0x101;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  local_168 = (ulonglong)(uint)fVar10 << 0x20;
  lStack_160 = (ulonglong)(uint)fVar9 << 0x20;
  fVar13 = fVar10 * -2.0;
  _local_158 = CONCAT44(fVar13,0x3f800000);
  uStack_14c = 0x3f800000;
  uStack_178 = 0;
  uStack_177 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  local_17f = 0;
  local_198 = 0x3f800000;
  uStack_194 = 0x3f800000;
  uStack_190 = 0x3f800000;
  uStack_18c = 0x3dcccccd;
  FUN_14005c130(param_1,&local_168,&local_198,param_2);
  fVar12 = fVar11 * 36.0 + fVar10 + fVar10;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  local_1c8 = (ulonglong)(uint)fVar10 << 0x20;
  uStack_1c0 = CONCAT44(fVar12,0x3f800000) ^ 0x8000000000000000;
  _local_1b8 = CONCAT44(fVar13,0x3f800000);
  uStack_1ac = 0x3f800000;
  FUN_14005c130(param_1,&local_1c8,&local_198,param_2);
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  local_1f8 = (ulonglong)(uint)fVar10 << 0x20;
  _uStack_1f0 = CONCAT44(-fVar10,0x3f800000);
  _local_1e8 = CONCAT44(fVar13,0x3f800000);
  local_1d4 = 0x3f800000;
  uStack_208 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  local_20f = 0;
  local_228 = param_1[0x39];
  lStack_220 = param_1[0x3a];
  lStack_207 = (ulonglong)(uint)(*(float *)(param_1 + 0x49) * fVar11) << 0x18;
  fStack_1dc = fVar11 * 36.0;
  uVar2 = FUN_14005c130(param_1,&local_1f8,&local_228,param_2);
  *(undefined1 *)(*param_1 + 0x62 + (ulonglong)uVar2 * 0x80 + (ulonglong)uVar2 * 4) = 2;
  iVar1 = (int)param_1[0xd4];
  *(int *)(param_1 + 0xd4) = iVar1 + 1;
  *(ushort *)(param_1 + (longlong)iVar1 + 0xcc) = uVar2;
  *(undefined4 *)((longlong)param_1 + (longlong)iVar1 * 8 + 0x664) = 5;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0x3f800000;
  uStack_240 = 0x3f800000;
  local_268 = (undefined4)param_1[0x3f];
  uStack_264 = *(undefined4 *)((longlong)param_1 + 0x1fc);
  uStack_260 = (undefined4)param_1[0x40];
  uStack_25c = *(undefined4 *)((longlong)param_1 + 0x204);
  fVar13 = *(float *)(param_1 + 0x4a);
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  fStack_dc = 0.0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar3 = FUN_14005c130(param_1,&local_258,&local_f8);
  puVar4 = (undefined8 *)FUN_14005c5d0(param_1,uVar3);
  if ((ulonglong)puVar4[3] < 4) {
    FUN_1400069b0(puVar4,4);
  }
  else {
    puVar5 = puVar4;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar5 = (undefined8 *)*puVar4;
    }
    puVar4[2] = 4;
    *(undefined4 *)puVar5 = 0x6b636142;
    *(undefined1 *)((longlong)puVar5 + 4) = 0;
  }
  *(undefined1 *)((longlong)puVar4 + 0x4b) = 1;
  *(float *)(puVar4 + 4) = fVar11 * fVar13;
  *(ulonglong *)((longlong)puVar4 + 0x24) = CONCAT44(uStack_264,local_268);
  *(ulonglong *)((longlong)puVar4 + 0x2c) = CONCAT44(uStack_25c,uStack_260);
  *(undefined2 *)(puVar4 + 9) = 0x101;
  fVar11 = fVar10 + fVar10 + fVar9;
  local_f8 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  fStack_dc = -(fVar11 + fVar12);
  lStack_f0 = (ulonglong)(uint)(fVar9 + fVar10) << 0x20;
  local_e8 = 0x3f800000;
  uStack_e0 = 0x3f800000;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_278 = 0;
  local_270 = 1;
  uVar2 = FUN_14005c130(param_1,&local_f8,&local_298,param_2);
  uVar7 = (ulonglong)uVar2;
  *(undefined1 *)(*param_1 + 0x62 + (ulonglong)uVar2 * 0x80 + uVar7 * 4) = 5;
  *(ushort *)((longlong)param_1 + 0x6aa) = uVar2;
  *(int *)(param_1 + 0x54) = (int)param_1[0x4e];
  uVar3 = FUN_14018e4c0(param_1,uVar2,0,"Graphics");
  uVar3 = FUN_14018e680(param_1,uVar7,uVar3);
  local_2c8 = (longlong *)((longlong)param_1 + 0x294);
  uVar3 = FUN_14018edf0(param_1,uVar2,uVar3,"Fullscreen");
  local_2c8 = (longlong *)((longlong)param_1 + 0x295);
  uVar3 = FUN_14018edf0(param_1,uVar2,uVar3,"VSync");
  uVar3 = FUN_14018e4c0(param_1,uVar2,uVar3,"General");
  local_2c8 = param_1 + 0x51;
  local_2b0 = (undefined **)CONCAT44(local_2b0._4_4_,0x3f800000);
  local_2b8 = 0x42f00000;
  local_2c0 = 0x42700000;
  uVar3 = FUN_14018f2a0(param_1,uVar2,uVar3,"Field of View");
  local_2c8 = (longlong *)((longlong)param_1 + 0x28c);
  local_2a8 = 0;
  local_2b0 = (undefined **)0x0;
  local_2b8 = 10;
  local_2c0 = 1;
  uVar3 = FUN_14018f9f0(param_1,uVar2,uVar3,"Sensitivity");
  local_2c8 = param_1 + 0x52;
  local_2a8 = 0;
  local_2b0 = (undefined **)0x0;
  local_2b8 = 10;
  local_2c0 = 1;
  uVar3 = FUN_14018f9f0(param_1,uVar2,uVar3,"Volume");
  local_2c8 = (longlong *)((longlong)param_1 + 0x29d);
  uVar3 = FUN_14018edf0(param_1,uVar2,uVar3,"Shift Lock");
  local_2c8 = param_1 + 0x53;
  local_2b0 = (undefined **)CONCAT44(local_2b0._4_4_,0x3dcccccd);
  local_2b8 = 0x40000000;
  local_2c0 = 0x3f000000;
  uVar3 = FUN_14018f2a0(param_1,uVar7,uVar3,"UI Scale");
  local_2c8 = (longlong *)((longlong)param_1 + 0x29c);
  uVar3 = FUN_14018edf0(param_1,uVar2,uVar3,"Diagnostics");
  uVar3 = FUN_14018e4c0(param_1,uVar2,uVar3,"Advanced");
  local_2c8 = param_1 + 0x4f;
  local_2b0 = &PTR_DAT_140deea70;
  local_2a8 = 3;
  local_2b8 = 2;
  local_2c0 = 0;
  uVar3 = FUN_14018f9f0(param_1,uVar2,uVar3,"AA Method");
  bVar8 = (int)param_1[0x4f] == 2;
  local_2b0 = &PTR_DAT_140deeab0;
  if (bVar8) {
    local_2b0 = &PTR_DAT_140deea90;
  }
  local_2b8 = (uint)bVar8;
  local_2a8 = 4 - local_2b8;
  local_2b8 = local_2b8 ^ 3;
  local_2c8 = (longlong *)((longlong)param_1 + 0x27c);
  local_2c0 = 0;
  uVar3 = FUN_14018f9f0(param_1,uVar2,uVar3,"AA Quality");
  local_2c8 = param_1 + 0x50;
  uVar3 = FUN_14018edf0(param_1,uVar2,uVar3,"Bloom");
  local_2c8 = (longlong *)((longlong)param_1 + 0x284);
  local_2b0 = (undefined **)CONCAT44(local_2b0._4_4_,0x3d4ccccd);
  local_2b8 = 0x3fc00000;
  local_2c0 = 0x3f000000;
  fVar13 = (float)FUN_14018f2a0(param_1,uVar2,uVar3,"Saturation");
  lVar6 = FUN_14005d6d0(param_1,uVar2);
  *(undefined8 *)(lVar6 + 4) = 0;
  *(undefined4 *)(lVar6 + 0xc) = 0;
  *(float *)(lVar6 + 0x10) = fVar10 + fVar13;
  fVar12 = fVar11 + fVar13 + fVar10 + fVar12;
  *(float *)((longlong)param_1 + 0x6ac) = fVar12;
  *(float *)(*param_1 + 0x1c +
            (ulonglong)(uint)((int)((ulonglong)param_2 & 0xffff) << 7) +
            ((ulonglong)param_2 & 0xffff) * 4) = fVar12;
  if (DAT_1414ef3c0 == (local_c0 ^ (ulonglong)auStack_2e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_c0 ^ (ulonglong)auStack_2e8);
}

