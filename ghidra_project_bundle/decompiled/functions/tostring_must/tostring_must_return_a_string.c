/**
 * Function: tostring_must_return_a_string
 * Address:  1406b8670
 * Signature: undefined tostring_must_return_a_string(void)
 * Body size: 508 bytes
 */


void tostring_must_return_a_string(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  float *pfVar6;
  undefined2 *puVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [144];
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  iVar1 = FUN_1406b7a80(param_1,param_2,"__tostring");
  if (iVar1 != 0) {
    lVar3 = FUN_140473b70(param_1,0xffffffff,param_3);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"\'__tostring\' must return a string");
    }
    goto LAB_1406b8838;
  }
  uVar2 = FUN_140473550(param_1,param_2 & 0xffffffff);
  switch(uVar2) {
  case 0:
    FUN_1404741b0(param_1,"nil",3);
    break;
  case 1:
    iVar1 = FUN_140473af0(param_1,param_2 & 0xffffffff);
    pcVar5 = "true";
    if (iVar1 == 0) {
      pcVar5 = "false";
    }
    FUN_140474220(param_1,pcVar5);
    break;
  default:
    uVar4 = FUN_140474080(param_1,param_2 & 0xffffffff);
    uVar4 = FUN_140475640(param_1,uVar4);
    lVar3 = FUN_140472e80(param_1,param_2 & 0xffffffff);
    if (lVar3 == 0) {
      pcVar5 = "no value";
    }
    else {
      pcVar5 = (char *)FUN_1406bbe50(param_1,lVar3);
    }
    FUN_140474310(param_1,"%s: 0x%016llx",pcVar5,uVar4);
    break;
  case 3:
    uVar4 = FUN_140473880(param_1,param_2 & 0xffffffff,0);
    lVar3 = FUN_1407847e0(local_b8,uVar4);
    lVar3 = lVar3 - (longlong)local_b8;
    goto LAB_1406b87f9;
  case 4:
    pfVar6 = (float *)FUN_140473d30(param_1,param_2 & 0xffffffff);
    puVar7 = (undefined2 *)FUN_1407847e0(local_b8,(double)*pfVar6);
    *puVar7 = 0x202c;
    puVar7 = (undefined2 *)FUN_1407847e0(puVar7 + 1,(double)pfVar6[1]);
    *puVar7 = 0x202c;
    lVar3 = FUN_1407847e0(puVar7 + 1,(double)pfVar6[2]);
    lVar3 = lVar3 - (longlong)local_b8;
LAB_1406b87f9:
    FUN_1404741b0(param_1,local_b8,lVar3);
    break;
  case 5:
    FUN_1404734c0(param_1,param_2 & 0xffffffff);
  }
  FUN_140473b70(param_1,0xffffffff,param_3);
LAB_1406b8838:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_d8);
}

