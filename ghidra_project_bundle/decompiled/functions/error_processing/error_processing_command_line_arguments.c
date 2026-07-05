/**
 * Function: error_processing_command_line_arguments
 * Address:  14016dc50
 * Signature: undefined error_processing_command_line_arguments(void)
 * Body size: 543 bytes
 */


undefined4
error_processing_command_line_arguments(undefined8 param_1,undefined8 param_2,code *param_3)

{
  LPVOID lpMem;
  int iVar1;
  undefined4 uVar2;
  LPWSTR lpCmdLine;
  LPWSTR *hMem;
  longlong lVar3;
  HANDLE pvVar4;
  LPVOID lpMem_00;
  LPSTR lpMultiByteStr;
  char *pcVar5;
  undefined1 auStackY_b8 [32];
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStackY_b8;
  lpCmdLine = GetCommandLineW();
  hMem = CommandLineToArgvW(lpCmdLine,&local_64);
  if (hMem != (LPWSTR *)0x0) {
    lVar3 = (longlong)local_64;
    pvVar4 = GetProcessHeap();
    lpMem_00 = HeapAlloc(pvVar4,8,lVar3 * 8 + 8);
    if (lpMem_00 != (LPVOID)0x0) {
      if (local_64 < 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        do {
          iVar1 = WideCharToMultiByte(0xfde9,0,hMem[lVar3],-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar1 == 0) {
LAB_14016de4f:
            pcVar5 = "Error processing command line arguments";
            goto LAB_14016dd9b;
          }
          pvVar4 = GetProcessHeap();
          lpMultiByteStr = HeapAlloc(pvVar4,8,(longlong)iVar1);
          *(LPSTR *)((longlong)lpMem_00 + lVar3 * 8) = lpMultiByteStr;
          if (lpMultiByteStr == (LPSTR)0x0) goto LAB_14016dd8d;
          iVar1 = WideCharToMultiByte(0xfde9,0,hMem[lVar3],-1,lpMultiByteStr,iVar1,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (iVar1 == 0) goto LAB_14016de4f;
          lVar3 = lVar3 + 1;
        } while (lVar3 < local_64);
      }
      *(undefined8 *)((longlong)lpMem_00 + lVar3 * 8) = 0;
      LocalFree(hMem);
      FUN_14015ae50();
      uVar2 = (*param_3)(local_64,lpMem_00);
      if (0 < local_64) {
        lVar3 = 0;
        do {
          lpMem = *(LPVOID *)((longlong)lpMem_00 + lVar3 * 8);
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,lpMem);
          lVar3 = lVar3 + 1;
        } while (lVar3 < local_64);
      }
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,lpMem_00);
      goto LAB_14016de25;
    }
  }
LAB_14016dd8d:
  pcVar5 = "Out of memory - aborting";
LAB_14016dd9b:
  FUN_14014df90(0x10,"Fatal Error",pcVar5,0);
  uVar2 = 0xffffffff;
LAB_14016de25:
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStackY_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStackY_b8);
  }
  return uVar2;
}

