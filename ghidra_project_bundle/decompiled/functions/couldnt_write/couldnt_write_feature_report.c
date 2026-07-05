/**
 * Function: couldnt_write_feature_report
 * Address:  1406436a0
 * Signature: undefined couldnt_write_feature_report(void)
 * Body size: 373 bytes
 */


void couldnt_write_feature_report
               (longlong *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong lVar1;
  uint5 uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  double dVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    pcVar8 = strchr(param_4,0x2e);
    if (pcVar8 == (char *)0x0) {
      cVar5 = FUN_140110690(param_4,1);
      uVar4 = 100;
      if (cVar5 == '\0') {
        uVar4 = 0;
      }
    }
    else {
      dVar9 = atof(param_4);
      iVar6 = 0xff;
      if ((int)(dVar9 * 100.0) < 0xff) {
        iVar6 = (int)(dVar9 * 100.0);
      }
      uVar4 = (undefined1)iVar6;
    }
    lVar1 = *param_1;
    uStack_80 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_48 = 0;
    local_88._0_5_ = CONCAT14(uVar4,0x2d038700);
    uVar2 = (uint5)local_88;
    local_88 = (ulonglong)(uint5)local_88;
    uVar3 = local_88;
    if (*(char *)(lVar1 + 0x54) == '\0') {
      iVar6 = 0x32;
      do {
        iVar7 = FUN_14017a740(*(undefined8 *)(lVar1 + 0x80),&local_88,0x41);
        if (-1 < iVar7) goto LAB_1406437e3;
        setwaitabletimerex(500000);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    else {
      uStack_30 = 0;
      local_28 = 0;
      local_88._1_4_ = SUB54(uVar2,1);
      local_38 = (ulonglong)CONCAT42(local_88._1_4_,0xc003);
      local_88 = uVar3;
      iVar6 = FUN_14017a740(*(undefined8 *)(lVar1 + 0x80),&local_38,0x14);
      if (-1 < iVar6) goto LAB_1406437e3;
    }
    FUN_1400fbed0("Couldn\'t write feature report");
  }
LAB_1406437e3:
  if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_20 ^ (ulonglong)auStack_a8);
  }
  return;
}

