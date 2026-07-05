/**
 * Function: Unwind@1401a4d90
 * Address:  1401a4d90
 * Signature: undefined Unwind@1401a4d90(void)
 * Body size: 285 bytes
 */


void Unwind_1401a4d90(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 *puVar4;
  int iVar5;
  
  if (**(char **)(param_2 + 0x68) == '\x01') {
    lVar3 = *(longlong *)(param_2 + 0x68);
    iVar5 = *(int *)(lVar3 + 0x18) + 1;
    (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x1a8))
              (*(longlong **)(lVar3 + 0x10),*(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x18),2,iVar5
              );
    lVar3 = FUN_1401a9cc0();
    AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xd8));
    puVar4 = *(undefined1 **)(lVar3 + 0xb0);
    uVar2 = extraout_var;
    if (puVar4 == *(undefined1 **)(lVar3 + 0xb8)) {
      FUN_1401a4720(lVar3 + 0xa8);
      puVar4 = *(undefined1 **)(lVar3 + 0xb0);
      uVar2 = extraout_var_00;
    }
    *puVar4 = 0x2c;
    uVar1 = rdtsc();
    *(ulonglong *)(puVar4 + 1) = uVar1 & 0xffffffff00000000 | CONCAT44(uVar2,(int)uVar1);
    uVar2 = FUN_1401ab560();
    *(undefined4 *)(puVar4 + 9) = uVar2;
    *(short *)(puVar4 + 0xd) = (short)iVar5;
    puVar4[0xf] = *(undefined1 *)(**(longlong **)(param_2 + 0x60) + 0x10);
    lVar3 = FUN_1401a9cc0();
    *(longlong *)(lVar3 + 0xb0) = *(longlong *)(lVar3 + 0xb0) + 0x20;
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xd8));
    lVar3 = *(longlong *)(param_2 + 0x68);
    (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x1b0))
              (*(longlong **)(lVar3 + 0x10),*(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x18),2,
               (ulonglong)*(uint *)(lVar3 + 0x18),2,*(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x20)
               ,(ulonglong)*(uint *)(lVar3 + 0x18) << 3);
  }
  return;
}

