/**
 * Function: pem_get_evp_cipher_info
 * Address:  140bf4970
 * Signature: undefined pem_get_evp_cipher_info(void)
 * Body size: 1477 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pem_get_evp_cipher_info
               (undefined8 *param_1,uint *param_2,ulonglong *param_3,undefined8 param_4,
               longlong param_5,undefined8 param_6,uint *param_7,uint param_8)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  size_t sVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined8 local_b8;
  uint local_b0 [2];
  char *local_a8;
  longlong local_a0;
  ulonglong local_98;
  uint *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  uint *local_78;
  ulonglong *local_70;
  longlong local_68;
  byte local_60 [16];
  ulonglong local_50;
  undefined8 uStack_48;
  ulonglong uVar14;
  
  uStack_48 = 0x140bf498c;
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  uVar14 = 0;
  bVar5 = false;
  local_a0 = param_5;
  local_88 = param_6;
  local_90 = param_7;
  uVar17 = param_8 & 1;
  local_98 = 0;
  local_a8 = (char *)0x0;
  local_b8 = 0;
  local_b0[0] = 0;
  uVar10 = uVar14;
  uVar18 = uVar14;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  while( true ) {
    pcVar3 = local_a8;
    uVar11 = local_b8;
    if (uVar17 == 0) {
      FUN_140b8d990(uVar18,"crypto\\pem\\pem_lib.c",0xfe);
      FUN_140b8d990(pcVar3,"crypto\\pem\\pem_lib.c",0xff);
      FUN_140b8d990(uVar11,"crypto\\pem\\pem_lib.c",0x100);
    }
    else {
      FUN_140b8dfb0(uVar18,0,"crypto\\pem\\pem_lib.c",0xfe);
      FUN_140b8dfb0(pcVar3,0,"crypto\\pem\\pem_lib.c",0xff);
      FUN_140b8dfb0(uVar11,(longlong)(int)uVar10,"crypto\\pem\\pem_lib.c",0x100);
    }
    local_c0 = param_8;
    local_c8 = local_b0;
    iVar6 = pem_read_bio_ex(local_a0,&local_98,&local_a8,&local_b8);
    uVar18 = local_98;
    if (iVar6 == 0) {
      uVar17 = FUN_140b92090();
      if ((((int)uVar17 >> 0x1f & 0x7f800000U) + 0x7fffff & uVar17) == 0x6c) {
        FUN_140b92440(2,"Expecting: ",param_4);
      }
      goto LAB_140bf4f29;
    }
    iVar6 = encrypted_private_key(local_98);
    pcVar3 = local_a8;
    if (iVar6 != 0) break;
    uVar10 = (ulonglong)local_b0[0];
  }
  local_68 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_60[8] = 0;
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  if (((local_a8 == (char *)0x0) || (*local_a8 == '\0')) || (*local_a8 == '\n')) {
LAB_140bf4d8b:
    uVar11 = local_b8;
    local_c8 = local_90;
    iVar6 = enter_pem_pass_phrase(&local_68,local_b8,local_b0,local_88);
    if (iVar6 == 0) goto LAB_140bf4bdd;
    bVar2 = true;
    *local_80 = uVar11;
    *local_78 = local_b0[0];
    bVar5 = true;
    if (local_70 == (ulonglong *)0x0) goto LAB_140bf4bdd;
    *local_70 = uVar18;
    bVar5 = true;
    if (uVar17 != 0) goto LAB_140bf4bfd;
  }
  else {
    iVar6 = strncmp(local_a8,"Proc-Type:",10);
    if (iVar6 != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pem\\pem_lib.c",0x213,"PEM_get_EVP_CIPHER_INFO");
      uVar11 = 0x6b;
      goto LAB_140bf4bcf;
    }
    pcVar16 = pcVar3 + 10;
    sVar8 = strspn(pcVar16," \t");
    uVar11 = local_b8;
    if ((pcVar16[sVar8] != '4') || (pcVar15 = pcVar16 + sVar8 + 2, pcVar16[sVar8 + 1] != ','))
    goto LAB_140bf4bdd;
    sVar8 = strspn(pcVar15," \t");
    iVar6 = strncmp(pcVar15 + sVar8,"ENCRYPTED",9);
    if (iVar6 == 0) {
      pcVar16 = pcVar15 + sVar8 + 9;
      sVar8 = strspn(pcVar16," \t\r\n");
      if (sVar8 == 0) goto LAB_140bf4e3c;
      sVar8 = strspn(pcVar16," \t\r");
      if (pcVar16[sVar8] == '\n') {
        iVar6 = strncmp(pcVar16 + sVar8 + 1,"DEK-Info:",9);
        if (iVar6 == 0) {
          sVar9 = strspn(pcVar16 + sVar8 + 10," \t");
          pcVar16 = pcVar16 + sVar8 + 10 + sVar9;
          sVar8 = strcspn(pcVar16," \t,");
          cVar1 = pcVar16[sVar8];
          pcVar16[sVar8] = '\0';
          pcVar15 = pcVar16 + sVar8;
          local_a0 = FUN_140b99900(pcVar16);
          *pcVar15 = cVar1;
          local_68 = local_a0;
          sVar8 = strspn(pcVar15," \t");
          lVar4 = local_a0;
          pcVar15 = pcVar15 + sVar8;
          if (local_a0 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\pem\\pem_lib.c",0x23f,"PEM_get_EVP_CIPHER_INFO");
            uVar11 = 0x72;
          }
          else {
            iVar6 = FUN_140b97eb0(local_a0);
            if (iVar6 < 1) {
              if ((iVar6 != 0) || (*pcVar15 != ',')) goto LAB_140bf4d32;
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\pem\\pem_lib.c",0x247,"PEM_get_EVP_CIPHER_INFO");
              uVar11 = 0x82;
            }
            else {
              cVar1 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              if (cVar1 == ',') {
LAB_140bf4d32:
                iVar6 = FUN_140b97eb0(lVar4);
                if (0 < iVar6) {
                  memset(local_60,0,(longlong)iVar6);
                }
                if (0 < iVar6 * 2) {
                  do {
                    iVar7 = FUN_140b8c590(*pcVar15);
                    if (iVar7 < 0) {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      d_aplatformplatformopenssl_srccryptoerrerr_lo
                                ("crypto\\pem\\pem_lib.c",0x25d,"load_iv");
                      uVar11 = 0x67;
                      goto LAB_140bf4bcf;
                    }
                    uVar12 = (uint)uVar14;
                    uVar10 = uVar14 >> 1;
                    pcVar15 = pcVar15 + 1;
                    uVar13 = uVar12 + 1;
                    uVar14 = (ulonglong)uVar13;
                    local_60[uVar10] = local_60[uVar10] | (char)iVar7 << (sbyte)((~uVar12 & 1) << 2)
                    ;
                  } while ((int)uVar13 < iVar6 * 2);
                }
                goto LAB_140bf4d8b;
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\pem\\pem_lib.c",0x244,"PEM_get_EVP_CIPHER_INFO");
              uVar11 = 0x81;
            }
          }
        }
        else {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\pem\\pem_lib.c",0x22d,"PEM_get_EVP_CIPHER_INFO");
          uVar11 = 0x69;
        }
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\pem\\pem_lib.c",0x224,"PEM_get_EVP_CIPHER_INFO");
        uVar11 = 0x70;
      }
    }
    else {
LAB_140bf4e3c:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pem\\pem_lib.c",0x21f,"PEM_get_EVP_CIPHER_INFO");
      uVar11 = 0x6a;
    }
LAB_140bf4bcf:
    FUN_140b91cc0(9,uVar11,0);
    uVar11 = local_b8;
LAB_140bf4bdd:
    bVar2 = bVar5;
    if (uVar17 != 0) {
      FUN_140b8dfb0(uVar18,0,"crypto\\pem\\pem_lib.c",0x116);
      bVar5 = bVar2;
LAB_140bf4bfd:
      bVar2 = bVar5;
      FUN_140b8dfb0(pcVar3,0,"crypto\\pem\\pem_lib.c",0x117);
      goto LAB_140bf4eb7;
    }
    FUN_140b8d990(uVar18,"crypto\\pem\\pem_lib.c",0x116);
  }
  FUN_140b8d990(pcVar3,"crypto\\pem\\pem_lib.c",0x117);
LAB_140bf4eb7:
  if (!bVar2) {
    if (uVar17 == 0) {
      FUN_140b8d990(uVar11,"crypto\\pem\\pem_lib.c",0x119);
    }
    else {
      FUN_140b8dfb0(uVar11,(longlong)(int)local_b0[0],"crypto\\pem\\pem_lib.c",0x119);
    }
  }
LAB_140bf4f29:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_e8);
}

