/**
 * Function: add_constraint_from_cached_manifold
 * Address:  1400d4130
 * Signature: undefined add_constraint_from_cached_manifold(void)
 * Body size: 5862 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void add_constraint_from_cached_manifold
               (longlong param_1,longlong *param_2,undefined1 (*param_3) [16],
               undefined1 (*param_4) [16],longlong param_5,longlong param_6,undefined1 *param_7)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  ushort uVar14;
  longlong *plVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar27;
  longlong lVar28;
  undefined1 (*pauVar29) [16];
  longlong lVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  float *pfVar33;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  ulonglong uVar40;
  undefined8 *puVar41;
  undefined4 uVar42;
  ulonglong uVar43;
  undefined4 uVar44;
  ulonglong uVar45;
  uint uVar46;
  longlong lVar48;
  uint uVar49;
  float *pfVar50;
  bool bVar51;
  float extraout_XMM0_Da;
  float fVar52;
  float fVar64;
  float fVar65;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [64];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  float fVar90;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar91;
  float fVar92;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar110;
  float fVar116;
  float fVar117;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar118;
  undefined1 auVar115 [16];
  float fVar119;
  float fVar122;
  float fVar123;
  undefined1 auVar120 [16];
  float fVar124;
  undefined1 auVar121 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [64];
  float fVar132;
  float fVar137;
  float fVar138;
  undefined1 auVar133 [16];
  float fVar139;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [64];
  float fVar140;
  float fVar146;
  float fVar147;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  float fVar148;
  undefined1 auVar144 [16];
  undefined1 auVar145 [64];
  float fVar149;
  float fVar162;
  float fVar163;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  float fVar164;
  undefined1 auVar161 [64];
  float fVar165;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar175 [64];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [64];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [64];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [64];
  undefined1 auVar199 [64];
  undefined1 auStack_b88 [32];
  float *local_b68;
  int local_b54;
  undefined1 (*local_b50) [16];
  float local_b44;
  longlong *local_b40;
  undefined1 local_b38 [8];
  float fStack_b30;
  float fStack_b2c;
  undefined8 local_b28;
  float fStack_b20;
  float fStack_b1c;
  undefined8 *local_b10;
  undefined1 local_b08 [8];
  float fStack_b00;
  float fStack_afc;
  float local_af8;
  float fStack_af4;
  float fStack_af0;
  float fStack_aec;
  undefined8 local_ae8;
  float fStack_ae0;
  float fStack_adc;
  undefined8 local_ad8;
  float fStack_ad0;
  float fStack_acc;
  undefined8 local_ac8;
  float fStack_ac0;
  float fStack_abc;
  float local_ab8;
  float fStack_ab4;
  float fStack_ab0;
  float fStack_aac;
  longlong local_aa0;
  undefined1 local_a98 [8];
  float fStack_a90;
  float fStack_a8c;
  undefined1 local_a88 [16];
  undefined1 local_a78 [16];
  undefined1 local_a68 [16];
  undefined1 local_a58 [16];
  undefined8 local_a48;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  undefined1 local_a38 [8];
  float fStack_a30;
  float fStack_a2c;
  undefined1 local_a28 [8];
  float fStack_a20;
  float fStack_a1c;
  undefined1 local_a18 [8];
  float fStack_a10;
  float fStack_a0c;
  undefined1 (*local_a00) [16];
  longlong local_9f8;
  undefined1 (*local_9f0) [16];
  undefined8 *local_9e8;
  longlong *local_9e0;
  undefined1 local_9d8 [16];
  undefined1 local_9c8 [8];
  undefined8 uStack_9c0;
  undefined1 local_9b8 [16];
  undefined1 local_9a8 [8];
  float fStack_9a0;
  float fStack_99c;
  undefined1 local_998 [8];
  float fStack_990;
  float fStack_98c;
  float local_988;
  float local_984;
  undefined1 local_980 [8];
  float fStack_978;
  float fStack_974;
  byte local_970;
  undefined1 local_968 [8];
  float fStack_960;
  float fStack_95c;
  undefined1 auStack_958 [16];
  undefined8 local_948;
  undefined8 uStack_940;
  undefined1 local_938 [16];
  undefined4 local_928;
  undefined8 local_924;
  uint local_918;
  uint local_508;
  undefined1 local_4f8 [1032];
  ulonglong local_f0;
  float fVar20;
  float fVar23;
  float fVar26;
  ulonglong uVar47;
  undefined1 auVar174 [64];
  
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_b88;
  auVar70 = param_3[1];
  fVar52 = auVar70._0_4_;
  auVar84._0_4_ = fVar52 + fVar52;
  fVar64 = auVar70._4_4_;
  auVar84._4_4_ = fVar64 + fVar64;
  fVar65 = auVar70._8_4_;
  auVar84._8_4_ = fVar65 + fVar65;
  fVar116 = auVar70._12_4_;
  auVar84._12_4_ = fVar116 + fVar116;
  auVar93 = vshufps_avx(auVar84,auVar84,0xc9);
  auVar70 = vshufps_avx(auVar70,auVar70,0xd2);
  auVar53 = vshufps_avx(auVar84,auVar84,0xd2);
  fVar110 = *(float *)(param_3[1] + 0xc);
  auVar133._0_4_ = auVar70._0_4_ * auVar53._0_4_;
  auVar133._4_4_ = auVar70._4_4_ * auVar53._4_4_;
  auVar133._8_4_ = auVar70._8_4_ * auVar53._8_4_;
  auVar133._12_4_ = auVar70._12_4_ * auVar53._12_4_;
  auVar141._0_4_ = fVar52 * auVar84._0_4_;
  auVar141._4_4_ = fVar64 * auVar84._4_4_;
  auVar141._8_4_ = fVar65 * auVar84._8_4_;
  auVar141._12_4_ = fVar116 * auVar84._12_4_;
  auVar166._8_4_ = 0x3f800000;
  auVar166._0_8_ = 0x3f8000003f800000;
  auVar166._12_4_ = 0x3f800000;
  auVar174 = ZEXT1664(auVar166);
  auVar141 = vshufps_avx(auVar141,auVar141,0xc9);
  auVar141 = vsubps_avx(auVar166,auVar141);
  auVar141 = vsubps_avx(auVar141,auVar133);
  auVar66._0_4_ = fVar110 * auVar93._0_4_ + auVar84._0_4_ * auVar70._0_4_;
  auVar66._4_4_ = fVar110 * auVar93._4_4_ + auVar84._4_4_ * auVar70._4_4_;
  auVar66._8_4_ = fVar110 * auVar93._8_4_ + auVar84._8_4_ * auVar70._8_4_;
  auVar66._12_4_ = fVar110 * auVar93._12_4_ + auVar84._12_4_ * auVar70._12_4_;
  auVar111._0_4_ = fVar110 * auVar53._0_4_;
  auVar111._4_4_ = fVar110 * auVar53._4_4_;
  auVar111._8_4_ = fVar110 * auVar53._8_4_;
  auVar111._12_4_ = fVar110 * auVar53._12_4_;
  auVar70._0_4_ = fVar52 * auVar93._0_4_;
  auVar70._4_4_ = fVar64 * auVar93._4_4_;
  auVar70._8_4_ = fVar65 * auVar93._8_4_;
  auVar70._12_4_ = fVar116 * auVar93._12_4_;
  auVar53 = vsubps_avx(auVar70,auVar111);
  auVar176._0_12_ = ZEXT812(0);
  auVar176._12_4_ = 0;
  auVar70 = vblendps_avx(auVar53,auVar176,8);
  auVar93 = vblendps_avx(auVar141,auVar66,2);
  auVar70 = vblendps_avx(auVar70,auVar93,3);
  auVar198 = ZEXT1664(auVar70);
  auVar70 = vinsertps_avx(auVar53,auVar141,0x58);
  _local_b08 = vblendps_avx(auVar70,auVar66,4);
  auVar194 = ZEXT1664(_local_b08);
  auVar70 = vinsertps_avx(auVar53,auVar66,8);
  _local_b38 = vblendps_avx(auVar70,auVar141,4);
  auVar175 = ZEXT1664(_local_b38);
  auVar66 = SUB6416(ZEXT464(0x3f800000),0);
  _local_9c8 = vinsertps_avx(*param_3,auVar66,0x30);
  auVar70 = *param_4;
  auVar93 = param_4[1];
  fVar52 = auVar93._0_4_;
  auVar112._0_4_ = fVar52 + fVar52;
  fVar64 = auVar93._4_4_;
  auVar112._4_4_ = fVar64 + fVar64;
  fVar65 = auVar93._8_4_;
  auVar112._8_4_ = fVar65 + fVar65;
  fVar116 = auVar93._12_4_;
  auVar112._12_4_ = fVar116 + fVar116;
  auVar53 = vshufps_avx(auVar112,auVar112,0xc9);
  auVar93 = vshufps_avx(auVar93,auVar93,0xd2);
  auVar141 = vshufps_avx(auVar112,auVar112,0xd2);
  auVar142._0_4_ = auVar93._0_4_ * auVar141._0_4_;
  auVar142._4_4_ = auVar93._4_4_ * auVar141._4_4_;
  auVar142._8_4_ = auVar93._8_4_ * auVar141._8_4_;
  auVar142._12_4_ = auVar93._12_4_ * auVar141._12_4_;
  auVar150._0_4_ = fVar52 * auVar112._0_4_;
  auVar150._4_4_ = fVar64 * auVar112._4_4_;
  auVar150._8_4_ = fVar65 * auVar112._8_4_;
  auVar150._12_4_ = fVar116 * auVar112._12_4_;
  auVar84 = vshufps_avx(auVar150,auVar150,0xc9);
  auVar84 = vsubps_avx(auVar166,auVar84);
  auVar84 = vsubps_avx(auVar84,auVar142);
  fVar110 = *(float *)(param_4[1] + 0xc);
  auVar113._0_4_ = auVar112._0_4_ * auVar93._0_4_ + fVar110 * auVar53._0_4_;
  auVar113._4_4_ = auVar112._4_4_ * auVar93._4_4_ + fVar110 * auVar53._4_4_;
  auVar113._8_4_ = auVar112._8_4_ * auVar93._8_4_ + fVar110 * auVar53._8_4_;
  auVar113._12_4_ = auVar112._12_4_ * auVar93._12_4_ + fVar110 * auVar53._12_4_;
  auVar125._0_4_ = fVar110 * auVar141._0_4_;
  auVar125._4_4_ = fVar110 * auVar141._4_4_;
  auVar125._8_4_ = fVar110 * auVar141._8_4_;
  auVar125._12_4_ = fVar110 * auVar141._12_4_;
  auVar93._0_4_ = fVar52 * auVar53._0_4_;
  auVar93._4_4_ = fVar64 * auVar53._4_4_;
  auVar93._8_4_ = fVar65 * auVar53._8_4_;
  auVar93._12_4_ = fVar116 * auVar53._12_4_;
  auVar141 = vsubps_avx(auVar93,auVar125);
  auVar93 = vblendps_avx(auVar141,auVar176,8);
  auVar53 = vblendps_avx(auVar84,auVar113,2);
  _local_a18 = vblendps_avx(auVar93,auVar53,3);
  auVar131 = ZEXT1664(_local_a18);
  auVar93 = vinsertps_avx(auVar141,auVar84,0x58);
  _local_a28 = vblendps_avx(auVar93,auVar113,4);
  auVar136 = ZEXT1664(_local_a28);
  auVar93 = vinsertps_avx(auVar141,auVar113,8);
  _local_a38 = vblendps_avx(auVar93,auVar84,4);
  auVar161 = ZEXT1664(_local_a38);
  auVar145 = ZEXT1664(_local_b38);
  _local_998 = vinsertps_avx(auVar70,auVar66,0x30);
  local_b44 = *(float *)(*(longlong **)(param_1 + 200) + 4);
  _local_9a8 = *(undefined1 (*) [16])(**(longlong **)(param_1 + 200) + 0x510);
  local_aa0 = (longlong)*(int *)(param_1 + 0x80) * 0x40 + param_1;
  uVar38 = *(uint *)(param_5 + 0x18);
  local_9e0 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x170);
  local_9e8 = (undefined8 *)(param_1 + ((longlong)*(int *)(param_1 + 0x80) ^ 1U) * 0x40 + 0x10);
  auVar93 = vsubps_avx(auVar176,*param_3);
  auVar53._0_4_ = auVar93._0_4_ + auVar70._0_4_;
  auVar53._4_4_ = auVar93._4_4_ + auVar70._4_4_;
  auVar53._8_4_ = auVar93._8_4_ + auVar70._8_4_;
  auVar53._12_4_ = auVar93._12_4_ + auVar70._12_4_;
  local_9b8 = vinsertps_avx(auVar53,auVar66,0x30);
  auVar199 = ZEXT1664(local_9b8);
  local_b54 = -1;
  auVar186 = ZEXT464(0) << 0x20;
  local_b40 = param_2;
  local_a00 = param_4;
  local_9f8 = param_1;
  local_9f0 = param_3;
  do {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x169) == '\0') {
      __dyn_tls_on_demand_init();
      lVar30 = *local_9e0;
      if (lVar30 != 0) goto LAB_1400d4449;
LAB_1400d44cd:
      local_b50 = (undefined1 (*) [16])0x0;
    }
    else {
      lVar30 = *local_9e0;
      if (lVar30 == 0) goto LAB_1400d44cd;
LAB_1400d4449:
      uVar46 = *(uint *)(lVar30 + 0x200020);
      if (0xffff < (ulonglong)uVar46) {
        if (DAT_14151fc10 == '\0') {
          DAT_14151fc10 = '\x01';
          (*(code *)PTR_vfunction4_1414f67c8)
                    ("ProfileMeasurement: Too many samples, some data will be lost!");
        }
        goto LAB_1400d44cd;
      }
      *(uint *)(lVar30 + 0x200020) = uVar46 + 1;
      local_b50 = (undefined1 (*) [16])(lVar30 + (ulonglong)uVar46 * 0x20 + 0x20);
      auVar70 = vpblendw_avx(SUB6416(ZEXT864(0x1413580f4),0),local_9d8,0xf0);
      auVar67._0_12_ = ZEXT812(0);
      auVar67._12_4_ = 0;
      local_9d8 = vpblendw_avx(auVar70,auVar67,0x30);
      uVar43 = rdtsc();
      auVar70 = vpinsrq_avx(auVar175._0_16_,uVar43 & 0xffffffff00000000 | CONCAT44(1,(int)uVar43),0)
      ;
      auVar175 = ZEXT1664(auVar70);
    }
    auVar70 = auVar175._0_16_;
    lVar30 = *(longlong *)*local_9e8;
    local_a98._0_4_ = uVar38;
    uVar45 = (ulonglong)uVar38;
    bVar9 = *(byte *)(lVar30 + uVar45);
    puVar32 = (undefined8 *)(ulonglong)*(byte *)(lVar30 + 1 + uVar45);
    bVar10 = *(byte *)(lVar30 + 2 + uVar45);
    uVar43 = CONCAT71(0,*(byte *)(lVar30 + 3 + uVar45));
    local_a68._0_8_ = uVar43;
    uVar34 = CONCAT71(0,*(byte *)(lVar30 + 4 + uVar45));
    local_a58._0_8_ = uVar34;
    uVar36 = CONCAT71(0,*(byte *)(lVar30 + 5 + uVar45));
    local_a78._0_8_ = uVar36;
    local_ad8 = (ulonglong)*(byte *)(lVar30 + 6 + uVar45);
    uVar14 = *(ushort *)(lVar30 + 0x26 + uVar45);
    local_ab8 = (float)(uint)uVar14;
    uVar35 = (int)local_ab8 + (uint)(uVar14 == 0) & 0xffff;
    local_af8 = (float)(uVar35 * 0x24 + 0x28);
    uVar46 = *(uint *)((longlong)param_2 + 0xc);
    uVar39 = -uVar46 & 3;
    uVar49 = (int)param_2[2] - uVar46;
    uVar35 = uVar39 + uVar35 * 0x24 + 0x28;
    bVar11 = *(byte *)(lVar30 + 7 + uVar45);
    bVar12 = *(byte *)(lVar30 + 8 + uVar45);
    bVar13 = *(byte *)(lVar30 + 9 + uVar45);
    uVar40 = CONCAT71(0,*(byte *)(lVar30 + 10 + uVar45));
    local_a88._0_8_ = uVar40;
    puVar41 = (undefined8 *)(ulonglong)*(byte *)(lVar30 + 0xb + uVar45);
    local_a48 = (ulonglong)*(byte *)(lVar30 + 0xc + uVar45);
    local_ae8 = (ulonglong)*(byte *)(lVar30 + 0xd + uVar45);
    local_ac8 = (ulonglong)*(byte *)(lVar30 + 0xe + uVar45);
    local_b28 = (ulonglong)*(byte *)(lVar30 + 0xf + uVar45);
    if (uVar49 < uVar35) {
      lVar48 = *param_2;
      lVar28 = param_2[1];
      if (*(uint *)(lVar48 + 0xc) < *(uint *)(lVar48 + 8)) {
        LOCK();
        puVar1 = (uint *)(lVar48 + 0xc);
        uVar35 = *puVar1;
        *puVar1 = *puVar1 + (int)lVar28;
        UNLOCK();
        uVar49 = (int)lVar28 + uVar35;
        uVar46 = *(uint *)(lVar48 + 8);
        if (uVar46 < uVar49) {
          uVar49 = uVar46;
        }
        if (uVar35 <= uVar46) {
          uVar46 = uVar35;
        }
        if (*(uint *)(local_b40 + 2) == uVar35) {
          uVar46 = *(uint *)((longlong)local_b40 + 0xc);
        }
        *(uint *)((longlong)local_b40 + 0xc) = uVar46;
        *(uint *)(local_b40 + 2) = uVar49;
        uVar39 = -uVar46 & 3;
        uVar49 = uVar49 - uVar46;
        uVar35 = uVar39 | (uint)local_af8;
      }
      param_2 = local_b40;
      param_4 = local_a00;
      if (uVar35 <= uVar49) goto LAB_1400d4680;
      *(byte *)(local_b40 + 4) = *(byte *)(local_b40 + 4) | 1;
      bVar9 = 1;
      local_b10 = puVar41;
    }
    else {
LAB_1400d4680:
      uVar46 = uVar46 + uVar39;
      uVar47 = (ulonglong)uVar46;
      local_b10 = (undefined8 *)(lVar30 + uVar45);
      local_b28 = (local_b28 ^
                  (local_ac8 ^
                  (local_ae8 ^
                  (local_a48 ^
                  ((ulonglong)puVar41 ^
                  (uVar40 ^ ((ulonglong)bVar13 ^
                            ((ulonglong)bVar12 ^
                            ((ulonglong)bVar11 ^
                            (local_ad8 ^
                            (uVar36 ^ (uVar34 ^ (uVar43 ^ ((ulonglong)bVar10 ^
                                                          ((ulonglong)puVar32 ^
                                                          ((ulonglong)bVar9 ^ 0xcbf29ce484222325) *
                                                          0x100000001b3) * 0x100000001b3) *
                                                          0x100000001b3) * 0x100000001b3) *
                                      0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
                            0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
                  0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3;
      *(uint *)((longlong)param_2 + 0xc) = (int)local_af8 + uVar46;
      lVar48 = **(longlong **)(local_aa0 + 0x10);
      uVar31 = local_b10[1];
      *(undefined8 *)(lVar48 + uVar47) = *local_b10;
      ((undefined8 *)(lVar48 + uVar47))[1] = uVar31;
      *(undefined1 (*) [32])(lVar48 + 0x2c + uVar47) = ZEXT832(0) << 0x20;
      *(undefined1 (*) [32])(lVar48 + 0x14 + uVar47) = ZEXT832(0) << 0x20;
      lVar28 = *(longlong *)(local_aa0 + 0x18);
      uVar43 = (ulonglong)(*(int *)(local_aa0 + 0x20) - 1U & (uint)local_b28);
      uVar49 = *(uint *)(lVar28 + uVar43 * 4);
      *(uint *)(lVar48 + 0x10 + uVar47) = uVar49;
      puVar1 = (uint *)(lVar28 + uVar43 * 4);
      LOCK();
      uVar38 = *puVar1;
      bVar51 = uVar49 == uVar38;
      if (bVar51) {
        *puVar1 = uVar46;
        uVar38 = uVar49;
      }
      UNLOCK();
      puVar4 = (undefined4 *)(lVar30 + 4 + uVar45);
      puVar5 = (undefined4 *)(lVar30 + 0xc + uVar45);
      lVar3 = lVar48 + uVar47;
      while (!bVar51) {
        *(uint *)(lVar3 + 0x10) = uVar38;
        puVar1 = (uint *)(lVar28 + uVar43 * 4);
        LOCK();
        uVar49 = *puVar1;
        bVar51 = uVar38 == uVar49;
        if (bVar51) {
          *puVar1 = uVar46;
          uVar49 = uVar38;
        }
        UNLOCK();
        uVar38 = uVar49;
      }
      *(ushort *)(lVar3 + 0x26) = uVar14;
      *(int *)((longlong)local_b40 + 0x1c) = *(int *)((longlong)local_b40 + 0x1c) + 1;
      auVar175 = ZEXT1664(auVar131._0_16_);
      auVar136 = ZEXT1664(auVar136._0_16_);
      auVar145 = ZEXT1664(auVar145._0_16_);
      auVar161 = ZEXT1664(auVar161._0_16_);
      auVar131 = ZEXT1664(auVar174._0_16_);
      auVar186 = ZEXT1664(auVar186._0_16_);
      auVar194 = ZEXT1664(auVar194._0_16_);
      auVar198 = ZEXT1664(auVar198._0_16_);
      auVar199 = ZEXT1664(auVar199._0_16_);
      local_a58 = auVar70;
      memcpy((void *)(lVar48 + 0x14 + uVar47),(void *)(lVar30 + 0x14 + uVar45),
             (ulonglong)
             (ushort)(*(short *)((longlong)local_b10 + 0x26) +
                     (ushort)(*(short *)((longlong)local_b10 + 0x26) == 0)) * 0x24 + 0x14);
      pauVar29 = local_9f0;
      lVar30 = local_9f8;
      *(int *)(lVar3 + 0x14) = local_b54;
      local_b54 = (int)lVar3 - **(int **)(local_aa0 + 0x10);
      _local_980 = auVar131._0_16_;
      _local_968 = ZEXT1232(ZEXT812(0));
      auVar131 = ZEXT1664(auVar175._0_16_);
      auVar136 = ZEXT1664(auVar136._0_16_);
      auVar145 = ZEXT1664(auVar145._0_16_);
      auVar161 = ZEXT1664(auVar161._0_16_);
      auVar174 = ZEXT1664(_local_980);
      auVar186 = ZEXT1664(auVar186._0_16_);
      auVar194 = ZEXT1664(auVar194._0_16_);
      auVar198 = ZEXT1664(auVar198._0_16_);
      auVar199 = ZEXT1664(auVar199._0_16_);
      local_988 = (float)(**(code **)(local_9f8 + 0x98))(local_9f0,puVar4,param_4,puVar5);
      uVar31 = (**(code **)(lVar30 + 0xa0))(pauVar29,puVar4,param_4,puVar5);
      puVar32 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar31 >> 8),1);
      if ((pauVar29[7][9] & 1) == 0) {
        puVar32 = (undefined8 *)(ulonglong)(param_4[7][9] & 1);
      }
      local_970 = (byte)puVar32;
      fVar110 = *(float *)(lVar3 + 0x18);
      fVar52 = *(float *)(lVar3 + 0x1c);
      fVar64 = *(float *)(lVar3 + 0x20);
      auVar54._0_4_ = auVar161._0_4_ * fVar64 + auVar131._0_4_ * fVar110 + auVar136._0_4_ * fVar52;
      auVar54._4_4_ = auVar161._4_4_ * fVar64 + auVar131._4_4_ * fVar110 + auVar136._4_4_ * fVar52;
      auVar54._8_4_ = auVar161._8_4_ * fVar64 + auVar131._8_4_ * fVar110 + auVar136._8_4_ * fVar52;
      auVar54._12_4_ =
           auVar161._12_4_ * fVar64 + auVar131._12_4_ * fVar110 + auVar136._12_4_ * fVar52;
      auVar68._0_4_ = auVar54._0_4_ * auVar54._0_4_;
      auVar68._4_4_ = auVar54._4_4_ * auVar54._4_4_;
      auVar68._8_4_ = auVar54._8_4_ * auVar54._8_4_;
      auVar68._12_4_ = auVar54._12_4_ * auVar54._12_4_;
      auVar70 = vinsertps_avx(auVar68,auVar68,0x4c);
      auVar69._0_4_ = auVar68._0_4_ + auVar70._0_4_;
      auVar69._4_4_ = auVar68._4_4_ + auVar70._4_4_;
      auVar69._8_4_ = auVar68._8_4_ + auVar70._8_4_;
      auVar69._12_4_ = auVar68._12_4_ + auVar70._12_4_;
      auVar70 = vshufpd_avx(auVar69,auVar69,1);
      auVar70 = ZEXT416((uint)(auVar69._0_4_ + auVar70._0_4_));
      auVar70 = vsqrtss_avx(auVar70,auVar70);
      auVar70 = vshufps_avx(auVar70,auVar70,0);
      auVar70 = vdivps_avx(auVar54,auVar70);
      auVar175 = ZEXT1664(auVar70);
      plVar15 = *(longlong **)(lVar30 + 0x90);
      local_984 = extraout_XMM0_Da;
      if (plVar15 != (longlong *)0x0) {
        local_924 = CONCAT44(*puVar5,*puVar4);
        local_948 = local_9c8;
        uStack_940 = uStack_9c0;
        local_918 = (uint)*(ushort *)(lVar3 + 0x26);
        local_508 = (uint)*(ushort *)(lVar3 + 0x26);
        local_928 = 0xff7fffff;
        if (*(short *)(lVar3 + 0x26) != 0) {
          pfVar33 = (float *)(lVar48 + uVar47 + 0x34);
          pauVar37 = (undefined1 (*) [16])local_4f8;
          uVar43 = 0;
          auVar63 = ZEXT464(0xff7fffff);
          do {
            fVar110 = pfVar33[-3];
            fVar52 = pfVar33[-2];
            fVar64 = pfVar33[-1];
            auVar71._0_4_ =
                 auVar145._0_4_ * fVar64 + auVar198._0_4_ * fVar110 + auVar194._0_4_ * fVar52;
            auVar71._4_4_ =
                 auVar145._4_4_ * fVar64 + auVar198._4_4_ * fVar110 + auVar194._4_4_ * fVar52;
            auVar71._8_4_ =
                 auVar145._8_4_ * fVar64 + auVar198._8_4_ * fVar110 + auVar194._8_4_ * fVar52;
            auVar71._12_4_ =
                 auVar145._12_4_ * fVar64 + auVar198._12_4_ * fVar110 + auVar194._12_4_ * fVar52;
            pauVar37[-0x41] = auVar71;
            fVar110 = *pfVar33;
            fVar52 = pfVar33[1];
            fVar64 = pfVar33[2];
            auVar85._0_4_ =
                 auVar199._0_4_ +
                 auVar161._0_4_ * fVar64 + auVar131._0_4_ * fVar110 + auVar136._0_4_ * fVar52;
            auVar85._4_4_ =
                 auVar199._4_4_ +
                 auVar161._4_4_ * fVar64 + auVar131._4_4_ * fVar110 + auVar136._4_4_ * fVar52;
            auVar85._8_4_ =
                 auVar199._8_4_ +
                 auVar161._8_4_ * fVar64 + auVar131._8_4_ * fVar110 + auVar136._8_4_ * fVar52;
            auVar85._12_4_ =
                 auVar199._12_4_ +
                 auVar161._12_4_ * fVar64 + auVar131._12_4_ * fVar110 + auVar136._12_4_ * fVar52;
            *pauVar37 = auVar85;
            auVar93 = vsubps_avx(auVar71,auVar85);
            auVar72._0_4_ = auVar70._0_4_ * auVar93._0_4_;
            auVar72._4_4_ = auVar70._4_4_ * auVar93._4_4_;
            auVar72._8_4_ = auVar70._8_4_ * auVar93._8_4_;
            auVar72._12_4_ = auVar70._12_4_ * auVar93._12_4_;
            auVar93 = vinsertps_avx(auVar72,auVar72,0x4c);
            auVar73._0_4_ = auVar72._0_4_ + auVar93._0_4_;
            auVar73._4_4_ = auVar72._4_4_ + auVar93._4_4_;
            auVar73._8_4_ = auVar72._8_4_ + auVar93._8_4_;
            auVar73._12_4_ = auVar72._12_4_ + auVar93._12_4_;
            auVar93 = vshufpd_avx(auVar73,auVar73,1);
            auVar93 = vmaxss_avx(ZEXT416((uint)(auVar73._0_4_ + auVar93._0_4_)),auVar63._0_16_);
            auVar63 = ZEXT1664(auVar93);
            local_928 = auVar93._0_4_;
            uVar43 = uVar43 + 1;
            pfVar33 = pfVar33 + 9;
            pauVar37 = pauVar37 + 1;
          } while (uVar43 < *(ushort *)(lVar3 + 0x26));
        }
        local_b68 = &local_988;
        local_938 = auVar70;
        (**(code **)(*plVar15 + 0x18))(plVar15,pauVar29,param_4,&local_948);
        auVar70 = auVar175._0_16_;
        puVar32 = (undefined8 *)(ulonglong)local_970;
      }
      param_2 = local_b40;
      if ((char)puVar32 == '\0') {
        fVar110 = auVar186._0_4_;
        if ((float)local_980._0_4_ == fVar110) {
          if ((fStack_978 == fVar110) && (!NAN(fStack_978) && !NAN(fVar110))) goto LAB_1400d4aa2;
        }
        uVar14 = *(ushort *)(lVar3 + 0x26);
        LOCK();
        puVar2 = (ulonglong *)(lVar30 + 0xc0);
        uVar43 = *puVar2;
        *puVar2 = *puVar2 + ((ulonglong)(((uint)uVar14 + (uint)uVar14 * 2) * 0x40 + 0x40) << 0x20) +
                            1;
        UNLOCK();
        if ((uint)uVar43 < *(uint *)(lVar30 + 0xb8)) {
          uVar34 = uVar43 >> 0x20;
          *(int *)(*(longlong *)(lVar30 + 0xb0) + (uVar43 & 0xffffffff) * 4) = (int)(uVar43 >> 0x20)
          ;
          lVar48 = *(longlong *)(lVar30 + 0xa8);
          *(undefined1 (*) [32])(lVar48 + 0xe0 + uVar34) = ZEXT832(0) << 0x20;
          *(undefined1 (*) [32])(lVar48 + 200 + uVar34) = ZEXT832(0) << 0x20;
          auVar62 = ZEXT832(0) << 0x20;
          *(undefined1 (*) [32])(lVar48 + 0xa8 + uVar34) = auVar62;
          *(undefined1 (*) [32])(lVar48 + 0x88 + uVar34) = auVar62;
          *(undefined1 (*) [32])(lVar48 + 0x68 + uVar34) = auVar62;
          *(undefined1 (*) [32])(lVar48 + 0x48 + uVar34) = auVar62;
          *(undefined1 (*) [32])(lVar48 + 0x28 + uVar34) = ZEXT832(0) << 0x20;
          *(undefined1 (**) [16])(lVar48 + uVar34) = pauVar29;
          *(undefined1 (**) [16])(lVar48 + 8 + uVar34) = param_4;
          *(ulonglong *)(lVar48 + 0x10 + uVar34) = local_b28;
          uVar31 = vmovlps_avx(auVar70);
          *(undefined8 *)(lVar48 + 0x18 + uVar34) = uVar31;
          uVar44 = vextractps_avx(auVar70,2);
          *(undefined4 *)(lVar48 + 0x20 + uVar34) = uVar44;
          *(float *)(lVar48 + 0x24 + uVar34) = local_988;
          *(undefined4 *)(lVar48 + 0x2c + uVar34) = local_980._4_4_;
          *(float *)(lVar48 + 0x34 + uVar34) = fStack_974;
          *(uint *)(lVar48 + 0x38 + uVar34) = (uint)uVar14;
          *param_7 = 1;
          uVar42 = 0xffffffff;
          uVar44 = 0xffffffff;
          if (*(longlong *)(param_4[4] + 8) != 0) {
            uVar44 = *(undefined4 *)(*(longlong *)(param_4[4] + 8) + 0x70);
          }
          if (*(longlong *)(pauVar29[4] + 8) != 0) {
            uVar42 = *(undefined4 *)(*(longlong *)(pauVar29[4] + 8) + 0x70);
          }
          lVar48 = lVar48 + uVar34;
          auVar145 = ZEXT1664(auVar145._0_16_);
          auVar175 = ZEXT1664(auVar70);
          auVar194 = ZEXT1664(auVar194._0_16_);
          auVar198 = ZEXT1664(auVar198._0_16_);
          FUN_1403746b0(*(undefined8 *)(*(longlong *)(lVar30 + 200) + 0x40),uVar43,uVar42,uVar44);
          lVar28 = *(longlong *)(pauVar29[4] + 8);
          *(float *)(lVar48 + 0x28) = (float)local_980._0_4_ * *(float *)(lVar28 + 0x58);
          auVar70 = *(undefined1 (*) [16])(lVar28 + 0x30);
          fVar110 = *(float *)(lVar28 + 0x3c);
          fVar52 = *(float *)(lVar28 + 0x28);
          fVar64 = *(float *)(lVar28 + 0x24);
          fVar65 = *(float *)(lVar28 + 0x20);
          bVar9 = *(byte *)(lVar28 + 0x7a);
          lVar28 = *(longlong *)(param_4[4] + 8);
          *(float *)(lVar48 + 0x30) = fStack_978 * *(float *)(lVar28 + 0x58);
          uVar38 = *(uint *)(lVar48 + 0x38);
          if ((ulonglong)uVar38 != 0) {
            fVar116 = auVar70._0_4_;
            auVar126._0_4_ = fVar116 + fVar116;
            fVar117 = auVar70._4_4_;
            auVar126._4_4_ = fVar117 + fVar117;
            fVar118 = auVar70._8_4_;
            auVar126._8_4_ = fVar118 + fVar118;
            fVar119 = auVar70._12_4_;
            auVar126._12_4_ = fVar119 + fVar119;
            auVar93 = vshufps_avx(auVar126,auVar126,0xc9);
            auVar70 = vshufps_avx(auVar70,auVar70,0xd2);
            auVar53 = vshufps_avx(auVar126,auVar126,0xd2);
            auVar167._0_4_ = auVar70._0_4_ * auVar53._0_4_;
            auVar167._4_4_ = auVar70._4_4_ * auVar53._4_4_;
            auVar167._8_4_ = auVar70._8_4_ * auVar53._8_4_;
            auVar167._12_4_ = auVar70._12_4_ * auVar53._12_4_;
            auVar177._0_4_ = fVar116 * auVar126._0_4_;
            auVar177._4_4_ = fVar117 * auVar126._4_4_;
            auVar177._8_4_ = fVar118 * auVar126._8_4_;
            auVar177._12_4_ = fVar119 * auVar126._12_4_;
            auVar141 = vshufps_avx(auVar177,auVar177,0xc9);
            auVar187._8_4_ = 0x3f800000;
            auVar187._0_8_ = 0x3f8000003f800000;
            auVar187._12_4_ = 0x3f800000;
            auVar141 = vsubps_avx(auVar187,auVar141);
            auVar141 = vsubps_avx(auVar141,auVar167);
            auVar127._0_4_ = fVar110 * auVar93._0_4_ + auVar70._0_4_ * auVar126._0_4_;
            auVar127._4_4_ = fVar110 * auVar93._4_4_ + auVar70._4_4_ * auVar126._4_4_;
            auVar127._8_4_ = fVar110 * auVar93._8_4_ + auVar70._8_4_ * auVar126._8_4_;
            auVar127._12_4_ = fVar110 * auVar93._12_4_ + auVar70._12_4_ * auVar126._12_4_;
            auVar131 = ZEXT464(0) << 0x20;
            auVar120._0_4_ = auVar53._0_4_ * fVar110;
            auVar120._4_4_ = auVar53._4_4_ * fVar110;
            auVar120._8_4_ = auVar53._8_4_ * fVar110;
            auVar120._12_4_ = auVar53._12_4_ * fVar110;
            auVar114._0_4_ = fVar116 * auVar93._0_4_;
            auVar114._4_4_ = fVar117 * auVar93._4_4_;
            auVar114._8_4_ = fVar118 * auVar93._8_4_;
            auVar114._12_4_ = fVar119 * auVar93._12_4_;
            auVar84 = vsubps_avx(auVar114,auVar120);
            auVar70 = vshufps_avx(auVar141,auVar141,0);
            fVar119 = auVar198._0_4_;
            fVar122 = auVar198._4_4_;
            fVar123 = auVar198._8_4_;
            fVar124 = auVar198._12_4_;
            auVar93 = vshufps_avx(auVar127,auVar127,0x55);
            auVar53 = vshufps_avx(auVar84,auVar84,0xaa);
            fVar110 = auVar53._0_4_ * (float)local_b38._0_4_ +
                      auVar93._0_4_ * (float)local_b08._0_4_ + fVar119 * auVar70._0_4_;
            fVar116 = auVar53._4_4_ * (float)local_b38._4_4_ +
                      auVar93._4_4_ * (float)local_b08._4_4_ + fVar122 * auVar70._4_4_;
            fVar117 = auVar53._8_4_ * fStack_b30 +
                      auVar93._8_4_ * fStack_b00 + fVar123 * auVar70._8_4_;
            fVar118 = auVar53._12_4_ * fStack_b2c +
                      auVar93._12_4_ * fStack_afc + fVar124 * auVar70._12_4_;
            auVar70 = vshufps_avx(auVar84,auVar84,0);
            auVar93 = vshufps_avx(auVar141,auVar141,0x55);
            auVar53 = vshufps_avx(auVar127,auVar127,0xaa);
            fVar132 = auVar53._0_4_ * (float)local_b38._0_4_ +
                      auVar93._0_4_ * (float)local_b08._0_4_ + fVar119 * auVar70._0_4_;
            fVar137 = auVar53._4_4_ * (float)local_b38._4_4_ +
                      auVar93._4_4_ * (float)local_b08._4_4_ + fVar122 * auVar70._4_4_;
            fVar138 = auVar53._8_4_ * fStack_b30 +
                      auVar93._8_4_ * fStack_b00 + fVar123 * auVar70._8_4_;
            fVar139 = auVar53._12_4_ * fStack_b2c +
                      auVar93._12_4_ * fStack_afc + fVar124 * auVar70._12_4_;
            auVar70 = vshufps_avx(auVar127,auVar127,0);
            auVar93 = vshufps_avx(auVar84,auVar84,0x55);
            auVar53 = vshufps_avx(auVar141,auVar141,0xaa);
            fVar119 = fVar119 * auVar70._0_4_ + auVar93._0_4_ * (float)local_b08._0_4_ +
                      auVar53._0_4_ * (float)local_b38._0_4_;
            fVar122 = fVar122 * auVar70._4_4_ + auVar93._4_4_ * (float)local_b08._4_4_ +
                      auVar53._4_4_ * (float)local_b38._4_4_;
            fVar123 = fVar123 * auVar70._8_4_ + auVar93._8_4_ * fStack_b00 +
                      auVar53._8_4_ * fStack_b30;
            fVar124 = fVar124 * auVar70._12_4_ + auVar93._12_4_ * fStack_afc +
                      auVar53._12_4_ * fStack_b2c;
            auVar74._0_4_ = fVar52 * fVar119;
            auVar74._4_4_ = fVar52 * fVar122;
            auVar74._8_4_ = fVar52 * fVar123;
            auVar74._12_4_ = fVar52 * fVar124;
            auVar86._0_4_ = fVar64 * fVar132;
            auVar86._4_4_ = fVar64 * fVar137;
            auVar86._8_4_ = fVar64 * fVar138;
            auVar86._12_4_ = fVar64 * fVar139;
            auVar94._0_4_ = fVar65 * fVar110;
            auVar94._4_4_ = fVar65 * fVar116;
            auVar94._8_4_ = fVar65 * fVar117;
            auVar94._12_4_ = fVar65 * fVar118;
            auVar70 = vshufps_avx(auVar94,auVar94,0);
            auVar93 = vshufps_avx(auVar86,auVar86,0);
            auVar53 = vshufps_avx(auVar74,auVar74,0);
            auVar128._0_4_ =
                 auVar53._0_4_ * fVar119 + auVar93._0_4_ * fVar132 + fVar110 * auVar70._0_4_;
            auVar128._4_4_ =
                 auVar53._4_4_ * fVar122 + auVar93._4_4_ * fVar137 + fVar116 * auVar70._4_4_;
            auVar128._8_4_ =
                 auVar53._8_4_ * fVar123 + auVar93._8_4_ * fVar138 + fVar117 * auVar70._8_4_;
            auVar128._12_4_ =
                 auVar53._12_4_ * fVar124 + auVar93._12_4_ * fVar139 + fVar118 * auVar70._12_4_;
            auVar70 = vshufps_avx(auVar94,auVar94,0x55);
            auVar93 = vshufps_avx(auVar86,auVar86,0x55);
            auVar53 = vshufps_avx(auVar74,auVar74,0x55);
            auVar143._0_4_ =
                 auVar53._0_4_ * fVar119 + auVar93._0_4_ * fVar132 + auVar70._0_4_ * fVar110;
            auVar143._4_4_ =
                 auVar53._4_4_ * fVar122 + auVar93._4_4_ * fVar137 + auVar70._4_4_ * fVar116;
            auVar143._8_4_ =
                 auVar53._8_4_ * fVar123 + auVar93._8_4_ * fVar138 + auVar70._8_4_ * fVar117;
            auVar143._12_4_ =
                 auVar53._12_4_ * fVar124 + auVar93._12_4_ * fVar139 + auVar70._12_4_ * fVar118;
            auVar70 = vshufps_avx(auVar94,auVar94,0xaa);
            auVar93 = vshufps_avx(auVar86,auVar86,0xaa);
            auVar53 = vshufps_avx(auVar74,auVar74,0xaa);
            auVar75._0_4_ =
                 fVar119 * auVar53._0_4_ + fVar132 * auVar93._0_4_ + fVar110 * auVar70._0_4_;
            auVar75._4_4_ =
                 fVar122 * auVar53._4_4_ + fVar137 * auVar93._4_4_ + fVar116 * auVar70._4_4_;
            auVar75._8_4_ =
                 fVar123 * auVar53._8_4_ + fVar138 * auVar93._8_4_ + fVar117 * auVar70._8_4_;
            auVar75._12_4_ =
                 fVar124 * auVar53._12_4_ + fVar139 * auVar93._12_4_ + fVar118 * auVar70._12_4_;
            auVar70 = vpshufd_avx(ZEXT116(bVar9),0);
            auVar70 = vpand_avx(_DAT_140de3470,auVar70);
            auVar53 = vpcmpeqd_avx(_DAT_140de3470,auVar70);
            auVar70 = vpshufd_avx(auVar53,0);
            auVar70 = vpand_avx(auVar53,auVar70);
            auVar70 = vpand_avx(auVar70,auVar128);
            auVar93 = vpshufd_avx(auVar53,0x55);
            auVar93 = vpand_avx(auVar53,auVar93);
            auVar93 = vpand_avx(auVar143,auVar93);
            auVar141 = vpshufd_avx(auVar53,0xaa);
            auVar53 = vpand_avx(auVar53,auVar141);
            auVar53 = vpand_avx(auVar53,auVar75);
            local_af8 = (float)local_980._4_4_ * auVar70._0_4_;
            fStack_af4 = (float)local_980._4_4_ * auVar70._4_4_;
            fStack_af0 = (float)local_980._4_4_ * auVar70._8_4_;
            fStack_aec = (float)local_980._4_4_ * auVar70._12_4_;
            fVar138 = (float)local_980._4_4_ * auVar93._0_4_;
            fVar90 = (float)local_980._4_4_ * auVar93._4_4_;
            fStack_b20 = (float)local_980._4_4_ * auVar93._8_4_;
            fStack_b1c = (float)local_980._4_4_ * auVar93._12_4_;
            local_b28 = CONCAT44(fVar90,fVar138);
            local_ab8 = (float)local_980._4_4_ * auVar53._0_4_;
            fStack_ab4 = (float)local_980._4_4_ * auVar53._4_4_;
            fStack_ab0 = (float)local_980._4_4_ * auVar53._8_4_;
            fStack_aac = (float)local_980._4_4_ * auVar53._12_4_;
            auVar70 = *(undefined1 (*) [16])(lVar28 + 0x30);
            fVar52 = auVar70._0_4_;
            auVar76._0_4_ = fVar52 + fVar52;
            fVar64 = auVar70._4_4_;
            auVar76._4_4_ = fVar64 + fVar64;
            fVar65 = auVar70._8_4_;
            auVar76._8_4_ = fVar65 + fVar65;
            fVar116 = auVar70._12_4_;
            auVar76._12_4_ = fVar116 + fVar116;
            auVar93 = vshufps_avx(auVar76,auVar76,0xc9);
            auVar70 = vshufps_avx(auVar70,auVar70,0xd2);
            auVar53 = vshufps_avx(auVar76,auVar76,0xd2);
            fVar110 = *(float *)(lVar28 + 0x3c);
            auVar129._0_4_ = auVar70._0_4_ * auVar53._0_4_;
            auVar129._4_4_ = auVar70._4_4_ * auVar53._4_4_;
            auVar129._8_4_ = auVar70._8_4_ * auVar53._8_4_;
            auVar129._12_4_ = auVar70._12_4_ * auVar53._12_4_;
            auVar134._0_4_ = fVar52 * auVar76._0_4_;
            auVar134._4_4_ = fVar64 * auVar76._4_4_;
            auVar134._8_4_ = fVar65 * auVar76._8_4_;
            auVar134._12_4_ = fVar116 * auVar76._12_4_;
            auVar141 = vshufps_avx(auVar134,auVar134,0xc9);
            auVar141 = vsubps_avx(auVar187,auVar141);
            auVar141 = vsubps_avx(auVar141,auVar129);
            auVar95._0_4_ = auVar76._0_4_ * auVar70._0_4_ + fVar110 * auVar93._0_4_;
            auVar95._4_4_ = auVar76._4_4_ * auVar70._4_4_ + fVar110 * auVar93._4_4_;
            auVar95._8_4_ = auVar76._8_4_ * auVar70._8_4_ + fVar110 * auVar93._8_4_;
            auVar95._12_4_ = auVar76._12_4_ * auVar70._12_4_ + fVar110 * auVar93._12_4_;
            auVar77._0_4_ = fVar110 * auVar53._0_4_;
            auVar77._4_4_ = fVar110 * auVar53._4_4_;
            auVar77._8_4_ = fVar110 * auVar53._8_4_;
            auVar77._12_4_ = fVar110 * auVar53._12_4_;
            auVar55._0_4_ = fVar52 * auVar93._0_4_;
            auVar55._4_4_ = fVar64 * auVar93._4_4_;
            auVar55._8_4_ = fVar65 * auVar93._8_4_;
            auVar55._12_4_ = fVar116 * auVar93._12_4_;
            auVar84 = vsubps_avx(auVar55,auVar77);
            auVar70 = vshufps_avx(auVar141,auVar141,0);
            auVar93 = vshufps_avx(auVar95,auVar95,0x55);
            auVar53 = vshufps_avx(auVar84,auVar84,0xaa);
            fVar52 = (float)local_a38._0_4_ * auVar53._0_4_ +
                     (float)local_a28._0_4_ * auVar93._0_4_ + (float)local_a18._0_4_ * auVar70._0_4_
            ;
            fVar64 = (float)local_a38._4_4_ * auVar53._4_4_ +
                     (float)local_a28._4_4_ * auVar93._4_4_ + (float)local_a18._4_4_ * auVar70._4_4_
            ;
            fVar65 = fStack_a30 * auVar53._8_4_ +
                     fStack_a20 * auVar93._8_4_ + fStack_a10 * auVar70._8_4_;
            fVar116 = fStack_a2c * auVar53._12_4_ +
                      fStack_a1c * auVar93._12_4_ + fStack_a0c * auVar70._12_4_;
            auVar70 = vshufps_avx(auVar84,auVar84,0);
            auVar93 = vshufps_avx(auVar141,auVar141,0x55);
            auVar53 = vshufps_avx(auVar95,auVar95,0xaa);
            fVar117 = (float)local_a38._0_4_ * auVar53._0_4_ +
                      (float)local_a18._0_4_ * auVar70._0_4_ +
                      (float)local_a28._0_4_ * auVar93._0_4_;
            fVar118 = (float)local_a38._4_4_ * auVar53._4_4_ +
                      (float)local_a18._4_4_ * auVar70._4_4_ +
                      (float)local_a28._4_4_ * auVar93._4_4_;
            fVar119 = fStack_a30 * auVar53._8_4_ +
                      fStack_a10 * auVar70._8_4_ + fStack_a20 * auVar93._8_4_;
            fVar122 = fStack_a2c * auVar53._12_4_ +
                      fStack_a0c * auVar70._12_4_ + fStack_a1c * auVar93._12_4_;
            auVar70 = vshufps_avx(auVar95,auVar95,0);
            auVar93 = vshufps_avx(auVar84,auVar84,0x55);
            auVar53 = vshufps_avx(auVar141,auVar141,0xaa);
            fVar123 = (float)local_a18._0_4_ * auVar70._0_4_ +
                      (float)local_a28._0_4_ * auVar93._0_4_ +
                      (float)local_a38._0_4_ * auVar53._0_4_;
            fVar124 = (float)local_a18._4_4_ * auVar70._4_4_ +
                      (float)local_a28._4_4_ * auVar93._4_4_ +
                      (float)local_a38._4_4_ * auVar53._4_4_;
            fVar132 = fStack_a10 * auVar70._8_4_ + fStack_a20 * auVar93._8_4_ +
                      fStack_a30 * auVar53._8_4_;
            fVar137 = fStack_a0c * auVar70._12_4_ + fStack_a1c * auVar93._12_4_ +
                      fStack_a2c * auVar53._12_4_;
            fVar110 = *(float *)(lVar28 + 0x28);
            auVar96._0_4_ = fVar110 * fVar123;
            auVar96._4_4_ = fVar110 * fVar124;
            auVar96._8_4_ = fVar110 * fVar132;
            auVar96._12_4_ = fVar110 * fVar137;
            fVar110 = *(float *)(lVar28 + 0x24);
            auVar115._0_4_ = fVar110 * fVar117;
            auVar115._4_4_ = fVar110 * fVar118;
            auVar115._8_4_ = fVar110 * fVar119;
            auVar115._12_4_ = fVar110 * fVar122;
            fVar110 = *(float *)(lVar28 + 0x20);
            auVar121._0_4_ = fVar110 * fVar52;
            auVar121._4_4_ = fVar110 * fVar64;
            auVar121._8_4_ = fVar110 * fVar65;
            auVar121._12_4_ = fVar110 * fVar116;
            auVar70 = vshufps_avx(auVar121,auVar121,0);
            auVar93 = vshufps_avx(auVar115,auVar115,0);
            auVar53 = vshufps_avx(auVar96,auVar96,0);
            auVar130._0_4_ =
                 fVar123 * auVar53._0_4_ + fVar117 * auVar93._0_4_ + fVar52 * auVar70._0_4_;
            auVar130._4_4_ =
                 fVar124 * auVar53._4_4_ + fVar118 * auVar93._4_4_ + fVar64 * auVar70._4_4_;
            auVar130._8_4_ =
                 fVar132 * auVar53._8_4_ + fVar119 * auVar93._8_4_ + fVar65 * auVar70._8_4_;
            auVar130._12_4_ =
                 fVar137 * auVar53._12_4_ + fVar122 * auVar93._12_4_ + fVar116 * auVar70._12_4_;
            auVar70 = vshufps_avx(auVar121,auVar121,0x55);
            auVar93 = vshufps_avx(auVar115,auVar115,0x55);
            auVar53 = vshufps_avx(auVar96,auVar96,0x55);
            auVar135._0_4_ =
                 auVar53._0_4_ * fVar123 + auVar93._0_4_ * fVar117 + fVar52 * auVar70._0_4_;
            auVar135._4_4_ =
                 auVar53._4_4_ * fVar124 + auVar93._4_4_ * fVar118 + fVar64 * auVar70._4_4_;
            auVar135._8_4_ =
                 auVar53._8_4_ * fVar132 + auVar93._8_4_ * fVar119 + fVar65 * auVar70._8_4_;
            auVar135._12_4_ =
                 auVar53._12_4_ * fVar137 + auVar93._12_4_ * fVar122 + fVar116 * auVar70._12_4_;
            auVar70 = vshufps_avx(auVar121,auVar121,0xaa);
            auVar93 = vshufps_avx(auVar115,auVar115,0xaa);
            auVar53 = vshufps_avx(auVar96,auVar96,0xaa);
            auVar56._0_4_ =
                 fVar123 * auVar53._0_4_ + fVar117 * auVar93._0_4_ + fVar52 * auVar70._0_4_;
            auVar56._4_4_ =
                 fVar124 * auVar53._4_4_ + fVar118 * auVar93._4_4_ + fVar64 * auVar70._4_4_;
            auVar56._8_4_ =
                 fVar132 * auVar53._8_4_ + fVar119 * auVar93._8_4_ + fVar65 * auVar70._8_4_;
            auVar56._12_4_ =
                 fVar137 * auVar53._12_4_ + fVar122 * auVar93._12_4_ + fVar116 * auVar70._12_4_;
            auVar70 = vpshufd_avx(ZEXT116(*(byte *)(lVar28 + 0x7a)),0);
            auVar70 = vpand_avx(_DAT_140de3470,auVar70);
            auVar53 = vpcmpeqd_avx(_DAT_140de3470,auVar70);
            auVar70 = vpshufd_avx(auVar53,0);
            auVar70 = vpand_avx(auVar53,auVar70);
            auVar70 = vpand_avx(auVar70,auVar130);
            auVar93 = vpshufd_avx(auVar53,0x55);
            auVar93 = vpand_avx(auVar53,auVar93);
            auVar93 = vpand_avx(auVar93,auVar135);
            auVar141 = vpshufd_avx(auVar53,0xaa);
            auVar53 = vpand_avx(auVar53,auVar141);
            auVar53 = vpand_avx(auVar53,auVar56);
            fVar139 = fStack_974 * auVar70._0_4_;
            fVar91 = fStack_974 * auVar70._4_4_;
            fStack_ac0 = fStack_974 * auVar70._8_4_;
            fStack_abc = fStack_974 * auVar70._12_4_;
            local_ac8 = CONCAT44(fVar91,fVar139);
            fVar83 = fStack_974 * auVar93._0_4_;
            fVar92 = fStack_974 * auVar93._4_4_;
            fStack_ad0 = fStack_974 * auVar93._8_4_;
            fStack_acc = fStack_974 * auVar93._12_4_;
            local_ad8 = CONCAT44(fVar92,fVar83);
            fVar124 = fStack_974 * auVar53._0_4_;
            fVar132 = fStack_974 * auVar53._4_4_;
            fStack_ae0 = fStack_974 * auVar53._8_4_;
            fStack_adc = fStack_974 * auVar53._12_4_;
            local_ae8 = CONCAT44(fVar132,fVar124);
            auVar70 = *(undefined1 (*) [16])(lVar48 + 0x18);
            auVar84 = vsubps_avx((undefined1  [16])0x0,auVar70);
            auVar93 = vmaxps_avx(auVar70,auVar84);
            auVar53 = vshufps_avx(auVar93,auVar93,0);
            auVar93 = vshufps_avx(auVar93,auVar93,0x55);
            auVar141 = vcmpps_avx(auVar93,auVar53,1);
            auVar93 = vshufpd_avx(auVar70,auVar84,1);
            auVar93 = vblendps_avx(auVar93,(undefined1  [16])0x0,10);
            auVar53 = vshufps_avx(auVar70,auVar84,0xd8);
            auVar53 = vblendps_avx(auVar53,(undefined1  [16])0x0,9);
            auVar93 = vblendvps_avx(auVar53,auVar93,auVar141);
            auVar87._0_4_ = auVar93._0_4_ * auVar93._0_4_;
            auVar87._4_4_ = auVar93._4_4_ * auVar93._4_4_;
            auVar87._8_4_ = auVar93._8_4_ * auVar93._8_4_;
            auVar87._12_4_ = auVar93._12_4_ * auVar93._12_4_;
            auVar53 = vmovshdup_avx(auVar87);
            auVar88._0_4_ = auVar87._0_4_ + auVar53._0_4_;
            auVar88._4_4_ = auVar87._4_4_ + auVar53._4_4_;
            auVar88._8_4_ = auVar87._8_4_ + auVar53._8_4_;
            auVar88._12_4_ = auVar87._12_4_ + auVar53._12_4_;
            auVar53 = vshufpd_avx(auVar88,auVar88,1);
            auVar53 = ZEXT416((uint)(auVar88._0_4_ + auVar53._0_4_));
            auVar53 = vsqrtss_avx(auVar53,auVar53);
            auVar53 = vshufps_avx(auVar53,auVar53,0);
            local_a78 = vdivps_avx(auVar93,auVar53);
            local_a68 = vshufps_avx(local_a78,local_a78,9);
            fVar64 = local_a68._0_4_;
            auVar78._0_4_ = auVar70._0_4_ * fVar64;
            fVar116 = local_a68._4_4_;
            auVar78._4_4_ = auVar70._4_4_ * fVar116;
            fVar118 = local_a68._8_4_;
            auVar78._8_4_ = auVar70._8_4_ * fVar118;
            fVar122 = local_a68._12_4_;
            auVar78._12_4_ = auVar70._12_4_ * fVar122;
            auVar70 = vshufps_avx(auVar70,auVar70,0xc9);
            fVar65 = local_a78._0_4_;
            auVar57._0_4_ = auVar70._0_4_ * fVar65;
            fVar117 = local_a78._4_4_;
            auVar57._4_4_ = auVar70._4_4_ * fVar117;
            fVar119 = local_a78._8_4_;
            auVar57._8_4_ = auVar70._8_4_ * fVar119;
            fVar123 = local_a78._12_4_;
            auVar57._12_4_ = auVar70._12_4_ * fVar123;
            auVar93 = vsubps_avx(auVar78,auVar57);
            local_a88 = vshufps_avx(auVar93,auVar93,9);
            pfVar50 = (float *)(lVar3 + 0x28);
            pfVar33 = (float *)(lVar48 + 0x40);
            fVar137 = -*(float *)(*(longlong *)(lVar30 + 0x88) + 0x44);
            local_a48 = CONCAT44(0x80000000,fVar137);
            uStack_a40 = 0x80000000;
            uStack_a3c = 0x80000000;
            auVar70 = vshufps_avx(auVar175._0_16_,auVar175._0_16_,9);
            _local_a98 = vshufps_avx(auVar93,auVar93,0x52);
            fVar110 = *(float *)(lVar48 + 0x28);
            fVar52 = *(float *)(lVar48 + 0x30);
            uVar43 = 0;
            do {
              fVar6 = *pfVar50;
              fVar7 = pfVar50[1];
              fVar8 = pfVar50[2];
              auVar151._0_4_ =
                   (float)local_b38._0_4_ * fVar8 +
                   auVar198._0_4_ * fVar6 + (float)local_b08._0_4_ * fVar7 + (float)local_9c8._0_4_;
              auVar151._4_4_ =
                   (float)local_b38._4_4_ * fVar8 +
                   auVar198._4_4_ * fVar6 + (float)local_b08._4_4_ * fVar7 + (float)local_9c8._4_4_;
              auVar151._8_4_ =
                   fStack_b30 * fVar8 + auVar198._8_4_ * fVar6 + fStack_b00 * fVar7 +
                   (float)uStack_9c0;
              auVar151._12_4_ =
                   fStack_b2c * fVar8 + auVar198._12_4_ * fVar6 + fStack_afc * fVar7 +
                   uStack_9c0._4_4_;
              fVar6 = pfVar50[3];
              fVar7 = pfVar50[4];
              fVar8 = pfVar50[5];
              auVar168._0_4_ =
                   fVar8 * (float)local_a38._0_4_ +
                   fVar6 * (float)local_a18._0_4_ + fVar7 * (float)local_a28._0_4_ +
                   (float)local_998._0_4_;
              auVar168._4_4_ =
                   fVar8 * (float)local_a38._4_4_ +
                   fVar6 * (float)local_a18._4_4_ + fVar7 * (float)local_a28._4_4_ +
                   (float)local_998._4_4_;
              auVar168._8_4_ =
                   fVar8 * fStack_a30 + fVar6 * fStack_a10 + fVar7 * fStack_a20 + fStack_990;
              auVar168._12_4_ =
                   fVar8 * fStack_a2c + fVar6 * fStack_a0c + fVar7 * fStack_a1c + fStack_98c;
              pfVar33[1] = pfVar50[6];
              pfVar33[0x10] = pfVar50[7];
              pfVar33[0x1f] = pfVar50[8];
              *(float **)(pfVar33 + 0x2e) = pfVar50;
              auVar58._0_4_ = (auVar151._0_4_ + auVar168._0_4_) * 0.5;
              auVar58._4_4_ = (auVar151._4_4_ + auVar168._4_4_) * 0.5;
              auVar58._8_4_ = (auVar151._8_4_ + auVar168._8_4_) * 0.5;
              auVar58._12_4_ = (auVar151._12_4_ + auVar168._12_4_) * 0.5;
              auVar84 = vsubps_avx(auVar58,*pauVar29);
              auVar66 = vsubps_avx(auVar58,*param_4);
              auVar53 = vshufps_avx(auVar66,auVar66,9);
              auVar141 = vshufps_avx(auVar84,auVar84,9);
              auVar93 = vsubps_avx(auVar151,auVar168);
              fVar149 = auVar175._0_4_;
              auVar152._0_4_ = fVar149 * auVar93._0_4_;
              fVar162 = auVar175._4_4_;
              auVar152._4_4_ = fVar162 * auVar93._4_4_;
              fVar163 = auVar175._8_4_;
              auVar152._8_4_ = fVar163 * auVar93._8_4_;
              fVar164 = auVar175._12_4_;
              auVar152._12_4_ = fVar164 * auVar93._12_4_;
              auVar93 = vinsertps_avx(auVar152,auVar152,0x4c);
              auVar153._0_4_ = auVar152._0_4_ + auVar93._0_4_;
              auVar153._4_4_ = auVar152._4_4_ + auVar93._4_4_;
              auVar153._8_4_ = auVar152._8_4_ + auVar93._8_4_;
              auVar153._12_4_ = auVar152._12_4_ + auVar93._12_4_;
              auVar93 = vshufpd_avx(auVar153,auVar153,1);
              auVar154._0_4_ = -(auVar153._0_4_ + auVar93._0_4_);
              auVar154._4_4_ = 0x80000000;
              auVar154._8_4_ = 0x80000000;
              auVar154._12_4_ = 0x80000000;
              auVar155._0_4_ = auVar154._0_4_ / local_b44;
              auVar155._4_12_ = auVar154._4_12_;
              auVar93 = vmaxss_avx(auVar155,auVar131._0_16_);
              fVar165 = auVar93._0_4_;
              auVar97._0_12_ = ZEXT812(0);
              auVar97._12_4_ = 0;
              fVar140 = auVar141._0_4_;
              fVar146 = auVar141._4_4_;
              fVar147 = auVar141._8_4_;
              fVar148 = auVar141._12_4_;
              fVar8 = auVar84._0_4_;
              fVar21 = auVar84._4_4_;
              fVar24 = auVar84._8_4_;
              fVar27 = auVar84._12_4_;
              fVar7 = auVar66._0_4_;
              fVar19 = auVar66._4_4_;
              fVar22 = auVar66._8_4_;
              fVar25 = auVar66._12_4_;
              fVar6 = auVar53._0_4_;
              fVar20 = auVar53._4_4_;
              fVar23 = auVar53._8_4_;
              fVar26 = auVar53._12_4_;
              if (0.0 < local_984) {
                pfVar16 = *(float **)(pauVar29[4] + 8);
                pfVar17 = *(float **)(param_4[4] + 8);
                auVar93 = *(undefined1 (*) [16])(pfVar17 + 4);
                auVar188._0_4_ = auVar93._0_4_ * fVar6;
                auVar188._4_4_ = auVar93._4_4_ * fVar20;
                auVar188._8_4_ = auVar93._8_4_ * fVar23;
                auVar188._12_4_ = auVar93._12_4_ * fVar26;
                auVar93 = vshufps_avx(auVar93,auVar93,0xc9);
                auVar178._0_4_ = auVar93._0_4_ * fVar7;
                auVar178._4_4_ = auVar93._4_4_ * fVar19;
                auVar178._8_4_ = auVar93._8_4_ * fVar22;
                auVar178._12_4_ = auVar93._12_4_ * fVar25;
                auVar93 = vsubps_avx(auVar188,auVar178);
                auVar93 = vshufps_avx(auVar93,auVar93,0xc9);
                auVar179._0_4_ = auVar93._0_4_ + *pfVar17;
                auVar179._4_4_ = auVar93._4_4_ + pfVar17[1];
                auVar179._8_4_ = auVar93._8_4_ + pfVar17[2];
                auVar179._12_4_ = auVar93._12_4_ + pfVar17[3];
                auVar93 = *(undefined1 (*) [16])(pfVar16 + 4);
                auVar195._0_4_ = fVar140 * auVar93._0_4_;
                auVar195._4_4_ = fVar146 * auVar93._4_4_;
                auVar195._8_4_ = fVar147 * auVar93._8_4_;
                auVar195._12_4_ = fVar148 * auVar93._12_4_;
                auVar93 = vshufps_avx(auVar93,auVar93,0xc9);
                auVar189._0_4_ = auVar93._0_4_ * fVar8;
                auVar189._4_4_ = auVar93._4_4_ * fVar21;
                auVar189._8_4_ = auVar93._8_4_ * fVar24;
                auVar189._12_4_ = auVar93._12_4_ * fVar27;
                auVar93 = vsubps_avx(auVar195,auVar189);
                auVar93 = vshufps_avx(auVar93,auVar93,0xc9);
                auVar190._0_4_ = auVar93._0_4_ + *pfVar16;
                auVar190._4_4_ = auVar93._4_4_ + pfVar16[1];
                auVar190._8_4_ = auVar93._8_4_ + pfVar16[2];
                auVar190._12_4_ = auVar93._12_4_ + pfVar16[3];
                auVar93 = vsubps_avx(auVar179,auVar190);
                auVar180._0_4_ = fVar149 * auVar93._0_4_;
                auVar180._4_4_ = fVar162 * auVar93._4_4_;
                auVar180._8_4_ = fVar163 * auVar93._8_4_;
                auVar180._12_4_ = fVar164 * auVar93._12_4_;
                auVar93 = vinsertps_avx(auVar180,auVar180,0x4c);
                auVar181._0_4_ = auVar180._0_4_ + auVar93._0_4_;
                auVar181._4_4_ = auVar180._4_4_ + auVar93._4_4_;
                auVar181._8_4_ = auVar180._8_4_ + auVar93._8_4_;
                auVar181._12_4_ = auVar180._12_4_ + auVar93._12_4_;
                auVar93 = vshufpd_avx(auVar181,auVar181,1);
                fVar18 = auVar181._0_4_ + auVar93._0_4_;
                if ((fVar18 < fVar137) && (fVar18 < -fVar165)) {
                  auVar93 = vshufps_avx(ZEXT416((uint)(pfVar17[0x1b] - pfVar16[0x1b])),
                                        ZEXT416((uint)(pfVar17[0x1b] - pfVar16[0x1b])),0);
                  auVar156._0_4_ = auVar93._0_4_ * (float)local_9a8._0_4_;
                  auVar156._4_4_ = auVar93._4_4_ * (float)local_9a8._4_4_;
                  auVar156._8_4_ = auVar93._8_4_ * fStack_9a0;
                  auVar156._12_4_ = auVar93._12_4_ * fStack_99c;
                  fVar165 = pfVar16[0x16];
                  auVar191._0_4_ = fVar165 * pfVar16[0x10];
                  auVar191._4_4_ = fVar165 * pfVar16[0x11];
                  auVar191._8_4_ = fVar165 * pfVar16[0x12];
                  auVar191._12_4_ = fVar165 * pfVar16[0x13];
                  auVar93 = vsubps_avx(auVar156,auVar191);
                  fVar165 = pfVar17[0x16];
                  auVar157._0_4_ = fVar149 * (auVar93._0_4_ + fVar165 * pfVar17[0x10]);
                  auVar157._4_4_ = fVar162 * (auVar93._4_4_ + fVar165 * pfVar17[0x11]);
                  auVar157._8_4_ = fVar163 * (auVar93._8_4_ + fVar165 * pfVar17[0x12]);
                  auVar157._12_4_ = fVar164 * (auVar93._12_4_ + fVar165 * pfVar17[0x13]);
                  auVar93 = vinsertps_avx(auVar157,auVar157,0x4c);
                  auVar158._0_4_ = auVar157._0_4_ + auVar93._0_4_;
                  auVar158._4_4_ = auVar157._4_4_ + auVar93._4_4_;
                  auVar158._8_4_ = auVar157._8_4_ + auVar93._8_4_;
                  auVar158._12_4_ = auVar157._12_4_ + auVar93._12_4_;
                  auVar93 = vshufpd_avx(auVar158,auVar158,1);
                  auVar93 = vminss_avx(ZEXT416((uint)((auVar158._0_4_ + auVar93._0_4_) * local_b44))
                                       ,auVar97);
                  fVar165 = local_984 * (fVar18 - auVar93._0_4_);
                }
              }
              auVar169._0_4_ = auVar70._0_4_ * fVar8;
              auVar169._4_4_ = auVar70._4_4_ * fVar21;
              auVar169._8_4_ = auVar70._8_4_ * fVar24;
              auVar169._12_4_ = auVar70._12_4_ * fVar27;
              auVar182._0_4_ = fVar149 * fVar140;
              auVar182._4_4_ = fVar162 * fVar146;
              auVar182._8_4_ = fVar163 * fVar147;
              auVar182._12_4_ = fVar164 * fVar148;
              auVar66 = vsubps_avx(auVar169,auVar182);
              auVar93 = vshufps_avx(auVar66,auVar66,0xc9);
              auVar53 = vshufps_avx(auVar66,auVar66,0x55);
              auVar141 = vshufps_avx(auVar66,auVar66,0xaa);
              auVar84 = vshufps_avx(auVar66,auVar66,0);
              auVar192._0_4_ =
                   auVar84._0_4_ * local_ab8 + auVar53._0_4_ * local_af8 + auVar141._0_4_ * fVar138;
              auVar192._4_4_ =
                   auVar84._4_4_ * fStack_ab4 + auVar53._4_4_ * fStack_af4 + auVar141._4_4_ * fVar90
              ;
              auVar192._8_4_ =
                   auVar84._8_4_ * fStack_ab0 +
                   auVar53._8_4_ * fStack_af0 + auVar141._8_4_ * fStack_b20;
              auVar192._12_4_ =
                   auVar84._12_4_ * fStack_aac +
                   auVar53._12_4_ * fStack_aec + auVar141._12_4_ * fStack_b1c;
              auVar183._0_4_ = auVar93._0_4_ * auVar192._0_4_;
              auVar183._4_4_ = auVar93._4_4_ * auVar192._4_4_;
              auVar183._8_4_ = auVar93._8_4_ * auVar192._8_4_;
              auVar183._12_4_ = auVar93._12_4_ * auVar192._12_4_;
              auVar93 = vinsertps_avx(auVar183,auVar183,0x4c);
              auVar184._0_4_ = auVar183._0_4_ + auVar93._0_4_;
              auVar184._4_4_ = auVar183._4_4_ + auVar93._4_4_;
              auVar184._8_4_ = auVar183._8_4_ + auVar93._8_4_;
              auVar184._12_4_ = auVar183._12_4_ + auVar93._12_4_;
              auVar53 = vshufpd_avx(auVar184,auVar184,1);
              auVar196._0_4_ = auVar70._0_4_ * fVar7;
              auVar196._4_4_ = auVar70._4_4_ * fVar19;
              auVar196._8_4_ = auVar70._8_4_ * fVar22;
              auVar196._12_4_ = auVar70._12_4_ * fVar25;
              auVar98._0_4_ = fVar149 * fVar6;
              auVar98._4_4_ = fVar162 * fVar20;
              auVar98._8_4_ = fVar163 * fVar23;
              auVar98._12_4_ = fVar164 * fVar26;
              auVar111 = vsubps_avx(auVar196,auVar98);
              auVar93 = vmovlhps_avx(auVar192,auVar66);
              auVar93 = vshufps_avx(auVar66,auVar93,0x29);
              auVar141 = vshufps_avx(auVar192,auVar111,0x99);
              *(undefined1 (*) [16])(pfVar33 + 7) = auVar141;
              *(undefined1 (*) [16])(pfVar33 + 3) = auVar93;
              auVar93 = vshufps_avx(auVar111,auVar111,0x55);
              auVar141 = vshufps_avx(auVar111,auVar111,0xaa);
              auVar84 = vshufps_avx(auVar111,auVar111,0);
              auVar170._0_4_ =
                   auVar84._0_4_ * fVar124 + auVar93._0_4_ * fVar139 + auVar141._0_4_ * fVar83;
              auVar170._4_4_ =
                   auVar84._4_4_ * fVar132 + auVar93._4_4_ * fVar91 + auVar141._4_4_ * fVar92;
              auVar170._8_4_ =
                   auVar84._8_4_ * fStack_ae0 +
                   auVar93._8_4_ * fStack_ac0 + auVar141._8_4_ * fStack_ad0;
              auVar170._12_4_ =
                   auVar84._12_4_ * fStack_adc +
                   auVar93._12_4_ * fStack_abc + auVar141._12_4_ * fStack_acc;
              auVar93 = vmovlhps_avx(auVar111,auVar170);
              auVar93 = vshufps_avx(auVar93,auVar170,0x98);
              *(undefined1 (*) [16])(pfVar33 + 0xb) = auVar93;
              auVar93 = vshufps_avx(auVar111,auVar111,0xc9);
              auVar99._0_4_ = auVar170._0_4_ * auVar93._0_4_;
              auVar99._4_4_ = auVar170._4_4_ * auVar93._4_4_;
              auVar99._8_4_ = auVar170._8_4_ * auVar93._8_4_;
              auVar99._12_4_ = auVar170._12_4_ * auVar93._12_4_;
              auVar93 = vinsertps_avx(auVar99,auVar99,0x4c);
              auVar100._0_4_ = auVar93._0_4_ + auVar99._0_4_;
              auVar100._4_4_ = auVar93._4_4_ + auVar99._4_4_;
              auVar100._8_4_ = auVar93._8_4_ + auVar99._8_4_;
              auVar100._12_4_ = auVar93._12_4_ + auVar99._12_4_;
              auVar93 = vshufpd_avx(auVar100,auVar100,1);
              fVar149 = auVar184._0_4_ + auVar53._0_4_ + fVar110 +
                        fVar52 + auVar93._0_4_ + auVar100._0_4_;
              auVar131 = ZEXT864(0);
              if ((fVar149 != 0.0) || (NAN(fVar149))) {
                fVar149 = 1.0 / fVar149;
                pfVar33[2] = fVar165;
              }
              else {
                pfVar33[1] = 0.0;
                fVar149 = 0.0;
              }
              *pfVar33 = fVar149;
              if (local_988 <= 0.0) {
                pfVar33[0xf] = 0.0;
                pfVar33[0x10] = 0.0;
                pfVar33[0x1e] = 0.0;
                pfVar33[0x1f] = 0.0;
              }
              else {
                auVar159._0_4_ = fVar140 * local_968._16_4_;
                auVar159._4_4_ = fVar146 * local_968._20_4_;
                auVar159._8_4_ = fVar147 * local_968._24_4_;
                auVar159._12_4_ = fVar148 * local_968._28_4_;
                auVar93 = vshufps_avx(auStack_958,auStack_958,0xc9);
                auVar101._0_4_ = fVar8 * auVar93._0_4_;
                auVar101._4_4_ = fVar21 * auVar93._4_4_;
                auVar101._8_4_ = fVar24 * auVar93._8_4_;
                auVar101._12_4_ = fVar27 * auVar93._12_4_;
                auVar66 = vsubps_avx(auVar159,auVar101);
                auVar160._0_4_ = fVar64 * fVar8;
                auVar160._4_4_ = fVar116 * fVar21;
                auVar160._8_4_ = fVar118 * fVar24;
                auVar160._12_4_ = fVar122 * fVar27;
                auVar171._0_4_ = fVar140 * fVar65;
                auVar171._4_4_ = fVar146 * fVar117;
                auVar171._8_4_ = fVar147 * fVar119;
                auVar171._12_4_ = fVar148 * fVar123;
                auVar111 = vsubps_avx(auVar160,auVar171);
                auVar93 = vshufps_avx(auVar111,auVar111,0xc9);
                auVar53 = vshufps_avx(auVar111,auVar111,0x55);
                auVar141 = vshufps_avx(auVar111,auVar111,0xaa);
                auVar84 = vshufps_avx(auVar111,auVar111,0);
                auVar185._0_4_ =
                     auVar84._0_4_ * local_ab8 +
                     auVar53._0_4_ * local_af8 + auVar141._0_4_ * fVar138;
                auVar185._4_4_ =
                     auVar84._4_4_ * fStack_ab4 +
                     auVar53._4_4_ * fStack_af4 + auVar141._4_4_ * fVar90;
                auVar185._8_4_ =
                     auVar84._8_4_ * fStack_ab0 +
                     auVar53._8_4_ * fStack_af0 + auVar141._8_4_ * fStack_b20;
                auVar185._12_4_ =
                     auVar84._12_4_ * fStack_aac +
                     auVar53._12_4_ * fStack_aec + auVar141._12_4_ * fStack_b1c;
                auVar172._0_4_ = auVar93._0_4_ * auVar185._0_4_;
                auVar172._4_4_ = auVar93._4_4_ * auVar185._4_4_;
                auVar172._8_4_ = auVar93._8_4_ * auVar185._8_4_;
                auVar172._12_4_ = auVar93._12_4_ * auVar185._12_4_;
                auVar93 = vinsertps_avx(auVar172,auVar172,0x4c);
                auVar173._0_4_ = auVar172._0_4_ + auVar93._0_4_;
                auVar173._4_4_ = auVar172._4_4_ + auVar93._4_4_;
                auVar173._8_4_ = auVar172._8_4_ + auVar93._8_4_;
                auVar173._12_4_ = auVar172._12_4_ + auVar93._12_4_;
                auVar53 = vshufpd_avx(auVar173,auVar173,1);
                auVar193._0_4_ = fVar64 * fVar7;
                auVar193._4_4_ = fVar116 * fVar19;
                auVar193._8_4_ = fVar118 * fVar22;
                auVar193._12_4_ = fVar122 * fVar25;
                auVar197._0_4_ = fVar65 * fVar6;
                auVar197._4_4_ = fVar117 * fVar20;
                auVar197._8_4_ = fVar119 * fVar23;
                auVar197._12_4_ = fVar123 * fVar26;
                auVar112 = vsubps_avx(auVar193,auVar197);
                auVar93 = vmovlhps_avx(auVar185,auVar111);
                auVar93 = vshufps_avx(auVar111,auVar93,0x29);
                auVar141 = vshufps_avx(auVar66,auVar66,9);
                fVar149 = auVar141._0_4_ + (float)local_968._0_4_;
                fVar162 = auVar141._4_4_ + (float)local_968._4_4_;
                fVar163 = auVar141._8_4_ + fStack_960;
                fVar164 = auVar141._12_4_ + fStack_95c;
                auVar141 = vshufps_avx(auVar185,auVar112,0x99);
                *(undefined1 (*) [16])(pfVar33 + 0x16) = auVar141;
                *(undefined1 (*) [16])(pfVar33 + 0x12) = auVar93;
                auVar93 = vshufps_avx(auVar112,auVar112,0x55);
                auVar141 = vshufps_avx(auVar112,auVar112,0xaa);
                auVar84 = vshufps_avx(auVar112,auVar112,0);
                auVar102._0_4_ =
                     auVar84._0_4_ * fVar124 + auVar141._0_4_ * fVar83 + auVar93._0_4_ * fVar139;
                auVar102._4_4_ =
                     auVar84._4_4_ * fVar132 + auVar141._4_4_ * fVar92 + auVar93._4_4_ * fVar91;
                auVar102._8_4_ =
                     auVar84._8_4_ * fStack_ae0 +
                     auVar141._8_4_ * fStack_ad0 + auVar93._8_4_ * fStack_ac0;
                auVar102._12_4_ =
                     auVar84._12_4_ * fStack_adc +
                     auVar141._12_4_ * fStack_acc + auVar93._12_4_ * fStack_abc;
                auVar93 = vmovlhps_avx(auVar112,auVar102);
                auVar93 = vshufps_avx(auVar93,auVar102,0x98);
                *(undefined1 (*) [16])(pfVar33 + 0x1a) = auVar93;
                auVar93 = vshufps_avx(auVar112,auVar112,0xc9);
                auVar103._0_4_ = auVar93._0_4_ * auVar102._0_4_;
                auVar103._4_4_ = auVar93._4_4_ * auVar102._4_4_;
                auVar103._8_4_ = auVar93._8_4_ * auVar102._8_4_;
                auVar103._12_4_ = auVar93._12_4_ * auVar102._12_4_;
                auVar93 = vinsertps_avx(auVar103,auVar103,0x4c);
                auVar104._0_4_ = auVar93._0_4_ + auVar103._0_4_;
                auVar104._4_4_ = auVar93._4_4_ + auVar103._4_4_;
                auVar104._8_4_ = auVar93._8_4_ + auVar103._8_4_;
                auVar104._12_4_ = auVar93._12_4_ + auVar103._12_4_;
                auVar93 = vshufpd_avx(auVar104,auVar104,1);
                fVar165 = auVar173._0_4_ + auVar53._0_4_ + fVar110 +
                          fVar52 + auVar93._0_4_ + auVar104._0_4_;
                if ((fVar165 != 0.0) || (NAN(fVar165))) {
                  auVar105._0_4_ = fVar149 * fVar65;
                  auVar105._4_4_ = fVar162 * fVar117;
                  auVar105._8_4_ = fVar163 * fVar119;
                  auVar105._12_4_ = fVar164 * fVar123;
                  auVar93 = vinsertps_avx(auVar105,auVar105,0x4c);
                  auVar106._0_4_ = auVar93._0_4_ + auVar105._0_4_;
                  auVar106._4_4_ = auVar93._4_4_ + auVar105._4_4_;
                  auVar106._8_4_ = auVar93._8_4_ + auVar105._8_4_;
                  auVar106._12_4_ = auVar93._12_4_ + auVar105._12_4_;
                  auVar93 = vshufpd_avx(auVar106,auVar106,1);
                  fVar165 = 1.0 / fVar165;
                  pfVar33[0x11] = auVar93._0_4_ + auVar106._0_4_;
                }
                else {
                  pfVar33[0x10] = 0.0;
                  fVar165 = 0.0;
                }
                auVar131 = ZEXT864(0) << 0x20;
                pfVar33[0xf] = fVar165;
                auVar89._0_4_ = (float)local_a98._0_4_ * fVar8;
                auVar89._4_4_ = (float)local_a98._4_4_ * fVar21;
                auVar89._8_4_ = fStack_a90 * fVar24;
                auVar89._12_4_ = fStack_a8c * fVar27;
                fVar8 = local_a88._0_4_;
                auVar107._0_4_ = fVar140 * fVar8;
                fVar21 = local_a88._4_4_;
                auVar107._4_4_ = fVar146 * fVar21;
                fVar24 = local_a88._8_4_;
                auVar107._8_4_ = fVar147 * fVar24;
                fVar27 = local_a88._12_4_;
                auVar107._12_4_ = fVar148 * fVar27;
                auVar66 = vsubps_avx(auVar89,auVar107);
                auVar93 = vshufps_avx(auVar66,auVar66,0xc9);
                auVar53 = vshufps_avx(auVar66,auVar66,0x55);
                auVar141 = vshufps_avx(auVar66,auVar66,0xaa);
                auVar84 = vshufps_avx(auVar66,auVar66,0);
                auVar144._0_4_ =
                     auVar84._0_4_ * local_ab8 +
                     auVar53._0_4_ * local_af8 + auVar141._0_4_ * fVar138;
                auVar144._4_4_ =
                     auVar84._4_4_ * fStack_ab4 +
                     auVar53._4_4_ * fStack_af4 + auVar141._4_4_ * fVar90;
                auVar144._8_4_ =
                     auVar84._8_4_ * fStack_ab0 +
                     auVar53._8_4_ * fStack_af0 + auVar141._8_4_ * fStack_b20;
                auVar144._12_4_ =
                     auVar84._12_4_ * fStack_aac +
                     auVar53._12_4_ * fStack_aec + auVar141._12_4_ * fStack_b1c;
                auVar108._0_4_ = auVar144._0_4_ * auVar93._0_4_;
                auVar108._4_4_ = auVar144._4_4_ * auVar93._4_4_;
                auVar108._8_4_ = auVar144._8_4_ * auVar93._8_4_;
                auVar108._12_4_ = auVar144._12_4_ * auVar93._12_4_;
                auVar93 = vinsertps_avx(auVar108,auVar108,0x4c);
                auVar109._0_4_ = auVar93._0_4_ + auVar108._0_4_;
                auVar109._4_4_ = auVar93._4_4_ + auVar108._4_4_;
                auVar109._8_4_ = auVar93._8_4_ + auVar108._8_4_;
                auVar109._12_4_ = auVar93._12_4_ + auVar108._12_4_;
                auVar53 = vshufpd_avx(auVar109,auVar109,1);
                auVar59._0_4_ = (float)local_a98._0_4_ * fVar7;
                auVar59._4_4_ = (float)local_a98._4_4_ * fVar19;
                auVar59._8_4_ = fStack_a90 * fVar22;
                auVar59._12_4_ = fStack_a8c * fVar25;
                auVar79._0_4_ = fVar8 * fVar6;
                auVar79._4_4_ = fVar21 * fVar20;
                auVar79._8_4_ = fVar24 * fVar23;
                auVar79._12_4_ = fVar27 * fVar26;
                auVar111 = vsubps_avx(auVar59,auVar79);
                auVar93 = vmovlhps_avx(auVar144,auVar66);
                auVar93 = vshufps_avx(auVar66,auVar93,0x29);
                auVar141 = vshufps_avx(auVar144,auVar111,0x99);
                *(undefined1 (*) [16])(pfVar33 + 0x25) = auVar141;
                *(undefined1 (*) [16])(pfVar33 + 0x21) = auVar93;
                auVar93 = vshufps_avx(auVar111,auVar111,0x55);
                auVar141 = vshufps_avx(auVar111,auVar111,0xaa);
                auVar84 = vshufps_avx(auVar111,auVar111,0);
                auVar80._0_4_ =
                     auVar84._0_4_ * fVar124 + auVar93._0_4_ * fVar139 + auVar141._0_4_ * fVar83;
                auVar80._4_4_ =
                     auVar84._4_4_ * fVar132 + auVar93._4_4_ * fVar91 + auVar141._4_4_ * fVar92;
                auVar80._8_4_ =
                     auVar84._8_4_ * fStack_ae0 +
                     auVar93._8_4_ * fStack_ac0 + auVar141._8_4_ * fStack_ad0;
                auVar80._12_4_ =
                     auVar84._12_4_ * fStack_adc +
                     auVar93._12_4_ * fStack_abc + auVar141._12_4_ * fStack_acc;
                auVar93 = vmovlhps_avx(auVar111,auVar80);
                auVar93 = vshufps_avx(auVar93,auVar80,0x98);
                *(undefined1 (*) [16])(pfVar33 + 0x29) = auVar93;
                auVar93 = vshufps_avx(auVar111,auVar111,0xc9);
                auVar60._0_4_ = auVar93._0_4_ * auVar80._0_4_;
                auVar60._4_4_ = auVar93._4_4_ * auVar80._4_4_;
                auVar60._8_4_ = auVar93._8_4_ * auVar80._8_4_;
                auVar60._12_4_ = auVar93._12_4_ * auVar80._12_4_;
                auVar93 = vinsertps_avx(auVar60,auVar60,0x4c);
                auVar61._0_4_ = auVar60._0_4_ + auVar93._0_4_;
                auVar61._4_4_ = auVar60._4_4_ + auVar93._4_4_;
                auVar61._8_4_ = auVar60._8_4_ + auVar93._8_4_;
                auVar61._12_4_ = auVar60._12_4_ + auVar93._12_4_;
                auVar93 = vshufpd_avx(auVar61,auVar61,1);
                fVar6 = fVar110 + auVar53._0_4_ + auVar109._0_4_ +
                        fVar52 + auVar61._0_4_ + auVar93._0_4_;
                if ((fVar6 != 0.0) || (NAN(fVar6))) {
                  auVar81._0_4_ = fVar149 * fVar8;
                  auVar81._4_4_ = fVar162 * fVar21;
                  auVar81._8_4_ = fVar163 * fVar24;
                  auVar81._12_4_ = fVar164 * fVar27;
                  auVar93 = vinsertps_avx(auVar81,auVar81,0x4c);
                  auVar82._0_4_ = auVar81._0_4_ + auVar93._0_4_;
                  auVar82._4_4_ = auVar81._4_4_ + auVar93._4_4_;
                  auVar82._8_4_ = auVar81._8_4_ + auVar93._8_4_;
                  auVar82._12_4_ = auVar81._12_4_ + auVar93._12_4_;
                  auVar93 = vshufpd_avx(auVar82,auVar82,1);
                  pfVar33[0x1e] = 1.0 / fVar6;
                  pfVar33[0x20] = auVar82._0_4_ + auVar93._0_4_;
                }
                else {
                  pfVar33[0x1e] = 0.0;
                  pfVar33[0x1f] = 0.0;
                }
              }
              auVar194 = ZEXT1664(_local_b08);
              auVar198 = ZEXT1664(auVar198._0_16_);
              auVar145 = ZEXT1664(_local_b38);
              uVar43 = uVar43 + 1;
              pfVar50 = pfVar50 + 9;
              pfVar33 = pfVar33 + 0x30;
            } while (uVar43 < uVar38);
          }
          auVar186 = ZEXT1264(ZEXT812(0));
          auVar174 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
          auVar131 = ZEXT1664(_local_a18);
          auVar136 = ZEXT1664(_local_a28);
          auVar161 = ZEXT1664(_local_a38);
          auVar199 = ZEXT1664(local_9b8);
          if (DAT_14151fc03 != '\0') {
            FUN_1400e3540(lVar48,DAT_1416df990,0xff00ffff);
          }
          goto LAB_1400d4aa2;
        }
        *(byte *)(local_b40 + 4) = *(byte *)(local_b40 + 4) | 4;
        bVar9 = 1;
        uVar38 = local_a98._0_4_;
      }
      else {
LAB_1400d4aa2:
        LOCK();
        *(ushort *)((longlong)local_b10 + 0x24) = *(ushort *)((longlong)local_b10 + 0x24) | 1;
        UNLOCK();
        bVar9 = 0;
        puVar32 = local_b10;
        uVar38 = *(uint *)((longlong)local_b10 + 0x14);
      }
      auVar175 = ZEXT1664(local_a58);
      auVar70 = local_a58;
    }
    if (local_b50 != (undefined1 (*) [16])0x0) {
      uVar43 = rdtsc();
      auVar93 = vpinsrq_avx(auVar70,uVar43 & 0xffffffff00000000 |
                                    CONCAT44((int)((ulonglong)puVar32 >> 0x20),(int)uVar43),1);
      auVar175 = ZEXT1664(auVar93);
      auVar70 = vmovntps_avx(local_9d8);
      *local_b50 = auVar70;
      auVar70 = vmovntdq_avx(auVar93);
      local_b50[1] = auVar70;
    }
    if ((bool)(bVar9 | uVar38 == 0xffffffff)) {
      *(int *)(param_6 + 0x18) = local_b54;
      if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_b88)) {
                    /* WARNING: Subroutine does not return */
        FUN_140b65db0(local_f0 ^ (ulonglong)auStack_b88);
      }
      return;
    }
  } while( true );
}

