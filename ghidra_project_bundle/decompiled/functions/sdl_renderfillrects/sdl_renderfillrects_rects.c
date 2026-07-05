/**
 * Function: sdl_renderfillrects_rects
 * Address:  140120a60
 * Signature: undefined sdl_renderfillrects_rects(void)
 * Body size: 758 bytes
 */


undefined4 sdl_renderfillrects_rects(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fVar18;
  char cVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  
  cVar19 = FUN_1403d8fa0(param_1,2);
  if (cVar19 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","renderer");
    return 0;
  }
  if (*(char *)(param_1 + 0x2b8) == '\x01') {
    FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
    return 0;
  }
  if (param_2 == 0) {
    uVar20 = FUN_1400fbed0("Parameter \'%s\' is invalid","SDL_RenderFillRects(): rects");
    return uVar20;
  }
  uVar23 = (uint)param_3;
  if ((int)uVar23 < 1) {
    return 1;
  }
  lVar24 = (param_3 & 0xffffffff) * 0x10;
  uVar21 = FUN_140160c40(lVar24);
  if (uVar21 == 0) {
    return 0;
  }
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x150) + 100);
  fVar3 = *(float *)(*(longlong *)(param_1 + 0x150) + 0x68);
  if ((uVar23 < 4) || (uVar21 < lVar24 + param_2 && param_2 < uVar21 + lVar24)) {
    uVar22 = 0;
  }
  else {
    uVar22 = (ulonglong)(uVar23 & 0x7ffffffc);
    lVar24 = 0;
    do {
      fVar4 = *(float *)(param_2 + 0x20 + lVar24);
      fVar5 = *(float *)(param_2 + 0x10 + lVar24);
      fVar6 = *(float *)(param_2 + lVar24);
      fVar7 = *(float *)(param_2 + 4 + lVar24);
      fVar8 = *(float *)(param_2 + 8 + lVar24);
      fVar9 = *(float *)(param_2 + 0xc + lVar24);
      fVar10 = *(float *)(param_2 + 0x34 + lVar24);
      fVar11 = *(float *)(param_2 + 0x24 + lVar24);
      fVar12 = *(float *)(param_2 + 0x14 + lVar24);
      fVar13 = *(float *)(param_2 + 0x38 + lVar24);
      fVar14 = *(float *)(param_2 + 0x28 + lVar24);
      fVar15 = *(float *)(param_2 + 0x18 + lVar24);
      fVar16 = *(float *)(param_2 + 0x3c + lVar24);
      fVar17 = *(float *)(param_2 + 0x2c + lVar24);
      fVar18 = *(float *)(param_2 + 0x1c + lVar24);
      pfVar1 = (float *)(uVar21 + 0x30 + lVar24);
      *pfVar1 = *(float *)(param_2 + 0x30 + lVar24) * fVar2;
      pfVar1[1] = fVar10 * fVar3;
      pfVar1[2] = fVar13 * fVar2;
      pfVar1[3] = fVar16 * fVar3;
      pfVar1 = (float *)(uVar21 + 0x20 + lVar24);
      *pfVar1 = fVar4 * fVar2;
      pfVar1[1] = fVar11 * fVar3;
      pfVar1[2] = fVar14 * fVar2;
      pfVar1[3] = fVar17 * fVar3;
      pfVar1 = (float *)(uVar21 + 0x10 + lVar24);
      *pfVar1 = fVar5 * fVar2;
      pfVar1[1] = fVar12 * fVar3;
      pfVar1[2] = fVar15 * fVar2;
      pfVar1[3] = fVar18 * fVar3;
      pfVar1 = (float *)(uVar21 + lVar24);
      *pfVar1 = fVar6 * fVar2;
      pfVar1[1] = fVar7 * fVar3;
      pfVar1[2] = fVar8 * fVar2;
      pfVar1[3] = fVar9 * fVar3;
      lVar24 = lVar24 + 0x40;
    } while ((ulonglong)((uint)(param_3 >> 2) & 0x1fffffff) << 6 != lVar24);
    if ((uVar23 & 0x7ffffffc) == uVar23) goto LAB_140120bb7;
  }
  lVar24 = (param_3 & 0xffffffff) - uVar22;
  uVar22 = uVar22 << 4 | 0xc;
  do {
    *(float *)((uVar21 - 0xc) + uVar22) = *(float *)((param_2 - 0xc) + uVar22) * fVar2;
    *(float *)((uVar21 - 8) + uVar22) = *(float *)((param_2 - 8) + uVar22) * fVar3;
    *(float *)((uVar21 - 4) + uVar22) = *(float *)((param_2 - 4) + uVar22) * fVar2;
    *(float *)(uVar21 + uVar22) = *(float *)(param_2 + uVar22) * fVar3;
    uVar22 = uVar22 + 0x10;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
LAB_140120bb7:
  uVar20 = FUN_140120d60(param_1,uVar21,param_3 & 0xffffffff);
  FUN_140160cf0(uVar21);
  return uVar20;
}

