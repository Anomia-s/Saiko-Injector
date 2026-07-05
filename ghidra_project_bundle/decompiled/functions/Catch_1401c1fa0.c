/**
 * Function: Catch@1401c1fa0
 * Address:  1401c1fa0
 * Signature: undefined Catch@1401c1fa0(void)
 * Body size: 101 bytes
 */


undefined8 Catch_1401c1fa0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_14151e360;
  if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 0x50) + 8))();
    *(undefined8 *)(param_2 + 0x40) = uVar2;
    index_out_of_bounds(lVar1,&PTR_s__opt_actions_runner__work_Platfo_140df0830,
                        *(undefined8 *)(param_2 + 0x38),param_2 + 0x40);
  }
  return 0x1401c1ee4;
}

