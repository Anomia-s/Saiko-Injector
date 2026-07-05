/**
 * Function: assertion_failed_b_sizeofctx_buf
 * Address:  140b84a50
 * Signature: undefined assertion_failed_b_sizeofctx_buf(void)
 * Body size: 604 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 assertion_failed_b_sizeofctx_buf(longlong *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong local_res18 [2];
  
  if (param_3 == (uint *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x419,"EVP_EncryptFinal_ex");
    FUN_140b91cc0(6,0xc0102,0);
    return 0;
  }
  *param_3 = 0;
  if ((int)param_1[2] == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x41f,"EVP_EncryptFinal_ex");
    FUN_140b91cc0(6,0x94,0);
    return 0;
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x424,"EVP_EncryptFinal_ex");
    uVar5 = 0x83;
  }
  else if (*(longlong *)(lVar2 + 0x70) == 0) {
    if ((*(uint *)(lVar2 + 0x10) & 0x100000) != 0) {
      uVar3 = (**(code **)(lVar2 + 0x20))(param_1,param_2,0,0);
      if ((int)uVar3 < 0) {
        return 0;
      }
      *param_3 = uVar3;
      return 1;
    }
    uVar3 = *(uint *)(lVar2 + 4);
    if (uVar3 < 0x21) {
      if (uVar3 == 1) {
        return 1;
      }
    }
    else {
      s_d_openssl_internal_error_sn
                ("assertion failed: b <= sizeof(ctx->buf)","crypto\\evp\\evp_enc.c",1099);
    }
    uVar1 = *(uint *)((longlong)param_1 + 0x14);
    if ((*(uint *)(param_1 + 0xe) & 0x100) == 0) {
      if (uVar1 < uVar3) {
        memset((void *)((ulonglong)uVar1 + 0x38 + (longlong)param_1),uVar3 - uVar1,
               (longlong)(int)(uVar3 - uVar1));
      }
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,uVar3);
      if ((int)uVar5 != 0) {
        *param_3 = uVar3;
        return uVar5;
      }
      return uVar5;
    }
    if (uVar1 == 0) {
      *param_3 = 0;
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x453,"EVP_EncryptFinal_ex");
    uVar5 = 0x8a;
  }
  else {
    iVar4 = FUN_140b981c0();
    if ((iVar4 < 1) || (*(code **)(*param_1 + 0xa0) == (code *)0x0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0x42d;
    }
    else {
      if (iVar4 == 1) {
        iVar4 = 0;
      }
      uVar5 = (**(code **)(*param_1 + 0xa0))(param_1[0x16],param_2,local_res18,(longlong)iVar4);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if (local_res18[0] < 0x80000000) {
        *param_3 = (uint)local_res18[0];
        return uVar5;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0x436;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",uVar5,"EVP_EncryptFinal_ex");
    uVar5 = 0xbc;
  }
  FUN_140b91cc0(6,uVar5,0);
  return 0;
}

