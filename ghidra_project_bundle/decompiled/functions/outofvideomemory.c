/**
 * Function: outofvideomemory
 * Address:  1404254f0
 * Signature: undefined outofvideomemory(void)
 * Body size: 304 bytes
 */


void outofvideomemory(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case -0x7789f7e8:
    pcVar1 = "WRONGTEXTUREFORMAT";
    break;
  case -0x7789f7e7:
    pcVar1 = "UNSUPPORTEDCOLOROPERATION";
    break;
  case -0x7789f7e6:
    pcVar1 = "UNSUPPORTEDCOLORARG";
    break;
  case -0x7789f7e5:
    pcVar1 = "UNSUPPORTEDALPHAOPERATION";
    break;
  case -0x7789f7e4:
    pcVar1 = "UNSUPPORTEDALPHAARG";
    break;
  case -0x7789f7e3:
    pcVar1 = "TOOMANYOPERATIONS";
    break;
  case -0x7789f7e2:
    pcVar1 = "CONFLICTINGTEXTUREFILTER";
    break;
  case -0x7789f7e1:
    pcVar1 = "UNSUPPORTEDFACTORVALUE";
    break;
  case -0x7789f7df:
    pcVar1 = "CONFLICTINGRENDERSTATE";
    break;
  case -0x7789f7de:
    pcVar1 = "UNSUPPORTEDTEXTUREFILTER";
    break;
  case -0x7789f7da:
    pcVar1 = "CONFLICTINGTEXTUREPALETTE";
    break;
  case -0x7789f7d9:
    pcVar1 = "DRIVERINTERNALERROR";
    break;
  case -0x7789f79a:
    pcVar1 = "NOTFOUND";
    break;
  case -0x7789f799:
    pcVar1 = "MOREDATA";
    break;
  case -0x7789f798:
    pcVar1 = "DEVICELOST";
    break;
  case -0x7789f797:
    pcVar1 = "DEVICENOTRESET";
    break;
  case -0x7789f796:
    pcVar1 = "NOTAVAILABLE";
    break;
  case -0x7789f795:
    pcVar1 = "INVALIDDEVICE";
    break;
  case -0x7789f794:
    pcVar1 = "INVALIDCALL";
    break;
  case -0x7789f793:
    pcVar1 = "DRIVERINVALIDCALL";
    break;
  default:
    if (param_2 == -0x7789fe84) {
      pcVar1 = "OUTOFVIDEOMEMORY";
      break;
    }
    if (param_2 == -0x7789fde4) {
      pcVar1 = "WASSTILLDRAWING";
      break;
    }
  case -0x7789f7e0:
  case -0x7789f7dd:
  case -0x7789f7dc:
  case -0x7789f7db:
  case -0x7789f7d8:
  case -0x7789f7d7:
  case -0x7789f7d6:
  case -0x7789f7d5:
  case -0x7789f7d4:
  case -0x7789f7d3:
  case -0x7789f7d2:
  case -0x7789f7d1:
  case -0x7789f7d0:
  case -0x7789f7cf:
  case -0x7789f7ce:
  case -0x7789f7cd:
  case -0x7789f7cc:
  case -0x7789f7cb:
  case -0x7789f7ca:
  case -0x7789f7c9:
  case -0x7789f7c8:
  case -0x7789f7c7:
  case -0x7789f7c6:
  case -0x7789f7c5:
  case -0x7789f7c4:
  case -0x7789f7c3:
  case -0x7789f7c2:
  case -0x7789f7c1:
  case -0x7789f7c0:
  case -0x7789f7bf:
  case -0x7789f7be:
  case -0x7789f7bd:
  case -0x7789f7bc:
  case -0x7789f7bb:
  case -0x7789f7ba:
  case -0x7789f7b9:
  case -0x7789f7b8:
  case -0x7789f7b7:
  case -0x7789f7b6:
  case -0x7789f7b5:
  case -0x7789f7b4:
  case -0x7789f7b3:
  case -0x7789f7b2:
  case -0x7789f7b1:
  case -0x7789f7b0:
  case -0x7789f7af:
  case -0x7789f7ae:
  case -0x7789f7ad:
  case -0x7789f7ac:
  case -0x7789f7ab:
  case -0x7789f7aa:
  case -0x7789f7a9:
  case -0x7789f7a8:
  case -0x7789f7a7:
  case -0x7789f7a6:
  case -0x7789f7a5:
  case -0x7789f7a4:
  case -0x7789f7a3:
  case -0x7789f7a2:
  case -0x7789f7a1:
  case -0x7789f7a0:
  case -0x7789f79f:
  case -0x7789f79e:
  case -0x7789f79d:
  case -0x7789f79c:
  case -0x7789f79b:
    pcVar1 = "UNKNOWN";
  }
  FUN_1400fbed0("%s: %s",param_1,pcVar1);
  return;
}

