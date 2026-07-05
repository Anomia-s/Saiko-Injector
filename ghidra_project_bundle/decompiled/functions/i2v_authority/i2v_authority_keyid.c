/**
 * Function: i2v_authority_keyid
 * Address:  140c666f0
 * Signature: undefined i2v_authority_keyid(void)
 * Body size: 533 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong i2v_authority_keyid(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  if (*param_2 != 0) {
    lVar2 = FUN_140c66230(0);
    if (lVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\v3_akid.c",0x31,"i2v_AUTHORITY_KEYID");
      FUN_140b91cc0(0x22,0x8000d,0);
      return 0;
    }
    if ((param_2[1] == 0) && (param_2[2] == 0)) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = "keyid";
    }
    iVar1 = FUN_140bc66d0(pcVar3,lVar2,local_res18);
    if (iVar1 == 0) {
      FUN_140b8d990(lVar2,"crypto\\x509\\v3_akid.c",0x36);
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\v3_akid.c",0x37,"i2v_AUTHORITY_KEYID");
      FUN_140b91cc0(0x22,0x8000b,0);
      goto LAB_140c668ba;
    }
    FUN_140b8d990(lVar2,"crypto\\x509\\v3_akid.c",0x3a);
  }
  lVar2 = local_res18[0];
  if ((param_2[1] == 0) || (lVar2 = FUN_140c4b870(0), lVar2 != 0)) {
    local_res18[0] = lVar2;
    if (param_2[2] == 0) {
      return local_res18[0];
    }
    lVar2 = FUN_140c66230(0);
    if (lVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\v3_akid.c",0x47,"i2v_AUTHORITY_KEYID");
      FUN_140b91cc0(0x22,0x8000d,0);
    }
    else {
      iVar1 = FUN_140bc66d0("serial",lVar2,local_res18);
      if (iVar1 != 0) {
        FUN_140b8d990(lVar2,"crypto\\x509\\v3_akid.c",0x4e);
        return local_res18[0];
      }
      FUN_140b8d990(lVar2,"crypto\\x509\\v3_akid.c",0x4b);
    }
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\v3_akid.c",0x3f,"i2v_AUTHORITY_KEYID");
    FUN_140b91cc0(0x22,0x8000b,0);
  }
LAB_140c668ba:
  if (param_3 == 0) {
    FUN_140b77c60(local_res18[0],FUN_140bc6410);
  }
  return 0;
}

