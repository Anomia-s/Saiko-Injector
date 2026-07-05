/**
 * Function: couldnt_find_monitor_data
 * Address:  140461870
 * Signature: undefined couldnt_find_monitor_data(void)
 * Body size: 2238 bytes
 */


undefined8
couldnt_find_monitor_data(HMONITOR param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  code *pcVar2;
  wchar_t *_Str1;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  DWORD DVar8;
  int iVar9;
  HDC hdc;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  size_t sVar13;
  char *pcVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  int *piVar18;
  undefined1 auStack_598 [32];
  undefined1 *local_578;
  undefined4 *local_570;
  longlong local_560;
  longlong *local_558;
  longlong local_550;
  int *local_548;
  undefined8 *local_540;
  undefined4 local_538;
  undefined1 local_534 [4];
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 local_508;
  char *pcStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  longlong local_498;
  undefined8 uStack_490;
  undefined8 *local_488;
  uint local_47c;
  uint local_478;
  tagMONITORINFO local_474;
  undefined8 uStack_44c;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined8 uStack_43c;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined8 uStack_42c;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined8 uStack_41c;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined1 local_40c [36];
  wchar_t local_3e8 [16];
  wchar_t local_3c8 [386];
  undefined8 local_c4;
  undefined8 local_bc;
  int local_b4;
  wchar_t local_b0 [32];
  ulonglong local_70;
  
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStack_598;
  local_420 = 0;
  uStack_41c = 0;
  uStack_414 = 0;
  local_430 = 0;
  uStack_42c = 0;
  uStack_424 = 0;
  local_440 = 0;
  uStack_43c = 0;
  uStack_434 = 0;
  local_474.dwFlags = 0;
  uStack_44c = 0;
  uStack_444 = 0;
  local_474.rcWork.left = 0;
  local_474.rcWork.top = 0;
  local_474.rcWork.right = 0;
  local_474.rcWork.bottom = 0;
  local_474.rcMonitor.left = 0;
  local_474.rcMonitor.top = 0;
  local_474.rcMonitor.right = 0;
  local_474.rcMonitor.bottom = 0;
  local_410 = 0;
  local_474.cbSize = 0x68;
  BVar6 = GetMonitorInfoW(param_1,&local_474);
  if ((BVar6 == 0) || ((local_474.dwFlags & 1) != (uint)*(byte *)((longlong)param_4 + 0xc)))
  goto LAB_14046208b;
  lVar1 = *param_4;
  iVar9 = (int)param_4[1];
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x678) + 0xa0);
  if ((pcVar2 == (code *)0x0) ||
     (iVar7 = (*pcVar2)(param_1,0,local_40c,&local_508), DVar8 = local_40c._0_4_,
     local_40c._0_4_ == 0 || iVar7 != 0)) {
    hdc = GetDC((HWND)0x0);
    if (hdc != (HDC)0x0) {
      DVar8 = GetDeviceCaps(hdc,0x58);
      ReleaseDC((HWND)0x0,hdc);
      if (DVar8 != 0) goto LAB_1404619a4;
    }
    DVar8 = 0x60;
  }
LAB_1404619a4:
  plVar10 = (longlong *)FUN_1404610c0(*(undefined8 *)(lVar1 + 0x678),&uStack_44c);
  local_570 = &local_538;
  local_578 = local_534;
  cVar5 = FUN_140461200(plVar10,&uStack_44c,0xffffffff,&local_530);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (cVar5 == '\0') goto LAB_14046208b;
  if (0 < *(int *)(lVar1 + 800)) {
    lVar15 = (longlong)iVar9;
    lVar17 = 0;
    do {
      _Str1 = *(wchar_t **)(*(longlong *)(*(longlong *)(lVar1 + 0x328) + lVar17 * 8) + 0x80);
      iVar7 = wcscmp(_Str1,(wchar_t *)&uStack_44c);
      if (iVar7 == 0) {
        if ((*(int *)(_Str1 + 0x24) != 2) || (*(int *)(lVar1 + 800) <= iVar9)) goto LAB_14046208b;
        if (iVar9 != (int)lVar17) {
          lVar3 = *(longlong *)(lVar1 + 0x328);
          uVar4 = *(undefined8 *)(lVar3 + lVar15 * 8);
          *(undefined8 *)(lVar3 + lVar15 * 8) = *(undefined8 *)(lVar3 + lVar17 * 8);
          *(undefined8 *)(*(longlong *)(lVar1 + 0x328) + lVar17 * 8) = uVar4;
        }
        *(HMONITOR *)(_Str1 + 0x20) = param_1;
        _Str1[0x24] = L'\0';
        _Str1[0x25] = L'\0';
        if (*(char *)(lVar1 + 0x388) == '\0') {
          lVar15 = *(longlong *)(*(longlong *)(lVar1 + 0x328) + lVar15 * 8);
          FUN_140145350(lVar15);
          FUN_1401465e0(lVar15,&local_530);
          local_40c._20_4_ = 0;
          local_40c._24_4_ = 0;
          local_40c._28_4_ = 0;
          local_40c._32_4_ = 0;
          local_40c._4_4_ = 0;
          local_40c._8_4_ = 0;
          local_40c._12_4_ = 0;
          local_40c._16_4_ = 0;
          local_3e8[0] = L'\0';
          local_3e8[1] = L'\0';
          local_40c._0_4_ = 0x28;
          BVar6 = GetMonitorInfoW(*(HMONITOR *)(*(longlong *)(lVar15 + 0x80) + 0x40),
                                  (LPMONITORINFO)local_40c);
          if (BVar6 == 0) {
            cVar5 = FUN_1400fbed0("Couldn\'t find monitor data");
            if (cVar5 != '\0') goto LAB_140461e6a;
LAB_140461e98:
            if (iVar9 != (int)lVar17) goto LAB_140461e9d;
          }
          else {
            local_508 = CONCAT44(local_40c._8_4_,local_40c._4_4_);
            pcStack_500 = (char *)CONCAT44(local_40c._16_4_ - local_40c._8_4_,
                                           local_40c._12_4_ - local_40c._4_4_);
LAB_140461e6a:
            iVar7 = FUN_1400fc560(_Str1 + 0x26,&local_508,0x10);
            if (iVar7 == 0) goto LAB_140461e98;
            *(undefined8 *)(_Str1 + 0x26) = local_508;
            *(char **)(_Str1 + 0x2a) = pcStack_500;
LAB_140461e9d:
            FUN_140456110(lVar15,0x154,0,0);
          }
          FUN_140456110(lVar15,0x151,local_538,0);
          FUN_140145960(lVar15);
          FUN_140462130(lVar1,param_1,local_40c);
          video_subsystem_has_not_been_initialized(lVar15,local_40c);
        }
        goto LAB_140462088;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(lVar1 + 800));
  }
  puVar11 = (undefined8 *)FUN_140160c70(1);
  if (puVar11 == (undefined8 *)0x0) goto LAB_14046208b;
  puVar11[6] = uStack_41c;
  puVar11[7] = CONCAT44(local_410,uStack_414);
  puVar11[4] = uStack_42c;
  puVar11[5] = CONCAT44(local_420,uStack_424);
  puVar11[2] = uStack_43c;
  puVar11[3] = CONCAT44(local_430,uStack_434);
  *puVar11 = uStack_44c;
  puVar11[1] = CONCAT44(local_440,uStack_444);
  puVar11[8] = param_1;
  *(undefined4 *)(puVar11 + 9) = 1;
  local_498 = 0;
  uStack_490 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_508 = 0;
  pcStack_500 = (char *)0x0;
  local_488 = (undefined8 *)0x0;
  lVar15 = *(longlong *)(lVar1 + 0x678);
  local_478 = 0;
  local_47c = 0;
  if (((*(longlong *)(lVar15 + 0x80) == 0) || (*(longlong *)(lVar15 + 0x88) == 0)) ||
     (*(longlong *)(lVar15 + 0x90) == 0)) {
    pcStack_500 = (char *)0x0;
LAB_140461cdb:
    memset(local_40c + 4,0,0x344);
    local_40c._0_4_ = 0x348;
    BVar6 = EnumDisplayDevicesW((LPCWSTR)&uStack_44c,0,(PDISPLAY_DEVICEW)local_40c,0);
    if (BVar6 != 0) {
      sVar13 = wcslen(local_3c8);
      pcStack_500 = (char *)FUN_14017b9c0("UTF-8","UTF-16LE",local_3c8,sVar13 * 2 + 2);
    }
  }
  else {
    local_560 = 0;
    puVar12 = (undefined1 *)0x0;
    local_558 = param_4;
    local_540 = puVar11;
    do {
      iVar9 = (**(code **)(lVar15 + 0x80))(2);
      lVar17 = local_560;
      if (iVar9 != 0) {
LAB_140461e3b:
        pcVar14 = (char *)0x0;
        FUN_140160cf0(0);
        param_4 = local_558;
        goto LAB_140461f62;
      }
      FUN_140160cf0(local_560);
      FUN_140160cf0(puVar12);
      lVar17 = FUN_140160c40((ulonglong)local_478 * 0x48);
      puVar12 = (undefined1 *)FUN_140160c40((ulonglong)local_47c << 6);
      if ((lVar17 == 0) || (puVar12 == (undefined1 *)0x0)) goto LAB_140461e3b;
      local_570 = (undefined4 *)0x0;
      local_578 = puVar12;
      local_560 = lVar17;
      iVar9 = (**(code **)(lVar15 + 0x88))(2,&local_478,lVar17,&local_47c);
      param_4 = local_558;
    } while (iVar9 == 0x7a);
    if (iVar9 == 0) {
      if (local_478 != 0) {
        piVar18 = (int *)(local_560 + 0x1c);
        uVar16 = 0;
        local_550 = lVar15;
        do {
          local_b0[0x18] = L'\0';
          local_b0[0x19] = L'\0';
          local_b0[0x1a] = L'\0';
          local_b0[0x1b] = L'\0';
          local_b0[0x1c] = L'\0';
          local_b0[0x1d] = L'\0';
          local_b0[0x1e] = L'\0';
          local_b0[0x1f] = L'\0';
          local_b0[0x10] = L'\0';
          local_b0[0x11] = L'\0';
          local_b0[0x12] = L'\0';
          local_b0[0x13] = L'\0';
          local_b0[0x14] = L'\0';
          local_b0[0x15] = L'\0';
          local_b0[0x16] = L'\0';
          local_b0[0x17] = L'\0';
          local_b0[8] = L'\0';
          local_b0[9] = L'\0';
          local_b0[10] = L'\0';
          local_b0[0xb] = L'\0';
          local_b0[0xc] = L'\0';
          local_b0[0xd] = L'\0';
          local_b0[0xe] = L'\0';
          local_b0[0xf] = L'\0';
          local_b0[0] = L'\0';
          local_b0[1] = L'\0';
          local_b0[2] = L'\0';
          local_b0[3] = L'\0';
          local_b0[4] = L'\0';
          local_b0[5] = L'\0';
          local_b0[6] = L'\0';
          local_b0[7] = L'\0';
          local_bc = *(undefined8 *)(piVar18 + -2);
          local_c4 = 0x5400000001;
          local_b4 = piVar18[-5];
          local_548 = piVar18;
          iVar9 = (**(code **)(local_550 + 0x90))(&local_c4);
          if (iVar9 != 0) break;
          iVar9 = wcscmp((wchar_t *)&uStack_44c,local_b0);
          if (iVar9 == 0) {
            memset(local_40c + 0x14,0,400);
            local_40c._8_4_ = (undefined4)*(undefined8 *)(local_548 + -2);
            local_40c._12_4_ = (undefined4)((ulonglong)*(undefined8 *)(local_548 + -2) >> 0x20);
            local_40c._16_4_ = *local_548;
            local_40c._0_4_ = 2;
            local_40c._4_4_ = 0x1a4;
            iVar9 = (**(code **)(local_550 + 0x90))(local_40c);
            if (iVar9 == 0) {
              sVar13 = wcslen(local_3e8);
              pcVar14 = (char *)FUN_14017b9c0("UTF-8","UTF-16LE",local_3e8,sVar13 * 2 + 2);
              lVar17 = local_560;
              if (pcVar14 != (char *)0x0) {
                if (*pcVar14 != '\0') goto LAB_140461f62;
                FUN_140160cf0(pcVar14);
              }
              pcVar14 = (char *)0x0;
              goto LAB_140461f62;
            }
            break;
          }
          uVar16 = uVar16 + 1;
          piVar18 = local_548 + 0x12;
        } while (uVar16 < local_478);
        goto LAB_140461f5d;
      }
      pcVar14 = (char *)0x0;
      lVar17 = local_560;
    }
    else {
LAB_140461f5d:
      pcVar14 = (char *)0x0;
      lVar17 = local_560;
    }
LAB_140461f62:
    FUN_140160cf0(lVar17);
    FUN_140160cf0(puVar12);
    puVar11 = local_540;
    pcStack_500 = pcVar14;
    if (pcVar14 == (char *)0x0) goto LAB_140461cdb;
  }
  local_4c8 = local_510;
  local_4d8 = local_520;
  uStack_4d0 = uStack_518;
  local_4e8 = local_530;
  uStack_4e0 = uStack_528;
  uStack_4b0 = CONCAT44(uStack_4b0._4_4_,(float)(int)DVar8 / 96.0);
  local_40c._20_4_ = 0;
  local_40c._24_4_ = 0;
  local_40c._28_4_ = 0;
  local_40c._32_4_ = 0;
  local_40c._4_4_ = 0;
  local_40c._8_4_ = 0;
  local_40c._12_4_ = 0;
  local_40c._16_4_ = 0;
  local_3e8[0] = L'\0';
  local_3e8[1] = L'\0';
  local_40c._0_4_ = 0x28;
  local_498 = lVar1;
  local_488 = puVar11;
  BVar6 = GetMonitorInfoW((HMONITOR)puVar11[8],(LPMONITORINFO)local_40c);
  if (BVar6 == 0) {
    FUN_1400fbed0("Couldn\'t find monitor data");
  }
  else {
    *(ulonglong *)((longlong)puVar11 + 0x4c) = CONCAT44(local_40c._8_4_,local_40c._4_4_);
    *(ulonglong *)((longlong)puVar11 + 0x54) =
         CONCAT44(local_40c._16_4_ - local_40c._8_4_,local_40c._12_4_ - local_40c._4_4_);
  }
  FUN_140462130(lVar1,param_1,(longlong)&uStack_4b0 + 4);
  video_subsystem_has_not_been_initialized(&local_508,0);
  FUN_140160cf0(pcStack_500);
LAB_140462088:
  *(int *)(param_4 + 1) = (int)param_4[1] + 1;
LAB_14046208b:
  if (DAT_1414ef3c0 != (local_70 ^ (ulonglong)auStack_598)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_70 ^ (ulonglong)auStack_598);
  }
  return 1;
}

