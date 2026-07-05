/**
 * Function: name_conflict_for_module_s
 * Address:  1406b7b30
 * Signature: undefined name_conflict_for_module_s(void)
 * Body size: 304 bytes
 */


void name_conflict_for_module_s(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 != 0) {
    if (*param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      plVar2 = param_3;
      do {
        plVar2 = plVar2 + 2;
        iVar4 = iVar4 + 1;
      } while (*plVar2 != 0);
    }
    FUN_1406b7c70(param_1,0xffffd8f0,"_LOADED",1);
    FUN_1404745f0(param_1,0xffffffff,param_2);
    iVar1 = FUN_140473550(param_1,0xffffffff);
    if (iVar1 != 6) {
      FUN_1404731f0(param_1,0xfffffffe);
      lVar3 = FUN_1406b7c70(param_1,0xffffd8ee,param_2,iVar4);
      if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(param_1,"name conflict for module \'%s\'",param_2);
      }
      FUN_1404734c0(param_1,0xffffffff);
      FUN_140474c90(param_1,0xfffffffd,param_2);
    }
    FUN_140473250(param_1,0xfffffffe);
  }
  lVar3 = *param_3;
  while (lVar3 != 0) {
    FUN_1404743a0(param_1,param_3[1],lVar3,0,0);
    FUN_140474c90(param_1,0xfffffffe,*param_3);
    lVar3 = param_3[2];
    param_3 = param_3 + 2;
  }
  return;
}

