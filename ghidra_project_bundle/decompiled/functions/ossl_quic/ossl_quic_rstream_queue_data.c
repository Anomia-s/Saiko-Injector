/**
 * Function: ossl_quic_rstream_queue_data
 * Address:  140c57210
 * Signature: undefined ossl_quic_rstream_queue_data(void)
 * Body size: 175 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_quic_rstream_queue_data
               (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
               longlong param_5,int param_6)

{
  undefined1 auStack_58 [32];
  int local_38;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x140c5721a;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  if (param_4 == 0) {
    if (param_5 != 0) goto LAB_140c57253;
  }
  else if (param_5 != 0) goto LAB_140c57296;
  if (param_6 != 0) {
LAB_140c57296:
    local_20 = param_5 + param_3;
    local_38 = param_6;
    local_28 = param_3;
    FUN_140cd8fd0(param_1,&local_28,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_18 ^ (ulonglong)auStack_58);
  }
LAB_140c57253:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_rstream.c",0x42,"ossl_quic_rstream_queue_data");
  FUN_140b91cc0(0x14,0xc0103,0);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_58);
}

