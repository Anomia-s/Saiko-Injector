/**
 * Function: roinitialize_failed
 * Address:  140448300
 * Signature: undefined roinitialize_failed(void)
 * Body size: 910 bytes
 */


undefined8 roinitialize_failed(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  longlong *local_38;
  longlong *local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1401106d0("SDL_JOYSTICK_WGI",1);
  if (cVar2 != '\0') {
    iVar3 = roinitialize();
    if (iVar3 < 0) {
      uVar5 = FUN_1400fbed0("RoInitialize() failed");
      if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_68)) {
        return uVar5;
      }
      goto LAB_140448681;
    }
    DAT_1416f1918 = (code *)FUN_1403d7780("CoIncrementMTAUsage");
    if (DAT_1416f1918 == (code *)0x0) {
      if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_68)) {
        uVar5 = FUN_1403d7710("GetProcAddress failed for CoIncrementMTAUsage");
        return uVar5;
      }
      goto LAB_140448681;
    }
    DAT_1416f1920 = (code *)FUN_1403d7780("RoGetActivationFactory");
    if (DAT_1416f1920 == (code *)0x0) {
      if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_68)) {
        uVar5 = FUN_1403d7710("GetProcAddress failed for RoGetActivationFactory");
        return uVar5;
      }
      goto LAB_140448681;
    }
    DAT_1416f1928 = (code *)FUN_1403d7780("WindowsCreateStringReference");
    if (DAT_1416f1928 == (code *)0x0) {
      if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_68)) {
        uVar5 = FUN_1403d7710("GetProcAddress failed for WindowsCreateStringReference");
        return uVar5;
      }
      goto LAB_140448681;
    }
    DAT_1416f1930 = FUN_1403d7780("WindowsDeleteString");
    if (DAT_1416f1930 == 0) {
      if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_68)) {
        uVar5 = FUN_1403d7710("GetProcAddress failed for WindowsDeleteString");
        return uVar5;
      }
      goto LAB_140448681;
    }
    DAT_1416f1938 = FUN_1403d7780("WindowsGetStringRawBuffer");
    if (DAT_1416f1938 == 0) {
      if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_68)) {
        uVar5 = FUN_1403d7710("GetProcAddress failed for WindowsGetStringRawBuffer");
        return uVar5;
      }
      goto LAB_140448681;
    }
    if (DAT_1416f19a0 == 0) {
      iVar3 = (*DAT_1416f1918)(&DAT_1416f19a0);
      if (iVar3 < 0) {
        if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_68)) {
          uVar5 = FUN_1403d7600("CoIncrementMTAUsage() failed",iVar3);
          return uVar5;
        }
        goto LAB_140448681;
      }
    }
    pcVar1 = DAT_1416f1928;
    sVar4 = wcslen(L"Windows.Gaming.Input.RawGameController");
    iVar3 = (*pcVar1)(L"Windows.Gaming.Input.RawGameController",sVar4 & 0xffffffff,local_30,
                      &local_38);
    if (-1 < iVar3) {
      iVar3 = (*DAT_1416f1920)(local_38,&DAT_140e16230,&DAT_1416f1940);
      if (iVar3 < 0) {
        FUN_1403d7600("Couldn\'t find Windows.Gaming.Input.IRawGameControllerStatics",iVar3);
      }
    }
    if (DAT_1416f1940 != (longlong *)0x0) {
      iVar3 = (**(code **)(*DAT_1416f1940 + 0x30))(DAT_1416f1940,&PTR_PTR_141503b50,&DAT_1416f1980);
      if (iVar3 < 0) {
        FUN_1403d7600("Windows.Gaming.Input.IRawGameControllerStatics.add_RawGameControllerAdded failed"
                      ,iVar3);
      }
      iVar3 = (**(code **)(*DAT_1416f1940 + 0x40))(DAT_1416f1940,&PTR_PTR_141503b80,&DAT_1416f1988);
      if (iVar3 < 0) {
        FUN_1403d7600("Windows.Gaming.Input.IRawGameControllerStatics.add_RawGameControllerRemoved failed"
                      ,iVar3);
      }
      iVar3 = (**(code **)(*DAT_1416f1940 + 0x50))(DAT_1416f1940,local_30);
      if (-1 < iVar3) {
        local_3c = 0;
        iVar3 = (**(code **)(*local_30[0] + 0x38))(local_30[0],&local_3c);
        if ((-1 < iVar3) && (local_3c != 0)) {
          uVar6 = 0;
          do {
            local_38 = (longlong *)0x0;
            iVar3 = (**(code **)(*local_30[0] + 0x30))(local_30[0],uVar6,&local_38);
            if (local_38 != (longlong *)0x0 && -1 < iVar3) {
              wgi_nrid_steam_xxxdu();
              (**(code **)(*local_38 + 0x10))();
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_3c);
        }
        (**(code **)(*local_30[0] + 0x10))();
      }
    }
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_68)) {
    return CONCAT71((int7)((local_18 ^ (ulonglong)auStack_68) >> 8),1);
  }
LAB_140448681:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_68);
}

