/**
 * Function: stream_has_no_destination_format
 * Address:  14013b6d0
 * Signature: undefined stream_has_no_destination_format(void)
 * Body size: 336 bytes
 */


longlong stream_has_no_destination_format(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  if (param_1 == (undefined8 *)0x0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","stream");
    lVar2 = 0xffffffff;
    goto LAB_14013b7f0;
  }
  FUN_1401552a0(*param_1);
  if (*(int *)(param_1 + 6) == 0) {
    cVar1 = FUN_1400fbed0("Stream has no source format");
joined_r0x00014013b753:
    if (cVar1 == '\0') {
      FUN_1401552c0(*param_1);
      lVar2 = 0;
      goto LAB_14013b7f0;
    }
  }
  else if (*(int *)((longlong)param_1 + 0x3c) == 0) {
    cVar1 = FUN_1400fbed0("Stream has no destination format");
    goto joined_r0x00014013b753;
  }
  local_48 = FUN_140106180(param_1[0xc]);
  local_50 = param_1[0x14];
  if (local_48 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      local_68 = 0;
      uStack_60 = 0;
      lVar2 = FUN_140142dd0(param_1,&local_48,&local_50,0);
      lVar3 = lVar2 + lVar3;
      if (0x7ffffffe < lVar3) {
        lVar3 = 0x7fffffff;
        break;
      }
    } while (local_48 != 0);
  }
  lVar3 = (ulonglong)((*(uint *)((longlong)param_1 + 0x3c) >> 3 & 0x1f) * *(int *)(param_1 + 8)) *
          lVar3;
  FUN_1401552c0(*param_1);
  lVar2 = 0x7fffffff;
  if (lVar3 < 0x7fffffff) {
    lVar2 = lVar3;
  }
LAB_14013b7f0:
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_88)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_88);
}

