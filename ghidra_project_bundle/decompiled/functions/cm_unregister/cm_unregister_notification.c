/**
 * Function: cm_unregister_notification
 * Address:  140468c40
 * Signature: undefined cm_unregister_notification(void)
 * Body size: 269 bytes
 */


void cm_unregister_notification(void)

{
  int iVar1;
  bool bVar2;
  FARPROC pFVar3;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8 [4];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_1d8;
  iVar1 = DAT_1416f2268 + 1;
  bVar2 = DAT_1416f2268 < 1;
  DAT_1416f2268 = iVar1;
  if (bVar2) {
    DAT_1416f2270 = LoadLibraryA("cfgmgr32.dll");
    if (DAT_1416f2270 != (HMODULE)0x0) {
      DAT_1416f2278 = GetProcAddress(DAT_1416f2270,"CM_Register_Notification");
      DAT_1416f2280 = GetProcAddress(DAT_1416f2270,"CM_Unregister_Notification");
      pFVar3 = DAT_1416f2278;
      if (DAT_1416f2280 != (FARPROC)0x0 && DAT_1416f2278 != (FARPROC)0x0) {
        memset(local_1b8,0,0x1a0);
        local_1b8[0] = 0x1a0;
        local_1a8 = 0x4d1e55b2;
        uStack_1a4 = 0x11cff16f;
        uStack_1a0 = 0x1100cb88;
        uStack_19c = 0x30000011;
        (*pFVar3)(local_1b8,0,FUN_140468d50,&DAT_1416f2288);
      }
    }
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_1d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_1d8);
}

