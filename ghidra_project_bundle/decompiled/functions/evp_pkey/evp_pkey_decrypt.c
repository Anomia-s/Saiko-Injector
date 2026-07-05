/**
 * Function: evp_pkey_decrypt
 * Address:  140c00880
 * Signature: undefined evp_pkey_decrypt(void)
 * Body size: 697 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong evp_pkey_decrypt(int *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
                          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  if (param_1 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\asymcipher.c",300,"EVP_PKEY_decrypt");
    FUN_140b91cc0(6,0x96,0);
    return 0xfffffffe;
  }
  if (*param_1 != 0x400) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\asymcipher.c",0x131,"EVP_PKEY_decrypt");
    FUN_140b91cc0(6,0x97,0);
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0xc) != 0) {
    lVar1 = *(longlong *)(param_1 + 10);
    puVar5 = &DAT_1413a2ad6;
    if (*(undefined1 **)(lVar1 + 0x10) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(lVar1 + 0x10);
    }
    FUN_140b932f0();
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *param_3;
    }
    uVar3 = (**(code **)(lVar1 + 0x48))
                      (*(undefined8 *)(param_1 + 0xc),param_2,param_3,uVar4,param_4,param_5);
    if ((int)uVar3 < 1) {
      iVar2 = FUN_140b934e0();
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\asymcipher.c",0x13d,"EVP_PKEY_decrypt");
        FUN_140b91cc0(6,0xe8,"%s decrypt:%s",*(undefined8 *)(lVar1 + 8),puVar5);
      }
    }
    FUN_140b93470();
    return (ulonglong)uVar3;
  }
  lVar1 = *(longlong *)(param_1 + 0x1e);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xa8) != 0)) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = FUN_140b7e020(*(undefined8 *)(param_1 + 0x22));
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\asymcipher.c",0x148,"EVP_PKEY_decrypt");
        FUN_140b91cc0(6,0xa3,0);
        return 0;
      }
      if (param_2 == 0) {
        *param_3 = (longlong)iVar2;
        return 1;
      }
      if (*param_3 < (ulonglong)(longlong)iVar2) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\asymcipher.c",0x148,"EVP_PKEY_decrypt");
        FUN_140b91cc0(6,0x9b,0);
        return 0;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000140c00a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(param_1 + 0x1e) + 0xa8))(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\evp\\asymcipher.c",0x145,"EVP_PKEY_decrypt");
  FUN_140b91cc0(6,0x96,0);
  return 0xfffffffe;
}

