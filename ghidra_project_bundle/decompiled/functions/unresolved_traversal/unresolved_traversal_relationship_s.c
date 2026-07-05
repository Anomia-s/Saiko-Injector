/**
 * Function: unresolved_traversal_relationship_s
 * Address:  1403b1140
 * Signature: undefined unresolved_traversal_relationship_s(void)
 * Body size: 676 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong unresolved_traversal_relationship_s
                   (undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 auStack_1098 [32];
  undefined8 local_1078;
  undefined4 local_1068;
  undefined4 uStack_1064;
  int iStack_1060;
  int iStack_105c;
  int local_1058 [2];
  undefined8 local_1050;
  int local_1048 [1022];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_1098;
  memset(local_1058,0,0x1008);
  local_1058[0] = 1;
  local_50 = &local_1050;
  lVar2 = missing_digits_in_number_literal(param_1,param_3,&local_1050,0);
  if (lVar2 != 0) {
    while (lVar7 = local_1050, local_1048[0] == 0x70) {
      pcVar8 = (char *)*local_50;
      iVar1 = strcmp(pcVar8,"self");
      uVar6 = 0x8000000000000000;
      if ((iVar1 != 0) &&
         (((*pcVar8 != 'u' || (pcVar8[1] != 'p')) || (uVar6 = 0x4000000000000000, pcVar8[2] != '\0')
          ))) {
        iVar1 = strcmp(pcVar8,"cascade");
        uVar6 = 0x1000000000000000;
        if (iVar1 != 0) {
          iVar1 = strcmp(pcVar8,"desc");
          uVar6 = (ulonglong)(iVar1 == 0) << 0x3b;
        }
      }
      *param_2 = *param_2 | uVar6;
      uVar6 = param_1[3];
      lVar3 = missing_digits_in_number_literal(param_1,lVar2,&local_1068,1);
      if (lVar3 == 0) {
        lVar7 = missing_digits_in_number_literal(param_1,lVar2,&local_1068,0);
        if (lVar7 != 0) {
          lVar7 = CONCAT44(uStack_1064,local_1068);
          local_1048[0] = iStack_1060;
          break;
        }
        goto LAB_1403b13a7;
      }
      lVar7 = (longlong)local_1058[0];
      local_1058[0] = local_1058[0] + 1;
      *(undefined4 *)(&local_1050 + lVar7 * 2) = local_1068;
      *(undefined4 *)((longlong)&local_1050 + lVar7 * 0x10 + 4) = uStack_1064;
      local_1048[lVar7 * 4] = iStack_1060;
      local_1048[lVar7 * 4 + 1] = iStack_105c;
      if (iStack_1060 != 0x7c) {
        if (iStack_1060 == 0x70) {
          uVar4 = FUN_1403ae4f0(param_1[7],local_50[2]);
          *(undefined8 *)(param_1[10] + 0x38) = uVar4;
          lVar2 = lVar3;
          if (*(longlong *)(param_1[10] + 0x38) == 0) {
            local_1078 = local_50[2];
            uVar4 = *param_1;
            uVar6 = param_1[1];
            lVar3 = ~uVar6 + lVar3;
            pcVar8 = "unresolved traversal relationship \'%s\'";
            goto LAB_1403b13a2;
          }
        }
        else {
          uVar5 = param_1[5];
          if ((ulonglong)param_1[5] < uVar6) {
            uVar5 = uVar6;
          }
          param_1[3] = uVar5;
        }
        goto LAB_1403b13a9;
      }
      local_1058[0] = 1;
      lVar2 = missing_digits_in_number_literal(param_1,lVar3,&local_1050,0);
      if (lVar2 == 0) goto LAB_1403b13a7;
    }
    local_1078 = FUN_1405d8a20(local_1048[0]);
    uVar4 = *param_1;
    uVar6 = param_1[1];
    lVar3 = ~uVar6 + lVar2;
    if (lVar7 == 0) {
      pcVar8 = "unexpected %s";
    }
    else {
      pcVar8 = "unexpected %s\'%s\'";
    }
LAB_1403b13a2:
    FUN_140399a50(uVar4,uVar6,lVar3,pcVar8);
  }
LAB_1403b13a7:
  lVar2 = 0;
LAB_1403b13a9:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_1098)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_1098);
  }
  return lVar2;
}

