/**
 * Function: ssl_handshake_hash
 * Address:  140b6ec60
 * Signature: undefined ssl_handshake_hash(void)
 * Body size: 250 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl_handshake_hash(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4
                           )

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x1b0);
  lVar5 = 0;
  iVar1 = FUN_140b97c20(uVar4);
  if ((iVar1 < 0) || (param_3 < (ulonglong)(longlong)iVar1)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar4 = 0x17dd;
    lVar3 = lVar5;
  }
  else {
    lVar3 = FUN_140b70980();
    if (lVar3 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar4 = 0x17e3;
    }
    else {
      iVar2 = FUN_140b70a90(lVar3,uVar4);
      if (iVar2 != 0) {
        iVar2 = assertion_failed_mdsize_evp_max_md_size(lVar3,param_2,0);
        if (0 < iVar2) {
          *param_4 = (longlong)iVar1;
          lVar5 = 1;
          goto LAB_140b6ed33;
        }
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar4 = 0x17e9;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",uVar4,"ssl_handshake_hash");
  FUN_140ba3290(param_1,0x50,0xc0103,0);
LAB_140b6ed33:
  FUN_140b709d0(lVar3);
  return lVar5;
}

