/**
 * Function: invalid_top_radius
 * Address:  1402f70d0
 * Signature: undefined __thiscall invalid_top_radius(void * this)
 * Body size: 880 bytes
 */


void * __thiscall invalid_top_radius(void *this,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar14;
  float fVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  *(undefined4 *)((longlong)this + 8) = 0;
                    /* inlined constructor or destructor (approx location) for JPH::Shape */
  *(Shape_vftable **)this = &JPH::Shape::vftable;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined2 *)((longlong)this + 0x18) = 0x400;
                    /* inlined constructor or destructor (approx location) for JPH::ConvexShape */
  *(ConvexShape_vftable **)this = &JPH::ConvexShape::vftable;
  lVar2 = *(longlong *)(param_2 + 0x40);
  *(longlong *)((longlong)this + 0x20) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)((longlong)this + 0x28) = *(undefined4 *)(param_2 + 0x48);
  *(undefined ***)this = &PTR_FUN_140e08fe0;
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  *(undefined1 (*) [16])((longlong)this + 0x30) = auVar11;
  fVar10 = *(float *)(param_2 + 0x54);
  *(float *)((longlong)this + 0x40) = fVar10;
  fVar14 = *(float *)(param_2 + 0x58);
  *(float *)((longlong)this + 0x44) = fVar14;
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined1 (*) [16])((longlong)this + 0x48) = auVar11;
  *(undefined4 *)((longlong)this + 0x58) = 0;
  if (fVar10 <= 0.0) {
    pcVar4 = "Invalid top radius";
  }
  else if (fVar14 <= 0.0) {
    pcVar4 = "Invalid bottom radius";
  }
  else {
    fVar15 = *(float *)(param_2 + 0x50);
    if (fVar15 <= 0.0) {
      pcVar4 = "Invalid height";
    }
    else {
      auVar11 = vmaxss_avx(ZEXT416(*(uint *)(param_2 + 0x58)),ZEXT416(*(uint *)(param_2 + 0x54)));
      auVar13 = vminss_avx(ZEXT416(*(uint *)(param_2 + 0x58)),ZEXT416(*(uint *)(param_2 + 0x54)));
      auVar13 = vfmadd231ss_fma(auVar13,ZEXT416((uint)fVar15),ZEXT416(0x40000000));
      if (auVar11._0_4_ < auVar13._0_4_) {
        fVar8 = fVar14 - fVar10;
        auVar11 = vfmadd231ss_fma(ZEXT416((uint)fVar15),ZEXT416((uint)fVar8),
                                  SUB6416(ZEXT464(0x3f000000),0));
        fVar15 = auVar11._0_4_;
        *(float *)((longlong)this + 0x48) = fVar15;
        auVar11 = vfmsub213ss_fma(SUB6416(ZEXT464(0x3f000000),0),ZEXT416((uint)fVar8),
                                  ZEXT416(*(uint *)(param_2 + 0x50)));
        *(float *)((longlong)this + 0x4c) = auVar11._0_4_;
        fVar8 = fVar8 / (fVar15 - auVar11._0_4_);
        auVar7 = vshufps_avx(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),0);
        auVar12._8_4_ = 0x7fffffff;
        auVar12._0_8_ = 0x7fffffff7fffffff;
        auVar12._12_4_ = 0x7fffffff;
        auVar11 = vandps_avx(auVar7,auVar12);
        auVar23._8_4_ = 0x3f800000;
        auVar23._0_8_ = 0x3f8000003f800000;
        auVar23._12_4_ = 0x3f800000;
        auVar13 = vminps_avx(auVar11,auVar23);
        auVar25._0_4_ = auVar13._0_4_ * auVar13._0_4_;
        auVar25._4_4_ = auVar13._4_4_ * auVar13._4_4_;
        auVar25._8_4_ = auVar13._8_4_ * auVar13._8_4_;
        auVar25._12_4_ = auVar13._12_4_ * auVar13._12_4_;
        auVar11 = vsubps_avx(auVar23,auVar13);
        auVar9._8_4_ = 0x3f000000;
        auVar9._0_8_ = 0x3f0000003f000000;
        auVar9._12_4_ = 0x3f000000;
        auVar24._0_4_ = auVar11._0_4_ * 0.5;
        auVar24._4_4_ = auVar11._4_4_ * 0.5;
        auVar24._8_4_ = auVar11._8_4_ * 0.5;
        auVar24._12_4_ = auVar11._12_4_ * 0.5;
        auVar5 = vcmpps_avx(auVar9,auVar13,1);
        auVar11 = vblendvps_avx(auVar25,auVar24,auVar5);
        auVar9 = vinsertps_avx(ZEXT416((uint)fVar10),
                               ZEXT416((uint)(*(float *)(param_2 + 0x50) - fVar15)),0x1d);
        auVar6 = vsqrtps_avx(auVar24);
        auVar13 = vblendvps_avx(auVar13,auVar6,auVar5);
        fVar15 = auVar11._0_4_;
        fVar16 = auVar11._4_4_;
        fVar18 = auVar11._8_4_;
        fVar19 = auVar11._12_4_;
        *(undefined1 (*) [16])((longlong)this + 0x30) = auVar9;
        auVar9 = vminss_avx(ZEXT416((uint)fVar14),ZEXT416((uint)fVar10));
        auVar6._0_4_ = auVar13._0_4_ +
                       auVar13._0_4_ *
                       fVar15 * (fVar15 * (fVar15 * (fVar15 * (fVar15 * 0.0421632 + 0.024181312) +
                                                    0.045470025) + 0.074953005) + 0.16666752);
        auVar6._4_4_ = auVar13._4_4_ +
                       auVar13._4_4_ *
                       fVar16 * (fVar16 * (fVar16 * (fVar16 * (fVar16 * 0.0421632 + 0.024181312) +
                                                    0.045470025) + 0.074953005) + 0.16666752);
        auVar6._8_4_ = auVar13._8_4_ +
                       auVar13._8_4_ *
                       fVar18 * (fVar18 * (fVar18 * (fVar18 * (fVar18 * 0.0421632 + 0.024181312) +
                                                    0.045470025) + 0.074953005) + 0.16666752);
        auVar6._12_4_ =
             auVar13._12_4_ +
             auVar13._12_4_ *
             fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * 0.0421632 + 0.024181312) + 0.045470025
                                          ) + 0.074953005) + 0.16666752);
        auVar22._0_4_ = auVar6._0_4_ + auVar6._0_4_;
        auVar22._4_4_ = auVar6._4_4_ + auVar6._4_4_;
        auVar22._8_4_ = auVar6._8_4_ + auVar6._8_4_;
        auVar22._12_4_ = auVar6._12_4_ + auVar6._12_4_;
        auVar13 = vsubps_avx(SUB6416(ZEXT464(0x3fc90fdb),0),auVar22);
        auVar11 = vandps_avx(auVar7,ZEXT416(0x80000000));
        auVar13 = vblendvps_avx(auVar6,auVar13,auVar5);
        auVar7._0_4_ = auVar11._0_4_ ^ auVar13._0_4_;
        auVar7._4_4_ = auVar11._4_4_ ^ auVar13._4_4_;
        auVar7._8_4_ = auVar11._8_4_ ^ auVar13._8_4_;
        auVar7._12_4_ = auVar11._12_4_ ^ auVar13._12_4_;
        auVar11 = vshufps_avx(auVar7,auVar7,0);
        auVar11 = vandps_avx(auVar11,auVar12);
        auVar17._0_4_ = (int)(auVar11._0_4_ * 0.63661975 + 0.5);
        auVar17._4_4_ = (int)(auVar11._4_4_ * 0.63661975 + 0.5);
        auVar17._8_4_ = (int)(auVar11._8_4_ * 0.63661975 + 0.5);
        auVar17._12_4_ = (int)(auVar11._12_4_ * 0.63661975 + 0.5);
        auVar13 = vcvtdq2ps_avx(auVar17);
        fVar10 = auVar13._0_4_;
        fVar14 = auVar13._4_4_;
        fVar15 = auVar13._8_4_;
        fVar16 = auVar13._12_4_;
        fVar10 = auVar11._0_4_ + fVar10 * -1.5703125 + fVar10 * -0.0004837513 +
                 fVar10 * -7.54979e-08;
        fVar14 = auVar11._4_4_ + fVar14 * -1.5703125 + fVar14 * -0.0004837513 +
                 fVar14 * -7.54979e-08;
        fVar15 = auVar11._8_4_ + fVar15 * -1.5703125 + fVar15 * -0.0004837513 +
                 fVar15 * -7.54979e-08;
        fVar16 = auVar11._12_4_ + fVar16 * -1.5703125 + fVar16 * -0.0004837513 +
                 fVar16 * -7.54979e-08;
        fVar18 = fVar10 * fVar10;
        fVar19 = fVar14 * fVar14;
        fVar20 = fVar15 * fVar15;
        fVar21 = fVar16 * fVar16;
        *(int *)((longlong)this + 0x50) = auVar9._0_4_;
        *(float *)((longlong)this + 0x54) = fVar8;
        auVar11 = vandps_avx(auVar7,ZEXT416(0x80000000));
        auVar5._0_4_ = fVar10 + fVar10 * fVar18 * (fVar18 * (fVar18 * (fVar18 * (fVar18 * (fVar18 * 
                                                  0.009385402 + 0.0031199222) + 0.024430135) +
                                                  0.05341128) + 0.133388) + 0.33333156);
        auVar5._4_4_ = fVar14 + fVar14 * fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * 
                                                  0.009385402 + 0.0031199222) + 0.024430135) +
                                                  0.05341128) + 0.133388) + 0.33333156);
        auVar5._8_4_ = fVar15 + fVar15 * fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * 
                                                  0.009385402 + 0.0031199222) + 0.024430135) +
                                                  0.05341128) + 0.133388) + 0.33333156);
        auVar5._12_4_ =
             fVar16 + fVar16 * fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * 
                                                  0.009385402 + 0.0031199222) + 0.024430135) +
                                                  0.05341128) + 0.133388) + 0.33333156);
        auVar9 = vpslld_avx(auVar17,0x1f);
        auVar13._8_4_ = 0xbf800000;
        auVar13._0_8_ = 0xbf800000bf800000;
        auVar13._12_4_ = 0xbf800000;
        auVar13 = vdivps_avx(auVar13,auVar5);
        auVar13 = vblendvps_avx(auVar5,auVar13,auVar9);
        *(uint *)((longlong)this + 0x58) = auVar11._0_4_ ^ auVar13._0_4_;
        LOCK();
        *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) + 1;
        UNLOCK();
        if ((char)param_3[4] == '\x02') {
          if (0xf < (ulonglong)param_3[3]) {
            (*DAT_14151f538)(*param_3);
          }
          param_3[2] = 0;
          param_3[3] = 0xf;
        }
        else if (((char)param_3[4] == '\x01') &&
                (puVar3 = (undefined8 *)*param_3, puVar3 != (undefined8 *)0x0)) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        *param_3 = (longlong)this;
        *(undefined1 *)(param_3 + 4) = 1;
        return this;
      }
      pcVar4 = "One sphere embedded in other sphere, please use sphere shape instead";
    }
  }
  FUN_1400e7cd0(param_3,pcVar4);
  return this;
}

