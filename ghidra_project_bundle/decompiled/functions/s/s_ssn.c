/**
 * Function: s_ssn
 * Address:  140caf3c0
 * Signature: undefined s_ssn(void)
 * Body size: 76 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void s_ssn(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[1] != 0) {
    FUN_140c078a0(param_2,"[%s] %s=%s\n",*param_1,param_1[1],param_1[2]);
    return;
  }
  FUN_140c078a0(param_2,"[[%s]]\n",*param_1);
  return;
}

