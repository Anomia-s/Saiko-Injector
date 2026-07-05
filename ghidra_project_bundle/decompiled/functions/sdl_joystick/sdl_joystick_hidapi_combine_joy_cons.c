/**
 * Function: sdl_joystick_hidapi_combine_joy_cons
 * Address:  140441f30
 * Signature: undefined sdl_joystick_hidapi_combine_joy_cons(void)
 * Body size: 66 bytes
 */


void sdl_joystick_hidapi_combine_joy_cons
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1400fd200(param_2,"SDL_JOYSTICK_HIDAPI_COMBINE_JOY_CONS");
  if (iVar1 == 0) {
    DAT_141503828 = FUN_140110690(param_4,1);
  }
  DAT_1416f1765 = 1;
  DAT_1416f1760 = 0;
  return;
}

