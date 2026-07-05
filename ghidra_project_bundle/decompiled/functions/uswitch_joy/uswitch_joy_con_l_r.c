/**
 * Function: uswitch_joy_con_l_r
 * Address:  1404407f0
 * Signature: undefined uswitch_joy_con_l_r(void)
 * Body size: 2352 bytes
 */


void uswitch_joy_con_l_r(void)

{
  longlong *plVar1;
  short sVar2;
  short sVar3;
  wchar_t wVar4;
  wchar_t *_Str;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  char *pcVar11;
  size_t sVar12;
  longlong lVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined8 *puVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined2 local_bc;
  undefined2 local_ba;
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  wchar_t *pwStack_98;
  wchar_t *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  FUN_1401264f0();
  if (DAT_1416f1765 == '\x01') {
    httplib::ClientImpl::vfunction4();
    DAT_1416f176c = 0;
    DAT_14150b998 = (*(code *)PTR_sdl_joystick_hidapi_14150b9b0)();
    if (DAT_14150b998 == '\0') {
      DAT_14150ba30 = (*(code *)PTR_sdl_joystick_hidapi_14150ba48)();
      if (DAT_14150ba30 != '\0') goto LAB_1404409ee;
LAB_140440866:
      DAT_14150bac8 = (*(code *)PTR_sdl_joystick_hidapi_14150bae0)();
      if (DAT_14150bac8 != '\0') goto LAB_140440a08;
LAB_14044087a:
      DAT_14150bb60 = (*(code *)PTR_sdl_joystick_hidapi_ps3_14150bb78)();
      if (DAT_14150bb60 != '\0') goto LAB_140440a22;
LAB_14044088e:
      DAT_14150bbf8 = (*(code *)PTR_sdl_joystick_hidapi_14150bc10)();
      if (DAT_14150bbf8 != '\0') goto LAB_140440a3c;
LAB_1404408a2:
      DAT_14150bc90 = (*(code *)PTR_sdl_joystick_hidapi_ps3_sixaxis_driver_14150bca8)();
      if (DAT_14150bc90 != '\0') goto LAB_140440a56;
LAB_1404408b6:
      DAT_14150bd28 = (*(code *)PTR_sdl_joystick_hidapi_14150bd40)();
      if (DAT_14150bd28 != '\0') goto LAB_140440a70;
LAB_1404408ca:
      DAT_14150bdc0 = (*(code *)PTR_sdl_joystick_hidapi_14150bdd8)();
      if (DAT_14150bdc0 != '\0') goto LAB_140440a8a;
LAB_1404408de:
      DAT_14150be58 = (*(code *)PTR_sdl_joystick_hidapi_14150be70)();
      if (DAT_14150be58 != '\0') goto LAB_140440aa4;
LAB_1404408f2:
      DAT_14150bef0 = (*(code *)PTR_sdl_joystick_hidapi_steam_14150bf08)();
      if (DAT_14150bef0 != '\0') goto LAB_140440abe;
LAB_140440906:
      DAT_14150bf88 = (*(code *)PTR_sdl_joystick_hidapi_steam_hori_14150bfa0)();
      if (DAT_14150bf88 != '\0') goto LAB_140440ad8;
LAB_14044091a:
      DAT_14150c020 = (*(code *)PTR_sdl_joystick_hidapi_steamdeck_14150c038)();
      if (DAT_14150c020 != '\0') goto LAB_140440af2;
LAB_14044092e:
      DAT_14150c0b8 = (*(code *)PTR_sdl_joystick_hidapi_14150c0d0)();
      if (DAT_14150c0b8 != '\0') goto LAB_140440b0c;
LAB_140440942:
      DAT_14150c150 = (*(code *)PTR_sdl_joystick_hidapi_joy_cons_14150c168)();
      if (DAT_14150c150 != '\0') goto LAB_140440b26;
LAB_140440956:
      DAT_14150c1e8 = (*(code *)PTR_sdl_joystick_hidapi_14150c200)();
      if (DAT_14150c1e8 != '\0') goto LAB_140440b40;
LAB_14044096a:
      DAT_14150c280 = (*(code *)PTR_sdl_joystick_hidapi_wii_14150c298)();
      if (DAT_14150c280 != '\0') goto LAB_140440b5a;
LAB_14044097e:
      DAT_14150c318 = (*(code *)PTR_sdl_joystick_hidapi_xbox_14150c330)();
      if (DAT_14150c318 != '\0') goto LAB_140440b74;
LAB_140440992:
      DAT_14150c3b0 = (*(code *)PTR_sdl_joystick_hidapi_xbox_14150c3c8)();
      if (DAT_14150c3b0 != '\0') goto LAB_140440b8e;
LAB_1404409a6:
      DAT_14150c448 = (*(code *)PTR_sdl_joystick_hidapi_xbox_14150c460)();
    }
    else {
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150ba30 = (*(code *)PTR_sdl_joystick_hidapi_14150ba48)();
      if (DAT_14150ba30 == '\0') goto LAB_140440866;
LAB_1404409ee:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150bac8 = (*(code *)PTR_sdl_joystick_hidapi_14150bae0)();
      if (DAT_14150bac8 == '\0') goto LAB_14044087a;
LAB_140440a08:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150bb60 = (*(code *)PTR_sdl_joystick_hidapi_ps3_14150bb78)();
      if (DAT_14150bb60 == '\0') goto LAB_14044088e;
LAB_140440a22:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150bbf8 = (*(code *)PTR_sdl_joystick_hidapi_14150bc10)();
      if (DAT_14150bbf8 == '\0') goto LAB_1404408a2;
LAB_140440a3c:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150bc90 = (*(code *)PTR_sdl_joystick_hidapi_ps3_sixaxis_driver_14150bca8)();
      if (DAT_14150bc90 == '\0') goto LAB_1404408b6;
LAB_140440a56:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150bd28 = (*(code *)PTR_sdl_joystick_hidapi_14150bd40)();
      if (DAT_14150bd28 == '\0') goto LAB_1404408ca;
LAB_140440a70:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150bdc0 = (*(code *)PTR_sdl_joystick_hidapi_14150bdd8)();
      if (DAT_14150bdc0 == '\0') goto LAB_1404408de;
LAB_140440a8a:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150be58 = (*(code *)PTR_sdl_joystick_hidapi_14150be70)();
      if (DAT_14150be58 == '\0') goto LAB_1404408f2;
LAB_140440aa4:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150bef0 = (*(code *)PTR_sdl_joystick_hidapi_steam_14150bf08)();
      if (DAT_14150bef0 == '\0') goto LAB_140440906;
LAB_140440abe:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150bf88 = (*(code *)PTR_sdl_joystick_hidapi_steam_hori_14150bfa0)();
      if (DAT_14150bf88 == '\0') goto LAB_14044091a;
LAB_140440ad8:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150c020 = (*(code *)PTR_sdl_joystick_hidapi_steamdeck_14150c038)();
      if (DAT_14150c020 == '\0') goto LAB_14044092e;
LAB_140440af2:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150c0b8 = (*(code *)PTR_sdl_joystick_hidapi_14150c0d0)();
      if (DAT_14150c0b8 == '\0') goto LAB_140440942;
LAB_140440b0c:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150c150 = (*(code *)PTR_sdl_joystick_hidapi_joy_cons_14150c168)();
      if (DAT_14150c150 == '\0') goto LAB_140440956;
LAB_140440b26:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150c1e8 = (*(code *)PTR_sdl_joystick_hidapi_14150c200)();
      if (DAT_14150c1e8 == '\0') goto LAB_14044096a;
LAB_140440b40:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150c280 = (*(code *)PTR_sdl_joystick_hidapi_wii_14150c298)();
      if (DAT_14150c280 == '\0') goto LAB_14044097e;
LAB_140440b5a:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150c318 = (*(code *)PTR_sdl_joystick_hidapi_xbox_14150c330)();
      if (DAT_14150c318 == '\0') goto LAB_140440992;
LAB_140440b74:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150c3b0 = (*(code *)PTR_sdl_joystick_hidapi_xbox_14150c3c8)();
      if (DAT_14150c3b0 == '\0') goto LAB_1404409a6;
LAB_140440b8e:
      DAT_1416f176c = DAT_1416f176c + 1;
      DAT_14150c448 = (*(code *)PTR_sdl_joystick_hidapi_xbox_14150c460)();
    }
    if (DAT_14150c448 != '\0') {
      DAT_1416f176c = DAT_1416f176c + 1;
    }
    local_b8 = (char *)((ulonglong)local_b8 & 0xffffffffffffff00);
    if (DAT_1416f1750 != (undefined8 *)0x0) {
      bVar6 = false;
      puVar16 = DAT_1416f1750;
      while (DAT_1416f1750 = puVar16, puVar16 != (undefined8 *)0x0) {
        while( true ) {
          hidapi_setupdevicedriver_couldnt_open_s_s(puVar16,&local_b8);
          if ((char)local_b8 != '\0') break;
          puVar16 = (undefined8 *)puVar16[0x17];
          if (puVar16 == (undefined8 *)0x0) goto LAB_140440c0e;
        }
        bVar6 = true;
        puVar16 = DAT_1416f1750;
      }
      do {
        bVar5 = bVar6;
        bVar6 = true;
      } while (bVar5);
    }
LAB_140440c0e:
    DAT_1416f1765 = '\0';
  }
  for (puVar16 = DAT_1416f1750; puVar16 != (undefined8 *)0x0; puVar16 = (undefined8 *)puVar16[0x17])
  {
    if (puVar16[0x16] == 0) {
      *(undefined1 *)(puVar16 + 0x13) = 0;
    }
  }
  puVar16 = DAT_1416f1750;
  if ((0 < DAT_1416f176c) &&
     (lVar10 = sdl_hidapi_libusb_whitelist(0,0), puVar16 = DAT_1416f1750, lVar17 = lVar10,
     lVar10 != 0)) {
LAB_140440c9a:
    sVar2 = *(short *)(lVar17 + 10);
    sVar3 = *(short *)(lVar17 + 8);
    httplib::ClientImpl::vfunction4();
    for (puVar16 = DAT_1416f1750; puVar16 != (undefined8 *)0x0;
        puVar16 = (undefined8 *)puVar16[0x17]) {
      if (((*(short *)(puVar16 + 4) == sVar3) && (*(short *)((longlong)puVar16 + 0x22) == sVar2)) &&
         (iVar8 = FUN_1400fd200(puVar16[3]), iVar8 == 0)) {
        *(undefined1 *)(puVar16 + 0x13) = 1;
        pcVar15 = (char *)puVar16[5];
        pcVar11 = pcVar15;
        if (pcVar15 != (char *)0x0) goto LAB_140440d00;
        goto LAB_140440d13;
      }
    }
    added_hidapi_device_s_vid_0x4x_pid_0x4x_bluet(lVar17,0,0);
    goto LAB_140440c8d;
  }
LAB_140440e49:
  while (puVar20 = puVar16, puVar20 != (undefined8 *)0x0) {
    puVar16 = (undefined8 *)puVar20[0x17];
    if ((*(char *)(puVar20 + 0x13) != '\x01') ||
       (((puVar20[0xd] != 0 || (puVar20[0x16] != 0)) &&
        ((*(int *)((longlong)puVar20 + 0x8c) == 0 && (puVar20[0x10] == 0)))))) {
      lVar17 = puVar20[0x14];
      if (lVar17 == 0) {
        removing_hidapi_device_s_vid_0x4x_pid_0x4x_bl();
        DAT_1416f1760 = 0;
      }
      else {
        if (0 < *(int *)(lVar17 + 0xa8)) {
          lVar10 = 0;
          do {
            removing_hidapi_device_s_vid_0x4x_pid_0x4x_bl
                      (*(undefined8 *)(*(longlong *)(lVar17 + 0xb0) + lVar10 * 8));
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)(lVar17 + 0xa8));
        }
        removing_hidapi_device_s_vid_0x4x_pid_0x4x_bl(lVar17);
        DAT_1416f1760 = 0;
        puVar16 = DAT_1416f1750;
      }
    }
  }
  httplib::ClientImpl::vfunction4();
  if ((DAT_1416f1750 != (undefined8 *)0x0 & DAT_141503828) == 1) {
    puVar20 = (undefined8 *)0x0;
    puVar21 = (undefined8 *)0x0;
    puVar16 = DAT_1416f1750;
    do {
      while ((puVar16[0xd] != 0 && (puVar16[0x14] == 0))) {
        local_b8 = (char *)puVar16[6];
        uStack_b0 = puVar16[7];
        local_c8 = 0;
        FUN_14012c7b0(&local_b8,&local_ba,&local_bc,0);
        if ((puVar21 == (undefined8 *)0x0) &&
           (cVar7 = FUN_14012d520(local_ba,local_bc), puVar21 = puVar16, cVar7 == '\0')) {
          cVar7 = FUN_14012d560(local_ba,local_bc);
          if (cVar7 == '\0') {
            puVar21 = (undefined8 *)0x0;
          }
          else {
            pcVar15 = strstr((char *)*puVar16,"(L)");
            if (pcVar15 == (char *)0x0) {
              puVar21 = (undefined8 *)0x0;
            }
          }
        }
        if (((puVar20 != (undefined8 *)0x0) ||
            (cVar7 = FUN_14012d540(local_ba,local_bc), puVar20 = puVar16, cVar7 != '\0')) ||
           ((cVar7 = FUN_14012d560(local_ba,local_bc), cVar7 != '\0' &&
            (pcVar15 = strstr((char *)*puVar16,"(R)"), pcVar15 != (char *)0x0)))) {
          if (puVar21 == (undefined8 *)0x0) {
            puVar21 = (undefined8 *)0x0;
            break;
          }
          puVar16 = (undefined8 *)FUN_140160c40(0x10);
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = puVar21;
            puVar16[1] = puVar20;
            local_80 = 0;
            uStack_78 = 0;
            local_a0 = 0;
            uStack_a8 = 0;
            local_70 = 0;
            local_b8 = "nintendo_joycons_combined";
            uStack_b0 = 0x2008057e;
            uStack_88 = 0xffffffff00050001;
            pwStack_98 = L"Nintendo";
            local_90 = L"Switch Joy-Con (L/R)";
            lVar17 = added_hidapi_device_s_vid_0x4x_pid_0x4x_bluet(&local_b8,2,puVar16);
            if (lVar17 == 0) {
              FUN_140160cf0(puVar16);
            }
            else if (*(longlong *)(lVar17 + 0x68) == 0) {
              removing_hidapi_device_s_vid_0x4x_pid_0x4x_bl(lVar17);
            }
            else {
              httplib::ClientImpl::vfunction4();
              if (DAT_141503828 == 1) {
                puVar20 = (undefined8 *)0x0;
                puVar21 = (undefined8 *)0x0;
                puVar16 = DAT_1416f1750;
                goto joined_r0x000140440f3b;
              }
            }
          }
          goto LAB_140441110;
        }
        puVar20 = (undefined8 *)0x0;
        puVar16 = (undefined8 *)puVar16[0x17];
        if (puVar16 == (undefined8 *)0x0) goto LAB_140441110;
      }
      puVar16 = (undefined8 *)puVar16[0x17];
joined_r0x000140440f3b:
    } while (puVar16 != (undefined8 *)0x0);
  }
LAB_140441110:
  FUN_140126530();
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_e8);
  }
  return;
LAB_140440d00:
  do {
    cVar7 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar7 == '0');
  if (cVar7 == '\0') {
LAB_140440d13:
    _Str = *(wchar_t **)(lVar17 + 0x10);
    if (_Str != (wchar_t *)0x0) {
      wVar4 = *_Str;
      uVar9 = (uint)(ushort)wVar4;
      if (wVar4 != L'\0') {
        if (pcVar15 != (char *)0x0) {
          uVar18 = (uint)*pcVar15;
          if ((ushort)wVar4 == uVar18) {
            lVar19 = 1;
            do {
              wVar4 = _Str[lVar19];
              uVar9 = (uint)(ushort)wVar4;
              uVar18 = (uint)pcVar15[lVar19];
              if (wVar4 == L'\0') break;
              lVar19 = lVar19 + 1;
            } while ((ushort)wVar4 == uVar18);
          }
          if (uVar9 == uVar18) goto LAB_140440c8d;
        }
        FUN_140160cf0();
        sVar12 = wcslen(_Str);
        lVar19 = FUN_14017b9c0("UTF-8","WCHAR_T",_Str,sVar12 * 2 + 2);
        if (lVar19 == 0) {
          sVar12 = wcslen(_Str);
          lVar19 = FUN_14017b9c0("UTF-8","UCS-2-INTERNAL",_Str,sVar12 * 2 + 2);
        }
        puVar16[5] = lVar19;
        httplib::ClientImpl::vfunction4();
        if (0 < *(int *)((longlong)puVar16 + 0x8c)) {
          lVar19 = 0;
          do {
            lVar13 = FUN_14012a270(*(undefined4 *)(puVar16[0x12] + lVar19 * 4));
            if ((lVar13 != 0) && (puVar16[5] != 0)) {
              FUN_140160cf0(*(undefined8 *)(lVar13 + 0x18));
              uVar14 = FUN_1400fcda0(puVar16[5]);
              *(undefined8 *)(lVar13 + 0x18) = uVar14;
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 < *(int *)((longlong)puVar16 + 0x8c));
        }
      }
    }
  }
LAB_140440c8d:
  plVar1 = (longlong *)(lVar17 + 0x48);
  lVar17 = *plVar1;
  if (*plVar1 == 0) goto LAB_140440e1a;
  goto LAB_140440c9a;
LAB_140440e1a:
  FUN_14017a3b0(lVar10);
  puVar16 = DAT_1416f1750;
  goto LAB_140440e49;
}

