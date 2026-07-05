/**
 * Function: setfenv_cannot_change_environment_of_given_ob
 * Address:  1406a8750
 * Signature: undefined setfenv_cannot_change_environment_of_given_ob(void)
 * Body size: 210 bytes
 */


undefined8 setfenv_cannot_change_environment_of_given_ob(undefined8 param_1)

{
  int iVar1;
  double dVar2;
  
  FUN_1406b76d0(param_1,2,6);
  level_must_be_non_negative(param_1,0);
  FUN_1404734c0(param_1,2);
  FUN_140474a10(param_1,0xffffffff,0);
  iVar1 = FUN_140473660(param_1,1);
  if (iVar1 != 0) {
    dVar2 = (double)FUN_140473880(param_1,1,0);
    if ((dVar2 == 0.0) && (!NAN(dVar2))) {
      FUN_140474510(param_1);
      FUN_1404732f0(param_1,0xfffffffe);
      FUN_140474fd0(param_1,0xfffffffe);
      return 0;
    }
  }
  iVar1 = FUN_1404735f0(param_1,0xfffffffe);
  if ((iVar1 == 0) && (iVar1 = FUN_140474fd0(param_1,0xfffffffe), iVar1 != 0)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"\'setfenv\' cannot change environment of given object");
}

