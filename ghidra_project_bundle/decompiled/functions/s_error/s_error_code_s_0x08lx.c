/**
 * Function: s_error_code_s_0x08lx
 * Address:  1403f5c30
 * Signature: undefined s_error_code_s_0x08lx(void)
 * Body size: 332 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void s_error_code_s_0x08lx(longlong param_1,undefined8 param_2,DWORD param_3)

{
  char *pcVar1;
  DWORD DVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStackY_478 [32];
  char acStack_439 [1041];
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStackY_478;
  if (param_3 == 0x887a0005) {
    if (*(longlong **)(param_1 + 0x50) == (longlong *)0x0) {
      param_3 = 0x887a0005;
    }
    else {
      param_3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x128))();
    }
  }
  uVar3 = 0;
  DVar2 = FormatMessageA(0x1200,(LPCVOID)0x0,param_3,0,(LPSTR)((longlong)acStack_439 + 1),0x400,
                         (va_list *)0x0);
  if (DVar2 == 0) {
    if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,"%s! Error Code: (0x%08lX)",param_2,param_3);
    }
    FUN_1400fbed0("%s! Error Code: (0x%08lX)",param_2,param_3);
  }
  else {
    uVar5 = 0x400;
    if (DVar2 < 0x400) {
      uVar5 = (ulonglong)DVar2;
    }
    do {
      uVar4 = uVar5 - 1;
      if (uVar5 == 0) goto LAB_1403f5cd5;
      pcVar1 = acStack_439 + uVar5;
      uVar5 = uVar4;
    } while (*pcVar1 < '!');
    uVar3 = (int)uVar4 + 1;
LAB_1403f5cd5:
    acStack_439[(ulonglong)uVar3 + 1] = 0;
    if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,"%s! Error Code: %s (0x%08lX)",param_2,(longlong)acStack_439 + 1);
    }
    FUN_1400fbed0("%s! Error Code: %s (0x%08lX)",param_2,(longlong)acStack_439 + 1,param_3);
  }
  if (DAT_1414ef3c0 != (local_28 ^ (ulonglong)auStackY_478)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_28 ^ (ulonglong)auStackY_478);
  }
  return;
}

