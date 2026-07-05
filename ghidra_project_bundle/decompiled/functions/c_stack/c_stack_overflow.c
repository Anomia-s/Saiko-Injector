/**
 * Function: c_stack_overflow
 * Address:  1406b9500
 * Signature: undefined c_stack_overflow(void)
 * Body size: 234 bytes
 */


void c_stack_overflow(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(int *)(param_1 + 0x50) + 1;
  *(short *)(param_1 + 0x50) = (short)uVar4;
  uVar4 = uVar4 & 0xffff;
  if (199 < uVar4) {
    if (uVar4 == 200) {
                    /* WARNING: Subroutine does not return */
      FUN_1406c1000(param_1,"C stack overflow");
    }
    if (0xe0 < uVar4) {
                    /* WARNING: Subroutine does not return */
      lua_exception::lua_exception_Constructor_or_Destructor(param_1,5);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  iVar5 = FUN_1407843e0(param_1,param_2,param_3);
  if (iVar5 == 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 0x24);
    *puVar1 = *puVar1 | 1;
    cVar2 = *(char *)(param_1 + 5);
    *(undefined1 *)(param_1 + 5) = 1;
    if ((*(byte *)(param_1 + 1) & 4) != 0) {
      FUN_1406bb030(param_1,param_1,param_1 + 0x68);
    }
    FUN_14077a2a0(param_1);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  if (param_3 != -1) {
    *(longlong *)(param_1 + 8) =
         (longlong)param_3 * 0x10 + (param_2 - lVar3) + *(longlong *)(param_1 + 0x30);
  }
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -1;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x48) <
      *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x40)) {
    return;
  }
  FUN_1406ba380(param_1,1);
  return;
}

