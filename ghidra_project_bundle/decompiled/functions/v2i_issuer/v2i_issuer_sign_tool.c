/**
 * Function: v2i_issuer_sign_tool
 * Address:  140c68e30
 * Signature: undefined v2i_issuer_sign_tool(void)
 * Body size: 636 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * v2i_issuer_sign_tool(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  size_t sVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  
  plVar3 = (longlong *)FUN_140be0010(&DAT_141255e30);
  if (plVar3 == (longlong *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\v3_ist.c",0x2a,"v2i_issuer_sign_tool");
    FUN_140b91cc0(0x22,0x8000d,0);
    return (longlong *)0x0;
  }
  iVar8 = 0;
  iVar2 = FUN_140b77980(param_3);
  if (0 < iVar2) {
    do {
      lVar4 = FUN_140b77990(param_3,iVar8);
      if (lVar4 != 0) {
        pcVar1 = *(char **)(lVar4 + 8);
        iVar2 = strcmp(pcVar1,"signTool");
        if (iVar2 != 0) {
          iVar2 = strcmp(pcVar1,"cATool");
          if (iVar2 != 0) {
            iVar2 = strcmp(pcVar1,"signToolCert");
            if (iVar2 != 0) {
              iVar2 = strcmp(pcVar1,"cAToolCert");
              if (iVar2 != 0) {
                uVar7 = 0x80106;
                uVar9 = 0x54;
                goto LAB_140c69070;
              }
              lVar5 = FUN_140b90fc0();
              plVar3[3] = lVar5;
              if ((lVar5 != 0) && (pcVar1 = *(char **)(lVar4 + 0x10), pcVar1 != (char *)0x0)) {
                sVar6 = strlen(pcVar1);
                iVar2 = FUN_140b78d90(lVar5,pcVar1,sVar6 & 0xffffffff);
                if (iVar2 != 0) goto LAB_140c6902a;
              }
              uVar7 = 0x8000d;
              uVar9 = 0x50;
              goto LAB_140c69070;
            }
            lVar5 = FUN_140b90fc0();
            plVar3[2] = lVar5;
            if ((lVar5 != 0) && (pcVar1 = *(char **)(lVar4 + 0x10), pcVar1 != (char *)0x0)) {
              sVar6 = strlen(pcVar1);
              iVar2 = FUN_140b78d90(lVar5,pcVar1,sVar6 & 0xffffffff);
              if (iVar2 != 0) goto LAB_140c6902a;
            }
            uVar7 = 0x8000d;
            uVar9 = 0x48;
            goto LAB_140c69070;
          }
          lVar5 = FUN_140b90fc0();
          plVar3[1] = lVar5;
          if ((lVar5 != 0) && (pcVar1 = *(char **)(lVar4 + 0x10), pcVar1 != (char *)0x0)) {
            sVar6 = strlen(pcVar1);
            iVar2 = FUN_140b78d90(lVar5,pcVar1,sVar6 & 0xffffffff);
            if (iVar2 != 0) goto LAB_140c6902a;
          }
          uVar7 = 0x8000d;
          uVar9 = 0x40;
          goto LAB_140c69070;
        }
        lVar5 = FUN_140b90fc0();
        *plVar3 = lVar5;
        if ((lVar5 != 0) && (pcVar1 = *(char **)(lVar4 + 0x10), pcVar1 != (char *)0x0)) {
          sVar6 = strlen(pcVar1);
          iVar2 = FUN_140b78d90(lVar5,pcVar1,sVar6 & 0xffffffff);
          if (iVar2 != 0) goto LAB_140c6902a;
        }
        uVar7 = 0x8000d;
        uVar9 = 0x38;
LAB_140c69070:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\v3_ist.c",uVar9,"v2i_issuer_sign_tool");
        FUN_140b91cc0(0x22,uVar7,0);
        FUN_140be0760(plVar3,&DAT_141255e30);
        return (longlong *)0x0;
      }
LAB_140c6902a:
      iVar8 = iVar8 + 1;
      iVar2 = FUN_140b77980(param_3);
    } while (iVar8 < iVar2);
  }
  return plVar3;
}

