/**
 * Function: evp_pkey_sign
 * Address:  140bfed00
 * Signature: undefined evp_pkey_sign(void)
 * Body size: 741 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong evp_pkey_sign(int *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  if (param_1 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\signature.c",0x3ed,"EVP_PKEY_sign");
    FUN_140b91cc0(6,0xc0102,0);
    return 0xffffffff;
  }
  if ((*param_1 != 0x10) && (*param_1 != 0x4000)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\signature.c",0x3f3,"EVP_PKEY_sign");
    FUN_140b91cc0(6,0x97,0);
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0xc) != 0) {
    lVar1 = *(longlong *)(param_1 + 10);
    puVar5 = &DAT_1413a2ad6;
    if (*(undefined1 **)(lVar1 + 0x10) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(lVar1 + 0x10);
    }
    if (*(code **)(lVar1 + 0x38) == (code *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\signature.c",0x3fd,"EVP_PKEY_sign");
      FUN_140b91cc0(6,0xed,"%s sign:%s",*(undefined8 *)(lVar1 + 8),puVar5);
      uVar4 = 0xfffffffe;
    }
    else {
      uVar3 = (**(code **)(lVar1 + 0x38))();
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 1) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\signature.c",0x405,"EVP_PKEY_sign");
        FUN_140b91cc0(6,0xea,"%s sign:%s",*(undefined8 *)(lVar1 + 8),puVar5,param_5);
      }
    }
    return uVar4;
  }
  lVar1 = *(longlong *)(param_1 + 0x1e);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = FUN_140b7e020(*(undefined8 *)(param_1 + 0x22));
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\signature.c",0x40f,"EVP_PKEY_sign");
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
                  ("crypto\\evp\\signature.c",0x40f,"EVP_PKEY_sign");
        FUN_140b91cc0(6,0x9b,0);
        return 0;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000140bfeeb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(param_1 + 0x1e) + 0x48))(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\signature.c",0x40b,"EVP_PKEY_sign");
  FUN_140b91cc0(6,0x96,0);
  return 0xfffffffe;
}

