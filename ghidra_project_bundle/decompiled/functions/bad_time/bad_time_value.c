/**
 * Function: bad_time_value
 * Address:  140c2eb30
 * Signature: undefined bad_time_value(void)
 * Body size: 580 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint bad_time_value(undefined8 param_1,int *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  
  iVar1 = FUN_140c2ed80(&local_58);
  if (iVar1 == 0) {
    iVar1 = FUN_140b73860(param_1,"Bad time value",0xe);
    return -(uint)(iVar1 != 0);
  }
  iVar5 = 0;
  iVar1 = *param_2;
  if (((param_2[1] == 0x18) && (0xf < iVar1)) &&
     (*(char *)(*(longlong *)(param_2 + 2) + 0xe) == '.')) {
    pcVar3 = (char *)(*(longlong *)(param_2 + 2) + 0xf);
    iVar4 = 0xf;
    pcVar6 = pcVar3;
    do {
      iVar2 = FUN_140c20af0((int)*pcVar6);
      if (iVar2 == 0) break;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (iVar4 < iVar1);
    if (0 < iVar5) {
      if ((param_3 & 0xf) == 1) {
        iVar1 = FUN_140c078a0(param_1,"%4d-%02d-%02d %02d:%02d:%02d.%.*sZ",local_44 + 0x76c,
                              local_48 + 1,local_4c,local_50,local_54,local_58,iVar5,pcVar3);
      }
      else {
        iVar1 = FUN_140c078a0(param_1,"%s %2d %02d:%02d:%02d.%.*s %d GMT",
                              &DAT_1412516b8 + (longlong)local_48 * 4,local_4c,local_50,local_54,
                              local_58,iVar5,pcVar3,local_44 + 0x76c);
      }
      goto LAB_140c2ed45;
    }
  }
  if ((param_3 & 0xf) == 1) {
    iVar1 = FUN_140c078a0(param_1,"%4d-%02d-%02d %02d:%02d:%02dZ",local_44 + 0x76c,local_48 + 1,
                          local_4c,local_50,local_54,local_58);
  }
  else {
    iVar1 = FUN_140c078a0(param_1,"%s %2d %02d:%02d:%02d %d GMT",
                          &DAT_1412516b8 + (longlong)local_48 * 4,local_4c,local_50,local_54,
                          local_58,local_44 + 0x76c);
  }
LAB_140c2ed45:
  return (uint)(0 < iVar1);
}

