/**
 * Function: tls_parse_ctos_client_cert_type
 * Address:  140cba250
 * Signature: undefined tls_parse_ctos_client_cert_type(void)
 * Body size: 257 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_client_cert_type(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x1588) == 0) {
    *(undefined2 *)(param_1 + 0xb48) = 0;
    return 1;
  }
  if (param_2[1] != 0) {
    uVar3 = param_2[1] - 1;
    uVar4 = (ulonglong)*(byte *)*param_2;
    pbVar1 = (byte *)*param_2 + 1;
    if (uVar4 <= uVar3) {
      if (uVar3 == uVar4) {
        *param_2 = (longlong)(pbVar1 + uVar4);
        param_2[1] = 0;
        if (uVar4 != 0) {
          uVar2 = FUN_140cbab80(pbVar1,uVar4,*(undefined8 *)(param_1 + 0x1588),
                                *(undefined8 *)(param_1 + 0x1590),param_1 + 0xb48);
          *(undefined1 *)(param_1 + 0xb49) = uVar2;
          return 1;
        }
        *(undefined1 *)(param_1 + 0xb49) = 2;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x925;
        goto LAB_140cba320;
      }
    }
  }
  *(undefined1 *)(param_1 + 0xb49) = 2;
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  uVar5 = 0x920;
LAB_140cba320:
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions_srvr.c",uVar5,"tls_parse_ctos_client_cert_type");
  FUN_140ba3290(param_1,0x32,0x6e,0);
  return 0;
}

