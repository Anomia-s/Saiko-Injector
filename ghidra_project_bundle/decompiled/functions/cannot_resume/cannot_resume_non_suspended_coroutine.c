/**
 * Function: cannot_resume_non_suspended_coroutine
 * Address:  1406b9760
 * Signature: undefined cannot_resume_non_suspended_coroutine(void)
 * Body size: 272 bytes
 */


undefined8 cannot_resume_non_suspended_coroutine(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  cVar1 = *(char *)(param_1 + 3);
  if (((cVar1 == '\x06') || (cVar1 == '\x01')) ||
     ((cVar1 == '\0' && (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_1 + 0x40))))) {
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(ushort *)(param_2 + 0x50);
      *(ushort *)(param_1 + 0x50) = uVar4;
      if (199 < uVar4) {
        lVar5 = *(longlong *)(param_1 + 8);
        lVar8 = lVar5 + (longlong)param_3 * -0x10;
        *(longlong *)(param_1 + 8) = lVar8;
        pcVar6 = "C stack overflow";
        uVar7 = 0x10;
        goto LAB_1406b97ec;
      }
    }
    *(ushort *)(param_1 + 0x50) = uVar4 + 1;
    *(ushort *)(param_1 + 0x52) = uVar4 + 1;
    *(undefined1 *)(param_1 + 5) = 1;
    uVar7 = 0;
    if ((*(byte *)(param_1 + 1) & 4) != 0) {
      FUN_1406bb030(param_1,param_1,param_1 + 0x68);
      uVar7 = 0;
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar8 = lVar5 + (longlong)param_3 * -0x10;
    *(longlong *)(param_1 + 8) = lVar8;
    pcVar6 = "cannot resume non-suspended coroutine";
    uVar7 = 0x25;
LAB_1406b97ec:
    uVar7 = FUN_1406c0530(param_1,pcVar6,uVar7);
    *(undefined8 *)(lVar5 + (longlong)param_3 * -0x10) = uVar7;
    *(undefined4 *)(lVar8 + 0xc) = 5;
    lVar5 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 0x28) - lVar5 < 0x11) {
      iVar2 = *(int *)(param_1 + 0x48);
      iVar3 = iVar2 + 1;
      if (0 < iVar2) {
        iVar3 = iVar2 * 2;
      }
      FUN_1406b8f90(param_1,iVar3,0);
      lVar5 = *(longlong *)(param_1 + 8);
    }
    *(longlong *)(param_1 + 8) = lVar5 + 0x10;
    uVar7 = 2;
  }
  return uVar7;
}

