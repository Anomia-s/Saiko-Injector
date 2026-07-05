/**
 * Function: sdl_renderpoints_points
 * Address:  14011f340
 * Signature: undefined sdl_renderpoints_points(void)
 * Body size: 795 bytes
 */


undefined4 sdl_renderpoints_points(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  undefined4 uVar11;
  float *pfVar12;
  ulonglong uVar13;
  float *pfVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  
  cVar10 = FUN_1403d8fa0(param_1,2);
  if (cVar10 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","renderer");
    return 0;
  }
  if (*(char *)(param_1 + 0x2b8) == '\x01') {
    FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
    return 0;
  }
  if (param_2 == (float *)0x0) {
    uVar11 = FUN_1400fbed0("Parameter \'%s\' is invalid","SDL_RenderPoints(): points");
    return uVar11;
  }
  if ((int)param_3 < 1) {
    return 1;
  }
  fVar17 = *(float *)(*(longlong *)(param_1 + 0x150) + 100);
  if ((((fVar17 == 1.0) && (!NAN(fVar17))) &&
      (fVar17 = *(float *)(*(longlong *)(param_1 + 0x150) + 0x68), fVar17 == 1.0)) && (!NAN(fVar17))
     ) {
    uVar11 = FUN_14011f660(param_1,param_2,param_3);
    return uVar11;
  }
  uVar16 = (ulonglong)param_3;
  pfVar12 = (float *)FUN_140160c40(uVar16 * 0x10);
  if (pfVar12 == (float *)0x0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 100);
  fVar18 = (float)((ulonglong)uVar2 >> 0x20);
  fVar17 = (float)uVar2;
  if ((param_3 < 8) || (pfVar12 < param_2 + uVar16 * 2 && param_2 < pfVar12 + uVar16 * 4)) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ulonglong)(param_3 & 0x7ffffffc);
    uVar15 = 0;
    pfVar14 = pfVar12;
    do {
      pfVar1 = param_2 + uVar15 * 2;
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar1 = param_2 + uVar15 * 2 + 4;
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[3];
      pfVar14[0xc] = pfVar1[2] * fVar17;
      pfVar14[0xd] = fVar9 * fVar18;
      pfVar14[0xe] = fVar17;
      pfVar14[0xf] = fVar18;
      pfVar14[8] = fVar7 * fVar17;
      pfVar14[9] = fVar8 * fVar18;
      pfVar14[10] = fVar17;
      pfVar14[0xb] = fVar18;
      pfVar14[4] = fVar5 * fVar17;
      pfVar14[5] = fVar6 * fVar18;
      pfVar14[6] = fVar17;
      pfVar14[7] = fVar18;
      *pfVar14 = fVar3 * fVar17;
      pfVar14[1] = fVar4 * fVar18;
      pfVar14[2] = fVar17;
      pfVar14[3] = fVar18;
      uVar15 = uVar15 + 4;
      pfVar14 = pfVar14 + 0x10;
    } while (uVar13 != uVar15);
    if ((param_3 & 0x7ffffffc) == param_3) goto LAB_14011f639;
  }
  uVar15 = uVar13;
  if ((param_3 & 1) != 0) {
    pfVar12[uVar13 * 4] = param_2[uVar13 * 2] * fVar17;
    pfVar12[uVar13 * 4 + 1] = fVar18 * param_2[uVar13 * 2 + 1];
    *(undefined8 *)(pfVar12 + uVar13 * 4 + 2) = uVar2;
    uVar15 = uVar13 | 1;
  }
  if (uVar13 != uVar16 - 1) {
    pfVar14 = pfVar12 + uVar15 * 4 + 6;
    do {
      pfVar14[-6] = param_2[uVar15 * 2] * fVar17;
      pfVar14[-5] = param_2[uVar15 * 2 + 1] * fVar18;
      *(undefined8 *)(pfVar14 + -4) = uVar2;
      pfVar14[-2] = param_2[uVar15 * 2 + 2] * fVar17;
      pfVar14[-1] = param_2[uVar15 * 2 + 3] * fVar18;
      *(undefined8 *)pfVar14 = uVar2;
      uVar15 = uVar15 + 2;
      pfVar14 = pfVar14 + 8;
    } while (uVar16 != uVar15);
  }
LAB_14011f639:
  uVar11 = FUN_140120d60(param_1,pfVar12,param_3);
  FUN_140160cf0(pfVar12);
  return uVar11;
}

