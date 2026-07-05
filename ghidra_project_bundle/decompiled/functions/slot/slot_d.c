/**
 * Function: slot_d
 * Address:  14043f550
 * Signature: undefined slot_d(void)
 * Body size: 1467 bytes
 */


undefined8 slot_d(void)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  LPCWSTR lpFileName;
  HANDLE hFile;
  byte *pbVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  _FILETIME _Var13;
  byte *pbVar14;
  byte *_Str;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  char *_Str_00;
  undefined1 auStackY_c8 [32];
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  uint local_54;
  _FILETIME local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_c8;
  httplib::ClientImpl::vfunction4();
  if ((DAT_1416f1728 != 0) &&
     (uVar6 = sdl_timer_resolution(), lVar9 = DAT_1416f1728,
     DAT_1416f1738 == 0 || DAT_1416f1738 + 3000 <= uVar6)) {
    DAT_1416f1738 = uVar6;
    lVar7 = FUN_1400fc570(DAT_1416f1728);
    lpFileName = (LPCWSTR)FUN_14017b9c0("UTF-16LE","UTF-8",lVar9,lVar7 + 1);
    if (lpFileName != (LPCWSTR)0x0) {
      _Var13.dwLowDateTime = 0;
      _Var13.dwHighDateTime = 0;
      hFile = CreateFileW(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffffffffffff) {
        _Var13.dwLowDateTime = 0;
        _Var13.dwHighDateTime = 0;
        BVar2 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_50);
        if (BVar2 != 0) {
          _Var13 = local_50;
        }
        CloseHandle(hFile);
      }
      FUN_140160cf0(lpFileName);
      uVar11 = 0;
      if ((_Var13 == (_FILETIME)0x0) || (_Var13 == DAT_1416f1740)) goto LAB_14043f6e6;
      pbVar8 = (byte *)FUN_1400f9690(DAT_1416f1728,&local_50);
      if (pbVar8 != (byte *)0x0) {
        httplib::ClientImpl::vfunction4();
        if (0 < DAT_1416f1748) {
          lVar7 = 0;
          lVar9 = DAT_1416f1730;
          iVar3 = DAT_1416f1748;
          do {
            lVar1 = *(longlong *)(lVar9 + lVar7 * 8);
            if (lVar1 != 0) {
              FUN_140160cf0(*(undefined8 *)(lVar1 + 8));
              FUN_140160cf0(lVar1);
              lVar9 = DAT_1416f1730;
              iVar3 = DAT_1416f1748;
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar3);
        }
        FUN_140160cf0();
        DAT_1416f1730 = 0;
        DAT_1416f1748 = 0;
        if (local_50 == (_FILETIME)0x0) {
          local_90 = 0;
        }
        else {
          pbVar15 = pbVar8 + (longlong)local_50;
          local_84 = 0;
          uVar5 = 0;
          uVar4 = 0;
          local_90 = 0;
          local_80 = 0;
          pbVar14 = pbVar8;
          uVar17 = 0xffffffff;
LAB_14043f7c0:
          do {
            _Str = pbVar14;
            if ((*pbVar14 < 0xe) && ((0x2401U >> (*pbVar14 & 0x1f) & 1) != 0)) {
              pbVar14 = pbVar14 + 1;
              _Str = pbVar14;
              if (pbVar14 < pbVar15) goto LAB_14043f7c0;
            }
            for (; ((pbVar14 < pbVar15 && (*pbVar14 != 10)) && (*pbVar14 != 0xd));
                pbVar14 = pbVar14 + 1) {
            }
            *pbVar14 = 0;
            iVar3 = FUN_1400fd340(_Str,"[slot %d]");
            if (iVar3 == 1) {
              uVar16 = local_54;
              if (-1 < (int)uVar17) {
                httplib::ClientImpl::vfunction4();
                uVar6 = (ulonglong)uVar17;
                lVar9 = DAT_1416f1730;
                if (DAT_1416f1748 <= (int)uVar17) {
                  lVar9 = FUN_140160cc0(DAT_1416f1730,uVar6 * 8 + 8);
                  if (lVar9 == 0) goto LAB_14043f7a6;
                  if (DAT_1416f1748 <= (int)uVar17) {
                    memset((void *)(lVar9 + (longlong)DAT_1416f1748 * 8),0,
                           (ulonglong)(uVar17 - DAT_1416f1748) * 8 + 8);
                    DAT_1416f1748 = uVar17 + 1;
                  }
                }
                DAT_1416f1730 = lVar9;
                if ((*(longlong *)(DAT_1416f1730 + uVar6 * 8) == 0) &&
                   (puVar12 = (undefined8 *)FUN_140160c40(0x18), puVar12 != (undefined8 *)0x0)) {
                  *puVar12 = local_80;
                  puVar12[1] = local_90;
                  *(short *)(puVar12 + 2) = (short)uVar4;
                  *(short *)((longlong)puVar12 + 0x12) = (short)uVar5;
                  *(undefined4 *)((longlong)puVar12 + 0x14) = local_84;
                  *(undefined8 **)(DAT_1416f1730 + uVar6 * 8) = puVar12;
                  local_80 = 0;
                  local_90 = 0;
                  uVar4 = 0;
                  uVar5 = 0;
                  local_84 = 0;
                }
              }
            }
            else {
              pcVar10 = strchr((char *)_Str,0x3d);
              uVar16 = uVar17;
              if (pcVar10 != (char *)0x0) {
                _Str_00 = pcVar10 + 1;
                *pcVar10 = '\0';
                iVar3 = FUN_1400fd200(_Str,"name");
                if (iVar3 == 0) {
                  FUN_140160cf0(local_90);
                  local_90 = FUN_1400fcda0(_Str_00);
                }
                else {
                  iVar3 = FUN_1400fd200(_Str);
                  if (iVar3 == 0) {
                    uVar4 = strtoul(_Str_00,(char **)0x0,0);
                  }
                  else {
                    iVar3 = FUN_1400fd200(_Str);
                    if (iVar3 == 0) {
                      uVar5 = strtoul(_Str_00,(char **)0x0,0);
                    }
                    else {
                      iVar3 = FUN_1400fd200(_Str,"type");
                      if (iVar3 == 0) {
                        local_84 = FUN_14010a0f0(_Str_00);
                      }
                      else {
                        iVar3 = FUN_1400fd200(_Str,"handle");
                        if (iVar3 == 0) {
                          local_80 = strtoull(_Str_00,0,0);
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_14043f7a6:
            uVar17 = uVar16;
          } while (pbVar14 < pbVar15);
          if (-1 < (int)uVar16) {
            httplib::ClientImpl::vfunction4();
            uVar6 = (ulonglong)uVar16;
            lVar9 = DAT_1416f1730;
            if (DAT_1416f1748 <= (int)uVar16) {
              lVar9 = FUN_140160cc0(DAT_1416f1730,uVar6 * 8 + 8);
              if (lVar9 == 0) goto LAB_14043faab;
              if (DAT_1416f1748 <= (int)uVar16) {
                memset((void *)(lVar9 + (longlong)DAT_1416f1748 * 8),0,
                       (ulonglong)(uVar16 - DAT_1416f1748) * 8 + 8);
                DAT_1416f1748 = uVar16 + 1;
              }
            }
            DAT_1416f1730 = lVar9;
            if ((*(longlong *)(DAT_1416f1730 + uVar6 * 8) == 0) &&
               (puVar12 = (undefined8 *)FUN_140160c40(0x18), puVar12 != (undefined8 *)0x0)) {
              *puVar12 = local_80;
              puVar12[1] = local_90;
              *(short *)(puVar12 + 2) = (short)uVar4;
              *(short *)((longlong)puVar12 + 0x12) = (short)uVar5;
              *(undefined4 *)((longlong)puVar12 + 0x14) = local_84;
              *(undefined8 **)(DAT_1416f1730 + uVar6 * 8) = puVar12;
              local_90 = 0;
            }
          }
        }
LAB_14043faab:
        FUN_140160cf0(local_90);
        FUN_140160cf0(pbVar8);
        uVar11 = 1;
        DAT_1416f1740 = _Var13;
        goto LAB_14043f6e6;
      }
    }
  }
  uVar11 = 0;
LAB_14043f6e6:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStackY_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStackY_c8);
  }
  return uVar11;
}

