/**
 * Function: authority
 * Address:  140c69e00
 * Signature: undefined authority(void)
 * Body size: 364 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong authority(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *_Str1;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = FUN_140be0010(&DAT_141256710);
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\v3_battcons.c",0x41,"v2i_OSSL_BASIC_ATTR_CONSTRAINTS");
    FUN_140b91cc0(0x22,0x8000d,0);
    return 0;
  }
  iVar4 = 0;
  iVar1 = FUN_140b77980(param_3);
  if (0 < iVar1) {
    do {
      lVar3 = FUN_140b77990(param_3,iVar4);
      _Str1 = *(char **)(lVar3 + 8);
      iVar1 = strcmp(_Str1,"authority");
      if (iVar1 == 0) {
        iVar1 = FUN_140bc6490(lVar3,lVar2);
      }
      else {
        iVar1 = strcmp(_Str1,"pathlen");
        if (iVar1 != 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\x509\\v3_battcons.c",0x4d,"v2i_OSSL_BASIC_ATTR_CONSTRAINTS");
          FUN_140b91cc0(0x22,0x6a,0);
          FUN_140b92440(4,"name=",*(undefined8 *)(lVar3 + 8),", value=",
                        *(undefined8 *)(lVar3 + 0x10));
          goto LAB_140c69f56;
        }
        iVar1 = FUN_140bc6660(lVar3,lVar2 + 8);
      }
      if (iVar1 == 0) {
LAB_140c69f56:
        FUN_140be0760(lVar2,&DAT_141256710);
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_140b77980(param_3);
    } while (iVar4 < iVar1);
  }
  return lVar2;
}

