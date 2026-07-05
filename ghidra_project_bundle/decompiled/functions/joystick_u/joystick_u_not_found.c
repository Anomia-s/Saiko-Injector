/**
 * Function: joystick_u_not_found
 * Address:  140127490
 * Signature: undefined joystick_u_not_found(void)
 * Body size: 361 bytes
 */


undefined8 joystick_u_not_found(int param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_141503788)();
    if (0 < iVar1) {
      iVar3 = 0;
      ppuVar4 = &PTR_couldnt_initialize_hidapi_141503780;
      do {
        iVar2 = (*(code *)PTR_FUN_1415037d0)(iVar3);
        if (iVar2 == param_1) goto LAB_1401275e5;
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
    iVar1 = (*(code *)PTR_FUN_141503838)();
    if (0 < iVar1) {
      iVar3 = 0;
      ppuVar4 = &PTR_igameinput_registerdevicecallback_failure_wit_141503830;
      do {
        iVar2 = (*(code *)PTR_FUN_141503880)(iVar3);
        if (iVar2 == param_1) goto LAB_1401275e5;
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
    iVar1 = (*(code *)PTR_FUN_1415038e0)();
    if (0 < iVar1) {
      iVar3 = 0;
      ppuVar4 = &PTR_FUN_1415038d8;
      do {
        iVar2 = (*(code *)PTR_FUN_141503928)(iVar3);
        if (iVar2 == param_1) goto LAB_1401275e5;
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
    iVar1 = (*(code *)PTR_FUN_1415039e8)();
    if (0 < iVar1) {
      iVar3 = 0;
      ppuVar4 = &PTR_sdl_joystick_thread_1415039e0;
      do {
        iVar2 = (*(code *)PTR_FUN_141503a30)(iVar3);
        if (iVar2 == param_1) goto LAB_1401275e5;
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
    iVar1 = (*(code *)PTR_FUN_141503a90)();
    if (0 < iVar1) {
      iVar3 = 0;
      ppuVar4 = &PTR_roinitialize_failed_141503a88;
      do {
        iVar2 = (*(code *)PTR_FUN_141503ad8)(iVar3);
        if (iVar2 == param_1) goto LAB_1401275e5;
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
    iVar1 = (*(code *)PTR_FUN_141503b98)();
    if (0 < iVar1) {
      iVar3 = 0;
      ppuVar4 = &PTR_vfunction2_141503b90;
      do {
        iVar2 = (*(code *)PTR_FUN_141503be0)(iVar3);
        if (iVar2 == param_1) {
LAB_1401275e5:
          *param_2 = ppuVar4;
          *param_3 = iVar3;
          return 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
  }
  FUN_1400fbed0("Joystick %u not found",param_1);
  return 0;
}

