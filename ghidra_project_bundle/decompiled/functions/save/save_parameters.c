/**
 * Function: save_parameters
 * Address:  140d5e030
 * Signature: undefined save_parameters(void)
 * Body size: 290 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool save_parameters(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined8 local_res18 [2];
  
  uVar2 = FUN_140b76070(*param_1);
  lVar3 = FUN_140b93540(param_2,"cipher");
  lVar4 = FUN_140b93540(param_2,"properties");
  lVar5 = FUN_140b93540(param_2,"save-parameters");
  if (lVar3 != 0) {
    local_res8 = 0;
    local_res18[0] = 0;
    iVar1 = FUN_140b954c0(lVar3,&local_res8);
    if (iVar1 == 0) {
      return false;
    }
    if ((lVar4 != 0) && (iVar1 = FUN_140b954c0(lVar4,local_res18), iVar1 == 0)) {
      return false;
    }
    FUN_140b843f0(param_1[2]);
    param_1[2] = 0;
    *(uint *)((longlong)param_1 + 0xc) = (uint)(local_res8 != 0);
    if (local_res8 != 0) {
      lVar3 = FUN_140b84390(uVar2,local_res8,local_res18[0]);
      param_1[2] = lVar3;
      if (lVar3 == 0) {
        return false;
      }
    }
  }
  if (lVar5 == 0) {
    return true;
  }
  iVar1 = FUN_140b93920(lVar5,param_1 + 1);
  return iVar1 != 0;
}

