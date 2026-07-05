/**
 * Function: s_is_not_set
 * Address:  14045c410
 * Signature: undefined s_is_not_set(void)
 * Body size: 299 bytes
 */


ulonglong s_is_not_set(undefined8 param_1,undefined8 param_2,LPHANDLE param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD DVar3;
  longlong lVar4;
  HANDLE hSourceHandle;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  char *pcVar5;
  ulonglong uVar6;
  undefined1 auStackY_68 [32];
  DWORD local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStackY_68;
  lVar4 = FUN_14014ff10(param_1,param_2,0);
  if (lVar4 == 0) {
    pcVar5 = "%s is not set";
LAB_14045c4f6:
    FUN_1400fbed0(pcVar5,param_2);
  }
  else {
    uVar1 = parameter_s_is_invalid(lVar4);
    hSourceHandle = (HANDLE)FUN_14014ff10(uVar1,"SDL.iostream.windows.handle",0xffffffffffffffff);
    if (hSourceHandle == (HANDLE)0xffffffffffffffff) {
      pcVar5 = "%s doesn\'t have SDL_PROP_IOSTREAM_WINDOWS_HANDLE_POINTER available";
      goto LAB_14045c4f6;
    }
    hTargetProcessHandle = GetCurrentProcess();
    hSourceProcessHandle = GetCurrentProcess();
    BVar2 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,param_3,0,1,2);
    if (BVar2 == 0) {
      FUN_1403d7710("DuplicateHandle()");
    }
    else {
      DVar3 = GetFileType(*param_3);
      uVar6 = CONCAT71((int7)((ulonglong)hTargetProcessHandle >> 8),1);
      if (DVar3 != 3) goto LAB_14045c500;
      local_2c = 0;
      BVar2 = SetNamedPipeHandleState(*param_3,&local_2c,(LPDWORD)0x0,(LPDWORD)0x0);
      if (BVar2 != 0) goto LAB_14045c500;
      FUN_1403d7710("SetNamedPipeHandleState()");
    }
  }
  uVar6 = 0;
LAB_14045c500:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStackY_68)) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStackY_68);
}

