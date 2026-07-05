/**
 * Function: no_matching_gl_pixel_format_available
 * Address:  1404637a0
 * Signature: undefined no_matching_gl_pixel_format_available(void)
 * Body size: 1599 bytes
 */


ulonglong no_matching_gl_pixel_format_available(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  HDC hdc;
  char cVar4;
  int iVar5;
  int iVar6;
  BOOL BVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  code *pcVar13;
  ulonglong uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint iPixelFormat;
  undefined4 *puVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auStack_1d8 [38];
  byte local_1b2;
  byte local_1b1;
  byte local_1b0;
  byte local_1af;
  byte local_1ae;
  byte local_1ad;
  uint local_1ac;
  ulonglong local_1a8;
  PIXELFORMATDESCRIPTOR local_19c;
  tagPIXELFORMATDESCRIPTOR local_174;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  undefined4 local_120 [2];
  undefined8 local_118;
  undefined4 local_110 [50];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_1d8;
  lVar10 = video_subsystem_has_not_been_initialized();
  uVar11 = video_subsystem_has_not_been_initialized();
  hdc = *(HDC *)(*(longlong *)(param_2 + 0x180) + 0x18);
  local_14c = 0;
  local_19c.dwVisibleMask = 0;
  local_19c.dwDamageMask = 0;
  local_19c.nSize = 0x28;
  local_19c.nVersion = 1;
  iVar6 = *(int *)(param_1 + 0x3b4);
  local_19c.dwFlags = 0x25 - (iVar6 == 0);
  if (*(int *)(param_1 + 0x3c8) != 0) {
    local_19c.dwFlags = local_19c.dwFlags | 2;
  }
  local_13c = *(uint *)(param_1 + 0x398);
  local_134 = *(undefined4 *)(param_1 + 0x39c);
  local_19c._8_4_ = (local_13c & 0xff) << 0x10;
  local_19c.cGreenBits = (char)local_134;
  local_12c = *(undefined4 *)(param_1 + 0x3a0);
  local_19c.cGreenShift = '\0';
  local_19c.cBlueBits = (BYTE)local_12c;
  iVar1 = *(int *)(param_1 + 0x3a4);
  cVar4 = (char)local_134 + (char)local_13c + (BYTE)local_12c;
  if (*(int *)(param_1 + 0x3ac) != 0) {
    cVar4 = (char)*(int *)(param_1 + 0x3ac) - (byte)iVar1;
  }
  local_19c._8_8_ = (ulonglong)CONCAT51(local_19c._10_5_,cVar4) << 8;
  iVar2 = *(int *)(param_1 + 0x3b8);
  local_19c._16_4_ = iVar2 << 0x18;
  iVar5 = *(int *)(param_1 + 0x3bc);
  local_19c.cAccumGreenBits = (BYTE)iVar5;
  local_19c.cAccumBlueBits = (BYTE)*(undefined4 *)(param_1 + 0x3c0);
  local_19c.cAccumAlphaBits = (BYTE)*(undefined4 *)(param_1 + 0x3c4);
  uVar3 = local_19c._19_4_;
  local_19c.cAlphaShift = '\0';
  local_19c.cAlphaBits = (byte)iVar1;
  local_19c.cAccumBits =
       local_19c.cAccumBlueBits + local_19c.cAccumAlphaBits + (BYTE)iVar5 + (char)iVar2;
  local_19c.cAccumRedBits = (char)uVar3;
  local_19c.cAccumGreenBits = (char)((uint)uVar3 >> 8);
  local_19c.cAccumBlueBits = (char)((uint)uVar3 >> 0x10);
  local_19c.cAccumAlphaBits = (char)((uint)uVar3 >> 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x3a8);
  local_19c.cDepthBits = (BYTE)uVar3;
  uVar9 = *(uint *)(param_1 + 0x3b0);
  pcVar13 = (code *)(ulonglong)uVar9;
  local_19c.cAuxBuffers = '\0';
  local_19c.iLayerType = '\0';
  local_19c.bReserved = '\0';
  local_19c.dwLayerMask = 0;
  local_19c.cStencilBits = (byte)uVar9;
  local_148 = 0x100002001;
  local_140 = 0x2015;
  local_138 = 0x2017;
  local_130 = 0x2019;
  if (iVar1 == 0) {
    puVar18 = &local_128;
  }
  else {
    local_128 = 0x201b;
    puVar18 = local_120;
    local_124 = iVar1;
  }
  *puVar18 = 0x2011;
  puVar18[1] = iVar6;
  puVar18[2] = 0x2022;
  puVar18[3] = uVar3;
  if (uVar9 == 0) {
    puVar19 = (undefined8 *)(puVar18 + 4);
  }
  else {
    puVar18[4] = 0x2023;
    puVar18[5] = uVar9;
    puVar19 = (undefined8 *)(puVar18 + 6);
  }
  if (iVar2 != 0) {
    *(undefined4 *)puVar19 = 0x201e;
    *(int *)((longlong)puVar19 + 4) = iVar2;
    puVar19 = puVar19 + 1;
    iVar5 = *(int *)(param_1 + 0x3bc);
  }
  if (iVar5 != 0) {
    *(undefined4 *)puVar19 = 0x201f;
    *(undefined4 *)((longlong)puVar19 + 4) = *(undefined4 *)(param_1 + 0x3bc);
    puVar19 = puVar19 + 1;
  }
  if (*(int *)(param_1 + 0x3c0) != 0) {
    *(undefined4 *)puVar19 = 0x2020;
    *(undefined4 *)((longlong)puVar19 + 4) = *(undefined4 *)(param_1 + 0x3c0);
    puVar19 = puVar19 + 1;
  }
  if (*(int *)(param_1 + 0x3c4) != 0) {
    *(undefined4 *)puVar19 = 0x2021;
    *(undefined4 *)((longlong)puVar19 + 4) = *(undefined4 *)(param_1 + 0x3c4);
    puVar19 = puVar19 + 1;
  }
  if (*(int *)(param_1 + 0x3c8) != 0) {
    *puVar19 = 0x100002012;
    puVar19 = puVar19 + 1;
  }
  if (*(int *)(param_1 + 0x3cc) != 0) {
    *(undefined4 *)puVar19 = 0x2041;
    *(undefined4 *)((longlong)puVar19 + 4) = *(undefined4 *)(param_1 + 0x3cc);
    puVar19 = puVar19 + 1;
  }
  if (*(int *)(param_1 + 0x3d0) != 0) {
    *(undefined4 *)puVar19 = 0x2042;
    *(undefined4 *)((longlong)puVar19 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    puVar19 = puVar19 + 1;
  }
  if (*(int *)(param_1 + 0x3d4) != 0) {
    *puVar19 = 0x21a000002013;
    puVar19 = puVar19 + 1;
  }
  if (*(int *)(param_1 + 0x3f8) != 0) {
    *(undefined4 *)puVar19 = 0x20a9;
    *(undefined4 *)((longlong)puVar19 + 4) = *(undefined4 *)(param_1 + 0x3f8);
    puVar19 = puVar19 + 1;
  }
  *(undefined4 *)puVar19 = 0x2003;
  bVar20 = *(int *)(param_1 + 0x3d8) != 0;
  *(uint *)((longlong)puVar19 + 4) = bVar20 + 0x2025 + (uint)bVar20;
  *(undefined4 *)(puVar19 + 1) = 0;
  iVar6 = FUN_1404643e0(param_1,&local_148,&local_14c);
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0x3d8) < 0) {
      *(undefined4 *)((longlong)puVar19 + 4) = 0x2025;
      iVar6 = FUN_1404643e0(param_1,&local_148,&local_14c);
      *(undefined4 *)((longlong)puVar19 + 4) = 0x2027;
      if (iVar6 != 0) goto LAB_140463ab7;
    }
    uVar9 = DescribePixelFormat(hdc,1,0x28,(LPPIXELFORMATDESCRIPTOR)0x0);
    pcVar13 = DescribePixelFormat_exref;
    if (0 < (int)uVar9) {
      local_1a8 = 0;
      local_1ac = 0xffffffff;
      iPixelFormat = 1;
      do {
        iVar6 = DescribePixelFormat(hdc,iPixelFormat,0x28,&local_174);
        if ((((iVar6 != 0) && ((local_19c.dwFlags & ~local_174.dwFlags) == 0)) &&
            (local_174.iLayerType == local_19c.iLayerType)) &&
           ((local_174.iPixelType == local_19c.iPixelType &&
            (local_19c.cColorBits <= local_174.cColorBits)))) {
          if (local_19c.cRedBits <= local_174.cRedBits) {
            if (local_19c.cGreenBits <= local_174.cGreenBits) {
              if (local_19c.cBlueBits <= local_174.cBlueBits) {
                if (local_19c.cAlphaBits <= local_174.cAlphaBits) {
                  bVar15 = local_174.cAccumBits - local_19c.cAccumBits;
                  if (local_19c.cAccumBits <= local_174.cAccumBits) {
                    local_1ad = local_174.cAccumRedBits - local_19c.cAccumRedBits;
                    local_1ae = bVar15;
                    if (local_19c.cAccumRedBits <= local_174.cAccumRedBits) {
                      bVar16 = local_174.cAccumGreenBits - local_19c.cAccumGreenBits;
                      if (local_19c.cAccumGreenBits <= local_174.cAccumGreenBits) {
                        local_1af = local_174.cAccumBlueBits - local_19c.cAccumBlueBits;
                        local_1b0 = bVar16;
                        if (local_19c.cAccumBlueBits <= local_174.cAccumBlueBits) {
                          bVar17 = local_174.cAccumAlphaBits - local_19c.cAccumAlphaBits;
                          if (local_19c.cAccumAlphaBits <= local_174.cAccumAlphaBits) {
                            local_1b1 = local_174.cDepthBits - local_19c.cDepthBits;
                            local_1b2 = bVar17;
                            if (local_19c.cDepthBits <= local_174.cDepthBits) {
                              if (local_19c.cStencilBits <= local_174.cStencilBits) {
                                uVar8 = (uint)(byte)(local_174.cStencilBits - local_19c.cStencilBits
                                                    ) +
                                        (uint)local_1b1 +
                                        (uint)bVar17 + (uint)local_1af + (uint)bVar16 +
                                        (uint)local_1ad +
                                        (uint)bVar15 +
                                        (uint)(byte)(local_174.cAlphaBits - local_19c.cAlphaBits) +
                                        (uint)(byte)(local_174.cBlueBits - local_19c.cBlueBits) +
                                        (uint)(byte)(local_174.cGreenBits - local_19c.cGreenBits) +
                                        (uint)(byte)(local_174.cRedBits - local_19c.cRedBits) +
                                        ((uint)local_174.cColorBits - (uint)local_19c.cColorBits);
                                local_1a8 = local_1a8 & 0xffffffff;
                                if (uVar8 < local_1ac) {
                                  local_1a8 = (ulonglong)iPixelFormat;
                                  local_1ac = uVar8;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        bVar20 = iPixelFormat != uVar9;
        iPixelFormat = iPixelFormat + 1;
      } while (bVar20);
      iVar6 = 1;
      if ((int)local_1a8 != 0) goto LAB_140463ab7;
    }
    uVar9 = FUN_1400fbed0("No matching GL pixel format available");
LAB_140463d5e:
    uVar14 = (ulonglong)uVar9;
    lVar12 = *(longlong *)(param_1 + 0x680);
  }
  else {
LAB_140463ab7:
    BVar7 = SetPixelFormat(hdc,iVar6,&local_19c);
    uVar14 = CONCAT71((int7)((ulonglong)pcVar13 >> 8),1);
    if (BVar7 == 0) {
      uVar9 = FUN_1403d7710("SetPixelFormat()");
      goto LAB_140463d5e;
    }
    lVar12 = *(longlong *)(param_1 + 0x680);
  }
  if (lVar12 == 0) {
    FUN_1400fbed0("OpenGL not initialized");
  }
  else {
    if (lVar10 == 0) {
      lVar10 = video_subsystem_has_not_been_initialized();
      if (lVar10 == 0) goto LAB_140463d7c;
      lVar12 = *(longlong *)(param_1 + 0x680);
    }
    iVar6 = (**(code **)(lVar12 + 0x28))
                      (*(undefined8 *)(*(longlong *)(lVar10 + 0x180) + 0x18),uVar11);
    if (iVar6 == 0) {
      FUN_1403d7710("wglMakeCurrent()");
    }
  }
LAB_140463d7c:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_1d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_1d8);
  }
  return uVar14 & 0xffffffff;
}

