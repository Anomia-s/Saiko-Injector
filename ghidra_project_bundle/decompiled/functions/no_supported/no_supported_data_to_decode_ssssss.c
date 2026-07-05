/**
 * Function: no_supported_data_to_decode_ssssss
 * Address:  140c2c410
 * Signature: undefined no_supported_data_to_decode_ssssss(void)
 * Body size: 674 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 no_supported_data_to_decode_ssssss(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  lVar4 = 0;
  if (param_2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\encode_decode\\decoder_lib.c",0x37,"OSSL_DECODER_from_bio");
    pcVar9 = (char *)0x0;
    uVar6 = 0xc0102;
  }
  else {
    if (((param_1 != (longlong *)0x0) && (param_1[3] != 0)) && (iVar1 = FUN_140b77980(), iVar1 != 0)
       ) {
      iVar1 = FUN_140b92170();
      iVar2 = FUN_140b74190(param_2,0x85,0,0);
      if (iVar2 < 0) {
        uVar6 = FUN_140c71100();
        lVar4 = FUN_140b73040(uVar6);
        if (lVar4 == 0) {
          return 0;
        }
        param_2 = FUN_140b744f0(lVar4,param_2);
      }
      local_48 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = param_1;
      local_60 = param_2;
      FUN_140c71670(param_1 + 7);
      uVar3 = subjectpublickeyinfo(0,&local_68);
      if ((local_48 & 2) == 0) {
        puVar7 = (undefined1 *)*param_1;
        if ((puVar7 == (undefined1 *)0x0) || (param_1[1] == 0)) {
          puVar5 = (undefined1 *)param_1[1];
          pcVar12 = "";
          pcVar9 = "";
          puVar10 = &DAT_1413a2ad6;
          if (puVar7 != (undefined1 *)0x0) {
            pcVar12 = "Input type: ";
          }
          if (puVar5 != (undefined1 *)0x0) {
            pcVar9 = "Input structure: ";
          }
          if ((puVar7 == (undefined1 *)0x0) || (puVar5 == (undefined1 *)0x0)) {
            puVar11 = &DAT_1413a2ad6;
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &DAT_1413a2ad6;
            }
          }
          else {
            puVar11 = &DAT_1413a7198;
          }
        }
        else {
          puVar5 = (undefined1 *)param_1[1];
          puVar10 = &DAT_1413a71f4;
          pcVar12 = "Input type: ";
          pcVar9 = "Input structure: ";
          puVar11 = &DAT_1413a7198;
        }
        puVar8 = &DAT_1413a2ad6;
        if (puVar5 != (undefined1 *)0x0) {
          puVar8 = puVar5;
        }
        iVar2 = FUN_140b92170();
        if ((iVar2 == iVar1) || (iVar1 = FUN_140b92090(), iVar1 == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\encode_decode\\decoder_lib.c",0x66,"OSSL_DECODER_from_bio");
          FUN_140b91cc0(0x3c,0x8010c,"No supported data to decode. %s%s%s%s%s%s",puVar10,pcVar12,
                        puVar7,puVar11,pcVar9,puVar8);
        }
        uVar3 = 0;
      }
      FUN_140c71390(param_1 + 7);
      if (lVar4 != 0) {
        FUN_140b74560(lVar4);
        FUN_140b73150(lVar4);
      }
      return uVar3;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\encode_decode\\decoder_lib.c",0x3c,"OSSL_DECODER_from_bio");
    pcVar9 = 
    "No decoders were found. For standard decoders you need at least one of the default or base providers available. Did you forget to load them?"
    ;
    uVar6 = 0x66;
  }
  FUN_140b91cc0(0x3c,uVar6,pcVar9);
  return 0;
}

