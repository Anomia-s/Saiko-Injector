/**
 * Function: capi_get_key_contnames_provnames_typedn
 * Address:  140c79590
 * Signature: undefined capi_get_key_contnames_provnames_typedn(void)
 * Body size: 575 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
capi_get_key_contnames_provnames_typedn
          (int *param_1,LPCWSTR param_2,wchar_t *param_3,DWORD param_4,DWORD param_5)

{
  int iVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x140c795aa;
  puVar3 = (undefined8 *)FUN_140b8d8d0(0x20,"engines\\e_capi.c",0x5ea);
  if (puVar3 != (undefined8 *)0x0) {
    if (((param_4 == 1) && (DAT_141700cb0 != 0)) &&
       (iVar1 = wcscmp(param_3,L"Microsoft Enhanced Cryptographic Provider v1.0"), iVar1 == 0)) {
      param_3 = L"Microsoft Enhanced RSA and AES Cryptographic Provider";
      param_4 = 0x18;
    }
    if (((param_1 != (int *)0x0) && (1 < *param_1)) && (*(longlong *)(param_1 + 2) != 0)) {
      uVar4 = err_capi_error(param_2);
      uVar5 = err_capi_error(param_3);
      enginese_capic(param_1,"capi_get_key, contname=%s, provname=%s, type=%d\n",uVar4,uVar5,param_4
                     ,uVar6);
      FUN_140b8d990(uVar5,"engines\\e_capi.c",0x5fe);
      FUN_140b8d990(uVar4,"engines\\e_capi.c",0x5ff);
    }
    BVar2 = CryptAcquireContextW
                      (puVar3 + 1,param_2,param_3,param_4,(uint)param_1[0xe] >> 0xc & 0x20);
    if (BVar2 == 0) {
      if (DAT_141700c98 == 0) {
        DAT_141700c98 = FUN_140b92700();
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,
                 "ERR_CAPI_error");
      FUN_140b91cc0(DAT_141700c98,0x68,0);
      d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x605,0);
      error_code_0x();
    }
    else {
      BVar2 = CryptGetUserKey(puVar3[1],param_5,puVar3 + 2);
      if (BVar2 != 0) {
        *(DWORD *)(puVar3 + 3) = param_5;
        *puVar3 = 0;
        return puVar3;
      }
      if (DAT_141700c98 == 0) {
        DAT_141700c98 = FUN_140b92700();
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,
                 "ERR_CAPI_error");
      FUN_140b91cc0(DAT_141700c98,0x75,0);
      d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x60a,0);
      error_code_0x();
      CryptReleaseContext(puVar3[1],0);
    }
    FUN_140b8d990(puVar3,"engines\\e_capi.c",0x614);
  }
  return (undefined8 *)0x0;
}

