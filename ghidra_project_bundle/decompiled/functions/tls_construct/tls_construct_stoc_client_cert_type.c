/**
 * Function: tls_construct_stoc_client_cert_type
 * Address:  140cba0b0
 * Signature: undefined tls_construct_stoc_client_cert_type(void)
 * Body size: 407 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_client_cert_type(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0xb49) == '\x02') &&
     ((iVar1 = FUN_140bbc430(), iVar1 != 0 || (*(int *)(param_1 + 0xba0) == 2)))) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_srvr.c",0x8df,"tls_construct_stoc_client_cert_type");
    FUN_140ba3290(param_1,0x2b,0x6e,0);
    return 0;
  }
  if (*(char *)(param_1 + 0xb48) == '\0') {
    *(undefined1 *)(param_1 + 0xb49) = 0;
    uVar2 = 2;
  }
  else {
    iVar1 = FUN_140bbc430(param_1);
    if ((((iVar1 == 0) && (*(int *)(param_1 + 0xba0) != 2)) ||
        (*(char *)(param_1 + 0xb49) != '\x01')) || (*(longlong *)(param_1 + 0x1588) == 0)) {
      *(undefined1 *)(param_1 + 0xb49) = 0;
      uVar2 = 2;
      *(undefined1 *)(param_1 + 0xb48) = 0;
    }
    else {
      iVar1 = FUN_140c22430(param_2,0x13,2);
      if (((iVar1 == 0) || (iVar1 = FUN_140c22090(param_2,2), iVar1 == 0)) ||
         ((iVar1 = FUN_140c22430(param_2,*(undefined1 *)(param_1 + 0xb48),1), iVar1 == 0 ||
          (iVar1 = FUN_140c21e20(param_2), iVar1 == 0)))) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\extensions_srvr.c",0x8f9,"tls_construct_stoc_client_cert_type");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

