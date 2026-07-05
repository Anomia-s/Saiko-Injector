/**
 * Function: sssss
 * Address:  14046b950
 * Signature: undefined sssss(void)
 * Body size: 309 bytes
 */


longlong sssss(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = empty_pattern_not_allowed(param_1[1],param_6,param_7,param_8);
  if (lVar1 != 0) {
    if (param_2 == (code *)0x0) {
      lVar2 = FUN_1400fcda0(*param_1);
    }
    else {
      lVar2 = (*param_2)();
    }
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1400fc570(param_3);
      lVar4 = FUN_1400fc570(lVar2);
      lVar5 = FUN_1400fc570(param_4);
      lVar6 = FUN_1400fc570(lVar1);
      lVar7 = FUN_1400fc570(param_5);
      lVar4 = lVar7 + lVar5 + lVar3 + lVar4 + lVar6 + 1;
      lVar3 = FUN_140160c40(lVar4);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1400fd420(lVar3,lVar4,"%s%s%s%s%s",param_3,lVar2,param_4,lVar1,param_5);
      }
      FUN_140160cf0(lVar1);
      lVar1 = lVar2;
    }
    FUN_140160cf0(lVar1);
    return lVar3;
  }
  return 0;
}

