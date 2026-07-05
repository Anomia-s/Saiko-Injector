/**
 * Function: sdl_auto_update_sensors
 * Address:  140109750
 * Signature: undefined sdl_auto_update_sensors(void)
 * Body size: 251 bytes
 */


void sdl_auto_update_sensors(void)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1404040c0();
  sdl_event_queue_statistics();
  FUN_1401552a0(DAT_141525490);
  lVar1 = DAT_1415254a0;
  DAT_1415254a0 = 0;
  DAT_141525498 = 0;
  FUN_1401552c0(DAT_141525490);
  while (lVar2 = lVar1, lVar1 != 0) {
    while (lVar1 = *(longlong *)(lVar2 + 0x20), *(longlong *)(lVar2 + 0x18) == 0) {
      FUN_140160cf0(lVar2);
      lVar2 = lVar1;
      if (lVar1 == 0) goto LAB_1401097da;
    }
    FUN_140106140(lVar2 + 0x10,2);
    FUN_140158240(*(undefined8 *)(lVar2 + 0x18));
  }
LAB_1401097da:
  FUN_140155290(DAT_141525490);
  DAT_141525490 = 0;
  FUN_1401108b0("SDL_POLL_SENTINEL",FUN_140109730,0);
  FUN_1401108b0("SDL_EVENT_LOGGING",FUN_1401096e0,0);
  FUN_1401108b0("SDL_AUTO_UPDATE_JOYSTICKS",FUN_1401096a0,0);
  FUN_1401108b0("SDL_AUTO_UPDATE_SENSORS",FUN_1401096c0,0);
  return;
}

