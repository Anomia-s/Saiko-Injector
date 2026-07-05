/**
 * Function: sdl_dynamic_api_failure
 * Address:  140059220
 * Signature: undefined sdl_dynamic_api_failure(void)
 * Body size: 25 bytes
 */


void sdl_dynamic_api_failure(LPCSTR param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140059232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MessageBoxA((HWND)0x0,param_1,"SDL Dynamic API Failure!",0x10);
  return;
}

