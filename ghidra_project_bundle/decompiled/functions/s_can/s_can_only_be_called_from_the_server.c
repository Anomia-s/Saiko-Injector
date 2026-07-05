/**
 * Function: s_can_only_be_called_from_the_server
 * Address:  1406b47e0
 * Signature: undefined s_can_only_be_called_from_the_server(void)
 * Body size: 323 bytes
 */


void s_can_only_be_called_from_the_server(undefined8 param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  char *_Str2;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar4 = (undefined8 *)FUN_140473e90(param_1,1);
  if (puVar4 != (undefined8 *)0x0) {
    iVar3 = FUN_140473f10(param_1,1);
    if (iVar3 == 1) {
      _Str2 = (char *)FUN_140473cb0(param_1,0);
      if (_Str2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(param_1,"Invalid method call on Instance");
      }
      cVar2 = FUN_1400b8670(puVar4[1],*puVar4);
      if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(param_1,"Cannot call method on a destroyed Instance");
      }
      uVar7 = 0;
      uVar6 = 0xe;
      do {
        while( true ) {
          if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1406b7390(param_1,"\'%s\' is not a valid method of Instance",_Str2);
          }
          uVar5 = uVar6 - uVar7 >> 1;
          uVar1 = uVar7 + uVar5;
          iVar3 = strcmp((&PTR_s_Clone_141219210)[uVar1 * 3],_Str2);
          if (-1 < iVar3) break;
          uVar7 = uVar5 + 1 + uVar7;
          if (iVar3 == 0) goto LAB_1406b488f;
        }
        uVar6 = uVar1;
      } while (iVar3 != 0);
LAB_1406b488f:
      if ((&UNK_141219220)[uVar1 * 0x18] == '\x01') {
        cVar2 = luduvo_is_server(param_1);
        if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1406b7390(param_1,"\'%s\' can only be called from the server",_Str2);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001406b48c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_FUN_141219218)[uVar1 * 3])(param_1,puVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s_expected_got_s(param_1,1,"Instance");
}

