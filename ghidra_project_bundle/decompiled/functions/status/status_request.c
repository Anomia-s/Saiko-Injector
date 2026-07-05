/**
 * Function: status_request
 * Address:  140c68380
 * Signature: undefined status_request(void)
 * Body size: 532 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong status_request(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  char *_Str;
  undefined **ppuVar7;
  char *local_res20;
  
  lVar3 = FUN_140b77ab0();
  if (lVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\x509\\v3_tlsf.c",99,"v2i_TLS_FEATURE");
    FUN_140b91cc0(0x22,0x8000f,0);
    return 0;
  }
  iVar6 = 0;
  iVar1 = FUN_140b77980(param_3);
  if (0 < iVar1) {
    do {
      lVar4 = FUN_140b77990(param_3,iVar6);
      _Str = *(char **)(lVar4 + 0x10);
      if (_Str == (char *)0x0) {
        _Str = *(char **)(lVar4 + 8);
      }
      uVar5 = 0;
      ppuVar7 = &PTR_s_status_request_141517b40;
      do {
        iVar1 = FUN_140b8c6a0(_Str,*ppuVar7);
        if (iVar1 == 0) {
          uVar2 = (&DAT_141517b38)[uVar5 * 4];
          goto LAB_140c684e4;
        }
        uVar5 = uVar5 + 1;
        ppuVar7 = ppuVar7 + 2;
      } while (uVar5 < 2);
      uVar2 = strtol(_Str,&local_res20,10);
      if (((*local_res20 != '\0') || (_Str == local_res20)) || (0xffff < uVar2)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\v3_tlsf.c",0x77,"v2i_TLS_FEATURE");
        FUN_140b91cc0(0x22,0x8f,0);
        FUN_140b92440(4,"name=",*(undefined8 *)(lVar4 + 8),", value=",*(undefined8 *)(lVar4 + 0x10))
        ;
        lVar4 = 0;
LAB_140c68579:
        FUN_140b77c60(lVar3,FUN_140b90e80);
        FUN_140b90e80(lVar4);
        return 0;
      }
LAB_140c684e4:
      lVar4 = FUN_140b90eb0();
      if (((lVar4 == 0) || (iVar1 = FUN_140bd8660(lVar4,uVar2), iVar1 == 0)) ||
         (iVar1 = FUN_140b78340(lVar3,lVar4), iVar1 < 1)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\v3_tlsf.c",0x80,"v2i_TLS_FEATURE");
        FUN_140b91cc0(0x22,0x8000d,0);
        goto LAB_140c68579;
      }
      iVar6 = iVar6 + 1;
      iVar1 = FUN_140b77980(param_3);
    } while (iVar6 < iVar1);
  }
  return lVar3;
}

