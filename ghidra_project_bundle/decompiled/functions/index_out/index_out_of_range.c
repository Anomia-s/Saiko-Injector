/**
 * Function: index_out_of_range
 * Address:  1406a9ef0
 * Signature: undefined index_out_of_range(void)
 * Body size: 173 bytes
 */


undefined8 index_out_of_range(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_1406b76d0(param_1,1,6);
  missing_argument_d(param_1,2);
  iVar2 = FUN_1406b78a0(param_1,3,1);
  if (iVar2 < 1) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,3,"index out of range");
  }
  uVar1 = **(undefined8 **)(param_1 + 0x10);
  while( true ) {
    lVar4 = FUN_1406bf100(uVar1,iVar2);
    if (*(int *)(lVar4 + 0xc) == 0) {
      FUN_140474110(param_1);
      return 1;
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x1c) == *(int *)(lVar4 + 0xc)) &&
       (iVar3 = FUN_1406bc770(param_1,*(longlong *)(param_1 + 0x10) + 0x10,lVar4), iVar3 != 0))
    break;
    iVar2 = iVar2 + 1;
  }
  FUN_140474150(param_1,iVar2);
  return 1;
}

