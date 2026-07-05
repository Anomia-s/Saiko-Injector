/**
 * Function: tls_construct_ctos_server_name
 * Address:  140cbad90
 * Signature: undefined tls_construct_ctos_server_name(void)
 * Body size: 273 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_server_name(longlong param_1,undefined8 param_2)

{
  int iVar1;
  size_t sVar2;
  
  if (*(longlong *)(param_1 + 0xa18) == 0) {
    return 2;
  }
  iVar1 = FUN_140c22430(param_2,0,2);
  if (iVar1 != 0) {
    iVar1 = FUN_140c22090(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_140c22090(param_2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_140c22430(param_2,0,1);
        if (iVar1 != 0) {
          sVar2 = strlen(*(char **)(param_1 + 0xa18));
          iVar1 = FUN_140c22660(param_2,*(undefined8 *)(param_1 + 0xa18),sVar2,2);
          if (iVar1 != 0) {
            iVar1 = FUN_140c21e20(param_2);
            if (iVar1 != 0) {
              iVar1 = FUN_140c21e20(param_2);
              if (iVar1 != 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions_clnt.c",0x51,"tls_construct_ctos_server_name");
  FUN_140ba3290(param_1,0x50,0xc0103,0);
  return 0;
}

