/**
 * Function: s_d_sn
 * Address:  140c2f450
 * Signature: undefined s_d_sn(void)
 * Body size: 507 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void s_d_sn(code *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_10a8 [32];
  byte *local_1088;
  undefined1 *local_1080;
  byte local_1078 [4];
  undefined4 local_1074;
  undefined4 local_1070 [2];
  undefined1 *local_1068;
  undefined8 local_1060;
  undefined8 local_1058 [2];
  char local_1048 [4096];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_10a8;
  local_1070[0] = FUN_140b8b9d0();
  local_1088 = local_1078;
  iVar1 = FUN_140b91ef0(local_1058,&local_1074,&local_1060,&local_1068);
  while (iVar1 != 0) {
    local_1048[0] = '\0';
    memset(local_1048 + 1,0,0xfff);
    if ((local_1078[0] & 2) == 0) {
      local_1068 = &DAT_1413a2ad6;
    }
    pcVar3 = (char *)FUN_140b8c970(local_1070,4,0);
    pcVar6 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      pcVar6 = "<null>";
    }
    FUN_140c07aa0(local_1048,0x1000,&DAT_1413a6c00,pcVar6);
    sVar4 = strlen(local_1048);
    iVar2 = (int)sVar4;
    err_lx_lx_lx_lx(iVar1,local_1060,local_1048 + iVar2,0x1000 - (longlong)iVar2);
    sVar4 = strlen(local_1048 + iVar2);
    lVar5 = (longlong)((int)sVar4 + iVar2);
    local_1080 = local_1068;
    local_1088 = (byte *)CONCAT44(local_1088._4_4_,local_1074);
    FUN_140c07aa0(local_1048 + lVar5,0x1000 - lVar5,":%s:%d:%s\n",local_1058[0]);
    FUN_140b8d990(pcVar3,"crypto\\err\\err_prn.c",0x2b);
    sVar4 = strlen(local_1048);
    iVar1 = (*param_1)(local_1048,sVar4,param_2);
    if (iVar1 < 1) break;
    local_1088 = local_1078;
    iVar1 = FUN_140b91ef0(local_1058,&local_1074,&local_1060,&local_1068);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_10a8);
}

