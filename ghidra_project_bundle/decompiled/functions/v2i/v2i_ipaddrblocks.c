/**
 * Function: v2i_ipaddrblocks
 * Address:  140be84d0
 * Signature: undefined v2i_ipaddrblocks(void)
 * Body size: 2204 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void v2i_ipaddrblocks(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  size_t sVar9;
  char *pcVar10;
  longlong lVar11;
  size_t sVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  int iVar16;
  char *pcVar17;
  ulong *puVar18;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_a8;
  char *local_a0;
  int local_98;
  int local_94;
  int local_90;
  ulong local_8c;
  char *local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  local_58 = param_3;
  lVar7 = FUN_140b77a70(FUN_140bea210);
  local_a8 = lVar7;
  if (lVar7 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\v3_addr.c",0x3b9,"v2i_IPAddrBlocks");
    FUN_140b91cc0(0x22,0x8000f,0);
  }
  else {
    iVar16 = 0;
    local_90 = 0;
    iVar4 = FUN_140b77980(param_3);
    lVar11 = lVar7;
    if (0 < iVar4) {
      do {
        lVar8 = FUN_140b77990(param_3,iVar16);
        puVar18 = (ulong *)0x0;
        iVar4 = FUN_140bc7aa0(*(undefined8 *)(lVar8 + 8),&DAT_1413a6d90);
        if (iVar4 != 0) {
          iVar4 = FUN_140bc7aa0(*(undefined8 *)(lVar8 + 8),&DAT_1413a6d20);
          if (iVar4 == 0) {
LAB_140be8603:
            iVar4 = 2;
            pcVar17 = "0123456789.:abcdefABCDEF";
            iVar16 = 0x10;
            goto LAB_140be8615;
          }
          iVar4 = FUN_140bc7aa0(*(undefined8 *)(lVar8 + 8),"IPv4-SAFI");
          if (iVar4 == 0) {
            puVar18 = &local_8c;
            goto LAB_140be85d3;
          }
          iVar4 = FUN_140bc7aa0(*(undefined8 *)(lVar8 + 8),"IPv6-SAFI");
          if (iVar4 == 0) {
            puVar18 = &local_8c;
            goto LAB_140be8603;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\x509\\v3_addr.c",0x3cf,"v2i_IPAddrBlocks");
          FUN_140b91cc0(0x22,0x73,&DAT_1413a5d54,*(undefined8 *)(lVar8 + 8));
LAB_140be8b39:
          pcVar10 = (char *)0x0;
          lVar7 = local_a8;
          goto LAB_140be8b40;
        }
LAB_140be85d3:
        iVar4 = 1;
        pcVar17 = "0123456789.";
        iVar16 = 4;
LAB_140be8615:
        pcVar10 = *(char **)(lVar8 + 0x10);
        local_94 = iVar16;
        local_80 = pcVar17;
        if (puVar18 != (ulong *)0x0) {
          if (pcVar10 == (char *)0x0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\x509\\v3_addr.c",0x3e5,"v2i_IPAddrBlocks");
            FUN_140b91cc0(0x22,0x7c,0);
          }
          else {
            uVar5 = strtoul(pcVar10,&local_a0,0);
            *puVar18 = uVar5;
            sVar9 = strspn(local_a0," \t");
            local_a0 = local_a0 + sVar9;
            if ((uVar5 < 0x100) && (cVar1 = *local_a0, local_a0 = local_a0 + 1, cVar1 == ':')) {
              sVar9 = strspn(local_a0," \t");
              local_a0 = local_a0 + sVar9;
              pcVar10 = (char *)FUN_140b8c830(local_a0,"crypto\\x509\\v3_addr.c");
              lVar11 = local_a8;
              goto LAB_140be86bf;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\x509\\v3_addr.c",0x3eb,"v2i_IPAddrBlocks");
            FUN_140b91cc0(0x22,0xa4,0);
            local_b8 = *(undefined8 *)(lVar8 + 0x10);
            FUN_140b92440(4,"name=",*(undefined8 *)(lVar8 + 8),", value=");
          }
          goto LAB_140be8b39;
        }
        pcVar10 = (char *)FUN_140b8c830(pcVar10,"crypto\\x509\\v3_addr.c");
LAB_140be86bf:
        lVar7 = local_a8;
        local_60 = pcVar10;
        if (pcVar10 == (char *)0x0) goto LAB_140be8b40;
        iVar6 = strcmp(pcVar10,"inherit");
        if (iVar6 != 0) {
          sVar9 = strspn(pcVar10,pcVar17);
          sVar12 = strspn(pcVar10 + (int)sVar9," \t");
          local_98 = (int)sVar12 + (int)sVar9;
          local_88 = pcVar10 + local_98;
          cVar1 = *local_88;
          pcVar10[(int)sVar9] = '\0';
          iVar6 = FUN_140bc7880(local_50,pcVar10);
          lVar7 = local_a8;
          if (iVar6 == iVar16) {
            if (cVar1 == '\0') {
              lVar11 = FUN_140bea150(local_a8,iVar4,puVar18);
              if (lVar11 != 0) {
                if (iVar4 == 1) {
                  uVar15 = 4;
                }
                else if (iVar4 == 2) {
                  uVar15 = 0x10;
                }
                else {
                  uVar15 = 0;
                }
                iVar4 = FUN_140be9ce0(&local_68,local_50,iVar16 * 8,uVar15);
                uVar15 = local_68;
                if (iVar4 != 0) {
                  iVar4 = FUN_140b78340(lVar11,local_68);
                  if (iVar4 != 0) goto LAB_140be8aad;
                  FUN_140be0760(uVar15,&DAT_141237970);
                }
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\x509\\v3_addr.c",0x43a,"v2i_IPAddrBlocks");
              FUN_140b91cc0(0x22,0x80022,0);
              goto LAB_140be8b40;
            }
            if (cVar1 == '-') {
              sVar9 = strspn(local_88 + 1," \t");
              iVar6 = local_98 + (int)sVar9;
              sVar12 = strspn(pcVar10 + (longlong)iVar6 + 1,local_80);
              iVar16 = local_98 + (int)sVar12 + (int)sVar9;
              if ((iVar6 == iVar16) || (pcVar10[(longlong)iVar16 + 1] != '\0')) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar15 = 0x425;
              }
              else {
                iVar16 = FUN_140bc7880(local_40,pcVar10 + (longlong)iVar6 + 1);
                if (iVar16 != local_94) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  uVar15 = 0x42a;
                  goto LAB_140be8be5;
                }
                if (iVar4 == 1) {
                  sVar9 = 4;
                }
                else if (iVar4 == 2) {
                  sVar9 = 0x10;
                }
                else {
                  sVar9 = 0;
                }
                iVar16 = memcmp(local_50,local_40,sVar9);
                lVar7 = local_a8;
                if (iVar16 < 1) {
                  lVar11 = FUN_140bea150(local_a8,iVar4,puVar18);
                  if ((lVar11 != 0) &&
                     (iVar4 = FUN_140be9df0(&local_70,local_50,local_40), uVar15 = local_70,
                     iVar4 != 0)) {
                    iVar4 = FUN_140b78340(lVar11,local_70);
                    if (iVar4 != 0) goto LAB_140be8aad;
                    FUN_140be0760(uVar15,&DAT_141237970);
                  }
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("crypto\\x509\\v3_addr.c",0x434,"v2i_IPAddrBlocks");
                  FUN_140b91cc0(0x22,0x80022,0);
                  goto LAB_140be8b40;
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar15 = 0x42f;
              }
            }
            else if (cVar1 == '/') {
              pcVar17 = local_88 + 1;
              uVar5 = strtoul(pcVar17,&local_a0,10);
              lVar7 = local_a8;
              if ((((local_a0 != pcVar17) && (*local_a0 == '\0')) && ((int)uVar5 <= iVar16 * 8)) &&
                 (-1 < (int)uVar5)) {
                lVar11 = FUN_140bea150(local_a8,iVar4,puVar18);
                if (lVar11 != 0) {
                  if (iVar4 == 1) {
                    uVar15 = 4;
                  }
                  else if (iVar4 == 2) {
                    uVar15 = 0x10;
                  }
                  else {
                    uVar15 = 0;
                  }
                  iVar4 = FUN_140be9ce0(&local_78,local_50,uVar5,uVar15);
                  uVar15 = local_78;
                  if (iVar4 != 0) {
                    iVar4 = FUN_140b78340(lVar11,local_78);
                    if (iVar4 != 0) goto LAB_140be8aad;
                    FUN_140be0760(uVar15,&DAT_141237970);
                  }
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("crypto\\x509\\v3_addr.c",0x41d,"v2i_IPAddrBlocks");
                FUN_140b91cc0(0x22,0x80022,0);
                goto LAB_140be8b40;
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar15 = 0x418;
            }
            else {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar15 = 0x43f;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\x509\\v3_addr.c",uVar15,"v2i_IPAddrBlocks");
            uVar15 = 0x74;
          }
          else {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar15 = 0x40c;
LAB_140be8be5:
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\x509\\v3_addr.c",uVar15,"v2i_IPAddrBlocks");
            uVar15 = 0xa6;
          }
LAB_140be8734:
          FUN_140b91cc0(0x22,uVar15,0);
          local_b8 = *(undefined8 *)(lVar8 + 0x10);
          FUN_140b92440(4,"name=",*(undefined8 *)(lVar8 + 8),", value=");
          lVar7 = local_a8;
          goto LAB_140be8b40;
        }
        lVar11 = FUN_140bea030(lVar11,iVar4,puVar18);
        if ((lVar11 == 0) || (piVar2 = *(int **)(lVar11 + 8), piVar2 == (int *)0x0)) {
LAB_140be8712:
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\x509\\v3_addr.c",0x3fd,"v2i_IPAddrBlocks");
          uVar15 = 0xa5;
          goto LAB_140be8734;
        }
        if (*piVar2 == 1) {
          if (*(longlong *)(piVar2 + 2) == 0) {
LAB_140be877d:
            lVar7 = FUN_140b90ff0();
            *(longlong *)(*(longlong *)(lVar11 + 8) + 8) = lVar7;
            if (lVar7 != 0) goto LAB_140be878f;
          }
          goto LAB_140be8712;
        }
        if ((*piVar2 != 0) || (lVar7 = local_a8, *(longlong *)(piVar2 + 2) == 0)) {
          if (*(longlong *)(piVar2 + 2) == 0) goto LAB_140be877d;
LAB_140be878f:
          **(undefined4 **)(lVar11 + 8) = 0;
          lVar7 = local_a8;
        }
LAB_140be8aad:
        FUN_140b8d990(local_60,"crypto\\x509\\v3_addr.c");
        param_3 = local_58;
        iVar16 = local_90 + 1;
        local_90 = iVar16;
        iVar4 = FUN_140b77980(local_58);
        lVar11 = local_a8;
      } while (iVar16 < iVar4);
    }
    pcVar10 = (char *)0x0;
    iVar16 = 0;
    iVar4 = FUN_140b77980(lVar7);
    if (0 < iVar4) {
      do {
        puVar13 = (undefined8 *)FUN_140b77990(lVar7,iVar16);
        piVar2 = (int *)*puVar13;
        if (1 < *piVar2 - 2U) goto LAB_140be8b40;
        if (*(int *)puVar13[1] == 1) {
          if (((puVar13 == (undefined8 *)0x0) || (piVar2 == (int *)0x0)) ||
             (puVar3 = *(undefined1 **)(piVar2 + 2), puVar3 == (undefined1 *)0x0)) {
            uVar14 = 0;
          }
          else {
            uVar14 = CONCAT11(*puVar3,puVar3[1]);
          }
          iVar4 = FUN_140bea260(*(undefined8 *)((int *)puVar13[1] + 2),uVar14);
          if (iVar4 == 0) goto LAB_140be8b40;
        }
        iVar16 = iVar16 + 1;
        iVar4 = FUN_140b77980(lVar7);
      } while (iVar16 < iVar4);
    }
    FUN_140b783f0(lVar7,FUN_140bea210);
    FUN_140b78500(lVar7);
    iVar4 = FUN_140be8da0(lVar7);
    if (iVar4 == 0) {
LAB_140be8b40:
      FUN_140b8d990(pcVar10,"crypto\\x509\\v3_addr.c",0x450);
      FUN_140b77c60(lVar7,FUN_140be8d80);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_d8);
}

