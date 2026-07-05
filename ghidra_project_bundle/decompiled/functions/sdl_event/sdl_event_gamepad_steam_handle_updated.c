/**
 * Function: sdl_event_gamepad_steam_handle_updated
 * Address:  1401082f0
 * Signature: undefined sdl_event_gamepad_steam_handle_updated(void)
 * Body size: 4420 bytes
 */


void sdl_event_gamepad_steam_handle_updated(uint *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_148 [32];
  char *local_128;
  char *pcStack_120;
  char *local_118;
  char *local_110;
  char *pcStack_108;
  char *local_100;
  char *local_f8;
  undefined1 local_e8 [16];
  char local_d8 [128];
  char local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_148;
  uVar1 = *param_1;
  if (DAT_1415254ac < 2) {
    if ((int)uVar1 < 0x702) {
      if (((uVar1 == 0x400) || (uVar1 == 0x657)) || (uVar1 == 0x659)) goto LAB_140109403;
    }
    else if (((uVar1 - 0x1306 < 2) || (uVar1 == 0x702)) || (uVar1 == 0x1200)) goto LAB_140109403;
  }
  local_58[0] = '\0';
  local_d8[0] = '\0';
  if ((uVar1 & 0xffff8000) == 0x8000) {
    FUN_1400fcb10(local_58,"SDL_EVENT_USER",0x40);
    if (*param_1 < 0x8001) {
      local_e8[0] = 0;
    }
    else {
      FUN_1400fd420(local_e8,0x10,&DAT_14132a51e,*param_1 - 0x8000);
    }
    local_110 = *(char **)(param_1 + 6);
    pcStack_108 = *(char **)(param_1 + 8);
    local_118 = (char *)CONCAT44(local_118._4_4_,param_1[5]);
    pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[4]);
    local_128 = (char *)CONCAT44(local_128._4_4_,param_1[2]);
    FUN_1400fd420(local_d8,0x80,"%s (timestamp=%u windowid=%u code=%d data1=%p data2=%p)",local_e8);
    uVar1 = *param_1;
  }
  if (0x5ff < (int)uVar1) {
    if (0xfff < (int)uVar1) {
      if ((int)uVar1 < 0x1300) {
        if (0x10ff < (int)uVar1) {
          if ((int)uVar1 < 0x1102) {
            if (uVar1 == 0x1100) {
              pcVar3 = "SDL_EVENT_AUDIO_DEVICE_ADDED";
            }
            else {
              if (uVar1 != 0x1101) goto switchD_140108440_caseD_109;
              pcVar3 = "SDL_EVENT_AUDIO_DEVICE_REMOVED";
            }
          }
          else {
            if (uVar1 != 0x1102) {
              if (uVar1 == 0x1200) {
                FUN_1400fcb10(local_58,"SDL_EVENT_SENSOR_UPDATE",0x40);
                local_f8 = (char *)(double)(float)param_1[10];
                local_100 = (char *)(double)(float)param_1[9];
                pcStack_108 = (char *)(double)(float)param_1[8];
                local_110 = (char *)(double)(float)param_1[7];
                local_118 = (char *)(double)(float)param_1[6];
                uVar1 = param_1[2];
                local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
                pcVar3 = 
                " (timestamp=%u which=%d data[0]=%f data[1]=%f data[2]=%f data[3]=%f data[4]=%f data[5]=%f)"
                ;
                pcStack_120 = (char *)(double)(float)param_1[5];
                goto LAB_1401093d1;
              }
              goto switchD_140108440_caseD_109;
            }
            pcVar3 = "SDL_EVENT_AUDIO_DEVICE_FORMAT_CHANGED";
          }
          FUN_1400fcb10(local_58,pcVar3,0x40);
          pcStack_120 = "false";
          if ((char)param_1[5] != '\0') {
            pcStack_120 = "true";
          }
          uVar1 = param_1[2];
          local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
          pcVar3 = " (timestamp=%u which=%u recording=%s)";
          goto LAB_1401093d1;
        }
        switch(uVar1) {
        case 0x1000:
          pcVar3 = "SDL_EVENT_DROP_FILE";
          break;
        case 0x1001:
          pcVar3 = "SDL_EVENT_DROP_TEXT";
          break;
        case 0x1002:
          pcVar3 = "SDL_EVENT_DROP_BEGIN";
          break;
        case 0x1003:
          pcVar3 = "SDL_EVENT_DROP_COMPLETE";
          break;
        case 0x1004:
          pcVar3 = "SDL_EVENT_DROP_POSITION";
          break;
        default:
          goto switchD_140108440_caseD_109;
        }
        FUN_1400fcb10(local_58,pcVar3,0x40);
        local_110 = (char *)(double)(float)param_1[6];
        local_118 = (char *)(double)(float)param_1[5];
        pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[4]);
        local_128 = (char *)CONCAT44(local_128._4_4_,param_1[2]);
        FUN_1400fd420(local_d8,0x80," (data=\'%s\' timestamp=%u windowid=%u x=%f y=%f)",
                      *(undefined8 *)(param_1 + 10));
        goto LAB_1401093e0;
      }
      if (0x13ff < (int)uVar1) {
        if ((int)uVar1 < 0x2000) {
          switch(uVar1) {
          case 0x1400:
            pcVar3 = "SDL_EVENT_CAMERA_DEVICE_ADDED";
            break;
          case 0x1401:
            pcVar3 = "SDL_EVENT_CAMERA_DEVICE_REMOVED";
            break;
          case 0x1402:
            pcVar3 = "SDL_EVENT_CAMERA_DEVICE_APPROVED";
            break;
          case 0x1403:
            pcVar3 = "SDL_EVENT_CAMERA_DEVICE_DENIED";
            break;
          default:
            goto switchD_140108440_caseD_109;
          }
          goto LAB_1401092c8;
        }
        if ((int)uVar1 < 0x2002) {
          if (uVar1 == 0x2000) {
            pcVar3 = "SDL_EVENT_RENDER_TARGETS_RESET";
          }
          else {
            if (uVar1 != 0x2001) goto switchD_140108440_caseD_109;
            pcVar3 = "SDL_EVENT_RENDER_DEVICE_RESET";
          }
        }
        else {
          if (uVar1 != 0x2002) {
            if (uVar1 != 0x7f00) goto switchD_140108440_caseD_109;
            goto LAB_1401093e0;
          }
          pcVar3 = "SDL_EVENT_RENDER_DEVICE_LOST";
        }
        FUN_1400fcb10(local_58,pcVar3,0x40);
        uVar1 = param_1[2];
        pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[4]);
        pcVar3 = " (timestamp=%u event=%s windowid=%u)";
        local_128 = local_58;
        goto LAB_1401093d1;
      }
      switch(uVar1) {
      case 0x1300:
        pcVar3 = "SDL_EVENT_PEN_PROXIMITY_IN";
        goto LAB_140108f1b;
      case 0x1301:
        pcVar3 = "SDL_EVENT_PEN_PROXIMITY_OUT";
LAB_140108f1b:
        FUN_1400fcb10(local_58,pcVar3,0x40);
        uVar1 = param_1[2];
        pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
        local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
        pcVar3 = " (timestamp=%u windowid=%u which=%u)";
        break;
      case 0x1302:
        pcVar3 = "SDL_EVENT_PEN_DOWN";
        goto LAB_140108df6;
      case 0x1303:
        pcVar3 = "SDL_EVENT_PEN_UP";
LAB_140108df6:
        FUN_1400fcb10(local_58,pcVar3,0x40);
        local_f8 = "up";
        if (*(char *)((longlong)param_1 + 0x25) != '\0') {
          local_f8 = "down";
        }
        local_100 = "no";
        if ((char)param_1[9] != '\0') {
          local_100 = "yes";
        }
        pcStack_108 = (char *)(double)(float)param_1[8];
        local_110 = (char *)(double)(float)param_1[7];
        uVar1 = param_1[2];
        local_118 = (char *)CONCAT44(local_118._4_4_,param_1[6]);
        pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
        local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
        pcVar3 = " (timestamp=%u windowid=%u which=%u pen_state=%u x=%g y=%g eraser=%s state=%s)";
        break;
      case 0x1304:
        pcVar3 = "SDL_EVENT_PEN_BUTTON_DOWN";
        goto LAB_140108f5f;
      case 0x1305:
        pcVar3 = "SDL_EVENT_PEN_BUTTON_UP";
LAB_140108f5f:
        FUN_1400fcb10(local_58,pcVar3,0x40);
        local_f8 = "up";
        if (*(char *)((longlong)param_1 + 0x25) != '\0') {
          local_f8 = "down";
        }
        pcStack_108 = (char *)(double)(float)param_1[8];
        local_110 = (char *)(double)(float)param_1[7];
        uVar1 = param_1[2];
        local_100 = (char *)CONCAT44(local_100._4_4_,(uint)(byte)param_1[9]);
        local_118 = (char *)CONCAT44(local_118._4_4_,param_1[6]);
        pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
        local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
        pcVar3 = " (timestamp=%u windowid=%u which=%u pen_state=%u x=%g y=%g button=%u state=%s)";
        break;
      case 0x1306:
        FUN_1400fcb10(local_58,"SDL_EVENT_PEN_MOTION",0x40);
        pcStack_108 = (char *)(double)(float)param_1[8];
        local_110 = (char *)(double)(float)param_1[7];
        uVar1 = param_1[2];
        local_118 = (char *)CONCAT44(local_118._4_4_,param_1[6]);
        pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
        local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
        pcVar3 = " (timestamp=%u windowid=%u which=%u pen_state=%u x=%g y=%g)";
        break;
      case 0x1307:
        FUN_1400fcb10(local_58,"SDL_EVENT_PEN_AXIS",0x40);
        local_f8 = (char *)(double)(float)param_1[10];
        if ((ulonglong)param_1[9] < 7) {
          local_100 = (&PTR_s_PRESSURE_14136996a_0xb_140de8640)[param_1[9]];
        }
        else {
          local_100 = "[UNKNOWN]";
        }
        pcStack_108 = (char *)(double)(float)param_1[8];
        local_110 = (char *)(double)(float)param_1[7];
        uVar1 = param_1[2];
        local_118 = (char *)CONCAT44(local_118._4_4_,param_1[6]);
        pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
        local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
        pcVar3 = " (timestamp=%u windowid=%u which=%u pen_state=%u x=%g y=%g axis=%s value=%g)";
        break;
      default:
        goto switchD_140108440_caseD_109;
      }
      goto LAB_1401093d1;
    }
    switch(uVar1) {
    case 0x600:
      pcVar3 = "SDL_EVENT_JOYSTICK_AXIS_MOTION";
      goto LAB_14010880c;
    case 0x601:
      FUN_1400fcb10(local_58,"SDL_EVENT_JOYSTICK_BALL_MOTION",0x40);
      uVar1 = param_1[2];
      local_110 = (char *)CONCAT44(local_110._4_4_,(int)*(short *)((longlong)param_1 + 0x1a));
      local_118 = (char *)CONCAT44(local_118._4_4_,(int)(short)param_1[6]);
      pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,(uint)(byte)param_1[5]);
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u which=%d ball=%u xrel=%d yrel=%d)";
      break;
    case 0x602:
      FUN_1400fcb10(local_58,"SDL_EVENT_JOYSTICK_HAT_MOTION",0x40);
      uVar1 = param_1[2];
      local_118 = (char *)CONCAT44(local_118._4_4_,(uint)*(byte *)((longlong)param_1 + 0x15));
      pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,(uint)(byte)param_1[5]);
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u which=%d hat=%u value=%u)";
      break;
    case 0x603:
      pcVar3 = "SDL_EVENT_JOYSTICK_BUTTON_DOWN";
      goto LAB_140108a31;
    case 0x604:
      pcVar3 = "SDL_EVENT_JOYSTICK_BUTTON_UP";
      goto LAB_140108a31;
    case 0x605:
      pcVar3 = "SDL_EVENT_JOYSTICK_ADDED";
      goto LAB_140108a97;
    case 0x606:
      pcVar3 = "SDL_EVENT_JOYSTICK_REMOVED";
      goto LAB_140108a97;
    case 0x607:
      FUN_1400fcb10(local_58,"SDL_EVENT_JOYSTICK_BATTERY_UPDATED",0x40);
      uVar1 = param_1[2];
      local_118 = (char *)CONCAT44(local_118._4_4_,param_1[6]);
      pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u which=%d state=%u percent=%d)";
      break;
    case 0x608:
      pcVar3 = "SDL_EVENT_JOYSTICK_UPDATE_COMPLETE";
      goto LAB_140108a97;
    case 0x609:
    case 0x60a:
    case 0x60b:
    case 0x60c:
    case 0x60d:
    case 0x60e:
    case 0x60f:
    case 0x610:
    case 0x611:
    case 0x612:
    case 0x613:
    case 0x614:
    case 0x615:
    case 0x616:
    case 0x617:
    case 0x618:
    case 0x619:
    case 0x61a:
    case 0x61b:
    case 0x61c:
    case 0x61d:
    case 0x61e:
    case 0x61f:
    case 0x620:
    case 0x621:
    case 0x622:
    case 0x623:
    case 0x624:
    case 0x625:
    case 0x626:
    case 0x627:
    case 0x628:
    case 0x629:
    case 0x62a:
    case 0x62b:
    case 0x62c:
    case 0x62d:
    case 0x62e:
    case 0x62f:
    case 0x630:
    case 0x631:
    case 0x632:
    case 0x633:
    case 0x634:
    case 0x635:
    case 0x636:
    case 0x637:
    case 0x638:
    case 0x639:
    case 0x63a:
    case 0x63b:
    case 0x63c:
    case 0x63d:
    case 0x63e:
    case 0x63f:
    case 0x640:
    case 0x641:
    case 0x642:
    case 0x643:
    case 0x644:
    case 0x645:
    case 0x646:
    case 0x647:
    case 0x648:
    case 0x649:
    case 0x64a:
    case 0x64b:
    case 0x64c:
    case 0x64d:
    case 0x64e:
    case 0x64f:
      goto switchD_140108440_caseD_109;
    case 0x650:
      pcVar3 = "SDL_EVENT_GAMEPAD_AXIS_MOTION";
LAB_14010880c:
      FUN_1400fcb10(local_58,pcVar3,0x40);
      uVar1 = param_1[2];
      local_118 = (char *)CONCAT44(local_118._4_4_,(int)(short)param_1[6]);
      pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,(uint)(byte)param_1[5]);
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u which=%d axis=%u value=%d)";
      break;
    case 0x651:
      pcVar3 = "SDL_EVENT_GAMEPAD_BUTTON_DOWN";
      goto LAB_140108a31;
    case 0x652:
      pcVar3 = "SDL_EVENT_GAMEPAD_BUTTON_UP";
LAB_140108a31:
      FUN_1400fcb10(local_58,pcVar3,0x40);
      local_118 = "released";
      if (*(char *)((longlong)param_1 + 0x15) != '\0') {
        local_118 = "pressed";
      }
      uVar1 = param_1[2];
      pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,(uint)(byte)param_1[5]);
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u which=%d button=%u state=%s)";
      break;
    case 0x653:
      pcVar3 = "SDL_EVENT_GAMEPAD_ADDED";
      goto LAB_140108a97;
    case 0x654:
      pcVar3 = "SDL_EVENT_GAMEPAD_REMOVED";
      goto LAB_140108a97;
    case 0x655:
      pcVar3 = "SDL_EVENT_GAMEPAD_REMAPPED";
      goto LAB_140108a97;
    case 0x656:
      pcVar3 = "SDL_EVENT_GAMEPAD_TOUCHPAD_DOWN";
      goto LAB_140108954;
    case 0x657:
      pcVar3 = "SDL_EVENT_GAMEPAD_TOUCHPAD_MOTION";
      goto LAB_140108954;
    case 0x658:
      pcVar3 = "SDL_EVENT_GAMEPAD_TOUCHPAD_UP";
LAB_140108954:
      FUN_1400fcb10(local_58,pcVar3,0x40);
      local_100 = (char *)(double)(float)param_1[9];
      pcStack_108 = (char *)(double)(float)param_1[8];
      local_110 = (char *)(double)(float)param_1[7];
      uVar1 = param_1[2];
      local_118 = (char *)CONCAT44(local_118._4_4_,param_1[6]);
      pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u which=%d touchpad=%d finger=%d x=%f y=%f pressure=%f)";
      break;
    case 0x659:
      FUN_1400fcb10(local_58,"SDL_EVENT_GAMEPAD_SENSOR_UPDATE",0x40);
      pcStack_108 = (char *)(double)(float)param_1[8];
      local_110 = (char *)(double)(float)param_1[7];
      local_118 = (char *)(double)(float)param_1[6];
      uVar1 = param_1[2];
      pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u which=%d sensor=%d data[0]=%f data[1]=%f data[2]=%f)";
      break;
    case 0x65a:
      pcVar3 = "SDL_EVENT_GAMEPAD_UPDATE_COMPLETE";
      goto LAB_140108a97;
    case 0x65b:
      pcVar3 = "SDL_EVENT_GAMEPAD_STEAM_HANDLE_UPDATED";
LAB_140108a97:
      FUN_1400fcb10(local_58,pcVar3,0x40);
      uVar1 = param_1[2];
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u which=%d)";
      break;
    default:
      switch(uVar1) {
      case 0x700:
        pcVar3 = "SDL_EVENT_FINGER_DOWN";
        break;
      case 0x701:
        pcVar3 = "SDL_EVENT_FINGER_UP";
        break;
      case 0x702:
        pcVar3 = "SDL_EVENT_FINGER_MOTION";
        break;
      case 0x703:
        pcVar3 = "SDL_EVENT_FINGER_CANCELED";
        break;
      default:
        if (uVar1 == 0x900) {
          pcVar3 = "SDL_EVENT_CLIPBOARD_UPDATE";
          goto LAB_140109040;
        }
        goto switchD_140108440_caseD_109;
      }
      FUN_1400fcb10(local_58,pcVar3,0x40);
      local_f8 = (char *)(double)(float)param_1[0xc];
      local_100 = (char *)(double)(float)param_1[0xb];
      pcStack_108 = (char *)(double)(float)param_1[10];
      local_110 = (char *)(double)(float)param_1[9];
      local_118 = (char *)(double)(float)param_1[8];
      local_128 = *(char **)(param_1 + 4);
      pcStack_120 = *(char **)(param_1 + 6);
      uVar1 = param_1[2];
      pcVar3 = " (timestamp=%u touchid=%I64u fingerid=%I64u x=%f y=%f dx=%f dy=%f pressure=%f)";
    }
    goto LAB_1401093d1;
  }
  if (0x2ff < (int)uVar1) {
    switch(uVar1) {
    case 0x300:
      pcVar3 = "SDL_EVENT_KEY_DOWN";
      goto LAB_1401091ab;
    case 0x301:
      pcVar3 = "SDL_EVENT_KEY_UP";
LAB_1401091ab:
      FUN_1400fcb10(local_58,pcVar3,0x40);
      local_110 = "false";
      if (*(char *)((longlong)param_1 + 0x25) != '\0') {
        local_110 = "true";
      }
      local_118 = "released";
      if ((char)param_1[9] != '\0') {
        local_118 = "pressed";
      }
      uVar1 = param_1[2];
      local_f8 = (char *)CONCAT44(local_f8._4_4_,(uint)(ushort)param_1[8]);
      local_100 = (char *)CONCAT44(local_100._4_4_,param_1[7]);
      pcStack_108 = (char *)CONCAT44(pcStack_108._4_4_,param_1[6]);
      pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = 
      " (timestamp=%u windowid=%u which=%u state=%s repeat=%s scancode=%u keycode=%u mod=0x%x)";
      break;
    case 0x302:
      FUN_1400fcb10(local_58,"SDL_EVENT_TEXT_EDITING",0x40);
      pcStack_120 = *(char **)(param_1 + 6);
      uVar1 = param_1[2];
      local_110 = (char *)CONCAT44(local_110._4_4_,param_1[9]);
      local_118 = (char *)CONCAT44(local_118._4_4_,param_1[8]);
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u windowid=%u text=\'%s\' start=%d length=%d)";
      break;
    case 0x303:
      FUN_1400fcb10(local_58,"SDL_EVENT_TEXT_INPUT",0x40);
      pcStack_120 = *(char **)(param_1 + 6);
      uVar1 = param_1[2];
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u windowid=%u text=\'%s\')";
      break;
    case 0x304:
      pcVar3 = "SDL_EVENT_KEYMAP_CHANGED";
      goto LAB_140109040;
    case 0x305:
      pcVar3 = "SDL_EVENT_KEYBOARD_ADDED";
      goto LAB_1401092c8;
    case 0x306:
      pcVar3 = "SDL_EVENT_KEYBOARD_REMOVED";
LAB_1401092c8:
      FUN_1400fcb10(local_58,pcVar3,0x40);
      uVar1 = param_1[2];
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u which=%u)";
      break;
    case 0x307:
      FUN_1400fcb10(local_58,"SDL_EVENT_TEXT_EDITING_CANDIDATES",0x40);
      uVar1 = param_1[2];
      local_118 = (char *)CONCAT44(local_118._4_4_,param_1[9]);
      pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[8]);
      local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
      pcVar3 = " (timestamp=%u windowid=%u num_candidates=%d selected_candidate=%d)";
      break;
    default:
      switch(uVar1) {
      case 0x400:
        FUN_1400fcb10(local_58,"SDL_EVENT_MOUSE_MOTION",0x40);
        local_f8 = (char *)(double)(float)param_1[10];
        local_100 = (char *)(double)(float)param_1[9];
        pcStack_108 = (char *)(double)(float)param_1[8];
        local_110 = (char *)(double)(float)param_1[7];
        uVar1 = param_1[2];
        local_118 = (char *)CONCAT44(local_118._4_4_,param_1[6]);
        pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
        local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
        pcVar3 = " (timestamp=%u windowid=%u which=%u state=%u x=%g y=%g xrel=%g yrel=%g)";
        break;
      case 0x401:
        pcVar3 = "SDL_EVENT_MOUSE_BUTTON_DOWN";
        goto LAB_140109231;
      case 0x402:
        pcVar3 = "SDL_EVENT_MOUSE_BUTTON_UP";
LAB_140109231:
        FUN_1400fcb10(local_58,pcVar3,0x40);
        local_f8 = (char *)(double)(float)param_1[8];
        local_100 = (char *)(double)(float)param_1[7];
        local_110 = "released";
        if (*(char *)((longlong)param_1 + 0x19) != '\0') {
          local_110 = "pressed";
        }
        uVar1 = param_1[2];
        pcStack_108 = (char *)CONCAT44(pcStack_108._4_4_,(uint)*(byte *)((longlong)param_1 + 0x1a));
        local_118 = (char *)CONCAT44(local_118._4_4_,(uint)(byte)param_1[6]);
        pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
        local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
        pcVar3 = " (timestamp=%u windowid=%u which=%u button=%u state=%s clicks=%u x=%g y=%g)";
        break;
      case 0x403:
        FUN_1400fcb10(local_58,"SDL_EVENT_MOUSE_WHEEL",0x40);
        pcStack_108 = "flipped";
        if (param_1[8] == 0) {
          pcStack_108 = "normal";
        }
        local_110 = (char *)(double)(float)param_1[7];
        local_118 = (char *)(double)(float)param_1[6];
        uVar1 = param_1[2];
        pcStack_120 = (char *)CONCAT44(pcStack_120._4_4_,param_1[5]);
        local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
        pcVar3 = " (timestamp=%u windowid=%u which=%u x=%g y=%g direction=%s)";
        break;
      case 0x404:
        pcVar3 = "SDL_EVENT_MOUSE_ADDED";
        goto LAB_1401092c8;
      case 0x405:
        pcVar3 = "SDL_EVENT_MOUSE_REMOVED";
        goto LAB_1401092c8;
      default:
        goto switchD_140108440_caseD_109;
      }
    }
    goto LAB_1401093d1;
  }
  switch(uVar1) {
  case 0x100:
    FUN_1400fcb10(local_58,"SDL_EVENT_QUIT",0x40);
    uVar1 = param_1[2];
    pcVar3 = " (timestamp=%u)";
    goto LAB_1401093d1;
  case 0x101:
    pcVar3 = "SDL_EVENT_TERMINATING";
    goto LAB_140109040;
  case 0x102:
    pcVar3 = "SDL_EVENT_LOW_MEMORY";
    goto LAB_140109040;
  case 0x103:
    pcVar3 = "SDL_EVENT_WILL_ENTER_BACKGROUND";
    goto LAB_140109040;
  case 0x104:
    pcVar3 = "SDL_EVENT_DID_ENTER_BACKGROUND";
    goto LAB_140109040;
  case 0x105:
    pcVar3 = "SDL_EVENT_WILL_ENTER_FOREGROUND";
    goto LAB_140109040;
  case 0x106:
    pcVar3 = "SDL_EVENT_DID_ENTER_FOREGROUND";
    goto LAB_140109040;
  case 0x107:
    pcVar3 = "SDL_EVENT_LOCALE_CHANGED";
    goto LAB_140109040;
  case 0x108:
    pcVar3 = "SDL_EVENT_SYSTEM_THEME_CHANGED";
LAB_140109040:
    pcVar2 = local_58;
    uVar4 = 0x40;
LAB_14010904e:
    FUN_1400fcb10(pcVar2,pcVar3,uVar4);
    goto LAB_1401093e0;
  case 0x109:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x113:
  case 0x114:
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 0x12a:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x13b:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x140:
  case 0x141:
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x145:
  case 0x146:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x14b:
  case 0x14c:
  case 0x14d:
  case 0x14e:
  case 0x14f:
  case 0x150:
  case 0x158:
  case 0x159:
  case 0x15a:
  case 0x15b:
  case 0x15c:
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x164:
  case 0x165:
  case 0x166:
  case 0x167:
  case 0x168:
  case 0x169:
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x172:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x176:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
  case 0x17b:
  case 0x17c:
  case 0x17d:
  case 0x17e:
  case 0x17f:
  case 0x180:
  case 0x181:
  case 0x182:
  case 0x183:
  case 0x184:
  case 0x185:
  case 0x186:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
  case 0x18c:
  case 0x18d:
  case 0x18e:
  case 399:
  case 400:
  case 0x191:
  case 0x192:
  case 0x193:
  case 0x194:
  case 0x195:
  case 0x196:
  case 0x197:
  case 0x198:
  case 0x199:
  case 0x19a:
  case 0x19b:
  case 0x19c:
  case 0x19d:
  case 0x19e:
  case 0x19f:
  case 0x1a0:
  case 0x1a1:
  case 0x1a2:
  case 0x1a3:
  case 0x1a4:
  case 0x1a5:
  case 0x1a6:
  case 0x1a7:
  case 0x1a8:
  case 0x1a9:
  case 0x1aa:
  case 0x1ab:
  case 0x1ac:
  case 0x1ad:
  case 0x1ae:
  case 0x1af:
  case 0x1b0:
  case 0x1b1:
  case 0x1b2:
  case 0x1b3:
  case 0x1b4:
  case 0x1b5:
  case 0x1b6:
  case 0x1b7:
  case 0x1b8:
  case 0x1b9:
  case 0x1ba:
  case 0x1bb:
  case 0x1bc:
  case 0x1bd:
  case 0x1be:
  case 0x1bf:
  case 0x1c0:
  case 0x1c1:
  case 0x1c2:
  case 0x1c3:
  case 0x1c4:
  case 0x1c5:
  case 0x1c6:
  case 0x1c7:
  case 0x1c8:
  case 0x1c9:
  case 0x1ca:
  case 0x1cb:
  case 0x1cc:
  case 0x1cd:
  case 0x1ce:
  case 0x1cf:
  case 0x1d0:
  case 0x1d1:
  case 0x1d2:
  case 0x1d3:
  case 0x1d4:
  case 0x1d5:
  case 0x1d6:
  case 0x1d7:
  case 0x1d8:
  case 0x1d9:
  case 0x1da:
  case 0x1db:
  case 0x1dc:
  case 0x1dd:
  case 0x1de:
  case 0x1df:
  case 0x1e0:
  case 0x1e1:
  case 0x1e2:
  case 0x1e3:
  case 0x1e4:
  case 0x1e5:
  case 0x1e6:
  case 0x1e7:
  case 0x1e8:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
  case 0x1ee:
  case 0x1ef:
  case 0x1f0:
  case 0x1f1:
  case 0x1f2:
  case 499:
  case 500:
  case 0x1f5:
  case 0x1f6:
  case 0x1f7:
  case 0x1f8:
  case 0x1f9:
  case 0x1fa:
  case 0x1fb:
  case 0x1fc:
  case 0x1fd:
  case 0x1fe:
  case 0x1ff:
  case 0x200:
  case 0x201:
switchD_140108440_caseD_109:
    if (local_58[0] == '\0') {
      pcVar3 = "UNKNOWN";
      if (0x7fff < uVar1) {
        pcVar3 = "USER";
      }
      FUN_1400fcb10(local_58,pcVar3,0x40);
      uVar1 = *param_1;
      pcVar3 = " 0x%x";
      goto LAB_1401093d1;
    }
    goto LAB_1401093ea;
  case 0x151:
    pcVar3 = "SDL_EVENT_DISPLAY_ORIENTATION";
    goto LAB_140108c33;
  case 0x152:
    pcVar3 = "SDL_EVENT_DISPLAY_ADDED";
    goto LAB_140108c33;
  case 0x153:
    pcVar3 = "SDL_EVENT_DISPLAY_REMOVED";
    goto LAB_140108c33;
  case 0x154:
    pcVar3 = "SDL_EVENT_DISPLAY_MOVED";
    goto LAB_140108c33;
  case 0x155:
    pcVar3 = "SDL_EVENT_DISPLAY_DESKTOP_MODE_CHANGED";
    goto LAB_140108c33;
  case 0x156:
    pcVar3 = "SDL_EVENT_DISPLAY_CURRENT_MODE_CHANGED";
    goto LAB_140108c33;
  case 0x157:
    pcVar3 = "SDL_EVENT_DISPLAY_CONTENT_SCALE_CHANGED";
LAB_140108c33:
    FUN_1400fcb10(local_58,pcVar3,0x40);
    uVar1 = param_1[2];
    local_110 = (char *)CONCAT44(local_110._4_4_,param_1[6]);
    local_118 = (char *)CONCAT44(local_118._4_4_,param_1[5]);
    local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
    pcVar3 = " (timestamp=%u display=%u event=%s data1=%d, data2=%d)";
    pcStack_120 = local_58;
    goto LAB_1401093d1;
  case 0x202:
    pcVar3 = "SDL_EVENT_WINDOW_SHOWN";
    break;
  case 0x203:
    pcVar3 = "SDL_EVENT_WINDOW_HIDDEN";
    break;
  case 0x204:
    pcVar3 = "SDL_EVENT_WINDOW_EXPOSED";
    break;
  case 0x205:
    pcVar3 = "SDL_EVENT_WINDOW_MOVED";
    break;
  case 0x206:
    pcVar3 = "SDL_EVENT_WINDOW_RESIZED";
    break;
  case 0x207:
    pcVar3 = "SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED";
    break;
  case 0x208:
    pcVar3 = "SDL_EVENT_WINDOW_METAL_VIEW_RESIZED";
    break;
  case 0x209:
    pcVar3 = "SDL_EVENT_WINDOW_MINIMIZED";
    break;
  case 0x20a:
    pcVar3 = "SDL_EVENT_WINDOW_MAXIMIZED";
    break;
  case 0x20b:
    pcVar3 = "SDL_EVENT_WINDOW_RESTORED";
    break;
  case 0x20c:
    pcVar3 = "SDL_EVENT_WINDOW_MOUSE_ENTER";
    break;
  case 0x20d:
    pcVar3 = "SDL_EVENT_WINDOW_MOUSE_LEAVE";
    break;
  case 0x20e:
    pcVar3 = "SDL_EVENT_WINDOW_FOCUS_GAINED";
    break;
  case 0x20f:
    pcVar3 = "SDL_EVENT_WINDOW_FOCUS_LOST";
    break;
  case 0x210:
    pcVar3 = "SDL_EVENT_WINDOW_CLOSE_REQUESTED";
    break;
  case 0x211:
    pcVar3 = "SDL_EVENT_WINDOW_HIT_TEST";
    break;
  case 0x212:
    pcVar3 = "SDL_EVENT_WINDOW_ICCPROF_CHANGED";
    break;
  case 0x213:
    pcVar3 = "SDL_EVENT_WINDOW_DISPLAY_CHANGED";
    break;
  case 0x214:
    pcVar3 = "SDL_EVENT_WINDOW_DISPLAY_SCALE_CHANGED";
    break;
  case 0x215:
    pcVar3 = "SDL_EVENT_WINDOW_SAFE_AREA_CHANGED";
    break;
  case 0x216:
    pcVar3 = "SDL_EVENT_WINDOW_OCCLUDED";
    break;
  case 0x217:
    pcVar3 = "SDL_EVENT_WINDOW_ENTER_FULLSCREEN";
    break;
  case 0x218:
    pcVar3 = "SDL_EVENT_WINDOW_LEAVE_FULLSCREEN";
    break;
  case 0x219:
    pcVar3 = "SDL_EVENT_WINDOW_DESTROYED";
    break;
  case 0x21a:
    pcVar3 = "SDL_EVENT_WINDOW_HDR_STATE_CHANGED";
    break;
  default:
    if (uVar1 != 0) goto switchD_140108440_caseD_109;
    FUN_1400fcb10(local_58,"SDL_EVENT_FIRST",0x40);
    pcVar3 = " (THIS IS PROBABLY A BUG!)";
    pcVar2 = local_d8;
    uVar4 = 0x80;
    goto LAB_14010904e;
  }
  FUN_1400fcb10(local_58,pcVar3,0x40);
  uVar1 = param_1[2];
  local_110 = (char *)CONCAT44(local_110._4_4_,param_1[6]);
  local_118 = (char *)CONCAT44(local_118._4_4_,param_1[5]);
  local_128 = (char *)CONCAT44(local_128._4_4_,param_1[4]);
  pcVar3 = " (timestamp=%u windowid=%u event=%s data1=%d data2=%d)";
  pcStack_120 = local_58;
LAB_1401093d1:
  FUN_1400fd420(local_d8,0x80,pcVar3,uVar1);
LAB_1401093e0:
  if (local_58[0] != '\0') {
LAB_1401093ea:
    FUN_1400fb540("SDL EVENT: %s%s",local_58,local_d8);
  }
LAB_140109403:
  if (DAT_1414ef3c0 != (local_18 ^ (ulonglong)auStack_148)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_18 ^ (ulonglong)auStack_148);
  }
  return;
}

