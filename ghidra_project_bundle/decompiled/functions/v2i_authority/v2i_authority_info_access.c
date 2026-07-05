/**
 * Function: v2i_authority_info_access
 * Address:  140c4d0e0
 * Signature: undefined v2i_authority_info_access(void)
 * Body size: 613 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_authority_info_access(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 local_48 [8];
  char *local_40;
  undefined8 local_38;
  
  iVar1 = FUN_140b77980(param_3);
  lVar2 = FUN_140b77af0(0,iVar1);
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\v3_info.c",0x73,"v2i_AUTHORITY_INFO_ACCESS");
    FUN_140b91cc0(0x22,0x8000f,0);
    return 0;
  }
  iVar8 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = FUN_140b77990(param_3,iVar8);
      plVar4 = (longlong *)FUN_140be0010(&DAT_1412537a0);
      if (plVar4 == (longlong *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\v3_info.c",0x79,"v2i_AUTHORITY_INFO_ACCESS");
        uVar7 = 0x8000d;
LAB_140c4d322:
        FUN_140b91cc0(0x22,uVar7,0);
LAB_140c4d32f:
        FUN_140b77c60(lVar2,FUN_140c4d350);
        return 0;
      }
      FUN_140b78340(lVar2,plVar4);
      pcVar5 = strchr(*(char **)(lVar3 + 8),0x3b);
      if (pcVar5 == (char *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\v3_info.c",0x7f,"v2i_AUTHORITY_INFO_ACCESS");
        uVar7 = 0x8f;
        goto LAB_140c4d322;
      }
      local_40 = pcVar5 + 1;
      local_38 = *(undefined8 *)(lVar3 + 0x10);
      lVar6 = FUN_140c4cbc0(plVar4[1],param_1,param_2,local_48,0);
      if ((lVar6 == 0) ||
         (lVar3 = FUN_140b8c8b0(*(longlong *)(lVar3 + 8),(longlong)pcVar5 - *(longlong *)(lVar3 + 8)
                                ,"crypto\\x509\\v3_info.c",0x86), lVar3 == 0)) goto LAB_140c4d32f;
      lVar6 = FUN_140b964e0(lVar3,0);
      *plVar4 = lVar6;
      if (lVar6 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\v3_info.c",0x8a,"v2i_AUTHORITY_INFO_ACCESS");
        FUN_140b91cc0(0x22,0x77,"value=%s",lVar3);
        FUN_140b8d990(lVar3,"crypto\\x509\\v3_info.c",0x8c);
        goto LAB_140c4d32f;
      }
      FUN_140b8d990(lVar3,"crypto\\x509\\v3_info.c",0x8f);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  return lVar2;
}

