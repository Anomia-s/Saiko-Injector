/**
 * Function: member_ss_has_an_invalid_error_range_ff
 * Address:  1405e79e0
 * Signature: undefined member_ss_has_an_invalid_error_range_ff(void)
 * Body size: 966 bytes
 */


undefined8
member_ss_has_an_invalid_error_range_ff
          (double param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined1 uVar6;
  undefined8 in_RCX;
  undefined8 uVar7;
  char *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  
  bVar9 = param_3[5] != param_3[6];
  if ((bVar9) && ((double)param_3[6] < (double)param_3[5])) {
    uVar10 = *param_3;
    uVar4 = FUN_1403ae340(in_RCX,0,param_2,".",0);
    uVar4 = FUN_1403d2d90(uVar4);
    pcVar8 = "member \'%s.%s\' has an invalid value range [%f..%f]";
    uVar7 = 0x1b1;
    goto LAB_1405e7d62;
  }
  if (param_3[7] != param_3[8]) {
    dVar1 = (double)param_3[8];
    if (dVar1 < (double)param_3[7]) {
      uVar10 = *param_3;
      uVar4 = FUN_1403ae340(in_RCX,0,param_2,".",0);
      uVar4 = FUN_1403d2d90(uVar4);
      pcVar8 = "member \'%s.%s\' has an invalid error range [%f..%f]";
      uVar7 = 0x1bb;
      goto LAB_1405e7d62;
    }
    bVar9 = true;
    if (((param_3[5] != param_3[6]) && (param_3[7] != param_3[8])) &&
       ((param_1 = (double)param_3[5], (double)param_3[7] < param_1 ||
        ((double)param_3[6] <= dVar1 && dVar1 != (double)param_3[6])))) {
      uVar10 = *param_3;
      uVar4 = FUN_1403ae340(param_1,0,param_2,".",0);
      uVar4 = FUN_1403d2d90(uVar4);
      pcVar8 = "error range of member \'%s.%s\' overlaps with value range";
      uVar7 = 0x1c1;
      goto LAB_1405e7d62;
    }
  }
  if (param_3[9] == param_3[10]) {
    if (!bVar9) {
      uVar6 = 0;
      goto LAB_1405e7d06;
    }
  }
  else {
    dVar1 = (double)param_3[9];
    dVar2 = (double)param_3[10];
    if (dVar2 < dVar1) {
      uVar10 = *param_3;
      uVar4 = FUN_1403ae340(param_1,0,param_2,".",0);
      uVar4 = FUN_1403d2d90(uVar4);
      pcVar8 = "member \'%s.%s\' has an invalid warning range [%f..%f]";
      uVar7 = 0x1cb;
      goto LAB_1405e7d62;
    }
    if (((param_3[5] != param_3[6]) && (param_3[9] != param_3[10])) &&
       ((param_1 = (double)param_3[5], dVar1 < param_1 ||
        ((double)param_3[6] <= dVar2 && dVar2 != (double)param_3[6])))) {
      uVar10 = *param_3;
      uVar4 = FUN_1403ae340(param_1,0,param_2,".",0);
      uVar4 = FUN_1403d2d90(uVar4);
      pcVar8 = "warning range of member \'%s.%s\' overlaps with value range";
      uVar7 = 0x1d1;
      goto LAB_1405e7d62;
    }
    if (((param_3[7] != param_3[8]) && (param_3[9] != param_3[10])) &&
       ((param_1 = (double)param_3[7], dVar1 < param_1 ||
        ((double)param_3[8] <= dVar2 && dVar2 != (double)param_3[8])))) {
      uVar10 = *param_3;
      uVar4 = FUN_1403ae340(param_1,0,param_2,".",0);
      uVar4 = FUN_1403d2d90(uVar4);
      pcVar8 = "warning range of member \'%s.%s\' overlaps with error range";
      uVar7 = 0x1d7;
      goto LAB_1405e7d62;
    }
  }
  puVar5 = (uint *)FUN_1400ba4f0(param_1,param_3[1],0x163);
  if (puVar5 != (uint *)0x0) {
    uVar3 = *puVar5;
    if (0x12 < uVar3) {
LAB_1405e7d80:
      redabortreset_bluesreset
                (2,
                 "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/struct_ts.c"
                 ,0x19c,0);
      (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = 1;
    if ((0x3ff4U >> (uVar3 & 0x1f) & 1) != 0) {
LAB_1405e7d06:
      *param_4 = uVar6;
      return 0;
    }
    if ((0x7c00aU >> (uVar3 & 0x1f) & 1) == 0) goto LAB_1405e7d80;
  }
  uVar10 = *param_3;
  uVar4 = FUN_1403ae340(in_RCX,0,param_2,".",0);
  uVar4 = FUN_1403d2d90(uVar4);
  pcVar8 = "member \'%s.%s\' has an value/error/warning range, but is not a number";
  uVar7 = 0x1df;
LAB_1405e7d62:
  FUN_140399630(0xfffffffd,
                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/struct_ts.c"
                ,uVar7,pcVar8,uVar4,uVar10);
  return 0xffffffff;
}

