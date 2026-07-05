/**
 * Function: k32getmoduleinformation
 * Address:  1401b5d90
 * Signature: undefined k32getmoduleinformation(void)
 * Body size: 45 bytes
 */


void k32getmoduleinformation(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("kernel32.dll");
  DAT_141529848 = GetProcAddress(hModule,"K32GetModuleInformation");
  return;
}

