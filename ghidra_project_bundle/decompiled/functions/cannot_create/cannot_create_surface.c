/**
 * Function: cannot_create_surface
 * Address:  140415850
 * Signature: undefined cannot_create_surface(void)
 * Body size: 479 bytes
 */


undefined8 cannot_create_surface(undefined8 param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar3 = height_pitch_would_overflow(param_2[1],param_2[2],*param_2);
  cVar2 = FUN_140110960(lVar3);
  if (cVar2 == '\0') {
    uVar4 = FUN_1400fbed0("Cannot create surface");
    return uVar4;
  }
  *(longlong *)(param_2 + 0x3c) = lVar3;
  fVar12 = (float)param_2[10];
  fVar13 = 0.0;
  uVar9 = 0;
  if (fVar12 < 0.0) {
LAB_1404158a9:
    fVar10 = (float)roundf(uVar9);
    fVar12 = (float)param_2[0xb];
  }
  else {
    if (1.0 < fVar12) {
      uVar9 = 0x437f0000;
      goto LAB_1404158a9;
    }
    fVar10 = (float)roundf(fVar12 * 255.0);
    fVar12 = (float)param_2[0xb];
  }
  if (0.0 <= fVar12) {
    if (fVar12 <= 1.0) {
      fVar13 = fVar12 * 255.0;
    }
    else {
      fVar13 = 255.0;
    }
  }
  fVar13 = (float)roundf(fVar13);
  fVar12 = (float)param_2[0xc];
  fVar14 = 0.0;
  fVar11 = 0.0;
  if (0.0 <= fVar12) {
    if (fVar12 <= 1.0) {
      fVar11 = fVar12 * 255.0;
    }
    else {
      fVar11 = 255.0;
    }
  }
  fVar11 = (float)roundf(fVar11);
  fVar12 = (float)param_2[0xd];
  if (0.0 <= fVar12) {
    if (fVar12 <= 1.0) {
      fVar14 = fVar12 * 255.0;
    }
    else {
      fVar14 = 255.0;
    }
  }
  fVar12 = (float)roundf(fVar14);
  parameter_s_is_invalid(lVar3,(int)fVar10,(int)fVar13,(int)fVar11);
  parameter_s_is_invalid(lVar3,(int)fVar12);
  parameter_s_is_invalid(lVar3,param_2[8]);
  if (param_2[7] != 0) {
    return 1;
  }
  uVar5 = *(uint *)(lVar3 + 4);
  uVar6 = uVar5 & 0xf0000000;
  uVar8 = (ulonglong)CONCAT31((int3)(uVar6 >> 8),uVar6 != 0x10000000);
  if (uVar5 == 0 || uVar6 == 0x10000000) {
    uVar6 = uVar5 >> 0x18 & 0xf;
    uVar7 = uVar6 - 4;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 < 3) {
      uVar5 = (uVar5 >> 0x14 & 0xf) - 3;
      bVar1 = uVar5 < 6 & 0x33U >> ((byte)uVar5 & 0x1f);
    }
    else {
      if (4 < uVar6 - 7) goto LAB_140415a11;
      uVar5 = (uVar5 >> 0x14 & 0xf) - 2;
      bVar1 = uVar5 < 5 & 0x1bU >> ((byte)uVar5 & 0x1f);
    }
    uVar8 = (ulonglong)(uVar7 & 0xffffff00);
    if (bVar1 != 0) {
      return 1;
    }
  }
LAB_140415a11:
  parameter_s_is_invalid(lVar3,CONCAT71((int7)(uVar8 >> 8),1));
  return 1;
}

