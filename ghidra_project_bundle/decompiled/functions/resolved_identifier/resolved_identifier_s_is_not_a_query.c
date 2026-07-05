/**
 * Function: resolved_identifier_s_is_not_a_query
 * Address:  1403cd050
 * Signature: undefined resolved_identifier_s_is_not_a_query(void)
 * Body size: 997 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void resolved_identifier_s_is_not_a_query(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 auStack_b68 [47];
  byte local_b39;
  undefined1 local_b38 [360];
  undefined1 local_9d0 [2312];
  longlong local_c8;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_b68;
  lVar3 = FUN_1405f7fe0(param_2,"name");
  if (lVar3 == 0) {
    lVar3 = FUN_1405f7fe0(param_2,"expr");
    if (lVar3 != 0) {
      pcVar5 = (char *)FUN_1405f7fe0(param_2);
      if (pcVar5 == (char *)0x0) {
        local_b39 = FUN_140398e40(0);
        pcVar9 = DAT_141503468;
        _DAT_1416dfbb0 = DAT_141503468;
        uVar10 = 400;
      }
      else {
        iVar1 = strcmp(pcVar5,"true");
        local_b39 = FUN_140398e40(0);
        _DAT_1416dfbb0 = (code *)0x0;
        if (iVar1 != 0) {
          _DAT_1416dfbb0 = DAT_141503468;
        }
        pcVar9 = DAT_141503468;
        uVar10 = 400;
        if (iVar1 == 0) {
          uVar10 = 200;
        }
      }
      DAT_141503468 = FUN_1403cf270;
      DAT_1416dfbb8 = pcVar9;
      memset(local_9d0,0,0x988);
      local_c8 = lVar3;
      lVar4 = cannot_enforce_querycacheall_query_contains_u(param_1,local_9d0);
      lVar3 = DAT_1416dfbc0;
      if (lVar4 == 0) {
        DAT_1416dfbc0 = 0;
        if (lVar3 != 0) {
          uVar8 = FUN_1403d2b10(0x22,lVar3);
          error(param_3,&DAT_141339891,uVar8);
          (*DAT_1415033b0)(uVar8);
          (*DAT_1415033b0)(lVar3);
        }
        *param_3 = uVar10;
      }
      else {
        FUN_1400bd7b0(local_b38,param_1,lVar4);
        invalid_offset_limit_parameter(param_2,param_3,lVar4,local_b38);
        FUN_1400b2bd0(lVar4);
      }
      uVar2 = (uint)local_b39;
      DAT_141503468 = pcVar9;
LAB_1403cd391:
      FUN_140398e40(uVar2);
      goto LAB_1403cd3b0;
    }
    FUN_1403b7a10(param_3 + 2,"Missing parameter \'expr\'",0x18);
  }
  else {
    lVar4 = FUN_1403ae4f0(param_1,lVar3);
    if (lVar4 == 0) {
      error(param_3,"unresolved identifier \'%s\'",lVar3);
      *param_3 = 0x194;
      goto LAB_1403cd3b0;
    }
    pcVar5 = (char *)FUN_1405f7fe0(param_2,"try");
    if (pcVar5 == (char *)0x0) {
      bVar11 = false;
    }
    else {
      iVar1 = strcmp(pcVar5,"true");
      bVar11 = iVar1 == 0;
    }
    plVar6 = (longlong *)FUN_1400ba4f0(param_1,lVar4,0x8000000300000100);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_1400ba4f0(param_1,lVar4,0x8000000300000101);
      if (plVar6 != (longlong *)0x0) {
        lVar4 = *(longlong *)(*plVar6 + 0x10);
        goto joined_r0x0001403cd275;
      }
      pcVar5 = "resolved identifier \'%s\' is not a query";
    }
    else {
      lVar4 = *plVar6;
joined_r0x0001403cd275:
      if (lVar4 != 0) {
        FUN_1400bd7b0(local_b38,param_1,lVar4);
        uVar2 = FUN_140398e40(0);
        pcVar9 = DAT_141503468;
        _DAT_1416dfbb0 = (code *)0x0;
        if (!bVar11) {
          _DAT_1416dfbb0 = DAT_141503468;
        }
        DAT_1416dfbb8 = DAT_141503468;
        DAT_141503468 = FUN_1403cf270;
        lVar3 = FUN_1405f7fe0(param_2,"vars");
        if ((lVar3 == 0) ||
           (lVar7 = query_argument_expression_too_long(lVar4,local_b38,lVar3), lVar3 = DAT_1416dfbc0
           , lVar7 != 0)) {
          invalid_offset_limit_parameter(param_2,param_3,lVar4,local_b38);
          DAT_141503468 = pcVar9;
          goto LAB_1403cd391;
        }
        DAT_1416dfbc0 = 0;
        if (lVar3 != 0) {
          uVar8 = FUN_1403d2b10(0x22,lVar3);
          error(param_3,&DAT_141339891,uVar8);
          (*DAT_1415033b0)(uVar8);
          (*DAT_1415033b0)(lVar3);
        }
        goto LAB_1403cd3aa;
      }
      pcVar5 = "query \'%s\' is not initialized";
    }
    error(param_3,pcVar5,lVar3);
  }
LAB_1403cd3aa:
  *param_3 = 400;
LAB_1403cd3b0:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_b68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_b68);
}

