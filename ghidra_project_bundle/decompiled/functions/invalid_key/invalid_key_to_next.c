/**
 * Function: invalid_key_to_next
 * Address:  1406be610
 * Signature: undefined invalid_key_to_next(void)
 * Body size: 443 bytes
 */


undefined8 invalid_key_to_next(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong lVar1;
  int *piVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  double *pdVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  if (*(int *)((longlong)param_3 + 0xc) == 3) {
    dVar3 = *param_3;
    iVar9 = (int)dVar3;
    if (0 < iVar9) {
      if (((dVar3 == (double)(int)dVar3) && (!NAN(dVar3) && !NAN((double)(int)dVar3))) &&
         (iVar4 = *(int *)(param_2 + 8), iVar9 <= iVar4)) {
        iVar9 = iVar9 + -1;
        goto LAB_1406be6fa;
      }
    }
  }
  else if (*(int *)((longlong)param_3 + 0xc) == 0) {
    iVar4 = *(int *)(param_2 + 8);
    iVar9 = -1;
    goto LAB_1406be6fa;
  }
  lVar5 = FUN_1406bf430(param_2,param_3);
  pdVar6 = (double *)(lVar5 + 0x10);
  iVar9 = FUN_1406b89e0(pdVar6,param_3);
  while ((iVar9 == 0 &&
         (((uVar7 = *(uint *)(lVar5 + 0x1c), (uVar7 & 0xf) != 0xd ||
           (*(int *)((longlong)param_3 + 0xc) < 5)) || (*pdVar6 != *param_3))))) {
    if (uVar7 < 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_1406c1000(param_1,"invalid key to \'next\'");
    }
    lVar8 = (longlong)((int)uVar7 >> 4) * 0x20;
    pdVar6 = (double *)(lVar5 + lVar8 + 0x10);
    iVar9 = FUN_1406b89e0(pdVar6,param_3);
    lVar5 = lVar5 + lVar8;
  }
  iVar4 = *(int *)(param_2 + 8);
  iVar9 = (int)((ulonglong)(lVar5 - *(longlong *)(param_2 + 0x20)) >> 5) + iVar4;
LAB_1406be6fa:
  lVar8 = (longlong)iVar9 + 1;
  lVar5 = (longlong)iVar9 << 4;
  do {
    if (iVar4 <= lVar8) {
      iVar9 = 1 << (*(byte *)(param_2 + 6) & 0x1f);
      uVar7 = (int)lVar8 - iVar4;
      if (iVar9 <= (int)uVar7) {
        return 0;
      }
      lVar5 = *(longlong *)(param_2 + 0x20);
      lVar8 = (ulonglong)uVar7 << 5;
      while (*(int *)(lVar5 + 0xc + lVar8) == 0) {
        lVar8 = lVar8 + 0x20;
        uVar7 = uVar7 + 1;
        if (iVar9 <= (int)uVar7) {
          return 0;
        }
      }
      *param_3 = *(double *)(lVar5 + 0x10 + lVar8);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar5 + 0x18 + lVar8);
      *(uint *)((longlong)param_3 + 0xc) = *(uint *)(lVar5 + 0x1c + lVar8) & 0xf;
      pdVar6 = (double *)(lVar8 + *(longlong *)(param_2 + 0x20));
      goto LAB_1406be7a4;
    }
    lVar8 = lVar8 + 1;
    lVar1 = lVar5 + 0x10;
    piVar2 = (int *)(*(longlong *)(param_2 + 0x18) + 0x1c + lVar5);
    lVar5 = lVar1;
  } while (*piVar2 == 0);
  *param_3 = (double)(int)lVar8;
  *(undefined4 *)((longlong)param_3 + 0xc) = 3;
  pdVar6 = (double *)(lVar1 + *(longlong *)(param_2 + 0x18));
LAB_1406be7a4:
  dVar3 = pdVar6[1];
  param_3[2] = *pdVar6;
  param_3[3] = dVar3;
  return 1;
}

