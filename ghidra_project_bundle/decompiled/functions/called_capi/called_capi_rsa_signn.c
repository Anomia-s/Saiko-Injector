/**
 * Function: called_capi_rsa_signn
 * Address:  140c76b50
 * Signature: undefined called_capi_rsa_signn(void)
 * Body size: 744 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void called_capi_rsa_signn
               (int param_1,BYTE *param_2,undefined8 param_3,BYTE *param_4,uint *param_5,
               undefined8 param_6)

{
  BYTE BVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong lVar4;
  ALG_ID Algid;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStackY_98 [32];
  uint local_68 [2];
  HCRYPTHASH local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140c76b65;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_98;
  uVar3 = FUN_140b97dc0(param_6);
  uVar3 = FUN_140c10320(uVar3,DAT_141517ed0);
  enginese_capic(uVar3,"Called CAPI_rsa_sign()\n");
  lVar4 = FUN_140c0b0b0(param_6,DAT_141517ed4);
  if (lVar4 == 0) {
    if (DAT_141700c98 == 0) {
      DAT_141700c98 = FUN_140b92700();
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    FUN_140b91cc0(DAT_141700c98,0x66,0);
    d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x362,0);
    goto LAB_140c76e29;
  }
  if (param_1 < 0x2a1) {
    if (param_1 == 0x2a0) {
      Algid = 0x800c;
    }
    else if (param_1 == 4) {
      Algid = 0x8003;
    }
    else if (param_1 == 0x40) {
      Algid = 0x8004;
    }
    else {
      if (param_1 != 0x72) goto LAB_140c76c6f;
      Algid = 0x8008;
    }
  }
  else if (param_1 == 0x2a1) {
    Algid = 0x800d;
  }
  else {
    if (param_1 != 0x2a2) {
LAB_140c76c6f:
      FUN_140c07aa0(local_58,10,&DAT_1413a59cc,param_1);
      err_capi_error(0,0x7e,"engines\\e_capi.c",0x382);
      FUN_140b92440(2,"NID=0x",local_58);
      goto LAB_140c76e29;
    }
    Algid = 0x800e;
  }
  BVar2 = CryptCreateHash(*(HCRYPTPROV *)(lVar4 + 8),Algid,0,0,&local_60);
  if (BVar2 == 0) {
    if (DAT_141700c98 == 0) {
      DAT_141700c98 = FUN_140b92700();
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    FUN_140b91cc0(DAT_141700c98,100,0);
    d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x38a,0);
    error_code_0x();
  }
  else {
    BVar2 = CryptSetHashParam(local_60,2,param_2,0);
    if (BVar2 == 0) {
      err_capi_error(0,0x67,"engines\\e_capi.c",0x391);
      error_code_0x();
    }
    else {
      local_68[0] = FUN_140c8d0a0(param_6);
      BVar2 = CryptSignHashW(local_60,*(DWORD *)(lVar4 + 0x18),(LPCWSTR)0x0,0,param_4,local_68);
      if (BVar2 == 0) {
        err_capi_error(0,0x72,"engines\\e_capi.c",0x399);
        error_code_0x();
      }
      else {
        uVar7 = 0;
        if ((local_68[0] & 0xfffffffe) != 0) {
          do {
            BVar1 = param_4[uVar7];
            uVar5 = (local_68[0] - (int)uVar7) - 1;
            param_4[uVar7] = param_4[uVar5];
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            param_4[uVar5] = BVar1;
          } while (uVar6 < local_68[0] >> 1);
        }
        *param_5 = local_68[0];
      }
    }
    CryptDestroyHash(local_60);
  }
LAB_140c76e29:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStackY_98);
}

