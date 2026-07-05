/**
 * Function: setthreaddescription
 * Address:  1401a5660
 * Signature: undefined setthreaddescription(void)
 * Body size: 578 bytes
 */


void setthreaddescription(char *param_1,DWORD param_2)

{
  longlong lVar1;
  longlong lVar2;
  FARPROC pFVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  HANDLE pvVar6;
  size_t _Size;
  DWORD *pDVar7;
  DWORD *pDVar8;
  undefined8 *_Dst;
  HMODULE hModule;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_258 [32];
  wchar_t local_238 [260];
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_258;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_141526308) && (FUN_140b6864c(&DAT_141526308), DAT_141526308 == -1)) {
    hModule = GetModuleHandleA("kernel32.dll");
    DAT_141526300 = GetProcAddress(hModule,"SetThreadDescription");
    _Init_thread_footer(&DAT_141526308);
  }
  if (DAT_141526300 != (FARPROC)0x0) {
    mbstowcs(local_238,param_1,0x100);
    pFVar3 = DAT_141526300;
    pvVar6 = GetCurrentThread();
    (*pFVar3)(pvVar6,local_238);
  }
  _Size = strlen(param_1);
  uVar10 = _Size + 1;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x18c) == '\0') {
    FUN_1401b83e0();
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar2 = *(longlong *)(lVar1 + 0x1a0);
  if (uVar10 < 0x401) {
    uVar10 = _Size + 0x10 >> 4;
    _Dst = *(undefined8 **)(lVar2 + 8 + uVar10 * 0x18);
    if (_Dst == (undefined8 *)0x0) {
      _Dst = (undefined8 *)FUN_1401b9c30();
    }
    else {
      *(undefined8 *)(lVar2 + uVar10 * 0x18 + 8) = *_Dst;
    }
  }
  else {
    uVar9 = 0x7e00;
    if (DAT_1416b4510 == '\0') {
      uVar9 = 0;
    }
    if (uVar9 < uVar10) {
      if (uVar10 < 0x3eff81) {
        _Dst = (undefined8 *)FUN_1401b9ae0();
      }
      else {
        _Dst = (undefined8 *)FUN_1401b9b30(lVar2,uVar10);
      }
    }
    else {
      _Dst = (undefined8 *)FUN_1401b9a90(lVar2,uVar10);
    }
  }
  memcpy(_Dst,param_1,_Size);
  *(undefined1 *)((longlong)_Dst + _Size) = 0;
  lVar1 = *(longlong *)(lVar1 + 0x1a0);
  pDVar8 = *(DWORD **)(lVar1 + 0x38);
  if (pDVar8 == (DWORD *)0x0) {
    pDVar8 = (DWORD *)FUN_1401b9c30(lVar1,(undefined8 *)(lVar1 + 0x38),2);
  }
  else {
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)pDVar8;
  }
  DVar5 = GetCurrentThreadId();
  *pDVar8 = DVar5;
  pDVar8[1] = param_2;
  *(undefined8 **)(pDVar8 + 2) = _Dst;
  pDVar7 = DAT_1416b46b0;
  do {
    *(DWORD **)(pDVar8 + 4) = pDVar7;
    LOCK();
    bVar11 = pDVar7 != DAT_1416b46b0;
    pDVar4 = pDVar8;
    if (bVar11) {
      pDVar7 = DAT_1416b46b0;
      pDVar4 = DAT_1416b46b0;
    }
    DAT_1416b46b0 = pDVar4;
    UNLOCK();
  } while (bVar11);
  if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_258)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStack_258);
  }
  return;
}

