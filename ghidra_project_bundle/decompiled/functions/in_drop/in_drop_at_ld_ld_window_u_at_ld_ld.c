/**
 * Function: in_drop_at_ld_ld_window_u_at_ld_ld
 * Address:  140460090
 * Signature: undefined in_drop_at_ld_ld_window_u_at_ld_ld(void)
 * Body size: 2936 bytes
 */


undefined8
in_drop_at_ld_ld_window_u_at_ld_ld
          (longlong param_1,longlong *param_2,undefined8 param_3,tagPOINT param_4,
          undefined4 *param_5)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  UINT UVar4;
  UINT UVar5;
  SIZE_T SVar6;
  HDROP pHVar7;
  HDROP _Dst;
  longlong lVar8;
  size_t sVar9;
  ulonglong _Size;
  void *_Dst_00;
  wchar_t *lpszFile;
  char *pcVar10;
  UINT iFile;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  HDROP local_1a0;
  LONG local_198;
  STGMEDIUM local_188;
  longlong *local_168;
  tagPOINT local_160;
  undefined2 local_158 [4];
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_1c8;
  *param_5 = 1;
  local_160 = param_4;
  BVar1 = ScreenToClient(*(HWND *)(param_1 + 0x18),&local_160);
  if (BVar1 == 0) {
    FUN_1400fb770(7,". In Drop at %ld, %ld => nil, nil",(ulonglong)param_4 & 0xffffffff,
                  (ulonglong)param_4 >> 0x20);
  }
  else {
    local_198 = local_160.y;
    local_1a0 = (HDROP)CONCAT44(local_1a0._4_4_,local_160.x);
    local_1a8 = CONCAT44(local_1a8._4_4_,**(undefined4 **)(param_1 + 0x10));
    FUN_1400fb770(7,". In Drop at %ld, %ld => window %u at %ld, %ld",(ulonglong)param_4 & 0xffffffff
                  ,(ulonglong)param_4 >> 0x20);
    FUN_14046b4f0(*(undefined8 *)(param_1 + 0x10),(float)local_160.x,(float)local_160.y);
  }
  iVar2 = (**(code **)(*param_2 + 0x40))(param_2,1,&local_168);
  FUN_1400fb770(7,". In Drop for EnumFormatEtc, HRESULT is %08lx",iVar2);
  if ((iVar2 == 0) &&
     (iVar2 = (**(code **)(*local_168 + 0x18))(local_168,1,&local_188,0), iVar2 == 0)) {
    do {
      memset(local_158,0,0x101);
      switch((ushort)local_188.tymed) {
      case 1:
        pcVar10 = "CF_TEXT";
        break;
      case 2:
        pcVar10 = "CF_BITMAP";
        break;
      case 3:
        pcVar10 = "CF_METAFILEPICT";
        break;
      case 4:
        pcVar10 = "CF_SYLK";
        break;
      case 5:
        pcVar10 = "CF_DIF";
        break;
      case 6:
        pcVar10 = "CF_TIFF";
        break;
      case 7:
        pcVar10 = "CF_OEMTEXT";
        break;
      case 8:
        pcVar10 = "CF_DIB";
        break;
      case 9:
        pcVar10 = "CF_PALETTE";
        break;
      case 10:
        pcVar10 = "CF_PENDATA";
        break;
      case 0xb:
        pcVar10 = "CF_RIFF";
        break;
      case 0xc:
        pcVar10 = "CF_WAVE";
        break;
      case 0xd:
        pcVar10 = "CF_UNICODETEXT";
        break;
      case 0xe:
        pcVar10 = "CF_ENHMETAFILE";
        break;
      case 0xf:
        pcVar10 = "CF_HDROP";
        break;
      case 0x10:
        pcVar10 = "CF_LOCALE";
        break;
      case 0x11:
        pcVar10 = "CF_DIBV5";
        break;
      default:
        iVar2 = GetClipboardFormatNameA((uint)(ushort)local_188.tymed,(LPSTR)local_158,0x100);
        pcVar10 = (char *)local_158;
        if (iVar2 != 0) break;
        FUN_1400fb770(7,". In Drop, Supported format is %08x, Predefined",(ushort)local_188.tymed);
        goto LAB_140460a11;
      case 0x80:
        pcVar10 = "CF_OWNERDISPLAY";
        break;
      case 0x81:
        pcVar10 = "CF_DSPTEXT";
        break;
      case 0x82:
        pcVar10 = "CF_DSPBITMAP";
        break;
      case 0x83:
        pcVar10 = "CF_DSPMETAFILEPICT";
        break;
      case 0x8e:
        pcVar10 = "CF_DSPENHMETAFILE";
      }
      FUN_1400fb770(7,". In Drop, Supported format is %08x, \'%s\'",(ushort)local_188.tymed,pcVar10)
      ;
LAB_140460a11:
      iVar2 = (**(code **)(*local_168 + 0x18))(local_168,1,&local_188,0);
    } while (iVar2 == 0);
  }
  local_158[0] = *(undefined2 *)(param_1 + 0x24);
  local_150 = 0;
  local_148 = 0xffffffff00000001;
  local_140 = 1;
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2,local_158);
  if (iVar2 < 0) {
LAB_140460348:
    local_158[0] = *(undefined2 *)(param_1 + 0x20);
    local_150 = 0;
    local_148 = 0xffffffff00000001;
    local_140 = 1;
    iVar2 = (**(code **)(*param_2 + 0x28))(param_2,local_158);
    if (-1 < iVar2) {
      FUN_1400fb770(7,". In Drop Text for QueryGetData, format %08x \'%s\', success",local_158[0],
                    "text/plain;charset=utf-8");
      iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_158,&local_188);
      local_1a8 = CONCAT44(local_1a8._4_4_,iVar2);
      FUN_1400fb770(7,". In Drop Text for      GetData, format %08x \'%s\', HRESULT is %08lx",
                    local_158[0],"text/plain;charset=utf-8");
      if (-1 < iVar2) {
        SVar6 = GlobalSize(local_188.u.hGlobal);
        pHVar7 = GlobalLock(local_188.u.hGlobal);
        local_1a8 = CONCAT44(local_1a8._4_4_,(int)SVar6);
        local_1a0 = pHVar7;
        FUN_1400fb770(7,". In Drop Text for   GlobalLock, format %08x \'%s\', memory (%lu) %p",
                      local_158[0],"text/plain;charset=utf-8");
        if (pHVar7 != (HDROP)0x0) {
          _Dst = (HDROP)FUN_140160c40(SVar6 + 4);
          memcpy(_Dst,pHVar7,SVar6);
          *(undefined4 *)((longlong)&_Dst->unused + SVar6) = 0;
          local_168 = (longlong *)0x0;
          lVar8 = FUN_14017c090(_Dst,"\r\n",&local_168);
          if (lVar8 != 0) {
            do {
              uVar3 = FUN_1400fc570(lVar8);
              local_1a8 = lVar8;
              FUN_1400fb770(7,". In Drop Text, text (%lu of %lu) \'%s\'",uVar3,SVar6 & 0xffffffff);
              FUN_14046b6e0(*(undefined8 *)(param_1 + 0x10),lVar8);
              lVar8 = FUN_14017c090(0,"\r\n",&local_168);
            } while (lVar8 != 0);
          }
          goto LAB_140460854;
        }
        goto LAB_140460859;
      }
    }
    local_158[0] = 0xd;
    local_150 = 0;
    local_148 = 0xffffffff00000001;
    local_140 = 1;
    iVar2 = (**(code **)(*param_2 + 0x28))(param_2,local_158);
    if (-1 < iVar2) {
      FUN_1400fb770(7,". In Drop Text for QueryGetData, format %08x \'%s\', success",local_158[0],
                    "CF_UNICODETEXT");
      iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_158,&local_188);
      local_1a8 = CONCAT44(local_1a8._4_4_,iVar2);
      FUN_1400fb770(7,". In Drop Text for      GetData, format %08x \'%s\', HRESULT is %08lx",
                    local_158[0],"CF_UNICODETEXT");
      if (-1 < iVar2) {
        SVar6 = GlobalSize(local_188.u.hGlobal);
        pHVar7 = GlobalLock(local_188.u.hGlobal);
        local_1a8 = CONCAT44(local_1a8._4_4_,(int)SVar6);
        local_1a0 = pHVar7;
        FUN_1400fb770(7,". In Drop Text for   GlobalLock, format %08x \'%s\', memory (%lu) %p",
                      local_158[0],"CF_UNICODETEXT");
        if (pHVar7 != (HDROP)0x0) {
          sVar9 = wcslen((wchar_t *)pHVar7);
          _Dst = (HDROP)FUN_14017b9c0("UTF-8","UTF-16LE",pHVar7,sVar9 * 2 + 2);
          if (_Dst != (HDROP)0x0) {
            _Size = FUN_1400fc570(_Dst);
            local_1a8 = CONCAT44(local_1a8._4_4_,(int)_Size);
            local_1a0 = _Dst;
            FUN_1400fb770(7,". In Drop Text for StringToUTF8, format %08x \'%s\', memory (%lu) %p",
                          local_158[0],"CF_UNICODETEXT");
            _Dst_00 = (void *)FUN_140160c40(_Size + 4);
            memcpy(_Dst_00,_Dst,_Size);
            *(undefined4 *)((longlong)_Dst_00 + _Size) = 0;
            local_168 = (longlong *)0x0;
            lVar8 = FUN_14017c090(_Dst_00,"\r\n",&local_168);
            if (lVar8 != 0) {
              do {
                uVar3 = FUN_1400fc570(lVar8);
                local_1a8 = lVar8;
                FUN_1400fb770(7,". In Drop Text, text (%lu of %lu) \'%s\'",uVar3,_Size & 0xffffffff)
                ;
                FUN_14046b6e0(*(undefined8 *)(param_1 + 0x10),lVar8);
                lVar8 = FUN_14017c090(0,"\r\n",&local_168);
              } while (lVar8 != 0);
            }
            FUN_140160cf0(_Dst_00);
            goto LAB_140460854;
          }
        }
        goto LAB_140460859;
      }
    }
    local_158[0] = 1;
    local_150 = 0;
    local_148 = 0xffffffff00000001;
    local_140 = 1;
    iVar2 = (**(code **)(*param_2 + 0x28))(param_2,local_158);
    if (-1 < iVar2) {
      FUN_1400fb770(7,". In Drop Text for QueryGetData, format %08x \'%s\', success",local_158[0],
                    "CF_TEXT");
      iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_158,&local_188);
      local_1a8 = CONCAT44(local_1a8._4_4_,iVar2);
      FUN_1400fb770(7,". In Drop Text for      GetData, format %08x \'%s\', HRESULT is %08lx",
                    local_158[0],"CF_TEXT");
      if (-1 < iVar2) {
        SVar6 = GlobalSize(local_188.u.hGlobal);
        pHVar7 = GlobalLock(local_188.u.hGlobal);
        local_1a8 = CONCAT44(local_1a8._4_4_,(int)SVar6);
        local_1a0 = pHVar7;
        FUN_1400fb770(7,". In Drop Text for   GlobalLock, format %08x \'%s\', memory (%lu) %p",
                      local_158[0],"CF_TEXT");
        if (pHVar7 != (HDROP)0x0) {
          _Dst = (HDROP)FUN_140160c40(SVar6 + 4);
          memcpy(_Dst,pHVar7,SVar6);
          *(undefined4 *)((longlong)&_Dst->unused + SVar6) = 0;
          local_168 = (longlong *)0x0;
          lVar8 = FUN_14017c090(_Dst,"\r\n",&local_168);
          if (lVar8 != 0) {
            do {
              uVar3 = FUN_1400fc570(lVar8);
              local_1a8 = lVar8;
              FUN_1400fb770(7,". In Drop Text, text (%lu of %lu) \'%s\'",uVar3,SVar6 & 0xffffffff);
              FUN_14046b6e0(*(undefined8 *)(param_1 + 0x10),lVar8);
              lVar8 = FUN_14017c090(0,"\r\n",&local_168);
            } while (lVar8 != 0);
          }
          goto LAB_140460854;
        }
        goto LAB_140460859;
      }
    }
    local_158[0] = 0xf;
    local_150 = 0;
    local_148 = 0xffffffff00000001;
    local_140 = 1;
    iVar2 = (**(code **)(*param_2 + 0x28))(param_2,local_158);
    if (iVar2 < 0) goto LAB_14046086f;
    FUN_1400fb770(7,". In Drop File for QueryGetData, format %08x \'%s\', success",local_158[0],
                  "CF_HDROP");
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_158,&local_188);
    local_1a8 = CONCAT44(local_1a8._4_4_,iVar2);
    FUN_1400fb770(7,". In Drop File for      GetData, format %08x \'%s\', HRESULT is %08lx",
                  local_158[0],"CF_HDROP");
    if (iVar2 < 0) goto LAB_14046086f;
    SVar6 = GlobalSize(local_188.u.hGlobal);
    pHVar7 = GlobalLock(local_188.u.hGlobal);
    local_1a8 = CONCAT44(local_1a8._4_4_,(int)SVar6);
    local_1a0 = pHVar7;
    FUN_1400fb770(7,". In Drop File for   GlobalLock, format %08x \'%s\', memory (%lu) %p",
                  local_158[0],"CF_HDROP");
    iFile = 0;
    UVar4 = DragQueryFileW(pHVar7,0xffffffff,(LPWSTR)0x0,0);
    if (UVar4 != 0) {
      do {
        UVar5 = DragQueryFileW(pHVar7,iFile,(LPWSTR)0x0,0);
        lpszFile = (wchar_t *)FUN_140160c40((ulonglong)(UVar5 + 1) * 2);
        if (lpszFile != (wchar_t *)0x0) {
          UVar5 = DragQueryFileW(pHVar7,iFile,lpszFile,UVar5 + 1);
          if (UVar5 != 0) {
            sVar9 = wcslen(lpszFile);
            lVar8 = FUN_14017b9c0("UTF-8","UTF-16LE",lpszFile,sVar9 * 2 + 2);
            uVar3 = FUN_1400fc570(lVar8);
            local_1a8 = lVar8;
            FUN_1400fb770(7,". In Drop File, file (%lu of %lu) \'%s\'",uVar3);
            FUN_14046b270(*(undefined8 *)(param_1 + 0x10),0);
            FUN_140160cf0(lVar8);
          }
          FUN_140160cf0(lpszFile);
        }
        iFile = iFile + 1;
      } while (UVar4 != iFile);
    }
  }
  else {
    FUN_1400fb770(7,". In Drop File for QueryGetData, format %08x \'%s\', success",local_158[0],
                  "text/uri-list");
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_158,&local_188);
    local_1a8 = CONCAT44(local_1a8._4_4_,iVar2);
    FUN_1400fb770(7,". In Drop File for      GetData, format %08x \'%s\', HRESULT is %08lx",
                  local_158[0],"text/uri-list");
    if (iVar2 < 0) goto LAB_140460348;
    SVar6 = GlobalSize(local_188.u.hGlobal);
    pHVar7 = GlobalLock(local_188.u.hGlobal);
    local_1a8 = CONCAT44(local_1a8._4_4_,(int)SVar6);
    local_1a0 = pHVar7;
    FUN_1400fb770(7,". In Drop File for   GlobalLock, format %08x \'%s\', memory (%lu) %p",
                  local_158[0],"text/uri-list");
    if (pHVar7 != (HDROP)0x0) {
      _Dst = (HDROP)FUN_140160c40(SVar6 + 4);
      memcpy(_Dst,pHVar7,SVar6);
      *(undefined4 *)((longlong)&_Dst->unused + SVar6) = 0;
      local_168 = (longlong *)0x0;
      lVar8 = FUN_14017c090(_Dst,"\r\n",&local_168);
      if (lVar8 != 0) {
        do {
          iVar2 = FUN_1403d9210(lVar8,lVar8);
          if (-1 < iVar2) {
            uVar3 = FUN_1400fc570(lVar8);
            local_1a8 = lVar8;
            FUN_1400fb770(7,". In Drop File, file (%lu of %lu) \'%s\'",uVar3,SVar6 & 0xffffffff);
            FUN_14046b270(*(undefined8 *)(param_1 + 0x10),0,lVar8);
          }
          lVar8 = FUN_14017c090(0,"\r\n",&local_168);
        } while (lVar8 != 0);
      }
LAB_140460854:
      FUN_140160cf0(_Dst);
    }
  }
LAB_140460859:
  GlobalUnlock(local_188.u.hGlobal);
  ReleaseStgMedium(&local_188);
LAB_14046086f:
  FUN_14046b710(*(undefined8 *)(param_1 + 0x10));
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_1c8)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_1c8);
}

