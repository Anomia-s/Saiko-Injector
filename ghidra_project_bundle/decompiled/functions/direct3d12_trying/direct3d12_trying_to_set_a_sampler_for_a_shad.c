/**
 * Function: direct3d12_trying_to_set_a_sampler_for_a_shad
 * Address:  140421b40
 * Signature: undefined direct3d12_trying_to_set_a_sampler_for_a_shad(void)
 * Body size: 1987 bytes
 */


void direct3d12_trying_to_set_a_sampler_for_a_shad
               (longlong param_1,longlong param_2,int param_3,float *param_4,int param_5,
               uint param_6,longlong *param_7,longlong *param_8)

{
  longlong lVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined1 auStack_238 [32];
  ulonglong local_218;
  int local_210;
  uint local_20c;
  longlong *local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  float *local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  undefined8 local_194;
  undefined8 uStack_18c;
  float local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_238;
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  lVar21 = *(longlong *)(lVar1 + 0x422c8);
  if (lVar21 == 0) {
    local_c0 = 0.0;
    uStack_bc = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x48))(*(longlong **)(lVar1 + 0x68),&local_c0);
    local_1e0 = (ulonglong)(uint)(*(int *)(lVar1 + 0x70) * *(int *)(lVar1 + 200)) +
                CONCAT44(uStack_bc,local_c0);
    lVar21 = *(longlong *)(lVar1 + 0x422c8);
    iVar13 = *(int *)(param_2 + 0x2c);
    piVar14 = *(int **)(lVar1 + 0x108);
    if (lVar21 != 0) goto LAB_140421bf0;
    iVar17 = *(int *)(lVar1 + 0x60);
    if (piVar14 != (int *)0x0) goto LAB_140421c00;
LAB_140421c2d:
    lVar21 = (longlong)*(int *)(lVar1 + 0xf8);
    if (0 < lVar21) {
      piVar14 = *(int **)(lVar1 + 0x100);
      do {
        if (((*piVar14 == param_3) && (piVar14[0x19] == iVar13)) &&
           ((piVar14[0x1a] == param_5 && (piVar14[0x1b] == iVar17)))) goto LAB_140421c8e;
        piVar14 = piVar14 + 0x1e;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    local_218 = CONCAT44(local_218._4_4_,iVar17);
    piVar14 = (int *)function_id3d12device_creategraphicspipelines
                               (*(undefined8 *)(param_1 + 0x2c0),param_3);
    if (piVar14 == (int *)0x0) goto LAB_1404222a3;
LAB_140421c8e:
    (**(code **)(**(longlong **)(lVar1 + 0x48) + 200))
              (*(longlong **)(lVar1 + 0x48),*(undefined8 *)(piVar14 + 0x1c));
    pcVar2 = *(code **)(**(longlong **)(lVar1 + 0x48) + 0xf0);
    iVar13 = FUN_1406352c0(*piVar14);
    (*pcVar2)(*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0xe0 + (longlong)iVar13 * 8));
    *(undefined8 *)(lVar1 + 0x422d8) = 0;
    *(undefined8 *)(lVar1 + 0x422e0) = 0;
    *(int **)(lVar1 + 0x108) = piVar14;
    uVar20 = CONCAT71((int7)((ulonglong)pcVar2 >> 8),1);
  }
  else {
    local_1e0 = *(longlong *)(lVar21 + 0x28);
    iVar13 = *(int *)(param_2 + 0x2c);
    piVar14 = *(int **)(lVar1 + 0x108);
LAB_140421bf0:
    iVar17 = *(int *)(lVar21 + 0x30);
    if (piVar14 == (int *)0x0) goto LAB_140421c2d;
LAB_140421c00:
    if ((((*piVar14 != param_3) || (piVar14[0x19] != iVar13)) || (piVar14[0x1a] != param_5)) ||
       (piVar14[0x1b] != iVar17)) goto LAB_140421c2d;
    uVar20 = 0;
  }
  if (local_1e0 != *(longlong *)(lVar1 + 0x422d0)) {
    local_218 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x170))
              (*(longlong **)(lVar1 + 0x48),1,&local_1e0,0);
    *(longlong *)(lVar1 + 0x422d0) = local_1e0;
  }
  if (*(char *)(lVar1 + 0x42310) == '\x01') {
    lVar21 = *(longlong *)(param_1 + 0x2c0);
    iVar13 = 1;
    local_210 = param_3;
    if (*(longlong *)(lVar21 + 0x422c8) == 0) {
      iVar13 = *(int *)(lVar21 + 0x422c0);
      if (*(int *)(lVar21 + 0x42304) != 0) goto LAB_140421d5a;
      goto LAB_140421f4f;
    }
    if (*(int *)(lVar21 + 0x42304) == 0) goto LAB_140421f4f;
LAB_140421d5a:
    if (*(int *)(lVar21 + 0x42308) == 0) goto LAB_140421f4f;
    switch(iVar13) {
    case 1:
      FUN_140634f10(&local_100);
      goto LAB_140421dd1;
    case 2:
      uVar23 = 0xbfc90fdb;
      break;
    case 3:
      uVar23 = 0x40490fdb;
      break;
    case 4:
      uVar23 = 0x3fc90fdb;
      break;
    default:
      cVar11 = FUN_1400fbed0("An unknown DisplayOrientation is being used");
      param_3 = local_210;
      if (cVar11 == '\0') goto LAB_140421f4f;
      goto LAB_140421f4c;
    }
    FUN_140635080(&local_100,uVar23);
LAB_140421dd1:
    local_198 = 2.0 / (float)*(int *)(lVar21 + 0x42304);
    local_184 = -2.0 / (float)*(int *)(lVar21 + 0x42308);
    local_194 = 0;
    uStack_18c = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0x3f800000;
    uStack_168 = 0x3f800000bf800000;
    local_160 = 0x3f80000000000000;
    local_1a8 = local_d0;
    uStack_1a4 = uStack_cc;
    uStack_1a0 = uStack_c8;
    uStack_19c = uStack_c4;
    local_1b8 = local_e0;
    uStack_1b4 = uStack_dc;
    uStack_1b0 = uStack_d8;
    uStack_1ac = uStack_d4;
    local_1c8 = local_f0;
    uStack_1c4 = uStack_ec;
    uStack_1c0 = uStack_e8;
    uStack_1bc = uStack_e4;
    local_1d8 = local_100;
    uStack_1d4 = uStack_fc;
    uStack_1d0 = uStack_f8;
    uStack_1cc = uStack_f4;
    FUN_140634f50(&local_158,&local_198,&local_1d8);
    *(undefined4 *)(lVar21 + 0x422b0) = local_128;
    *(undefined4 *)(lVar21 + 0x422b4) = uStack_124;
    *(undefined4 *)(lVar21 + 0x422b8) = uStack_120;
    *(undefined4 *)(lVar21 + 0x422bc) = uStack_11c;
    *(undefined8 *)(lVar21 + 0x422a0) = local_138;
    *(undefined8 *)(lVar21 + 0x422a8) = uStack_130;
    *(undefined8 *)(lVar21 + 0x42290) = local_148;
    *(undefined8 *)(lVar21 + 0x42298) = uStack_140;
    *(longlong *)(lVar21 + 0x42280) = local_158;
    *(undefined8 *)(lVar21 + 0x42288) = uStack_150;
    bVar22 = (iVar13 - 2U & 0xfffffffd) == 0;
    uVar15 = (ulonglong)bVar22;
    uVar16 = (ulonglong)!bVar22;
    local_118 = (float)*(int *)(lVar21 + 0x422fc + uVar15 * 4);
    fStack_114 = (float)*(int *)(lVar21 + 0x422fc + uVar16 * 4);
    fStack_110 = (float)*(int *)(lVar21 + 0x42304 + uVar15 * 4);
    fStack_10c = (float)*(int *)(lVar21 + 0x42304 + uVar16 * 4);
    local_108 = 0x3f80000000000000;
    (**(code **)(**(longlong **)(lVar21 + 0x48) + 0xa8))(*(longlong **)(lVar21 + 0x48),1,&local_118)
    ;
    *(undefined1 *)(lVar21 + 0x42310) = 0;
LAB_140421f4c:
    uVar20 = CONCAT71((int7)(uVar20 >> 8),1);
    param_3 = local_210;
  }
LAB_140421f4f:
  if (*(char *)(lVar1 + 0x422e8) == '\x01') {
    cVar11 = the_physical_display_is_in_an_unknown_or_unsu
                       (*(undefined8 *)(param_1 + 0x2c0),lVar1 + 0x422ec,&local_100,1);
    if (cVar11 == '\0') goto LAB_1404222a3;
    (**(code **)(**(longlong **)(lVar1 + 0x48) + 0xb0))(*(longlong **)(lVar1 + 0x48),1,&local_100);
    *(undefined1 *)(lVar1 + 0x422e8) = 0;
  }
  if (param_6 == 0) {
    if (*(longlong *)(lVar1 + 0x422d8) != 0) {
      plVar18 = (longlong *)(lVar1 + 0x422d8);
      lVar21 = 0;
      goto LAB_1404220a3;
    }
  }
  else if (*param_7 != *(longlong *)(lVar1 + 0x422d8)) {
    local_20c = (uint)uVar20;
    local_208 = (longlong *)(lVar1 + 0x422d8);
    uVar20 = 0;
    local_210 = param_3;
    local_200 = *param_7;
    local_1f8 = param_1;
    local_1f0 = param_2;
    local_1e8 = param_4;
    do {
      plVar18 = *(longlong **)(lVar1 + 0x80);
      lVar21 = param_7[uVar20];
      (**(code **)(*plVar18 + 0x48))(plVar18,&local_158);
      lVar21 = lVar21 - local_158;
      (**(code **)(*plVar18 + 0x50))(plVar18,&local_100);
      (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x100))
                (*(longlong **)(lVar1 + 0x48),(int)uVar20 + 2,lVar21 + CONCAT44(uStack_fc,local_100)
                );
      uVar20 = uVar20 + 1;
    } while (param_6 != uVar20);
    uVar20 = (ulonglong)local_20c;
    lVar21 = local_200;
    plVar18 = local_208;
    param_1 = local_1f8;
    param_4 = local_1e8;
    param_2 = local_1f0;
    param_3 = local_210;
LAB_1404220a3:
    *plVar18 = lVar21;
  }
  if ((param_8 != (longlong *)0x0) && (lVar21 = *param_8, lVar21 != *(longlong *)(lVar1 + 0x422e0)))
  {
    local_20c = (uint)uVar20;
    plVar18 = *(longlong **)(lVar1 + 0x90);
    (**(code **)(*plVar18 + 0x48))(plVar18,&local_158);
    (**(code **)(*plVar18 + 0x50))(plVar18,&local_100);
    if (param_3 == 1) {
      uVar19 = 3;
    }
    else {
      if (param_3 != 2) {
        FUN_1400fbed0("[direct3d12] Trying to set a sampler for a shader which doesn\'t have one");
        goto LAB_1404222a3;
      }
      uVar19 = 5;
    }
    (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x100))
              (*(longlong **)(lVar1 + 0x48),uVar19,
               (lVar21 - local_158) + CONCAT44(uStack_fc,local_100));
    *(longlong *)(lVar1 + 0x422e0) = *param_8;
    uVar20 = (ulonglong)local_20c;
  }
  if (((char)uVar20 != '\0') ||
     (iVar13 = FUN_1400fc560(lVar1 + 0x42240,(undefined4 *)(lVar1 + 0x42314),0x40), iVar13 != 0)) {
    *(undefined4 *)(lVar1 + 0x42270) = *(undefined4 *)(lVar1 + 0x42344);
    *(undefined4 *)(lVar1 + 0x42274) = *(undefined4 *)(lVar1 + 0x42348);
    *(undefined4 *)(lVar1 + 0x42278) = *(undefined4 *)(lVar1 + 0x4234c);
    *(undefined4 *)(lVar1 + 0x4227c) = *(undefined4 *)(lVar1 + 0x42350);
    *(undefined4 *)(lVar1 + 0x42260) = *(undefined4 *)(lVar1 + 0x42334);
    *(undefined4 *)(lVar1 + 0x42264) = *(undefined4 *)(lVar1 + 0x42338);
    *(undefined4 *)(lVar1 + 0x42268) = *(undefined4 *)(lVar1 + 0x4233c);
    *(undefined4 *)(lVar1 + 0x4226c) = *(undefined4 *)(lVar1 + 0x42340);
    *(undefined4 *)(lVar1 + 0x42250) = *(undefined4 *)(lVar1 + 0x42324);
    *(undefined4 *)(lVar1 + 0x42254) = *(undefined4 *)(lVar1 + 0x42328);
    *(undefined4 *)(lVar1 + 0x42258) = *(undefined4 *)(lVar1 + 0x4232c);
    *(undefined4 *)(lVar1 + 0x4225c) = *(undefined4 *)(lVar1 + 0x42330);
    *(undefined4 *)(lVar1 + 0x42240) = *(undefined4 *)(lVar1 + 0x42314);
    *(undefined4 *)(lVar1 + 0x42244) = *(undefined4 *)(lVar1 + 0x42318);
    *(undefined4 *)(lVar1 + 0x42248) = *(undefined4 *)(lVar1 + 0x4231c);
    *(undefined4 *)(lVar1 + 0x4224c) = *(undefined4 *)(lVar1 + 0x42320);
    local_218 = local_218 & 0xffffffff00000000;
    (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x120))
              (*(longlong **)(lVar1 + 0x48),0,0x20,lVar1 + 0x42240);
  }
  if (param_4 == (float *)0x0) {
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_7c = 0;
    uStack_74 = 0;
    local_70 = 0;
    local_8c = 0;
    uStack_84 = 0;
    local_9c = 0;
    uStack_94 = 0;
    local_ac = 0;
    uStack_a4 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    bVar12 = FUN_140118890(param_1);
    local_c0 = (float)bVar12;
    uStack_b4 = CONCAT44(uStack_b4._4_4_,*(undefined4 *)(param_2 + 0x18));
    param_4 = &local_c0;
  }
  if (((char)uVar20 != '\0') || (iVar13 = FUN_1400fc560(param_4,piVar14 + 1,0x60), iVar13 != 0)) {
    local_218 = local_218 & 0xffffffff00000000;
    (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x120))
              (*(longlong **)(lVar1 + 0x48),1,0x18,param_4);
    uVar19 = *(undefined8 *)(param_4 + 0x16);
    *(undefined8 *)(piVar14 + 0x15) = *(undefined8 *)(param_4 + 0x14);
    *(undefined8 *)(piVar14 + 0x17) = uVar19;
    uVar19 = *(undefined8 *)(param_4 + 0x12);
    *(undefined8 *)(piVar14 + 0x11) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(piVar14 + 0x13) = uVar19;
    fVar3 = *param_4;
    fVar4 = param_4[1];
    fVar5 = param_4[2];
    fVar6 = param_4[3];
    uVar19 = *(undefined8 *)(param_4 + 4);
    uVar7 = *(undefined8 *)(param_4 + 6);
    uVar8 = *(undefined8 *)(param_4 + 8);
    uVar9 = *(undefined8 *)(param_4 + 10);
    uVar10 = *(undefined8 *)(param_4 + 0xe);
    *(undefined8 *)(piVar14 + 0xd) = *(undefined8 *)(param_4 + 0xc);
    *(undefined8 *)(piVar14 + 0xf) = uVar10;
    *(undefined8 *)(piVar14 + 9) = uVar8;
    *(undefined8 *)(piVar14 + 0xb) = uVar9;
    *(undefined8 *)(piVar14 + 5) = uVar19;
    *(undefined8 *)(piVar14 + 7) = uVar7;
    piVar14[1] = (int)fVar3;
    piVar14[2] = (int)fVar4;
    piVar14[3] = (int)fVar5;
    piVar14[4] = (int)fVar6;
  }
LAB_1404222a3:
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_238)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_238);
  }
  return;
}

