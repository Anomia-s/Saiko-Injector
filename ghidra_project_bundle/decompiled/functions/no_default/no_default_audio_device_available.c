/**
 * Function: no_default_audio_device_available
 * Address:  140131650
 * Signature: undefined no_default_audio_device_available(void)
 * Body size: 313 bytes
 */


longlong no_default_audio_device_available(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 0xfffffffe) {
    lVar1 = audio_subsystem_is_not_initialized(param_1);
    return lVar1;
  }
  FUN_140158000(DAT_141525728);
  uVar2 = DAT_141525744;
  uVar3 = param_1;
  if (param_1 == 0xfffffffe) {
    uVar3 = DAT_141525744;
  }
  if (param_1 == 0xffffffff) {
    uVar3 = DAT_141525740;
  }
  FUN_140158040(DAT_141525728);
  if (uVar3 != 0) {
    if (param_1 == 0xfffffffe) {
      do {
        lVar1 = audio_subsystem_is_not_initialized(uVar3);
        if (lVar1 == 0) {
          return 0;
        }
        FUN_140158000(DAT_141525728);
        uVar3 = DAT_141525744;
        FUN_140158040(DAT_141525728);
        if (uVar2 == uVar3) {
          return lVar1;
        }
        FUN_14012fb40(lVar1);
        FUN_140158000(DAT_141525728);
        uVar2 = DAT_141525744;
        FUN_140158040(DAT_141525728);
        uVar3 = uVar2;
      } while (uVar2 != 0);
    }
    else {
      do {
        lVar1 = audio_subsystem_is_not_initialized(uVar3);
        if (lVar1 == 0) {
          return 0;
        }
        FUN_140158000(DAT_141525728);
        uVar2 = DAT_141525740;
        FUN_140158040(DAT_141525728);
        if (uVar3 == uVar2) {
          return lVar1;
        }
        FUN_14012fb40(lVar1);
        FUN_140158000(DAT_141525728);
        uVar3 = DAT_141525740;
        FUN_140158040(DAT_141525728);
      } while (uVar3 != 0);
    }
  }
  FUN_1400fbed0("No default audio device available");
  return 0;
}

