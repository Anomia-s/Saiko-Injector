/**
 * Function: container_name_s_lend_indexd_flagsdn
 * Address:  140c76190
 * Signature: undefined container_name_s_lend_indexd_flagsdn(void)
 * Body size: 933 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void container_name_s_lend_indexd_flagsdn(longlong param_1,undefined8 param_2)

{
  LPCSTR lpMultiByteStr;
  longlong lVar1;
  uint uVar2;
  HCRYPTPROV HVar3;
  undefined1 *puVar4;
  BOOL BVar5;
  DWORD DVar6;
  BYTE *pbData;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  LPCWSTR szProvider;
  undefined1 *puVar10;
  undefined8 uStackY_70;
  undefined1 auStackY_68 [32];
  DWORD local_38;
  uint uStack_34;
  HCRYPTPROV local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140c761a0;
  puVar10 = auStackY_68;
  local_28 = DAT_1414ef3c0 ^ (ulonglong)&local_38;
  local_38 = 0;
  szProvider = (LPCWSTR)0x0;
  uStackY_70 = 0x140c761ef;
  enginese_capic(param_1,"Listing containers CSP=%s, type = %d\n",*(undefined8 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20));
  if (*(LPCSTR *)(param_1 + 0x18) == (LPCSTR)0x0) {
LAB_140c762d0:
    DVar6 = *(DWORD *)(param_1 + 0x20);
    *(undefined4 *)(puVar10 + 0x20) = 0xf0000000;
    *(undefined8 *)(puVar10 + -8) = 0x140c762eb;
    BVar5 = CryptAcquireContextW(&local_30,(LPCWSTR)0x0,szProvider,DVar6,*(DWORD *)(puVar10 + 0x20))
    ;
    HVar3 = local_30;
    if (BVar5 != 0) {
      *(undefined4 *)(puVar10 + 0x20) = 1;
      *(undefined8 *)(puVar10 + -8) = 0x140c76357;
      BVar5 = CryptGetProvParam(HVar3,2,(BYTE *)0x0,&local_38,*(DWORD *)(puVar10 + 0x20));
      DVar6 = local_38;
      if (BVar5 == 0) {
        if (DAT_141700c98 == 0) {
          *(undefined8 *)(puVar10 + -8) = 0x140c76368;
          DAT_141700c98 = FUN_140b92700();
        }
        *(undefined8 *)(puVar10 + -8) = 0x140c76373;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        *(undefined8 *)(puVar10 + -8) = 0x140c7638b;
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,
                   "ERR_CAPI_error");
        *(undefined8 *)(puVar10 + -8) = 0x140c7639e;
        FUN_140b91cc0(DAT_141700c98,0x6c,0);
        *(undefined8 *)(puVar10 + -8) = 0x140c763b2;
        d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x4eb,0);
        *(undefined8 *)(puVar10 + -8) = 0x140c763b7;
        error_code_0x();
        *(undefined8 *)(puVar10 + -8) = 0x140c763c3;
        CryptReleaseContext(local_30,0);
      }
      else {
        *(undefined8 *)(puVar10 + -8) = 0x140c763dd;
        enginese_capic(param_1,"Got max container len %d\n",DVar6);
        if (local_38 == 0) {
          local_38 = 0x400;
        }
        DVar6 = local_38;
        *(undefined8 *)(puVar10 + -8) = 0x140c76400;
        pbData = (BYTE *)FUN_140b8d8d0(DVar6,"engines\\e_capi.c",0x4f3);
        if (pbData != (BYTE *)0x0) {
          iVar9 = 0;
          while( true ) {
            HVar3 = local_30;
            uStack_34 = local_38;
            *pbData = '\0';
            *(uint *)(puVar10 + 0x20) = (uint)(iVar9 == 0);
            *(undefined8 *)(puVar10 + -8) = 0x140c7643b;
            BVar5 = CryptGetProvParam(HVar3,2,pbData,&uStack_34,*(DWORD *)(puVar10 + 0x20));
            uVar2 = uStack_34;
            if (BVar5 == 0) break;
            *(uint *)(puVar10 + 0x28) = (uint)(iVar9 == 0);
            *(int *)(puVar10 + 0x20) = iVar9;
            *(undefined8 *)(puVar10 + -8) = 0x140c7645d;
            enginese_capic(param_1,"Container name %s, len=%d, index=%d, flags=%d\n",pbData,uVar2);
            if ((*pbData == '\0') && (uStack_34 == local_38)) {
              *(undefined8 *)(puVar10 + -8) = 0x140c76492;
              enginese_capic(param_1,"Enumerate bug: using workaround\n");
              goto LAB_140c76505;
            }
            *(undefined8 *)(puVar10 + -8) = 0x140c7647f;
            FUN_140c078a0(param_2,"%lu. %s\n",iVar9,pbData);
            iVar9 = iVar9 + 1;
          }
          *(undefined8 *)(puVar10 + -8) = 0x140c7649a;
          DVar6 = GetLastError();
          if (DVar6 != 0x103) {
            if (DAT_141700c98 == 0) {
              *(undefined8 *)(puVar10 + -8) = 0x140c764b1;
              DAT_141700c98 = FUN_140b92700();
            }
            *(undefined8 *)(puVar10 + -8) = 0x140c764bc;
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            *(undefined8 *)(puVar10 + -8) = 0x140c764d4;
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,
                       "ERR_CAPI_error");
            *(undefined8 *)(puVar10 + -8) = 0x140c764e7;
            FUN_140b91cc0(DAT_141700c98,0x6c,0);
            *(undefined8 *)(puVar10 + -8) = 0x140c764fb;
            d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x504,0);
            *(undefined8 *)(puVar10 + -8) = 0x140c76502;
            error_code_0x(DVar6);
          }
        }
LAB_140c76505:
        *(undefined8 *)(puVar10 + -8) = 0x140c7651a;
        FUN_140b8d990(pbData,"engines\\e_capi.c",0x515);
        *(undefined8 *)(puVar10 + -8) = 0x140c76526;
        CryptReleaseContext(local_30,0);
      }
      goto LAB_140c76529;
    }
    if (DAT_141700c98 == 0) {
      *(undefined8 *)(puVar10 + -8) = 0x140c762fc;
      DAT_141700c98 = FUN_140b92700();
    }
    *(undefined8 *)(puVar10 + -8) = 0x140c76307;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    *(undefined8 *)(puVar10 + -8) = 0x140c7631f;
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    *(undefined8 *)(puVar10 + -8) = 0x140c76332;
    FUN_140b91cc0(DAT_141700c98,0x68,0);
    uVar8 = 0x4e5;
  }
  else {
    uStackY_70 = 0x140c76215;
    uStack_34 = MultiByteToWideChar(0,0,*(LPCSTR *)(param_1 + 0x18),-1,(LPWSTR)0x0,0);
    puVar4 = auStackY_68;
    if (uStack_34 != 0) {
      uVar7 = (ulonglong)uStack_34 * 2 + 0xf;
      if (uVar7 <= (ulonglong)uStack_34 * 2) {
        uVar7 = 0xffffffffffffff0;
      }
      uStackY_70 = 0x140c76242;
      lpMultiByteStr = *(LPCSTR *)(param_1 + 0x18);
      lVar1 = -(uVar7 & 0xfffffffffffffff0);
      puVar10 = auStackY_68 + lVar1;
      *(uint *)(&stack0xffffffffffffffc0 + lVar1) = uStack_34;
      szProvider = (LPCWSTR)((longlong)&local_38 + lVar1);
      *(LPCWSTR *)(&stack0xffffffffffffffb8 + lVar1) = szProvider;
      *(undefined8 *)(auStackY_68 + lVar1 + -8) = 0x140c76267;
      MultiByteToWideChar(0,0,lpMultiByteStr,-1,*(LPWSTR *)(&stack0xffffffffffffffb8 + lVar1),
                          *(int *)(&stack0xffffffffffffffc0 + lVar1));
      puVar4 = auStackY_68 + lVar1;
      if (szProvider != (LPCWSTR)0x0) goto LAB_140c762d0;
    }
    puVar10 = puVar4;
    if (DAT_141700c98 == 0) {
      *(undefined8 *)(puVar10 + -8) = 0x140c7627a;
      DAT_141700c98 = FUN_140b92700();
    }
    *(undefined8 *)(puVar10 + -8) = 0x140c76285;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    *(undefined8 *)(puVar10 + -8) = 0x140c7629d;
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    *(undefined8 *)(puVar10 + -8) = 0x140c762b0;
    FUN_140b91cc0(DAT_141700c98,0xc0100,0);
    uVar8 = 0x4dd;
  }
  *(undefined8 *)(puVar10 + -8) = 0x140c762c4;
  d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",uVar8,0);
  *(undefined8 *)(puVar10 + -8) = 0x140c762c9;
  error_code_0x();
LAB_140c76529:
  uVar7 = local_28 ^ (ulonglong)&local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -8) = &UNK_140c76535;
  FUN_140b65db0(uVar7);
}

