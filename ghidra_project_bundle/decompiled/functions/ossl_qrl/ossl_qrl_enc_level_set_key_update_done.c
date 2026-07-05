/**
 * Function: ossl_qrl_enc_level_set_key_update_done
 * Address:  140d057f0
 * Signature: undefined ossl_qrl_enc_level_set_key_update_done(void)
 * Body size: 125 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_qrl_enc_level_set_key_update_done(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if ((((uint)param_2 < 4) && (lVar1 = (param_2 & 0xffffffff) * 0xd0 + param_1, lVar1 != 0)) &&
     ((uint)param_2 == 3)) {
    FUN_140d05b70(param_1,param_2,~(uint)*(undefined8 *)(lVar1 + 0x50) & 1);
    *(undefined1 *)(lVar1 + 0x68) = 3;
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_record_shared.c",0x197,"ossl_qrl_enc_level_set_key_update_done");
  FUN_140b91cc0(0x14,0x80106,0);
  return 0;
}

