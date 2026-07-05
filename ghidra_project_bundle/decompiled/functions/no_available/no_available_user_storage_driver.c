/**
 * Function: no_available_user_storage_driver
 * Address:  140153020
 * Signature: undefined no_available_user_storage_driver(void)
 * Body size: 381 bytes
 */


longlong no_available_user_storage_driver(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  undefined **ppuVar5;
  char *_Str;
  longlong lVar6;
  
  pcVar2 = (char *)FUN_140110550("SDL_STORAGE_USER_DRIVER");
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    lVar6 = (*(code *)PTR_steam_cloud_is_disabled_for_this_user_141503e00)(param_1,param_2,param_3);
    if (lVar6 != 0) {
      return lVar6;
    }
    lVar6 = (*(code *)PTR_FUN_141503de8)(param_1,param_2,param_3);
  }
  else {
    lVar6 = 0;
    _Str = pcVar2;
    do {
      while( true ) {
        if ((*_Str == '\0') || (lVar6 != 0)) goto LAB_14015317a;
        pcVar3 = strchr(_Str,0x2c);
        if (pcVar3 == (char *)0x0) break;
        lVar6 = (longlong)pcVar3 - (longlong)_Str;
        lVar4 = FUN_1400fc570(PTR_s_steam_141503df0);
        if (lVar6 != lVar4) goto LAB_140153105;
LAB_1401530ec:
        iVar1 = FUN_1400fcff0(PTR_s_steam_141503df0,_Str,lVar6);
        ppuVar5 = &PTR_s_steam_141503df0;
        if (iVar1 != 0) goto LAB_140153105;
LAB_14015313b:
        lVar6 = (*(code *)ppuVar5[2])(param_1,param_2,param_3);
        _Str = pcVar3 + 1;
        if (pcVar3 == (char *)0x0) goto LAB_14015317a;
      }
      lVar6 = FUN_1400fc570(_Str);
      lVar4 = FUN_1400fc570(PTR_s_steam_141503df0);
      if (lVar6 == lVar4) goto LAB_1401530ec;
LAB_140153105:
      lVar4 = FUN_1400fc570(PTR_s_generic_141503dd8);
      if (lVar6 == lVar4) {
        iVar1 = FUN_1400fcff0(PTR_s_generic_141503dd8,_Str,lVar6);
        ppuVar5 = &PTR_s_generic_141503dd8;
        if (iVar1 == 0) goto LAB_14015313b;
      }
      lVar6 = 0;
      _Str = pcVar3 + 1;
    } while (pcVar3 != (char *)0x0);
  }
LAB_14015317a:
  if (lVar6 == 0) {
    if (pcVar2 == (char *)0x0) {
      FUN_1400fbed0("No available user storage driver");
    }
    else {
      FUN_1400fbed0("%s not available",pcVar2);
    }
    lVar6 = 0;
  }
  return lVar6;
}

