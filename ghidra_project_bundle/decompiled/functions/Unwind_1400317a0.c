/**
 * Function: Unwind@1400317a0
 * Address:  1400317a0
 * Signature: undefined Unwind@1400317a0(void)
 * Body size: 92 bytes
 */


void Unwind_1400317a0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_2 + 0x30);
  pvVar2 = *(void **)(*(longlong *)(param_2 + 0x70) + 0x6a0);
  if (pvVar2 != *(void **)(param_2 + 0x38)) {
    free(pvVar2);
  }
  pvVar2 = *(void **)(*(longlong *)(param_2 + 0x70) + 0x478);
  if (pvVar2 != pvVar1) {
    free(pvVar2);
  }
  FUN_140032940(*(undefined8 *)(param_2 + 0x28));
  return;
}

