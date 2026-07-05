/**
 * Function: couldnt_create_semaphore
 * Address:  140158250
 * Signature: undefined couldnt_create_semaphore(void)
 * Body size: 88 bytes
 */


undefined8 * couldnt_create_semaphore(LONG param_1)

{
  undefined8 *puVar1;
  HANDLE pvVar2;
  
  puVar1 = (undefined8 *)FUN_140160c40(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    pvVar2 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,param_1,0x8000,(LPCWSTR)0x0);
    *puVar1 = pvVar2;
    *(LONG *)(puVar1 + 1) = param_1;
    if (pvVar2 != (HANDLE)0x0) {
      return puVar1;
    }
    FUN_1400fbed0("Couldn\'t create semaphore");
    FUN_140160cf0(puVar1);
  }
  return (undefined8 *)0x0;
}

