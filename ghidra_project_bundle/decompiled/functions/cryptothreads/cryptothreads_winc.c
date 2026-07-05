/**
 * Function: cryptothreads_winc
 * Address:  140b8c120
 * Signature: undefined cryptothreads_winc(void)
 * Body size: 106 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cryptothreads_winc(void)

{
  DWORD dwErrCode;
  DWORD *pDVar1;
  LPVOID pvVar2;
  
  pDVar1 = (DWORD *)FUN_140c178b0();
  dwErrCode = GetLastError();
  pvVar2 = TlsGetValue(*pDVar1);
  SetLastError(dwErrCode);
  FUN_140b8d990(pvVar2,"crypto\\threads_win.c",0xe2);
                    /* WARNING: Could not recover jumptable at 0x000140b8c183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(*pDVar1,(LPVOID)0x0);
  return;
}

