/**
 * Function: sprivilege_policy_identifier_sn
 * Address:  140c6a410
 * Signature: undefined sprivilege_policy_identifier_sn(void)
 * Body size: 524 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void sprivilege_policy_identifier_sn
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140c6a421;
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  iVar3 = FUN_140b96640(local_d8,0x50,*param_2,1);
  if (0 < iVar3) {
    local_e8 = local_d8;
    iVar3 = FUN_140c078a0(param_3,"%*sIdentifier: %s\n",param_4,&DAT_1413a2ad6);
    if ((0 < iVar3) &&
       (iVar3 = FUN_140c078a0(param_3,"%*sSyntax:\n",param_4,&DAT_1413a2ad6), 0 < iVar3)) {
      iVar3 = param_4 + 4;
      local_e0 = *(undefined8 *)((undefined4 *)param_2[1] + 2);
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,*(undefined4 *)param_2[1]);
      iVar4 = FUN_140c078a0(param_3,"%*s%.*s",iVar3,&DAT_1413a2ad6);
      if ((0 < iVar4) && (iVar4 = FUN_140b73bf0(param_3,&DAT_1413a7284), 0 < iVar4)) {
        puVar1 = (undefined4 *)param_2[2];
        if (puVar1 != (undefined4 *)0x0) {
          local_e0 = *(undefined8 *)(puVar1 + 2);
          local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,*puVar1);
          iVar4 = FUN_140c078a0(param_3,"%*sName: %.*s\n",param_4,&DAT_1413a2ad6);
          if (iVar4 < 1) goto LAB_140c6a60c;
        }
        puVar1 = (undefined4 *)param_2[3];
        if (puVar1 != (undefined4 *)0x0) {
          local_e0 = *(undefined8 *)(puVar1 + 2);
          local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,*puVar1);
          iVar4 = FUN_140c078a0(param_3,"%*sDescription: %.*s\n",param_4,&DAT_1413a2ad6);
          if (iVar4 < 1) goto LAB_140c6a60c;
        }
        iVar4 = FUN_140c078a0(param_3,"%*sDomination Rule:\n",param_4,&DAT_1413a2ad6);
        if (0 < iVar4) {
          puVar2 = (undefined8 *)param_2[4];
          iVar4 = FUN_140b96640(local_88,0x50,*puVar2,1);
          if (0 < iVar4) {
            local_e8 = local_88;
            iVar4 = FUN_140c078a0(param_3,"%*sPrivilege Policy Identifier: %s\n",iVar3,
                                  &DAT_1413a2ad6);
            if ((0 < iVar4) &&
               (iVar3 = FUN_140c078a0(param_3,"%*sPrivilege Policy Syntax:\n",iVar3,&DAT_1413a2ad6),
               0 < iVar3)) {
              shash_value(param_1,puVar2[1],param_3,param_4 + 8);
            }
          }
        }
      }
    }
  }
LAB_140c6a60c:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_108);
}

