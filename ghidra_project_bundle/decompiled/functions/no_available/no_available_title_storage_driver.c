/**
 * Function: no_available_title_storage_driver
 * Address:  140152ef0
 * Signature: undefined no_available_title_storage_driver(void)
 * Body size: 284 bytes
 */


longlong no_available_title_storage_driver(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char *_Str;
  
  pcVar2 = (char *)FUN_140110550("SDL_STORAGE_TITLE_DRIVER");
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    lVar5 = (*(code *)PTR_FUN_141503dd0)(param_1,param_2);
  }
  else {
    lVar5 = 0;
    _Str = pcVar2;
    do {
      while( true ) {
        if ((*_Str == '\0') || (lVar5 != 0)) goto LAB_140152fdb;
        pcVar3 = strchr(_Str,0x2c);
        if (pcVar3 != (char *)0x0) break;
        lVar5 = FUN_1400fc570(_Str);
        lVar4 = FUN_1400fc570(PTR_s_generic_141503dc0);
        if (lVar5 == lVar4) goto LAB_140152f9c;
LAB_140152f30:
        lVar5 = 0;
        _Str = pcVar3 + 1;
        if (pcVar3 == (char *)0x0) goto LAB_140152fdb;
      }
      lVar5 = (longlong)pcVar3 - (longlong)_Str;
      lVar4 = FUN_1400fc570(PTR_s_generic_141503dc0);
      if (lVar5 != lVar4) goto LAB_140152f30;
LAB_140152f9c:
      iVar1 = FUN_1400fcff0(PTR_s_generic_141503dc0,_Str,lVar5);
      if (iVar1 != 0) goto LAB_140152f30;
      lVar5 = (*(code *)PTR_FUN_141503dd0)(param_1,param_2);
      _Str = pcVar3 + 1;
    } while (pcVar3 != (char *)0x0);
  }
LAB_140152fdb:
  if (lVar5 == 0) {
    if (pcVar2 == (char *)0x0) {
      FUN_1400fbed0("No available title storage driver");
    }
    else {
      FUN_1400fbed0("%s not available",pcVar2);
    }
    lVar5 = 0;
  }
  return lVar5;
}

