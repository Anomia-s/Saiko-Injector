/**
 * Function: invalid_value_s_at_index_d_in_table_for_conca
 * Address:  1406aa180
 * Signature: undefined invalid_value_s_at_index_d_in_table_for_conca(void)
 * Body size: 152 bytes
 */


void invalid_value_s_at_index_d_in_table_for_conca
               (undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_4 != 0) && (param_3 - 1U < *(uint *)(param_4 + 8))) {
    lVar3 = (longlong)(int)(param_3 - 1U) * 0x10;
    if (*(int *)(*(longlong *)(param_4 + 0x18) + 0xc + lVar3) == 5) {
      lVar3 = *(longlong *)(*(longlong *)(param_4 + 0x18) + lVar3);
      buffer_too_large(param_2,lVar3 + 0x18,*(undefined4 *)(lVar3 + 0x14));
      return;
    }
  }
  iVar1 = FUN_140474830(param_1,1,param_3);
  if ((iVar1 != 3) && (iVar1 != 5)) {
    uVar2 = FUN_1406b7d90(param_1,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"invalid value (%s) at index %d in table for \'concat\'",uVar2,param_3);
  }
  buffer_too_large(param_2);
  return;
}

