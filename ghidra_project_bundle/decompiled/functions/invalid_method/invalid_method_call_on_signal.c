/**
 * Function: invalid_method_call_on_signal
 * Address:  1406b43d0
 * Signature: undefined invalid_method_call_on_signal(void)
 * Body size: 397 bytes
 */


undefined8 invalid_method_call_on_signal(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  char *_Str1;
  longlong lVar5;
  undefined1 auStack_58 [32];
  int local_38;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)FUN_140473e90(param_1,1);
  if (puVar4 != (undefined8 *)0x0) {
    iVar2 = FUN_140473f10(param_1,1);
    if (iVar2 == 5) {
      _Str1 = (char *)FUN_140473cb0(param_1,0);
      if (_Str1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(param_1,"Invalid method call on Signal");
      }
      iVar2 = strcmp(_Str1,"Connect");
      if (iVar2 == 0) {
        FUN_1406b76d0(param_1,2,7);
        uVar3 = FUN_140475670(param_1,2);
        lVar5 = FUN_1400ba6e0(puVar4[1],*puVar4,DAT_1416b62d0,0x18);
        local_28 = *(undefined2 *)(puVar4 + 2);
        puVar1 = *(undefined8 **)(lVar5 + 8);
        uStack_24 = uVar3;
        if (puVar1 == *(undefined8 **)(lVar5 + 0x10)) {
          FUN_140029790(lVar5,puVar1,&local_28);
        }
        else {
          *puVar1 = CONCAT44(uVar3,CONCAT22(uStack_26,local_28));
          *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 8;
        }
        FUN_1400ba7b0(puVar4[1],*puVar4,DAT_1416b62d0);
      }
      else {
        iVar2 = strcmp(_Str1,"Emit");
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1406b7390(param_1,"\'%s\' is not a valid method of Signal",_Str1);
        }
        local_38 = FUN_1404731e0(param_1);
        local_38 = local_38 + -1;
        FUN_1406b41a0(param_1,puVar4[1],*puVar4,*(undefined2 *)(puVar4 + 2));
      }
      if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0(local_20 ^ (ulonglong)auStack_58);
    }
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s_expected_got_s(param_1,1,"Signal");
}

