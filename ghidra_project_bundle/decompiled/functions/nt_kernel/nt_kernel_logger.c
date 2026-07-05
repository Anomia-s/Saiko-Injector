/**
 * Function: nt_kernel_logger
 * Address:  1401b6c90
 * Signature: undefined nt_kernel_logger(void)
 * Body size: 144 bytes
 */


void nt_kernel_logger(void)

{
  undefined8 uVar1;
  HANDLE hThread;
  
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,0xf);
  setthreaddescription("Tracy SysTrace",0);
  ProcessTrace(&DAT_141529878,1,0,0);
  ControlTraceA(0,"NT Kernel Logger",DAT_141529868,1);
  uVar1 = DAT_141529868;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x18c) == '\0') {
    FUN_1401b83e0();
  }
  FUN_1401b8260(uVar1);
  return;
}

