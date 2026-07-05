/**
 * Function: couldnt_open_clipboard
 * Address:  140466d60
 * Signature: undefined couldnt_open_clipboard(void)
 * Body size: 1074 bytes
 */


ulonglong couldnt_open_clipboard(longlong param_1)

{
  size_t _Size;
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  short *psVar9;
  HGLOBAL pvVar10;
  LPVOID _Dst;
  HANDLE pvVar11;
  short sVar12;
  ulonglong uVar13;
  HWND hWndNewOwner;
  ulonglong uVar14;
  ulonglong _Size_00;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x340) == 0) {
    hWndNewOwner = (HWND)0x0;
  }
  else {
    hWndNewOwner = *(HWND *)(*(longlong *)(*(longlong *)(param_1 + 0x340) + 0x180) + 8);
  }
  lVar1 = *(longlong *)(param_1 + 0x678);
  BVar3 = OpenClipboard(hWndNewOwner);
  if (BVar3 == 0) {
    FUN_140118490(10);
    BVar3 = OpenClipboard(hWndNewOwner);
    if (BVar3 == 0) {
      FUN_140118490(10);
      BVar3 = OpenClipboard(hWndNewOwner);
      if (BVar3 == 0) {
        FUN_140118490(10);
        if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_78)) {
          uVar13 = FUN_1403d7710("Couldn\'t open clipboard");
          return uVar13;
        }
        goto LAB_140467193;
      }
    }
  }
  EmptyClipboard();
  if (*(longlong *)(param_1 + 0x378) != 0) {
    uVar13 = 0;
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x370) + uVar13 * 8);
      cVar2 = FUN_1401435a0(lVar8);
      if (cVar2 != '\0') {
        lVar6 = (**(code **)(param_1 + 0x358))(*(undefined8 *)(param_1 + 0x368),lVar8,&local_50);
        lVar7 = lVar8;
        if (local_50 == 0 || lVar6 == 0) goto LAB_140466fe2;
        lVar7 = FUN_14017b9c0("UTF-16LE","UTF-8",lVar6);
        if (lVar7 == 0) {
          cVar2 = FUN_1400fbed0("Couldn\'t convert text from UTF-8");
          lVar7 = lVar8;
          goto joined_r0x000140466f49;
        }
        lVar8 = 0;
        lVar6 = 0;
        goto LAB_140466eaa;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(ulonglong *)(param_1 + 0x378));
    uVar13 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
    if (*(ulonglong *)(param_1 + 0x378) == 0) goto LAB_14046712a;
    goto LAB_140466ff5;
  }
  uVar13 = CONCAT71((int7)((ulonglong)hWndNewOwner >> 8),1);
  goto LAB_14046712a;
LAB_140466eaa:
  sVar12 = *(short *)(lVar7 + lVar8 * 2);
  if (sVar12 == 10) {
    if ((lVar8 == 0) || (*(short *)(lVar7 + -2 + lVar8 * 2) != 0xd)) {
      lVar6 = lVar6 + 1;
    }
  }
  else if (sVar12 == 0) goto LAB_140466ec5;
  lVar8 = lVar8 + 1;
  lVar6 = lVar6 + 1;
  goto LAB_140466eaa;
LAB_140466ec5:
  pvVar10 = GlobalAlloc(2,lVar6 * 2 + 2);
  if (pvVar10 != (HGLOBAL)0x0) {
    psVar9 = GlobalLock(pvVar10);
    if (psVar9 != (short *)0x0) {
      lVar8 = 0;
      do {
        sVar12 = *(short *)(lVar7 + lVar8 * 2);
        if (sVar12 == 10) {
          if ((lVar8 == 0) || (sVar12 = 10, *(short *)(lVar7 + -2 + lVar8 * 2) != 0xd)) {
            *psVar9 = 0xd;
            psVar9 = psVar9 + 1;
            sVar12 = *(short *)(lVar7 + lVar8 * 2);
          }
        }
        else if (sVar12 == 0) goto LAB_140466f92;
        *psVar9 = sVar12;
        psVar9 = psVar9 + 1;
        lVar8 = lVar8 + 1;
      } while( true );
    }
    goto LAB_140466fa0;
  }
  cVar2 = FUN_1400fc060();
LAB_140466fd0:
  FUN_140160cf0(lVar7);
joined_r0x000140466f49:
  if (cVar2 != '\0') goto LAB_140466fe2;
  uVar13 = 0;
  lVar8 = *(longlong *)(param_1 + 0x378);
  goto joined_r0x000140466fef;
LAB_140466f92:
  *psVar9 = 0;
  GlobalUnlock(pvVar10);
LAB_140466fa0:
  pvVar11 = SetClipboardData(0xd,pvVar10);
  if (pvVar11 == (HANDLE)0x0) {
    cVar2 = FUN_1403d7710("Couldn\'t set clipboard data");
    goto LAB_140466fd0;
  }
  FUN_140160cf0(lVar7);
LAB_140466fe2:
  uVar13 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  lVar8 = *(longlong *)(param_1 + 0x378);
joined_r0x000140466fef:
  if (lVar8 != 0) {
LAB_140466ff5:
    uVar14 = 0;
    do {
      iVar4 = FUN_1400fd200(*(undefined8 *)(*(longlong *)(param_1 + 0x370) + uVar14 * 8),"image/bmp"
                           );
      if (iVar4 == 0) {
        psVar9 = (short *)(**(code **)(param_1 + 0x358))
                                    (*(undefined8 *)(param_1 + 0x368),"image/bmp",&local_50);
        if ((local_50 < 0xf || psVar9 == (short *)0x0) || (*psVar9 != 0x4d42)) {
LAB_14046711c:
          FUN_1400fbed0("Invalid BMP data");
        }
        else {
          uVar14 = (ulonglong)*(uint *)(psVar9 + 5);
          if ((uVar14 < (ulonglong)*(uint *)(psVar9 + 7) + (ulonglong)*(uint *)(psVar9 + 0x17) * 4 +
                        0xe) ||
             (_Size_00 = (ulonglong)*(uint *)(psVar9 + 0x11), local_50 < uVar14 + _Size_00))
          goto LAB_14046711c;
          _Size = (ulonglong)*(uint *)(psVar9 + 7) + (ulonglong)*(uint *)(psVar9 + 0x17) * 4;
          pvVar10 = GlobalAlloc(2,_Size + _Size_00);
          if (pvVar10 == (HGLOBAL)0x0) {
            FUN_1400fc060();
          }
          else {
            _Dst = GlobalLock(pvVar10);
            if (_Dst == (LPVOID)0x0) {
              FUN_1403d7710("GlobalLock()");
              GlobalFree(pvVar10);
            }
            else {
              memcpy(_Dst,psVar9 + 7,_Size);
              memcpy((void *)((longlong)_Dst + _Size),(void *)(uVar14 + (longlong)psVar9),_Size_00);
              GlobalUnlock(pvVar10);
              pvVar11 = SetClipboardData(8,pvVar10);
              if ((pvVar11 != (HANDLE)0x0) ||
                 (cVar2 = FUN_1403d7710("Couldn\'t set clipboard data"), cVar2 != '\0')) break;
            }
          }
        }
        uVar13 = 0;
        break;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(ulonglong *)(param_1 + 0x378));
  }
LAB_14046712a:
  DVar5 = GetClipboardSequenceNumber();
  *(DWORD *)(lVar1 + 8) = DVar5;
  CloseClipboard();
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_78)) {
    return uVar13 & 0xffffffff;
  }
LAB_140467193:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_78);
}

