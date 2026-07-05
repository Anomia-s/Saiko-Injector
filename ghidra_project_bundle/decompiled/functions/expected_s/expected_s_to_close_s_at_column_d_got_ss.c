/**
 * Function: expected_s_to_close_s_at_column_d_got_ss
 * Address:  1407999b0
 * Signature: undefined expected_s_to_close_s_at_column_d_got_ss(void)
 * Body size: 650 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void expected_s_to_close_s_at_column_d_got_ss
               (longlong param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 *******local_c8 [3];
  ulonglong local_b0;
  undefined8 *******local_a8 [3];
  ulonglong local_90;
  undefined8 *******local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_88 = (undefined8 *******)0x0;
  uStack_80 = 0;
  FUN_14079fd90(local_a8,&local_88,param_2);
  the_beginning_of_an_interpolated_string(local_a8,local_c8);
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_14079fd90(&local_88,&local_d8,*param_3);
  pppppppuVar5 = local_a8;
  the_beginning_of_an_interpolated_string(&local_88,pppppppuVar5);
  if (*(int *)(param_1 + 0x84) == param_3[1]) {
    the_beginning_of_an_interpolated_string(param_1 + 0x80,&local_88);
    puVar3 = &DAT_1413a2ad6;
    if (param_4 != (undefined1 *)0x0) {
      puVar3 = param_4;
    }
    pppppppuVar5 = &local_88;
    if (0xf < local_70) {
      pppppppuVar5 = local_88;
    }
    pppppppuVar1 = local_a8[0];
    if (local_90 < 0x10) {
      pppppppuVar1 = local_a8;
    }
    pppppppuVar6 = local_c8[0];
    if (local_b0 < 0x10) {
      pppppppuVar6 = local_c8;
    }
    FUN_14078f3b0(param_1,param_1 + 0x84,"Expected %s (to close %s at column %d), got %s%s",
                  pppppppuVar6,pppppppuVar1,param_3[2] + 1,pppppppuVar5,puVar3);
  }
  else {
    pppppppuVar1 = &local_88;
    the_beginning_of_an_interpolated_string(param_1 + 0x80,pppppppuVar1);
    puVar3 = &DAT_1413a2ad6;
    if (param_4 != (undefined1 *)0x0) {
      puVar3 = param_4;
    }
    if (local_70 < 0x10) {
      iVar2 = param_3[1];
    }
    else {
      iVar2 = param_3[1];
      pppppppuVar1 = local_88;
    }
    if (0xf < local_90) {
      pppppppuVar5 = local_a8[0];
    }
    pppppppuVar6 = local_c8;
    if (0xf < local_b0) {
      pppppppuVar6 = local_c8[0];
    }
    FUN_14078f3b0(param_1,param_1 + 0x84,"Expected %s (to close %s at line %d), got %s%s",
                  pppppppuVar6,pppppppuVar5,iVar2 + 1,pppppppuVar1,puVar3);
  }
  if (0xf < local_70) {
    uVar4 = local_70 + 1;
    pppppppuVar5 = local_88;
    if (0xfff < uVar4) {
      pppppppuVar5 = (undefined8 *******)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar5)))
      goto LAB_140799c21;
      uVar4 = local_70 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar5,uVar4);
  }
  if (0xf < local_90) {
    uVar4 = local_90 + 1;
    pppppppuVar5 = local_a8[0];
    if (0xfff < uVar4) {
      pppppppuVar5 = (undefined8 *******)local_a8[0][-1];
      if (0x1f < (ulonglong)((longlong)local_a8[0] + (-8 - (longlong)pppppppuVar5)))
      goto LAB_140799c21;
      uVar4 = local_90 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar5,uVar4);
  }
  if (0xf < local_b0) {
    uVar4 = local_b0 + 1;
    pppppppuVar5 = local_c8[0];
    if (0xfff < uVar4) {
      pppppppuVar5 = (undefined8 *******)local_c8[0][-1];
      if (0x1f < (ulonglong)((longlong)local_c8[0] + (-8 - (longlong)pppppppuVar5))) {
LAB_140799c21:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = local_b0 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar5,uVar4);
  }
  return;
}

