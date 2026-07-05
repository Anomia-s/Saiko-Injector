/**
 * Function: sdl_capturemouse_must_be_called_on_the_main_t
 * Address:  1401363e0
 * Signature: undefined sdl_capturemouse_must_be_called_on_the_main_t(void)
 * Body size: 1048 bytes
 */


void sdl_capturemouse_must_be_called_on_the_main_t(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  if (DAT_141525891 == '\x01') {
    unknown_touch_device_id_d_cannot_reset(0xffffffffffffffff);
  }
  if (DAT_141525892 == '\x01') {
    unknown_touch_device_id_d_cannot_reset(0xfffffffffffffffe);
  }
  if (DAT_141525810 != (code *)0x0) {
    cVar5 = FUN_140144870();
    if (cVar5 == '\0') {
      FUN_1400fbed0("SDL_CaptureMouse() must be called on the main thread");
      pcVar1 = DAT_141525810;
      lVar7 = DAT_141525898;
    }
    else {
      DAT_141525894 = 0;
      FUN_140136880(0);
      pcVar1 = DAT_141525810;
      lVar7 = DAT_141525898;
    }
    DAT_141525810 = pcVar1;
    DAT_141525898 = lVar7;
    if ((pcVar1 != (code *)0x0) && (lVar7 != 0)) {
      *(byte *)(lVar7 + 0x49) = *(byte *)(lVar7 + 0x49) & 0xbf;
      DAT_141525898 = 0;
      cVar5 = (*pcVar1)(0);
      if (cVar5 == '\0') {
        *(byte *)(lVar7 + 0x49) = *(byte *)(lVar7 + 0x49) | 0x40;
        DAT_141525898 = lVar7;
      }
    }
  }
  no_relative_mode_implementation_available(0);
  if (DAT_141525866 == '\x01') {
    no_relative_mode_implementation_available(0);
    DAT_141525866 = '\0';
  }
  if ((DAT_1415258c8 == '\0') && (DAT_1415258c8 = '\x01', DAT_1415258c0 != (undefined8 *)0x0)) {
    puVar9 = DAT_1415258c0;
    if (DAT_141525830 == 0) {
      puVar9 = DAT_1415258b8;
    }
    if ((puVar9 == (undefined8 *)0x0) ||
       (((DAT_141525830 != 0 && (DAT_141525861 == '\x01')) && (DAT_141525863 == '\0')))) {
      if (DAT_1415257e0 != (code *)0x0) {
        puVar9 = (undefined8 *)0x0;
        goto LAB_140136522;
      }
    }
    else if (DAT_1415257e0 != (code *)0x0) {
LAB_140136522:
      (*DAT_1415257e0)(puVar9);
    }
  }
  puVar2 = DAT_1415258b8;
  puVar9 = DAT_1415258b0;
  uVar4 = 0;
  if (DAT_1415258b8 == (undefined8 *)0x0) goto joined_r0x0001401365c2;
  if (DAT_1415258c0 == DAT_1415258b8) {
    DAT_1415258c0 = (undefined8 *)0x0;
  }
  DAT_1415258b8 = (undefined8 *)0x0;
  puVar9 = &DAT_1415258b0;
  puVar3 = (undefined8 *)0x0;
  do {
    puVar6 = puVar3;
    puVar9 = (undefined8 *)*puVar9;
    if (puVar9 == (undefined8 *)0x0) goto LAB_14013657e;
    puVar3 = puVar9;
  } while (puVar9 != puVar2);
  puVar9 = (undefined8 *)*puVar9;
  if (puVar6 == (undefined8 *)0x0) {
    DAT_1415258b0 = puVar9;
    if (DAT_1415257f0 != (code *)0x0) goto LAB_14013658a;
LAB_1401365a8:
    FUN_140160cf0();
  }
  else {
    *puVar6 = puVar9;
LAB_14013657e:
    if (DAT_1415257f0 == (code *)0x0) goto LAB_1401365a8;
LAB_14013658a:
    if (puVar2[1] == 0) goto LAB_1401365a8;
    (*DAT_1415257f0)();
  }
  DAT_1415258b8 = (undefined8 *)0x0;
  puVar9 = DAT_1415258b0;
  uVar4 = DAT_1415258b8;
joined_r0x0001401365c2:
  while (DAT_1415258b8 = (undefined8 *)uVar4, puVar9 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar9;
    FUN_140136d00();
    uVar4 = DAT_1415258b8;
  }
  DAT_1415258b0 = (undefined8 *)0x0;
  DAT_1415258c0 = (undefined8 *)0x0;
  if (DAT_1415258a8 != 0) {
    if (0 < DAT_1415258a0) {
      lVar7 = 0x10;
      lVar8 = 0;
      do {
        FUN_140160cf0(*(undefined8 *)(DAT_1415258a8 + lVar7));
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x18;
      } while (lVar8 < DAT_1415258a0);
    }
    FUN_140160cf0(DAT_1415258a8);
    DAT_1415258a8 = 0;
  }
  DAT_1415258a0 = 0;
  FUN_1401108b0("SDL_MOUSE_DOUBLE_CLICK_TIME",FUN_1401345a0,&DAT_1415257d0);
  FUN_1401108b0("SDL_MOUSE_DOUBLE_CLICK_RADIUS",FUN_1401345e0,&DAT_1415257d0);
  FUN_1401108b0("SDL_MOUSE_NORMAL_SPEED_SCALE",FUN_140134610,&DAT_1415257d0);
  FUN_1401108b0("SDL_MOUSE_RELATIVE_SPEED_SCALE",FUN_140134670,&DAT_1415257d0);
  FUN_1401108b0("SDL_MOUSE_RELATIVE_SYSTEM_SCALE",FUN_1401346d0,&DAT_1415257d0);
  FUN_1401108b0("SDL_MOUSE_RELATIVE_MODE_CENTER",FUN_1401346f0,&DAT_1415257d0);
  FUN_1401108b0("SDL_MOUSE_EMULATE_WARP_WITH_RELATIVE",FUN_140134710,&DAT_1415257d0);
  FUN_1401108b0("SDL_TOUCH_MOUSE_EVENTS",FUN_140134750,&DAT_1415257d0);
  FUN_1401108b0("SDL_MOUSE_TOUCH_EVENTS",FUN_140134770,&DAT_1415257d0);
  FUN_1401108b0("SDL_PEN_MOUSE_EVENTS",FUN_1401347d0,&DAT_1415257d0);
  FUN_1401108b0("SDL_PEN_TOUCH_EVENTS",FUN_1401347f0,&DAT_1415257d0);
  FUN_1401108b0("SDL_MOUSE_AUTO_CAPTURE",FUN_140134850,&DAT_1415257d0);
  FUN_1401108b0("SDL_MOUSE_RELATIVE_WARP_MOTION",FUN_140134890,&DAT_1415257d0);
  FUN_1401108b0("SDL_MOUSE_RELATIVE_CURSOR_VISIBLE",FUN_1401348b0,&DAT_1415257d0);
  lVar7 = (longlong)DAT_1415257c0;
  if (lVar7 != 0) {
    lVar8 = lVar7 << 4;
    do {
      lVar8 = lVar8 + -0x10;
      FUN_140134d60(*(undefined4 *)(DAT_1415257c8 + lVar8),0);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  FUN_140160cf0(DAT_1415257c8);
  DAT_1415257c8 = 0;
  return;
}

