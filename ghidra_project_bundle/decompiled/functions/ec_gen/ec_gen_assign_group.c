/**
 * Function: ec_gen_assign_group
 * Address:  140d32460
 * Signature: undefined ec_gen_assign_group(void)
 * Body size: 279 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_gen_assign_group(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar2 = FUN_140c0e170(*param_1,0);
  if (lVar2 == 0) {
    return 0;
  }
  if (param_1[0x10] == 0) {
    iVar1 = FUN_140d33100(param_1);
    if (iVar1 == 0) goto LAB_140d324a3;
  }
  else {
    if (param_1[2] != 0) {
      iVar1 = FUN_140c14e60();
      if (iVar1 < 0) goto LAB_140d324a3;
      FUN_140b9bdd0(param_1[0x10],iVar1);
    }
    if (param_1[3] != 0) {
      iVar1 = FUN_140c14fb0();
      if (iVar1 < 0) goto LAB_140d324a3;
      FUN_140c0bdc0(param_1[0x10],iVar1);
    }
  }
  if (param_1[0x10] == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\keymgmt\\ec_kmgmt.c",0x4f5,"ec_gen_assign_group");
    FUN_140b91cc0(0x39,0xb1,0);
  }
  else {
    iVar1 = FUN_140c0e3a0(lVar2);
    if (0 < iVar1) {
      if ((*(uint *)(param_1 + 0xf) & 3) == 0) {
        return lVar2;
      }
      iVar1 = FUN_140c0e600(lVar2);
      if (iVar1 != 0) {
        return lVar2;
      }
    }
  }
LAB_140d324a3:
  FUN_140c0e290(lVar2);
  return 0;
}

