/**
 * Function: invalid_format_string
 * Address:  14001c9a0
 * Signature: undefined invalid_format_string(void)
 * Body size: 505 bytes
 */


/* WARNING: Removing unreachable block (ram,0x00014001c9ff) */

byte * invalid_format_string(byte *param_1,byte *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  void *local_18;
  
  local_18 = (void *)(DAT_1414ef3c0 ^ (ulonglong)auStack_58);
  bVar9 = *param_1;
  if ((byte)(bVar9 - 0x30) < 10) {
    if (bVar9 == 0x30) {
      pbVar5 = param_1 + 1;
      uVar7 = 0;
    }
    else {
      uVar2 = 0;
      pbVar5 = param_1;
      do {
        pbVar4 = pbVar5;
        uVar8 = uVar2;
        pbVar5 = pbVar4 + 1;
        uVar7 = ((uint)bVar9 + (int)uVar8 * 10) - 0x30;
        if (pbVar5 == param_2) {
          lVar10 = (longlong)param_2 - (longlong)param_1;
          pbVar5 = param_2;
          goto joined_r0x00014001caca;
        }
        bVar9 = *pbVar5;
        uVar2 = (ulonglong)uVar7;
      } while ((byte)(bVar9 - 0x30) < 10);
      lVar10 = (longlong)pbVar5 - (longlong)param_1;
joined_r0x00014001caca:
      if ((9 < lVar10) &&
         ((lVar10 != 10 ||
          (((ulonglong)((int)(char)*pbVar4 - 0x30U & 0xfffffffe) + uVar8 * 10 & 0xffffffff80000000)
           != 0)))) {
        uVar7 = 0x7fffffff;
      }
    }
    if ((pbVar5 != param_2) && ((*pbVar5 == 0x3a || (*pbVar5 == 0x7d)))) {
      *(uint *)param_3[1] = uVar7;
      *(undefined4 *)param_3[2] = 1;
      if (*(int *)(*param_3 + 0x10) < 1) {
        *(undefined4 *)(*param_3 + 0x10) = 0xffffffff;
        goto LAB_14001cb71;
      }
      pcVar6 = "cannot switch from automatic to manual argument indexing";
      goto LAB_14001cb4e;
    }
  }
  else if ((bVar9 == 0x5f) || ((byte)((bVar9 & 0xdf) + 0xbf) < 0x1a)) {
    pbVar4 = param_1 + 1;
    do {
      pbVar3 = pbVar4;
      pbVar5 = param_2;
      if (pbVar3 == param_2) break;
      bVar9 = *pbVar3;
      pbVar4 = pbVar3 + 1;
    } while ((((byte)(bVar9 - 0x30) < 10) || (bVar9 == 0x5f)) ||
            (pbVar5 = pbVar3, (byte)((bVar9 & 0xdf) + 0xbf) < 0x1a));
    puVar1 = (undefined8 *)param_3[1];
    *puVar1 = param_1;
    puVar1[1] = (longlong)pbVar5 - (longlong)param_1;
    *(undefined4 *)param_3[2] = 2;
    *(undefined4 *)(*param_3 + 0x10) = 0xffffffff;
LAB_14001cb71:
    if (DAT_1414ef3c0 != ((ulonglong)local_18 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0((ulonglong)local_18 ^ (ulonglong)auStack_58);
    }
    return pbVar5;
  }
  pcVar6 = "invalid format string";
LAB_14001cb4e:
  local_31 = 1;
  fmtquill::v12::format_error::format_error((format_error *)&stack0xffffffffffffffd0,pcVar6);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((format_error *)&stack0xffffffffffffffd0,(ThrowInfo *)&DAT_141412540);
}

