/**
 * Function: avrevertmmthreadcharacteristics
 * Address:  14044c900
 * Signature: undefined avrevertmmthreadcharacteristics(void)
 * Body size: 731 bytes
 */


undefined8 avrevertmmthreadcharacteristics(undefined8 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  local_38 = 0x4044cbf0;
  uStack_34 = 1;
  uStack_30 = 0x4044cc20;
  uStack_2c = 1;
  iVar3 = FUN_1403d7730();
  if (iVar3 < 0) {
    cVar1 = FUN_1400fbed0("CoInitialize() failed");
    if (cVar1 != '\0') {
LAB_14044ca2b:
      FUN_140158240(param_1[1]);
      FUN_1401552a0(DAT_1416f19c0);
      puVar4 = (undefined8 *)FUN_140106180(&DAT_1416f19c8);
      while( true ) {
        while (puVar4 != (undefined8 *)0x0) {
          FUN_140106150(&DAT_1416f19c8,puVar4[5]);
          FUN_1401552c0(DAT_1416f19c0);
          uVar2 = (*(code *)*puVar4)(puVar4[1]);
          *(undefined1 *)(puVar4 + 2) = uVar2;
          if (puVar4[3] == 0) {
            FUN_140160cf0(puVar4);
          }
          else {
            uVar5 = out_of_memory();
            uVar5 = FUN_1400fcda0(uVar5);
            puVar4[4] = uVar5;
            FUN_140158240(puVar4[3]);
          }
          FUN_1401552a0(DAT_1416f19c0);
          puVar4 = (undefined8 *)FUN_140106180(&DAT_1416f19c8);
        }
        iVar3 = FUN_140106170(&DAT_1416f19b8);
        if (iVar3 != 0) break;
        FUN_1401383a0(DAT_1416f19d0);
        puVar4 = (undefined8 *)FUN_140106180(&DAT_1416f19c8);
      }
      FUN_1401552c0(DAT_1416f19c0);
      if (DAT_1416f19e0 != (HMODULE)0x0) {
        FreeLibrary(DAT_1416f19e0);
        DAT_1416f19e0 = (HMODULE)0x0;
      }
      DAT_1416f19e8 = (FARPROC)0x0;
      DAT_1416f19f0 = (FARPROC)0x0;
      if (DAT_1416f19d8 == '\x01') {
        FUN_1406543d0();
        DAT_1416f19d8 = '\0';
      }
      CoUninitialize();
      goto LAB_14044cbbb;
    }
  }
  else {
    cVar1 = immdevice_coinitialize_failed(&local_38);
    if (cVar1 != '\0') {
      DAT_1416f19d8 = '\x01';
      DAT_1416f19e0 = LoadLibraryW(L"avrt.dll");
      if (DAT_1416f19e0 != (HMODULE)0x0) {
        DAT_1416f19e8 = GetProcAddress(DAT_1416f19e0,"AvSetMmThreadCharacteristicsW");
        DAT_1416f19f0 = GetProcAddress(DAT_1416f19e0,"AvRevertMmThreadCharacteristics");
      }
      DAT_1416f19c0 = initializesrwlock();
      if (DAT_1416f19c0 == 0) {
        if (DAT_1416f19e0 != (HMODULE)0x0) {
          FreeLibrary(DAT_1416f19e0);
          DAT_1416f19e0 = (HMODULE)0x0;
        }
        DAT_1416f19e8 = (FARPROC)0x0;
        DAT_1416f19f0 = (FARPROC)0x0;
        if (DAT_1416f19d8 != '\0') {
LAB_14044cb91:
          DAT_1416f19f0 = (FARPROC)0x0;
          DAT_1416f19e8 = (FARPROC)0x0;
          FUN_1406543d0();
          DAT_1416f19d8 = '\0';
        }
      }
      else {
        DAT_1416f19d0 = FUN_140134190();
        if (DAT_1416f19d0 != 0) goto LAB_14044ca2b;
        FUN_140155290(DAT_1416f19c0);
        DAT_1416f19c0 = 0;
        if (DAT_1416f19e0 != (HMODULE)0x0) {
          FreeLibrary(DAT_1416f19e0);
          DAT_1416f19e0 = (HMODULE)0x0;
        }
        DAT_1416f19e8 = (FARPROC)0x0;
        DAT_1416f19f0 = (FARPROC)0x0;
        if (DAT_1416f19d8 == '\x01') goto LAB_14044cb91;
      }
      CoUninitialize();
    }
  }
  uVar5 = out_of_memory();
  uVar5 = FUN_1400fcda0(uVar5);
  *param_1 = uVar5;
  FUN_140158240(param_1[1]);
LAB_14044cbbb:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_58);
}

