/**
 * Function: move_down_one_line
 * Address:  14074d370
 * Signature: undefined move_down_one_line(void)
 * Body size: 290 bytes
 */


undefined8 * move_down_one_line(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = param_2;
  local_38 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_14074b900(param_2,0x818,0,0);
  uVar2 = 0x41;
  do {
    FUN_14074b900(*param_1,0x816,uVar2 | 0x20000,0x87c);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x5b);
  for (uVar2 = 0; uVar2 < 0x62; uVar2 = uVar2 + 1) {
    local_40 = FUN_140b65d30(0x28);
    uVar1 = (ulonglong)uVar2;
    FUN_14081dff0(local_40,*param_1,(&DAT_14123dc60)[uVar1 * 6],(&DAT_14123dc64)[uVar1 * 6],
                  (&DAT_14123dc68)[uVar1 * 6],(&PTR_s_Move_down_one_line_14123dc70)[uVar1 * 3]);
    local_48 = local_40;
    FUN_14027aff0(local_38,param_1[3],&local_48);
    if (((int *)*local_38 == (int *)0x0) || (1 < *(int *)*local_38)) {
      FUN_140096f80(local_38,0,0,0);
    }
  }
  return param_1;
}

