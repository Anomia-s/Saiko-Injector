/**
 * Function: size_out_of_range
 * Address:  1406a9e20
 * Signature: undefined size_out_of_range(void)
 * Body size: 204 bytes
 */


undefined8 size_out_of_range(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar5 = FUN_1406b7830(param_1,1);
  if (-1 < (int)uVar5) {
    iVar6 = FUN_140473550(param_1,2);
    FUN_1404748d0(param_1,uVar5);
    if ((0 < iVar6) && (uVar5 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      puVar7 = (undefined8 *)(lVar2 + 0x10);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + -0x10);
      if (uVar5 == 1) {
        uVar8 = 0;
      }
      else {
        lVar9 = 0;
        uVar8 = 0;
        do {
          uVar4 = *(undefined8 *)(lVar2 + 0x18);
          puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x18) + lVar9);
          *puVar1 = *puVar7;
          puVar1[1] = uVar4;
          uVar4 = *(undefined8 *)(lVar2 + 0x18);
          puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x18) + 0x10 + lVar9);
          *puVar1 = *puVar7;
          puVar1[1] = uVar4;
          uVar8 = uVar8 + 2;
          lVar9 = lVar9 + 0x20;
        } while ((uVar5 & 0x7ffffffe) != uVar8);
      }
      if ((uVar5 & 1) != 0) {
        uVar4 = *(undefined8 *)(lVar2 + 0x18);
        puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x18) + uVar8 * 0x10);
        *puVar1 = *puVar7;
        puVar1[1] = uVar4;
      }
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s(param_1,1,"size out of range");
}

