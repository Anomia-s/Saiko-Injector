/**
 * Function: __scrt_is_ucrt_dll_in_use
 * Address:  140b69258
 * Signature: undefined __scrt_is_ucrt_dll_in_use(void)
 * Body size: 12 bytes
 */


/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_14151e314 != 0;
}

