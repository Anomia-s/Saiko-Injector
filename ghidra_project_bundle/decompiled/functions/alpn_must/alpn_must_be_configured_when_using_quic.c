/**
 * Function: alpn_must_be_configured_when_using_quic
 * Address:  140badcf0
 * Signature: undefined alpn_must_be_configured_when_using_quic(void)
 * Body size: 742 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 alpn_must_be_configured_when_using_quic(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  int local_res8 [2];
  longlong local_res10;
  
  if ((*(byte *)(param_1 + 0x15) & 2) != 0) {
    return 0;
  }
  FUN_140b932f0();
  uVar2 = *(uint *)(param_1 + 0x15);
  if ((uVar2 & 1) == 0) {
    piVar4 = (int *)*param_1;
    if ((piVar4 == (int *)0x0) ||
       ((*piVar4 != 0 &&
        ((-1 < (char)*piVar4 || (piVar4 = (int *)FUN_140bc8b20(piVar4), piVar4 == (int *)0x0)))))) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0x312;
    }
    else {
      if (*(int *)(param_1 + 0xf) == 0) {
        if ((*(longlong *)(piVar4 + 0x2ba) != 0) && (*(longlong *)(piVar4 + 700) != 0))
        goto LAB_140badd8b;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\quic\\quic_tls.c",0x321,"ossl_quic_tls_tick");
        pcVar6 = "ALPN must be configured when using QUIC";
        goto LAB_140bade10;
      }
      if (*(longlong *)(*(longlong *)(piVar4 + 2) + 0x2c0) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x31d;
      }
      else {
LAB_140badd8b:
        iVar1 = ossl_quic_tls_configure(param_1);
        if (iVar1 != 0) {
          piVar4[0x58] = piVar4[0x58] | 0x4000;
          if (*(int *)(param_1 + 0xf) == 0) {
            FUN_140b6bcd0(*param_1);
          }
          else {
            FUN_140b6bd50();
          }
          *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) | 1;
          uVar2 = *(uint *)(param_1 + 0x15);
          goto LAB_140baddd2;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x325;
      }
    }
  }
  else {
LAB_140baddd2:
    if ((uVar2 & 4) == 0) {
      iVar1 = ssl_do_handshake(*param_1);
    }
    else {
      iVar1 = ssl_read(*param_1,0,0);
    }
    if (0 < iVar1) {
      if ((*(byte *)(param_1 + 0x15) & 4) != 0) {
LAB_140badfc1:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        return 1;
      }
      FUN_140b697d0(*param_1,&local_res10,local_res8);
      if ((local_res10 != 0) && (local_res8[0] != 0)) {
        *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) | 4;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = (*(code *)param_1[0xb])(param_1[0xc]);
        return uVar5;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\quic\\quic_tls.c",0x351,"ossl_quic_tls_tick");
      pcVar6 = "no application protocol negotiated";
LAB_140bade10:
      FUN_140b91cc0(0x14,0x189,"handshake layer error, error code %llu (0x%llx) (\"%s\")",0x178,
                    0x178,pcVar6);
      if (*(int *)((longlong)param_1 + 0x7c) == 0) {
        return 0;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo(param_1[0x12]);
      param_1[0x13] = 0x178;
      goto LAB_140badf2d;
    }
    iVar3 = FUN_140b934e0();
    iVar1 = FUN_140b6c450(*param_1,iVar1,0 < iVar3);
    if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) || ((iVar1 == 0xb || (iVar1 == 0xc))))
    goto LAB_140badfc1;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar5 = 0x348;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\quic\\quic_tls.c",uVar5,"ossl_quic_tls_tick");
  pcVar6 = "internal error";
  FUN_140b91cc0(0x14,0x189,"handshake layer error, error code %llu (0x%llx) (\"%s\")",1,1,
                "internal error");
  if (*(int *)((longlong)param_1 + 0x7c) == 0) {
    return 0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo(param_1[0x12]);
  param_1[0x13] = 1;
LAB_140badf2d:
  *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) | 2;
  param_1[0x14] = pcVar6;
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  return 0;
}

