/**
 * Function: tls_parse_ctos_server_cert_type
 * Address:  140cba470
 * Signature: undefined tls_parse_ctos_server_cert_type(void)
 * Body size: 274 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_server_cert_type(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(param_1 + 0x1598) == 0) {
    *(undefined2 *)(param_1 + 0xb4a) = 0;
    return 1;
  }
  if (param_2[1] == 0) {
LAB_140cba547:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar4 = 0x960;
  }
  else {
    uVar3 = param_2[1] - 1;
    uVar5 = (ulonglong)*(byte *)*param_2;
    pbVar1 = (byte *)*param_2 + 1;
    if ((uVar3 < uVar5) || (uVar3 != uVar5)) goto LAB_140cba547;
    *param_2 = (longlong)(pbVar1 + uVar5);
    param_2[1] = 0;
    if (uVar5 != 0) {
      cVar2 = FUN_140cbab80(*(undefined8 *)(param_1 + 0x1598),*(undefined8 *)(param_1 + 0x15a0),
                            pbVar1,uVar5,param_1 + 0xb4a);
      *(char *)(param_1 + 0xb4b) = cVar2;
      if (cVar2 == '\x01') {
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions_srvr.c",0x974,"tls_parse_ctos_server_cert_type");
      uVar4 = 0x2b;
      goto LAB_140cba569;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar4 = 0x965;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions_srvr.c",uVar4,"tls_parse_ctos_server_cert_type");
  uVar4 = 0x32;
LAB_140cba569:
  FUN_140ba3290(param_1,uVar4,0x6e,0);
  return 0;
}

