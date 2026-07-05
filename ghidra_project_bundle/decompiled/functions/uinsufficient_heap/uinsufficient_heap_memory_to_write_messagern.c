/**
 * Function: uinsufficient_heap_memory_to_write_messagern
 * Address:  1400fba70
 * Signature: undefined uinsufficient_heap_memory_to_write_messagern(void)
 * Body size: 627 bytes
 */


void uinsufficient_heap_memory_to_write_messagern
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  LPCVOID lpBuffer;
  wchar_t *pwVar5;
  size_t sVar6;
  wchar_t *lpOutputString;
  int iVar7;
  undefined1 *puVar8;
  undefined1 auStackY_68 [32];
  DWORD local_38;
  DWORD local_34;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStackY_68;
  if (DAT_141524b98 == 0) {
    iVar7 = -1;
    BVar1 = AttachConsole(0xffffffff);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 5) goto LAB_1400fbaac;
      if (DVar2 != 6) {
        if (DVar2 == 0x1f) {
          pwVar5 = L"Could not attach to console of parent process\r\n";
        }
        else {
          pwVar5 = L"Error attaching console\r\n";
        }
        OutputDebugStringW(pwVar5);
      }
    }
    else {
LAB_1400fbaac:
      DAT_141524b98 = 1;
      DAT_141524ba0 = GetStdHandle(0xfffffff4);
      BVar1 = GetConsoleMode(DAT_141524ba0,&local_34);
      if (BVar1 != 0) goto LAB_1400fbada;
      iVar7 = 2;
    }
    DAT_141524b98 = iVar7;
    if (0xfffffff8 < param_3 - 8) goto LAB_1400fbb35;
LAB_1400fbae9:
    puVar8 = &DAT_1413a2ad6;
  }
  else {
LAB_1400fbada:
    if (param_3 - 8 < 0xfffffff9) goto LAB_1400fbae9;
LAB_1400fbb35:
    puVar8 = (undefined1 *)(&DAT_141524b50)[param_3];
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_1413a2ad6;
      if (param_3 - 5 < 3) {
        puVar8 = (&PTR_s_WARNING__140de4c70)[param_3 - 5];
      }
    }
  }
  lVar3 = FUN_1400fc570(puVar8);
  lVar4 = FUN_1400fc570(param_4);
  lVar3 = lVar3 + lVar4 + 3;
  lpBuffer = (LPCVOID)FUN_140160c40(lVar3);
  if (lpBuffer == (LPCVOID)0x0) goto LAB_1400fbcb7;
  if (param_3 - 8 < 0xfffffff9) {
    puVar8 = &DAT_1413a2ad6;
  }
  else {
    puVar8 = (undefined1 *)(&DAT_141524b50)[param_3];
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_1413a2ad6;
      if (param_3 - 5 < 3) {
        puVar8 = (&PTR_s_WARNING__140de4c70)[param_3 - 5];
      }
    }
  }
  FUN_1400fd420(lpBuffer,lVar3,"%s%s\r\n",puVar8);
  lVar3 = FUN_1400fc570(lpBuffer);
  pwVar5 = (wchar_t *)FUN_14017b9c0("UTF-16LE","UTF-8",lpBuffer,lVar3 + 1);
  OutputDebugStringW(pwVar5);
  if (DAT_141524b98 == 2) {
    DVar2 = FUN_1400fc570(lpBuffer);
    BVar1 = WriteFile(DAT_141524ba0,lpBuffer,DVar2,&local_38,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      lpOutputString = L"Error calling WriteFile\r\n";
LAB_1400fbca1:
      OutputDebugStringW(lpOutputString);
    }
  }
  else if (DAT_141524b98 == 1) {
    sVar6 = wcslen(pwVar5);
    BVar1 = WriteConsoleW(DAT_141524ba0,pwVar5,(DWORD)sVar6,&local_38,(LPVOID)0x0);
    if (BVar1 == 0) {
      OutputDebugStringW(L"Error calling WriteConsole\r\n");
      DVar2 = GetLastError();
      if (DVar2 == 8) {
        lpOutputString = L"Insufficient heap memory to write message\r\n";
        goto LAB_1400fbca1;
      }
    }
  }
  FUN_140160cf0(pwVar5);
  FUN_140160cf0(lpBuffer);
LAB_1400fbcb7:
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStackY_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStackY_68);
}

