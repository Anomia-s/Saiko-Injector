/**
 * Function: failed_loading_s
 * Address:  140165700
 * Signature: undefined failed_loading_s(void)
 * Body size: 132 bytes
 */


FARPROC failed_loading_s(HMODULE param_1,LPCSTR param_2)

{
  FARPROC pFVar1;
  undefined1 auStack_238 [32];
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_238;
  pFVar1 = GetProcAddress(param_1,param_2);
  if (pFVar1 == (FARPROC)0x0) {
    FUN_1400fd420(local_218,0x200,"Failed loading %s",param_2);
    FUN_1403d7710(local_218);
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_238)) {
    return pFVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_238);
}

