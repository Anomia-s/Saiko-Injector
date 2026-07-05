/**
 * Function: sections
 * Address:  140c4c600
 * Signature: undefined sections(void)
 * Body size: 1035 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
sections(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char *param_5,
        int param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  size_t sVar7;
  undefined8 uVar8;
  
  if (param_5 == (char *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\x509\\v3_san.c",0x203,"a2i_GENERAL_NAME")
    ;
    FUN_140b91cc0(0x22,0x7c,0);
    return (undefined4 *)0x0;
  }
  puVar3 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)FUN_140b79340(), puVar3 == (undefined4 *)0x0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\x509\\v3_san.c",0x20c,"a2i_GENERAL_NAME")
    ;
    FUN_140b91cc0(0x22,0x8000d,0);
    return (undefined4 *)0x0;
  }
  switch(param_4) {
  case 0:
    pcVar6 = strchr(param_5,0x3b);
    if (pcVar6 != (char *)0x0) {
      lVar4 = FUN_140b79550();
      *(longlong *)(puVar3 + 2) = lVar4;
      if (lVar4 != 0) {
        FUN_140b90df0(*(undefined8 *)(lVar4 + 8));
        lVar4 = FUN_140cc4120(pcVar6 + 1,param_3);
        *(longlong *)(*(longlong *)(puVar3 + 2) + 8) = lVar4;
        if ((lVar4 != 0) &&
           (lVar4 = FUN_140b8c8b0(param_5,(longlong)((int)pcVar6 - (int)param_5),
                                  "crypto\\x509\\v3_san.c",0x290), lVar4 != 0)) {
          puVar1 = *(undefined8 **)(puVar3 + 2);
          uVar8 = FUN_140b964e0(lVar4,0);
          *puVar1 = uVar8;
          FUN_140b8d990(lVar4,"crypto\\x509\\v3_san.c",0x294);
          if (**(longlong **)(puVar3 + 2) != 0) goto LAB_140c4c972;
        }
        FUN_140b79570(*(undefined8 *)(puVar3 + 2));
        *(undefined8 *)(puVar3 + 2) = 0;
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\x509\\v3_san.c",0x239,"a2i_GENERAL_NAME")
    ;
    uVar8 = 0x93;
    break;
  case 1:
  case 2:
  case 6:
    lVar4 = FUN_140b91060();
    *(longlong *)(puVar3 + 2) = lVar4;
    if (lVar4 != 0) {
      sVar7 = strlen(param_5);
      iVar2 = FUN_140b78d90(lVar4,param_5,sVar7 & 0xffffffff);
      if (iVar2 != 0) goto LAB_140c4c972;
    }
    FUN_140b90e80(*(undefined8 *)(puVar3 + 2));
    *(undefined8 *)(puVar3 + 2) = 0;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\x509\\v3_san.c",0x248,"a2i_GENERAL_NAME")
    ;
    uVar8 = 0x8000d;
    break;
  default:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\x509\\v3_san.c",0x23e,"a2i_GENERAL_NAME")
    ;
    uVar8 = 0xa7;
    break;
  case 4:
    lVar5 = 0;
    lVar4 = FUN_140b9c7c0();
    if (lVar4 != 0) {
      lVar5 = FUN_140c4d790(param_3,param_5);
      if (lVar5 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\x509\\v3_san.c",0x2a9,"do_dirname");
        FUN_140b91cc0(0x22,0x96,"section=%s",param_5);
      }
      else {
        iVar2 = FUN_140bc76d0(lVar4,lVar5,0x1001);
        if (iVar2 != 0) {
          *(longlong *)(puVar3 + 2) = lVar4;
          FUN_140c4d800(param_3,lVar5);
          *puVar3 = param_4;
          return puVar3;
        }
      }
    }
    FUN_140b9c7e0(lVar4);
    FUN_140c4d800(param_3,lVar5);
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\x509\\v3_san.c",0x232,"a2i_GENERAL_NAME")
    ;
    uVar8 = 0x95;
    break;
  case 7:
    if (param_6 == 0) {
      lVar4 = FUN_140bc7530(param_5);
    }
    else {
      lVar4 = FUN_140bc75b0();
    }
    *(longlong *)(puVar3 + 2) = lVar4;
    if (lVar4 != 0) {
LAB_140c4c972:
      *puVar3 = param_4;
      return puVar3;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\x509\\v3_san.c",0x22a,"a2i_GENERAL_NAME")
    ;
    FUN_140b91cc0(0x22,0x76,"value=%s",param_5);
    goto LAB_140c4c9dc;
  case 8:
    lVar4 = FUN_140b964e0(param_5,0);
    if (lVar4 != 0) {
      *(longlong *)(puVar3 + 2) = lVar4;
      *puVar3 = param_4;
      return puVar3;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\x509\\v3_san.c",0x21c,"a2i_GENERAL_NAME")
    ;
    FUN_140b91cc0(0x22,0x77,"value=%s",param_5);
    goto LAB_140c4c9dc;
  }
  FUN_140b91cc0(0x22,uVar8,0);
LAB_140c4c9dc:
  if (param_1 == (undefined4 *)0x0) {
    FUN_140b79360(puVar3);
  }
  return (undefined4 *)0x0;
}

