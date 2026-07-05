/**
 * Function: without_in_identifier
 * Address:  1405d8ad0
 * Signature: undefined without_in_identifier(void)
 * Body size: 757 bytes
 */


byte * without_in_identifier(undefined8 *param_1,byte *param_2,undefined8 *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  longlong lVar6;
  char *pcVar7;
  byte *pbVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 local_58;
  byte *local_50;
  
  if (param_3 == (undefined8 *)0x0) {
    bVar9 = *param_2;
    bVar10 = bVar9 == 0x24;
    if (param_1 == (undefined8 *)0x0) {
      bVar1 = true;
      local_58 = 0;
      pbVar8 = (byte *)0x0;
      local_50 = param_2;
      goto LAB_1405d8b5d;
    }
    bVar10 = (bool)(~*(byte *)((longlong)param_1 + 0x31) & bVar9 == 0x24);
    pbVar8 = (byte *)param_1[3];
  }
  else {
    *(undefined4 *)(param_3 + 1) = 0x70;
    pbVar8 = (byte *)param_1[3];
    *param_3 = pbVar8;
    bVar9 = *param_2;
    bVar10 = (bool)(~*(byte *)((longlong)param_1 + 0x31) & bVar9 == 0x24);
  }
  local_58 = *param_1;
  local_50 = (byte *)param_1[1];
  bVar1 = false;
LAB_1405d8b5d:
  iVar3 = isalpha((int)(char)bVar9);
  if ((iVar3 != 0) ||
     ((bVar9 - 0x23 < 0x3d && ((0x1000000000000003U >> ((ulonglong)(bVar9 - 0x23) & 0x3f) & 1) != 0)
      ))) {
    pbVar5 = param_2;
    do {
      if ((bVar9 == 0x2e) && (pbVar5[1] == 0x2e)) goto LAB_1405d8d07;
      iVar3 = isalpha((int)(char)bVar9);
      bVar4 = 1;
      if (iVar3 == 0) {
        if ((byte)(bVar9 - 0x23) < 0x3d) {
          bVar4 = (byte)(0x1000000000000003 >> (bVar9 - 0x23 & 0x3f));
        }
        else {
          bVar4 = 0;
        }
      }
      bVar11 = 9 < (int)(char)bVar9 - 0x30U;
      if ((bVar9 == 0x5c) && ((bVar4 & 1) == 0)) {
        bVar9 = pbVar5[1];
        if (bVar9 != 0x2e) {
joined_r0x0001405d8c72:
          pbVar5 = pbVar5 + 1;
          if (bVar9 == 0) goto LAB_1405d8d07;
        }
      }
      else {
        bVar2 = bVar9 == 0x2e & (bVar10 ^ 1U);
        if ((pbVar5 != param_2 && bVar9 == 0x2a) && (bVar11 && (bVar4 & 1) == 0)) {
          if (pbVar5[-1] != 0x2e && (bVar2 == 0 && (bVar11 && (bVar4 & 1) == 0)))
          goto LAB_1405d8d07;
        }
        else if (bVar2 == 0 && (bVar11 && (bVar4 & 1) == 0)) {
          if (bVar9 == 0x5c) {
            bVar9 = pbVar5[1];
            goto joined_r0x0001405d8c72;
          }
          if (bVar9 == 0x3e) {
            lVar6 = (longlong)pbVar5 - (longlong)local_50;
            pcVar7 = "> without < in identifier";
            goto LAB_1405d8de2;
          }
          if (bVar9 == 0x3c) {
            lVar6 = (longlong)pbVar5 - (longlong)local_50;
            iVar3 = 0;
            goto LAB_1405d8d6d;
          }
          goto LAB_1405d8d07;
        }
      }
      if (pbVar8 == (byte *)0x0) {
        pbVar8 = (byte *)0x0;
      }
      else {
        *pbVar8 = *pbVar5;
        pbVar8 = pbVar8 + 1;
      }
      bVar9 = pbVar5[1];
      pbVar5 = pbVar5 + 1;
    } while( true );
  }
  lVar6 = (longlong)param_2 - (longlong)local_50;
  pcVar7 = "invalid start of identifier \'%c\'";
LAB_1405d8de2:
  FUN_140399a50(local_58,local_50,lVar6,pcVar7);
  return (byte *)0x0;
LAB_1405d8d6d:
  bVar9 = *pbVar5;
  if (bVar9 == 0x3c) {
    iVar3 = iVar3 + 1;
    if (pbVar8 == (byte *)0x0) goto LAB_1405d8d60;
LAB_1405d8da7:
    *pbVar8 = bVar9;
    pbVar8 = pbVar8 + 1;
  }
  else {
    if (bVar9 == 0x3e) {
      iVar3 = iVar3 + -1;
    }
    else if (bVar9 == 0) {
      pcVar7 = "< without > in identifier";
      goto LAB_1405d8de2;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_1405d8da7;
LAB_1405d8d60:
    pbVar8 = (byte *)0x0;
  }
  lVar6 = lVar6 + 1;
  pbVar5 = pbVar5 + 1;
  if (iVar3 == 0) {
LAB_1405d8d07:
    if (pbVar8 == (byte *)0x0) {
      if (bVar1) {
        return pbVar5;
      }
    }
    else {
      *pbVar8 = 0;
      if (bVar1) {
        return pbVar5;
      }
      param_1[3] = pbVar8 + 1;
    }
    if (*(char *)((longlong)param_1 + 0x32) == '\x01') {
      if (*pbVar5 == 0x28) {
        *(undefined4 *)(param_3 + 1) = 0x71;
        return pbVar5 + 1;
      }
      return pbVar5;
    }
    return pbVar5;
  }
  goto LAB_1405d8d6d;
}

