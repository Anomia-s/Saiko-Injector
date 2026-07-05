/**
 * Function: max_must_be_greater_than_or_equal_to_min
 * Address:  1406b07f0
 * Signature: undefined max_must_be_greater_than_or_equal_to_min(void)
 * Body size: 129 bytes
 */


undefined8 max_must_be_greater_than_or_equal_to_min(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  dVar1 = (double)FUN_1406b7730(param_1,1);
  dVar2 = (double)FUN_1406b7730(param_1,2);
  uVar4 = SUB84(dVar2,0);
  uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = (double)FUN_1406b7730(param_1,3);
  if (dVar2 <= dVar3) {
    if (dVar2 <= dVar1) {
      uVar4 = SUB84(dVar1,0);
      uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    if ((double)CONCAT44(uVar5,uVar4) <= dVar3) {
      dVar3 = (double)CONCAT44(uVar5,uVar4);
    }
    FUN_140474130(param_1,dVar3);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s(param_1,3,"max must be greater than or equal to min");
}

