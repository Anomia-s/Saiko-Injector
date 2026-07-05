/**
 * Function: s_is_not_a_valid_property_of_instance
 * Address:  1406b4680
 * Signature: undefined s_is_not_a_valid_property_of_instance(void)
 * Body size: 344 bytes
 */


undefined8 s_is_not_a_valid_property_of_instance(undefined8 param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  char *_Str2;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  puVar5 = (undefined8 *)FUN_140473e90(param_1,1);
  if (puVar5 != (undefined8 *)0x0) {
    iVar4 = FUN_140473f10(param_1,1);
    if (iVar4 == 1) {
      _Str2 = (char *)FUN_1406b7610(param_1,2,0);
      cVar3 = FUN_1400b8670(puVar5[1],*puVar5);
      if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(param_1,"Cannot modify a destroyed Instance");
      }
      uVar8 = 0;
      uVar7 = 0x12;
      do {
        while( true ) {
          if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1406b7390(param_1,"\'%s\' is not a valid property of Instance",_Str2);
          }
          uVar6 = uVar7 - uVar8 >> 1;
          uVar1 = uVar8 + uVar6;
          iVar4 = strcmp((&PTR_s_Anchored_141218fd0)[uVar1 * 4],_Str2);
          if (-1 < iVar4) break;
          uVar8 = uVar6 + 1 + uVar8;
          if (iVar4 == 0) goto LAB_1406b4736;
        }
        uVar7 = uVar1;
      } while (iVar4 != 0);
LAB_1406b4736:
      pcVar2 = (code *)(&PTR_FUN_141218fe0)[uVar1 * 4];
      if (pcVar2 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(param_1,"\'%s\' is read-only",_Str2);
      }
      if ((&UNK_141218fe8)[uVar1 * 0x20] == '\x01') {
        cVar3 = luduvo_is_server(param_1);
        if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1406b7390(param_1,"\'%s\' can only be set from the server",_Str2);
        }
      }
      (*pcVar2)(param_1,puVar5[1],*puVar5,3);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s_expected_got_s(param_1,1,"Instance");
}

