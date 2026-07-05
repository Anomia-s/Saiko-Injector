/**
 * Function: s_is_not_a_valid_method_of_signal
 * Address:  14047a2f0
 * Signature: undefined s_is_not_a_valid_method_of_signal(void)
 * Body size: 242 bytes
 */


undefined8 s_is_not_a_valid_method_of_signal(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  char *_Str1;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar4 = (undefined2 *)FUN_140473e90(param_1,1);
  if (puVar4 != (undefined2 *)0x0) {
    iVar2 = FUN_140473f10(param_1,1);
    if (iVar2 == 2) {
      _Str1 = (char *)FUN_140473cb0(param_1,0);
      if (_Str1 == (char *)0x0) {
        _Str1 = "?";
      }
      else {
        iVar2 = strcmp(_Str1,"Connect");
        if (iVar2 == 0) {
          FUN_1406b76d0(param_1,2,7);
          uVar3 = FUN_140475670(param_1,2);
          lVar5 = FUN_14005c980(*(undefined8 *)(puVar4 + 4),*puVar4);
          uVar6 = (ulonglong)*(byte *)(lVar5 + 0x40);
          if (uVar6 < 8) {
            uVar1 = *(undefined1 *)(puVar4 + 8);
            *(byte *)(lVar5 + 0x40) = *(byte *)(lVar5 + 0x40) + 1;
            *(undefined1 *)(lVar5 + uVar6 * 8) = uVar1;
            *(undefined4 *)(lVar5 + 4 + uVar6 * 8) = uVar3;
            return 0;
          }
          FUN_140475770(param_1,uVar3);
                    /* WARNING: Subroutine does not return */
          FUN_1406b7390(param_1,"too many event connections on this instance");
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"\'%s\' is not a valid method of Signal",_Str1);
    }
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s_expected_got_s(param_1,1,"Signal");
}

