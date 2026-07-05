/**
 * Function: attempt_to_perform_arithmetic_s_on_s
 * Address:  1406c10f0
 * Signature: noreturn undefined attempt_to_perform_arithmetic_s_on_s(void)
 * Body size: 101 bytes
 */


void attempt_to_perform_arithmetic_s_on_s
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406bbe50();
  lVar2 = FUN_1406bbe50(param_1,param_3);
  if (lVar1 == lVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1406c1000(param_1,"attempt to perform arithmetic (%s) on %s",
                  (&PTR_s___index_1412196a0)[param_4] + 2,lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406c1000(param_1,"attempt to perform arithmetic (%s) on %s and %s",
                (&PTR_s___index_1412196a0)[param_4] + 2,lVar1,lVar2);
}

