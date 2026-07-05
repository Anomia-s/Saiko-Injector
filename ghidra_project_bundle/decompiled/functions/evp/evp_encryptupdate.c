/**
 * Function: evp_encryptupdate
 * Address:  140b85560
 * Signature: undefined evp_encryptupdate(void)
 * Body size: 548 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
evp_encryptupdate(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 int param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong local_res8;
  
  if ((int)param_1[2] == 0) {
    uVar2 = assertion_failed_b_sizeofctx_final();
    return uVar2;
  }
  if (param_3 == (undefined4 *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x3db,"EVP_EncryptUpdate");
    FUN_140b91cc0(6,0xc0102,0);
    return 0;
  }
  *param_3 = 0;
  if ((int)param_1[2] == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x3e1,"EVP_EncryptUpdate");
    FUN_140b91cc0(6,0x94,0);
    return 0;
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x3e6,"EVP_EncryptUpdate");
    FUN_140b91cc0(6,0x83,0);
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x70) == 0) {
    uVar2 = assertion_failed_bl_intsizeofctx_buf();
    return uVar2;
  }
  if (*(code **)(lVar1 + 0x98) != (code *)0x0) {
    iVar3 = *(int *)(lVar1 + 4);
    if (0 < iVar3) {
      if (iVar3 == 1) {
        iVar3 = 0;
      }
      uVar2 = (**(code **)(lVar1 + 0x98))
                        (param_1[0x16],param_2,&local_res8,(longlong)iVar3 + (longlong)param_5,
                         param_4,(longlong)param_5);
      if ((int)uVar2 != 0) {
        if (0x7fffffff < local_res8) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\evp_enc.c",0x3fa,"EVP_EncryptUpdate");
          FUN_140b91cc0(6,0xbd,0);
          return 0;
        }
        *param_3 = (int)local_res8;
      }
      return uVar2;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\evp_enc.c",0x3f0,"EVP_EncryptUpdate");
  FUN_140b91cc0(6,0xbd,0);
  return 0;
}

