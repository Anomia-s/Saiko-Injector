/**
 * Function: texture_dimensions_are_limited_to_dxd
 * Address:  14011a690
 * Signature: undefined texture_dimensions_are_limited_to_dxd(void)
 * Body size: 1995 bytes
 */


uint * texture_dimensions_are_limited_to_dxd(longlong param_1,undefined4 param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  
  uVar4 = FUN_140150150(param_2,"SDL.texture.create.format",0);
  uVar5 = FUN_140150150(param_2,"SDL.texture.create.access",0);
  uVar6 = FUN_140150150(param_2,"SDL.texture.create.width",0);
  uVar7 = FUN_140150150(param_2,"SDL.texture.create.height",0);
  cVar3 = FUN_1403d8fa0(param_1);
  if (cVar3 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","renderer");
    return (uint *)0x0;
  }
  if (*(char *)(param_1 + 0x2b8) == '\x01') {
    FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
    return (uint *)0x0;
  }
  if (uVar4 == 0) {
    uVar4 = **(uint **)(param_1 + 0xf0);
  }
  bVar14 = uVar4 != 0;
  bVar15 = (uVar4 & 0xf0000000) != 0x10000000;
  uVar13 = uVar4 & 0xff;
  if (uVar13 == 0 && (!bVar15 || !bVar14)) {
    FUN_1400fbed0("Invalid texture format");
    return (uint *)0x0;
  }
  if (((!bVar15 || !bVar14) && (uVar8 = uVar4 >> 0x18 & 0xf, uVar8 < 0xd)) &&
     ((0x100eU >> uVar8 & 1) != 0)) {
    if (0 < (longlong)*(int *)(param_1 + 0xf8)) {
      lVar12 = 0;
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xf0) + lVar12 * 4) == uVar4) goto LAB_14011a7fe;
        lVar12 = lVar12 + 1;
      } while (*(int *)(param_1 + 0xf8) != lVar12);
    }
    FUN_1400fbed0("Palettized textures are not supported");
    return (uint *)0x0;
  }
LAB_14011a7fe:
  if ((int)uVar7 < 1 || (int)uVar6 < 1) {
    FUN_1400fbed0("Texture dimensions can\'t be 0");
    return (uint *)0x0;
  }
  cVar3 = FUN_1403d8fa0(param_1,2);
  if (cVar3 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","renderer");
    iVar9 = 0;
  }
  else if (*(char *)(param_1 + 0x2b8) == '\x01') {
    FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x2a8);
    if (iVar9 == 0) {
      iVar9 = FUN_14014f270();
      *(int *)(param_1 + 0x2a8) = iVar9;
    }
  }
  iVar9 = FUN_140150150(iVar9,"SDL.renderer.max_texture_size",0);
  if ((iVar9 != 0) && (iVar9 < (int)uVar7 || iVar9 < (int)uVar6)) {
    FUN_1400fbed0("Texture dimensions are limited to %dx%d",iVar9,iVar9);
    return (uint *)0x0;
  }
  FUN_140156430(uVar4);
  puVar10 = (uint *)FUN_140160c70(1,0x108);
  if (puVar10 == (uint *)0x0) {
    return (uint *)0x0;
  }
  puVar10[3] = 1;
  FUN_1403d8ef0(puVar10,3,1);
  uVar8 = FUN_140150150(param_2,"SDL.texture.create.colorspace");
  puVar10[4] = uVar8;
  *puVar10 = uVar4;
  puVar10[7] = uVar5;
  puVar10[1] = uVar6;
  puVar10[2] = uVar7;
  puVar10[10] = 0x3f800000;
  puVar10[0xb] = 0x3f800000;
  puVar10[0xc] = 0x3f800000;
  puVar10[0xd] = 0x3f800000;
  if (bVar15 && bVar14) {
LAB_14011a981:
    uVar8 = 0;
  }
  else {
    uVar8 = uVar4 >> 0x18 & 0xf;
    if (uVar8 - 4 < 3) {
      uVar8 = (uint)(((uVar4 >> 0x14 & 0xf) - 3 & 0xfffffffa) == 0);
    }
    else {
      if (4 < uVar8 - 7) goto LAB_14011a981;
      uVar8 = 0x6c >> ((byte)(uVar4 >> 0x14) & 0xf);
    }
  }
  puVar10[8] = uVar8 & 1;
  puVar10[9] = 1;
  puVar10[0xe] = uVar6;
  puVar10[0xf] = uVar7;
  puVar10[0x12] = 0xffffffff;
  puVar10[0x13] = 0xffffffff;
  puVar10[0x21] = 0x3f800000;
  puVar10[0x22] = 0x3f800000;
  puVar10[0x23] = 0x3f800000;
  puVar10[0x24] = 0x3f800000;
  puVar10[0x27] = 0x3f800000;
  puVar10[0x28] = 0x3f800000;
  *(longlong *)(puVar10 + 0x2a) = param_1;
  lVar12 = *(longlong *)(param_1 + 0x1d8);
  *(longlong *)(puVar10 + 0x40) = lVar12;
  if (lVar12 != 0) {
    *(uint **)(lVar12 + 0xf8) = puVar10;
  }
  *(uint **)(param_1 + 0x1d8) = puVar10;
  FUN_140119ed0(puVar10 + 0xe);
  fVar17 = (float)puVar10[0x27];
  fVar1 = (float)puVar10[0x28];
  fVar16 = floorf((float)(int)puVar10[0x18] * fVar17 + (float)puVar10[0x25]);
  puVar10[0x1c] = (int)fVar16;
  fVar16 = floorf((float)(int)puVar10[0x19] * fVar1 + (float)puVar10[0x26]);
  puVar10[0x1d] = (int)fVar16;
  fVar17 = ceilf((float)(int)puVar10[0x1a] * fVar17);
  puVar10[0x1e] = (int)fVar17;
  fVar17 = ceilf((float)(int)puVar10[0x1b] * fVar1);
  puVar10[0x1f] = (int)fVar17;
  uVar18 = FUN_140111190(puVar10[4]);
  uVar8 = FUN_140150270(param_2,"SDL.texture.create.SDR_white_point",uVar18);
  puVar10[5] = uVar8;
  uVar18 = FUN_140111230(puVar10[4]);
  uVar8 = FUN_140150270(param_2,"SDL.texture.create.HDR_headroom",uVar18);
  puVar10[6] = uVar8;
  if (((uVar4 == 0) || (uVar5 != 2)) || ((uVar4 & 0xf0000000) == 0x10000000)) {
    if (0 < (longlong)*(int *)(param_1 + 0xf8)) {
      lVar12 = 0;
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xf0) + lVar12 * 4) == uVar4) {
          cVar3 = (**(code **)(param_1 + 0x18))(param_1,puVar10,param_2);
          if (cVar3 == '\0') goto LAB_14011ae16;
          goto LAB_14011ad40;
        }
        lVar12 = lVar12 + 1;
      } while (*(int *)(param_1 + 0xf8) != lVar12);
    }
    uVar18 = FUN_14014f270();
    iVar9 = FUN_14011aeb0(param_1,uVar4);
  }
  else {
    uVar18 = FUN_14014f270();
    iVar9 = **(int **)(param_1 + 0xf0);
  }
  uVar8 = FUN_140156430(iVar9);
  if ((puVar10[4] ^ uVar8) < 0x10000000) {
    uVar8 = puVar10[4];
  }
  FUN_14014fc70(uVar18,"SDL.texture.create.colorspace",(longlong)(int)uVar8);
  FUN_14014fc70(uVar18,"SDL.texture.create.format",(longlong)iVar9);
  FUN_14014fc70(uVar18,"SDL.texture.create.access",(longlong)(int)puVar10[7]);
  FUN_14014fc70(uVar18,"SDL.texture.create.width",(longlong)(int)puVar10[1]);
  FUN_14014fc70(uVar18,"SDL.texture.create.height",(longlong)(int)puVar10[2]);
  uVar11 = texture_dimensions_are_limited_to_dxd(param_1,uVar18);
  *(undefined8 *)(puVar10 + 0x2c) = uVar11;
  FUN_14014f0d0(uVar18);
  if (*(longlong *)(puVar10 + 0x2c) == 0) {
    parameter_s_is_invalid(puVar10);
  }
  else {
    uVar18 = parameter_s_is_invalid(*(longlong *)(puVar10 + 0x2c));
    FUN_14014faf0(uVar18,"SDL.internal.texture.parent",puVar10);
    *(undefined8 *)(*(longlong *)(puVar10 + 0x2c) + 0x100) = *(undefined8 *)(puVar10 + 0x40);
    lVar12 = *(longlong *)(puVar10 + 0x2c);
    if (*(longlong *)(lVar12 + 0x100) != 0) {
      *(longlong *)(*(longlong *)(lVar12 + 0x100) + 0xf8) = lVar12;
      lVar12 = *(longlong *)(puVar10 + 0x2c);
    }
    lVar2 = *(longlong *)(lVar12 + 0xf8);
    *(longlong *)(puVar10 + 0x3e) = lVar2;
    if (lVar2 != 0) {
      *(uint **)(lVar2 + 0x100) = puVar10;
      lVar12 = *(longlong *)(puVar10 + 0x2c);
    }
    *(uint **)(lVar12 + 0xf8) = puVar10;
    *(undefined8 *)(puVar10 + 0x40) = *(undefined8 *)(puVar10 + 0x2c);
    *(uint **)(param_1 + 0x1d8) = puVar10;
    uVar8 = *puVar10;
    if ((uVar8 & 0xf0000000) == 0x10000000 || uVar8 == 0) {
      if (uVar5 != 1) goto LAB_14011ad40;
      if ((((bVar15 && bVar14) && (uVar13 = 2, uVar4 != 0x32595559)) && (uVar4 != 0x55595659)) &&
         (uVar4 != 0x59565955)) {
        uVar13 = (uVar4 == 0x30313050) + 1;
      }
      uVar4 = uVar13 * uVar6 + 3 & 0x7ffffffc;
      puVar10[0x32] = uVar4;
      lVar12 = FUN_140160c70(1,(ulonglong)(uVar7 & 0x7fffffff) * (ulonglong)uVar4);
      *(longlong *)(puVar10 + 0x30) = lVar12;
    }
    else {
      lVar12 = unsupported_yuv_format(uVar8,puVar10[4],uVar6,uVar7);
      *(longlong *)(puVar10 + 0x2e) = lVar12;
    }
    if (lVar12 != 0) {
LAB_14011ad40:
      uVar18 = parameter_s_is_invalid();
      FUN_14014fc70(uVar18,"SDL.texture.colorspace",(longlong)(int)puVar10[4]);
      FUN_14014fc70(uVar18,"SDL.texture.format",(longlong)(int)*puVar10);
      FUN_14014fc70(uVar18,"SDL.texture.access",(longlong)(int)puVar10[7]);
      FUN_14014fc70(uVar18,"SDL.texture.width",(longlong)(int)puVar10[1]);
      FUN_14014fc70(uVar18,"SDL.texture.height",(longlong)(int)puVar10[2]);
      FUN_14014fcc0(uVar18,"SDL.texture.SDR_white_point",puVar10[5]);
      if (0.0 < (float)puVar10[6]) {
        FUN_14014fcc0(uVar18,"SDL.texture.HDR_headroom");
        return puVar10;
      }
      return puVar10;
    }
LAB_14011ae16:
    parameter_s_is_invalid(puVar10);
  }
  return (uint *)0x0;
}

