/**
 * Function: ossl_cipher_generic_stream_update
 * Address:  140d95570
 * Signature: undefined ossl_cipher_generic_stream_update(void)
 * Body size: 386 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_cipher_generic_stream_update
          (longlong param_1,longlong param_2,ulonglong *param_3,ulonglong param_4,undefined8 param_5
          ,ulonglong param_6)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x6c) & 8) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",499,
               "ossl_cipher_generic_stream_update");
    FUN_140b91cc0(0x39,0x72,0);
    return 0;
  }
  if (param_6 == 0) {
    *param_3 = 0;
  }
  else {
    if (param_4 < param_6) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon.c",0x1fd,
                 "ossl_cipher_generic_stream_update");
      FUN_140b91cc0(0x39,0x6a,0);
      return 0;
    }
    iVar2 = (**(code **)(*(longlong *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,param_6);
    if (iVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon.c",0x202,
                 "ossl_cipher_generic_stream_update");
      FUN_140b91cc0(0x39,0x66,0);
      return 0;
    }
    *param_3 = param_6;
    if (((*(byte *)(param_1 + 0x6c) & 2) == 0) && (*(int *)(param_1 + 0x70) != 0)) {
      if (*(int *)(param_1 + 0x90) != 0) {
        uVar3 = (ulonglong)*(byte *)((param_6 - 1) + param_2) + 1;
        if (param_6 < uVar3) {
          return 0;
        }
        param_6 = param_6 - uVar3;
        *param_3 = param_6;
      }
      uVar3 = *(ulonglong *)(param_1 + 0x98);
      if (param_6 < uVar3) {
        return 0;
      }
      *param_3 = param_6 - uVar3;
      uVar1 = *(ulonglong *)(param_1 + 0x88);
      if (uVar1 != 0) {
        if (param_6 - uVar3 < uVar1) {
          return 0;
        }
        *(ulonglong *)(param_1 + 0x78) = ((param_6 - uVar1) - uVar3) + param_2;
        *param_3 = *param_3 - uVar1;
      }
    }
  }
  return 1;
}

