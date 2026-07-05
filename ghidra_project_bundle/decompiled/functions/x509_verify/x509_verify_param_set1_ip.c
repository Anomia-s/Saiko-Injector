/**
 * Function: x509_verify_param_set1_ip
 * Address:  140b9be50
 * Signature: undefined x509_verify_param_set1_ip(void)
 * Body size: 307 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_verify_param_set1_ip(longlong param_1,char *param_2,undefined1 *param_3)

{
  undefined1 *_Dst;
  
  if ((((ulonglong)param_3 & 0xffffffffffffffeb) != 0) || (param_3 == &DAT_00000014)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\x509_vpm.c",0x1d8,"X509_VERIFY_PARAM_set1_ip");
    FUN_140b91cc0(0xb,0x80106,0);
    return 0;
  }
  if (param_2 == (char *)0x0) {
    param_3 = (undefined1 *)0x0;
    _Dst = param_3;
  }
  else {
    if (param_3 == (undefined1 *)0x0) {
      param_3 = (undefined1 *)strlen(param_2);
    }
    _Dst = (undefined1 *)FUN_140b8d8d0(param_3 + 1,"crypto\\x509\\x509_vpm.c",0xf5);
    if (_Dst == (undefined1 *)0x0) {
      return 0;
    }
    memcpy(_Dst,param_2,(size_t)param_3);
    _Dst[(longlong)param_3] = 0;
  }
  FUN_140b8d990(*(undefined8 *)(param_1 + 0x58),"crypto\\x509\\x509_vpm.c",0xfe);
  *(undefined1 **)(param_1 + 0x58) = _Dst;
  if ((undefined8 *)(param_1 + 0x60) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = param_3;
  }
  return 1;
}

