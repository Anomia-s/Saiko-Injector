/**
 * Function: cryptorsarsa_signc
 * Address:  140c8ec90
 * Signature: undefined cryptorsarsa_signc(void)
 * Body size: 619 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool cryptorsarsa_signc(undefined8 *param_1,longlong *param_2,int param_3,void *param_4,
                       size_t param_5)

{
  void *_Dst;
  size_t _Size;
  undefined *_Src;
  
  if (param_3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\rsa\\rsa_sign.c",0x10a,"encode_pkcs1");
    FUN_140b91cc0(4,0x75,0);
    return false;
  }
  if (param_3 < 0x2a1) {
    if (param_3 != 0x2a0) {
      if (param_3 == 4) {
        _Size = 0x12;
        _Src = &DAT_141278358;
      }
      else if (param_3 == 0x40) {
        _Size = 0xf;
        _Src = &DAT_1412783a8;
      }
      else if (param_3 == 0x5f) {
        _Size = 0xe;
        _Src = &DAT_141278370;
      }
      else if (param_3 == 0x75) {
        _Size = 0xf;
        _Src = &DAT_141278380;
      }
      else {
        if (param_3 != 0x101) goto switchD_140c8ee03_caseD_6;
        _Size = 0x12;
        _Src = &DAT_141278340;
      }
      goto LAB_140c8ee43;
    }
    _Src = &DAT_1412783b8;
  }
  else if (param_3 < 0x447) {
    if (param_3 == 0x446) {
      _Src = &DAT_141278418;
    }
    else if (param_3 == 0x2a1) {
      _Src = &DAT_1412783d0;
    }
    else if (param_3 == 0x2a2) {
      _Src = &DAT_1412783e8;
    }
    else {
      if (param_3 != 0x2a3) goto switchD_140c8ee03_caseD_6;
      _Src = &DAT_141278400;
    }
  }
  else {
    switch(param_3) {
    case 0x447:
      _Src = &DAT_141278430;
      break;
    case 0x448:
      _Src = &DAT_141278448;
      break;
    case 0x449:
      _Src = &DAT_141278460;
      break;
    case 0x44a:
      _Src = &DAT_141278478;
      break;
    case 1099:
      _Src = &DAT_141278490;
      break;
    default:
switchD_140c8ee03_caseD_6:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\rsa\\rsa_sign.c",0x110,"encode_pkcs1");
      FUN_140b91cc0(4,0x74,0);
      return false;
    case 0x477:
      _Size = 0x12;
      _Src = &DAT_141278390;
      goto LAB_140c8ee43;
    }
  }
  _Size = 0x13;
LAB_140c8ee43:
  _Dst = (void *)FUN_140b8d8d0(_Size + param_5,"crypto\\rsa\\rsa_sign.c",0x114);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,_Src,_Size);
    memcpy((void *)((longlong)_Dst + _Size),param_4,param_5);
    *param_1 = _Dst;
    *param_2 = _Size + param_5;
  }
  return _Dst != (void *)0x0;
}

