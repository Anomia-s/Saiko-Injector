/**
 * Function: virtual_void_jph_physicssystem_jobfindccdcont
 * Address:  1400b0640
 * Signature: undefined virtual_void_jph_physicssystem_jobfindccdcont(void)
 * Body size: 1249 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void virtual_void_jph_physicssystem_jobfindccdcont(longlong param_1,uint *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong local_70;
  undefined1 local_68 [16];
  
  local_68 = in_ZMM6._0_16_;
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStack_188;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar10 == 0) {
LAB_1400b072e:
    auVar22 = in_ZMM6._0_16_;
    pauVar14 = (undefined1 (*) [16])0x0;
    lVar10 = *(longlong *)(param_1 + 0x20);
    uVar11 = *param_2;
    if (*(uint *)(lVar10 + 0x70) == uVar11) goto LAB_1400b0a99;
  }
  else {
    uVar11 = *(uint *)(lVar10 + 0x200020);
    if (0xffff < (ulonglong)uVar11) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_1400b072e;
    }
    *(uint *)(lVar10 + 0x200020) = uVar11 + 1;
    pauVar14 = (undefined1 (*) [16])(lVar10 + (ulonglong)uVar11 * 0x20 + 0x20);
    uVar13 = rdtsc();
    uVar13 = uVar13 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar10 >> 0x20),(int)uVar13);
    in_ZMM6 = ZEXT864(uVar13);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar13;
    lVar10 = *(longlong *)(param_1 + 0x20);
    uVar11 = *param_2;
    if (*(uint *)(lVar10 + 0x70) == uVar11) goto LAB_1400b0a99;
  }
  auVar22 = in_ZMM6._0_16_;
  puVar2 = *(undefined8 **)
            (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x10) +
            (ulonglong)(uVar11 & 0x7fffff) * 8);
  if ((puVar2[9] != 0 && *(char *)((longlong)puVar2 + 0x76) == '\0') &&
     (uVar13 = (ulonglong)*(uint *)(puVar2[9] + 0x70), uVar13 != 0xffffffff)) {
    lVar12 = (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x11f0) + uVar13 * 4);
    if ((-1 < lVar12) &&
       ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x11d8), lVar3 != 0 &&
        (*(uint *)(lVar3 + 0x30 + lVar12 * 0x90) < *(uint *)(*(longlong *)(param_1 + 0x18) + 0x30)))
       )) goto LAB_1400b0a99;
  }
  plVar4 = *(longlong **)(lVar10 + 0x58);
  lVar10 = lVar10 + 0x58;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)puVar2[0xb];
    if (plVar4 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar4 + 0x18))(plVar4,puVar2 + 0xb,lVar10);
      auVar22 = in_ZMM6._0_16_;
      cVar9 = (char)lVar10;
      goto joined_r0x0001400b07f1;
    }
  }
  else {
    lVar10 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar10);
    auVar22 = in_ZMM6._0_16_;
    cVar9 = (char)lVar10;
joined_r0x0001400b07f1:
    if (cVar9 == '\0') goto LAB_1400b0a99;
  }
  if ((*(byte *)((longlong)puVar2 + 0x79) & 1) == 0) {
    auVar15._0_12_ = ZEXT812(0);
    auVar15._12_4_ = 0.0;
    if ((*(char *)(puVar2 + 0xf) == '\x02') &&
       (pfVar5 = (float *)puVar2[9], *(char *)(pfVar5 + 0x1e) == '\x01')) {
      auVar7 = vshufps_avx(ZEXT416(*(uint *)(param_1 + 0xf8)),ZEXT416(*(uint *)(param_1 + 0xf8)),0);
      auVar15._0_4_ = auVar7._0_4_ * *pfVar5;
      auVar15._4_4_ = auVar7._4_4_ * pfVar5[1];
      auVar15._8_4_ = auVar7._8_4_ * pfVar5[2];
      auVar15._12_4_ = auVar7._12_4_ * pfVar5[3];
    }
    auVar7 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0xa0),auVar15);
    auVar16._0_4_ = auVar7._0_4_ * auVar7._0_4_;
    auVar16._4_4_ = auVar7._4_4_ * auVar7._4_4_;
    auVar16._8_4_ = auVar7._8_4_ * auVar7._8_4_;
    auVar16._12_4_ = auVar7._12_4_ * auVar7._12_4_;
    auVar15 = vinsertps_avx(auVar16,auVar16,0x4c);
    auVar17._0_4_ = auVar16._0_4_ + auVar15._0_4_;
    auVar17._4_4_ = auVar16._4_4_ + auVar15._4_4_;
    auVar17._8_4_ = auVar16._8_4_ + auVar15._8_4_;
    auVar17._12_4_ = auVar16._12_4_ + auVar15._12_4_;
    auVar15 = vshufpd_avx(auVar17,auVar17,1);
    lVar10 = *(longlong *)(param_1 + 0x18);
    if (*(float *)(lVar10 + 0x44) <= auVar17._0_4_ + auVar15._0_4_) {
      auVar15 = *(undefined1 (*) [16])(param_1 + 0x30);
      auVar8 = vsubps_avx(*(undefined1 (*) [16])(puVar2 + 4),auVar15);
      auVar18._0_4_ = auVar15._0_4_ + *(float *)(puVar2 + 6);
      auVar18._4_4_ = auVar15._4_4_ + *(float *)((longlong)puVar2 + 0x34);
      auVar18._8_4_ = auVar15._8_4_ + *(float *)(puVar2 + 7);
      auVar18._12_4_ = auVar15._12_4_ + *(float *)((longlong)puVar2 + 0x3c);
      auVar19._0_12_ = ZEXT812(0);
      auVar19._12_4_ = 0;
      auVar15 = vsubps_avx(auVar19,auVar7);
      auVar15 = vmaxps_avx(auVar15,auVar7);
      auVar6 = vcmpps_avx(auVar15,_DAT_140de3630,2);
      auVar20._8_4_ = 0x3f800000;
      auVar20._0_8_ = 0x3f8000003f800000;
      auVar20._12_4_ = 0x3f800000;
      auVar15 = vdivps_avx(auVar20,auVar7);
      auVar16 = vblendvps_avx(auVar15,auVar20,auVar6);
      auVar15 = *(undefined1 (*) [16])(param_1 + 0x90);
      auVar17 = vsubps_avx(auVar8,auVar15);
      auVar24._0_4_ = auVar17._0_4_ * auVar16._0_4_;
      auVar24._4_4_ = auVar17._4_4_ * auVar16._4_4_;
      auVar24._8_4_ = auVar17._8_4_ * auVar16._8_4_;
      auVar24._12_4_ = auVar17._12_4_ * auVar16._12_4_;
      auVar17 = vsubps_avx(auVar18,auVar15);
      auVar21._0_4_ = auVar17._0_4_ * auVar16._0_4_;
      auVar21._4_4_ = auVar17._4_4_ * auVar16._4_4_;
      auVar21._8_4_ = auVar17._8_4_ * auVar16._8_4_;
      auVar21._12_4_ = auVar17._12_4_ * auVar16._12_4_;
      auVar16 = vminps_avx(auVar24,auVar21);
      auVar16 = vblendvps_avx(auVar16,_DAT_140dc43a0,auVar6);
      auVar17 = vmaxps_avx(auVar24,auVar21);
      auVar25._8_4_ = 0x7f7fffff;
      auVar25._0_8_ = 0x7f7fffff7f7fffff;
      auVar25._12_4_ = 0x7f7fffff;
      auVar17 = vblendvps_avx(auVar17,auVar25,auVar6);
      auVar20 = vshufps_avx(auVar16,auVar16,9);
      auVar16 = vmaxps_avx(auVar16,auVar20);
      auVar20 = vshufps_avx(auVar16,auVar16,0x52);
      auVar21 = vmaxps_avx(auVar16,auVar20);
      auVar16 = vshufps_avx(auVar17,auVar17,9);
      auVar16 = vminps_avx(auVar17,auVar16);
      auVar17 = vshufps_avx(auVar16,auVar16,0x52);
      auVar17 = vminps_avx(auVar16,auVar17);
      auVar16 = vcmpps_avx(auVar17,auVar21,1);
      auVar17 = vcmpps_avx(auVar17,auVar19,1);
      auVar20 = vcmpps_avx(auVar18,auVar15,1);
      auVar15 = vcmpps_avx(auVar15,auVar8,1);
      auVar15 = vorps_avx(auVar15,auVar20);
      auVar15 = vandps_avx(auVar6,auVar15);
      auVar15 = vorps_avx(auVar15,auVar17);
      auVar15 = vorps_avx(auVar16,auVar15);
      auVar16 = vshufps_avx(auVar15,auVar15,0x55);
      auVar15 = vorps_avx(auVar16,auVar15);
      auVar16 = vshufps_avx(auVar15,auVar15,0xaa);
      auVar15 = vorps_avx(auVar16,auVar15);
      auVar15 = vblendvps_avx(auVar21,auVar25,auVar15);
      auVar16 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 8)),ZEXT416(0x800000));
      if (auVar15._0_4_ <= auVar16._0_4_) {
        *(uint *)(*(longlong *)(param_1 + 0xe0) + 8) = *(uint *)(param_1 + 8);
        *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + 0x19) = 0;
        *(undefined8 **)(*(longlong *)(param_1 + 0xd8) + 0x28) = puVar2;
        *(undefined1 (*) [16])(*(longlong *)(param_1 + 0xd0) + 0x10) = auVar7;
        local_f8 = *(undefined8 *)(param_1 + 0x50);
        uStack_f0 = *(undefined8 *)(param_1 + 0x58);
        local_108[0] = *(undefined8 *)(param_1 + 0x40);
        local_e8 = *(undefined8 *)(param_1 + 0x60);
        uStack_e0 = *(undefined8 *)(param_1 + 0x68);
        uStack_d8 = *(undefined8 *)(param_1 + 0x70);
        uStack_d0 = *(undefined8 *)(param_1 + 0x78);
        local_c8 = *(undefined8 *)(param_1 + 0x80);
        uStack_c0 = *(undefined8 *)(param_1 + 0x88);
        uStack_b8 = *(undefined8 *)(param_1 + 0x90);
        uStack_b0 = *(undefined8 *)(param_1 + 0x98);
        local_98 = *(undefined8 *)(param_1 + 0xb0);
        uStack_90 = *(undefined8 *)(param_1 + 0xb8);
        uStack_88 = *(undefined8 *)(param_1 + 0xc0);
        uStack_80 = *(undefined8 *)(param_1 + 200);
        local_128 = (undefined8 *)puVar2[8];
        local_148 = *puVar2;
        uStack_140 = puVar2[1];
        uStack_138 = puVar2[2];
        uStack_130 = puVar2[3];
        if (local_128 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_128 + 1) = *(int *)(local_128 + 1) + 1;
          UNLOCK();
        }
        local_120 = 0x3f8000003f800000;
        local_118 = 0x3f800000;
        local_114 = *(undefined4 *)(puVar2 + 0xe);
        local_110 = 0xffffffff;
        local_160 = *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x10);
        local_168 = *(undefined8 *)(param_1 + 0xe0);
        local_158 = *(undefined8 *)(param_1 + 0x90);
        uStack_150 = *(undefined8 *)(param_1 + 0x98);
        auVar23 = ZEXT1664(auVar22);
        local_a8 = auVar7;
        FUN_14038d8e0(&local_148,local_108,*(undefined8 *)(param_1 + 0xd0),&local_158);
        auVar22 = auVar23._0_16_;
        if (local_128 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_128 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_128)(local_128,1);
            auVar22 = auVar23._0_16_;
          }
        }
        lVar10 = *(longlong *)(param_1 + 0xe0);
        if (*(char *)(lVar10 + 0x19) == '\0') {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar10 + 8);
        }
      }
    }
  }
LAB_1400b0a99:
  if (pauVar14 != (undefined1 (*) [16])0x0) {
    uVar13 = rdtsc();
    auVar15 = vpinsrq_avx(auVar22,uVar13 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)lVar10 >> 0x20),(int)uVar13),1);
    auVar22 = vmovntdq_avx(SUB6416(ZEXT864(0x14139a644),0));
    *pauVar14 = auVar22;
    auVar22 = vmovntdq_avx(auVar15);
    pauVar14[1] = auVar22;
  }
  if (DAT_1414ef3c0 == (local_70 ^ (ulonglong)auStack_188)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_70 ^ (ulonglong)auStack_188);
}

