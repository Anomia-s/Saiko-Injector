/**
 * Function: called_capi_dsa_do_signn
 * Address:  140c77230
 * Signature: undefined called_capi_dsa_do_signn(void)
 * Body size: 884 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void called_capi_dsa_do_signn(BYTE *param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  BYTE BVar10;
  BOOL BVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStackY_88 [32];
  DWORD local_58 [2];
  HCRYPTHASH local_50;
  BYTE local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  BYTE local_35;
  undefined1 local_34 [20];
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStackY_88;
  uVar13 = FUN_140c0b1c0(param_3);
  uVar13 = FUN_140c10320(uVar13,DAT_141517ed0);
  enginese_capic(uVar13,"Called CAPI_dsa_do_sign()\n");
  lVar14 = FUN_140c0b0b0(param_3,DAT_141517ed8);
  if (lVar14 == 0) {
    if (DAT_141700c98 == 0) {
      DAT_141700c98 = FUN_140b92700();
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    FUN_140b91cc0(DAT_141700c98,0x66,0);
    d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x40e,0);
    goto LAB_140c77598;
  }
  if (param_2 != 0x14) {
    if (DAT_141700c98 == 0) {
      DAT_141700c98 = FUN_140b92700();
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    FUN_140b91cc0(DAT_141700c98,0x76,0);
    d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x413,0);
    goto LAB_140c77598;
  }
  BVar11 = CryptCreateHash(*(HCRYPTPROV *)(lVar14 + 8),0x8004,0,0,&local_50);
  if (BVar11 == 0) {
    if (DAT_141700c98 == 0) {
      DAT_141700c98 = FUN_140b92700();
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    FUN_140b91cc0(DAT_141700c98,100,0);
    d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x419,0);
    error_code_0x();
    goto LAB_140c77598;
  }
  BVar11 = CryptSetHashParam(local_50,2,param_1,0);
  if (BVar11 == 0) {
    err_capi_error(0,0x67,"engines\\e_capi.c",0x420);
    error_code_0x();
  }
  else {
    local_58[0] = 0x28;
    BVar11 = CryptSignHashW(local_50,*(DWORD *)(lVar14 + 0x18),(LPCWSTR)0x0,0,&local_48,local_58);
    if (BVar11 == 0) {
      err_capi_error(0,0x72,"engines\\e_capi.c",0x428);
      error_code_0x();
    }
    else {
      lVar14 = FUN_140bfcab0();
      lVar15 = FUN_140bfcab0();
      BVar10 = local_35;
      uVar9 = local_36;
      uVar8 = local_37;
      uVar7 = local_38;
      uVar6 = local_39;
      uVar5 = local_3a;
      uVar4 = local_3b;
      uVar3 = local_3c;
      uVar2 = local_3d;
      uVar1 = local_3e;
      if ((lVar14 != 0) && (lVar15 != 0)) {
        local_35 = local_48;
        local_48 = BVar10;
        local_36 = local_47;
        local_47 = uVar9;
        local_37 = local_46;
        local_46 = uVar8;
        local_38 = local_45;
        local_45 = uVar7;
        local_39 = local_44;
        local_44 = uVar6;
        local_3a = local_43;
        local_43 = uVar5;
        local_3b = local_42;
        local_42 = uVar4;
        local_3c = local_41;
        local_41 = uVar3;
        local_3d = local_40;
        local_40 = uVar2;
        local_3e = local_3f;
        local_3f = uVar1;
        lVar16 = FUN_140bfcc40(&local_48,0x14,lVar14);
        if (lVar16 != 0) {
          iVar12 = FUN_140c78680(lVar15,local_34,0x14);
          if (iVar12 != 0) {
            lVar16 = cryptodsadsa_signc();
            if (lVar16 != 0) {
              FUN_140c6eab0(lVar16,lVar14,lVar15);
              goto LAB_140c7757d;
            }
          }
        }
      }
      FUN_140bfcf10(lVar14);
      FUN_140bfcf10(lVar15);
    }
  }
LAB_140c7757d:
  FUN_14046e980(&local_48,0x28);
  CryptDestroyHash(local_50);
LAB_140c77598:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStackY_88);
}

