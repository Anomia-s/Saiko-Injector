/**
 * Function: virtual_bool_jph_mutablecompoundshape_castray
 * Address:  1402e0d00
 * Signature: undefined virtual_bool_jph_mutablecompoundshape_castray(void)
 * Body size: 1952 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte virtual_bool_jph_mutablecompoundshape_castray
               (longlong param_1,float *param_2,ulonglong *param_3,longlong param_4)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined4 uVar20;
  longlong lVar19;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [64];
  undefined1 auVar50 [16];
  undefined1 auVar51 [64];
  undefined1 auVar52 [16];
  undefined1 auVar53 [64];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [64];
  undefined1 auStack_278 [40];
  undefined1 (*local_250) [16];
  uint local_248;
  int local_244;
  longlong local_240;
  ulonglong local_238;
  ulonglong local_230;
  longlong local_228;
  ulonglong local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  ulonglong local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  undefined1 local_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  uint local_f8;
  int local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_278;
  local_240 = param_4;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar23 = *(ulonglong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (uVar23 != 0) {
    uVar24 = *(uint *)(uVar23 + 0x200020);
    if ((ulonglong)uVar24 < 0x10000) {
      *(uint *)(uVar23 + 0x200020) = uVar24 + 1;
      local_250 = (undefined1 (*) [16])(uVar23 + (ulonglong)uVar24 * 0x20 + 0x20);
      uVar5 = rdtsc();
      uVar23 = CONCAT44((int)((ulonglong)local_250 >> 0x20),(int)uVar5);
      local_208 = uVar5 & 0xffffffff00000000 | uVar23;
      uStack_200 = 0;
      iVar22 = *(int *)(param_1 + 0x50);
      goto joined_r0x0001402e13e1;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar23 = (*(code *)PTR_vfunction4_1414f67c8)
                         ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  local_250 = (undefined1 (*) [16])0x0;
  iVar22 = *(int *)(param_1 + 0x50);
joined_r0x0001402e13e1:
  if (iVar22 + 3U < 4) {
                    /* WARNING: Read-only address (ram,0x000140dc43a0) is written */
                    /* WARNING: Read-only address (ram,0x000140de3630) is written */
                    /* WARNING: Read-only address (ram,0x000140e081e0) is written */
    uVar20 = (undefined4)(uVar23 >> 0x20);
    bVar26 = 0;
  }
  else {
                    /* WARNING: Read-only address (ram,0x000140dc43a0) is written */
                    /* WARNING: Read-only address (ram,0x000140de3630) is written */
                    /* WARNING: Read-only address (ram,0x000140e081e0) is written */
    uVar23 = *param_3;
    auVar29 = *(undefined1 (*) [16])(param_2 + 4);
    local_238 = (ulonglong)(iVar22 + 3U >> 2);
    auVar31._0_12_ = ZEXT812(0);
    auVar31._12_4_ = 0;
    auVar31 = vsubps_avx(auVar31,auVar29);
    auVar31 = vmaxps_avx(auVar31,auVar29);
    auVar36._8_4_ = 0x3f800000;
    auVar36._0_8_ = 0x3f8000003f800000;
    auVar36._12_4_ = 0x3f800000;
    auVar29 = vdivps_avx(auVar36,auVar29);
    auVar31 = vcmpps_avx(auVar31,_DAT_140de3630,2);
    auVar29 = vblendvps_avx(auVar29,auVar36,auVar31);
    local_244 = 0x20 - LZCOUNT(iVar22 + -1);
    local_1a8 = vshufps_avx(auVar31,auVar31,0);
    local_1b8 = vshufps_avx(auVar31,auVar31,0x55);
    local_1c8 = vshufps_avx(auVar31,auVar31,0xaa);
    _local_1d8 = vshufps_avx(auVar29,auVar29,0);
    _local_1e8 = vshufps_avx(auVar29,auVar29,0x55);
    _local_1f8 = vshufps_avx(auVar29,auVar29,0xaa);
    local_220 = uVar23 >> 0x20;
    bVar26 = (byte)(uVar23 >> 0x20) & 0x1f;
    local_248 = ~(~(uint)(-1L << ((byte)local_244 & 0x3f)) << bVar26) & (uint)uVar23;
    local_244 = local_244 + (int)(uVar23 >> 0x20);
    auVar30 = ZEXT464(*(uint *)(local_240 + 4));
    lVar25 = 0;
    iVar22 = 0;
    uVar23 = (ulonglong)(uint)(0 << bVar26);
    bVar26 = 0;
    do {
      lVar19 = *(longlong *)(param_1 + 0x80);
      lVar21 = uVar23 * 0x60;
      pauVar1 = (undefined1 (*) [16])(lVar19 + 0x50 + lVar21);
      local_218 = *(undefined8 *)*pauVar1;
      uStack_210 = *(undefined8 *)(*pauVar1 + 8);
      local_178 = *(undefined1 (*) [16])(lVar19 + 0x40 + lVar21);
      local_138 = *(undefined1 (*) [16])(lVar19 + lVar21);
      local_158 = *(undefined1 (*) [16])(lVar19 + 0x10 + lVar21);
      local_148 = *(undefined1 (*) [16])(lVar19 + 0x20 + lVar21);
      local_168 = *(undefined1 (*) [16])(lVar19 + 0x30 + lVar21);
      fVar2 = *param_2;
      auVar55._4_4_ = fVar2;
      auVar55._0_4_ = fVar2;
      auVar55._8_4_ = fVar2;
      auVar55._12_4_ = fVar2;
      fVar2 = param_2[1];
      auVar52._4_4_ = fVar2;
      auVar52._0_4_ = fVar2;
      auVar52._8_4_ = fVar2;
      auVar52._12_4_ = fVar2;
      fVar2 = param_2[2];
      auVar54._4_4_ = fVar2;
      auVar54._0_4_ = fVar2;
      auVar54._8_4_ = fVar2;
      auVar54._12_4_ = fVar2;
      auVar29 = vsubps_avx(local_138,auVar55);
      auVar44._0_4_ = (float)local_1d8._0_4_ * auVar29._0_4_;
      auVar44._4_4_ = (float)local_1d8._4_4_ * auVar29._4_4_;
      auVar44._8_4_ = fStack_1d0 * auVar29._8_4_;
      auVar44._12_4_ = fStack_1cc * auVar29._12_4_;
      auVar29 = vsubps_avx(local_158,auVar52);
      auVar47._0_4_ = (float)local_1e8._0_4_ * auVar29._0_4_;
      auVar47._4_4_ = (float)local_1e8._4_4_ * auVar29._4_4_;
      auVar47._8_4_ = fStack_1e0 * auVar29._8_4_;
      auVar47._12_4_ = fStack_1dc * auVar29._12_4_;
      auVar29 = vsubps_avx(local_148,auVar54);
      auVar56._0_4_ = (float)local_1f8._0_4_ * auVar29._0_4_;
      auVar56._4_4_ = (float)local_1f8._4_4_ * auVar29._4_4_;
      auVar56._8_4_ = fStack_1f0 * auVar29._8_4_;
      auVar56._12_4_ = fStack_1ec * auVar29._12_4_;
      auVar29 = vsubps_avx(local_168,auVar55);
      auVar50._0_4_ = (float)local_1d8._0_4_ * auVar29._0_4_;
      auVar50._4_4_ = (float)local_1d8._4_4_ * auVar29._4_4_;
      auVar50._8_4_ = fStack_1d0 * auVar29._8_4_;
      auVar50._12_4_ = fStack_1cc * auVar29._12_4_;
      auVar31 = vsubps_avx(local_178,auVar52);
      auVar29 = vminps_avx(auVar44,auVar50);
      auVar41._8_4_ = 0xff7fffff;
      auVar41._0_8_ = 0xff7fffffff7fffff;
      auVar41._12_4_ = 0xff7fffff;
      auVar29 = vblendvps_avx(auVar29,auVar41,local_1a8);
      auVar32._0_4_ = (float)local_1e8._0_4_ * auVar31._0_4_;
      auVar32._4_4_ = (float)local_1e8._4_4_ * auVar31._4_4_;
      auVar32._8_4_ = fStack_1e0 * auVar31._8_4_;
      auVar32._12_4_ = fStack_1dc * auVar31._12_4_;
      auVar31 = vminps_avx(auVar47,auVar32);
      auVar31 = vblendvps_avx(auVar31,auVar41,local_1b8);
      auVar31 = vmaxps_avx(auVar29,auVar31);
      auVar29 = vsubps_avx(*pauVar1,auVar54);
      auVar42._0_4_ = (float)local_1f8._0_4_ * auVar29._0_4_;
      auVar42._4_4_ = (float)local_1f8._4_4_ * auVar29._4_4_;
      auVar42._8_4_ = fStack_1f0 * auVar29._8_4_;
      auVar42._12_4_ = fStack_1ec * auVar29._12_4_;
      auVar29 = vminps_avx(auVar56,auVar42);
      auVar29 = vblendvps_avx(auVar29,_DAT_140dc43a0,local_1c8);
      local_188 = vmaxps_avx(auVar31,auVar29);
      auVar29 = vmaxps_avx(auVar44,auVar50);
      auVar31 = vmaxps_avx(auVar47,auVar32);
      auVar36 = vmaxps_avx(auVar56,auVar42);
      auVar48._8_4_ = 0x7f7fffff;
      auVar48._0_8_ = 0x7f7fffff7f7fffff;
      auVar48._12_4_ = 0x7f7fffff;
      auVar29 = vblendvps_avx(auVar29,auVar48,local_1a8);
      auVar31 = vblendvps_avx(auVar31,auVar48,local_1b8);
      auVar36 = vblendvps_avx(auVar36,auVar48,local_1c8);
      auVar29 = vminps_avx(auVar29,auVar31);
      auVar31 = vminps_avx(auVar29,auVar36);
      auVar29 = vcmpps_avx(auVar31,local_188,1);
      auVar31 = vcmpps_avx(auVar31,ZEXT416(0) << 0x20,1);
      local_198 = vorps_avx(auVar29,auVar31);
      auVar29 = vcmpps_avx(local_178,local_158,1);
      auVar31 = vcmpps_avx(local_168,local_138,1);
      auVar31 = vorps_avx(auVar29,auVar31);
      auVar29 = vcmpps_avx(*pauVar1,local_148,1);
      auVar36 = vorps_avx(auVar29,auVar31);
      auVar29 = vcmpps_avx(local_168,auVar55,1);
      auVar31 = vcmpps_avx(auVar55,local_138,1);
      auVar32 = vorps_avx(auVar31,auVar29);
      auVar29 = vcmpps_avx(local_178,auVar52,1);
      auVar31 = vcmpps_avx(auVar52,local_158,1);
      auVar31 = vorps_avx(auVar31,auVar29);
      auVar29 = vandps_avx(local_1a8,auVar32);
      auVar31 = vandps_avx(auVar31,local_1b8);
      auVar32 = vorps_avx(auVar29,auVar31);
      auVar29 = vcmpps_avx(*pauVar1,auVar54,1);
      auVar31 = vcmpps_avx(auVar54,local_148,1);
      auVar29 = vorps_avx(auVar31,auVar29);
      auVar29 = vandps_avx(auVar29,local_1c8);
      auVar29 = vorps_avx(auVar32,auVar29);
      auVar29 = vorps_avx(auVar36,auVar29);
      auVar29 = vorps_avx(auVar29,local_198);
      auVar29 = vblendvps_avx(local_188,auVar48,auVar29);
      auVar57 = ZEXT1664(auVar29);
      auVar31 = vshufps_avx(auVar30._0_16_,auVar30._0_16_,0);
      auVar29 = vcmpps_avx(auVar29,auVar31,1);
      local_230 = uVar23;
      local_228 = lVar25;
      if ((((SUB161(auVar29 >> 0x1f,0) & 1) != 0 || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || auVar29[0xf] < '\0') {
        lVar19 = uVar23 * 4;
        if (lVar19 - (ulonglong)*(uint *)(param_1 + 0x50) != 0) {
          uVar24 = *(uint *)(param_1 + 0x50) - (int)lVar19;
          lVar19 = 0;
          if (3 < uVar24) {
            uVar24 = 4;
          }
          uVar23 = 0;
          auVar49 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
          auVar46 = ZEXT1664(_DAT_140e081e0);
          auVar53 = ZEXT464(0) << 0x20;
          auVar51 = ZEXT864(0) << 0x20;
          do {
            lVar21 = local_240;
            local_128 = auVar57._0_16_;
            if (*(float *)(local_128 + uVar23 * 4) < auVar30._0_4_) {
              lVar19 = *(longlong *)(param_1 + 0x60);
              local_f8 = (int)uVar23 + iVar22 << ((byte)local_220 & 0x1f) | local_248;
              local_f4 = local_244;
              auVar29 = auVar46._0_16_;
              if (*(char *)(lVar19 + 0x24 + lVar25) == '\0') {
                auVar29 = *(undefined1 (*) [16])(lVar19 + 0x14 + lVar25);
                auVar34._0_4_ = auVar29._0_4_ * auVar29._0_4_;
                auVar34._4_4_ = auVar29._4_4_ * auVar29._4_4_;
                auVar34._8_4_ = auVar29._8_4_ * auVar29._8_4_;
                auVar34._12_4_ = auVar29._12_4_ * auVar29._12_4_;
                auVar31 = vinsertps_avx(auVar34,auVar34,0x4c);
                auVar35._0_4_ = auVar34._0_4_ + auVar31._0_4_;
                auVar35._4_4_ = auVar34._4_4_ + auVar31._4_4_;
                auVar35._8_4_ = auVar34._8_4_ + auVar31._8_4_;
                auVar35._12_4_ = auVar34._12_4_ + auVar31._12_4_;
                auVar31 = vshufpd_avx(auVar35,auVar35,1);
                auVar31 = vmaxss_avx(auVar53._0_16_,
                                     ZEXT416((uint)(1.0 - (auVar35._0_4_ + auVar31._0_4_))));
                auVar31 = vsqrtss_avx(auVar31,auVar31);
                auVar31 = vinsertps_avx(auVar29,auVar31,0x30);
                auVar29._0_8_ = auVar31._0_8_ ^ 0x8000000080000000;
                auVar29._8_4_ = auVar31._8_4_ ^ 0x80000000;
                auVar29._12_4_ = auVar31._12_4_;
              }
              auVar31 = *(undefined1 (*) [16])(lVar19 + 8 + lVar25);
              fVar2 = auVar29._0_4_;
              auVar37._0_4_ = fVar2 + fVar2;
              fVar3 = auVar29._4_4_;
              auVar37._4_4_ = fVar3 + fVar3;
              fVar4 = auVar29._8_4_;
              auVar37._8_4_ = fVar4 + fVar4;
              fVar6 = auVar29._12_4_;
              auVar37._12_4_ = fVar6 + fVar6;
              auVar36 = vshufps_avx(auVar37,auVar37,0xc9);
              auVar32 = vshufps_avx(auVar29,auVar29,0xd2);
              auVar41 = vshufps_avx(auVar37,auVar37,0xd2);
              auVar29 = vshufps_avx(auVar29,auVar29,0xff);
              auVar43._0_4_ = auVar32._0_4_ * auVar41._0_4_;
              auVar43._4_4_ = auVar32._4_4_ * auVar41._4_4_;
              auVar43._8_4_ = auVar32._8_4_ * auVar41._8_4_;
              auVar43._12_4_ = auVar32._12_4_ * auVar41._12_4_;
              auVar45._0_4_ = fVar2 * auVar37._0_4_;
              auVar45._4_4_ = fVar3 * auVar37._4_4_;
              auVar45._8_4_ = fVar4 * auVar37._8_4_;
              auVar45._12_4_ = fVar6 * auVar37._12_4_;
              auVar42 = vshufps_avx(auVar45,auVar45,0xc9);
              auVar42 = vsubps_avx(auVar49._0_16_,auVar42);
              auVar42 = vsubps_avx(auVar42,auVar43);
              auVar38._0_4_ = auVar29._0_4_ * auVar36._0_4_ + auVar37._0_4_ * auVar32._0_4_;
              auVar38._4_4_ = auVar29._4_4_ * auVar36._4_4_ + auVar37._4_4_ * auVar32._4_4_;
              auVar38._8_4_ = auVar29._8_4_ * auVar36._8_4_ + auVar37._8_4_ * auVar32._8_4_;
              auVar38._12_4_ = auVar29._12_4_ * auVar36._12_4_ + auVar37._12_4_ * auVar32._12_4_;
              auVar40._0_4_ = auVar29._0_4_ * auVar41._0_4_;
              auVar40._4_4_ = auVar29._4_4_ * auVar41._4_4_;
              auVar40._8_4_ = auVar29._8_4_ * auVar41._8_4_;
              auVar40._12_4_ = auVar29._12_4_ * auVar41._12_4_;
              auVar27._0_4_ = fVar2 * auVar36._0_4_;
              auVar27._4_4_ = fVar3 * auVar36._4_4_;
              auVar27._8_4_ = fVar4 * auVar36._8_4_;
              auVar27._12_4_ = fVar6 * auVar36._12_4_;
              auVar32 = vsubps_avx(auVar27,auVar40);
              auVar29 = vblendps_avx(auVar32,auVar51._0_16_,8);
              auVar36 = vblendps_avx(auVar42,auVar38,2);
              auVar29 = vblendps_avx(auVar29,auVar36,3);
              auVar36 = vinsertps_avx(auVar32,auVar42,0x58);
              auVar36 = vblendps_avx(auVar36,auVar38,4);
              auVar32 = vinsertps_avx(auVar32,auVar38,8);
              auVar32 = vblendps_avx(auVar32,auVar42,4);
              auVar41 = vshufps_avx(auVar31,auVar31,0);
              fVar6 = auVar29._0_4_;
              fVar9 = auVar29._4_4_;
              fVar12 = auVar29._8_4_;
              fVar15 = auVar29._12_4_;
              auVar29 = vshufps_avx(auVar31,auVar31,0x55);
              fVar7 = auVar36._0_4_;
              fVar10 = auVar36._4_4_;
              fVar13 = auVar36._8_4_;
              fVar16 = auVar36._12_4_;
              auVar31 = vshufps_avx(auVar31,auVar31,0xaa);
              fVar8 = auVar32._0_4_;
              fVar11 = auVar32._4_4_;
              fVar14 = auVar32._8_4_;
              fVar17 = auVar32._12_4_;
              auVar33._0_4_ = auVar31._0_4_ * fVar8 + auVar41._0_4_ * fVar6 + auVar29._0_4_ * fVar7;
              auVar33._4_4_ =
                   auVar31._4_4_ * fVar11 + auVar41._4_4_ * fVar9 + auVar29._4_4_ * fVar10;
              auVar33._8_4_ =
                   auVar31._8_4_ * fVar14 + auVar41._8_4_ * fVar12 + auVar29._8_4_ * fVar13;
              auVar33._12_4_ =
                   auVar31._12_4_ * fVar17 + auVar41._12_4_ * fVar15 + auVar29._12_4_ * fVar16;
              auVar29 = vsubps_avx(auVar51._0_16_,auVar33);
              auVar29 = vinsertps_avx(auVar29,ZEXT416(0x3f800000),0x30);
              fVar2 = *param_2;
              fVar3 = param_2[1];
              fVar4 = param_2[2];
              local_118._0_4_ = fVar4 * fVar8 + fVar2 * fVar6 + fVar3 * fVar7 + auVar29._0_4_;
              local_118._4_4_ = fVar4 * fVar11 + fVar2 * fVar9 + fVar3 * fVar10 + auVar29._4_4_;
              local_118._8_4_ = fVar4 * fVar14 + fVar2 * fVar12 + fVar3 * fVar13 + auVar29._8_4_;
              local_118._12_4_ = fVar4 * fVar17 + fVar2 * fVar15 + fVar3 * fVar16 + auVar29._12_4_;
              auVar39._0_4_ = *param_2 + param_2[4];
              auVar39._4_4_ = param_2[1] + param_2[5];
              auVar39._8_4_ = param_2[2] + param_2[6];
              auVar39._12_4_ = param_2[3] + param_2[7];
              auVar31 = vshufps_avx(auVar39,auVar39,0);
              auVar36 = vshufps_avx(auVar39,auVar39,0x55);
              auVar32 = vshufps_avx(auVar39,auVar39,0xaa);
              auVar28._0_4_ =
                   auVar32._0_4_ * fVar8 + auVar31._0_4_ * fVar6 + auVar36._0_4_ * fVar7 +
                   auVar29._0_4_;
              auVar28._4_4_ =
                   auVar32._4_4_ * fVar11 + auVar31._4_4_ * fVar9 + auVar36._4_4_ * fVar10 +
                   auVar29._4_4_;
              auVar28._8_4_ =
                   auVar32._8_4_ * fVar14 + auVar31._8_4_ * fVar12 + auVar36._8_4_ * fVar13 +
                   auVar29._8_4_;
              auVar28._12_4_ =
                   auVar32._12_4_ * fVar17 + auVar31._12_4_ * fVar15 + auVar36._12_4_ * fVar16 +
                   auVar29._12_4_;
              local_108 = vsubps_avx(auVar28,local_118);
              lVar19 = (**(code **)(**(longlong **)(lVar19 + lVar25) + 0x98))
                                 (*(longlong **)(lVar19 + lVar25),local_118,&local_f8,local_240);
              bVar26 = bVar26 | (byte)lVar19;
              auVar30 = ZEXT464((uint)*(float *)(lVar21 + 4));
              if (*(float *)(lVar21 + 4) <= auVar53._0_4_) break;
            }
            uVar23 = uVar23 + 1;
            lVar25 = lVar25 + 0x28;
          } while (uVar23 < uVar24);
        }
      }
      uVar20 = (undefined4)((ulonglong)lVar19 >> 0x20);
      uVar23 = local_230 + 1;
      iVar22 = iVar22 + 4;
      lVar25 = local_228 + 0xa0;
    } while (uVar23 != local_238);
  }
  if (local_250 != (undefined1 (*) [16])0x0) {
    uVar23 = rdtsc();
    auVar18._8_8_ = uStack_200;
    auVar18._0_8_ = local_208;
    auVar31 = vpinsrq_avx(auVar18,uVar23 & 0xffffffff00000000 | CONCAT44(uVar20,(int)uVar23),1);
    auVar29 = vmovntdq_avx(SUB6416(ZEXT864(0x14132b90d),0));
    *local_250 = auVar29;
    auVar29 = vmovntdq_avx(auVar31);
    local_250[1] = auVar29;
  }
  if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_278)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_f0 ^ (ulonglong)auStack_278);
  }
  return bVar26 & 1;
}

