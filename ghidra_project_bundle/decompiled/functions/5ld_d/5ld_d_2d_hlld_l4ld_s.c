/**
 * Function: 5ld_d_2d_hlld_l4ld_s
 * Address:  140ca68e0
 * Signature: undefined 5ld_d_2d_hlld_l4ld_s(void)
 * Body size: 586 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void _ld_d_2d_hlld_l4ld_s
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,uint param_6,byte param_7,uint param_8,undefined4 param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  char *local_d8;
  char *local_d0;
  char local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  pcVar6 = "cons: ";
  bVar1 = false;
  if ((param_8 & 0x20) == 0) {
    pcVar6 = "prim: ";
  }
  iVar3 = -1;
  lVar5 = 0;
  local_e8 = param_3;
  local_e0 = param_4;
  if (param_8 == 0x21) {
    local_d8 = pcVar6;
    iVar2 = FUN_140c07aa0(local_c8,0x80,"%5ld:d=%-2d hl=%ld l=inf  %s",param_2);
  }
  else {
    local_d8 = (char *)CONCAT44(local_d8._4_4_,param_5);
    local_d0 = pcVar6;
    iVar2 = FUN_140c07aa0(local_c8,0x80,"%5ld:d=%-2d hl=%ld l=%4ld %s",param_2);
  }
  if (iVar2 < 1) goto LAB_140ca6b10;
  if (param_1 == 0) {
LAB_140ca6a52:
    pcVar6 = local_c8;
    if ((param_7 & 0xc0) == 0xc0) {
      pcVar7 = "priv [ %d ] ";
LAB_140ca6aa1:
      FUN_140c07aa0(local_c8,0x80,pcVar7,param_6);
    }
    else {
      if ((char)param_7 < '\0') {
        pcVar7 = "cont [ %d ]";
        goto LAB_140ca6aa1;
      }
      if ((param_7 & 0x40) != 0) {
        pcVar7 = "appl [ %d ]";
        goto LAB_140ca6aa1;
      }
      if (0x1e < (int)param_6) {
        pcVar7 = "<ASN1 %d>";
        goto LAB_140ca6aa1;
      }
      if (param_6 < 0x1f) {
        pcVar6 = (&PTR_DAT_14127a130)[(int)param_6];
      }
      else {
        pcVar6 = "(unknown)";
      }
    }
    FUN_140c078a0(param_1,"%-18s",pcVar6);
  }
  else {
    iVar3 = FUN_140b74190(param_1,0x4f,0,local_c8);
    if (iVar3 < 1) {
      uVar4 = FUN_140c07890();
      lVar5 = FUN_140b73040(uVar4);
      if (lVar5 == 0) goto LAB_140ca6b10;
      param_1 = FUN_140b744f0(lVar5,param_1);
      if (param_1 == 0) goto LAB_140ca6b10;
      bVar1 = true;
    }
    iVar3 = FUN_140b74190(param_1,0x51,0,0);
    iVar2 = FUN_140b74190(param_1,0x4f,0,local_c8);
    if (0 < iVar2) {
      iVar2 = FUN_140b74190(param_1,0x50,param_9,0);
      if (0 < iVar2) goto LAB_140ca6a52;
    }
  }
  if (-1 < iVar3) {
    FUN_140b74190(param_1,0x50,iVar3,0);
  }
  if (bVar1) {
    FUN_140b74560(param_1);
  }
LAB_140ca6b10:
  FUN_140b73150(lVar5);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_108);
}

