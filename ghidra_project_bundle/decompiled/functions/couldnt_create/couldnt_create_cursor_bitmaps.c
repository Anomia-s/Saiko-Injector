/**
 * Function: couldnt_create_cursor_bitmaps
 * Address:  140468590
 * Signature: undefined couldnt_create_cursor_bitmaps(void)
 * Body size: 1211 bytes
 */


HICON couldnt_create_cursor_bitmaps(longlong param_1,longlong param_2,uint param_3)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  void *_Dst;
  HBITMAP pHVar4;
  HBITMAP pHVar5;
  HICON pHVar6;
  longlong lVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  size_t _Size;
  undefined1 auStackY_108 [32];
  ICONINFO local_a8;
  char local_82;
  char local_81;
  char local_80;
  undefined7 uStack_7f;
  BITMAPINFO local_74;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_108;
  iVar11 = *(int *)(param_1 + 0xc);
  bVar2 = true;
  lVar7 = param_2;
  if ((0 < iVar11) && (iVar3 = *(int *)(param_1 + 8), 0 < iVar3)) {
    iVar14 = 0;
    do {
      if (0 < iVar3) {
        iVar11 = 0;
        do {
          parameter_s_is_invalid(param_1,iVar11,iVar14,&local_74);
          lVar7 = 0;
          if (((((char)local_74.bmiHeader.biSize != '\0' || (char)local_a8.fIcon != '\0') ||
                local_80 != '\0') &&
              ((((char)local_74.bmiHeader.biSize != -1 || ((char)local_a8.fIcon != -1)) ||
               (local_80 != -1)))) || (1 < (byte)(local_81 + 1U))) {
            iVar11 = *(int *)(param_1 + 0xc);
            bVar2 = false;
            goto LAB_14046869a;
          }
          iVar11 = iVar11 + 1;
          iVar3 = *(int *)(param_1 + 8);
        } while (iVar11 < iVar3);
        iVar11 = *(int *)(param_1 + 0xc);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar11);
    bVar2 = true;
  }
LAB_14046869a:
  local_a8._0_8_ = param_2 << 0x20;
  local_a8._12_4_ = 0;
  local_a8.yHotspot = param_3;
  uVar10 = *(int *)(param_1 + 8) + 0xf >> 3 & 0xfffffffe;
  iVar11 = iVar11 * uVar10;
  _Dst = (void *)FUN_140160c40((longlong)(iVar11 << bVar2));
  if (_Dst == (void *)0x0) {
LAB_1404688fb:
    pHVar4 = (HBITMAP)0x0;
  }
  else {
    _Size = (size_t)iVar11;
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)lVar7 >> 8),0xff),_Size);
    if (bVar2) {
      memset((void *)((longlong)_Dst + _Size),0,_Size);
    }
    iVar3 = *(int *)(param_1 + 8);
    iVar14 = *(int *)(param_1 + 0xc);
    if ((0 < iVar14) && (0 < iVar3)) {
      if (bVar2) {
        iVar9 = 0;
        pvVar8 = _Dst;
        do {
          if (0 < iVar3) {
            uVar13 = 0;
            do {
              uVar12 = (uint)uVar13;
              parameter_s_is_invalid(param_1,uVar13,iVar9,&local_74);
              if (local_82 != '\0') {
                pbVar1 = (byte *)((longlong)pvVar8 + (uVar13 >> 3));
                *pbVar1 = *pbVar1 & ~(&DAT_140e196b0)[uVar12 & 7];
              }
              if ((((char)local_74.bmiHeader.biSize != '\0') || (local_80 != '\0')) ||
                 (local_81 != '\0')) {
                pbVar1 = (byte *)((longlong)pvVar8 + (longlong)((int)(uVar13 >> 3) + iVar11));
                *pbVar1 = *pbVar1 | (&DAT_140e196b0)[uVar12 & 7];
              }
              uVar13 = (ulonglong)(uVar12 + 1);
              iVar3 = *(int *)(param_1 + 8);
            } while ((int)(uVar12 + 1) < iVar3);
            iVar14 = *(int *)(param_1 + 0xc);
          }
          iVar9 = iVar9 + 1;
          pvVar8 = (void *)((longlong)pvVar8 + (longlong)(int)uVar10);
        } while (iVar9 < iVar14);
      }
      else {
        iVar11 = 0;
        pvVar8 = _Dst;
        do {
          if (0 < iVar3) {
            uVar13 = 0;
            do {
              parameter_s_is_invalid(param_1,uVar13,iVar11,&local_74);
              if (local_82 != '\0') {
                pbVar1 = (byte *)((longlong)pvVar8 + (uVar13 >> 3));
                *pbVar1 = *pbVar1 & ~(&DAT_140e196b0)[(uint)uVar13 & 7];
              }
              uVar12 = (uint)uVar13 + 1;
              uVar13 = (ulonglong)uVar12;
              iVar3 = *(int *)(param_1 + 8);
            } while ((int)uVar12 < iVar3);
            iVar14 = *(int *)(param_1 + 0xc);
          }
          iVar11 = iVar11 + 1;
          pvVar8 = (void *)((longlong)pvVar8 + (longlong)(int)uVar10);
        } while (iVar11 < iVar14);
      }
    }
    pHVar4 = CreateBitmap(iVar3,iVar14 << bVar2,1,1,_Dst);
    FUN_140160cf0(_Dst);
    if (pHVar4 == (HBITMAP)0x0) {
      FUN_1403d7710("CreateBitmap()");
      goto LAB_1404688fb;
    }
  }
  pHVar5 = (HBITMAP)0x0;
  local_a8.hbmMask = pHVar4;
  if (!bVar2) {
    local_74.bmiHeader.biSizeImage = 0;
    local_74.bmiHeader.biXPelsPerMeter = 0;
    local_74.bmiHeader.biYPelsPerMeter = 0;
    local_74.bmiHeader.biClrUsed = 0;
    local_74.bmiHeader.biClrImportant = 0;
    local_74.bmiColors[0].rgbBlue = '\0';
    local_74.bmiColors[0].rgbGreen = '\0';
    local_74.bmiColors[0].rgbRed = '\0';
    local_74.bmiColors[0].rgbReserved = '\0';
    local_74.bmiHeader.biSize = 0x28;
    local_74.bmiHeader.biWidth = *(LONG *)(param_1 + 8);
    local_74.bmiHeader.biHeight = -*(int *)(param_1 + 0xc);
    local_74.bmiHeader.biPlanes = 1;
    local_74.bmiHeader.biBitCount = 0x20;
    local_74.bmiHeader.biCompression = 0;
    pHVar5 = CreateDIBSection((HDC)0x0,&local_74,0,(void **)&local_80,(HANDLE)0x0,0);
    if (pHVar5 == (HBITMAP)0x0 || (void *)CONCAT71(uStack_7f,local_80) == (void *)0x0) {
      FUN_1403d7710("CreateDIBSection()");
      pHVar5 = (HBITMAP)0x0;
    }
    else {
      memcpy((void *)CONCAT71(uStack_7f,local_80),*(void **)(param_1 + 0x18),
             (longlong)*(int *)(param_1 + 0xc) * (longlong)*(int *)(param_1 + 0x10));
    }
  }
  local_a8.hbmColor = pHVar5;
  if (((~bVar2 & pHVar5 == (HBITMAP)0x0) == 0) && (pHVar4 != (HBITMAP)0x0)) {
    pHVar6 = CreateIconIndirect(&local_a8);
    DeleteObject(local_a8.hbmMask);
    if (local_a8.hbmColor != (HBITMAP)0x0) {
      DeleteObject(local_a8.hbmColor);
    }
    if (pHVar6 != (HICON)0x0) goto LAB_140468a22;
    FUN_1403d7710("CreateIconIndirect()");
  }
  else {
    FUN_1400fbed0("Couldn\'t create cursor bitmaps");
  }
  pHVar6 = (HICON)0x0;
LAB_140468a22:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStackY_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStackY_108);
  }
  return pHVar6;
}

