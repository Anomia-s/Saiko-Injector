/**
 * Function: 02lld_02lld_02lld
 * Address:  140c6aa10
 * Signature: undefined 02lld_02lld_02lld(void)
 * Body size: 193 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool _2lld_02lld_02lld(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res10 = 0;
  if ((*param_2 == 0) || (iVar1 = FUN_140bd8560(&local_10), iVar1 == 0)) {
    return false;
  }
  if ((param_2[1] != 0) && (iVar1 = FUN_140bd8560(&local_18), iVar1 == 0)) {
    return false;
  }
  if ((param_2[1] != 0) && (iVar1 = FUN_140bd8560(&local_res10,param_2[2]), iVar1 == 0)) {
    return false;
  }
  iVar1 = FUN_140c078a0(param_3,"%02lld:%02lld:%02lld",local_10,local_18,local_res10);
  return 0 < iVar1;
}

