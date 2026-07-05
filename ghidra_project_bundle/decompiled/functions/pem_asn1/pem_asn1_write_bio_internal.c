/**
 * Function: pem_asn1_write_bio_internal
 * Address:  140bf4f50
 * Signature: undefined pem_asn1_write_bio_internal(void)
 * Body size: 1408 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pem_asn1_write_bio_internal
               (code *param_1,code *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
               ,undefined8 param_6,longlong param_7,char *param_8,int param_9,code *param_10,
               char *param_11)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  code *pcVar9;
  int iVar10;
  code *pcVar11;
  code *pcVar12;
  undefined1 auStack_548 [32];
  undefined1 *local_528;
  undefined4 local_520;
  undefined1 *local_518;
  undefined8 local_510;
  int local_508;
  int local_504;
  code *local_500;
  int local_4f8 [2];
  undefined8 local_4f0;
  code *local_4e8;
  char *local_4e0;
  char *local_4d8;
  char *local_4d0;
  code *local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined1 local_4b0 [24];
  undefined1 local_498 [64];
  char local_458 [1024];
  ulonglong local_58 [2];
  undefined8 uStack_48;
  
  uStack_48 = 0x140bf4f6f;
  local_58[0] = DAT_1414ef3c0 ^ (ulonglong)auStack_548;
  pcVar9 = (code *)0x0;
  pcVar11 = (code *)0x0;
  local_4b8 = param_5;
  local_4d0 = param_8;
  local_4e0 = param_11;
  local_4c8 = param_10;
  local_504 = 0;
  local_508 = 0;
  local_4f8[0] = 0;
  local_4d8 = (char *)0x0;
  local_500 = param_2;
  local_4f0 = param_3;
  local_4c0 = param_4;
  if (param_7 == 0) {
LAB_140bf508c:
    pcVar1 = local_500;
    pcVar12 = (code *)0x0;
    if (param_1 == (code *)0x0) {
      if (local_500 == (code *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\pem\\pem_lib.c",0x15d,"PEM_ASN1_write_bio_internal");
        FUN_140b91cc0(0xf,0x6d,0);
        local_504 = 0;
        goto LAB_140bf5473;
      }
      local_504 = (*local_500)(param_6,0);
    }
    else {
      local_504 = (*param_1)(param_6,0,local_4f0);
    }
    if (local_504 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pem\\pem_lib.c",0x163,"PEM_ASN1_write_bio_internal");
      FUN_140b91cc0(9,0x8000d,0);
      local_504 = 0;
    }
    else {
      local_500 = (code *)FUN_140b8d8d0(local_504 + 0x20,"crypto\\pem\\pem_lib.c",0x168);
      pcVar12 = local_500;
      if (local_500 != (code *)0x0) {
        local_4e8 = local_500;
        if (param_1 == (code *)0x0) {
          local_508 = (*pcVar1)(param_6,&local_4e8,local_4f0);
        }
        else {
          local_508 = (*param_1)();
        }
        pcVar5 = local_4e0;
        if (param_7 == 0) {
          local_458[0] = '\0';
          pcVar12 = local_500;
        }
        else {
          pcVar7 = local_4d0;
          if (local_4d0 == (char *)0x0) {
            if (local_4c8 == (code *)0x0) {
              if (local_4e0 == (char *)0x0) {
                pcVar7 = (char *)FUN_140c70090();
                local_528 = (undefined1 *)CONCAT44(local_528._4_4_,1);
                pcVar5 = "Enter PEM pass phrase:";
                if (pcVar7 != (char *)0x0) {
                  pcVar5 = pcVar7;
                }
                iVar2 = FUN_140c6ff90(local_458,4,0x400,pcVar5);
                if (iVar2 == 0) {
                  sVar6 = strlen(local_458);
                  param_9 = (int)sVar6;
                }
                else {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("crypto\\pem\\pem_lib.c",0x3e,"PEM_def_callback");
                  FUN_140b91cc0(9,0x6d,0);
                  memset(local_458,0,0x400);
                  param_9 = -1;
                }
              }
              else {
                sVar6 = strlen(local_4e0);
                param_9 = (int)sVar6;
                if (0x400 < param_9) {
                  param_9 = 0x400;
                }
                memcpy(local_458,pcVar5,(longlong)param_9);
              }
            }
            else {
              param_9 = (*local_4c8)(local_458,0x400,1,local_4e0);
            }
            if (param_9 < 1) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\pem\\pem_lib.c",0x175,"PEM_ASN1_write_bio_internal");
              FUN_140b91cc0(9,0x6f,0);
              pcVar11 = pcVar9;
              pcVar12 = local_500;
              goto LAB_140bf5473;
            }
            pcVar7 = local_458;
          }
          uVar3 = FUN_140b97eb0(param_7);
          iVar2 = FUN_140b82be0(local_4b0,uVar3);
          pcVar12 = local_500;
          if (iVar2 < 1) goto LAB_140bf5473;
          uVar8 = FUN_140b704e0();
          local_510 = 0;
          local_518 = local_498;
          local_520 = 1;
          local_528 = (undefined1 *)CONCAT44(local_528._4_4_,param_9);
          iVar2 = assertion_failed_nkey_evp_max_key_length(param_7,uVar8,local_4b0,pcVar7);
          pcVar12 = local_500;
          if (iVar2 == 0) goto LAB_140bf5473;
          if (pcVar7 == local_458) {
            FUN_14046e980(local_458,0x400);
          }
          local_458[0] = '\0';
          sVar6 = strlen(local_458);
          FUN_140c07aa0(local_458 + sVar6,(longlong)local_58 - (longlong)(local_458 + sVar6),
                        "Proc-Type: 4,%s\n","ENCRYPTED");
          iVar2 = FUN_140b97eb0(param_7);
          sVar6 = strlen(local_458);
          pcVar5 = local_458 + sVar6;
          iVar10 = (int)local_58 - (int)pcVar5;
          iVar4 = FUN_140c07aa0(pcVar5,(longlong)iVar10,"DEK-Info: %s,",local_4d8);
          if (0 < iVar4) {
            iVar10 = iVar10 - iVar4;
            pcVar5 = pcVar5 + iVar4;
            if (0 < iVar2) {
              do {
                iVar4 = FUN_140c07aa0(pcVar5,(longlong)iVar10,&DAT_1413a6654,
                                      local_4b0[(longlong)pcVar9]);
                if (iVar4 < 1) goto LAB_140bf53c5;
                iVar10 = iVar10 - iVar4;
                pcVar9 = pcVar9 + 1;
                pcVar5 = pcVar5 + iVar4;
              } while ((longlong)pcVar9 < (longlong)iVar2);
            }
            if (1 < iVar10) {
              pcVar5[0] = '\n';
              pcVar5[1] = '\0';
            }
          }
LAB_140bf53c5:
          pcVar11 = (code *)FUN_140b857c0();
          pcVar12 = local_500;
          if (pcVar11 == (code *)0x0) goto LAB_140bf5473;
          local_528 = local_4b0;
          iVar2 = FUN_140b84850(pcVar11,param_7,0,local_498);
          pcVar12 = local_500;
          if (iVar2 == 0) goto LAB_140bf5473;
          local_528 = (undefined1 *)CONCAT44(local_528._4_4_,local_508);
          iVar2 = evp_encryptupdate(pcVar11,local_500,local_4f8,local_500);
          if ((iVar2 == 0) ||
             (iVar2 = assertion_failed_b_sizeofctx_buf(pcVar11,pcVar12 + local_4f8[0],&local_508),
             iVar2 == 0)) goto LAB_140bf5473;
          local_508 = local_508 + local_4f8[0];
          pcVar9 = pcVar11;
        }
        local_528 = (undefined1 *)CONCAT44(local_528._4_4_,local_508);
        local_508 = pem_write_bio(local_4b8,local_4c0,local_458,pcVar12);
        pcVar11 = pcVar9;
      }
    }
  }
  else {
    pcVar5 = (char *)FUN_140b97de0(param_7);
    local_4d8 = pcVar5;
    if (((pcVar5 != (char *)0x0) && (iVar2 = FUN_140b97eb0(param_7), iVar2 != 0)) &&
       (iVar2 = FUN_140b97eb0(param_7), iVar2 < 0x11)) {
      sVar6 = strlen(pcVar5);
      iVar2 = FUN_140b97eb0(param_7);
      if (sVar6 + 0x24 + (longlong)(iVar2 * 2) < 0x401) goto LAB_140bf508c;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pem\\pem_lib.c",0x157,"PEM_ASN1_write_bio_internal");
    FUN_140b91cc0(9,0x71,0);
    pcVar11 = pcVar9;
    pcVar12 = pcVar9;
  }
LAB_140bf5473:
  FUN_14046e980(local_498,0x40);
  FUN_14046e980(local_4b0,0x10);
  FUN_140b858e0(pcVar11);
  FUN_14046e980(local_458,0x400);
  FUN_140b8db20(pcVar12,local_504,"crypto\\pem\\pem_lib.c",0x1a5);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58[0] ^ (ulonglong)auStack_548);
}

