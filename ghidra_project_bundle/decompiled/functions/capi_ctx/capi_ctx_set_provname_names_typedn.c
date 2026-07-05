/**
 * Function: capi_ctx_set_provname_names_typedn
 * Address:  140c77b60
 * Signature: undefined capi_ctx_set_provname_names_typedn(void)
 * Body size: 428 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void capi_ctx_set_provname_names_typedn(longlong param_1,LPCSTR param_2,DWORD param_3,int param_4)

{
  LPCWSTR szProvider;
  undefined8 uVar1;
  uint uVar2;
  BOOL BVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStackY_50;
  undefined1 auStackY_48 [32];
  HCRYPTPROV local_18;
  ulonglong local_10;
  
  puVar6 = auStackY_48;
  local_10 = DAT_1414ef3c0 ^ (ulonglong)&local_18;
  uStackY_50 = 0x140c77bb0;
  enginese_capic(param_1,"capi_ctx_set_provname, name=%s, type=%d\n",param_2,param_3);
  if (param_4 == 0) {
LAB_140c77c58:
    *(undefined8 *)(puVar6 + -8) = 0x140c77c6d;
    lVar5 = FUN_140b8c830(param_2,"engines\\e_capi.c",0x692);
    puVar7 = puVar6;
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(puVar6 + -8) = 0x140c77c8f;
      FUN_140b8d990(uVar1,"engines\\e_capi.c",0x695);
      *(longlong *)(param_1 + 0x18) = lVar5;
      *(DWORD *)(param_1 + 0x20) = param_3;
    }
  }
  else {
    uStackY_50 = 0x140c77bd6;
    uVar2 = MultiByteToWideChar(0,0,param_2,-1,(LPWSTR)0x0,0);
    puVar7 = auStackY_48;
    if (uVar2 != 0) {
      uVar4 = (ulonglong)uVar2 * 2 + 0xf;
      if (uVar4 <= (ulonglong)uVar2 * 2) {
        uVar4 = 0xffffffffffffff0;
      }
      uStackY_50 = 0x140c77c01;
      lVar5 = -(uVar4 & 0xfffffffffffffff0);
      puVar6 = auStackY_48 + lVar5;
      *(uint *)(&stack0xffffffffffffffe0 + lVar5) = uVar2;
      szProvider = (LPCWSTR)((longlong)&local_18 + lVar5);
      *(LPCWSTR *)(&stack0xffffffffffffffd8 + lVar5) = szProvider;
      *(undefined8 *)(auStackY_48 + lVar5 + -8) = 0x140c77c25;
      MultiByteToWideChar(0,0,param_2,-1,*(LPWSTR *)(&stack0xffffffffffffffd8 + lVar5),
                          *(int *)(&stack0xffffffffffffffe0 + lVar5));
      puVar7 = auStackY_48 + lVar5;
      if (szProvider != (LPCWSTR)0x0) {
        *(undefined4 *)(&stack0xffffffffffffffd8 + lVar5) = 0xf0000000;
        *(undefined8 *)(auStackY_48 + lVar5 + -8) = 0x140c77c48;
        BVar3 = CryptAcquireContextW
                          (&local_18,(LPCWSTR)0x0,szProvider,param_3,
                           *(DWORD *)(&stack0xffffffffffffffd8 + lVar5));
        puVar7 = auStackY_48 + lVar5;
        if (BVar3 != 0) {
          *(undefined8 *)(auStackY_48 + lVar5 + -8) = 0x140c77c58;
          CryptReleaseContext(local_18,0);
          goto LAB_140c77c58;
        }
      }
    }
    if (DAT_141700c98 == 0) {
      *(undefined8 *)(puVar7 + -8) = 0x140c77ccc;
      DAT_141700c98 = FUN_140b92700();
    }
    *(undefined8 *)(puVar7 + -8) = 0x140c77cd7;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    *(undefined8 *)(puVar7 + -8) = 0x140c77cef;
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    *(undefined8 *)(puVar7 + -8) = 0x140c77d02;
    FUN_140b91cc0(DAT_141700c98,0x68,0);
    *(undefined8 *)(puVar7 + -8) = 0x140c77d16;
    d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x68c,0);
    *(undefined8 *)(puVar7 + -8) = 0x140c77d1b;
    error_code_0x();
  }
  uVar4 = local_10 ^ (ulonglong)&local_18;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -8) = &UNK_140c77ca8;
  FUN_140b65db0(uVar4);
}

