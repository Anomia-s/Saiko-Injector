/**
 * Function: static_void_jph_convexshape_scastconvexvsconv
 * Address:  1400ee1c0
 * Signature: undefined static_void_jph_convexshape_scastconvexvsconv(void)
 * Body size: 2102 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void static_void_jph_convexshape_scastconvexvsconv
               (undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
               undefined8 param_5,float *param_6,undefined4 *param_7,undefined4 *param_8,
               longlong *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 *puVar26;
  float *pfVar27;
  longlong *plVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar48 [64];
  undefined1 auStack_2838 [32];
  float *local_2818;
  undefined8 **local_2810;
  undefined1 *local_2808;
  float local_2800;
  float *local_27f8;
  longlong *local_27f0;
  undefined1 *local_27e8;
  undefined1 *local_27e0;
  undefined1 (*local_27d8) [16];
  undefined8 *local_27d0;
  longlong *local_27c8;
  longlong *local_27c0;
  undefined8 local_27b8;
  undefined8 uStack_27b0;
  undefined8 local_27a8;
  undefined8 uStack_27a0;
  undefined1 local_2798 [16];
  undefined8 local_2788;
  undefined8 uStack_2780;
  undefined1 local_2778 [16];
  undefined1 local_2768 [8];
  float fStack_2760;
  undefined1 local_2758 [8];
  float fStack_2750;
  float local_273c;
  undefined8 local_2738;
  undefined8 uStack_2730;
  undefined8 local_2728;
  undefined8 uStack_2720;
  longlong *local_2718;
  float local_2710;
  undefined8 local_2708;
  float local_2700;
  undefined1 local_26f8 [8];
  float fStack_26f0;
  float fStack_26ec;
  float local_26e8;
  float fStack_26e4;
  float fStack_26e0;
  float fStack_26dc;
  float local_26d8;
  float fStack_26d4;
  float fStack_26d0;
  float fStack_26cc;
  float local_26c8;
  float fStack_26c4;
  float fStack_26c0;
  float fStack_26bc;
  undefined1 local_26b8 [16];
  undefined1 auStack_26a8 [16];
  undefined8 local_2698;
  undefined8 uStack_2690;
  undefined8 uStack_2688;
  undefined8 uStack_2680;
  undefined8 *local_2678 [66];
  undefined4 local_2468 [132];
  float local_2258;
  undefined1 local_2254;
  undefined1 local_2248 [192];
  undefined4 local_2188;
  undefined1 local_2178 [4160];
  undefined1 local_1138 [4168];
  ulonglong local_f0;
  undefined1 local_a8 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x1400ee1d6;
  local_a8 = in_ZMM10._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_2838;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar9 == 0) {
LAB_1400ee2ee:
    local_27d8 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar8 = *(uint *)(lVar9 + 0x200020);
    if (0xffff < (ulonglong)uVar8) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_1400ee2ee;
    }
    *(uint *)(lVar9 + 0x200020) = uVar8 + 1;
    local_27d8 = (undefined1 (*) [16])(lVar9 + (ulonglong)uVar8 * 0x20 + 0x20);
    uVar10 = rdtsc();
    in_ZMM10 = ZEXT864(uVar10 & 0xffffffff00000000 |
                       CONCAT44((int)((ulonglong)local_27d8 >> 0x20),(int)uVar10));
  }
  local_27c8 = (longlong *)*param_1;
  iVar13 = (*(byte *)(param_2 + 0x22) ^ 1) * 2;
  local_2728 = param_1[2];
  uStack_2720 = param_1[3];
  pfVar27 = (float *)(**(code **)(*local_27c8 + 0x128))(local_27c8,iVar13,local_1138,&local_2728);
  local_2738 = *param_4;
  uStack_2730 = param_4[1];
  local_27d0 = param_4;
  local_27c0 = param_3;
  plVar28 = (longlong *)(**(code **)(*param_3 + 0x128))(param_3,iVar13,local_2178,&local_2738);
  local_2188 = 0;
  local_273c = *(float *)(param_9 + 1);
  cVar7 = *(char *)(param_2 + 0x23);
  local_2800 = (float)(**(code **)(*plVar28 + 0x10))(plVar28);
  fVar31 = (float)(**(code **)(*(longlong *)pfVar27 + 0x10))(pfVar27);
  fVar44 = *(float *)(param_2 + 4);
  _local_26f8 = *(undefined1 (*) [16])(param_1 + 0xc);
  auVar48 = ZEXT1664(_local_26f8);
  local_27e0 = local_2778;
  local_27f8 = &local_273c;
  local_2808 = (undefined1 *)CONCAT44(local_2808._4_4_,fVar31);
  local_2818 = pfVar27;
  local_2810 = (undefined8 **)plVar28;
  local_27f0 = (longlong *)local_2758;
  local_27e8 = local_2768;
  fVar43 = local_2800;
  uVar29 = FUN_1400f4890(local_2248,(undefined1 (*) [16])(param_1 + 4),local_26f8,fVar44);
  auVar47 = in_ZMM10._0_16_;
  if ((char)uVar29 != '\0') {
    auVar34._0_4_ = local_2778._0_4_ * local_2778._0_4_;
    auVar34._4_4_ = local_2778._4_4_ * local_2778._4_4_;
    auVar34._8_4_ = local_2778._8_4_ * local_2778._8_4_;
    auVar34._12_4_ = local_2778._12_4_ * local_2778._12_4_;
    auVar12 = vinsertps_avx(auVar34,auVar34,0x4c);
    auVar35._0_4_ = auVar34._0_4_ + auVar12._0_4_;
    auVar35._4_4_ = auVar34._4_4_ + auVar12._4_4_;
    auVar35._8_4_ = auVar34._8_4_ + auVar12._8_4_;
    auVar35._12_4_ = auVar34._12_4_ + auVar12._12_4_;
    auVar12 = vshufpd_avx(auVar35,auVar35,1);
    fVar11 = auVar35._0_4_ + auVar12._0_4_;
    if ((((cVar7 == '\0') || (local_273c != 0.0)) || (NAN(local_273c))) ||
       (((fVar31 + fVar43 != 0.0 || (NAN(fVar31 + fVar43))) && (fVar44 * fVar44 < fVar11)))) {
      if (fVar11 <= fVar44 * fVar44) {
        local_2778 = auVar48._0_16_;
      }
      cVar7 = *(char *)(param_2 + 0x21);
      puVar26 = local_27d0;
    }
    else {
      local_26b8 = *(undefined1 (*) [16])(param_1 + 4);
      auStack_26a8 = *(undefined1 (*) [16])(param_1 + 6);
      local_2698 = param_1[8];
      uStack_2690 = param_1[9];
      uStack_2688 = param_1[10];
      uStack_2680 = param_1[0xb];
      local_2678[0] = &local_2708;
      local_2818 = (float *)local_2778;
      in_ZMM10 = ZEXT1664(auVar47);
      auVar48 = ZEXT1664(auVar48._0_16_);
      local_2810 = (undefined8 **)local_2758;
      local_2808 = local_2768;
      local_2718 = plVar28;
      local_2710 = fVar43;
      local_2708 = pfVar27;
      local_2700 = fVar31;
      uVar29 = bool_jph_epapenetrationdepth_getpenetrationde(local_2248,local_26b8,&local_2718);
      if ((char)uVar29 == '\0') {
        local_2778 = auVar48._0_16_;
      }
      cVar7 = *(char *)(param_2 + 0x21);
      puVar26 = local_27d0;
    }
    auVar47 = in_ZMM10._0_16_;
    local_27d0 = puVar26;
    if (cVar7 != '\x01') {
      auVar32._0_4_ = local_2778._0_4_ * *(float *)(param_1 + 0xc);
      auVar32._4_4_ = local_2778._4_4_ * *(float *)((longlong)param_1 + 100);
      auVar32._8_4_ = local_2778._8_4_ * *(float *)(param_1 + 0xd);
      auVar32._12_4_ = local_2778._12_4_ * *(float *)((longlong)param_1 + 0x6c);
      auVar12 = vinsertps_avx(auVar32,auVar32,0x4c);
      auVar33._0_4_ = auVar32._0_4_ + auVar12._0_4_;
      auVar33._4_4_ = auVar32._4_4_ + auVar12._4_4_;
      auVar33._8_4_ = auVar32._8_4_ + auVar12._8_4_;
      auVar33._12_4_ = auVar32._12_4_ + auVar12._12_4_;
      auVar12 = vshufpd_avx(auVar33,auVar33,1);
      if (auVar33._0_4_ + auVar12._0_4_ <= 0.0) goto LAB_1400ee933;
    }
    fVar44 = *param_6;
    fVar43 = param_6[1];
    fVar31 = param_6[2];
    fVar11 = param_6[3];
    fVar14 = param_6[4];
    fVar15 = param_6[5];
    fVar16 = param_6[6];
    fVar17 = param_6[7];
    fVar18 = param_6[8];
    fVar19 = param_6[9];
    fVar20 = param_6[10];
    fVar21 = param_6[0xb];
    fVar22 = param_6[0xc];
    fVar23 = param_6[0xd];
    fVar24 = param_6[0xe];
    fVar25 = param_6[0xf];
    fVar37 = fVar43 * (float)local_2758._0_4_;
    fVar38 = fVar31 * (float)local_2758._0_4_;
    fVar39 = fVar11 * (float)local_2758._0_4_;
    fVar40 = (float)local_2758._4_4_ * fVar16;
    fVar41 = (float)local_2758._4_4_ * fVar17;
    fVar42 = fStack_2750 * fVar21;
    local_2758._0_4_ =
         fVar22 + fVar44 * (float)local_2758._0_4_ + (float)local_2758._4_4_ * fVar14 +
                  fStack_2750 * fVar18;
    local_2758._4_4_ = fVar23 + fVar37 + (float)local_2758._4_4_ * fVar15 + fStack_2750 * fVar19;
    fStack_2750 = fVar24 + fVar38 + fVar40 + fStack_2750 * fVar20;
    register0x0000134c = fVar25 + fVar39 + fVar41 + fVar42;
    fVar37 = fVar43 * (float)local_2768._0_4_;
    fVar38 = fVar31 * (float)local_2768._0_4_;
    fVar39 = fVar11 * (float)local_2768._0_4_;
    fVar40 = fVar16 * (float)local_2768._4_4_;
    fVar41 = fVar17 * (float)local_2768._4_4_;
    fVar42 = fVar21 * fStack_2760;
    local_2768._0_4_ =
         fVar22 + fVar18 * fStack_2760 +
                  fVar44 * (float)local_2768._0_4_ + fVar14 * (float)local_2768._4_4_;
    local_2768._4_4_ = fVar23 + fVar19 * fStack_2760 + fVar37 + fVar15 * (float)local_2768._4_4_;
    fStack_2760 = fVar24 + fVar20 * fStack_2760 + fVar38 + fVar40;
    register0x000013cc = fVar25 + fVar42 + fVar39 + fVar41;
    auVar12 = vshufps_avx(local_2778,local_2778,0);
    auVar34 = vshufps_avx(local_2778,local_2778,0x55);
    auVar35 = vshufps_avx(local_2778,local_2778,0xaa);
    if (param_9[2] == 0) {
      uVar30 = 0xffffffff;
    }
    else {
      uVar30 = *(undefined4 *)(param_9[2] + 0x34);
    }
    auVar32 = vsubps_avx(_local_2768,_local_2758);
    auVar45._0_4_ = auVar32._0_4_ * auVar32._0_4_;
    auVar45._4_4_ = auVar32._4_4_ * auVar32._4_4_;
    auVar45._8_4_ = auVar32._8_4_ * auVar32._8_4_;
    auVar45._12_4_ = auVar32._12_4_ * auVar32._12_4_;
    auVar32 = vinsertps_avx(auVar45,auVar45,0x4c);
    auVar46._0_4_ = auVar45._0_4_ + auVar32._0_4_;
    auVar46._4_4_ = auVar45._4_4_ + auVar32._4_4_;
    auVar46._8_4_ = auVar45._8_4_ + auVar32._8_4_;
    auVar46._12_4_ = auVar45._12_4_ + auVar32._12_4_;
    auVar32 = vshufpd_avx(auVar46,auVar46,1);
    auVar32 = ZEXT416((uint)(auVar46._0_4_ + auVar32._0_4_));
    auVar32 = vsqrtss_avx(auVar32,auVar32);
    local_2698 = CONCAT44(auVar35._4_4_ * fVar19 + auVar34._4_4_ * fVar15 + fVar43 * auVar12._4_4_,
                          auVar35._0_4_ * fVar18 + auVar34._0_4_ * fVar14 + fVar44 * auVar12._0_4_);
    uStack_2690 = CONCAT44(auVar35._12_4_ * fVar21 +
                           auVar34._12_4_ * fVar17 + fVar11 * auVar12._12_4_,
                           auVar35._8_4_ * fVar20 + auVar34._8_4_ * fVar16 + fVar31 * auVar12._8_4_)
    ;
    uStack_2688 = CONCAT44(*param_7,auVar32._0_4_);
    uVar29 = 0;
    uStack_2680 = CONCAT44(uVar30,*param_8);
    local_2678[0] = (undefined8 *)((ulonglong)local_2678[0] & 0xffffffff00000000);
    local_2468[0] = 0;
    local_2254 = 0;
    local_26b8 = _local_2758;
    auStack_26a8 = _local_2768;
    local_2258 = local_273c;
    if (((local_273c != 0.0) || (NAN(local_273c))) || (-auVar32._0_4_ < *(float *)(param_9 + 1))) {
      if (*(char *)(param_2 + 1) == '\0') {
        auVar47 = vshufps_avx(ZEXT416((uint)local_273c),ZEXT416((uint)local_273c),0);
        auVar36._0_4_ = auVar47._0_4_ * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 10);
        auVar36._4_4_ =
             auVar47._4_4_ * *(float *)((longlong)param_1 + 100) +
             *(float *)((longlong)param_1 + 0x54);
        auVar36._8_4_ = auVar47._8_4_ * *(float *)(param_1 + 0xd) + *(float *)(param_1 + 0xb);
        auVar36._12_4_ =
             auVar47._12_4_ * *(float *)((longlong)param_1 + 0x6c) +
             *(float *)((longlong)param_1 + 0x5c);
        fVar37 = *(float *)(param_1 + 4);
        fVar38 = *(float *)((longlong)param_1 + 0x24);
        fVar39 = *(float *)(param_1 + 5);
        fVar40 = *(float *)((longlong)param_1 + 0x2c);
        auVar34 = vsubps_avx(ZEXT816(0) << 0x20,local_2778);
        auVar47 = vdpps_avx(auVar34,*(undefined1 (*) [16])(param_1 + 4),0x7f);
        fVar41 = *(float *)(param_1 + 6);
        fVar42 = *(float *)((longlong)param_1 + 0x34);
        auVar12 = vdpps_avx(auVar34,*(undefined1 (*) [16])(param_1 + 6),0x7f);
        fVar1 = *(float *)(param_1 + 7);
        auVar47 = vblendps_avx(auVar47,auVar12,2);
        auVar12 = vdpps_avx(auVar34,*(undefined1 (*) [16])(param_1 + 8),0x7f);
        fVar2 = *(float *)((longlong)param_1 + 0x3c);
        local_2798 = vblendps_avx(auVar12,auVar47,3);
        fVar3 = *(float *)(param_1 + 8);
        fVar4 = *(float *)((longlong)param_1 + 0x44);
        fVar5 = *(float *)(param_1 + 9);
        fVar6 = *(float *)((longlong)param_1 + 0x4c);
        local_26f8._4_4_ = fVar40 * fVar23 + fVar39 * fVar19 + fVar43 * fVar37 + fVar15 * fVar38;
        local_26f8._0_4_ = fVar40 * fVar22 + fVar39 * fVar18 + fVar44 * fVar37 + fVar14 * fVar38;
        fStack_26f0 = fVar40 * fVar24 + fVar39 * fVar20 + fVar31 * fVar37 + fVar16 * fVar38;
        fStack_26ec = fVar40 * fVar25 + fVar39 * fVar21 + fVar11 * fVar37 + fVar17 * fVar38;
        local_26e8 = fVar2 * fVar22 + fVar1 * fVar18 + fVar42 * fVar14 + fVar41 * fVar44;
        fStack_26e4 = fVar2 * fVar23 + fVar1 * fVar19 + fVar42 * fVar15 + fVar41 * fVar43;
        fStack_26e0 = fVar2 * fVar24 + fVar1 * fVar20 + fVar42 * fVar16 + fVar41 * fVar31;
        fStack_26dc = fVar2 * fVar25 + fVar1 * fVar21 + fVar42 * fVar17 + fVar41 * fVar11;
        local_26d8 = fVar6 * fVar22 + fVar5 * fVar18 + fVar3 * fVar44 + fVar14 * fVar4;
        fStack_26d4 = fVar6 * fVar23 + fVar5 * fVar19 + fVar3 * fVar43 + fVar15 * fVar4;
        fStack_26d0 = fVar6 * fVar24 + fVar5 * fVar20 + fVar3 * fVar31 + fVar16 * fVar4;
        fStack_26cc = fVar6 * fVar25 + fVar5 * fVar21 + fVar3 * fVar11 + fVar17 * fVar4;
        auVar47 = vshufps_avx(auVar36,auVar36,0);
        auVar12 = vshufps_avx(auVar36,auVar36,0x55);
        auVar34 = vshufps_avx(auVar36,auVar36,0xaa);
        local_26c8 = fVar22 + fVar18 * auVar34._0_4_ +
                              fVar44 * auVar47._0_4_ + fVar14 * auVar12._0_4_;
        fStack_26c4 = fVar23 + fVar19 * auVar34._4_4_ +
                               fVar43 * auVar47._4_4_ + fVar15 * auVar12._4_4_;
        fStack_26c0 = fVar24 + fVar20 * auVar34._8_4_ +
                               fVar31 * auVar47._8_4_ + fVar16 * auVar12._8_4_;
        fStack_26bc = fVar25 + fVar21 * auVar34._12_4_ +
                               fVar11 * auVar47._12_4_ + fVar17 * auVar12._12_4_;
        local_2788 = param_1[2];
        uStack_2780 = param_1[3];
        local_2810 = local_2678;
        uVar10 = (ulonglong)local_2708 >> 0x20;
        local_2708 = (float *)CONCAT44((int)uVar10,0xffffffff);
        local_2818 = (float *)local_26f8;
        (**(code **)(*local_27c8 + 0x58))(local_27c8,&local_2708,local_2798,&local_2788);
        local_27a8 = *puVar26;
        uStack_27a0 = puVar26[1];
        local_27b8 = local_2778._0_8_;
        uStack_27b0 = local_2778._8_8_;
        local_26f8._0_4_ = 0xffffffff;
        local_2818 = param_6;
        local_2810 = (undefined8 **)local_2468;
        (**(code **)(*local_27c0 + 0x58))(local_27c0,local_26f8,&local_27b8,&local_27a8);
      }
      uVar29 = (**(code **)(*param_9 + 0x28))(param_9,local_26b8);
      auVar47 = in_ZMM10._0_16_;
    }
  }
LAB_1400ee933:
  if (local_27d8 != (undefined1 (*) [16])0x0) {
    uVar10 = rdtsc();
    auVar12 = vpinsrq_avx(auVar47,uVar10 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)uVar29 >> 0x20),(int)uVar10),1);
    auVar47 = vmovntdq_avx(SUB6416(ZEXT864(0x14139a8ae),0));
    *local_27d8 = auVar47;
    auVar47 = vmovntdq_avx(auVar12);
    local_27d8[1] = auVar47;
  }
  if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_2838)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_f0 ^ (ulonglong)auStack_2838);
}

