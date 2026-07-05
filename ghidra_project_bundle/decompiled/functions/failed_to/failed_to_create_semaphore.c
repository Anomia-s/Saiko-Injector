/**
 * Function: failed_to_create_semaphore
 * Address:  140372fe0
 * Signature: undefined failed_to_create_semaphore(void)
 * Body size: 78 bytes
 */


undefined4 * failed_to_create_semaphore(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 2) = pvVar1;
  if (pvVar1 != (HANDLE)0x0) {
    return param_1;
  }
  (*(code *)PTR_vfunction4_1414f67c8)("Failed to create semaphore");
                    /* WARNING: Subroutine does not return */
  abort();
}

