/**
 * Function: dtls1_read_failed
 * Address:  140c33600
 * Signature: undefined dtls1_read_failed(void)
 * Body size: 174 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dtls1_read_failed(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (0 < (int)param_2) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_dtls.c",0x42d,"dtls1_read_failed");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  iVar1 = FUN_140becad0();
  if (iVar1 != 0) {
    iVar1 = FUN_140ba3330(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_140ba2f50(param_1);
      if (iVar1 != 0) {
        uVar3 = dtls1_check_timeout_num(param_1);
        return uVar3;
      }
      uVar2 = FUN_140b6abb0();
      FUN_140b73010(uVar2,1);
    }
  }
  return (ulonglong)param_2;
}

