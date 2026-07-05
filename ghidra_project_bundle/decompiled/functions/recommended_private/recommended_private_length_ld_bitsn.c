/**
 * Function: recommended_private_length_ld_bitsn
 * Address:  140d6a3c0
 * Signature: undefined recommended_private_length_ld_bitsn(void)
 * Body size: 588 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool recommended_private_length_ld_bitsn(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar4 = (char *)0x0;
  pcVar8 = (char *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2text.c",0x34,"dh_to_text");
    uVar6 = 0xc0102;
  }
  else {
    if ((param_3 & 1) == 0) {
      if ((param_3 & 2) == 0) {
        pcVar7 = pcVar4;
        if ((param_3 & 4) != 0) {
          pcVar7 = "DH Parameters";
        }
      }
      else {
        pcVar7 = "DH Public-Key";
        pcVar8 = pcVar4;
      }
    }
    else {
      pcVar8 = (char *)FUN_140b987a0(param_2);
      pcVar7 = "DH Private-Key";
      if (pcVar8 == (char *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\encode_decode\\encode_key2text.c",0x42,"dh_to_text")
        ;
        uVar6 = 0xdd;
        goto LAB_140d6a5e0;
      }
    }
    pcVar3 = pcVar4;
    if (((param_3 & 3) == 0) || (pcVar3 = (char *)FUN_140b97e80(param_2), pcVar3 != (char *)0x0)) {
      if (((param_3 & 4) == 0) || (pcVar4 = (char *)FUN_140b74ca0(param_2), pcVar4 != (char *)0x0))
      {
        lVar5 = FUN_140b76c30(param_2);
        if (lVar5 != 0) {
          uVar1 = FUN_140bfc870(lVar5);
          iVar2 = FUN_140c078a0(param_1,"%s: (%d bit)\n",pcVar7,uVar1);
          if (iVar2 < 1) {
            return false;
          }
          if ((pcVar8 != (char *)0x0) &&
             (iVar2 = sssllu_s0xllxn(param_1,"private-key:",pcVar8), iVar2 == 0)) {
            return false;
          }
          if ((pcVar3 != (char *)0x0) &&
             (iVar2 = sssllu_s0xllxn(param_1,"public-key:",pcVar3), iVar2 == 0)) {
            return false;
          }
          if ((pcVar4 != (char *)0x0) && (iVar2 = pcounter_dn(param_1,pcVar4), iVar2 == 0)) {
            return false;
          }
          iVar2 = FUN_140c0ac40(param_2);
          if (iVar2 < 1) {
            return true;
          }
          iVar2 = FUN_140c078a0(param_1,"recommended-private-length: %ld bits\n",iVar2);
          return 0 < iVar2;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\encode_decode\\encode_key2text.c",0x57,"dh_to_text")
        ;
        uVar6 = 0x9e;
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\encode_decode\\encode_key2text.c",0x50,"dh_to_text")
        ;
        uVar6 = 0xe2;
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\encode_key2text.c",0x49,"dh_to_text");
      uVar6 = 0xdc;
    }
  }
LAB_140d6a5e0:
  FUN_140b91cc0(0x39,uVar6,0);
  return false;
}

