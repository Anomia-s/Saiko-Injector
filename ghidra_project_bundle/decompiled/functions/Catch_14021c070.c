/**
 * Function: Catch@14021c070
 * Address:  14021c070
 * Signature: undefined Catch@14021c070(void)
 * Body size: 136 bytes
 */


undefined8 Catch_14021c070(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_14151e360;
  if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 0x220) + 8))();
    *(undefined8 *)(param_2 + 0x130) = uVar2;
    index_out_of_bounds(lVar1,&PTR_s__opt_actions_runner__work_Platfo_140df4e98,param_2 + 0x130);
    if (DAT_14151e360 == 0) goto LAB_14021c0da;
  }
  FUN_140196ac0(DAT_14151e360,100);
LAB_14021c0da:
  *(undefined4 *)(param_2 + 0x20c) = 0;
  return 0x14021bd2f;
}

