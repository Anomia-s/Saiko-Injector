/**
 * Function: Catch@14021f520
 * Address:  14021f520
 * Signature: undefined Catch@14021f520(void)
 * Body size: 156 bytes
 */


undefined * Catch_14021f520(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = DAT_14151e360;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
    uVar3 = (**(code **)(**(longlong **)(param_2 + 0x60) + 8))();
    *(undefined8 *)(param_2 + 0x28) = uVar3;
    index_out_of_bounds(lVar2,&PTR_s__opt_actions_runner__work_Platfo_140df4cb0,param_2 + 0x28);
    if (DAT_14151e360 == 0) goto LAB_14021f586;
  }
  FUN_140196ac0(DAT_14151e360,100);
LAB_14021f586:
  *(undefined4 *)(lVar1 + 0xa8) = 0xffffffff;
  *(undefined1 *)(lVar1 + 0xba) = 1;
  (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1e0))();
  return &DAT_14021f496;
}

