/**
 * Function: routing_domain_identifiers
 * Address:  140be6ac0
 * Signature: undefined routing_domain_identifiers(void)
 * Body size: 123 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
routing_domain_identifiers
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_140be7220(param_3,*param_2,param_4,"Autonomous System Numbers");
  if (iVar1 != 0) {
    iVar1 = FUN_140be7220(param_3,param_2[1],param_4,"Routing Domain Identifiers");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

