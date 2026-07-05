/**
 * Function: unknown_event_type
 * Address:  140163ed0
 * Signature: undefined unknown_event_type(void)
 * Body size: 666 bytes
 */


undefined8 unknown_event_type(uint param_1)

{
  if ((param_1 & 0xffff8000) == 0x8000) {
    return 0x1c;
  }
  if (param_1 - 0x151 < 7) {
    return 2;
  }
  if (param_1 - 0x202 < 0x19) {
    return 3;
  }
  if ((int)param_1 < 0x700) {
    if ((int)param_1 < 0x400) {
      if (param_1 - 0x101 < 8) {
switchD_140163f4b_caseD_304:
        return 1;
      }
      switch(param_1) {
      case 0x300:
      case 0x301:
        return 5;
      case 0x302:
        return 6;
      case 0x303:
        return 8;
      case 0x304:
        goto switchD_140163f4b_caseD_304;
      case 0x305:
      case 0x306:
        return 4;
      case 0x307:
        return 7;
      default:
        if (param_1 == 0x100) {
          return 0x1b;
        }
        goto switchD_140163f9d_caseD_609;
      }
    }
    switch(param_1) {
    case 0x600:
      return 0xe;
    case 0x601:
      return 0xf;
    case 0x602:
      return 0x10;
    case 0x603:
    case 0x604:
      return 0x11;
    case 0x605:
    case 0x606:
    case 0x608:
      return 0xd;
    case 0x607:
      return 0x12;
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
      break;
    case 0x650:
      return 0x14;
    case 0x651:
    case 0x652:
      return 0x15;
    case 0x653:
    case 0x654:
    case 0x655:
    case 0x65a:
    case 0x65b:
      return 0x13;
    case 0x656:
    case 0x657:
    case 0x658:
      return 0x16;
    case 0x659:
      return 0x17;
    default:
      switch(param_1) {
      case 0x400:
        return 10;
      case 0x401:
      case 0x402:
        return 0xb;
      case 0x403:
        return 0xc;
      case 0x404:
      case 0x405:
        return 9;
      }
    }
  }
  else if ((int)param_1 < 0x1300) {
    if ((int)param_1 < 0x1000) {
      if (param_1 - 0x700 < 4) {
        return 0x1d;
      }
      if (param_1 == 0x900) {
        return 0x24;
      }
    }
    else {
      if (param_1 - 0x1000 < 5) {
        return 0x23;
      }
      if (param_1 - 0x1100 < 3) {
        return 0x18;
      }
      if (param_1 == 0x1200) {
        return 0x1a;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x1300:
    case 0x1301:
      return 0x1e;
    case 0x1302:
    case 0x1303:
      return 0x1f;
    case 0x1304:
    case 0x1305:
      return 0x21;
    case 0x1306:
      return 0x20;
    case 0x1307:
      return 0x22;
    }
    if (param_1 - 0x1400 < 4) {
      return 0x19;
    }
    if (param_1 - 0x2000 < 3) {
      return 0x25;
    }
  }
switchD_140163f9d_caseD_609:
  FUN_1400fbed0("Unknown event type");
  return 0;
}

