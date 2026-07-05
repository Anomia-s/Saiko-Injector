/**
 * Function: callback_timed_out
 * Address:  1401070c0
 * Signature: undefined callback_timed_out(void)
 * Body size: 328 bytes
 */


ulonglong callback_timed_out(code *param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 unaff_RBP;
  undefined7 uVar8;
  
  cVar2 = FUN_14015ae80();
  uVar8 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if ((cVar2 == '\0') && (iVar3 = FUN_14015b990(0x4000), iVar3 != 0)) {
    puVar4 = (undefined8 *)FUN_140160c40(0x28);
    if (puVar4 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      *puVar4 = param_1;
      puVar4[1] = param_2;
      FUN_140106140(puVar4 + 2,0);
      if (param_3 == '\0') {
        puVar4[3] = 0;
      }
      else {
        lVar5 = uapi_ms_win_core_synch_l1_2_0dll(0);
        puVar4[3] = lVar5;
        if (lVar5 == 0) {
          FUN_140160cf0(puVar4);
          uVar6 = 0;
          goto LAB_14010713d;
        }
      }
      puVar4[4] = 0;
      FUN_1401552a0(DAT_141525490);
      puVar1 = puVar4;
      if (DAT_141525498 != (undefined8 *)0x0) {
        DAT_141525498[4] = puVar4;
        puVar1 = DAT_1415254a0;
      }
      DAT_1415254a0 = puVar1;
      DAT_141525498 = puVar4;
      FUN_1401552c0(DAT_141525490);
      uVar6 = CONCAT71(uVar8,1);
      if (param_3 != '\0') {
        FUN_140138380(puVar4[3],30000);
        iVar3 = FUN_140106170(puVar4 + 2);
        if (iVar3 == 2) {
          if (puVar4[3] != 0) {
            FUN_140158210();
          }
          FUN_140160cf0(puVar4);
          pcVar7 = "Callback canceled";
        }
        else {
          if (iVar3 == 1) {
            if (puVar4[3] != 0) {
              FUN_140158210();
            }
            FUN_140160cf0(puVar4);
            goto LAB_14010713d;
          }
          pcVar7 = "Callback timed out";
        }
        uVar6 = FUN_1400fbed0(pcVar7);
        return uVar6;
      }
    }
  }
  else {
    (*param_1)(param_2);
    uVar6 = CONCAT71(uVar8,1);
  }
LAB_14010713d:
  return uVar6 & 0xffffffff;
}

