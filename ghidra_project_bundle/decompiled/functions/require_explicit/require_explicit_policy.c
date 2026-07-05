/**
 * Function: require_explicit_policy
 * Address:  140c64c80
 * Signature: undefined require_explicit_policy(void)
 * Body size: 74 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 require_explicit_policy(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_140bc6770("Require Explicit Policy",*param_2,local_res18);
  FUN_140bc6770("Inhibit Policy Mapping",param_2[1],local_res18);
  return local_res18[0];
}

