/**
 * Function: no_world_available
 * Address:  140472ad0
 * Signature: undefined no_world_available(void)
 * Body size: 286 bytes
 */


undefined8 no_world_available(undefined8 param_1)

{
  int iVar1;
  char *_Str1;
  longlong lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  FUN_1404745f0(param_1,0xffffd8f0,"__luduvo_is_server");
  iVar1 = FUN_140473af0(param_1,0xffffffff);
  FUN_1404731f0(param_1,0xfffffffe);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"Instance.new can only be called from the server");
  }
  _Str1 = (char *)FUN_1406b7610(param_1,1,0);
  FUN_1404745f0(param_1,0xffffd8f0,"__luduvo_world");
  lVar2 = FUN_140473e90(param_1,0xffffffff);
  FUN_1404731f0(param_1,0xfffffffe);
  if (lVar2 != 0) {
    iVar1 = strcmp(_Str1,"Part");
    if (iVar1 == 0) {
      ppuVar3 = &PTR_s_Part_14132d18b_0x11_140e19e30;
    }
    else {
      iVar1 = strcmp(_Str1,"SpawnLocation");
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(param_1,"Unknown class \'%s\'",_Str1);
      }
      ppuVar3 = &PTR_s_SpawnLocation_140e19e40;
    }
    uVar4 = (*(code *)ppuVar3[1])(lVar2);
    puVar5 = (undefined8 *)FUN_140475550(param_1,0x10,1);
    *puVar5 = uVar4;
    puVar5[1] = lVar2;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"no world available");
}

