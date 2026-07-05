/**
 * Function: no_available_video_device
 * Address:  140144270
 * Signature: undefined no_available_video_device(void)
 * Body size: 754 bytes
 */


undefined8 no_available_video_device(char *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *_Str;
  longlong lVar8;
  
  if (DAT_1415259c8 != (undefined8 *)0x0) {
    video_subsystem_has_not_been_initialized();
  }
  sdl_timer_resolution();
  cVar2 = FUN_14015af80();
  if (cVar2 == '\0') {
    return 0;
  }
  cVar2 = FUN_14015f3e0();
  if (cVar2 == '\0') goto LAB_14014443c;
  cVar2 = FUN_140134420();
  if (cVar2 != '\0') {
    cVar2 = httplib::ClientImpl::vfunction2();
    if (cVar2 != '\0') {
      cVar2 = FUN_1404551f0();
      if (cVar2 != '\0') {
        if ((param_1 == (char *)0x0) && (param_1 = (char *)FUN_140110550(), param_1 == (char *)0x0))
        {
          bVar1 = true;
          param_1 = (char *)0x0;
LAB_140144457:
          puVar6 = (undefined8 *)(*(code *)PTR_registertouchwindow_1414f8d10)();
          if (puVar6 != (undefined8 *)0x0) {
            lVar8 = 0;
LAB_14014448c:
            DAT_1415259c8 = puVar6;
            *puVar6 = *(undefined8 *)(&PTR_PTR_140deae90)[lVar8];
            uVar7 = FUN_14015d2e0();
            puVar6 = DAT_1415259c8;
            DAT_1415259c8[0x60] = uVar7;
            *(undefined4 *)(puVar6 + 0x81) = 0;
            puVar6[0xa2] = 0;
            FUN_1401446d0();
            cVar2 = (*(code *)DAT_1415259c8[1])();
            if (cVar2 == '\0') {
              video_subsystem_has_not_been_initialized();
              return 0;
            }
            if (*(int *)(DAT_1415259c8 + 100) == 0) {
              video_subsystem_has_not_been_initialized();
              uVar7 = FUN_1400fbed0("The video driver did not add any displays");
              return uVar7;
            }
            parameter_s_is_invalid("SDL_VIDEO_SYNC_WINDOW_OPERATIONS",FUN_1401447b0,0);
            cVar2 = FUN_1401106d0("SDL_VIDEO_ALLOW_SCREENSAVER",0);
            if (cVar2 == '\0') {
              video_subsystem_has_not_been_initialized();
            }
            cursor_hot_spot_doesnt_lie_within_cursor();
            return 1;
          }
          puVar6 = (undefined8 *)(*(code *)PTR_FUN_141503cd0)();
          if (puVar6 != (undefined8 *)0x0) {
            lVar8 = 1;
            goto LAB_14014448c;
          }
          puVar6 = (undefined8 *)(*(code *)PTR_FUN_141503cf0)();
          if (puVar6 != (undefined8 *)0x0) {
            lVar8 = 2;
            goto LAB_14014448c;
          }
          if (!bVar1) goto LAB_140144419;
          FUN_1400fbed0("No available video device");
        }
        else {
          if (*param_1 == '\0') {
            bVar1 = false;
            goto LAB_140144457;
          }
          _Str = param_1;
          if (*param_1 == '\0') {
            puVar6 = (undefined8 *)0x0;
            lVar8 = 0;
          }
          else {
            do {
              pcVar4 = strchr(_Str,0x2c);
              if (pcVar4 == (char *)0x0) {
                lVar8 = FUN_1400fc570(_Str);
                lVar5 = FUN_1400fc570(PTR_s_windows_141331d30_0x1b_1414f8d00);
                if (lVar8 == lVar5) goto LAB_140144352;
LAB_140144368:
                lVar5 = FUN_1400fc570(PTR_s_offscreen_141503cc0);
                if ((lVar8 == lVar5) &&
                   ((iVar3 = FUN_1400fcff0(PTR_s_offscreen_141503cc0,_Str,lVar8), iVar3 == 0 &&
                    (puVar6 = (undefined8 *)(*(code *)PTR_FUN_141503cd0)(),
                    puVar6 != (undefined8 *)0x0)))) {
                  lVar8 = 1;
                }
                else {
                  lVar5 = FUN_1400fc570(PTR_s_dummy_141503ce0);
                  if ((lVar8 == lVar5) &&
                     ((iVar3 = FUN_1400fcff0(PTR_s_dummy_141503ce0,_Str,lVar8), iVar3 == 0 &&
                      (puVar6 = (undefined8 *)(*(code *)PTR_FUN_141503cf0)(),
                      puVar6 != (undefined8 *)0x0)))) {
                    lVar8 = 2;
                  }
                  else {
                    lVar8 = 3;
                    puVar6 = (undefined8 *)0x0;
                  }
                }
              }
              else {
                lVar8 = (longlong)pcVar4 - (longlong)_Str;
                lVar5 = FUN_1400fc570(PTR_s_windows_141331d30_0x1b_1414f8d00);
                if (lVar8 != lVar5) goto LAB_140144368;
LAB_140144352:
                iVar3 = FUN_1400fcff0(PTR_s_windows_141331d30_0x1b_1414f8d00,_Str,lVar8);
                if ((iVar3 != 0) ||
                   (puVar6 = (undefined8 *)(*(code *)PTR_registertouchwindow_1414f8d10)(),
                   puVar6 == (undefined8 *)0x0)) goto LAB_140144368;
                lVar8 = 0;
              }
            } while (((pcVar4 != (char *)0x0) && (pcVar4[1] != '\0')) &&
                    (_Str = pcVar4 + 1, puVar6 == (undefined8 *)0x0));
          }
          if (puVar6 != (undefined8 *)0x0) goto LAB_14014448c;
LAB_140144419:
          FUN_1400fbed0("%s not available",param_1);
        }
        FUN_140455210();
      }
      FUN_140163e70();
    }
    sdl_capturemouse_must_be_called_on_the_main_t();
  }
  FUN_140160960();
LAB_14014443c:
  FUN_14015b5e0(0x4000);
  return 0;
}

