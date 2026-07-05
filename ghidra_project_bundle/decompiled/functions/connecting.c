/**
 * Function: connecting
 * Address:  14017f240
 * Signature: undefined connecting(void)
 * Body size: 1178 bytes
 */


void connecting(longlong *param_1,float param_2,undefined8 *param_3)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined7 local_20f;
  undefined1 uStack_208;
  longlong lStack_207;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined8 uStack_1d4;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  float local_1a4;
  undefined1 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float local_134;
  undefined1 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  float local_114;
  undefined4 local_110;
  float local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined8 uStack_d7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined5 uStack_74;
  undefined3 uStack_6f;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_248;
  FUN_14005e840();
  *(float *)(param_1 + 0x35) = param_2;
  memcpy((void *)((longlong)param_1 + 0x1ac),param_3,0xb4);
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0x3f800000;
  uStack_b0 = 0x3f800000;
  uStack_d8 = 0;
  uStack_d7 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_df = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3f0ccccd;
  uVar3 = FUN_14005c130(param_1,&local_c8,&local_f8,0xffff);
  *(short *)((longlong)param_1 + 0x262) = (short)uVar3;
  local_114 = param_2 * 380.0;
  local_10c = param_2 * 130.0;
  local_100 = 0;
  local_128 = 0x3f000000;
  uStack_124 = 0;
  uStack_120 = 0x3f000000;
  uStack_11c = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0x3f0000003f000000;
  local_158 = *param_3;
  uStack_150 = param_3[1];
  local_130 = 0;
  local_148 = param_3[0xe];
  uStack_140 = param_3[0xf];
  local_134 = *(float *)(param_3 + 0x14) * param_2;
  local_138 = param_2;
  uVar3 = FUN_14005c130(param_1,&local_128,&local_158,uVar3);
  *(short *)((longlong)param_1 + 0x264) = (short)uVar3;
  fStack_16c = param_2 * 70.0;
  uStack_168 = 0;
  uStack_164 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0x3f800000;
  uStack_170 = 0;
  local_198 = *(undefined4 *)(param_3 + 10);
  uStack_194 = *(undefined4 *)((longlong)param_3 + 0x54);
  uStack_190 = *(undefined4 *)(param_3 + 0xb);
  uStack_18c = *(undefined4 *)((longlong)param_3 + 0x5c);
  fVar1 = *(float *)(param_3 + 0x15);
  uStack_78 = 0;
  uStack_74 = 0;
  local_88 = 0;
  uStack_80 = 0;
  fStack_7c = 0.0;
  local_98 = 0;
  uStack_90 = 0;
  uVar3 = FUN_14005c130(param_1,&local_188,&local_98,uVar3);
  puVar4 = (undefined8 *)FUN_14005c5d0(param_1,uVar3);
  if ((ulonglong)puVar4[3] < 0xd) {
    FUN_1400069b0(puVar4,0xd);
  }
  else {
    puVar5 = puVar4;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar5 = (undefined8 *)*puVar4;
    }
    puVar4[2] = 0xd;
    *(undefined8 *)((longlong)puVar5 + 5) = 0x2e2e2e676e697463;
    *puVar5 = 0x697463656e6e6f43;
    *(undefined1 *)((longlong)puVar5 + 0xd) = 0;
  }
  *(undefined1 *)((longlong)puVar4 + 0x4b) = 1;
  *(float *)(puVar4 + 4) = fVar1 * param_2;
  *(ulonglong *)((longlong)puVar4 + 0x24) = CONCAT44(uStack_194,local_198);
  *(ulonglong *)((longlong)puVar4 + 0x2c) = CONCAT44(uStack_18c,uStack_190);
  *(undefined2 *)(puVar4 + 9) = 0x101;
  *(short *)((longlong)param_1 + 0x266) = (short)uVar3;
  fStack_7c = param_2 * 6.0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_6f = 0;
  local_98 = (ulonglong)(uint)(param_2 * 30.0) << 0x20;
  uStack_90 = CONCAT44(param_2 * -25.0,0x3f800000);
  local_88 = CONCAT44(param_2 * 30.0 * -2.0,0x3f800000);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_1c8 = *(undefined4 *)(param_3 + 6);
  uStack_1c4 = *(undefined4 *)((longlong)param_3 + 0x34);
  uStack_1c0 = *(undefined4 *)(param_3 + 7);
  uStack_1bc = *(undefined4 *)((longlong)param_3 + 0x3c);
  local_1a0 = 1;
  local_1a4 = param_2 * 3.0;
  uVar3 = FUN_14005c130(param_1,&local_98,&local_1c8,*(undefined2 *)((longlong)param_1 + 0x264));
  *(short *)(param_1 + 0x4d) = (short)uVar3;
  local_1e8 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x3f800000;
  uStack_208 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  local_20f = 0;
  local_228 = *(undefined4 *)(param_3 + 8);
  uStack_224 = *(undefined4 *)((longlong)param_3 + 0x44);
  uStack_220 = *(undefined4 *)(param_3 + 9);
  uStack_21c = *(undefined4 *)((longlong)param_3 + 0x4c);
  lStack_207 = (ulonglong)(uint)(param_2 * 3.0) << 0x18;
  uVar3 = FUN_14005c130(param_1,&local_1f8,&local_228,uVar3);
  *(short *)((longlong)param_1 + 0x26a) = (short)uVar3;
  fVar1 = *(float *)((longlong)param_1 + 0x26c);
  fVar6 = 0.0;
  if (0.0 <= fVar1) {
    fVar6 = fVar1;
  }
  *(uint *)((longlong)param_1 + 0x26c) =
       -(uint)(1.0 < fVar1) & 0x3f800000 | ~-(uint)(1.0 < fVar1) & (uint)fVar6;
  cVar2 = FUN_14005c380(param_1,uVar3);
  if (cVar2 != '\0') {
    *(undefined4 *)
     (*param_1 + 0x10 +
     (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 0x80 +
     (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 4) =
         *(undefined4 *)((longlong)param_1 + 0x26c);
  }
  *(undefined1 *)((longlong)param_1 + 0x275) = 1;
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_248)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_248);
}

