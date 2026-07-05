/**
 * Function: sdl_joystick_thread
 * Address:  140447730
 * Signature: undefined sdl_joystick_thread(void)
 * Body size: 205 bytes
 */


ulonglong sdl_joystick_thread(void)

{
  char cVar1;
  undefined8 unaff_RSI;
  
  cVar1 = FUN_140651b30();
  if ((cVar1 == '\0') || (cVar1 = s_directx_error_0x88lx(), cVar1 == '\0')) {
    FUN_1404475c0();
  }
  else {
    cm_unregister_notification();
    DAT_1416f1890 = FUN_1401106d0("SDL_JOYSTICK_THREAD",1);
    if (DAT_1416f1890 == '\0') {
      cVar1 = failed_to_create_message_window_for_joystick();
      if (cVar1 != '\0') {
LAB_1404477e2:
        DAT_1416f1888 = 0;
        FUN_140447460();
        return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1) & 0xffffffff;
      }
    }
    else {
      DAT_1416f1880 = initializesrwlock();
      if ((DAT_1416f1880 != 0) && (DAT_1416f1910 = FUN_140134190(), DAT_1416f1910 != 0)) {
        DAT_1416f1908 = 0;
        unaff_RSI = 0;
        DAT_1416f1900 =
             sdlthreadcreateentry_function
                       (FUN_140447fc0,"SDL_joystick",0,_beginthreadex_exref,_endthreadex_exref);
        if (DAT_1416f1900 != 0) goto LAB_1404477e2;
        DAT_1416f1900 = 0;
      }
    }
  }
  return 0;
}

