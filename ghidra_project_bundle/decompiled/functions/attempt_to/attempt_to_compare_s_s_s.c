/**
 * Function: attempt_to_compare_s_s_s
 * Address:  1406c1160
 * Signature: noreturn undefined attempt_to_compare_s_s_s(void)
 * Body size: 95 bytes
 */


void attempt_to_compare_s_s_s(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar1 = FUN_1406bbe50();
  uVar2 = FUN_1406bbe50(param_1,param_3);
  pcVar3 = "==";
  if (param_4 == 0x11) {
    pcVar3 = "<=";
  }
  pcVar4 = "<";
  if (param_4 != 0x10) {
    pcVar4 = pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406c1000(param_1,"attempt to compare %s %s %s",uVar1,pcVar4,uVar2);
}

