/**
 * Function: void_jph_physicssystem_processbodypaircontact
 * Address:  1400a7db0
 * Signature: void __fastcall void_jph_physicssystem_processbodypaircontact(longlong param_1, undefined1[16] * param_2, uint * param_3)
 * Body size: 2162 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void void_jph_physicssystem_processbodypaircontact
               (longlong param_1,undefined1 (*param_2) [16],uint *param_3)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 *puVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  int iVar18;
  undefined4 uVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStack_10e78 [32];
  undefined1 (*pauStack_10e58) [16];
  byte *pbStack_10e50;
  undefined8 *puStack_10e48;
  ShapeFilter_vftable **ppSStack_10e40;
  undefined1 (*pauStack_10e30) [16];
  longlong lStack_10e28;
  undefined1 (*pauStack_10e20) [16];
  undefined8 uStack_10e18;
  undefined8 uStack_10e10;
  undefined8 uStack_10e08;
  undefined8 uStack_10e00;
  ShapeFilter_vftable *pSStack_10df8;
  undefined4 uStack_10df0;
  ShapeFilter_vftable **ppSStack_10de8;
  longlong lStack_10de0;
  undefined1 (*pauStack_10dd8) [16];
  undefined1 (*pauStack_10dd0) [16];
  ShapeFilter_vftable *pSStack_10dc8;
  undefined4 uStack_10dc0;
  byte abStack_10db8 [4];
  undefined8 uStack_10db4;
  undefined1 auStack_10da8 [13];
  undefined3 uStack_10d9b;
  undefined4 uStack_10d98;
  undefined1 uStack_10d94;
  undefined4 uStack_10d90;
  byte bStack_10d7a;
  char cStack_10d79;
  undefined8 uStack_10d78;
  undefined4 uStack_10d70;
  undefined8 uStack_10d68;
  longlong lStack_10d60;
  undefined1 (*pauStack_10d58) [16];
  undefined1 (*pauStack_10d50) [16];
  undefined1 (*pauStack_10d48) [16];
  longlong lStack_10d40;
  undefined4 uStack_10d38;
  undefined1 auStack_108e8 [67520];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  undefined1 local_98 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x1400a7dc6;
  local_98 = in_ZMM6._0_16_;
  local_a0 = DAT_1414ef3c0 ^ (ulonglong)auStack_10e78;
  pauStack_10e30 = param_2;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar17 == 0) {
LAB_1400a7ea4:
    pauVar16 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar2 = *(uint *)(lVar17 + 0x200020);
    if (0xffff < (ulonglong)uVar2) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_1400a7ea4;
    }
    *(uint *)(lVar17 + 0x200020) = uVar2 + 1;
    pauVar16 = (undefined1 (*) [16])(lVar17 + (ulonglong)uVar2 * 0x20 + 0x20);
    uVar10 = rdtsc();
    in_ZMM6 = ZEXT864(uVar10 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)lVar17 >> 0x20),(int)uVar10));
  }
  auVar22 = in_ZMM6._0_16_;
  lVar17 = param_1 + 0x10;
  pauVar20 = *(undefined1 (**) [16])
              (*(longlong *)(param_1 + 0x20) + (ulonglong)(param_3[1] & 0x7fffff) * 8);
  if (pauVar20[7][6] == '\x01') {
    uVar10 = *(ulonglong *)(pauVar20[4] + 8);
    if ((uVar10 == 0) || (*(int *)(uVar10 + 0x70) == -1)) {
      uVar10 = FUN_1400e4520(lVar17,param_3 + 1,1);
      auVar22 = in_ZMM6._0_16_;
    }
    goto LAB_1400a8594;
  }
  pauVar21 = *(undefined1 (**) [16])
              (*(longlong *)(param_1 + 0x20) + (ulonglong)(*param_3 & 0x7fffff) * 8);
  if (((byte)pauVar21[7][8] < (byte)pauVar20[7][8]) ||
     ((param_3[1] < *param_3 && (pauVar21[7][8] == pauVar20[7][8])))) {
    cStack_10d79 = '\0';
    bStack_10d7a = 0;
    pauVar14 = pauVar20;
    pauVar20 = pauVar21;
    if (*(char *)(param_1 + 0x2b2) == '\x01') goto LAB_1400a7f57;
LAB_1400a7fb2:
    lVar11 = FUN_1400d5850(param_1 + 0x2b8,pauStack_10e30,pauVar14,pauVar21);
    auVar22 = in_ZMM6._0_16_;
    uVar10 = 0;
    if (lVar11 == 0) goto LAB_1400a8594;
    uStack_10db4 = 0x38d1b71738d1b717;
    auVar22._12_4_ = 0;
    auVar22._0_12_ = ZEXT812(0);
    auVar22 = auVar22 << 0x20;
    uStack_10d94 = 0;
    abStack_10db8[1] = 0;
    abStack_10db8[0] = *(byte *)(param_1 + 0x2b6) ^ 1;
    uStack_10d98 = 0;
    if (((pauVar14[7][9] & 1) == 0) && ((pauVar21[7][9] & 1) == 0)) {
      uStack_10d98 = *(undefined4 *)(param_1 + 0x270);
    }
    if (pauVar14[7][8] != '\0') {
      auVar22 = **(undefined1 (**) [16])(pauVar14[4] + 8);
    }
    auVar24._0_12_ = ZEXT812(0);
    auVar24._12_4_ = 0;
    auVar29._0_12_ = ZEXT812(0);
    auVar29._12_4_ = 0;
    if (pauVar21[7][8] != '\0') {
      auVar29 = **(undefined1 (**) [16])(pauVar21[4] + 8);
    }
    auVar22 = vsubps_avx(auVar22,auVar29);
    auStack_10da8 = auVar22._0_13_;
    uStack_10d9b = auVar22._13_3_;
    uStack_10d90 = *(undefined4 *)(param_1 + 0x298);
    lStack_10de0 = *(longlong *)(param_1 + 0x218);
    uStack_10df0 = 0xffffffff;
    pSStack_10df8 = (ShapeFilter_vftable *)&PTR_vfunction1_140de3740;
    pSStack_10dc8 = &JPH::ShapeFilter::vftable;
    uStack_10dc0 = 0xffffffff;
    ppSStack_10e40 = &pSStack_10df8;
    if (lStack_10de0 == 0) {
      ppSStack_10e40 = &pSStack_10dc8;
    }
    auVar27 = vsubps_avx(auVar24,*pauVar14);
    auVar22 = pauVar14[1];
    fVar5 = auVar22._0_4_;
    auVar30._0_4_ = fVar5 + fVar5;
    fVar6 = auVar22._4_4_;
    auVar30._4_4_ = fVar6 + fVar6;
    fVar7 = auVar22._8_4_;
    auVar30._8_4_ = fVar7 + fVar7;
    fVar8 = auVar22._12_4_;
    auVar30._12_4_ = fVar8 + fVar8;
    auVar29 = vshufps_avx(auVar30,auVar30,0xc9);
    auVar22 = vshufps_avx(auVar22,auVar22,0xd2);
    auVar24 = vshufps_avx(auVar30,auVar30,0xd2);
    fVar1 = *(float *)(pauVar14[1] + 0xc);
    auVar36._0_4_ = auVar22._0_4_ * auVar24._0_4_;
    auVar36._4_4_ = auVar22._4_4_ * auVar24._4_4_;
    auVar36._8_4_ = auVar22._8_4_ * auVar24._8_4_;
    auVar36._12_4_ = auVar22._12_4_ * auVar24._12_4_;
    auVar38._0_4_ = fVar5 * auVar30._0_4_;
    auVar38._4_4_ = fVar6 * auVar30._4_4_;
    auVar38._8_4_ = fVar7 * auVar30._8_4_;
    auVar38._12_4_ = fVar8 * auVar30._12_4_;
    auVar40._8_4_ = 0x3f800000;
    auVar40._0_8_ = 0x3f8000003f800000;
    auVar40._12_4_ = 0x3f800000;
    auVar23 = vshufps_avx(auVar38,auVar38,0xc9);
    auVar23 = vsubps_avx(auVar40,auVar23);
    auVar23 = vsubps_avx(auVar23,auVar36);
    auVar31._0_4_ = fVar1 * auVar29._0_4_ + auVar30._0_4_ * auVar22._0_4_;
    auVar31._4_4_ = fVar1 * auVar29._4_4_ + auVar30._4_4_ * auVar22._4_4_;
    auVar31._8_4_ = fVar1 * auVar29._8_4_ + auVar30._8_4_ * auVar22._8_4_;
    auVar31._12_4_ = fVar1 * auVar29._12_4_ + auVar30._12_4_ * auVar22._12_4_;
    auVar34._0_4_ = fVar1 * auVar24._0_4_;
    auVar34._4_4_ = fVar1 * auVar24._4_4_;
    auVar34._8_4_ = fVar1 * auVar24._8_4_;
    auVar34._12_4_ = fVar1 * auVar24._12_4_;
    auVar25._0_4_ = fVar5 * auVar29._0_4_;
    auVar25._4_4_ = fVar6 * auVar29._4_4_;
    auVar25._8_4_ = fVar7 * auVar29._8_4_;
    auVar25._12_4_ = fVar8 * auVar29._12_4_;
    auVar29 = vsubps_avx(auVar25,auVar34);
    auVar22 = vblendps_avx(auVar23,auVar31,2);
    local_e8 = vinsertps_avx(auVar22,auVar29,0xa8);
    auVar22 = vinsertps_avx(auVar29,auVar23,0x58);
    local_d8 = vblendps_avx(auVar22,auVar31,4);
    auVar22 = vinsertps_avx(auVar29,auVar31,8);
    local_c8 = vblendps_avx(auVar22,auVar23,4);
    local_b8 = 0;
    uStack_b0 = 0x3f80000000000000;
    auVar22 = pauVar21[1];
    fVar5 = auVar22._0_4_;
    auVar32._0_4_ = fVar5 + fVar5;
    fVar6 = auVar22._4_4_;
    auVar32._4_4_ = fVar6 + fVar6;
    fVar7 = auVar22._8_4_;
    auVar32._8_4_ = fVar7 + fVar7;
    fVar8 = auVar22._12_4_;
    auVar32._12_4_ = fVar8 + fVar8;
    auVar29 = vshufps_avx(auVar32,auVar32,0xc9);
    auVar22 = vshufps_avx(auVar22,auVar22,0xd2);
    auVar24 = vshufps_avx(auVar32,auVar32,0xd2);
    fVar1 = *(float *)(pauVar21[1] + 0xc);
    auVar37._0_4_ = auVar22._0_4_ * auVar24._0_4_;
    auVar37._4_4_ = auVar22._4_4_ * auVar24._4_4_;
    auVar37._8_4_ = auVar22._8_4_ * auVar24._8_4_;
    auVar37._12_4_ = auVar22._12_4_ * auVar24._12_4_;
    auVar39._0_4_ = fVar5 * auVar32._0_4_;
    auVar39._4_4_ = fVar6 * auVar32._4_4_;
    auVar39._8_4_ = fVar7 * auVar32._8_4_;
    auVar39._12_4_ = fVar8 * auVar32._12_4_;
    auVar23 = vshufps_avx(auVar39,auVar39,0xc9);
    auVar23 = vsubps_avx(auVar40,auVar23);
    auVar23 = vsubps_avx(auVar23,auVar37);
    auVar33._0_4_ = fVar1 * auVar29._0_4_ + auVar32._0_4_ * auVar22._0_4_;
    auVar33._4_4_ = fVar1 * auVar29._4_4_ + auVar32._4_4_ * auVar22._4_4_;
    auVar33._8_4_ = fVar1 * auVar29._8_4_ + auVar32._8_4_ * auVar22._8_4_;
    auVar33._12_4_ = fVar1 * auVar29._12_4_ + auVar32._12_4_ * auVar22._12_4_;
    auVar35._0_4_ = fVar1 * auVar24._0_4_;
    auVar35._4_4_ = fVar1 * auVar24._4_4_;
    auVar35._8_4_ = fVar1 * auVar24._8_4_;
    auVar35._12_4_ = fVar1 * auVar24._12_4_;
    auVar26._0_4_ = fVar5 * auVar29._0_4_;
    auVar26._4_4_ = fVar6 * auVar29._4_4_;
    auVar26._8_4_ = fVar7 * auVar29._8_4_;
    auVar26._12_4_ = fVar8 * auVar29._12_4_;
    auVar29 = vsubps_avx(auVar26,auVar35);
    auVar22 = vblendps_avx(auVar23,auVar33,2);
    local_128 = vinsertps_avx(auVar22,auVar29,0xa8);
    auVar22 = vinsertps_avx(auVar29,auVar23,0x58);
    local_118 = vblendps_avx(auVar22,auVar33,4);
    auVar22 = vinsertps_avx(auVar29,auVar33,8);
    local_108 = vblendps_avx(auVar22,auVar23,4);
    auVar23._0_4_ = auVar27._0_4_ + *(float *)*pauVar21;
    auVar23._4_4_ = auVar27._4_4_ + *(float *)(*pauVar21 + 4);
    auVar23._8_4_ = auVar27._8_4_ + *(float *)(*pauVar21 + 8);
    auVar23._12_4_ = auVar27._12_4_ + *(float *)(*pauVar21 + 0xc);
    local_f8 = vinsertps_avx(auVar23,ZEXT416(0x3f800000),0x30);
    pauVar20 = pauVar21;
    ppSStack_10de8 = ppSStack_10e40;
    pauStack_10dd8 = pauVar14;
    pauStack_10dd0 = pauVar21;
    lStack_10d60 = param_1;
    if ((*(char *)(param_1 + 0x2b3) == '\x01') && ((pauVar14[7][9] & pauVar21[7][9] & 0x10) != 0)) {
      uStack_10d70 = 0x7f7fffff;
      uStack_10d68 = 0;
      uStack_10d78 = &PTR_FUN_140de2f10;
      pauStack_10d48 = (undefined1 (*) [16])CONCAT71(pauStack_10d48._1_7_,1);
      uStack_10d38 = 0;
      plVar3 = *(longlong **)(param_1 + 600);
      pauStack_10d58 = pauVar14;
      pauStack_10d50 = pauVar21;
      if (plVar3 == (longlong *)0x0) {
LAB_1400a8625:
        uStack_10d68 = 0;
        uStack_10d70 = 0x7f7fffff;
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      puStack_10e48 = &uStack_10d78;
      pbStack_10e50 = abStack_10db8;
      pauStack_10e58 = &local_128;
      lStack_10e28 = lVar17;
      pauStack_10e20 = pauVar16;
      (**(code **)(*plVar3 + 0x10))(plVar3,pauVar14,pauVar21,local_e8);
      if ((ulonglong)uStack_10d38 == 0) {
        uVar10 = (ulonglong)bStack_10d7a;
      }
      else {
        lVar17 = (ulonglong)uStack_10d38 * 0x860;
        puVar15 = auStack_108e8;
        do {
          auVar22 = *(undefined1 (*) [16])(puVar15 + -0x430);
          auVar27._0_4_ = auVar22._0_4_ * auVar22._0_4_;
          auVar27._4_4_ = auVar22._4_4_ * auVar22._4_4_;
          auVar27._8_4_ = auVar22._8_4_ * auVar22._8_4_;
          auVar27._12_4_ = auVar22._12_4_ * auVar22._12_4_;
          auVar29 = vinsertps_avx(auVar27,auVar27,0x4c);
          auVar28._0_4_ = auVar27._0_4_ + auVar29._0_4_;
          auVar28._4_4_ = auVar27._4_4_ + auVar29._4_4_;
          auVar28._8_4_ = auVar27._8_4_ + auVar29._8_4_;
          auVar28._12_4_ = auVar27._12_4_ + auVar29._12_4_;
          auVar29 = vshufpd_avx(auVar28,auVar28,1);
          auVar29 = ZEXT416((uint)(auVar28._0_4_ + auVar29._0_4_));
          auVar29 = vsqrtss_avx(auVar29,auVar29);
          auVar29 = vshufps_avx(auVar29,auVar29,0);
          auVar22 = vdivps_avx(auVar22,auVar29);
          *(undefined1 (*) [16])(puVar15 + -0x430) = auVar22;
          if (4 < *(uint *)(puVar15 + -0x410)) {
            uStack_10e08 = *(undefined8 *)(puVar15 + -0x440);
            uStack_10e00 = *(undefined8 *)(puVar15 + -0x438);
            uStack_10e18 = *(undefined8 *)(puVar15 + -0x430);
            uStack_10e10 = *(undefined8 *)(puVar15 + -0x428);
            FUN_140376700(&uStack_10e18,puVar15 + -0x410,puVar15,&uStack_10e08);
          }
          pauStack_10e58 = pauVar21;
          pbStack_10e50 = puVar15 + -0x440;
          uVar12 = bool_jph_contactconstraintmanager_addcontactc
                             (param_1 + 0x2b8,pauStack_10e30,lVar11,pauVar14);
          bStack_10d7a = (byte)uVar12 | bStack_10d7a;
          uVar10 = CONCAT71((int7)((ulonglong)uVar12 >> 8),bStack_10d7a);
          puVar15 = puVar15 + 0x860;
          lVar17 = lVar17 + -0x860;
        } while (lVar17 != 0);
      }
      auVar22 = in_ZMM6._0_16_;
      pauVar16 = pauStack_10e20;
      lVar17 = lStack_10e28;
      if ((char)uVar10 == '\0') goto LAB_1400a8594;
    }
    else {
      uStack_10d70 = 0x7f7fffff;
      uStack_10d68 = 0;
      uStack_10d78 = &PTR_vfunction3_140de2f40;
      pauStack_10d58 = pauStack_10e30;
      uStack_10d38 = CONCAT22(uStack_10d38._2_2_,1);
      plVar3 = *(longlong **)(param_1 + 600);
      pauStack_10d50 = pauVar14;
      pauStack_10d48 = pauVar21;
      lStack_10d40 = lVar11;
      if (plVar3 == (longlong *)0x0) goto LAB_1400a8625;
      puStack_10e48 = &uStack_10d78;
      pbStack_10e50 = abStack_10db8;
      pauStack_10e58 = &local_128;
      (**(code **)(*plVar3 + 0x10))(plVar3,pauVar14,pauVar21,local_e8);
      auVar22 = in_ZMM6._0_16_;
      bStack_10d7a = uStack_10d38._1_1_;
      if (uStack_10d38._1_1_ == 0) {
        uVar10 = 0;
        goto LAB_1400a8594;
      }
    }
  }
  else {
    cStack_10d79 = '\0';
    bStack_10d7a = 0;
    pauVar14 = pauVar21;
    pauVar21 = pauVar20;
    if (*(char *)(param_1 + 0x2b2) != '\x01') goto LAB_1400a7fb2;
LAB_1400a7f57:
    cStack_10d79 = '\0';
    bStack_10d7a = 0;
    pauVar21 = pauVar20;
    if (((pauVar14[7][9] & 8) != 0) || ((pauVar20[7][9] & 8) != 0)) goto LAB_1400a7fb2;
    pbStack_10e50 = &bStack_10d7a;
    pauStack_10e58 = (undefined1 (*) [16])&cStack_10d79;
    uVar10 = FUN_1400ce690(param_1 + 0x2b8,pauStack_10e30,pauVar14,pauVar20);
    auVar22 = in_ZMM6._0_16_;
    if (cStack_10d79 == '\0') goto LAB_1400a7fb2;
    if (bStack_10d7a != 1) goto LAB_1400a8594;
  }
  uStack_10d78 = (undefined **)0xffffffffffffffff;
  bVar9 = false;
  lVar11 = 0;
  if ((pauVar14[7][8] == '\x02') &&
     ((*(longlong *)(pauVar14[4] + 8) == 0 ||
      (bVar9 = false, *(int *)(*(longlong *)(pauVar14[4] + 8) + 0x70) == -1)))) {
    uStack_10d78 = (undefined **)CONCAT44(0xffffffff,*(undefined4 *)pauVar14[7]);
    lVar11 = 1;
    bVar9 = true;
  }
  if ((pauVar20[7][8] == '\x02') &&
     ((*(longlong *)(pauVar20[4] + 8) == 0 ||
      (*(int *)(*(longlong *)(pauVar20[4] + 8) + 0x70) == -1)))) {
    iVar18 = (int)lVar11 + 1;
    *(undefined4 *)((longlong)&uStack_10d78 + lVar11 * 4) = *(undefined4 *)pauVar20[7];
LAB_1400a8551:
    FUN_1400e4520(lVar17,&uStack_10d78,iVar18);
  }
  else {
    iVar18 = 1;
    if (bVar9) goto LAB_1400a8551;
  }
  uVar13 = 0xffffffff;
  uVar19 = 0xffffffff;
  if (*(longlong *)(pauVar20[4] + 8) != 0) {
    uVar19 = *(undefined4 *)(*(longlong *)(pauVar20[4] + 8) + 0x70);
  }
  if (*(longlong *)(pauVar14[4] + 8) != 0) {
    uVar13 = *(undefined4 *)(*(longlong *)(pauVar14[4] + 8) + 0x70);
  }
  uVar10 = FUN_1403744f0(param_1 + 0x3f0,uVar13,uVar19);
  auVar22 = in_ZMM6._0_16_;
LAB_1400a8594:
  if (pauVar16 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar29 = vpinsrq_avx(auVar22,uVar4 & 0xffffffff00000000 |
                                  CONCAT44((int)(uVar10 >> 0x20),(int)uVar4),1);
    auVar22 = vmovntdq_avx(SUB6416(ZEXT864(0x14139b11a),0));
    *pauVar16 = auVar22;
    auVar22 = vmovntdq_avx(auVar29);
    pauVar16[1] = auVar22;
  }
  if (DAT_1414ef3c0 != (local_a0 ^ (ulonglong)auStack_10e78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_a0 ^ (ulonglong)auStack_10e78);
  }
  return;
}

