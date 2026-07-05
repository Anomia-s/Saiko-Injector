/**
 * Function: too_many_results_to_unpack
 * Address:  1406a9430
 * Signature: undefined too_many_results_to_unpack(void)
 * Body size: 371 bytes
 */


uint too_many_results_to_unpack(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  
  FUN_1406b76d0(param_1,1,6);
  lVar4 = **(longlong **)(param_1 + 0x10);
  uVar6 = FUN_1406b78a0(param_1,2);
  iVar7 = FUN_140473550(param_1,3);
  if (iVar7 < 1) {
    uVar8 = FUN_140473d90(param_1,1);
  }
  else {
    uVar8 = FUN_1406b7830(param_1,3);
  }
  uVar11 = uVar8 - uVar6;
  if ((int)uVar6 <= (int)uVar8) {
    if (uVar11 < 0x7fffffff) {
      uVar1 = uVar11 + 1;
      iVar7 = FUN_140472ef0(param_1,uVar1);
      if (iVar7 != 0) {
        if ((uVar6 == 1) && ((int)uVar11 < *(int *)(lVar4 + 8))) {
          if (uVar8 == 1) {
            uVar9 = 0;
          }
          else {
            lVar10 = 0;
            uVar9 = 0;
            do {
              puVar2 = (undefined8 *)(*(longlong *)(lVar4 + 0x18) + lVar10);
              uVar5 = puVar2[1];
              puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + lVar10);
              *puVar3 = *puVar2;
              puVar3[1] = uVar5;
              puVar2 = (undefined8 *)(*(longlong *)(lVar4 + 0x18) + 0x10 + lVar10);
              uVar5 = puVar2[1];
              puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + lVar10);
              *puVar3 = *puVar2;
              puVar3[1] = uVar5;
              uVar9 = uVar9 + 2;
              lVar10 = lVar10 + 0x20;
            } while ((uVar8 & 0xfffffffe) != uVar9);
          }
          if ((uVar8 & 1) != 0) {
            puVar2 = (undefined8 *)(*(longlong *)(lVar4 + 0x18) + uVar9 * 0x10);
            uVar5 = puVar2[1];
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + uVar9 * 0x10);
            *puVar3 = *puVar2;
            puVar3[1] = uVar5;
          }
          *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 0x10;
          return uVar1;
        }
        if ((int)uVar6 < (int)uVar8) {
          do {
            FUN_140474830(param_1,1,uVar6);
            uVar6 = uVar6 + 1;
          } while (uVar8 != uVar6);
        }
        FUN_140474830(param_1,1,uVar8);
        return uVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"too many results to unpack");
  }
  return 0;
}

