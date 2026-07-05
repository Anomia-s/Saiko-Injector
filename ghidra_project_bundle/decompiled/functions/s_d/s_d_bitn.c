/**
 * Function: s_d_bitn
 * Address:  140d6ab40
 * Signature: undefined s_d_bitn(void)
 * Body size: 802 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * s_d_bitn(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  longlong local_res8;
  longlong local_res10;
  
  pcVar7 = (char *)0x0;
  pcVar10 = (char *)0x0;
  local_res8 = 0;
  local_res10 = 0;
  pcVar13 = (char *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2text.c",0x142,"ec_to_text");
    FUN_140b91cc0(0x39,0xc0102,0);
    return (char *)0x0;
  }
  lVar5 = FUN_140b772a0(param_2);
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2text.c",0x147,"ec_to_text");
    FUN_140b91cc0(0x39,0x9e,0);
    return (char *)0x0;
  }
  pcVar11 = pcVar7;
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) {
      pcVar12 = pcVar7;
      if (((param_3 & 4) != 0) &&
         (iVar2 = FUN_140c0bd90(lVar5), pcVar12 = (char *)0x0, iVar2 != 0x494)) {
        pcVar12 = "EC-Parameters";
      }
    }
    else {
      pcVar12 = "Public-Key";
      pcVar13 = pcVar7;
    }
  }
  else {
    pcVar12 = "Private-Key";
    lVar6 = FUN_140b6a6a0(param_2);
    if (lVar6 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\encode_key2text.c",0x157,"ec_to_text");
      FUN_140b91cc0(0x39,0xdd,0);
      pcVar13 = pcVar7;
      goto LAB_140d6ade9;
    }
    pcVar13 = (char *)FUN_140c0e950(param_2,&local_res8);
    if (pcVar13 == (char *)0x0) goto LAB_140d6ade9;
  }
  pcVar11 = pcVar10;
  if ((param_3 & 3) != 0) {
    lVar6 = FUN_140b97dc0(param_2);
    if (lVar6 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\encode_key2text.c",0x162,"ec_to_text");
      FUN_140b91cc0(0x39,0xdc,0);
      pcVar11 = pcVar7;
      goto LAB_140d6ade9;
    }
    uVar1 = FUN_140b74790(param_2);
    pcVar7 = (char *)FUN_140c0e770(param_2,uVar1,&local_res10,0);
    if (pcVar7 == (char *)0x0) goto LAB_140d6ade9;
  }
  if (pcVar12 != (char *)0x0) {
    uVar1 = FUN_140c0bd10(lVar5);
    iVar2 = FUN_140c078a0(param_1,"%s: (%d bit)\n",pcVar12,uVar1);
    if (iVar2 < 1) goto LAB_140d6ade9;
  }
  if ((((local_res8 == 0) || (iVar2 = FUN_140c11cf0(param_1,"priv:",local_res8,pcVar13), iVar2 != 0)
       ) && ((local_res10 == 0 ||
             (iVar2 = FUN_140c11cf0(param_1,&DAT_1413a6c3c,local_res10,pcVar7), iVar2 != 0)))) &&
     ((param_3 & 4) != 0)) {
    uVar8 = FUN_140b9f2f0(param_2);
    uVar9 = FUN_140c0bdb0(lVar5);
    if ((uVar9 & 1) == 0) {
      uVar4 = generator_hybrid(param_1,lVar5,uVar8);
      pcVar11 = (char *)(ulonglong)uVar4;
    }
    else {
      iVar2 = FUN_140c0bd90(lVar5);
      if (iVar2 != 0) {
        uVar8 = FUN_140b96490(iVar2);
        iVar3 = FUN_140c078a0(param_1,"%s: %s\n","ASN1 OID",uVar8);
        if ((0 < iVar3) &&
           ((lVar5 = FUN_140c7e640(iVar2), lVar5 == 0 ||
            (iVar2 = FUN_140c078a0(param_1,"%s: %s\n","NIST CURVE",lVar5), 0 < iVar2)))) {
          pcVar11 = (char *)0x1;
        }
      }
    }
  }
LAB_140d6ade9:
  FUN_140b8db20(local_res8,pcVar13,"providers\\implementations\\encode_decode\\encode_key2text.c",
                0x178);
  FUN_140b8d990(local_res10,"providers\\implementations\\encode_decode\\encode_key2text.c",0x179);
  return pcVar11;
}

