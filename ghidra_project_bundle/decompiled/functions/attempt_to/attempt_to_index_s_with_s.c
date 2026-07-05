/**
 * Function: attempt_to_index_s_with_s
 * Address:  1406c11c0
 * Signature: undefined attempt_to_index_s_with_s(void)
 * Body size: 96 bytes
 */


void attempt_to_index_s_with_s(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_1406bbe50();
  uVar3 = FUN_1406bbe50(param_1,param_3);
  if (((*(int *)((longlong)param_3 + 0xc) == 5) && (lVar1 = *param_3, lVar1 != 0)) &&
     (*(uint *)(lVar1 + 0x14) < 0x41)) {
                    /* WARNING: Subroutine does not return */
    FUN_1406c1000(param_1,"attempt to index %s with \'%s\'",uVar2,lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406c1000(param_1,"attempt to index %s with %s",uVar2,uVar3);
}

