/**
 * Function: ntqueryinformationthread
 * Address:  1401b5d30
 * Signature: undefined ntqueryinformationthread(void)
 * Body size: 45 bytes
 */


void ntqueryinformationthread(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("ntdll.dll");
  DAT_141529838 = GetProcAddress(hModule,"NtQueryInformationThread");
  return;
}

