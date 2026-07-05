/**
 * Function: gen_type_set_to_unsupported_value_d
 * Address:  140d2e920
 * Signature: undefined gen_type_set_to_unsupported_value_d(void)
 * Body size: 499 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong gen_type_set_to_unsupported_value_d
                   (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar4 = 0;
  iVar2 = FUN_140b69250();
  if (((iVar2 == 0) || (param_1 == (undefined8 *)0x0)) ||
     (lVar3 = FUN_140c0b1d0(*param_1), lVar3 == 0)) {
    return 0;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x3c);
  bVar6 = false;
  if (uVar1 == 2) {
    uVar1 = (uint)((ulonglong)param_1[3] < 0x800);
    *(uint *)((longlong)param_1 + 0x3c) = uVar1;
    bVar6 = uVar1 == 2;
  }
  if (uVar1 < 2 || bVar6) {
    param_1[0xb] = param_2;
    param_1[0xc] = param_3;
    lVar4 = FUN_140bfc730();
    if (lVar4 != 0) {
      FUN_140bfc790(lVar4,FUN_140d2f2f0,param_1);
    }
    plVar5 = (longlong *)FUN_140b74ca0(lVar3);
    if (((param_1[1] == 0) || (iVar2 = FUN_140c7b270(plVar5), iVar2 != 0)) &&
       ((param_1[5] == 0 || (iVar2 = FUN_140c7b0b0(plVar5,param_1[5],param_1[6]), iVar2 != 0)))) {
      if (*(int *)(param_1 + 7) == -1) {
        if (*(int *)((longlong)param_1 + 0x44) != 0) {
          FUN_140c7b160(plVar5);
        }
      }
      else {
        FUN_140c7b150(plVar5);
        if (*(int *)(param_1 + 8) != -1) {
          FUN_140c0e5c0(plVar5);
        }
      }
      if (param_1[9] != 0) {
        FUN_140c7b190(plVar5,param_1[9],param_1[10]);
      }
      if ((((*(byte *)(param_1 + 2) & 4) == 0) ||
          (iVar2 = FUN_140d9e300(lVar3,*(undefined4 *)((longlong)param_1 + 0x3c),
                                 *(undefined4 *)(param_1 + 3),*(undefined4 *)(param_1 + 4),lVar4),
          0 < iVar2)) &&
         ((FUN_140c7b170(plVar5,4,*(int *)((longlong)param_1 + 0x3c) == 1),
          (*(byte *)(param_1 + 2) & 3) == 0 ||
          ((((*plVar5 != 0 && (plVar5[1] != 0)) && (plVar5[2] != 0)) &&
           (iVar2 = FUN_140c7e090(lVar3), 0 < iVar2)))))) goto LAB_140d2eae9;
    }
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x278,"dsa_gen");
    FUN_140b91cc0(0x39,0xc0103,"gen_type set to unsupported value %d",
                  *(undefined4 *)((longlong)param_1 + 0x3c));
  }
  FUN_140c0af60(lVar3);
  lVar3 = 0;
LAB_140d2eae9:
  FUN_140bfc760(lVar4);
  return lVar3;
}

