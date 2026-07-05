/**
 * Function: ossl_quic_hdr_protector_init
 * Address:  140cc5d30
 * Signature: undefined ossl_quic_hdr_protector_init(void)
 * Body size: 427 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_quic_hdr_protector_init
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
          longlong param_6)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  if (param_4 == 1) {
    pcVar3 = "AES-128-ECB";
  }
  else if (param_4 == 2) {
    pcVar3 = "AES-256-ECB";
  }
  else {
    if (param_4 != 3) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\quic\\quic_wire_pkt.c",0x22,"ossl_quic_hdr_protector_init");
      FUN_140b91cc0(0x14,0x8010c,0);
      return 0;
    }
    pcVar3 = "ChaCha20";
  }
  lVar2 = FUN_140b857c0();
  param_1[2] = lVar2;
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_wire_pkt.c",0x28,"ossl_quic_hdr_protector_init");
    FUN_140b91cc0(0x14,0x80006,0);
  }
  else {
    lVar2 = FUN_140b84390(param_2,pcVar3,param_3);
    param_1[3] = lVar2;
    if ((lVar2 == 0) || (iVar1 = FUN_140b97ea0(lVar2), param_6 != iVar1)) {
      uVar4 = 0x2f;
    }
    else {
      iVar1 = FUN_140b85520(param_1[2],param_1[3],0,param_5,0,CONCAT44(uVar5,1));
      if (iVar1 != 0) {
        *param_1 = param_2;
        param_1[1] = param_3;
        *(int *)(param_1 + 4) = param_4;
        return 1;
      }
      uVar4 = 0x35;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_wire_pkt.c",uVar4,"ossl_quic_hdr_protector_init");
    FUN_140b91cc0(0x14,0x80006,0);
    FUN_140b858e0(param_1[2]);
    param_1[2] = 0;
    FUN_140b843f0(param_1[3]);
    param_1[3] = 0;
  }
  return 0;
}

