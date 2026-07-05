/**
 * Function: srp_verify_server_param
 * Address:  140bc46b0
 * Signature: undefined srp_verify_server_param(void)
 * Body size: 380 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 srp_verify_server_param(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_140bfd180(*(undefined8 *)(param_1 + 0xbf8),*(undefined8 *)(param_1 + 0xbf0));
  if (iVar1 < 0) {
    iVar1 = FUN_140bfd180(*(undefined8 *)(param_1 + 0xc08),*(undefined8 *)(param_1 + 0xbf0));
    if (iVar1 < 0) {
      iVar1 = FUN_140bfc7d0(*(undefined8 *)(param_1 + 0xc08));
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0xc38);
        iVar2 = FUN_140bfc870(*(undefined8 *)(param_1 + 0xbf0));
        if (iVar2 < iVar1) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar4 = 0x1a9;
LAB_140bc4736:
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\tls_srp.c",uVar4,"srp_verify_server_param");
          FUN_140ba3290(param_1,0x47,0xf1,0);
          return 0;
        }
        if (*(code **)(param_1 + 0xbd8) == (code *)0x0) {
          lVar3 = FUN_140c4aad0(*(undefined8 *)(param_1 + 0xbf8),*(undefined8 *)(param_1 + 0xbf0));
          if (lVar3 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar4 = 0x1b5;
            goto LAB_140bc4736;
          }
        }
        else {
          iVar1 = (**(code **)(param_1 + 0xbd8))
                            (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0xbc8));
          if (iVar1 < 1) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\tls_srp.c",0x1b0,"srp_verify_server_param");
            FUN_140ba3290(param_1,0x47,0xea,0);
            return 0;
          }
        }
        return 1;
      }
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\tls_srp.c",0x1a4,"srp_verify_server_param");
  FUN_140ba3290(param_1,0x2f,0x186,0);
  return 0;
}

