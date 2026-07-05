/**
 * Function: wgi_nrid_steam_xxxdu
 * Address:  140448f90
 * Signature: undefined wgi_nrid_steam_xxxdu(void)
 * Body size: 2703 bytes
 */


undefined8 wgi_nrid_steam_xxxdu(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  UINT UVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  size_t sVar9;
  char *_Str1;
  PRAWINPUTDEVICELIST pRawInputDeviceList;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  longlong *plVar14;
  undefined6 uVar16;
  ulonglong uVar15;
  undefined8 *puVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined1 auStack_2f8 [32];
  char *local_2d8;
  undefined8 local_2d0;
  char *local_2c8;
  undefined1 local_2c0;
  undefined1 local_2b8;
  uint local_2a4;
  longlong *local_2a0;
  longlong *local_298;
  ushort local_28c;
  short local_28a;
  longlong *local_288;
  undefined4 local_280;
  uint local_27c;
  longlong *local_278;
  ushort local_270;
  int local_26c;
  longlong *local_258;
  longlong *local_250;
  undefined8 local_248 [26];
  longlong *local_178 [4];
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_2f8;
  local_288 = (longlong *)0x0;
  FUN_1401264f0();
  cVar4 = FUN_1401264e0();
  if (((cVar4 != '\0') || (cVar4 = FUN_1401264d0(), cVar4 == '\0')) ||
     (iVar5 = (**(code **)*param_3)(param_3,&DAT_140e16210,&local_288), iVar5 < 0))
  goto LAB_1404499a4;
  local_28a = 0;
  local_28c = 0;
  local_298 = (longlong *)0x0;
  local_2a0 = (longlong *)0x0;
  (**(code **)(*local_288 + 0x50))(local_288,&local_28a);
  (**(code **)(*local_288 + 0x48))(local_288,&local_28c);
  iVar5 = (**(code **)*local_288)(local_288,&DAT_140e161b0,&local_2a0);
  uVar16 = (undefined6)((ulonglong)param_3 >> 0x10);
  if (iVar5 < 0) {
    uVar15 = CONCAT62(uVar16,3);
  }
  else {
    local_158 = (longlong *)((ulonglong)local_158 & 0xffffffffffffff00);
    iVar5 = (**(code **)(*local_2a0 + 0x68))(local_2a0,&local_158);
    uVar15 = CONCAT62(uVar16,3);
    if (((-1 < iVar5) && ((char)local_158 != '\0')) && (uVar15 = CONCAT62(uVar16,5), local_28c == 0)
       ) {
      local_28a = 0x45e;
      local_28c = 0x2a1;
    }
    (**(code **)(*local_2a0 + 0x10))();
  }
  iVar5 = (**(code **)*local_288)(local_288,&DAT_140e16220,&local_298);
  if (iVar5 < 0) {
LAB_140449144:
    _Str1 = (char *)FUN_1400fcda0(&DAT_1413a2ad6);
  }
  else {
    iVar5 = (**(code **)(*local_298 + 0x40))(local_298,&local_158);
    if (iVar5 < 0) {
      _Str1 = (char *)0x0;
    }
    else {
      _Str1 = (char *)0x0;
      pwVar8 = (wchar_t *)(*DAT_1416f1938)(local_158,0);
      if (pwVar8 != (wchar_t *)0x0) {
        sVar9 = wcslen(pwVar8);
        _Str1 = (char *)FUN_14017b9c0("UTF-8","UTF-16LE",pwVar8,sVar9 * 2 + 2);
      }
      (*DAT_1416f1930)(local_158);
    }
    (**(code **)(*local_298 + 0x10))();
    if (_Str1 == (char *)0x0) goto LAB_140449144;
  }
  cVar4 = FUN_14012d730(local_28a,local_28c,0,_Str1);
  if ((cVar4 == '\0') &&
     (local_2d8 = _Str1,
     cVar4 = FUN_140126eb0(&PTR_roinitialize_failed_141503a88,local_28a,local_28c,0),
     sVar3 = local_28a, uVar2 = local_28c, cVar4 == '\0')) {
    local_250 = (longlong *)((ulonglong)local_250 & 0xffffffff00000000);
    cVar4 = FUN_140651b20();
    if ((cVar4 != '\0') || (cVar4 = FUN_140443f70(), cVar4 != '\0')) {
      cVar4 = FUN_14012d2a0(sVar3,uVar2);
      if ((cVar4 != '\0') ||
         ((_Str1 != (char *)0x0 && (iVar5 = strncmp(_Str1,"Xbox ",5), iVar5 == 0))))
      goto LAB_140449991;
      UVar6 = GetRawInputDeviceList((PRAWINPUTDEVICELIST)0x0,(PUINT)&local_250,0x10);
      if (((int)local_250 != 0 && UVar6 != 0xffffffff) &&
         (pRawInputDeviceList =
               (PRAWINPUTDEVICELIST)FUN_140160c40(((ulonglong)local_250 & 0xffffffff) << 4),
         pRawInputDeviceList != (PRAWINPUTDEVICELIST)0x0)) {
        UVar6 = GetRawInputDeviceList(pRawInputDeviceList,(PUINT)&local_250,0x10);
        local_250 = (longlong *)CONCAT44(local_250._4_4_,UVar6);
        if (1 < UVar6 + 1) {
          local_2a4 = CONCAT22(uVar2,sVar3);
          uVar19 = 0;
          do {
            memset(&local_158,0,0x104);
            local_258 = (longlong *)CONCAT44(local_258._4_4_,0x20);
            local_27c = 0x104;
            local_278 = (longlong *)CONCAT44(local_278._4_4_,0x20);
            if (pRawInputDeviceList[uVar19].dwType == 2) {
              UVar6 = GetRawInputDeviceInfoA
                                (pRawInputDeviceList[uVar19].hDevice,0x2000000b,&local_278,
                                 (PUINT)&local_258);
              if (((UVar6 != 0xffffffff) &&
                  (UVar6 = GetRawInputDeviceInfoA
                                     (pRawInputDeviceList[uVar19].hDevice,0x20000007,&local_158,
                                      &local_27c), UVar6 != 0xffffffff)) &&
                 (pcVar12 = strstr((char *)&local_158,"IG_"), pcVar12 != (char *)0x0)) {
                if ((local_26c << 0x10 | (uint)local_270) == local_2a4) {
LAB_140449989:
                  FUN_140160cf0(pRawInputDeviceList);
                  goto LAB_140449991;
                }
                pcVar12 = strstr((char *)&local_158,"\\\\?\\");
                if ((pcVar12 == (char *)&local_158) &&
                   (pcVar13 = strstr((char *)&local_158,"#{"), pcVar12 = (char *)&local_158,
                   pcVar13 != (char *)0x0)) {
                  while( true ) {
                    for (; *pcVar12 != '#'; pcVar12 = pcVar12 + 1) {
                      if (*pcVar12 == '\0') goto LAB_1404498f8;
                    }
                    if (pcVar12[1] == '{') break;
                    *pcVar12 = '\\';
                    pcVar12 = pcVar12 + 1;
                  }
                  *pcVar12 = '\0';
LAB_1404498f8:
                  iVar5 = CM_Locate_DevNodeA(&local_280,(longlong)&local_158 + 4,0);
                  if (iVar5 == 0) {
                    local_2d8 = (char *)CONCAT44(local_2d8._4_4_,(uint)uVar2);
                    FUN_1400fd420(local_178,0x20,"VID_%04X&PID_%04X",sVar3);
                    while (iVar5 = CM_Get_Parent(&local_280,local_280,0), iVar5 == 0) {
                      iVar5 = CM_Get_Device_IDA(local_280,local_248,200,0);
                      if ((iVar5 == 0) &&
                         (pcVar12 = strstr((char *)local_248,(char *)local_178),
                         pcVar12 != (char *)0x0)) goto LAB_140449989;
                    }
                  }
                }
              }
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < ((ulonglong)local_250 & 0xffffffff));
        }
        FUN_140160cf0(pRawInputDeviceList);
      }
    }
    lVar10 = FUN_140160cc0(DAT_1416f1998,(longlong)DAT_1416f1990 * 0x30 + 0x30);
    if (lVar10 == 0) goto LAB_140449991;
    puVar17 = (undefined8 *)((longlong)DAT_1416f1990 * 0x30 + lVar10);
    uVar7 = FUN_1403d8eb0();
    plVar14 = local_2a0;
    pcVar1 = DAT_1416f1928;
    if (local_2a0 == (longlong *)0x0) {
      uVar18 = 0;
    }
    else {
      local_278 = (longlong *)0x0;
      local_178[0] = (longlong *)0x0;
      local_250 = (longlong *)0x0;
      local_258 = (longlong *)0x0;
      if (DAT_1416f1948 == (undefined8 *)0x0) {
        sVar9 = wcslen(L"Windows.Gaming.Input.ArcadeStick");
        iVar5 = (*pcVar1)(L"Windows.Gaming.Input.ArcadeStick",sVar9 & 0xffffffff,&local_158,
                          local_248);
        if (-1 < iVar5) {
          iVar5 = (*DAT_1416f1920)(local_248[0],&DAT_140e16180,&DAT_1416f1948);
          if (iVar5 < 0) {
            FUN_1403d7600("Couldn\'t find Windows.Gaming.Input.IArcadeStickStatics",iVar5);
          }
          else {
            (**(code **)*DAT_1416f1948)(DAT_1416f1948,&DAT_140e16190,&DAT_1416f1950);
          }
        }
      }
      pcVar1 = DAT_1416f1928;
      if (DAT_1416f1958 == (longlong *)0x0) {
        sVar9 = wcslen(L"Windows.Gaming.Input.FlightStick");
        iVar5 = (*pcVar1)(L"Windows.Gaming.Input.FlightStick",sVar9 & 0xffffffff,&local_158,
                          local_248);
        if ((-1 < iVar5) &&
           (iVar5 = (*DAT_1416f1920)(local_248[0],&DAT_140e161a0,&DAT_1416f1958), iVar5 < 0)) {
          FUN_1403d7600("Couldn\'t find Windows.Gaming.Input.IFlightStickStatics",iVar5);
        }
      }
      pcVar1 = DAT_1416f1928;
      if (DAT_1416f1960 == (undefined8 *)0x0) {
        sVar9 = wcslen(L"Windows.Gaming.Input.Gamepad");
        iVar5 = (*pcVar1)(L"Windows.Gaming.Input.Gamepad",sVar9 & 0xffffffff,&local_158,local_248);
        if (-1 < iVar5) {
          iVar5 = (*DAT_1416f1920)(local_248[0],&DAT_140e161d0,&DAT_1416f1960);
          if (iVar5 < 0) {
            FUN_1403d7600("Couldn\'t find Windows.Gaming.Input.IGamepadStatics",iVar5);
          }
          else {
            (**(code **)*DAT_1416f1960)(DAT_1416f1960,&DAT_140e161e0,&DAT_1416f1968);
          }
        }
      }
      pcVar1 = DAT_1416f1928;
      if (DAT_1416f1970 == (undefined8 *)0x0) {
        sVar9 = wcslen(L"Windows.Gaming.Input.RacingWheel");
        iVar5 = (*pcVar1)(L"Windows.Gaming.Input.RacingWheel",sVar9 & 0xffffffff,&local_158,
                          local_248);
        if (-1 < iVar5) {
          iVar5 = (*DAT_1416f1920)(local_248[0],&DAT_140e161f0,&DAT_1416f1970);
          if (iVar5 < 0) {
            FUN_1403d7600("Couldn\'t find Windows.Gaming.Input.IRacingWheelStatics",iVar5);
          }
          else {
            (**(code **)*DAT_1416f1970)(DAT_1416f1970,&DAT_140e16200,&DAT_1416f1978);
          }
        }
      }
      if ((DAT_1416f1968 == (longlong *)0x0) ||
         (iVar5 = (**(code **)(*DAT_1416f1968 + 0x30))(DAT_1416f1968,plVar14,&local_250),
         iVar5 < 0 || local_250 == (longlong *)0x0)) {
        if ((DAT_1416f1950 == (longlong *)0x0) ||
           (iVar5 = (**(code **)(*DAT_1416f1950 + 0x30))(DAT_1416f1950,plVar14,&local_278),
           iVar5 < 0 || local_278 == (longlong *)0x0)) {
          if ((DAT_1416f1958 == (longlong *)0x0) ||
             (iVar5 = (**(code **)(*DAT_1416f1958 + 0x58))(DAT_1416f1958,plVar14,local_178),
             iVar5 < 0 || local_178[0] == (longlong *)0x0)) {
            uVar18 = 0;
            if ((DAT_1416f1978 == (longlong *)0x0) ||
               (iVar5 = (**(code **)(*DAT_1416f1978 + 0x30))(DAT_1416f1978,plVar14,&local_258),
               uVar18 = 0, local_258 == (longlong *)0x0 || iVar5 < 0)) goto LAB_14044960d;
            uVar18 = 2;
            plVar14 = local_258;
          }
          else {
            uVar18 = 4;
            plVar14 = local_178[0];
          }
        }
        else {
          uVar18 = 3;
          plVar14 = local_278;
        }
      }
      else {
        uVar18 = 1;
        plVar14 = local_250;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
LAB_14044960d:
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar17[2] = 0;
    puVar17[3] = 0;
    *(undefined4 *)puVar17 = uVar7;
    puVar17[1] = local_288;
    puVar17[2] = _Str1;
    local_2b8 = (undefined1)uVar18;
    local_2c0 = 0x77;
    local_2d0 = 0;
    local_2d8 = (char *)((ulonglong)local_2d8 & 0xffffffffffff0000);
    local_2c8 = _Str1;
    FUN_14012cfb0(&local_158,uVar15 & 0xffffffff,local_28a,local_28c);
    *(undefined4 *)(puVar17 + 3) = (undefined4)local_158;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = local_158._4_4_;
    *(undefined4 *)(puVar17 + 4) = uStack_150;
    *(undefined4 *)((longlong)puVar17 + 0x24) = uStack_14c;
    *(undefined4 *)(puVar17 + 5) = uVar18;
    local_278 = (longlong *)CONCAT44(local_278._4_4_,0xffffffff);
    uVar18 = 0xffffffff;
    if ((local_28c == 0x11ff) && (local_28a == 0x28de)) {
      local_158 = (longlong *)0x0;
      iVar5 = (**(code **)*local_288)(local_288,&DAT_140e16220,&local_158);
      if (iVar5 < 0) {
        uVar18 = 0xffffffff;
      }
      else {
        iVar5 = (**(code **)(*local_158 + 0x38))(local_158,local_248);
        if (-1 < iVar5) {
          pwVar8 = (wchar_t *)(*DAT_1416f1938)(local_248[0],0);
          if (pwVar8 != (wchar_t *)0x0) {
            sVar9 = wcslen(pwVar8);
            lVar11 = FUN_14017b9c0("UTF-8","UTF-16LE",pwVar8,sVar9 * 2 + 2);
            if (lVar11 != 0) {
              FUN_1400fd340(lVar11,"{wgi/nrid/:steam-%*X&%*X&%*X#%d#%*u}",&local_278);
              FUN_140160cf0(lVar11);
            }
          }
          (*DAT_1416f1930)(local_248[0]);
        }
        (**(code **)(*local_158 + 0x10))();
        uVar18 = local_278._0_4_;
      }
    }
    *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar18;
    (**(code **)(*local_288 + 8))();
    DAT_1416f1990 = DAT_1416f1990 + 1;
    DAT_1416f1998 = lVar10;
    FUN_14012b7b0(uVar7);
  }
  else {
LAB_140449991:
    FUN_140160cf0(_Str1);
  }
  (**(code **)(*local_288 + 0x10))();
LAB_1404499a4:
  FUN_140126530();
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_2f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_2f8);
  }
  return 0;
}

