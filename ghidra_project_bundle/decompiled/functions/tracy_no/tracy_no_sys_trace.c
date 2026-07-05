/**
 * Function: tracy_no_sys_trace
 * Address:  1401ac030
 * Signature: undefined tracy_no_sys_trace(void)
 * Body size: 804 bytes
 */


void tracy_no_sys_trace(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  char *pcVar6;
  HANDLE pvVar7;
  HMODULE hModule;
  undefined8 *puVar8;
  undefined1 auStackY_68 [32];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStackY_68;
  pcVar6 = (char *)FUN_1401a5b90("TRACY_NO_SYS_TRACE");
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '1')) {
    cVar5 = nt_kernel_logger(param_1 + 0x58);
    if (cVar5 != '\0') {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x18c) == '\0') {
        FUN_1401b83e0();
      }
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x1a0);
      puVar8 = *(undefined8 **)(lVar2 + 0x38);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)FUN_1401b9c30(lVar2,(undefined8 *)(lVar2 + 0x38),2);
      }
      else {
        *(undefined8 *)(lVar2 + 0x38) = *puVar8;
      }
      *puVar8 = nt_kernel_logger;
      puVar8[1] = 0;
      pvVar7 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1401b8470,puVar8,0,(LPDWORD)0x0);
      puVar8[2] = pvVar7;
      LOCK();
      UNLOCK();
      local_30 = 1;
      DAT_1416b4d38 = puVar8;
      FUN_140041730(&local_30);
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x18c) == '\0') {
    FUN_1401b83e0();
  }
  pcVar6 = (char *)(lVar2 + 0x18c);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)(lVar2 + 0x1a0);
  puVar8 = *(undefined8 **)(lVar3 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_1401b9c30(lVar3,(undefined8 *)(lVar3 + 0x38),2);
  }
  else {
    *(undefined8 *)(lVar3 + 0x38) = *puVar8;
  }
  plVar1 = (longlong *)(lVar2 + 0x1a0);
  DAT_141526fc8 = puVar8;
  *puVar8 = &LAB_1401ac4a0;
  puVar8[1] = param_1;
  pvVar7 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1401b8470,puVar8,0,(LPDWORD)0x0);
  puVar8[2] = pvVar7;
  if (*pcVar6 == '\0') {
    FUN_1401b83e0();
  }
  lVar2 = *plVar1;
  puVar8 = *(undefined8 **)(lVar2 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_1401b9c30(lVar2,(undefined8 *)(lVar2 + 0x38),2);
  }
  else {
    *(undefined8 *)(lVar2 + 0x38) = *puVar8;
  }
  DAT_141526fd0 = puVar8;
  *puVar8 = &LAB_1401ac4b0;
  puVar8[1] = param_1;
  pvVar7 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1401b8470,puVar8,0,(LPDWORD)0x0);
  puVar8[2] = pvVar7;
  if (*pcVar6 == '\0') {
    FUN_1401b83e0();
  }
  lVar2 = *plVar1;
  puVar8 = *(undefined8 **)(lVar2 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_1401b9c30(lVar2,(undefined8 *)(lVar2 + 0x38),2);
  }
  else {
    *(undefined8 *)(lVar2 + 0x38) = *puVar8;
  }
  DAT_141526fd8 = puVar8;
  *puVar8 = &LAB_1401ac4c0;
  puVar8[1] = param_1;
  pvVar7 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1401b8470,puVar8,0,(LPDWORD)0x0);
  puVar8[2] = pvVar7;
  DAT_141526c20 = GetThreadId((HANDLE)DAT_141526fc8[2]);
  DAT_141526c24 = GetThreadId((HANDLE)DAT_141526fd8[2]);
  hModule = GetModuleHandleA("ntdll.dll");
  DAT_141527820 = GetProcAddress(hModule,"RtlWalkFrameChain");
  uVar4 = rdtsc();
  *(ulonglong *)(param_1 + 0x10) =
       uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)DAT_141527820 >> 0x20),(int)uVar4);
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStackY_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStackY_68);
}

