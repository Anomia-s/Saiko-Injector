/**
 * Function: maximum_expression_nesting_depth_exceeded
 * Address:  140763380
 * Signature: undefined maximum_expression_nesting_depth_exceeded(void)
 * Body size: 273 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong maximum_expression_nesting_depth_exceeded
                   (undefined8 *param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_1078 [32];
  longlong *local_1058;
  undefined1 local_1048 [8];
  undefined1 local_1040 [4096];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_1078;
  if (*(short *)((longlong)param_1 + 0x36) < 0x40) {
    *(short *)((longlong)param_1 + 0x36) = *(short *)((longlong)param_1 + 0x36) + 1;
    memset(local_1048,0,0x1008);
    local_40 = local_1040;
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x32);
    *(undefined1 *)((longlong)param_1 + 0x32) = 1;
    local_1058 = param_4;
    lVar2 = expected_entity_statement_after_new(param_1,param_2,local_1048,param_3);
    *(undefined1 *)((longlong)param_1 + 0x32) = uVar1;
    *(short *)((longlong)param_1 + 0x36) = *(short *)((longlong)param_1 + 0x36) + -1;
    if ((param_4 != (longlong *)0x0 && lVar2 == 0) && (*param_4 != 0)) {
      ecs_expr_initializer_t(param_1[8]);
      *param_4 = 0;
    }
  }
  else {
    FUN_140399a50(*param_1,param_1[1],param_2 - param_1[1],
                  "maximum expression nesting depth exceeded");
    lVar2 = 0;
  }
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_1078)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_1078);
}

