/**
 * Function: dtls_construct_hello_verify_request
 * Address:  140bbec80
 * Signature: undefined dtls_construct_hello_verify_request(void)
 * Body size: 319 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls_construct_hello_verify_request(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint local_res8 [2];
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 8) + 0xd0);
  if (((pcVar1 != (code *)0x0) &&
      (iVar4 = (*pcVar1)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x4f0),local_res8
                        ), iVar4 != 0)) && (local_res8[0] < 0x100)) {
    *(ulonglong *)(*(longlong *)(param_1 + 0x4f0) + 0x100) = (ulonglong)local_res8[0];
    lVar2 = *(longlong *)(param_1 + 0x4f0);
    uVar3 = *(undefined8 *)(lVar2 + 0x100);
    iVar4 = FUN_140c22430(param_2,0xfeff,2);
    if ((iVar4 != 0) && (iVar4 = FUN_140c22660(param_2,lVar2,uVar3,1), iVar4 != 0)) {
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x587,"dtls_construct_hello_verify_request");
    FUN_140ba3290(param_1,0xffffffff,0xc0103,0);
    return 0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\statem_srvr.c",0x580,"dtls_construct_hello_verify_request");
  FUN_140ba3290(param_1,0xffffffff,400,0);
  return 0;
}

