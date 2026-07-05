/**
 * Function: cJSON_Compare
 * Address:  140584d80
 * Signature: undefined cJSON_Compare(void)
 * Body size: 445 bytes
 */


bool cJSON_Compare(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  bool bVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  
                    /* 0x584d80  15  cJSON_Compare */
  if ((param_2 == 0 || param_1 == 0) ||
     (*(char *)(param_2 + 0x18) != (char)*(uint *)(param_1 + 0x18))) goto switchD_140584df2_caseD_2;
  uVar5 = *(uint *)(param_1 + 0x18) & 0xff;
  uVar1 = uVar5 - 1;
  if (((0x3f < uVar1) || ((0x800000008000808bU >> ((ulonglong)uVar1 & 0x3f) & 1) == 0)) &&
     (uVar5 != 0x80)) goto switchD_140584df2_caseD_2;
  bVar6 = true;
  if (param_1 == param_2) {
    return true;
  }
  switch((ulonglong)uVar1) {
  case 0:
  case 1:
  case 3:
    break;
  case 2:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
    goto switchD_140584df2_caseD_2;
  case 7:
    dVar9 = ABS(*(double *)(param_1 + 0x30));
    dVar8 = ABS(*(double *)(param_2 + 0x30));
    if (dVar9 <= dVar8) {
      dVar9 = dVar8;
    }
    bVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_2 + 0x30)) <=
            dVar9 * 2.220446049250313e-16;
    break;
  case 0xf:
switchD_140584df2_caseD_f:
    if ((*(char **)(param_1 + 0x20) != (char *)0x0) && (*(char **)(param_2 + 0x20) != (char *)0x0))
    {
      iVar2 = strcmp(*(char **)(param_1 + 0x20),*(char **)(param_2 + 0x20));
      return iVar2 == 0;
    }
    goto switchD_140584df2_caseD_2;
  case 0x1f:
    plVar4 = (longlong *)(param_1 + 0x10);
    plVar7 = (longlong *)(param_2 + 0x10);
    do {
      plVar7 = (longlong *)*plVar7;
      plVar4 = (longlong *)*plVar4;
      if ((plVar4 == (longlong *)0x0) || (plVar7 == (longlong *)0x0)) {
        return plVar4 == plVar7;
      }
      iVar2 = cJSON_Compare(plVar4,plVar7,param_3);
      bVar6 = false;
    } while (iVar2 != 0);
    break;
  case 0x3f:
    plVar7 = (longlong *)(param_1 + 0x10);
    do {
      plVar7 = (longlong *)*plVar7;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)(param_2 + 0x10);
        while( true ) {
          plVar7 = (longlong *)*plVar7;
          if (plVar7 == (longlong *)0x0) {
            return true;
          }
          lVar3 = FUN_140582730(param_1,plVar7[7],param_3);
          if (lVar3 == 0) break;
          iVar2 = cJSON_Compare(plVar7,lVar3,param_3);
          if (iVar2 == 0) {
            return false;
          }
        }
        return false;
      }
      lVar3 = FUN_140582730(param_2,plVar7[7],param_3);
      if (lVar3 == 0) goto switchD_140584df2_caseD_2;
      iVar2 = cJSON_Compare(plVar7,lVar3,param_3);
      bVar6 = false;
    } while (iVar2 != 0);
    break;
  default:
    if (uVar5 == 0x80) goto switchD_140584df2_caseD_f;
switchD_140584df2_caseD_2:
    bVar6 = false;
  }
  return bVar6;
}

