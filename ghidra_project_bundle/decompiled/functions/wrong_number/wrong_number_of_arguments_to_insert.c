/**
 * Function: wrong_number_of_arguments_to_insert
 * Address:  1406a9a00
 * Signature: undefined wrong_number_of_arguments_to_insert(void)
 * Body size: 166 bytes
 */


undefined8 wrong_number_of_arguments_to_insert(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_1406b76d0(param_1,1,6);
  iVar1 = FUN_140473d90(param_1,1);
  iVar2 = FUN_1404731e0(param_1);
  if (iVar2 == 3) {
    iVar2 = FUN_1406b7830(param_1,2);
    if (iVar2 <= iVar1 && 0 < iVar2) {
      FUN_1406aa220(param_1,1,iVar2,iVar1,iVar2 + 1);
    }
  }
  else {
    if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"wrong number of arguments to \'insert\'");
    }
    iVar2 = iVar1 + 1;
  }
  FUN_140474e20(param_1,1,iVar2);
  return 0;
}

