/**
 * Function: expected_value_for_initializer_element
 * Address:  14076a900
 * Signature: undefined expected_value_for_initializer_element(void)
 * Body size: 240 bytes
 */


undefined8
expected_value_for_initializer_element
          (undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = FUN_140106180((Decoration<__int64> *)(param_2 + 0x20));
  uVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(param_2 + 0x20));
  if (0 < (int)uVar3) {
    uVar6 = (ulonglong)uVar3;
    do {
      piVar1 = *(int **)(lVar5 + 8);
      if (*piVar1 == 0) {
        uVar2 = *(undefined8 *)(piVar1 + 2);
        iVar4 = initializer_of_type_s_writes_past_end_of_targ(param_1,param_2,lVar5,uVar2,param_4);
        if (iVar4 != 0) {
          return 0xffffffff;
        }
        iVar4 = FUN_140762c30(*param_1,uVar2,*(longlong *)(lVar5 + 0x10) + param_3,
                              *(undefined8 *)(piVar1 + 8));
        if (iVar4 != 0) {
          return 0xffffffff;
        }
      }
      else {
        if (*piVar1 != 2) {
          FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                        "expected value for initializer element");
          return 0xffffffff;
        }
        iVar4 = expected_value_for_initializer_element(param_1,piVar1,param_3,param_4);
        if (iVar4 != 0) {
          return 0xffffffff;
        }
      }
      lVar5 = lVar5 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return 0;
}

