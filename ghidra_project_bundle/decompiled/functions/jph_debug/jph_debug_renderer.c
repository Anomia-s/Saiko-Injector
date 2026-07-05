/**
 * Function: jph_debug_renderer
 * Address:  1400a18b0
 * Signature: undefined jph_debug_renderer(void)
 * Body size: 1696 bytes
 */


void jph_debug_renderer(ulonglong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_1e8;
  if (param_1 != 0x428050501) {
    (*(code *)PTR_vfunction4_1414f67c8)
              (
              "Version mismatch, make sure you compile the client code with the same Jolt version and compiler definitions!"
              );
    uVar4 = param_1 ^ 0x428050501;
    if ((uVar4 & 0xffffff) != 0) {
      local_1b8 = 1;
      local_1c0 = 5;
      local_1c8 = 5;
      (*(code *)PTR_vfunction4_1414f67c8)
                ("Client reported version %d.%d.%d, library version is %d.%d.%d.",
                 param_1 >> 0x10 & 0xff,param_1 >> 8 & 0xff,param_1 & 0xff);
    }
    if ((param_1 & 0x1000000) != 0) {
      (*(code *)PTR_vfunction4_1414f67c8)("Mismatching define %s.","JPH_DOUBLE_PRECISION");
    }
    if ((param_1 & 0x2000000) != 0) {
      (*(code *)PTR_vfunction4_1414f67c8)
                ("Mismatching define %s.","JPH_CROSS_PLATFORM_DETERMINISTIC");
    }
    if ((param_1 & 0x4000000) != 0) {
      (*(code *)PTR_vfunction4_1414f67c8)
                ("Mismatching define %s.","JPH_FLOATING_POINT_EXCEPTIONS_ENABLED");
    }
    if ((uVar4 & 0x8000000) != 0) {
      (*(code *)PTR_vfunction4_1414f67c8)("Mismatching define %s.","JPH_PROFILE_ENABLED");
    }
    if ((param_1 & 0x10000000) != 0) {
      (*(code *)PTR_vfunction4_1414f67c8)("Mismatching define %s.","JPH_EXTERNAL_PROFILE");
    }
    if ((uVar4 & 0x20000000) != 0) {
      (*(code *)PTR_vfunction4_1414f67c8)("Mismatching define %s.","JPH_DEBUG_RENDERER");
    }
    if ((param_1 & 0x40000000) != 0) {
      (*(code *)PTR_vfunction4_1414f67c8)("Mismatching define %s.","JPH_DISABLE_TEMP_ALLOCATOR");
    }
    if ((int)param_1 < 0) {
      (*(code *)PTR_vfunction4_1414f67c8)("Mismatching define %s.","JPH_DISABLE_CUSTOM_ALLOCATOR");
    }
    if ((param_1 >> 0x20 & 1) != 0) {
      (*(code *)PTR_vfunction4_1414f67c8)("Mismatching define %s.","JPH_OBJECT_LAYER_BITS");
    }
    if ((param_1 >> 0x21 & 1) != 0) {
      (*(code *)PTR_vfunction4_1414f67c8)("Mismatching define %s.","JPH_ENABLE_ASSERTS");
    }
    if ((uVar4 & 0x400000000) == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    (*(code *)PTR_vfunction4_1414f67c8)("Mismatching define %s.","JPH_OBJECT_STREAM");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_1402d98a0();
  FUN_1402df070();
  FUN_1400f1400();
  FUN_1402e6430();
  FUN_1402ed780();
  FUN_1402ef750();
  FUN_1402f2990();
  FUN_1400e90c0();
  FUN_1402f4490();
  FUN_1402f6200();
  FUN_1402f8350();
  FUN_1402f9fb0();
  FUN_1402fcc60();
  FUN_140308ec0();
  FUN_140310250();
  FUN_1403260d0();
  FUN_140327930();
  FUN_14032d010();
  FUN_14032eb80();
  FUN_140330190();
  FUN_140330710();
  local_1a8 = FUN_140330cf0(0);
  local_1a0 = FUN_140331d90(0);
  local_198 = FUN_1402da4a0(0);
  local_190 = FUN_1402e68e0(0);
  local_188 = FUN_1402df8e0(0);
  local_180 = FUN_1402ed9f0(0);
  local_178 = FUN_1402efb80(0);
  local_170 = FUN_1400e78e0(0);
  local_168 = FUN_1402f2e20(0);
  local_160 = FUN_1402f4590(0);
  local_158 = FUN_1402f69d0(0);
  local_150 = FUN_1402f86f0(0);
  local_148 = FUN_1402fa5b0(0);
  local_140 = FUN_14032ed70(0);
  local_138 = FUN_1402fcec0(0);
  local_130 = FUN_14030b4f0(0);
  local_128 = FUN_140311360(0);
  local_120 = FUN_140327b10(0);
  local_118 = FUN_14032d270(0);
  local_110 = FUN_1403302c0(0);
  local_108 = FUN_1403328e0(0);
  local_100 = FUN_140334500(0);
  local_f8 = FUN_1403365c0(0);
  local_f0 = FUN_140342d60(0);
  local_e8 = FUN_140347d80(0);
  local_e0 = FUN_14034c850(0);
  local_d8 = FUN_14034e0f0(0);
  local_d0 = FUN_140353410(0);
  local_c8 = FUN_1403551c0(0);
  local_c0 = FUN_140357910();
  local_b8 = FUN_14035b2b0();
  local_b0 = FUN_14035c6d0();
  local_a8 = FUN_14035c9e0();
  local_a0 = FUN_140361960();
  local_98 = FUN_140361c10();
  local_90 = FUN_140365360();
  local_88 = FUN_140366fc0();
  local_80 = FUN_140367aa0();
  local_78 = FUN_140369240(0);
  local_70 = FUN_14036aac0(0);
  local_68 = FUN_14036bec0(0);
  local_60 = FUN_14036e080(0);
  local_58 = FUN_14036e520(0);
  local_50 = FUN_1400e75f0(0);
  local_48 = FUN_1403700a0(0);
  local_40 = FUN_1400f8000();
  local_38 = JPH::GroupFilterTable::vfunction1();
  local_30 = FUN_1403704a0(0);
  local_28 = FUN_1403715c0(0);
  FUN_1400a0020(DAT_14151f520,&local_1a8,0x31);
  if (DAT_14151fc28 == (longlong *)0x0) {
    plVar3 = (longlong *)(*DAT_14151f528)(0x38);
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&PTR_FUN_140de2df0;
    plVar3[3] = 0;
    plVar3[4] = 7;
    plVar3[5] = 0xf;
    *(undefined4 *)((longlong)plVar3 + 0x13) = 0x746c7561;
    *(undefined4 *)(plVar3 + 2) = 0x61666544;
    *(undefined1 *)((longlong)plVar3 + 0x17) = 0;
    *(undefined4 *)(plVar3 + 6) = 0xff808080;
    plVar2 = DAT_14151fc28;
    if (DAT_14151fc28 != plVar3) {
      if (DAT_14151fc28 != (longlong *)0x0) {
        LOCK();
        plVar1 = DAT_14151fc28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,1);
        }
      }
      LOCK();
      DAT_14151fc28 = plVar3;
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
  }
  if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_1e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_20 ^ (ulonglong)auStack_1e8);
  }
  return;
}

