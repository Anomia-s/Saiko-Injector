/**
 * Function: expected_expression_after_but_got_instead
 * Address:  14078ea60
 * Signature: undefined expected_expression_after_but_got_instead(void)
 * Body size: 430 bytes
 */


void expected_expression_after_but_got_instead(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  local_38 = unexpected_did_you_mean_not(param_1,0);
  lVar2 = *param_2;
  puVar3 = *(undefined8 **)(lVar2 + 8);
  if (puVar3 == *(undefined8 **)(lVar2 + 0x10)) {
    FUN_140029790(lVar2,puVar3,&local_38);
    param_2[2] = param_2[2] + 1;
    iVar1 = *(int *)(param_1 + 0x80);
  }
  else {
    *puVar3 = local_38;
    *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 8;
    param_2[2] = param_2[2] + 1;
    iVar1 = *(int *)(param_1 + 0x80);
  }
  if (iVar1 == 0x2c) {
    puVar3 = (undefined8 *)(param_1 + 0x84);
    if (param_3 == (longlong *)0x0) {
      do {
        while( true ) {
          FUN_140787100(param_1);
          if (*(int *)(param_1 + 0x80) == 0x29) goto LAB_14078ebe9;
          local_38 = unexpected_did_you_mean_not(param_1,0);
          lVar2 = *param_2;
          puVar4 = *(undefined8 **)(lVar2 + 8);
          if (puVar4 != *(undefined8 **)(lVar2 + 0x10)) break;
          FUN_140029790(lVar2,puVar4,&local_38);
          param_2[2] = param_2[2] + 1;
          if (*(int *)(param_1 + 0x80) != 0x2c) goto LAB_14078ebfb;
        }
        *puVar4 = local_38;
        *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 8;
        param_2[2] = param_2[2] + 1;
      } while (*(int *)(param_1 + 0x80) == 0x2c);
    }
    else {
      do {
        while( true ) {
          lVar2 = *param_3;
          puVar4 = *(undefined8 **)(lVar2 + 8);
          if (puVar4 == *(undefined8 **)(lVar2 + 0x10)) {
            FUN_140029790(lVar2,puVar4,puVar3);
          }
          else {
            *puVar4 = *puVar3;
            *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 8;
          }
          param_3[2] = param_3[2] + 1;
          FUN_140787100(param_1);
          if (*(int *)(param_1 + 0x80) == 0x29) goto LAB_14078ebe9;
          local_38 = unexpected_did_you_mean_not(param_1,0);
          lVar2 = *param_2;
          puVar4 = *(undefined8 **)(lVar2 + 8);
          if (puVar4 == *(undefined8 **)(lVar2 + 0x10)) break;
          *puVar4 = local_38;
          *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 8;
          param_2[2] = param_2[2] + 1;
          if (*(int *)(param_1 + 0x80) != 0x2c) goto LAB_14078ebfb;
        }
        FUN_140029790(lVar2,puVar4,&local_38);
        param_2[2] = param_2[2] + 1;
      } while (*(int *)(param_1 + 0x80) == 0x2c);
    }
  }
LAB_14078ebfb:
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_58);
LAB_14078ebe9:
  FUN_14078f3b0(param_1,puVar3,"Expected expression after \',\' but got \')\' instead");
  goto LAB_14078ebfb;
}

