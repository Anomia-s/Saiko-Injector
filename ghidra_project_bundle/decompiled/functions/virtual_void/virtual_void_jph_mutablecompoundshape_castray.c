/**
 * Function: virtual_void_jph_mutablecompoundshape_castray
 * Address:  1402e14c0
 * Signature: undefined virtual_void_jph_mutablecompoundshape_castray(void)
 * Body size: 2089 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void virtual_void_jph_mutablecompoundshape_castray
               (longlong param_1,float *param_2,undefined2 *param_3,undefined8 *param_4,
               longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
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
  float fVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  undefined1 (*pauVar27) [16];
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
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
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [64];
  undefined1 auVar51 [16];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  float fVar56;
  undefined1 auVar57 [16];
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [64];
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong *local_210;
  ulonglong local_208;
  undefined1 (*local_200) [16];
  ulonglong local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  float fStack_170;
  undefined1 local_168 [16];
  float *local_158;
  longlong local_150;
  undefined8 local_148;
  int local_140;
  undefined2 local_13c;
  undefined1 local_13a;
  longlong *local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  uint local_f8;
  int local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_238;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar23 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar23 != 0) {
    uVar24 = *(uint *)(lVar23 + 0x200020);
    if ((ulonglong)uVar24 < 0x10000) {
      *(uint *)(lVar23 + 0x200020) = uVar24 + 1;
      pauVar27 = (undefined1 (*) [16])(lVar23 + (ulonglong)uVar24 * 0x20 + 0x20);
      uVar22 = rdtsc();
      local_1f8 = uVar22 & 0xffffffff00000000 |
                  CONCAT44((int)((ulonglong)lVar23 >> 0x20),(int)uVar22);
      uStack_1f0 = 0;
      goto LAB_1402e15ed;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar27 = (undefined1 (*) [16])0x0;
LAB_1402e15ed:
  uVar22 = (**(code **)(*param_6 + 0x10))(param_6,param_1,param_4);
  if ((char)uVar22 != '\0') {
    local_150 = param_5;
    local_148 = *param_4;
    local_140 = 0x20 - LZCOUNT(*(int *)(param_1 + 0x50) + -1);
    local_13c = *param_3;
    local_13a = *(undefined1 *)(param_3 + 1);
    uVar22 = 0;
    local_138 = param_6;
    auVar31 = *(undefined1 (*) [16])(param_2 + 4);
    auVar34._0_12_ = ZEXT812(0);
    auVar34._12_4_ = 0;
    auVar34 = vsubps_avx(auVar34,auVar31);
    auVar34 = vmaxps_avx(auVar34,auVar31);
    local_168 = vcmpps_avx(auVar34,_DAT_140de3630,2);
    auVar38._8_4_ = 0x3f800000;
    auVar38._0_8_ = 0x3f8000003f800000;
    auVar38._12_4_ = 0x3f800000;
    auVar31 = vdivps_avx(auVar38,auVar31);
    _local_178 = vblendvps_avx(auVar31,auVar38,local_168);
    uVar24 = *(int *)(param_1 + 0x50) + 3;
    local_208 = (ulonglong)uVar24;
    local_200 = pauVar27;
    local_158 = param_2;
    if (3 < uVar24) {
      local_208 = (ulonglong)(uVar24 >> 2);
      uVar29 = 0;
      do {
        uVar22 = *(ulonglong *)(param_1 + 0x80);
        fVar56 = *local_158;
        auVar57._4_4_ = fVar56;
        auVar57._0_4_ = fVar56;
        auVar57._8_4_ = fVar56;
        auVar57._12_4_ = fVar56;
        fVar56 = local_158[1];
        local_1b8._4_4_ = fVar56;
        local_1b8._0_4_ = fVar56;
        local_1b8._8_4_ = fVar56;
        local_1b8._12_4_ = fVar56;
        fVar56 = local_158[2];
        local_1c8._4_4_ = fVar56;
        local_1c8._0_4_ = fVar56;
        local_1c8._8_4_ = fVar56;
        local_1c8._12_4_ = fVar56;
        lVar23 = uVar29 * 0x60;
        local_1e8 = *(undefined1 (*) [16])(uVar22 + 0x40 + lVar23);
        local_188 = *(undefined1 (*) [16])(uVar22 + lVar23);
        local_198 = *(undefined1 (*) [16])(uVar22 + 0x10 + lVar23);
        local_1d8 = *(undefined1 (*) [16])(uVar22 + 0x20 + lVar23);
        local_1a8 = *(undefined1 (*) [16])(uVar22 + 0x30 + lVar23);
        auVar35 = vshufps_avx(local_168,local_168,0);
        auVar31 = vsubps_avx(local_188,auVar57);
        auVar54._0_4_ = auVar31._0_4_ * (float)local_178._0_4_;
        auVar54._4_4_ = auVar31._4_4_ * (float)local_178._0_4_;
        auVar54._8_4_ = auVar31._8_4_ * (float)local_178._0_4_;
        auVar54._12_4_ = auVar31._12_4_ * (float)local_178._0_4_;
        auVar31 = vsubps_avx(local_198,local_1b8);
        auVar46._0_4_ = auVar31._0_4_ * (float)local_178._4_4_;
        auVar46._4_4_ = auVar31._4_4_ * (float)local_178._4_4_;
        auVar46._8_4_ = auVar31._8_4_ * (float)local_178._4_4_;
        auVar46._12_4_ = auVar31._12_4_ * (float)local_178._4_4_;
        auVar31 = vsubps_avx(local_1a8,auVar57);
        auVar39._0_4_ = auVar31._0_4_ * (float)local_178._0_4_;
        auVar39._4_4_ = auVar31._4_4_ * (float)local_178._0_4_;
        auVar39._8_4_ = auVar31._8_4_ * (float)local_178._0_4_;
        auVar39._12_4_ = auVar31._12_4_ * (float)local_178._0_4_;
        auVar31 = vsubps_avx(local_1e8,local_1b8);
        auVar51._0_4_ = auVar31._0_4_ * (float)local_178._4_4_;
        auVar51._4_4_ = auVar31._4_4_ * (float)local_178._4_4_;
        auVar51._8_4_ = auVar31._8_4_ * (float)local_178._4_4_;
        auVar51._12_4_ = auVar31._12_4_ * (float)local_178._4_4_;
        auVar31 = vsubps_avx(local_1d8,local_1c8);
        auVar43._0_4_ = auVar31._0_4_ * fStack_170;
        auVar43._4_4_ = auVar31._4_4_ * fStack_170;
        auVar43._8_4_ = auVar31._8_4_ * fStack_170;
        auVar43._12_4_ = auVar31._12_4_ * fStack_170;
        auVar31 = vminps_avx(auVar54,auVar39);
        auVar45._8_4_ = 0xff7fffff;
        auVar45._0_8_ = 0xff7fffffff7fffff;
        auVar45._12_4_ = 0xff7fffff;
        auVar34 = vblendvps_avx(auVar31,auVar45,auVar35);
        auVar36 = vshufps_avx(local_168,local_168,0x55);
        auVar31 = vminps_avx(auVar46,auVar51);
        auVar38 = vblendvps_avx(auVar31,auVar45,auVar36);
        auVar31 = *(undefined1 (*) [16])(uVar22 + 0x50 + lVar23);
        auVar30 = vsubps_avx(auVar31,local_1c8);
        auVar62._0_4_ = auVar30._0_4_ * fStack_170;
        auVar62._4_4_ = auVar30._4_4_ * fStack_170;
        auVar62._8_4_ = auVar30._8_4_ * fStack_170;
        auVar62._12_4_ = auVar30._12_4_ * fStack_170;
        auVar38 = vmaxps_avx(auVar34,auVar38);
        auVar32 = vshufps_avx(local_168,local_168,0xaa);
        auVar34 = vminps_avx(auVar43,auVar62);
        auVar34 = vblendvps_avx(auVar34,auVar45,auVar32);
        auVar45 = vmaxps_avx(auVar38,auVar34);
        auVar34 = vmaxps_avx(auVar54,auVar39);
        auVar38 = vmaxps_avx(auVar46,auVar51);
        auVar30 = vmaxps_avx(auVar43,auVar62);
        auVar47._8_4_ = 0x7f7fffff;
        auVar47._0_8_ = 0x7f7fffff7f7fffff;
        auVar47._12_4_ = 0x7f7fffff;
        auVar34 = vblendvps_avx(auVar34,auVar47,auVar35);
        auVar38 = vblendvps_avx(auVar38,auVar47,auVar36);
        auVar30 = vblendvps_avx(auVar30,auVar47,auVar32);
        auVar34 = vminps_avx(auVar34,auVar38);
        auVar38 = vminps_avx(auVar34,auVar30);
        auVar34 = vcmpps_avx(auVar38,auVar45,1);
        auVar38 = vcmpps_avx(auVar38,ZEXT816(0),1);
        auVar39 = vorps_avx(auVar34,auVar38);
        auVar34 = vcmpps_avx(local_1e8,local_198,1);
        auVar38 = vcmpps_avx(local_1a8,local_188,1);
        auVar38 = vorps_avx(auVar34,auVar38);
        auVar34 = vcmpps_avx(auVar31,local_1d8,1);
        auVar43 = vorps_avx(auVar34,auVar38);
        auVar34 = vcmpps_avx(local_1a8,auVar57,1);
        auVar38 = vcmpps_avx(auVar57,local_188,1);
        auVar34 = vorps_avx(auVar38,auVar34);
        auVar34 = vandps_avx(auVar34,auVar35);
        auVar38 = vcmpps_avx(local_1e8,local_1b8,1);
        auVar30 = vcmpps_avx(local_1b8,local_198,1);
        auVar38 = vorps_avx(auVar30,auVar38);
        auVar38 = vandps_avx(auVar36,auVar38);
        auVar38 = vorps_avx(auVar34,auVar38);
        auVar31 = vcmpps_avx(auVar31,local_1c8,1);
        auVar34 = vcmpps_avx(local_1c8,local_1d8,1);
        auVar31 = vorps_avx(auVar34,auVar31);
        auVar31 = vandps_avx(auVar32,auVar31);
        auVar31 = vorps_avx(auVar38,auVar31);
        auVar31 = vorps_avx(auVar43,auVar31);
        auVar31 = vorps_avx(auVar31,auVar39);
        auVar31 = vblendvps_avx(auVar45,auVar47,auVar31);
        auVar63 = ZEXT1664(auVar31);
        uVar2 = *(undefined4 *)(param_5 + 8);
        auVar30._4_4_ = uVar2;
        auVar30._0_4_ = uVar2;
        auVar30._8_4_ = uVar2;
        auVar30._12_4_ = uVar2;
        auVar31 = vcmpps_avx(auVar31,auVar30,1);
        if ((((SUB161(auVar31 >> 0x1f,0) & 1) != 0 || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || auVar31[0xf] < '\0') {
          uVar22 = *(ulonglong *)(param_1 + 0x50) & 0xffffffff;
          iVar26 = (int)(uVar29 * 4);
          uVar24 = (int)*(ulonglong *)(param_1 + 0x50) - iVar26;
          if (3 < uVar24) {
            uVar24 = 4;
          }
          if (uVar29 * 4 - uVar22 != 0) {
            uVar22 = 0;
            auVar50 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
            auVar53 = ZEXT1664(_DAT_140e081e0);
            auVar55 = ZEXT864(0) << 0x20;
            fVar56 = 1.0;
            uVar58 = 0x80000000;
            uVar59 = 0x80000000;
            uVar60 = 0x80000000;
            uVar61 = 0;
            auVar52 = ZEXT864(0) << 0x20;
            do {
              local_128 = auVar63._0_16_;
              iVar21 = (int)uVar22;
              uVar28 = uVar22;
              if (*(float *)(param_5 + 8) <= *(float *)(local_128 + uVar22 * 4)) {
                uVar25 = iVar21 + 1;
                if (uVar24 <= uVar25) break;
                uVar28 = (ulonglong)uVar25;
                if (*(float *)(param_5 + 8) <= *(float *)(local_128 + (ulonglong)uVar25 * 4)) {
                  uVar25 = iVar21 + 2;
                  if (uVar24 <= uVar25) break;
                  uVar28 = (ulonglong)uVar25;
                  if (*(float *)(param_5 + 8) <= *(float *)(local_128 + (ulonglong)uVar25 * 4)) {
                    uVar25 = iVar21 + 3;
                    uVar22 = 0;
                    if (uVar24 <= uVar25) break;
                    uVar28 = (ulonglong)uVar25;
                    if (*(float *)(param_5 + 8) <= *(float *)(local_128 + (ulonglong)uVar25 * 4))
                    break;
                  }
                }
              }
              uVar25 = iVar26 + (int)uVar28;
              uVar22 = (ulonglong)uVar25;
              lVar23 = *(longlong *)(param_1 + 0x60);
              puVar1 = (undefined8 *)(lVar23 + uVar22 * 0x28);
              bVar19 = (byte)((ulonglong)local_148 >> 0x20);
              local_f8 = uVar25 << (bVar19 & 0x1f) |
                         ~(~(uint)(-1L << ((byte)local_140 & 0x3f)) << (bVar19 & 0x1f)) &
                         (uint)local_148;
              local_f4 = local_140 + (int)((ulonglong)local_148 >> 0x20);
              auVar31 = auVar53._0_16_;
              if (*(char *)(lVar23 + 0x24 + uVar22 * 0x28) == '\0') {
                auVar31 = *(undefined1 (*) [16])((longlong)puVar1 + 0x14);
                auVar35._0_4_ = auVar31._0_4_ * auVar31._0_4_;
                auVar35._4_4_ = auVar31._4_4_ * auVar31._4_4_;
                auVar35._8_4_ = auVar31._8_4_ * auVar31._8_4_;
                auVar35._12_4_ = auVar31._12_4_ * auVar31._12_4_;
                auVar34 = vinsertps_avx(auVar35,auVar35,0x4c);
                auVar36._0_4_ = auVar35._0_4_ + auVar34._0_4_;
                auVar36._4_4_ = auVar35._4_4_ + auVar34._4_4_;
                auVar36._8_4_ = auVar35._8_4_ + auVar34._8_4_;
                auVar36._12_4_ = auVar35._12_4_ + auVar34._12_4_;
                auVar34 = vshufpd_avx(auVar36,auVar36,1);
                auVar34 = vmaxss_avx(auVar55._0_16_,
                                     ZEXT416((uint)(fVar56 - (auVar36._0_4_ + auVar34._0_4_))));
                auVar34 = vsqrtss_avx(auVar34,auVar34);
                auVar34 = vinsertps_avx(auVar31,auVar34,0x30);
                auVar31._0_4_ = uVar58 ^ auVar34._0_4_;
                auVar31._4_4_ = uVar59 ^ auVar34._4_4_;
                auVar31._8_4_ = uVar60 ^ auVar34._8_4_;
                auVar31._12_4_ = uVar61 ^ auVar34._12_4_;
              }
              auVar34 = *(undefined1 (*) [16])(lVar23 + 8 + uVar22 * 0x28);
              fVar3 = auVar31._0_4_;
              auVar40._0_4_ = fVar3 + fVar3;
              fVar4 = auVar31._4_4_;
              auVar40._4_4_ = fVar4 + fVar4;
              fVar5 = auVar31._8_4_;
              auVar40._8_4_ = fVar5 + fVar5;
              fVar7 = auVar31._12_4_;
              auVar40._12_4_ = fVar7 + fVar7;
              auVar38 = vshufps_avx(auVar40,auVar40,0xc9);
              auVar30 = vshufps_avx(auVar31,auVar31,0xd2);
              auVar45 = vshufps_avx(auVar40,auVar40,0xd2);
              auVar31 = vshufps_avx(auVar31,auVar31,0xff);
              auVar48._0_4_ = auVar30._0_4_ * auVar45._0_4_;
              auVar48._4_4_ = auVar30._4_4_ * auVar45._4_4_;
              auVar48._8_4_ = auVar30._8_4_ * auVar45._8_4_;
              auVar48._12_4_ = auVar30._12_4_ * auVar45._12_4_;
              auVar49._0_4_ = fVar3 * auVar40._0_4_;
              auVar49._4_4_ = fVar4 * auVar40._4_4_;
              auVar49._8_4_ = fVar5 * auVar40._8_4_;
              auVar49._12_4_ = fVar7 * auVar40._12_4_;
              auVar39 = vshufps_avx(auVar49,auVar49,0xc9);
              auVar39 = vsubps_avx(auVar50._0_16_,auVar39);
              auVar39 = vsubps_avx(auVar39,auVar48);
              auVar41._0_4_ = auVar31._0_4_ * auVar38._0_4_ + auVar40._0_4_ * auVar30._0_4_;
              auVar41._4_4_ = auVar31._4_4_ * auVar38._4_4_ + auVar40._4_4_ * auVar30._4_4_;
              auVar41._8_4_ = auVar31._8_4_ * auVar38._8_4_ + auVar40._8_4_ * auVar30._8_4_;
              auVar41._12_4_ = auVar31._12_4_ * auVar38._12_4_ + auVar40._12_4_ * auVar30._12_4_;
              auVar44._0_4_ = auVar31._0_4_ * auVar45._0_4_;
              auVar44._4_4_ = auVar31._4_4_ * auVar45._4_4_;
              auVar44._8_4_ = auVar31._8_4_ * auVar45._8_4_;
              auVar44._12_4_ = auVar31._12_4_ * auVar45._12_4_;
              auVar32._0_4_ = fVar3 * auVar38._0_4_;
              auVar32._4_4_ = fVar4 * auVar38._4_4_;
              auVar32._8_4_ = fVar5 * auVar38._8_4_;
              auVar32._12_4_ = fVar7 * auVar38._12_4_;
              auVar30 = vsubps_avx(auVar32,auVar44);
              auVar31 = vblendps_avx(auVar30,auVar52._0_16_,8);
              auVar38 = vblendps_avx(auVar39,auVar41,2);
              auVar31 = vblendps_avx(auVar31,auVar38,3);
              auVar38 = vinsertps_avx(auVar30,auVar39,0x58);
              auVar38 = vblendps_avx(auVar38,auVar41,4);
              auVar30 = vinsertps_avx(auVar30,auVar41,8);
              auVar30 = vblendps_avx(auVar30,auVar39,4);
              auVar45 = vshufps_avx(auVar34,auVar34,0);
              fVar7 = auVar31._0_4_;
              fVar10 = auVar31._4_4_;
              fVar13 = auVar31._8_4_;
              fVar16 = auVar31._12_4_;
              auVar31 = vshufps_avx(auVar34,auVar34,0x55);
              fVar8 = auVar38._0_4_;
              fVar11 = auVar38._4_4_;
              fVar14 = auVar38._8_4_;
              fVar17 = auVar38._12_4_;
              auVar34 = vshufps_avx(auVar34,auVar34,0xaa);
              fVar9 = auVar30._0_4_;
              fVar12 = auVar30._4_4_;
              fVar15 = auVar30._8_4_;
              fVar18 = auVar30._12_4_;
              auVar37._0_4_ = auVar34._0_4_ * fVar9 + auVar45._0_4_ * fVar7 + auVar31._0_4_ * fVar8;
              auVar37._4_4_ =
                   auVar34._4_4_ * fVar12 + auVar45._4_4_ * fVar10 + auVar31._4_4_ * fVar11;
              auVar37._8_4_ =
                   auVar34._8_4_ * fVar15 + auVar45._8_4_ * fVar13 + auVar31._8_4_ * fVar14;
              auVar37._12_4_ =
                   auVar34._12_4_ * fVar18 + auVar45._12_4_ * fVar16 + auVar31._12_4_ * fVar17;
              auVar31 = vsubps_avx(auVar52._0_16_,auVar37);
              auVar31 = vinsertps_avx(auVar31,ZEXT416(0x3f800000),0x30);
              fVar3 = *local_158;
              fVar4 = local_158[1];
              fVar5 = local_158[2];
              local_118._0_4_ = fVar5 * fVar9 + fVar3 * fVar7 + fVar4 * fVar8 + auVar31._0_4_;
              local_118._4_4_ = fVar5 * fVar12 + fVar3 * fVar10 + fVar4 * fVar11 + auVar31._4_4_;
              local_118._8_4_ = fVar5 * fVar15 + fVar3 * fVar13 + fVar4 * fVar14 + auVar31._8_4_;
              local_118._12_4_ = fVar5 * fVar18 + fVar3 * fVar16 + fVar4 * fVar17 + auVar31._12_4_;
              auVar42._0_4_ = *local_158 + local_158[4];
              auVar42._4_4_ = local_158[1] + local_158[5];
              auVar42._8_4_ = local_158[2] + local_158[6];
              auVar42._12_4_ = local_158[3] + local_158[7];
              auVar34 = vshufps_avx(auVar42,auVar42,0);
              auVar38 = vshufps_avx(auVar42,auVar42,0x55);
              auVar30 = vshufps_avx(auVar42,auVar42,0xaa);
              auVar33._0_4_ =
                   fVar9 * auVar30._0_4_ + fVar7 * auVar34._0_4_ + fVar8 * auVar38._0_4_ +
                   auVar31._0_4_;
              auVar33._4_4_ =
                   fVar12 * auVar30._4_4_ + fVar10 * auVar34._4_4_ + fVar11 * auVar38._4_4_ +
                   auVar31._4_4_;
              auVar33._8_4_ =
                   fVar15 * auVar30._8_4_ + fVar13 * auVar34._8_4_ + fVar14 * auVar38._8_4_ +
                   auVar31._8_4_;
              auVar33._12_4_ =
                   fVar18 * auVar30._12_4_ + fVar16 * auVar34._12_4_ + fVar17 * auVar38._12_4_ +
                   auVar31._12_4_;
              local_108 = vsubps_avx(auVar33,local_118);
              plVar6 = (longlong *)*puVar1;
              local_210 = local_138;
              local_218 = param_5;
              uVar22 = (**(code **)(*plVar6 + 0x90))(plVar6,local_118,&local_13c,&local_f8);
              param_5 = local_150;
              if ((*(float *)(local_150 + 8) <= auVar55._0_4_) ||
                 (uVar25 = (int)uVar28 + 1, uVar22 = (ulonglong)uVar25, uVar24 <= uVar25)) break;
            } while( true );
          }
        }
        uVar29 = uVar29 + 1;
        pauVar27 = local_200;
      } while (uVar29 != local_208);
    }
  }
  auVar20._8_8_ = uStack_1f0;
  auVar20._0_8_ = local_1f8;
  if (pauVar27 != (undefined1 (*) [16])0x0) {
    uVar29 = rdtsc();
    auVar34 = vpinsrq_avx(auVar20,uVar29 & 0xffffffff00000000 |
                                  CONCAT44((int)(uVar22 >> 0x20),(int)uVar29),1);
    auVar31 = vmovntdq_avx(SUB6416(ZEXT864(0x14132c0e5),0));
    *pauVar27 = auVar31;
    auVar31 = vmovntdq_avx(auVar34);
    pauVar27[1] = auVar31;
  }
  if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_238)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_f0 ^ (ulonglong)auStack_238);
  }
  return;
}

