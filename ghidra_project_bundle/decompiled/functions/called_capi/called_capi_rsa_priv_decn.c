/**
 * Function: called_capi_rsa_priv_decn
 * Address:  140c76ec0
 * Signature: undefined called_capi_rsa_priv_decn(void)
 * Body size: 710 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void called_capi_rsa_priv_decn
               (DWORD param_1,longlong param_2,void *param_3,undefined8 param_4,int param_5)

{
  BYTE *pBVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong lVar4;
  BYTE *pbData;
  longlong lVar5;
  BYTE *pBVar6;
  longlong lVar7;
  size_t _Size;
  undefined1 auStackY_78 [32];
  DWORD local_48 [2];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStackY_78;
  lVar7 = (longlong)(int)param_1;
  if (0 < (int)param_1) {
    uVar3 = FUN_140b97dc0(param_4);
    uVar3 = FUN_140c10320(uVar3,DAT_141517ed0);
    enginese_capic(uVar3,"Called capi_rsa_priv_dec()\n");
    lVar4 = FUN_140c0b0b0(param_4,DAT_141517ed4);
    if (lVar4 == 0) {
      if (DAT_141700c98 == 0) {
        DAT_141700c98 = FUN_140b92700();
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,
                 "ERR_CAPI_error");
      FUN_140b91cc0(DAT_141700c98,0x66,0);
      d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x3c3,0);
    }
    else if (param_5 == 1) {
      pbData = (BYTE *)FUN_140b8d8d0(lVar7,"engines\\e_capi.c",0x3db);
      if (pbData != (BYTE *)0x0) {
        if (param_1 != 0) {
          lVar5 = 0;
          pBVar6 = pbData + lVar7;
          do {
            pBVar1 = (BYTE *)(param_2 + lVar5);
            pBVar6 = pBVar6 + -1;
            lVar5 = lVar5 + 1;
            *pBVar6 = *pBVar1;
          } while (lVar5 < lVar7);
        }
        local_48[0] = param_1;
        BVar2 = CryptDecrypt(*(HCRYPTKEY *)(lVar4 + 0x10),0,1,0,pbData,local_48);
        if (BVar2 == 0) {
          if (DAT_141700c98 == 0) {
            DAT_141700c98 = FUN_140b92700();
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,
                     "ERR_CAPI_error");
          FUN_140b91cc0(DAT_141700c98,0x6a,0);
          d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x3e3,0);
          error_code_0x();
          FUN_14046e980(pbData,local_48[0]);
          FUN_140b8d990(pbData,"engines\\e_capi.c",0x3e6);
        }
        else {
          _Size = (size_t)(int)local_48[0];
          memcpy(param_3,pbData,_Size);
          FUN_14046e980(pbData,_Size);
          FUN_140b8d990(pbData,"engines\\e_capi.c",0x3ec);
        }
      }
    }
    else {
      FUN_140c07aa0(local_40,10,&DAT_1413a6478);
      if (DAT_141700c98 == 0) {
        DAT_141700c98 = FUN_140b92700();
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,
                 "ERR_CAPI_error");
      FUN_140b91cc0(DAT_141700c98,0x7f,0);
      d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x3d4,0);
      FUN_140b92440(2,"padding=",local_40);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStackY_78);
}

