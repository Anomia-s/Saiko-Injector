/**
 * Function: too_many_elements_to_move
 * Address:  1406a9ce0
 * Signature: undefined too_many_elements_to_move(void)
 * Body size: 308 bytes
 */


undefined8 too_many_elements_to_move(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_1406b76d0(param_1,1,6);
  iVar3 = FUN_1406b7830(param_1,2);
  iVar4 = FUN_1406b7830(param_1,3);
  iVar5 = FUN_1406b7830(param_1,4);
  iVar6 = FUN_140473550(param_1,5);
  iVar6 = (uint)(0 < iVar6) * 4 + 1;
  FUN_1406b76d0(param_1,iVar6,6);
  if (iVar3 <= iVar4) {
    if (iVar3 + 0x7fffffff <= iVar4 && iVar3 < 1) {
                    /* WARNING: Subroutine does not return */
      invalid_argument_d_s(param_1,3,"too many elements to move");
    }
    if ((int)(iVar4 - iVar3 ^ 0x7fffffffU) < iVar5) {
                    /* WARNING: Subroutine does not return */
      invalid_argument_d_s(param_1,4,"destination wrap around");
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10 + (ulonglong)(uint)(iVar6 * 0x10));
    if (*(char *)(lVar2 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
      attempt_to_modify_a_readonly_table(param_1);
    }
    if (((0 < iVar5) && (iVar1 = *(int *)(lVar2 + 8), iVar5 + -1 <= iVar1)) &&
       (iVar1 < iVar5 + (iVar4 - iVar3))) {
      FUN_1406be7e0(param_1);
    }
    FUN_1406aa220(param_1,iVar6,iVar3,iVar4,iVar5);
  }
  FUN_1404734c0(param_1,iVar6);
  return 1;
}

