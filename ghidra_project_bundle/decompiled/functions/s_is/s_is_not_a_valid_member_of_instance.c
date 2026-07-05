/**
 * Function: s_is_not_a_valid_member_of_instance
 * Address:  1406b4560
 * Signature: undefined s_is_not_a_valid_member_of_instance(void)
 * Body size: 271 bytes
 */


void s_is_not_a_valid_member_of_instance(undefined8 param_1)

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
      _Str2 = (char *)FUN_1406b7610(param_1,2,0);
      cVar2 = FUN_1400b8670(puVar4[1],*puVar4);
      if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(param_1,"Cannot index a destroyed Instance");
      }
      uVar6 = 0;
      uVar7 = 0x12;
      do {
        while( true ) {
          if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1406b7390(param_1,"\'%s\' is not a valid member of Instance",_Str2);
          }
          uVar5 = uVar7 - uVar6 >> 1;
          uVar1 = uVar6 + uVar5;
          iVar3 = strcmp((&PTR_s_Anchored_141218fd0)[uVar1 * 4],_Str2);
          if (-1 < iVar3) break;
          uVar6 = uVar5 + 1 + uVar6;
          if (iVar3 == 0) goto LAB_1406b4616;
        }
        uVar7 = uVar1;
      } while (iVar3 != 0);
LAB_1406b4616:
                    /* WARNING: Could not recover jumptable at 0x0001406b4635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_FUN_141218fd8)[uVar1 * 4])(param_1,puVar4[1],*puVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s_expected_got_s(param_1,1,"Instance");
}

