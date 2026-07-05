/**
 * Function: cryptothreadarchthread_winc
 * Address:  140c210a0
 * Signature: undefined cryptothreadarchthread_winc(void)
 * Body size: 159 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cryptothreadarchthread_winc(void *param_1)

{
  uintptr_t *puVar1;
  uintptr_t uVar2;
  
  puVar1 = (uintptr_t *)FUN_140b8da80(8,"crypto\\thread\\arch\\thread_win.c",0x27);
  if (puVar1 != (uintptr_t *)0x0) {
    uVar2 = _beginthreadex((void *)0x0,0,FUN_140c211b0,param_1,0,(uint *)0x0);
    *puVar1 = uVar2;
    if (uVar2 != 0) {
      *(uintptr_t **)((longlong)param_1 + 0x20) = puVar1;
      return 1;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUN_140b8d990(puVar1,"crypto\\thread\\arch\\thread_win.c",0x34);
  return 0;
}

