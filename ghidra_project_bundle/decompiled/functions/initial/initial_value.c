/**
 * Function: initial_value
 * Address:  1406be340
 * Signature: undefined initial_value(void)
 * Body size: 301 bytes
 */


void initial_value(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  if (*(int *)((longlong)param_4 + 0xc) == 3) {
LAB_1406be3a2:
    if (*(int *)((longlong)param_2 + 0xc) != 3) {
      if (*(int *)((longlong)param_2 + 0xc) == 5) {
        iVar1 = FUN_1406b8a80(*param_2 + 0x18,&local_30);
        if (iVar1 != 0) {
          *param_2 = local_30;
          *(undefined4 *)((longlong)param_2 + 0xc) = 3;
          goto LAB_1406be3d9;
        }
      }
      goto LAB_1406be43c;
    }
LAB_1406be3d9:
    if (*(int *)((longlong)param_3 + 0xc) == 3) {
LAB_1406be40c:
      if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_58)) {
        return;
      }
      goto LAB_1406be460;
    }
    if (*(int *)((longlong)param_3 + 0xc) == 5) {
      iVar1 = FUN_1406b8a80(*param_3 + 0x18,&local_30);
      if (iVar1 != 0) {
        *param_3 = local_30;
        *(undefined4 *)((longlong)param_3 + 0xc) = 3;
        goto LAB_1406be40c;
      }
    }
  }
  else {
    if (*(int *)((longlong)param_4 + 0xc) == 5) {
      iVar1 = FUN_1406b8a80(*param_4 + 0x18,&local_30);
      if (iVar1 != 0) {
        *param_4 = local_30;
        *(undefined4 *)((longlong)param_4 + 0xc) = 3;
        goto LAB_1406be3a2;
      }
    }
    invalid_for_s_number_expected_got_s(param_1,param_4,"initial value");
LAB_1406be43c:
    invalid_for_s_number_expected_got_s(param_1,param_2,"limit");
  }
  invalid_for_s_number_expected_got_s(param_1,param_3,&DAT_14133ee0d);
LAB_1406be460:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_58);
}

