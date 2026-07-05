/**
 * Function: ossl_qrl_enc_level_set_key_update
 * Address:  140d055f0
 * Signature: undefined ossl_qrl_enc_level_set_key_update(void)
 * Body size: 500 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_qrl_enc_level_set_key_update(longlong param_1,uint param_2)

{
  char *_Dst;
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong _Size;
  undefined1 auStack_d8 [32];
  char *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  if (((param_2 < 4) && (lVar4 = (ulonglong)param_2 * 0xd0 + param_1, lVar4 != 0)) && (param_2 == 3)
     ) {
    if (*(char *)(lVar4 + 0x68) == '\x01') {
      if (*(char *)(lVar4 + 0x69) == '\0') {
        *(longlong *)(lVar4 + 0x50) = *(longlong *)(lVar4 + 0x50) + 1;
        *(undefined1 *)(lVar4 + 0x68) = 2;
      }
      else {
        uVar2 = FUN_140cc78d0(*(undefined4 *)(lVar4 + 0x60));
        _Dst = (char *)(lVar4 + 0x8a);
        local_88 = 1;
        _Size = (ulonglong)uVar2;
        local_98 = local_68;
        local_a0 = 0;
        local_a8 = 0;
        local_b0 = 7;
        local_b8 = "quic ku";
        local_90 = _Size;
        iVar3 = FUN_140bbb470(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x48),
                              *(undefined8 *)(lVar4 + 0x28),_Dst);
        if (iVar3 != 0) {
          cVar1 = *(char *)(lVar4 + 0x68);
          if (((cVar1 == '\x01') || (cVar1 == '\x02')) ||
             ((cVar1 == '\x03' && ((~*(uint *)(lVar4 + 0x50) & 1) != 0)))) {
            if (*(longlong *)(lVar4 + 0x30) != 0) {
              FUN_140b858e0();
              *(undefined8 *)(lVar4 + 0x30) = 0;
            }
            FUN_14046e980(lVar4 + 0x6a,0x10);
          }
          local_b8 = _Dst;
          local_b0 = _Size;
          iVar3 = quic_keyquic_hp(param_1,3,1,0);
          if (iVar3 != 0) {
            *(longlong *)(lVar4 + 0x50) = *(longlong *)(lVar4 + 0x50) + 1;
            *(undefined8 *)(lVar4 + 0x58) = 0;
            memcpy(_Dst,local_68,_Size);
          }
        }
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\quic\\quic_record_shared.c",0x166,"ossl_qrl_enc_level_set_key_update");
      FUN_140b91cc0(0x14,0xc0103,0);
    }
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_record_shared.c",0x161,"ossl_qrl_enc_level_set_key_update");
    FUN_140b91cc0(0x14,0x80106,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_d8);
}

