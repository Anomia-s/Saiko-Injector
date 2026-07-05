/**
 * Function: couldnt_initialize_hidapi
 * Address:  140440630
 * Signature: undefined couldnt_initialize_hidapi(void)
 * Body size: 433 bytes
 */


undefined4 couldnt_initialize_hidapi(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_1416f1764 == '\0') {
    iVar1 = sdl_hidapi_libusb_whitelist();
    if (iVar1 < 0) {
      uVar2 = FUN_1400fbed0("Couldn\'t initialize hidapi");
      return uVar2;
    }
    (*(code *)PTR_sdl_joystick_hidapi_gamecube_14150b9a0)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_GAMECUBE_14150b990);
    (*(code *)PTR_sdl_joystick_hidapi_luna_14150ba38)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_LUNA_14150ba28);
    (*(code *)PTR_sdl_joystick_hidapi_shield_14150bad0)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_SHIELD_14150bac0);
    (*(code *)PTR_sdl_joystick_hidapi_ps3_14150bb68)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_PS3_14150bb58);
    (*(code *)PTR_sdl_joystick_hidapi_ps3_14150bc00)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_PS3_14150bbf0);
    (*(code *)PTR_sdl_joystick_hidapi_ps3_sixaxis_driver_14150bc98)
              (sdl_joystick_hidapi_combine_joy_cons,
               &PTR_s_SDL_JOYSTICK_HIDAPI_PS3_SIXAXIS__14150bc88);
    (*(code *)PTR_sdl_joystick_hidapi_ps4_14150bd30)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_PS4_14150bd20);
    (*(code *)PTR_sdl_joystick_hidapi_ps5_14150bdc8)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_PS5_14150bdb8);
    (*(code *)PTR_sdl_joystick_hidapi_stadia_14150be60)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_STADIA_14150be50);
    (*(code *)PTR_sdl_joystick_hidapi_steam_14150bef8)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_STEAM_14150bee8);
    (*(code *)PTR_sdl_joystick_hidapi_steam_hori_14150bf90)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_STEAM_HORI_14150bf80)
    ;
    (*(code *)PTR_sdl_joystick_hidapi_steamdeck_14150c028)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_STEAMDECK_14150c018);
    (*(code *)PTR_sdl_joystick_hidapi_nintendo_classic_14150c0c0)
              (sdl_joystick_hidapi_combine_joy_cons,
               &PTR_s_SDL_JOYSTICK_HIDAPI_NINTENDO_CLA_14150c0b0);
    (*(code *)PTR_sdl_joystick_hidapi_joy_cons_14150c158)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_JOY_CONS_14150c148);
    (*(code *)PTR_sdl_joystick_hidapi_switch_14150c1f0)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_SWITCH_14150c1e0);
    (*(code *)PTR_sdl_joystick_hidapi_wii_14150c288)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_WII_14150c278);
    (*(code *)PTR_sdl_joystick_hidapi_xbox_14150c320)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_XBOX_360_14150c310);
    (*(code *)PTR_sdl_joystick_hidapi_xbox_14150c3b8)
              (sdl_joystick_hidapi_combine_joy_cons,
               &PTR_s_SDL_JOYSTICK_HIDAPI_XBOX_360_WIR_14150c3a8);
    (*(code *)PTR_sdl_joystick_hidapi_xbox_14150c450)
              (sdl_joystick_hidapi_combine_joy_cons,&PTR_s_SDL_JOYSTICK_HIDAPI_XBOX_ONE_14150c440);
    parameter_s_is_invalid
              ("SDL_JOYSTICK_HIDAPI_COMBINE_JOY_CONS",sdl_joystick_hidapi_combine_joy_cons,0);
    parameter_s_is_invalid("SDL_JOYSTICK_HIDAPI",sdl_joystick_hidapi_combine_joy_cons,0);
    DAT_1416f1760 = sdl_hidapi_libusb_whitelist();
    uswitch_joy_con_l_r();
    FUN_140441530();
    DAT_1416f1764 = '\x01';
  }
  return 1;
}

