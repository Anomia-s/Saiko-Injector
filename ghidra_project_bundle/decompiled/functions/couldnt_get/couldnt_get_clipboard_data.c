/**
 * Function: couldnt_get_clipboard_data
 * Address:  1404671b0
 * Signature: undefined couldnt_get_clipboard_data(void)
 * Body size: 863 bytes
 */


undefined2 * couldnt_get_clipboard_data(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  HANDLE pvVar5;
  wchar_t *_Str;
  size_t sVar6;
  undefined2 *puVar7;
  longlong lVar8;
  SIZE_T SVar9;
  uint *_Src;
  char *pcVar10;
  longlong lVar11;
  HWND pHVar12;
  ulonglong _Size;
  
  cVar2 = FUN_1401435a0(param_2);
  if (cVar2 != '\0') {
    BVar3 = IsClipboardFormatAvailable(0xd);
    if (BVar3 != 0) {
      if (*(longlong *)(param_1 + 0x340) == 0) {
        pHVar12 = (HWND)0x0;
        iVar4 = OpenClipboard((HWND)0x0);
      }
      else {
        pHVar12 = *(HWND *)(*(longlong *)(*(longlong *)(param_1 + 0x340) + 0x180) + 8);
        iVar4 = OpenClipboard(pHVar12);
      }
      if (iVar4 == 0) {
        FUN_140118490(10);
        BVar3 = OpenClipboard(pHVar12);
        if (BVar3 == 0) {
          FUN_140118490(10);
          BVar3 = OpenClipboard(pHVar12);
          if (BVar3 == 0) {
            FUN_140118490(10);
            goto LAB_140467350;
          }
        }
      }
      pvVar5 = GetClipboardData(0xd);
      if (pvVar5 == (HANDLE)0x0) {
        pcVar10 = "Couldn\'t get clipboard data";
      }
      else {
        _Str = GlobalLock(pvVar5);
        if (_Str != (wchar_t *)0x0) {
          sVar6 = wcslen(_Str);
          puVar7 = (undefined2 *)FUN_14017b9c0("UTF-8","UTF-16LE",_Str,sVar6 * 2 + 2);
          GlobalUnlock(pvVar5);
          CloseClipboard();
          if (puVar7 != (undefined2 *)0x0) goto LAB_14046735f;
          goto LAB_140467350;
        }
        pcVar10 = "Couldn\'t lock clipboard data";
      }
      FUN_1403d7710(pcVar10);
      CloseClipboard();
    }
LAB_140467350:
    puVar7 = (undefined2 *)FUN_1400fcda0(&DAT_1413a2ad6);
LAB_14046735f:
    lVar8 = FUN_1400fc570(puVar7);
    *param_3 = lVar8;
    return puVar7;
  }
  iVar4 = FUN_1400fd200(param_2,"image/bmp");
  if (iVar4 != 0) {
    puVar7 = (undefined2 *)FUN_1401435c0(param_1,param_2,param_3);
    return puVar7;
  }
  BVar3 = IsClipboardFormatAvailable(8);
  if (BVar3 == 0) {
    return (undefined2 *)0x0;
  }
  if (*(longlong *)(param_1 + 0x340) == 0) {
    pHVar12 = (HWND)0x0;
    iVar4 = OpenClipboard((HWND)0x0);
  }
  else {
    pHVar12 = *(HWND *)(*(longlong *)(*(longlong *)(param_1 + 0x340) + 0x180) + 8);
    iVar4 = OpenClipboard(pHVar12);
  }
  if (iVar4 == 0) {
    FUN_140118490(10);
    BVar3 = OpenClipboard(pHVar12);
    if (BVar3 == 0) {
      FUN_140118490(10);
      BVar3 = OpenClipboard(pHVar12);
      if (BVar3 == 0) {
        FUN_140118490(10);
        return (undefined2 *)0x0;
      }
    }
  }
  pvVar5 = GetClipboardData(8);
  if (pvVar5 == (HANDLE)0x0) {
    pcVar10 = "Couldn\'t get clipboard data";
LAB_140467458:
    FUN_1403d7710(pcVar10);
  }
  else {
    SVar9 = GlobalSize(pvVar5);
    if (0x28 < SVar9) {
      _Src = GlobalLock(pvVar5);
      if (_Src == (uint *)0x0) {
        pcVar10 = "GlobalLock()";
        goto LAB_140467458;
      }
      uVar1 = _Src[4];
      if (uVar1 == 6) {
        lVar8 = 0x10;
      }
      else if (uVar1 == 3) {
        lVar8 = 0xc;
      }
      else {
        if (uVar1 == 0) {
          if (8 < *(ushort *)((longlong)_Src + 0xe)) {
            lVar8 = 0;
            goto LAB_14046749a;
          }
          uVar1 = 1 << ((byte)*(ushort *)((longlong)_Src + 0xe) & 0x1f);
          if (_Src[8] != 0) {
            uVar1 = _Src[8];
          }
        }
        else {
          uVar1 = _Src[8];
        }
        lVar8 = (ulonglong)uVar1 << 2;
      }
LAB_14046749a:
      _Size = (ulonglong)_Src[5] + (ulonglong)*_Src + lVar8;
      if (SVar9 < _Size) {
        FUN_1400fbed0("Invalid BMP data");
LAB_1404674fe:
        puVar7 = (undefined2 *)0x0;
      }
      else {
        lVar11 = SVar9 + 0xe;
        puVar7 = (undefined2 *)FUN_140160c40(lVar11);
        if (puVar7 == (undefined2 *)0x0) goto LAB_1404674fe;
        *puVar7 = 0x4d42;
        *(int *)(puVar7 + 1) = (int)lVar11;
        *(undefined4 *)(puVar7 + 3) = 0;
        *(int *)(puVar7 + 5) = (int)lVar8 + 0x36;
        memcpy(puVar7 + 7,_Src,_Size);
        *param_3 = lVar11;
      }
      GlobalUnlock(pvVar5);
      goto LAB_140467460;
    }
    FUN_1400fbed0("Invalid BMP data");
  }
  puVar7 = (undefined2 *)0x0;
LAB_140467460:
  CloseClipboard();
  return puVar7;
}

