/**
 * Function: aes_wrap_init
 * Address:  140d11250
 * Signature: undefined aes_wrap_init(void)
 * Body size: 503 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aes_wrap_init(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
             ,longlong *param_6,int param_7)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  longlong local_res8;
  
  iVar1 = FUN_140b69250();
  if (iVar1 != 0) {
    uVar5 = (param_7 * 2 ^ *(uint *)(param_1 + 0x6c)) & 2 ^ *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar5;
    if ((uVar5 & 1) == 0) {
      pcVar2 = FUN_140c1f4f0;
      pcVar4 = FUN_140c1f380;
    }
    else {
      pcVar2 = FUN_140c1f7b0;
      pcVar4 = FUN_140c1f590;
    }
    if (param_7 != 0) {
      pcVar2 = pcVar4;
    }
    *(code **)(param_1 + 0x1b8) = pcVar2;
    if ((param_4 == 0) || (iVar1 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar1 != 0))
    {
      if (param_2 != 0) {
        if (param_3 != *(longlong *)(param_1 + 0x48)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x7c,"aes_wrap_init");
          FUN_140b91cc0(0x39,0x69,0);
          return 0;
        }
        uVar5 = *(uint *)(param_1 + 0x6c) >> 1;
        if ((*(uint *)(param_1 + 0x6c) & 0x40) != 0) {
          uVar5 = ~uVar5;
        }
        if ((uVar5 & 1) == 0) {
          FUN_14076e450(param_2,(int)param_3 * 8,param_1 + 0xc0);
          pcVar2 = FUN_14076e090;
        }
        else {
          FUN_14076e170();
          pcVar2 = FUN_14076dae0;
        }
        *(code **)(param_1 + 0x30) = pcVar2;
      }
      local_res8 = 0;
      if (((param_6 != (longlong *)0x0) && (*param_6 != 0)) &&
         (lVar3 = FUN_140b93540(param_6,"keylen"), lVar3 != 0)) {
        iVar1 = FUN_140b94310(lVar3,&local_res8);
        if (iVar1 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x113,
                     "aes_wrap_set_ctx_params");
          FUN_140b91cc0(0x39,0x67,0);
          return 0;
        }
        if (*(longlong *)(param_1 + 0x48) != local_res8) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x117,
                     "aes_wrap_set_ctx_params");
          FUN_140b91cc0(0x39,0x69,0);
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

