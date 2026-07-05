/**
 * Function: incompatible_types_in_expression_s_vs_s
 * Address:  140768a70
 * Signature: undefined incompatible_types_in_expression_s_vs_s(void)
 * Body size: 1743 bytes
 */


undefined8
incompatible_types_in_expression_s_vs_s
          (undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5,
          uint param_6,longlong *param_7,longlong *param_8,int *param_9)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  uVar7 = *param_1;
  switch(param_6) {
  case 0x25:
  case 0x2f:
    if (*param_5 != 0) {
joined_r0x000140768d2f:
      if (param_6 == 0x25) {
        lVar5 = 0x15c;
        goto LAB_140768d3c;
      }
      if (param_6 != 0x2f) break;
      lVar5 = *(longlong *)(param_4 + 8);
      lVar4 = 0x15f;
      if (lVar5 == 0x15e) {
        lVar4 = 0x15e;
      }
      *param_7 = lVar4;
      lVar4 = 0x15f;
      if (lVar5 == 0x15f) {
        lVar4 = *(longlong *)(param_4 + 8);
      }
      if (lVar5 == 0x15e) {
        lVar4 = *(longlong *)(param_4 + 8);
      }
      *param_8 = lVar4;
      goto LAB_140768d43;
    }
    local_58 = *(longlong *)(param_5 + 2);
    local_50 = *(undefined8 *)(param_5 + 8);
    cVar1 = FUN_140760f80(&local_58);
    if (cVar1 == '\0') goto joined_r0x000140768d2f;
    uVar7 = param_1[1];
    lVar5 = param_1[2];
    lVar4 = *(longlong *)(param_2 + 0x18) - lVar5;
    pcVar10 = "invalid division by zero";
    goto LAB_140768cb3;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
    *param_8 = 0x151;
    break;
  case 0x6a:
  case 0x6b:
    lVar5 = 0x151;
LAB_140768d3c:
    *param_7 = lVar5;
    *param_8 = lVar5;
LAB_140768d43:
    uVar7 = 0;
    goto LAB_140768d45;
  }
  lVar5 = *(longlong *)(param_4 + 8);
  lVar4 = 0x161;
  if ((lVar5 == 0x161) || (*(longlong *)(param_5 + 2) == 0x161)) {
LAB_140768aed:
    *param_7 = lVar4;
LAB_140768af1:
    if ((param_6 == 0x2d) && (*param_7 == 0x157)) {
      lVar4 = 0x15c;
      goto LAB_140768b0a;
    }
  }
  else {
    local_78 = param_1;
    local_70 = param_2;
    local_68 = param_4;
    lVar4 = FUN_1400ba4f0(uVar7,lVar5,0x163);
    lVar6 = FUN_1400ba4f0(uVar7,*(undefined8 *)(param_5 + 2),0x163);
    if (lVar4 == 0 || lVar6 == 0) {
      local_60 = lVar6;
      lVar6 = FUN_1400ba4f0(uVar7,lVar5,0x165);
      if ((lVar6 == 0) &&
         (lVar6 = FUN_1400ba4f0(uVar7,*(undefined8 *)(param_5 + 2),0x165), lVar6 == 0)) {
        plVar8 = (longlong *)FUN_1400ba4f0(*local_78,lVar5,0x164);
        if ((plVar8 == (longlong *)0x0) &&
           (plVar8 = (longlong *)FUN_1400ba4f0(*local_78,*(undefined8 *)(param_5 + 2),0x164),
           plVar8 == (longlong *)0x0)) {
          if (lVar4 == 0) {
            local_58 = 0;
            iVar2 = FUN_140769140(uVar7,lVar5,&local_58);
            if (iVar2 != 0) {
              if ((local_60 == 0) && (lVar4 = *(longlong *)(param_5 + 2), lVar5 != lVar4)) {
                pcVar10 = "invalid types for binary expression (%s, %s)";
              }
              else {
                if (param_9 != (int *)0x0) {
                  *param_8 = lVar5;
                  *param_7 = local_58;
                  *param_9 = iVar2;
                  param_1 = local_78;
                  goto LAB_140768af1;
                }
                lVar4 = *(longlong *)(param_5 + 2);
                pcVar10 = "binary vector operation is not allowed here (%s, %s)";
              }
              local_88 = 0;
              uVar9 = FUN_1403ae340(uVar7,0,lVar4,".");
              uVar9 = FUN_1403d2dd0(uVar9);
              local_88 = 0;
              uVar7 = FUN_1403ae340(uVar7,0,*(undefined8 *)(local_68 + 8),".");
              local_88 = FUN_1403d2d90(uVar7);
              uVar7 = local_78[1];
              lVar5 = local_78[2];
              lVar4 = *(longlong *)(local_70 + 0x18) - lVar5;
              local_80 = uVar9;
              goto LAB_140768cb3;
            }
          }
          local_88 = 0;
          uVar9 = FUN_1403ae340(uVar7,0,*(undefined8 *)(param_5 + 2),".");
          uVar9 = FUN_1403d2dd0(uVar9);
          local_88 = 0;
          uVar7 = FUN_1403ae340(uVar7,0,*(undefined8 *)(local_68 + 8),".");
          local_88 = FUN_1403d2d90(uVar7);
          uVar7 = local_78[1];
          lVar5 = local_78[2];
          lVar4 = *(longlong *)(local_70 + 0x18) - lVar5;
          pcVar10 = "invalid types for binary expression (%s, %s)";
          local_80 = uVar9;
LAB_140768cb3:
          FUN_140399a50(uVar7,lVar5,lVar4,pcVar10);
          uVar7 = 0xffffffff;
          goto LAB_140768d45;
        }
        lVar5 = *plVar8;
      }
      else {
        lVar5 = 0x156;
      }
      *param_7 = lVar5;
      param_1 = local_78;
      goto LAB_140768af1;
    }
    lVar4 = *(longlong *)(local_68 + 8);
    if (lVar5 == *(longlong *)(param_5 + 2)) goto LAB_140768c0f;
    if (lVar5 == lVar4) {
      lVar5 = FUN_1407691e0();
    }
    lVar6 = FUN_1407691e0(param_3,param_5);
    cVar1 = FUN_140769480(lVar5,param_3);
    if (cVar1 != '\0') {
      lVar5 = param_3;
    }
    cVar1 = FUN_140769480(lVar6,param_3);
    if (cVar1 != '\0') {
      lVar6 = param_3;
    }
    if (lVar5 == lVar6) {
LAB_140768d0a:
      *param_7 = lVar5;
      param_1 = local_78;
      goto LAB_140768af1;
    }
    if ((param_6 & 0xfffffffe) != 100) {
LAB_140768ee3:
      iVar2 = FUN_140769380(lVar5);
      iVar3 = FUN_140769380(lVar6);
      if (iVar2 < iVar3) {
        cVar1 = FUN_140769480(lVar5,lVar6);
        if (cVar1 != '\0') {
          *param_7 = lVar6;
          param_1 = local_78;
          goto LAB_140768af1;
        }
      }
      else {
        cVar1 = FUN_140769480(lVar6,lVar5);
        if (cVar1 != '\0') goto LAB_140768d0a;
      }
      cVar1 = FUN_140766600(lVar5);
      if ((cVar1 == '\0') || (cVar1 = FUN_140766600(lVar6), cVar1 == '\0')) {
LAB_1407690cb:
        uVar9 = FUN_1403b36e0(uVar7,lVar5);
        uVar7 = FUN_1403b36e0(uVar7,lVar6);
        local_88 = uVar9;
        local_80 = uVar7;
        FUN_140399a50(local_78[1],local_78[2],*(longlong *)(local_70 + 0x18) - local_78[2],
                      "incompatible types in expression (%s vs %s)");
        (*DAT_1415033b0)(uVar9);
        (*DAT_1415033b0)(uVar7);
        uVar7 = 0xffffffff;
        goto LAB_140768d45;
      }
      lVar4 = 0x15f;
      if ((lVar5 != 0x15e) && (((lVar6 != 0x15f && (lVar6 != 0x15e)) && (lVar5 != 0x15f)))) {
        if ((((lVar5 == 0x159) || (lVar5 == 0x15a)) || (lVar5 == 0x15b)) ||
           (lVar4 = 0x15c, lVar5 == 0x15c)) {
          lVar4 = 0x15c;
          param_1 = local_78;
          goto LAB_140768aed;
        }
        if ((lVar6 != 0x15b && (lVar6 != 0x15a && lVar6 != 0x159)) && lVar6 != 0x15c)
        goto LAB_1407690cb;
      }
LAB_140768c0f:
      *param_7 = lVar4;
      param_1 = local_78;
      goto LAB_140768af1;
    }
    lVar4 = 0x151;
    param_1 = local_78;
    if (lVar6 != 0x151 && lVar5 != 0x151) {
      if ((lVar5 == 0x15e) || (lVar5 == 0x15f)) {
        uVar7 = local_78[1];
        lVar5 = local_78[2];
        lVar4 = *(longlong *)(local_70 + 0x18) - lVar5;
        pcVar10 = "floating point value is invalid in equality comparison";
      }
      else {
        if (lVar6 != 0x15e && lVar6 != 0x15f) goto LAB_140768ee3;
        uVar7 = local_78[1];
        lVar5 = local_78[2];
        lVar4 = *(longlong *)(local_70 + 0x18) - lVar5;
        pcVar10 = "floating point value is invalid in equality comparison";
      }
      goto LAB_140768cb3;
    }
LAB_140768b0a:
    *param_7 = lVar4;
  }
  lVar5 = *param_8;
  if (lVar5 == 0) {
    lVar5 = *param_7;
    *param_8 = lVar5;
  }
  lVar5 = FUN_1400ba4f0(*param_1,lVar5,0x165);
  uVar7 = 0;
  if (lVar5 != 0) {
    *param_7 = 0x157;
  }
LAB_140768d45:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
  }
  return uVar7;
}

