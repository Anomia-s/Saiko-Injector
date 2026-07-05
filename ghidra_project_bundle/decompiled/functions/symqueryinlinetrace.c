/**
 * Function: symqueryinlinetrace
 * Address:  1401b56a0
 * Signature: undefined symqueryinlinetrace(void)
 * Body size: 183 bytes
 */


void symqueryinlinetrace(void)

{
  HMODULE pHVar1;
  HANDLE pvVar2;
  
  if (DAT_141527828 != '\0') {
    return;
  }
  pHVar1 = GetModuleHandleA("dbghelp.dll");
  DAT_141527800 = GetProcAddress(pHVar1,"SymAddrIncludeInlineTrace");
  pHVar1 = GetModuleHandleA("dbghelp.dll");
  DAT_141527808 = GetProcAddress(pHVar1,"SymQueryInlineTrace");
  pHVar1 = GetModuleHandleA("dbghelp.dll");
  DAT_141527810 = GetProcAddress(pHVar1,"SymFromInlineContext");
  pHVar1 = GetModuleHandleA("dbghelp.dll");
  DAT_141527818 = GetProcAddress(pHVar1,"SymGetLineFromInlineContext");
  pvVar2 = GetCurrentProcess();
  SymInitialize(pvVar2,0,1);
                    /* WARNING: Could not recover jumptable at 0x0001401b5750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SymSetOptions(0x10);
  return;
}

