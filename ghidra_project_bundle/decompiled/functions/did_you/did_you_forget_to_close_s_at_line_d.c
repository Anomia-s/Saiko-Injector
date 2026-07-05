/**
 * Function: did_you_forget_to_close_s_at_line_d
 * Address:  14079c4b0
 * Signature: undefined did_you_forget_to_close_s_at_line_d(void)
 * Body size: 396 bytes
 */


bool did_you_forget_to_close_s_at_line_d(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [3];
  ulonglong local_60;
  int local_58;
  undefined4 uStack_54;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((*(int *)(param_1 + 0x138) == 0) || (*(uint *)(param_1 + 0x13c) <= *(uint *)(param_3 + 4))) {
    expected_s_to_close_s_at_column_d_got_ss(param_1,param_2,param_3,0);
  }
  else {
    local_88 = 0;
    uStack_80 = 0;
    FUN_14079fd90(local_78,&local_88);
    piVar4 = &local_58;
    the_beginning_of_an_interpolated_string(local_78,piVar4);
    if (0xf < local_40) {
      piVar4 = (int *)CONCAT44(uStack_54,local_58);
    }
    FUN_14079f4f0(local_78,"; did you forget to close %s at line %d?",piVar4,
                  *(int *)(param_1 + 0x13c) + 1);
    expected_s_to_close_s_at_column_d_got_ss(param_1,param_2,param_3);
    if (0xf < local_60) {
      uVar2 = local_60 + 1;
      lVar3 = local_78[0];
      if (0xfff < uVar2) {
        lVar3 = *(longlong *)(local_78[0] + -8);
        if (0x1f < (ulonglong)((local_78[0] + -8) - lVar3)) goto LAB_14079c623;
        uVar2 = local_60 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar3,uVar2);
    }
    if (0xf < local_40) {
      lVar1 = CONCAT44(uStack_54,local_58);
      uVar2 = local_40 + 1;
      lVar3 = lVar1;
      if (0xfff < uVar2) {
        lVar3 = *(longlong *)(lVar1 + -8);
        if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) {
LAB_14079c623:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar2 = local_40 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar3,uVar2);
    }
  }
  FUN_1407a1770(param_1 + 0x60,&local_58);
  if (local_58 == param_2) {
    FUN_140787100(param_1);
    FUN_140787100(param_1);
  }
  return local_58 == param_2;
}

