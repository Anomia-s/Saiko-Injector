/**
 * Function: query_argument_expression_too_long
 * Address:  1403aff50
 * Signature: undefined query_argument_expression_too_long(void)
 * Body size: 1365 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

char * query_argument_expression_too_long(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_2528 [32];
  undefined8 local_2508;
  longlong local_2500;
  undefined4 local_24ec;
  undefined8 local_24e8;
  undefined8 local_24e0;
  char *local_24d8;
  undefined8 local_24d0;
  undefined1 *local_24c8;
  undefined8 local_24c0;
  undefined1 *puStack_24b8;
  undefined8 local_24b0;
  undefined8 local_24a8;
  undefined8 local_24a0;
  undefined8 uStack_2498;
  undefined8 local_2490;
  undefined8 uStack_2488;
  undefined8 local_2480;
  undefined4 local_2478;
  int iStack_2474;
  int iStack_2470;
  int iStack_246c;
  undefined1 local_2468 [1024];
  int local_2068 [2];
  longlong local_2060;
  int aiStack_2058 [1022];
  longlong *local_1060;
  int local_1058;
  int iStack_1054;
  int iStack_1050;
  int iStack_104c;
  int local_1048 [1022];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_2528;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    sVar4 = strlen(param_3);
    iVar10 = (int)sVar4;
    uVar3 = 0;
    uVar1 = local_24e0;
  }
  else {
    uVar3 = FUN_1403af230(*(undefined8 *)(param_1 + 0x88));
    sVar4 = strlen(param_3);
    iVar10 = (int)sVar4;
    uVar1 = local_24e0;
  }
  local_24e0 = uVar3;
  if (0x200 < iVar10) {
    FUN_140399a50(local_24e0,param_3,0,"query argument expression too long");
    local_24e0 = uVar1;
    pcVar7 = (char *)0x0;
    iVar10 = local_2068[0];
    goto LAB_1403b0413;
  }
  local_24d0 = 0;
  local_24c0 = 0;
  puStack_24b8 = (undefined1 *)0x0;
  local_24b0 = 0;
  local_24a8 = *(undefined8 *)(param_1 + 0x80);
  local_24a0 = 0;
  uStack_2498 = 0;
  local_2490 = 0;
  uStack_2488 = 0;
  local_2480 = 0;
  local_24d8 = param_3;
  local_24c8 = local_2468;
  memset(local_2068,0,0x1008);
  local_1060 = &local_2060;
  pcVar5 = (char *)missing_digits_in_number_literal(&local_24e0,param_3,&local_2478,1);
  if (pcVar5 == (char *)0x0) {
    pcVar7 = (char *)0x0;
    lVar6 = missing_digits_in_number_literal(&local_24e0,param_3,&local_2478,0);
    iVar10 = local_2068[0];
    if (lVar6 == 0) goto LAB_1403b0413;
    lVar6 = CONCAT44(iStack_2474,local_2478);
    local_2508 = FUN_1405d8a20(iStack_2470);
    pcVar7 = param_3 + ~(ulonglong)local_24d8;
    if (lVar6 == 0) {
LAB_1403b0400:
      pcVar5 = "unexpected %s";
    }
    else {
LAB_1403b03c0:
      pcVar5 = "unexpected %s\'%s\'";
      local_2500 = lVar6;
    }
LAB_1403b040c:
    FUN_140399a50(local_24e0,local_24d8,pcVar7,pcVar5);
  }
  else {
    lVar6 = (longlong)local_2068[0];
    local_2068[0] = local_2068[0] + 1;
    *(undefined4 *)(&local_2060 + lVar6 * 2) = local_2478;
    aiStack_2058[lVar6 * 4 + -1] = iStack_2474;
    aiStack_2058[lVar6 * 4] = iStack_2470;
    aiStack_2058[lVar6 * 4 + 1] = iStack_246c;
    pcVar7 = pcVar5;
    iVar10 = local_2068[0];
    if (iStack_2470 == 0) goto LAB_1403b0413;
    if (iStack_2470 != 0x28) {
      local_24ec = 0;
      pcVar7 = param_3;
LAB_1403b01da:
      iVar10 = local_2068[0] + -1;
      local_24c8 = puStack_24b8;
      if (puStack_24b8 < local_2468) {
        local_24c8 = local_2468;
      }
      local_24e8 = param_2;
      do {
        local_2068[0] = iVar10;
        memset(&local_1058,0,0x1008);
        local_1058 = 1;
        local_50 = (undefined8 *)&iStack_1050;
        lVar8 = missing_digits_in_number_literal(&local_24e0,pcVar7,&iStack_1050,0);
        if (lVar8 == 0) goto LAB_1403b0411;
        if (local_1048[0] != 0x70) {
          lVar6 = CONCAT44(iStack_104c,iStack_1050);
LAB_1403b03e0:
          local_2508 = FUN_1405d8a20();
          pcVar7 = (char *)(~(ulonglong)local_24d8 + lVar8);
          goto joined_r0x0001403b03fe;
        }
        lVar6 = (longlong)local_1058;
        local_1058 = local_1058 + 1;
        plVar9 = (longlong *)((longlong)&iStack_1050 + lVar6 * 2 * 8);
        lVar8 = missing_digits_in_number_literal(&local_24e0,lVar8,plVar9,0);
        if (lVar8 == 0) goto LAB_1403b0411;
        if (local_1048[lVar6 * 4] != 0x3a) {
          lVar6 = *plVar9;
          goto LAB_1403b03e0;
        }
        lVar6 = (longlong)local_1058;
        local_1058 = local_1058 + 1;
        plVar9 = (longlong *)((longlong)&iStack_1050 + lVar6 * 2 * 8);
        pcVar7 = (char *)missing_digits_in_number_literal(&local_24e0,lVar8,plVar9,0);
        if (pcVar7 == (char *)0x0) goto LAB_1403b0411;
        iVar2 = local_1048[lVar6 * 4];
        if (iVar2 != 0x70) goto LAB_1403b039f;
        iVar2 = FUN_1400b2a30(param_1,*local_50);
        if (iVar2 == -1) {
          local_2508 = *local_50;
          pcVar7 = pcVar7 + ~(ulonglong)local_24d8;
          pcVar5 = "unknown variable \'%s\'";
          goto LAB_1403b040c;
        }
        lVar6 = FUN_1403ae4f0(*(undefined8 *)(param_1 + 0x88),local_50[4]);
        if (lVar6 == 0) {
          local_2508 = local_50[4];
          pcVar7 = pcVar7 + ~(ulonglong)local_24d8;
          pcVar5 = "unresolved entity \'%s\'";
          goto LAB_1403b040c;
        }
        FUN_1400c4800(local_24e8,iVar2,lVar6);
        lVar6 = (longlong)local_2068[0];
        local_2068[0] = local_2068[0] + 1;
        plVar9 = &local_2060 + lVar6 * 2;
        pcVar7 = (char *)missing_digits_in_number_literal(&local_24e0,pcVar7,plVar9,0);
        if (pcVar7 == (char *)0x0) goto LAB_1403b0411;
        iVar2 = aiStack_2058[lVar6 * 4];
      } while (iVar2 == 0x2c);
      iVar10 = local_2068[0];
      if (iVar2 == 0) goto LAB_1403b0413;
      if (iVar2 != 0x29) {
LAB_1403b039f:
        lVar6 = *plVar9;
        pcVar5 = pcVar7;
        iStack_1050 = iVar2;
        goto LAB_1403b03a3;
      }
      if ((char)local_24ec != '\0') goto LAB_1403b0413;
      pcVar7 = pcVar7 + ~(ulonglong)local_24d8;
      pcVar5 = "unexpected \')\' without opening \'(\')";
      goto LAB_1403b040c;
    }
    pcVar7 = (char *)missing_digits_in_number_literal(&local_24e0,pcVar5,&local_1058,1);
    if (pcVar7 != (char *)0x0) {
      lVar6 = (longlong)local_2068[0];
      *(int *)(&local_2060 + lVar6 * 2) = local_1058;
      aiStack_2058[lVar6 * 4 + -1] = iStack_1054;
      aiStack_2058[lVar6 * 4] = iStack_1050;
      aiStack_2058[lVar6 * 4 + 1] = iStack_104c;
      iVar10 = local_2068[0] + 1;
      if (iStack_1050 == 0x29) goto LAB_1403b0413;
      local_24ec = (undefined4)CONCAT71((int7)((ulonglong)(lVar6 * 0x10) >> 8),1);
      pcVar7 = pcVar5;
      goto LAB_1403b01da;
    }
    lVar6 = missing_digits_in_number_literal(&local_24e0,pcVar5,&local_1058,0);
    if (lVar6 != 0) {
      lVar6 = CONCAT44(iStack_1054,local_1058);
LAB_1403b03a3:
      local_2508 = FUN_1405d8a20(iStack_1050);
      pcVar7 = pcVar5 + ~(ulonglong)local_24d8;
joined_r0x0001403b03fe:
      if (lVar6 == 0) goto LAB_1403b0400;
      goto LAB_1403b03c0;
    }
  }
LAB_1403b0411:
  pcVar7 = (char *)0x0;
  iVar10 = local_2068[0];
LAB_1403b0413:
  local_2068[0] = iVar10;
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_2528)) {
    return pcVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_2528);
}

