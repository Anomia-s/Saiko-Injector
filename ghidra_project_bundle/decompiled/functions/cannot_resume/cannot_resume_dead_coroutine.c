/**
 * Function: cannot_resume_dead_coroutine
 * Address:  1406b9870
 * Signature: undefined cannot_resume_dead_coroutine(void)
 * Body size: 321 bytes
 */


void cannot_resume_dead_coroutine(longlong param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (DAT_1416fe1d0 == '\x01') {
    if (*(char *)(param_1 + 3) == '\0') {
      if (param_2 == *(longlong *)(param_1 + 0x10)) {
LAB_1406b9923:
                    /* WARNING: Subroutine does not return */
        FUN_1406c1000(param_1,"cannot resume dead coroutine");
      }
      iVar4 = FUN_1407843e0(param_1,param_2 + -0x10,0xffffffff);
      if (*(char *)(param_1 + 3) != '\x7f') {
        if (iVar4 != 0) {
          return;
        }
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 0x24);
        *puVar1 = *puVar1 | 1;
        if (*(char *)(param_1 + 3) == '\0') goto LAB_1406b9948;
      }
    }
  }
  else if (*(char *)(param_1 + 3) == '\0') {
    if (param_2 == *(longlong *)(param_1 + 0x10)) goto LAB_1406b9923;
    iVar4 = FUN_1407843e0(param_1,param_2 + -0x10,0xffffffff);
    if (iVar4 != 0) {
      return;
    }
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 0x24);
    *puVar1 = *puVar1 | 1;
    goto LAB_1406b9948;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  lVar3 = *(longlong *)(*(undefined8 **)(param_1 + 0x20))[1];
  if ((*(char *)(lVar3 + 3) != '\0') && (*(longlong *)(lVar3 + 0x20) == 0)) goto LAB_1406b9932;
  *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(param_1 + 0x20);
LAB_1406b9948:
  while( true ) {
    while( true ) {
      cVar2 = *(char *)(param_1 + 3);
      if (DAT_1416fe1d0 == '\x01') {
        if ((cVar2 != '\0') && (cVar2 != '\x7f')) {
          return;
        }
        uVar5 = *(ulonglong *)(param_1 + 0x20);
        if (uVar5 <= *(ulonglong *)(param_1 + 0x40)) {
          return;
        }
        *(undefined1 *)(param_1 + 3) = 0;
      }
      else {
        if (cVar2 != '\0') {
          return;
        }
        uVar5 = *(ulonglong *)(param_1 + 0x20);
        if (uVar5 <= *(ulonglong *)(param_1 + 0x40)) {
          return;
        }
      }
      if (*(char *)(**(longlong **)(uVar5 + 8) + 3) != '\0') break;
      FUN_14077a2a0(param_1);
    }
    (**(code **)(**(longlong **)(uVar5 + 8) + 0x20))(param_1,0);
    if (*(char *)(param_1 + 3) == '\x01') {
      return;
    }
    if (*(char *)(param_1 + 3) == '\x06') break;
LAB_1406b9932:
    FUN_140784620(param_1);
  }
  return;
}

