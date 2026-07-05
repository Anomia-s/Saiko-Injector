/**
 * Function: aes_xts_stream_update
 * Address:  140d0eaa0
 * Signature: undefined aes_xts_stream_update(void)
 * Body size: 373 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aes_xts_stream_update
          (longlong param_1,longlong param_2,ulonglong *param_3,ulonglong param_4,longlong param_5,
          ulonglong param_6)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if (param_4 < param_6) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\cipher_aes_xts.c",0xdf,"aes_xts_stream_update")
    ;
    uVar3 = 0x6a;
  }
  else {
    iVar2 = FUN_140b69250();
    if (iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x2b0);
      if ((((lVar1 != 0) && (*(longlong *)(param_1 + 0x2b8) != 0)) &&
          ((*(uint *)(param_1 + 0x6c) & 4) != 0)) &&
         (((param_2 != 0 && (param_5 != 0)) && (0xf < param_6)))) {
        if (param_6 < 0x1000001) {
          if (*(code **)(param_1 + 0x2d0) != (code *)0x0) {
            (**(code **)(param_1 + 0x2d0))
                      (param_5,param_2,param_6,lVar1,*(longlong *)(param_1 + 0x2b8),param_1 + 0x20);
            *param_3 = param_6;
            return 1;
          }
          iVar2 = FUN_140c1f0f0((longlong *)(param_1 + 0x2b0),param_1 + 0x20,param_5,param_2,param_6
                                ,CONCAT44(uVar4,*(uint *)(param_1 + 0x6c) >> 1) & 0xffffffff00000001
                               );
          if (iVar2 == 0) {
            *param_3 = param_6;
            return 1;
          }
        }
        else {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\ciphers\\cipher_aes_xts.c",0xca,"aes_xts_cipher");
          FUN_140b91cc0(0x39,0x94,0);
        }
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\cipher_aes_xts.c",0xe4,"aes_xts_stream_update")
    ;
    uVar3 = 0x66;
  }
  FUN_140b91cc0(0x39,uVar3,0);
  return 0;
}

