/**
 * Function: cannot_mix_operators_in_expression
 * Address:  1403b13f0
 * Signature: undefined cannot_mix_operators_in_expression(void)
 * Body size: 1696 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

longlong cannot_mix_operators_in_expression(undefined8 *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong *puVar10;
  bool bVar11;
  undefined1 auStack_10b8 [32];
  ulonglong local_1098;
  ulonglong local_1090;
  undefined4 local_1088;
  uint uStack_1084;
  uint uStack_1080;
  uint uStack_107c;
  undefined8 local_1078;
  uint uStack_1070;
  uint uStack_106c;
  ulonglong local_1068;
  int iStack_1060;
  undefined4 uStack_105c;
  int local_1058 [2];
  ulonglong local_1050;
  uint auStack_1048 [1022];
  ulonglong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_10b8;
  memset(local_1058,0,0x1008);
  local_50 = &local_1050;
  if (param_3 == 1) {
    puVar10 = (ulonglong *)(param_1[10] + 0x28);
LAB_1403b1494:
    uVar7 = param_1[3];
    lVar4 = missing_digits_in_number_literal(param_1,param_2,&local_1068,1);
    if (lVar4 == 0) {
      lVar6 = 0;
      lVar4 = missing_digits_in_number_literal(param_1,param_2,&local_1068,0);
      if (lVar4 == 0) goto LAB_1403b1995;
      local_1098 = FUN_1405d8a20(iStack_1060);
      uVar5 = *param_1;
      uVar7 = param_1[1];
      param_2 = ~uVar7 + param_2;
      if (local_1068 == 0) {
LAB_1403b1981:
        pcVar9 = "unexpected %s";
      }
      else {
LAB_1403b18f2:
        pcVar9 = "unexpected %s\'%s\'";
        local_1090 = local_1068;
      }
      goto LAB_1403b198d;
    }
    lVar4 = (longlong)local_1058[0];
    local_1058[0] = local_1058[0] + 1;
    (&local_1050)[lVar4 * 2] = local_1068;
    *(ulonglong *)(auStack_1048 + lVar4 * 4) = CONCAT44(uStack_105c,iStack_1060);
    if (iStack_1060 == 0x70) {
      pcVar9 = (char *)*local_50;
      iVar2 = strcmp(pcVar9,"self");
      bVar11 = true;
      if ((iVar2 != 0) &&
         ((((*pcVar9 != 'u' || (pcVar9[1] != 'p')) || (pcVar9[2] != '\0')) &&
          (iVar2 = strcmp(pcVar9,"cascade"), iVar2 != 0)))) {
        iVar2 = strcmp(pcVar9,"desc");
        bVar11 = iVar2 == 0;
      }
    }
    else {
      bVar11 = false;
    }
    lVar4 = (longlong)local_1058[0] + -1;
    uVar8 = param_1[5];
    if ((ulonglong)param_1[5] < uVar7) {
      uVar8 = uVar7;
    }
    param_1[3] = uVar8;
    if (bVar11) {
      local_1058[0] = (int)lVar4;
      param_2 = unresolved_traversal_relationship_s(param_1,puVar10,param_2);
      if (param_2 != 0) goto LAB_1403b15c7;
      goto LAB_1403b1992;
    }
    lVar6 = 0;
    param_2 = missing_digits_in_number_literal(param_1,param_2,&local_1050 + lVar4 * 2,0);
    if (param_2 == 0) goto LAB_1403b1995;
    uVar1 = auStack_1048[lVar4 * 4];
    if (0x6f < (int)uVar1) {
      if ((uVar1 == 0x70) || (uVar1 == 0x73)) goto LAB_1403b16fb;
LAB_1403b18cd:
      uVar8 = (&local_1050)[lVar4 * 2];
LAB_1403b18d1:
      local_1098 = FUN_1405d8a20();
      uVar5 = *param_1;
      uVar7 = param_1[1];
      param_2 = ~uVar7 + param_2;
      local_1068 = uVar8;
joined_r0x0001403b197b:
      if (local_1068 == 0) goto LAB_1403b1981;
      goto LAB_1403b18f2;
    }
    if (uVar1 == 0x2a) {
LAB_1403b16fb:
      puVar10[1] = *local_50;
      uVar7 = param_1[3];
      lVar4 = missing_digits_in_number_literal(param_1,param_2,&local_1078,1);
      if (lVar4 == 0) {
        lVar4 = missing_digits_in_number_literal(param_1,param_2,&local_1078,0);
        if (lVar4 == 0) goto LAB_1403b1992;
        uVar8 = CONCAT44(local_1078._4_4_,(undefined4)local_1078);
        uVar7 = (ulonglong)uStack_1070;
LAB_1403b1810:
        local_1098 = FUN_1405d8a20(uVar7);
        uVar5 = *param_1;
        uVar7 = param_1[1];
        param_2 = ~uVar7 + param_2;
        local_1068 = uVar8;
      }
      else {
        lVar6 = (longlong)local_1058[0];
        local_1058[0] = local_1058[0] + 1;
        *(undefined4 *)(&local_1050 + lVar6 * 2) = (undefined4)local_1078;
        auStack_1048[lVar6 * 4 + -1] = local_1078._4_4_;
        auStack_1048[lVar6 * 4] = uStack_1070;
        auStack_1048[lVar6 * 4 + 1] = uStack_106c;
        if (uStack_1070 != 0x7c) {
          uVar8 = param_1[5];
LAB_1403b1913:
          local_1058[0] = local_1058[0] + -1;
          if (uVar8 < uVar7) {
            uVar8 = uVar7;
          }
          param_1[3] = uVar8;
          goto LAB_1403b15c7;
        }
        param_2 = unresolved_traversal_relationship_s(param_1,puVar10,lVar4);
        if (param_2 == 0) goto LAB_1403b1992;
        lVar4 = missing_digits_in_number_literal(param_1,param_2,&local_1088,1);
        if (lVar4 != 0) {
          lVar6 = (longlong)local_1058[0];
          local_1058[0] = local_1058[0] + 1;
          *(undefined4 *)(&local_1050 + lVar6 * 2) = local_1088;
          auStack_1048[lVar6 * 4 + -1] = uStack_1084;
          auStack_1048[lVar6 * 4] = uStack_1080;
          auStack_1048[lVar6 * 4 + 1] = uStack_107c;
          if (uStack_1080 == 0x70) {
            uVar5 = FUN_1403ae4f0(param_1[7],local_50[2]);
            *(undefined8 *)(param_1[10] + 0x38) = uVar5;
            param_2 = lVar4;
            if (*(longlong *)(param_1[10] + 0x38) == 0) {
              local_1098 = local_50[2];
              uVar5 = *param_1;
              uVar7 = param_1[1];
              param_2 = ~uVar7 + lVar4;
              pcVar9 = "unresolved trav identifier \'%s\'";
              goto LAB_1403b198d;
            }
          }
          local_1058[0] = local_1058[0] + -1;
          uVar8 = param_1[5];
          goto LAB_1403b1913;
        }
        lVar4 = missing_digits_in_number_literal(param_1,param_2,&local_1088,0);
        if (lVar4 == 0) goto LAB_1403b1992;
        local_1098 = FUN_1405d8a20(uStack_1080);
        uVar5 = *param_1;
        uVar7 = param_1[1];
        param_2 = ~uVar7 + param_2;
        local_1068 = CONCAT44(uStack_1084,local_1088);
      }
      goto joined_r0x0001403b197b;
    }
    if (uVar1 != 0x40) goto LAB_1403b18cd;
    *(undefined8 *)param_1[10] = 0x9000000000000000;
    lVar4 = (longlong)local_1058[0];
    local_1058[0] = local_1058[0] + 1;
    lVar6 = 0;
    param_2 = missing_digits_in_number_literal(param_1,param_2,&local_1050 + lVar4 * 2,0);
    if (param_2 == 0) goto LAB_1403b1995;
    uVar1 = auStack_1048[lVar4 * 4];
    if (uVar1 == 0x73) {
      uVar3 = strtoul((char *)local_50[2],(char **)&local_1078,10);
      *puVar10 = (ulonglong)uVar3;
    }
    else if (uVar1 == 0x70) {
      puVar10[1] = local_50[2];
    }
    else {
      if (uVar1 != 0x2a) {
        uVar8 = (&local_1050)[lVar4 * 2];
        goto LAB_1403b18d1;
      }
      *puVar10 = 0x10e;
    }
LAB_1403b15c7:
    lVar4 = (longlong)local_1058[0];
    local_1058[0] = local_1058[0] + 1;
    lVar6 = 0;
    param_2 = missing_digits_in_number_literal(param_1,param_2,&local_1050 + lVar4 * 2,0);
    if (param_2 == 0) goto LAB_1403b1995;
    uVar1 = auStack_1048[lVar4 * 4];
    if (uVar1 != 0x29) {
      if (uVar1 == 0x6b) {
        if ((1 < param_3) && (*(int *)(param_1 + 0xb) != 1)) {
LAB_1403b1929:
          uVar5 = *param_1;
          uVar7 = param_1[1];
          param_2 = ~uVar7 + param_2;
          pcVar9 = "cannot mix operators in extra term arguments";
          goto LAB_1403b198d;
        }
        *(undefined4 *)(param_1 + 0xb) = 1;
      }
      else {
        if (uVar1 != 0x2c) {
          uVar8 = (&local_1050)[lVar4 * 2];
          goto LAB_1403b18d1;
        }
        if ((1 < param_3) && (*(int *)(param_1 + 0xb) != 0)) goto LAB_1403b1929;
        *(undefined4 *)(param_1 + 0xb) = 0;
      }
      lVar6 = cannot_mix_operators_in_expression(param_1,param_2,param_3 + 1);
      goto LAB_1403b1995;
    }
    lVar4 = (longlong)local_1058[0];
    local_1058[0] = local_1058[0] + 1;
    lVar6 = missing_digits_in_number_literal(param_1,param_2,&local_1050 + lVar4 * 2,0);
    if (lVar6 != 0) {
      uVar1 = auStack_1048[lVar4 * 4];
      uVar7 = (ulonglong)uVar1;
      if ((uVar7 < 0x2d) && ((0x100000000401U >> (uVar7 & 0x3f) & 1) != 0)) goto LAB_1403b1995;
      if (uVar1 == 0x6b) {
        if (*(short *)(param_1[10] + 0x42) == 0) {
          *(undefined2 *)(param_1[10] + 0x42) = 1;
          goto LAB_1403b1995;
        }
        uVar5 = *param_1;
        uVar7 = param_1[1];
        param_2 = ~uVar7 + lVar6;
        pcVar9 = "cannot mix operators in || expression";
        goto LAB_1403b198d;
      }
      if (uVar1 == 0x7d) {
        lVar6 = lVar6 + -1;
        goto LAB_1403b1995;
      }
      uVar8 = (&local_1050)[lVar4 * 2];
      param_2 = lVar6;
      goto LAB_1403b1810;
    }
  }
  else {
    if (param_3 == 0) {
      puVar10 = (ulonglong *)(param_1[10] + 8);
      goto LAB_1403b1494;
    }
    if (param_3 < 0x11) {
      puVar10 = (ulonglong *)(param_1[0xc] + (longlong)param_3 * 0x10 + -0x20);
      goto LAB_1403b1494;
    }
    uVar5 = *param_1;
    uVar7 = param_1[1];
    param_2 = ~uVar7 + param_2;
    pcVar9 = "too many arguments in term";
LAB_1403b198d:
    FUN_140399a50(uVar5,uVar7,param_2,pcVar9);
  }
LAB_1403b1992:
  lVar6 = 0;
LAB_1403b1995:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_10b8)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_10b8);
}

