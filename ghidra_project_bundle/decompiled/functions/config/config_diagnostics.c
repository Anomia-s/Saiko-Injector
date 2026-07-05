/**
 * Function: config_diagnostics
 * Address:  140c1a6b0
 * Signature: undefined config_diagnostics(void)
 * Body size: 441 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int config_diagnostics(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int local_res8 [2];
  
  if (param_1 == 0) {
    return 1;
  }
  iVar6 = 0;
  local_res8[0] = 0;
  FUN_140b932f0();
  iVar1 = groups_names(param_1,0,"config_diagnostics",local_res8);
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  if (iVar1 < 1) {
    uVar2 = FUN_140c17380(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    FUN_140c173b0(*(undefined8 *)(param_1 + 0x28),0 < local_res8[0]);
    uVar2 = (uint)(0 < local_res8[0]);
  }
  uVar5 = param_3 & 0xffffffe8;
  if (uVar2 == 0) {
    uVar5 = param_3;
  }
  FUN_140b932f0();
  if (param_2 != 0) {
    lVar3 = groups_names(param_1,0,param_2);
    if (lVar3 != 0) goto LAB_140c1a79e;
    if ((uVar5 & 0x20) == 0) goto LAB_140c1a77b;
  }
  lVar3 = groups_names(param_1,0,"openssl_conf");
  if (lVar3 == 0) {
LAB_140c1a77b:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    return 1;
  }
LAB_140c1a79e:
  lVar4 = FUN_140c1a380(param_1,lVar3);
  if (lVar4 == 0) {
    if ((uVar5 & 4) != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      return 0;
    }
    FUN_140b93470();
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\conf\\conf_mod.c",0xa3,"CONF_modules_load");
    FUN_140b91cc0(0xe,0x7c,"openssl_conf=%s",lVar3);
    return 0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  iVar1 = FUN_140b77980(lVar4);
  if (iVar1 < 1) {
    return 1;
  }
  while( true ) {
    lVar3 = FUN_140b77990(lVar4,iVar6);
    FUN_140b932f0();
    iVar1 = modules_values_retcode_8d
                      (param_1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),uVar5);
    if ((iVar1 < 1) && ((uVar5 & 1) == 0)) break;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    iVar6 = iVar6 + 1;
    iVar1 = FUN_140b77980(lVar4);
    if (iVar1 <= iVar6) {
      return 1;
    }
  }
  FUN_140b93470();
  return iVar1;
}

