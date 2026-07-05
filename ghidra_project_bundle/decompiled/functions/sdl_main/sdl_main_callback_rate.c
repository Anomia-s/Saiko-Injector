/**
 * Function: sdl_main_callback_rate
 * Address:  140158c70
 * Signature: undefined sdl_main_callback_rate(void)
 * Body size: 203 bytes
 */


bool sdl_main_callback_rate(void)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 in_R9;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  iVar1 = FUN_1404561f0();
  if (iVar1 != 0) {
LAB_140158d23:
    FUN_1404564b0(iVar1);
    return iVar1 == 2;
  }
  parameter_s_is_invalid
            ("SDL_MAIN_CALLBACK_RATE",FUN_140158d40,0,in_R9,in_stack_00000028,in_stack_00000030);
  uVar2 = 0;
  if (DAT_141525bb8 == 0) goto LAB_140158cbc;
  uVar2 = sdl_timer_resolution();
  do {
    uVar2 = DAT_141525bb8 + uVar2;
LAB_140158cbc:
    do {
      uVar4 = uVar2;
      bVar3 = 1;
      if (DAT_141525bbc == 1) {
        FUN_140107b90(0);
        bVar3 = DAT_141525bbc ^ 1;
      }
      iVar1 = FUN_140456330(bVar3);
      if (iVar1 != 0) {
        FUN_1401108b0("SDL_MAIN_CALLBACK_RATE",FUN_140158d40,0);
        goto LAB_140158d23;
      }
      uVar2 = 0;
    } while (DAT_141525bb8 == 0);
    uVar2 = sdl_timer_resolution();
    if (uVar2 < uVar4) {
      FUN_1401184b0();
      uVar2 = uVar4;
    }
  } while( true );
}

