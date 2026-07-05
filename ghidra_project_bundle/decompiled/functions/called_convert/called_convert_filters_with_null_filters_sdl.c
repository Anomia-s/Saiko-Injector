/**
 * Function: called_convert_filters_with_null_filters_sdl
 * Address:  14046b740
 * Signature: undefined called_convert_filters_with_null_filters_sdl(void)
 * Body size: 520 bytes
 */


longlong called_convert_filters_with_null_filters_sdl
                   (undefined4 *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  local_60 = param_3;
  if (param_1 == (undefined4 *)0x0) {
    FUN_1400fbed0("Called convert_filters() with NULL filters (SDL bug)");
  }
  else {
    lVar1 = FUN_1400fcda0(param_4);
    if (lVar1 != 0) {
      if (0 < (int)param_2) {
        local_70 = -(ulonglong)param_2;
        uVar6 = 1;
        local_68 = (ulonglong)param_2;
        do {
          local_58 = *param_1;
          uStack_54 = param_1[1];
          uStack_50 = param_1[2];
          uStack_4c = param_1[3];
          local_80 = param_12;
          local_88 = param_11;
          local_90 = param_10;
          local_98 = param_9;
          lVar2 = sssss(&local_58,local_60,param_7,param_8);
          if (lVar2 == 0) goto LAB_14046b90f;
          uVar7 = param_6;
          if (uVar6 < local_68) {
            uVar7 = param_5;
          }
          lVar3 = FUN_1400fc570(lVar1);
          lVar4 = FUN_1400fc570(lVar2);
          lVar5 = FUN_1400fc570(uVar7);
          lVar4 = lVar5 + lVar4 + lVar3 + 1;
          lVar3 = FUN_140160cc0(lVar1,lVar4);
          if (lVar3 == 0) {
            FUN_140160cf0(lVar2);
            goto LAB_14046b90f;
          }
          FUN_1400fcd40(lVar3,lVar2,lVar4);
          FUN_1400fcd40(lVar3,uVar7,lVar4);
          FUN_140160cf0(lVar2);
          param_1 = param_1 + 4;
          lVar2 = local_70 + uVar6;
          uVar6 = uVar6 + 1;
          lVar1 = lVar3;
        } while (lVar2 != 0);
      }
      lVar2 = FUN_1400fc570(lVar1);
      lVar3 = FUN_1400fc570(param_6);
      lVar3 = lVar2 + lVar3 + 1;
      lVar2 = FUN_140160cc0(lVar1,lVar3);
      if (lVar2 != 0) {
        FUN_1400fcd40(lVar2,param_6,lVar3);
        goto LAB_14046b916;
      }
LAB_14046b90f:
      FUN_140160cf0(lVar1);
    }
  }
  lVar2 = 0;
LAB_14046b916:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_b8);
  }
  return lVar2;
}

