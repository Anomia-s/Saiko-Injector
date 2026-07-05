/**
 * Function: missing_s_newctx_or_freectx_s
 * Address:  140bff250
 * Signature: undefined missing_s_newctx_or_freectx_s(void)
 * Body size: 2815 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * missing_s_newctx_or_freectx_s(undefined4 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint local_res10;
  
  piVar5 = *(int **)(param_2 + 0x10);
  uVar6 = 0;
  local_res10 = 0;
  iVar12 = 0;
  iVar13 = 0;
  puVar3 = (undefined4 *)FUN_140b8da80(0x128,"crypto\\evp\\signature.c",0x23);
  if (puVar3 == (undefined4 *)0x0) {
LAB_140bffd06:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\signature.c",0x44,"evp_signature_from_algorithm");
    FUN_140b91cc0(6,0x80006,0);
    return (undefined4 *)0x0;
  }
  puVar3[8] = 1;
  iVar2 = FUN_140bd3100(param_3);
  if (iVar2 == 0) {
    FUN_140b8d990(puVar3,"crypto\\evp\\signature.c",0x2b);
    goto LAB_140bffd06;
  }
  *(undefined8 *)(puVar3 + 6) = param_3;
  *puVar3 = param_1;
  lVar4 = FUN_140bd5310(param_2);
  *(longlong *)(puVar3 + 2) = lVar4;
  if (lVar4 == 0) goto LAB_140bffcac;
  puVar1 = *(undefined1 **)(param_2 + 0x18);
  *(undefined1 **)(puVar3 + 4) = puVar1;
  puVar8 = &DAT_1413a2ad6;
  if (puVar1 != (undefined1 *)0x0) {
    puVar8 = puVar1;
  }
  iVar2 = *piVar5;
  if (iVar2 == 0) {
LAB_140bffc6f:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\signature.c",0x128,"evp_signature_from_algorithm");
    uVar10 = *(undefined8 *)(puVar3 + 2);
    pcVar9 = "missing %s newctx or freectx:%s";
  }
  else {
    piVar5 = piVar5 + 2;
    uVar7 = 0;
    uVar11 = 0;
    do {
      switch(iVar2) {
      case 1:
        if (*(longlong *)(puVar3 + 10) == 0) {
          iVar12 = iVar12 + 1;
          *(undefined8 *)(puVar3 + 10) = *(undefined8 *)piVar5;
        }
        break;
      case 2:
        if (*(longlong *)(puVar3 + 0xc) == 0) {
          iVar13 = iVar13 + 1;
          *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)piVar5;
        }
        break;
      case 3:
        if (*(longlong *)(puVar3 + 0xe) == 0) {
          *(undefined8 *)(puVar3 + 0xe) = *(undefined8 *)piVar5;
        }
        break;
      case 4:
        if (*(longlong *)(puVar3 + 0x16) == 0) {
          iVar13 = iVar13 + 1;
          *(undefined8 *)(puVar3 + 0x16) = *(undefined8 *)piVar5;
        }
        break;
      case 5:
        if (*(longlong *)(puVar3 + 0x18) == 0) {
          *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)piVar5;
        }
        break;
      case 6:
        if (*(longlong *)(puVar3 + 0x20) == 0) {
          iVar13 = iVar13 + 1;
          *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)piVar5;
        }
        break;
      case 7:
        if (*(longlong *)(puVar3 + 0x22) == 0) {
          *(undefined8 *)(puVar3 + 0x22) = *(undefined8 *)piVar5;
        }
        break;
      case 8:
        if (*(longlong *)(puVar3 + 0x24) == 0) {
          iVar13 = iVar13 + 1;
          *(undefined8 *)(puVar3 + 0x24) = *(undefined8 *)piVar5;
        }
        break;
      case 9:
        if (*(longlong *)(puVar3 + 0x26) == 0) {
          *(undefined8 *)(puVar3 + 0x26) = *(undefined8 *)piVar5;
        }
        break;
      case 10:
        if (*(longlong *)(puVar3 + 0x28) == 0) {
          *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)piVar5;
        }
        break;
      case 0xb:
        if (*(longlong *)(puVar3 + 0x2a) == 0) {
          *(undefined8 *)(puVar3 + 0x2a) = *(undefined8 *)piVar5;
        }
        break;
      case 0xc:
        if (*(longlong *)(puVar3 + 0x2c) == 0) {
          iVar13 = iVar13 + 1;
          *(undefined8 *)(puVar3 + 0x2c) = *(undefined8 *)piVar5;
        }
        break;
      case 0xd:
        if (*(longlong *)(puVar3 + 0x2e) == 0) {
          *(undefined8 *)(puVar3 + 0x2e) = *(undefined8 *)piVar5;
        }
        break;
      case 0xe:
        if (*(longlong *)(puVar3 + 0x30) == 0) {
          *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)piVar5;
        }
        break;
      case 0xf:
        if (*(longlong *)(puVar3 + 0x32) == 0) {
          *(undefined8 *)(puVar3 + 0x32) = *(undefined8 *)piVar5;
        }
        break;
      case 0x10:
        if (*(longlong *)(puVar3 + 0x34) == 0) {
          iVar12 = iVar12 + 1;
          *(undefined8 *)(puVar3 + 0x34) = *(undefined8 *)piVar5;
        }
        break;
      case 0x11:
        if (*(longlong *)(puVar3 + 0x36) == 0) {
          *(undefined8 *)(puVar3 + 0x36) = *(undefined8 *)piVar5;
        }
        break;
      case 0x12:
        if (*(longlong *)(puVar3 + 0x38) == 0) {
          uVar6 = uVar6 + 1;
          *(undefined8 *)(puVar3 + 0x38) = *(undefined8 *)piVar5;
        }
        break;
      case 0x13:
        if (*(longlong *)(puVar3 + 0x3a) == 0) {
          uVar6 = uVar6 + 1;
          *(undefined8 *)(puVar3 + 0x3a) = *(undefined8 *)piVar5;
        }
        break;
      case 0x14:
        if (*(longlong *)(puVar3 + 0x3c) == 0) {
          uVar7 = uVar7 + 1;
          *(undefined8 *)(puVar3 + 0x3c) = *(undefined8 *)piVar5;
        }
        break;
      case 0x15:
        if (*(longlong *)(puVar3 + 0x3e) == 0) {
          uVar7 = uVar7 + 1;
          *(undefined8 *)(puVar3 + 0x3e) = *(undefined8 *)piVar5;
        }
        break;
      case 0x16:
        if (*(longlong *)(puVar3 + 0x40) == 0) {
          uVar11 = uVar11 + 1;
          *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)piVar5;
        }
        break;
      case 0x17:
        if (*(longlong *)(puVar3 + 0x42) == 0) {
          uVar11 = uVar11 + 1;
          *(undefined8 *)(puVar3 + 0x42) = *(undefined8 *)piVar5;
        }
        break;
      case 0x18:
        if (*(longlong *)(puVar3 + 0x44) == 0) {
          local_res10 = local_res10 + 1;
          *(undefined8 *)(puVar3 + 0x44) = *(undefined8 *)piVar5;
        }
        break;
      case 0x19:
        if (*(longlong *)(puVar3 + 0x46) == 0) {
          local_res10 = local_res10 + 1;
          *(undefined8 *)(puVar3 + 0x46) = *(undefined8 *)piVar5;
        }
        break;
      case 0x1a:
        if (*(longlong *)(puVar3 + 0x48) == 0) {
          *(undefined8 *)(puVar3 + 0x48) = *(undefined8 *)piVar5;
        }
        break;
      case 0x1b:
        if (*(longlong *)(puVar3 + 0x10) == 0) {
          iVar13 = iVar13 + 1;
          *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)piVar5;
        }
        break;
      case 0x1c:
        if (*(longlong *)(puVar3 + 0x12) == 0) {
          *(undefined8 *)(puVar3 + 0x12) = *(undefined8 *)piVar5;
        }
        break;
      case 0x1d:
        if (*(longlong *)(puVar3 + 0x14) == 0) {
          *(undefined8 *)(puVar3 + 0x14) = *(undefined8 *)piVar5;
        }
        break;
      case 0x1e:
        if (*(longlong *)(puVar3 + 0x1a) == 0) {
          iVar13 = iVar13 + 1;
          *(undefined8 *)(puVar3 + 0x1a) = *(undefined8 *)piVar5;
        }
        break;
      case 0x1f:
        if (*(longlong *)(puVar3 + 0x1c) == 0) {
          *(undefined8 *)(puVar3 + 0x1c) = *(undefined8 *)piVar5;
        }
        break;
      case 0x20:
        if (*(longlong *)(puVar3 + 0x1e) == 0) {
          *(undefined8 *)(puVar3 + 0x1e) = *(undefined8 *)piVar5;
        }
      }
      iVar2 = piVar5[2];
      piVar5 = piVar5 + 4;
    } while (iVar2 != 0);
    if (iVar12 != 2) goto LAB_140bffc6f;
    if (((((uVar6 & 0xfffffffd) == 0) && ((uVar7 & 0xfffffffd) == 0)) &&
        ((uVar11 & 0xfffffffd) == 0)) && ((local_res10 & 0xfffffffd) == 0)) {
      if (iVar13 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\signature.c",0x13b,"evp_signature_from_algorithm");
        uVar10 = *(undefined8 *)(puVar3 + 2);
        pcVar9 = "missing %s init:%s";
      }
      else if ((*(longlong *)(puVar3 + 0xc) == 0) || (*(longlong *)(puVar3 + 0xe) != 0)) {
        if (*(longlong *)(puVar3 + 0x10) == 0) {
LAB_140bff8bd:
          if ((*(longlong *)(puVar3 + 0xe) != 0) ||
             ((*(longlong *)(puVar3 + 0x12) != 0 || (*(longlong *)(puVar3 + 0x14) != 0))))
          goto LAB_140bff8cf;
        }
        else {
          if (*(longlong *)(puVar3 + 0xe) == 0) {
            if ((*(longlong *)(puVar3 + 0x12) == 0) || (*(longlong *)(puVar3 + 0x14) == 0))
            goto LAB_140bff890;
            goto LAB_140bff8bd;
          }
LAB_140bff8cf:
          if ((*(longlong *)(puVar3 + 0xc) == 0) && (*(longlong *)(puVar3 + 0x10) == 0)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\evp\\signature.c",0x154,"evp_signature_from_algorithm");
            uVar10 = *(undefined8 *)(puVar3 + 2);
            pcVar9 = "missing %s sign_init or sign_message_init:%s";
            goto LAB_140bffc98;
          }
        }
        if ((*(longlong *)(puVar3 + 0x16) == 0) || (*(longlong *)(puVar3 + 0x18) != 0)) {
          if (*(longlong *)(puVar3 + 0x1a) == 0) {
LAB_140bff95d:
            if ((*(longlong *)(puVar3 + 0x18) != 0) ||
               ((*(longlong *)(puVar3 + 0x1c) != 0 || (*(longlong *)(puVar3 + 0x1e) != 0))))
            goto LAB_140bff96f;
          }
          else {
            if (*(longlong *)(puVar3 + 0x18) == 0) {
              if ((*(longlong *)(puVar3 + 0x1c) == 0) || (*(longlong *)(puVar3 + 0x1e) == 0))
              goto LAB_140bff930;
              goto LAB_140bff95d;
            }
LAB_140bff96f:
            if ((*(longlong *)(puVar3 + 0x16) == 0) && (*(longlong *)(puVar3 + 0x1a) == 0)) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\evp\\signature.c",0x16b,"evp_signature_from_algorithm");
              uVar10 = *(undefined8 *)(puVar3 + 2);
              pcVar9 = "missing %s verify_init or verify_message_init:%s";
              goto LAB_140bffc98;
            }
          }
          if ((*(longlong *)(puVar3 + 0x20) == 0) || (*(longlong *)(puVar3 + 0x22) != 0)) {
            if (((*(longlong *)(puVar3 + 0x24) == 0) || (*(longlong *)(puVar3 + 0x2a) != 0)) ||
               ((*(longlong *)(puVar3 + 0x26) != 0 && (*(longlong *)(puVar3 + 0x28) != 0)))) {
              if ((*(longlong *)(puVar3 + 0x2c) == 0) ||
                 ((*(longlong *)(puVar3 + 0x32) != 0 ||
                  ((*(longlong *)(puVar3 + 0x2e) != 0 && (*(longlong *)(puVar3 + 0x30) != 0)))))) {
                if (((*(longlong *)(puVar3 + 0x2a) == 0) &&
                    ((*(longlong *)(puVar3 + 0x26) == 0 && (*(longlong *)(puVar3 + 0x28) == 0)))) ||
                   (*(longlong *)(puVar3 + 0x24) != 0)) {
                  if ((((*(longlong *)(puVar3 + 0x32) == 0) && (*(longlong *)(puVar3 + 0x2e) == 0))
                      && (*(longlong *)(puVar3 + 0x30) == 0)) || (*(longlong *)(puVar3 + 0x2c) != 0)
                     ) {
                    if ((*(longlong *)(puVar3 + 0x12) == 0) == (*(longlong *)(puVar3 + 0x14) == 0))
                    {
                      if ((*(longlong *)(puVar3 + 0x1c) == 0) == (*(longlong *)(puVar3 + 0x1e) == 0)
                         ) {
                        if ((*(longlong *)(puVar3 + 0x26) == 0) ==
                            (*(longlong *)(puVar3 + 0x28) == 0)) {
                          if ((*(longlong *)(puVar3 + 0x2e) == 0) ==
                              (*(longlong *)(puVar3 + 0x30) == 0)) {
                            return puVar3;
                          }
                          d_aplatformplatformopenssl_srccryptoerrerr_lo();
                          d_aplatformplatformopenssl_srccryptoerrerr_lo
                                    ("crypto\\evp\\signature.c",0x1bf,"evp_signature_from_algorithm"
                                    );
                          uVar10 = *(undefined8 *)(puVar3 + 2);
                          pcVar9 = 
                          "only one of %s digest verification update and final available:%s";
                        }
                        else {
                          d_aplatformplatformopenssl_srccryptoerrerr_lo();
                          d_aplatformplatformopenssl_srccryptoerrerr_lo
                                    ("crypto\\evp\\signature.c",0x1b8,"evp_signature_from_algorithm"
                                    );
                          uVar10 = *(undefined8 *)(puVar3 + 2);
                          pcVar9 = "only one of %s digest signing update and final available:%s";
                        }
                      }
                      else {
                        d_aplatformplatformopenssl_srccryptoerrerr_lo();
                        d_aplatformplatformopenssl_srccryptoerrerr_lo
                                  ("crypto\\evp\\signature.c",0x1b1,"evp_signature_from_algorithm");
                        uVar10 = *(undefined8 *)(puVar3 + 2);
                        pcVar9 = "only one of %s message verification update and final available:%s"
                        ;
                      }
                    }
                    else {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      d_aplatformplatformopenssl_srccryptoerrerr_lo
                                ("crypto\\evp\\signature.c",0x1aa,"evp_signature_from_algorithm");
                      uVar10 = *(undefined8 *)(puVar3 + 2);
                      pcVar9 = "only one of %s message signing update and final available:%s";
                    }
                  }
                  else {
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    d_aplatformplatformopenssl_srccryptoerrerr_lo
                              ("crypto\\evp\\signature.c",0x1a3,"evp_signature_from_algorithm");
                    uVar10 = *(undefined8 *)(puVar3 + 2);
                    pcVar9 = "missing %s digest_verify_init:%s";
                  }
                }
                else {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("crypto\\evp\\signature.c",0x199,"evp_signature_from_algorithm");
                  uVar10 = *(undefined8 *)(puVar3 + 2);
                  pcVar9 = "missing %s digest_sign_init:%s";
                }
              }
              else {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("crypto\\evp\\signature.c",0x18c,"evp_signature_from_algorithm");
                uVar10 = *(undefined8 *)(puVar3 + 2);
                pcVar9 = "missing %s digest_verify function:%s";
              }
            }
            else {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\evp\\signature.c",0x181,"evp_signature_from_algorithm");
              uVar10 = *(undefined8 *)(puVar3 + 2);
              pcVar9 = "missing %s digest_sign function:%s";
            }
          }
          else {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\evp\\signature.c",0x176,"evp_signature_from_algorithm");
            uVar10 = *(undefined8 *)(puVar3 + 2);
            pcVar9 = "missing %s verify_recover:%s";
          }
        }
        else {
LAB_140bff930:
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\signature.c",0x161,"evp_signature_from_algorithm");
          uVar10 = *(undefined8 *)(puVar3 + 2);
          pcVar9 = "missing %s verification function:%s";
        }
      }
      else {
LAB_140bff890:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\signature.c",0x149,"evp_signature_from_algorithm");
        uVar10 = *(undefined8 *)(puVar3 + 2);
        pcVar9 = "missing %s signing function:%s";
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\signature.c",0x136,"evp_signature_from_algorithm");
      uVar10 = *(undefined8 *)(puVar3 + 2);
      pcVar9 = "missing %s params getter or setter:%s";
    }
  }
LAB_140bffc98:
  FUN_140b91cc0(6,0xc1,pcVar9,uVar10,puVar8);
LAB_140bffcac:
  LOCK();
  piVar5 = puVar3 + 8;
  iVar12 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (1 < iVar12) {
    return (undefined4 *)0x0;
  }
  FUN_140b8d990(*(undefined8 *)(puVar3 + 2),"crypto\\evp\\signature.c",0x1d4);
  FUN_140bd3160(*(undefined8 *)(puVar3 + 6));
  FUN_140b8d990(puVar3,"crypto\\evp\\signature.c",0x1d7);
  return (undefined4 *)0x0;
}

