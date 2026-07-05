/**
 * Function: no_relative_mode_implementation_available
 * Address:  1401369c0
 * Signature: undefined no_relative_mode_implementation_available(void)
 * Body size: 686 bytes
 */


undefined8 no_relative_mode_implementation_available(undefined4 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  
  lVar2 = FUN_14015fd80();
  cVar5 = (char)param_1;
  if (cVar5 == '\0') {
    DAT_141525866 = 0;
  }
  if (DAT_141525861 == cVar5) {
    return 1;
  }
  if (DAT_141525808 == (code *)0x0) {
    if (cVar5 != '\0') goto LAB_140136a6d;
  }
  else {
    cVar1 = (*DAT_141525808)(param_1);
    if ((cVar5 != '\0') && (cVar1 == '\0')) {
LAB_140136a6d:
      uVar3 = FUN_1400fbed0("No relative mode implementation available");
      return uVar3;
    }
    if (cVar5 != '\0') {
      DAT_141525861 = cVar5;
      if (DAT_1415258c0 != 0) {
        lVar4 = DAT_1415258c0;
        if (DAT_141525830 == 0) {
          lVar4 = DAT_1415258b8;
        }
        if ((lVar4 == 0) ||
           ((DAT_141525830 != 0 && ((DAT_1415258c8 != '\x01' || (DAT_141525863 == '\0')))))) {
          if (DAT_1415257e0 != (code *)0x0) {
            lVar4 = 0;
            goto LAB_140136af4;
          }
        }
        else if (DAT_1415257e0 != (code *)0x0) {
LAB_140136af4:
          (*DAT_1415257e0)(lVar4);
        }
      }
      if (lVar2 == 0) goto LAB_140136c5b;
      if (DAT_141525830 != lVar2) {
        if (DAT_141525830 != 0) {
          sdl_quit_on_last_window_close(DAT_141525830,0x20d,0,0);
        }
        DAT_141525860 = 0;
        DAT_141525830 = lVar2;
        sdl_quit_on_last_window_close(lVar2,0x20c,0,0);
        if (DAT_1415258c0 != 0) {
          lVar4 = DAT_1415258c0;
          if (DAT_141525830 == 0) {
            lVar4 = DAT_1415258b8;
          }
          if ((lVar4 == 0) ||
             ((DAT_141525830 != 0 &&
              ((DAT_1415258c8 != '\x01' || ((DAT_141525861 == '\x01' && (DAT_141525863 == '\0'))))))
             )) {
            if (DAT_1415257e0 != (code *)0x0) {
              lVar4 = 0;
              goto LAB_140136c4a;
            }
          }
          else if (DAT_1415257e0 != (code *)0x0) {
LAB_140136c4a:
            (*DAT_1415257e0)(lVar4);
          }
        }
      }
      FUN_14014b7f0(lVar2);
      FUN_140136880(0);
      goto LAB_140136c5b;
    }
  }
  DAT_141525861 = cVar5;
  if (lVar2 != 0) {
    FUN_14014b7f0(lVar2);
    if ((*(byte *)(lVar2 + 0x48) & 0x40) == 0) {
      DAT_141525848 = DAT_141525838;
      DAT_141525860 = 0;
      uVar6 = (undefined4)((ulonglong)DAT_141525838 >> 0x20);
      if ((DAT_1415257f8 == (code *)0x0) || (DAT_141525861 != '\0')) {
        FUN_1401355e0(0,lVar2,0,0,(int)DAT_141525838,uVar6);
      }
      else {
        (*DAT_1415257f8)(lVar2,DAT_141525838,uVar6);
      }
    }
    FUN_140136880(0);
  }
  if (DAT_1415258c0 != 0) {
    lVar2 = DAT_1415258c0;
    if (DAT_141525830 == 0) {
      lVar2 = DAT_1415258b8;
    }
    if ((lVar2 == 0) ||
       ((DAT_141525830 != 0 &&
        ((DAT_1415258c8 != '\x01' || ((DAT_141525861 == '\x01' && (DAT_141525863 == '\0')))))))) {
      if (DAT_1415257e0 == (code *)0x0) goto LAB_140136c5b;
      lVar2 = 0;
    }
    else if (DAT_1415257e0 == (code *)0x0) goto LAB_140136c5b;
    (*DAT_1415257e0)(lVar2);
  }
LAB_140136c5b:
  FUN_140106e40(0x400);
  return 1;
}

