/**
 * Function: pem_x509_info_read_bio_ex
 * Address:  140c25510
 * Signature: undefined pem_x509_info_read_bio_ex(void)
 * Body size: 1346 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pem_x509_info_read_bio_ex
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
               undefined4 *param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  size_t sVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  code *pcVar12;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  char *local_b0;
  longlong local_a8;
  char *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68 [24];
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x140c2552c;
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)0x0;
  local_98 = param_6;
  local_b0 = (char *)0x0;
  local_a0 = (char *)0x0;
  local_a8 = 0;
  local_88 = param_4;
  local_80 = param_3;
  local_78 = param_1;
  local_70 = param_2;
  if ((param_2 == 0) && (param_2 = FUN_140b77ab0(), param_2 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pem\\pem_info.c",0x46,"PEM_X509_INFO_read_bio_ex");
    FUN_140b91cc0(9,0x8000f,0);
  }
  else {
    plVar4 = (longlong *)cryptoasn1x_infoc();
    if (plVar4 != (longlong *)0x0) {
      FUN_140b932f0();
      local_c8 = local_b8;
      iVar3 = FUN_140bf3d20(param_1,&local_b0,&local_a0,&local_a8);
      while (iVar3 != 0) {
        iVar3 = 0;
        FUN_140b93470();
LAB_140c25610:
        pcVar5 = local_b0;
        iVar1 = strcmp(local_b0,"CERTIFICATE");
        iVar9 = 0;
        iVar10 = iVar9;
        if (((iVar1 == 0) || (iVar1 = strcmp(pcVar5,"X509 CERTIFICATE"), iVar1 == 0)) ||
           (iVar1 = strcmp(pcVar5,"TRUSTED CERTIFICATE"), iVar1 == 0)) {
          if (*plVar4 == 0) {
            iVar3 = strcmp(pcVar5,"TRUSTED CERTIFICATE");
            lVar6 = FUN_140b76440(param_5,local_98);
            *plVar4 = lVar6;
            if (lVar6 == 0) goto LAB_140c259ba;
            pcVar12 = FUN_140b76540;
            plVar11 = plVar4;
            pcVar5 = local_a0;
            if (iVar3 != 0) {
              pcVar12 = FUN_140b763f0;
            }
            goto LAB_140c25750;
          }
LAB_140c25682:
          iVar10 = FUN_140b78340(param_2,plVar4);
          if ((iVar10 == 0) || (plVar4 = (longlong *)cryptoasn1x_infoc(), plVar4 == (longlong *)0x0)
             ) goto LAB_140c259ba;
          goto LAB_140c25610;
        }
        iVar1 = strcmp(pcVar5,"X509 CRL");
        if (iVar1 == 0) {
          pcVar12 = FUN_140beb8b0;
          plVar11 = plVar4 + 1;
          pcVar5 = local_a0;
          if (plVar4[1] == 0) goto LAB_140c25750;
          goto LAB_140c25682;
        }
        pcVar5 = strstr(pcVar5,"PRIVATE KEY");
        if (pcVar5 == (char *)0x0) goto LAB_140c2587a;
        if (plVar4[2] != 0) goto LAB_140c25682;
        if ((pcVar5 != local_b0) && (iVar10 = strcmp(local_b0,"ENCRYPTED PRIVATE KEY"), iVar10 != 0)
           ) {
          pcVar5[-1] = '\0';
          iVar3 = FUN_140b80e00(local_b0);
        }
        plVar4[7] = 0;
        pcVar12 = FUN_140bf2c20;
        *(undefined4 *)(plVar4 + 6) = 0;
        lVar6 = FUN_140cb3400();
        pcVar5 = local_a0;
        plVar4[2] = lVar6;
        if (lVar6 == 0) goto LAB_140c259ba;
        sVar7 = strlen(local_a0);
        plVar11 = (longlong *)(lVar6 + 0x18);
        iVar10 = iVar3;
        if ((int)sVar7 < 0xb) {
          iVar3 = strcmp(local_b0,"ENCRYPTED PRIVATE KEY");
          iVar9 = 0;
          if (iVar3 != 0) goto LAB_140c25750;
        }
        iVar9 = 1;
LAB_140c25750:
        if (iVar9 == 0) {
          iVar3 = pem_get_evp_cipher_info(pcVar5,local_68);
          if (iVar3 == 0) goto LAB_140c259ba;
          local_c8 = local_88;
          iVar3 = enter_pem_pass_phrase(local_68,local_a8,local_b8,local_80);
          if (iVar3 == 0) goto LAB_140c259ba;
          local_90 = local_a8;
          if (iVar10 == 0) {
            lVar6 = (*pcVar12)(plVar11,&local_90,local_b8[0]);
            if (lVar6 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\pem\\pem_info.c",0xa9,"PEM_X509_INFO_read_bio_ex");
              FUN_140b91cc0(9,0x8000d,0);
              goto LAB_140c259ba;
            }
          }
          else {
            local_c0 = local_98;
            local_c8 = param_5;
            lVar6 = FUN_140bf2a00(iVar10,plVar11,&local_90,local_b8[0]);
            if (lVar6 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\pem\\pem_info.c",0xa5,"PEM_X509_INFO_read_bio_ex");
              FUN_140b91cc0(9,0x8000d,0);
              goto LAB_140c259ba;
            }
          }
        }
        else {
          iVar3 = pem_get_evp_cipher_info(pcVar5,plVar4 + 3);
          if (iVar3 == 0) goto LAB_140c259ba;
          plVar4[7] = local_a8;
          *(undefined4 *)(plVar4 + 6) = local_b8[0];
          local_a8 = 0;
        }
LAB_140c2587a:
        FUN_140b8d990(local_b0,"crypto\\pem\\pem_info.c",0xb4);
        local_b0 = (char *)0x0;
        FUN_140b8d990(local_a0,"crypto\\pem\\pem_info.c",0xb6);
        local_a0 = (char *)0x0;
        FUN_140b8d990(local_a8,"crypto\\pem\\pem_info.c",0xb8);
        local_a8 = 0;
        FUN_140b932f0();
        local_c8 = local_b8;
        iVar3 = FUN_140bf3d20(local_78,&local_b0,&local_a0,&local_a8);
      }
      uVar2 = FUN_140b92170();
      if ((((int)uVar2 >> 0x1f & 0x7f800000U) + 0x7fffff & uVar2) == 0x6c) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        if ((((*plVar4 == 0) && (plVar4[1] == 0)) &&
            ((plVar4[2] == 0 && (plVar11 = plVar4, plVar4[7] == 0)))) ||
           (iVar3 = FUN_140b78340(param_2,plVar4), plVar11 = (longlong *)0x0, iVar3 != 0)) {
          cryptoasn1x_infoc(plVar11);
          goto LAB_140c25a01;
        }
      }
      else {
        FUN_140b93470();
      }
    }
  }
LAB_140c259ba:
  cryptoasn1x_infoc(plVar4);
  iVar10 = 0;
  iVar3 = FUN_140b77980(param_2);
  if (0 < iVar3) {
    do {
      uVar8 = FUN_140b77990(param_2,iVar10);
      cryptoasn1x_infoc(uVar8);
      iVar10 = iVar10 + 1;
      iVar3 = FUN_140b77980(param_2);
    } while (iVar10 < iVar3);
  }
  if (param_2 != local_70) {
    FUN_140b77c10(param_2);
  }
LAB_140c25a01:
  FUN_140b8d990(local_b0,"crypto\\pem\\pem_info.c",0xd3);
  FUN_140b8d990(local_a0,"crypto\\pem\\pem_info.c",0xd4);
  FUN_140b8d990(local_a8,"crypto\\pem\\pem_info.c",0xd5);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_e8);
}

