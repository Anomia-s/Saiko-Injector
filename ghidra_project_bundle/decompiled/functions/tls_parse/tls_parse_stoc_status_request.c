/**
 * Function: tls_parse_stoc_status_request
 * Address:  140cbddf0
 * Signature: undefined tls_parse_stoc_status_request(void)
 * Body size: 265 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_stoc_status_request
          (longlong param_1,longlong param_2,int param_3,undefined8 param_4,longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_3 == 0x4000) {
    return 1;
  }
  if (*(int *)(param_1 + 0xa20) != 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_clnt.c",0x5e6,"tls_parse_stoc_status_request");
    FUN_140ba3290(param_1,0x6e,0x6e,0);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x18);
  uVar3 = *(uint *)(*(longlong *)(piVar1 + 0x36) + 0x50) & 8;
  if (((uVar3 != 0) || (*piVar1 < 0x304)) || (*piVar1 == 0x10000)) {
    if (*(longlong *)(param_2 + 8) != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions_clnt.c",0x5ea,"tls_parse_stoc_status_request");
      FUN_140ba3290(param_1,0x32,0x6e,0);
      return 0;
    }
    if (uVar3 != 0) goto LAB_140cbdee4;
  }
  if ((0x303 < *piVar1) && (*piVar1 != 0x10000)) {
    if (param_5 != 0) {
      return 1;
    }
    uVar2 = FUN_140c384a0(param_1,param_2);
    return uVar2;
  }
LAB_140cbdee4:
  *(undefined4 *)(param_1 + 0xa34) = 1;
  return 1;
}

