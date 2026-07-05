/**
 * Function: invalid_parent_window_handle
 * Address:  140469990
 * Signature: undefined invalid_parent_window_handle(void)
 * Body size: 3067 bytes
 */


ulonglong invalid_parent_window_handle(uint *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  HDC pHVar8;
  ulonglong uVar9;
  HFONT h;
  longlong lVar10;
  LPCWSTR lpchText;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  char *pcVar15;
  INT_PTR IVar16;
  int iVar17;
  int iVar18;
  undefined7 uVar19;
  short sVar20;
  HWND hWndParent;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  char *pcVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_3b8 [32];
  ulonglong local_350;
  tagRECT local_318;
  undefined1 local_303;
  undefined2 local_302;
  tagSIZE local_300 [35];
  int local_1e8;
  undefined2 local_1d8;
  undefined1 local_1d4;
  undefined1 local_1d1;
  undefined1 local_1cc [100];
  LOGFONTW local_168;
  LOGFONTW local_108;
  ulonglong local_a0;
  
  local_a0 = DAT_1414ef3c0 ^ (ulonglong)auStackY_3b8;
  pHVar8 = GetDC((HWND)0x0);
  if (pHVar8 == (HDC)0x0) {
LAB_140469a15:
    iVar4 = 0x60;
  }
  else {
    iVar4 = GetDeviceCaps(pHVar8,0x58);
    ReleaseDC((HWND)0x0,pHVar8);
    if (iVar4 == 0) goto LAB_140469a15;
  }
  fVar29 = (float)iVar4 / 96.0;
  fVar25 = (float)roundf(fVar29 * 88.0);
  fVar26 = (float)roundf(fVar29 * 26.0);
  fVar27 = (float)roundf(fVar29 * 16.0);
  fVar29 = (float)roundf(fVar29 * 12.0);
  iVar5 = GetSystemMetrics(0xb);
  iVar4 = GetSystemMetrics(0xc);
  fVar28 = (float)roundf();
  if (0xff9b < (int)param_1[8]) {
    uVar9 = FUN_1400fbed0("Number of buttons exceeds limit of %d",0xff9b);
    if (DAT_1414ef3c0 == (local_a0 ^ (ulonglong)auStackY_3b8)) {
      return uVar9;
    }
    goto LAB_14046a57b;
  }
  iVar22 = (int)fVar27;
  uVar6 = *param_1 & 0x70;
  if (((uVar6 == 0x40) || (uVar6 == 0x20)) || (uVar6 == 0x10)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pHVar8 = CreateCompatibleDC((HDC)0x0);
  local_300[0].cx = 0x1f8;
  SystemParametersInfoW(0x29,0,local_300,0);
  local_108.lfHeight = local_168.lfHeight;
  local_108.lfWidth = local_168.lfWidth;
  local_108.lfEscapement = local_168.lfEscapement;
  local_108.lfOrientation = local_168.lfOrientation;
  local_108.lfWeight = local_168.lfWeight;
  local_108.lfItalic = local_168.lfItalic;
  local_108.lfUnderline = local_168.lfUnderline;
  local_108.lfStrikeOut = local_168.lfStrikeOut;
  local_108.lfCharSet = local_168.lfCharSet;
  local_108.lfOutPrecision = local_168.lfOutPrecision;
  local_108.lfClipPrecision = local_168.lfClipPrecision;
  local_108.lfQuality = local_168.lfQuality;
  local_108.lfPitchAndFamily = local_168.lfPitchAndFamily;
  local_108.lfFaceName[0] = local_168.lfFaceName[0];
  local_108.lfFaceName[1] = local_168.lfFaceName[1];
  local_108.lfFaceName[2] = local_168.lfFaceName[2];
  local_108.lfFaceName[3] = local_168.lfFaceName[3];
  local_108.lfFaceName[4] = local_168.lfFaceName[4];
  local_108.lfFaceName[5] = local_168.lfFaceName[5];
  local_108.lfFaceName[6] = local_168.lfFaceName[6];
  local_108.lfFaceName[7] = local_168.lfFaceName[7];
  local_108.lfFaceName[8] = local_168.lfFaceName[8];
  local_108.lfFaceName[9] = local_168.lfFaceName[9];
  local_108.lfFaceName[10] = local_168.lfFaceName[10];
  local_108.lfFaceName[0xb] = local_168.lfFaceName[0xb];
  local_108.lfFaceName[0xc] = local_168.lfFaceName[0xc];
  local_108.lfFaceName[0xd] = local_168.lfFaceName[0xd];
  local_108.lfFaceName[0xe] = local_168.lfFaceName[0xe];
  local_108.lfFaceName[0xf] = local_168.lfFaceName[0xf];
  local_108.lfFaceName[0x10] = local_168.lfFaceName[0x10];
  local_108.lfFaceName[0x11] = local_168.lfFaceName[0x11];
  local_108.lfFaceName[0x12] = local_168.lfFaceName[0x12];
  local_108.lfFaceName[0x13] = local_168.lfFaceName[0x13];
  local_108.lfFaceName[0x14] = local_168.lfFaceName[0x14];
  local_108.lfFaceName[0x15] = local_168.lfFaceName[0x15];
  local_108.lfFaceName[0x1c] = local_168.lfFaceName[0x1c];
  local_108.lfFaceName[0x1d] = local_168.lfFaceName[0x1d];
  local_108.lfFaceName[0x1e] = local_168.lfFaceName[0x1e];
  local_108.lfFaceName[0x1f] = local_168.lfFaceName[0x1f];
  h = CreateFontIndirectW(&local_108);
  SelectObject(pHVar8,h);
  GetTextMetricsW(pHVar8,(LPTEXTMETRICW)&local_108);
  GetTextExtentPoint32A
            (pHVar8,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",0x34,local_300);
  iVar17 = local_300[0].cx >> 0x1f;
  iVar7 = local_300[0].cx / 0x1a + iVar17;
  DAT_1416f2290 = ((iVar7 - iVar17) - ((iVar7 - iVar17) + 1 >> 0x1f)) + 1 >> 1;
  DAT_1416f2294 = local_108.lfHeight;
  lVar10 = FUN_1400fc570(*(undefined8 *)(param_1 + 6));
  lpchText = (LPCWSTR)FUN_14017b9c0("UTF-16LE","UTF-8",*(undefined8 *)(param_1 + 6),lVar10 + 1);
  local_318.left = 0;
  local_318.top = 0;
  local_318.right = 0;
  local_318.bottom = 0;
  DrawTextW(pHVar8,lpchText,-1,&local_318,0x2c00);
  local_318.top = iVar22 + local_318.top;
  local_318.left = iVar22 + local_318.left;
  local_318.bottom = iVar22 + 2 + local_318.bottom;
  local_318.right = iVar22 + 2 + local_318.right;
  DeleteDC(pHVar8);
  FUN_140160cf0(lpchText);
  iVar17 = (local_318.right - local_318.left) + iVar22 * 2;
  iVar7 = (local_318.bottom - local_318.top) + iVar22 * 2;
  if (!bVar2) {
    iVar5 = (int)fVar28 + iVar5;
    iVar17 = iVar17 + iVar5;
    local_318.left = local_318.left + iVar5;
    local_318.right = local_318.right + iVar5;
  }
  iVar18 = (int)fVar29 + (int)fVar25;
  iVar5 = param_1[8] * iVar18 + (int)fVar29;
  if (iVar5 < iVar17) {
    iVar5 = iVar17;
  }
  iVar4 = iVar4 + (int)fVar28 * 2;
  if (iVar4 < iVar7) {
    iVar4 = iVar7;
  }
  if (bVar2) {
    iVar4 = iVar7;
  }
  uVar1 = *(undefined8 *)(param_1 + 4);
  iVar7 = MulDiv((int)(short)iVar5,4,DAT_1416f2290);
  iVar4 = MulDiv((int)(short)((short)iVar22 + (short)(int)fVar26 + (short)iVar4),8,DAT_1416f2294);
  plVar11 = (longlong *)FUN_140160c70(1,0x28);
  if (plVar11 == (longlong *)0x0) {
LAB_14046a01f:
    uVar9 = 0;
  }
  else {
    uVar9 = plVar11[2];
    if (uVar9 != 0) {
      uVar23 = plVar11[3];
      if (uVar23 < 0xffffffffffffffe6) {
        uVar21 = uVar23 + 0x1a;
        if (uVar23 < 0xfffffffffffeffe6) {
          if (uVar9 < uVar21) {
            uVar21 = (uVar21 & 0xffffffffffff0000) + 0x10000;
            goto LAB_140469e12;
          }
        }
        else {
LAB_140469e12:
          if (uVar9 < uVar21) goto LAB_140469e24;
        }
        goto LAB_140469e44;
      }
LAB_14046a009:
      FUN_1400fc060();
LAB_14046a00e:
      FUN_140160cf0(plVar11[1]);
      plVar13 = plVar11;
LAB_14046a01a:
      FUN_140160cf0(plVar13);
      goto LAB_14046a01f;
    }
    uVar21 = 0x1000;
LAB_140469e24:
    lVar10 = FUN_140160cc0(plVar11[1],uVar21);
    if (lVar10 == 0) goto LAB_14046a00e;
    plVar11[1] = lVar10;
    plVar11[2] = uVar21;
    *plVar11 = lVar10;
LAB_140469e44:
    lVar10 = plVar11[1];
    lVar12 = plVar11[3];
    *(undefined4 *)(lVar10 + lVar12) = 0xffff0001;
    *(undefined8 *)(lVar10 + 4 + lVar12) = 0;
    *(undefined8 *)(lVar10 + 0xc + lVar12) = 0xc00848;
    *(undefined2 *)(lVar10 + 0x14 + lVar12) = 0;
    *(short *)(lVar10 + 0x16 + lVar12) = (short)iVar7;
    *(short *)(lVar10 + 0x18 + lVar12) = (short)iVar4;
    lVar10 = plVar11[3];
    uVar9 = lVar10 + 0x1a;
    plVar11[3] = uVar9;
    local_302 = 0;
    uVar23 = plVar11[2];
    if (uVar23 == 0) {
      uVar21 = 0x1000;
      goto LAB_140469ec7;
    }
    if (0xfffffffffffffffd < uVar9) goto LAB_14046a009;
    uVar21 = lVar10 + 0x1c;
    if (uVar21 < 0xffffffffffff0000) {
      if (uVar23 < uVar21) {
        uVar21 = (uVar21 & 0xffffffffffff0000) + 0x10000;
        goto LAB_140469ec7;
      }
      lVar10 = plVar11[1];
    }
    else {
LAB_140469ec7:
      lVar10 = plVar11[1];
      if (uVar23 < uVar21) {
        lVar10 = FUN_140160cc0(lVar10,uVar21);
        if (lVar10 == 0) goto LAB_14046a00e;
        plVar11[1] = lVar10;
        plVar11[2] = uVar21;
        *plVar11 = lVar10;
        uVar9 = plVar11[3];
      }
    }
    *(undefined2 *)(lVar10 + uVar9) = 0;
    uVar23 = plVar11[2];
    lVar10 = plVar11[3];
    uVar9 = lVar10 + 2;
    plVar11[3] = uVar9;
    if (uVar23 == 0) {
      uVar21 = 0x1000;
      goto LAB_140469f45;
    }
    if (0xfffffffffffffffd < uVar9) goto LAB_14046a009;
    uVar21 = lVar10 + 4;
    if (uVar21 < 0xffffffffffff0000) {
      if (uVar23 < uVar21) {
        uVar21 = (uVar21 & 0xffffffffffff0000) + 0x10000;
        goto LAB_140469f45;
      }
      lVar10 = plVar11[1];
    }
    else {
LAB_140469f45:
      lVar10 = plVar11[1];
      if (uVar23 < uVar21) {
        lVar10 = FUN_140160cc0(lVar10,uVar21);
        if (lVar10 == 0) goto LAB_14046a00e;
        plVar11[1] = lVar10;
        plVar11[2] = uVar21;
        *plVar11 = lVar10;
        uVar9 = plVar11[3];
      }
    }
    *(undefined2 *)(lVar10 + uVar9) = 0;
    plVar11[3] = plVar11[3] + 2;
    cVar3 = FUN_14046a850(plVar11,uVar1);
    if (cVar3 == '\0') goto LAB_14046a00e;
    local_300[0].cx = 0x158;
    SystemParametersInfoA(0x29,0,local_300,0);
    pHVar8 = GetDC((HWND)0x0);
    iVar22 = GetDeviceCaps(pHVar8,0x5a);
    iVar4 = 0x48;
    if (iVar22 != 0) {
      iVar4 = iVar22;
    }
    plVar13 = (longlong *)((longlong)(local_1e8 * -0x48) / (longlong)iVar4 & 0xffffffff);
    ReleaseDC((HWND)0x0,pHVar8);
    uVar9 = plVar11[2];
    if (uVar9 == 0) {
      uVar23 = 0x1000;
      goto LAB_14046a0a4;
    }
    uVar21 = plVar11[3];
    if (0xfffffffffffffffd < uVar21) goto LAB_14046a009;
    uVar23 = uVar21 + 2;
    if (uVar21 < 0xfffffffffffefffe) {
      if (uVar9 < uVar23) {
        uVar23 = (uVar23 & 0xffffffffffff0000) + 0x10000;
        goto LAB_14046a0a4;
      }
      lVar10 = plVar11[1];
    }
    else {
LAB_14046a0a4:
      lVar10 = plVar11[1];
      if (uVar9 < uVar23) {
        lVar10 = FUN_140160cc0(lVar10,uVar23);
        if (lVar10 == 0) goto LAB_14046a00e;
        plVar11[1] = lVar10;
        plVar11[2] = uVar23;
        *plVar11 = lVar10;
      }
    }
    *(short *)(lVar10 + plVar11[3]) = (short)plVar13;
    plVar11[3] = plVar11[3] + 2;
    local_302 = local_1d8;
    cVar3 = FUN_14046a7a0(plVar11,&local_302,2);
    if (cVar3 == '\0') goto LAB_14046a00e;
    local_303 = local_1d4;
    cVar3 = FUN_14046a7a0(plVar11,&local_303,1);
    if (cVar3 == '\0') goto LAB_14046a00e;
    local_303 = local_1d1;
    cVar3 = FUN_14046a7a0(plVar11,&local_303,1);
    if ((((cVar3 == '\0') || (cVar3 = FUN_14046a850(plVar11,local_1cc), cVar3 == '\0')) ||
        ((!bVar2 && (cVar3 = FUN_14046a9a0(plVar11,0x82,0x50020003), cVar3 == '\0')))) ||
       (cVar3 = FUN_14046a9a0(plVar11), cVar3 == '\0')) goto LAB_14046a00e;
    uVar6 = param_1[8];
    uVar9 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      iVar5 = iVar5 - uVar6 * iVar18;
      lVar10 = 0;
      iVar4 = 0;
      local_350 = 0;
      plVar13 = (longlong *)0x0;
LAB_14046a26f:
      lVar12 = (longlong)(int)(~(uint)lVar10 + (int)uVar9);
      if ((*param_1 & 0x80) != 0) {
        lVar12 = lVar10;
      }
      sVar20 = (short)iVar4;
      pcVar24 = *(char **)(*(longlong *)(param_1 + 10) + 8 + lVar12 * 0x10);
      if (pcVar24 != (char *)0x0) {
        uVar6 = *(uint *)(*(longlong *)(param_1 + 10) + lVar12 * 0x10);
        iVar4 = (uVar6 & 1) + iVar4;
        lVar12 = 1;
        uVar9 = 0;
        uVar23 = 0;
        do {
          if (pcVar24[uVar23] == '&') {
            uVar9 = uVar9 + 1;
          }
          else if (pcVar24[uVar23] == '\0') goto code_r0x00014046a2d3;
          uVar23 = uVar23 + 1;
          lVar12 = lVar12 + 1;
        } while( true );
      }
      goto LAB_14046a49f;
    }
    plVar14 = (longlong *)0x0;
LAB_14046a47e:
    FUN_140160cf0(plVar14);
    if (*(longlong *)(param_1 + 2) == 0) {
      hWndParent = (HWND)0x0;
    }
    else {
      hWndParent = *(HWND *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x180) + 8);
    }
    IVar16 = DialogBoxIndirectParamW
                       ((HINSTANCE)0x0,(LPCDLGTEMPLATEW)*plVar11,hWndParent,FUN_14046a590,
                        (LPARAM)param_1);
    uVar19 = (undefined7)((ulonglong)plVar13 >> 8);
    if ((IVar16 < 100) || ((longlong)(int)param_1[8] <= IVar16 + -100)) {
      switch(IVar16) {
      case 0:
        pcVar24 = "Invalid parent window handle";
        break;
      default:
        pcVar24 = "An unknown error occurred";
        break;
      case 0x14:
        *param_2 = 0xffffffff;
        uVar9 = CONCAT71(uVar19,1);
        goto LAB_14046a54b;
      case 0x32:
      case 0x33:
      case 0x34:
        pcVar24 = "Invalid message box pointer in dialog procedure";
        break;
      case 0x35:
        pcVar24 = "Couldn\'t find dialog control of the default enter-key button";
        break;
      case -1:
        pcVar24 = "The message box encountered an error.";
      }
      FUN_1400fbed0(pcVar24);
      uVar9 = 0;
    }
    else {
      *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 10) + 4 + (IVar16 + -100) * 0x10);
      uVar9 = CONCAT71(uVar19,1);
    }
LAB_14046a54b:
    FUN_140160cf0(plVar11[1]);
    FUN_140160cf0(plVar11);
  }
  if (DAT_1414ef3c0 == (local_a0 ^ (ulonglong)auStackY_3b8)) {
    return uVar9 & 0xffffffff;
  }
LAB_14046a57b:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_a0 ^ (ulonglong)auStackY_3b8);
code_r0x00014046a2d3:
  if (uVar9 != 0) {
    if (-uVar23 - 2 < uVar9) goto LAB_14046a49f;
    if ((plVar13 == (longlong *)0x0) || (local_350 < uVar9 + uVar23 + 1)) {
      uVar21 = lVar12 + uVar9;
      if (uVar21 < 0xfffffffffffffe00) {
        uVar21 = 0xfffffffffffffdff;
      }
      local_350 = (uVar9 - uVar21) + uVar23;
      FUN_140160cf0(plVar13);
      plVar13 = (longlong *)FUN_140160c40(local_350);
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14046a49f;
      }
    }
    if (uVar23 != 0xffffffffffffffff) {
      plVar14 = plVar13;
      uVar9 = uVar23;
      if ((uVar23 & 1) == 0) {
        cVar3 = *pcVar24;
        if (cVar3 == '&') {
          plVar14 = (longlong *)((longlong)plVar13 + 1);
          *(char *)plVar13 = '&';
          cVar3 = *pcVar24;
        }
        pcVar24 = pcVar24 + 1;
        *(char *)plVar14 = cVar3;
        plVar14 = (longlong *)((longlong)plVar14 + 1);
        uVar9 = uVar23 - 1;
      }
      if (uVar23 != 0) {
        lVar12 = 0;
        do {
          cVar3 = pcVar24[lVar12];
          if (cVar3 == '&') {
            *(char *)plVar14 = '&';
            plVar14 = (longlong *)((longlong)plVar14 + 1);
            cVar3 = pcVar24[lVar12];
          }
          *(char *)plVar14 = cVar3;
          cVar3 = pcVar24[lVar12 + 1];
          if (cVar3 == '&') {
            *(char *)((longlong)plVar14 + 1) = '&';
            pcVar15 = (char *)((longlong)plVar14 + 2);
            cVar3 = pcVar24[lVar12 + 1];
          }
          else {
            pcVar15 = (char *)((longlong)plVar14 + 1);
          }
          *pcVar15 = cVar3;
          plVar14 = (longlong *)(pcVar15 + 1);
          lVar12 = lVar12 + 2;
        } while (uVar9 + 1 != lVar12);
      }
    }
  }
  cVar3 = FUN_14046a9a0(plVar11,0x80,
                        (uint)((short)plVar11[4] == 0) * 0x20000 + (uint)(sVar20 == 0 & (byte)uVar6)
                        + 0x50010000,iVar5);
  if (cVar3 != '\0') {
    iVar5 = iVar5 + iVar18;
    lVar10 = lVar10 + 1;
    uVar9 = (ulonglong)(int)param_1[8];
    plVar14 = plVar13;
    if ((longlong)uVar9 <= lVar10) goto LAB_14046a47e;
    goto LAB_14046a26f;
  }
LAB_14046a49f:
  FUN_140160cf0(plVar11[1]);
  FUN_140160cf0(plVar11);
  goto LAB_14046a01a;
}

