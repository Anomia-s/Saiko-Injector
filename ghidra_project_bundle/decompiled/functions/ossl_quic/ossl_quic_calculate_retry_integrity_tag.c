/**
 * Function: ossl_quic_calculate_retry_integrity_tag
 * Address:  140cc6d40
 * Signature: undefined ossl_quic_calculate_retry_integrity_tag(void)
 * Body size: 1137 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_quic_calculate_retry_integrity_tag
               (undefined8 param_1,undefined8 param_2,char *param_3,byte *param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_1b8 [32];
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined1 local_178 [64];
  undefined8 local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140cc6d5c;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_1b8;
  lVar3 = 0;
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  if (((((*param_3 == '\x04') && (*(int *)(param_3 + 4) != 0)) &&
       (0xf < *(ulonglong *)(param_3 + 0x48))) &&
      ((*(longlong *)(param_3 + 0x50) != 0 && (param_4 != (byte *)0x0)))) &&
     ((param_5 != 0 && (*param_4 < 0x15)))) {
    local_138 = *(undefined8 *)param_3;
    uStack_130 = *(ulonglong *)(param_3 + 8);
    local_128 = *(undefined8 *)(param_3 + 0x10);
    uStack_120 = *(undefined8 *)(param_3 + 0x18);
    local_118 = *(undefined8 *)(param_3 + 0x20);
    uStack_110 = *(undefined8 *)(param_3 + 0x28);
    local_108 = *(undefined8 *)(param_3 + 0x30);
    uStack_100 = *(undefined8 *)(param_3 + 0x38);
    local_f8 = *(undefined4 *)(param_3 + 0x40);
    uStack_f4 = *(undefined4 *)(param_3 + 0x44);
    local_e8 = *(undefined8 *)(param_3 + 0x50);
    uStack_f0 = 0;
    iVar1 = FUN_140c21d10(local_178,local_d8,0x80,0);
    if (iVar1 != 0) {
      iVar1 = FUN_140c22430(local_178,*param_4,1);
      lVar2 = lVar3;
      if ((iVar1 == 0) || (iVar1 = FUN_140c22560(local_178,param_4 + 1,*param_4), iVar1 == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar4 = 0x380;
LAB_140cc7121:
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\quic\\quic_wire_pkt.c",uVar4,"ossl_quic_calculate_retry_integrity_tag");
        FUN_140b91cc0(0x14,0x8000f,0);
      }
      else {
        iVar1 = FUN_140cc65d0(local_178,uStack_130 & 0xff,&local_138,0);
        if (iVar1 != 0) {
          iVar1 = FUN_140c22710(local_178,&local_180);
          if (iVar1 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar4 = 0x38a;
            goto LAB_140cc7121;
          }
          lVar2 = FUN_140b84390(param_1,"AES-128-GCM",param_2);
          if (lVar2 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\quic\\quic_wire_pkt.c",0x391,"ossl_quic_calculate_retry_integrity_tag")
            ;
            FUN_140b91cc0(0x14,0x80006,0);
          }
          else {
            lVar3 = FUN_140b857c0();
            if (lVar3 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\quic\\quic_wire_pkt.c",0x396,
                         "ossl_quic_calculate_retry_integrity_tag");
              FUN_140b91cc0(0x14,0x80006,0);
            }
            else {
              local_190 = 1;
              local_198 = &DAT_141285748;
              iVar1 = FUN_140b85520(lVar3,lVar2,0,&DAT_141285738);
              if (iVar1 == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\quic\\quic_wire_pkt.c",0x39c,
                           "ossl_quic_calculate_retry_integrity_tag");
                FUN_140b91cc0(0x14,0x80006,0);
              }
              else {
                local_198 = (undefined *)CONCAT44(local_198._4_4_,(undefined4)local_180);
                iVar1 = evp_encryptupdate(lVar3,0,&local_188,local_d8);
                if (iVar1 == 1) {
                  local_198 = (undefined *)
                              CONCAT44(local_198._4_4_,*(int *)(param_3 + 0x48) + -0x10);
                  iVar1 = evp_encryptupdate(lVar3,0,&local_188,*(undefined8 *)(param_3 + 0x50));
                  if (iVar1 == 1) {
                    iVar1 = FUN_140b85790(lVar3,0,&local_184);
                    if (iVar1 == 1) {
                      iVar1 = FUN_140b85be0(lVar3,0x10,0x10,param_5);
                      if (iVar1 != 1) {
                        d_aplatformplatformopenssl_srccryptoerrerr_lo();
                        d_aplatformplatformopenssl_srccryptoerrerr_lo
                                  ("ssl\\quic\\quic_wire_pkt.c",0x3b6,
                                   "ossl_quic_calculate_retry_integrity_tag");
                        FUN_140b91cc0(0x14,0x80006,0);
                      }
                    }
                    else {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      d_aplatformplatformopenssl_srccryptoerrerr_lo
                                ("ssl\\quic\\quic_wire_pkt.c",0x3af,
                                 "ossl_quic_calculate_retry_integrity_tag");
                      FUN_140b91cc0(0x14,0x80006,0);
                    }
                  }
                  else {
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    d_aplatformplatformopenssl_srccryptoerrerr_lo
                              ("ssl\\quic\\quic_wire_pkt.c",0x3a9,
                               "ossl_quic_calculate_retry_integrity_tag");
                    FUN_140b91cc0(0x14,0x80006,0);
                  }
                }
                else {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\quic\\quic_wire_pkt.c",0x3a2,
                             "ossl_quic_calculate_retry_integrity_tag");
                  FUN_140b91cc0(0x14,0x80006,0);
                }
              }
            }
          }
        }
      }
      FUN_140b843f0(lVar2);
      FUN_140b858e0(lVar3);
      FUN_140c21e60(local_178);
      goto LAB_140cc71a2;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_wire_pkt.c",0x376,"ossl_quic_calculate_retry_integrity_tag");
    uVar4 = 0x8000f;
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_wire_pkt.c",0x368,"ossl_quic_calculate_retry_integrity_tag");
    uVar4 = 0x80106;
  }
  FUN_140b91cc0(0x14,uVar4,0);
  FUN_140b843f0(0);
  FUN_140b858e0(0);
LAB_140cc71a2:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_1b8);
}

