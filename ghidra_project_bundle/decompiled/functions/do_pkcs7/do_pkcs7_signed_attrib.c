/**
 * Function: do_pkcs7_signed_attrib
 * Address:  140cdd900
 * Signature: undefined do_pkcs7_signed_attrib(void)
 * Body size: 1663 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void do_pkcs7_signed_attrib(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  iVar2 = 0;
  local_a8 = param_2;
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs7\\pk7_doit.c",0x310,"PKCS7_dataFinal");
    FUN_140b91cc0(0x21,0x8f,0);
    goto LAB_140cddb5c;
  }
  local_a0 = FUN_140c6fed0();
  if (*(longlong *)(param_1 + 0x20) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs7\\pk7_doit.c",0x317,"PKCS7_dataFinal");
    FUN_140b91cc0(0x21,0x7a,0);
    goto LAB_140cddb5c;
  }
  lVar5 = FUN_140b70980();
  local_98 = lVar5;
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs7\\pk7_doit.c",0x31d,"PKCS7_dataFinal");
    FUN_140b91cc0(0x21,0x80006,0);
    goto LAB_140cddb5c;
  }
  iVar1 = FUN_140b964c0(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 == 0x15) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    goto LAB_140cddec1;
  }
  if (iVar1 == 0x16) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
    lVar6 = FUN_140cddf90(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28));
    iVar3 = FUN_140b964c0(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x18));
    if ((iVar3 == 0x15) && (*(int *)(param_1 + 0x10) != 0)) {
      FUN_140b90e80(lVar6);
      lVar6 = 0;
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
    }
LAB_140cddc18:
    if (lVar12 == 0) {
      if (iVar1 != 0x19) goto LAB_140cddec1;
LAB_140cdde57:
      uVar4 = FUN_140b964c0(**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8));
      lVar5 = FUN_140cde3f0(&local_b0,param_2,uVar4);
      if (((lVar5 != 0) &&
          (iVar2 = assertion_failed_mdsize_evp_max_md_size(local_b0,local_88,&local_b8), iVar2 != 0)
          ) && (iVar2 = FUN_140bec4a0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18),local_88
                                      ,local_b8), iVar2 != 0)) goto LAB_140cddec1;
    }
    else {
      iVar1 = FUN_140b77980(lVar12);
      if (0 < iVar1) {
        do {
          lVar7 = FUN_140b77990(lVar12,iVar2);
          if (*(longlong *)(lVar7 + 0x38) != 0) {
            uVar4 = FUN_140b964c0(**(undefined8 **)(lVar7 + 0x10));
            lVar8 = FUN_140cde3f0(&local_b0,param_2,uVar4);
            if ((lVar8 == 0) || (iVar1 = FUN_140b70a90(lVar5,local_b0), iVar1 == 0))
            goto LAB_140cddb28;
            iVar1 = FUN_140b77980(*(undefined8 *)(lVar7 + 0x18));
            if (iVar1 < 1) {
              local_b4 = FUN_140b7e020(*(undefined8 *)(lVar7 + 0x38));
              if ((local_b4 == 0) ||
                 (lVar8 = FUN_140b8d8d0(local_b4,"crypto\\pkcs7\\pk7_doit.c",0x37d), lVar8 == 0))
              goto LAB_140cddb28;
              uVar10 = *(undefined8 *)(lVar7 + 0x38);
              uVar9 = FUN_140c6fef0(local_a0);
              local_c8 = FUN_140c6fee0(local_a0);
              lVar5 = local_98;
              local_c0 = uVar9;
              iVar1 = cryptoevpp_signc(local_98,lVar8,&local_b4,uVar10);
              if (iVar1 != 0) {
                FUN_140b78e90(*(undefined8 *)(lVar7 + 0x28),lVar8,local_b4);
                param_2 = local_a8;
                goto LAB_140cdddb7;
              }
              FUN_140b8d990(lVar8,"crypto\\pkcs7\\pk7_doit.c",899);
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              pcVar11 = "PKCS7_dataFinal";
              uVar10 = 900;
LAB_140cdde08:
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\pkcs7\\pk7_doit.c",uVar10,pcVar11);
              uVar10 = 0x80006;
            }
            else {
              uVar10 = *(undefined8 *)(lVar7 + 0x18);
              iVar1 = FUN_140bebc20(uVar10,0x34,0xffffffff);
              if (iVar1 < 0) {
LAB_140cddccc:
                iVar1 = pkcs7_add0_attrib_signing_time(lVar7,0);
                if (iVar1 != 0) goto LAB_140cddcde;
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar10 = 0x2ed;
              }
              else {
                uVar10 = FUN_140c16b30(uVar10,iVar1);
                lVar8 = FUN_140c16c50(uVar10,0);
                if (lVar8 == 0) goto LAB_140cddccc;
LAB_140cddcde:
                iVar1 = assertion_failed_mdsize_evp_max_md_size(lVar5,local_88,&local_b8);
                if (iVar1 == 0) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  pcVar11 = "do_pkcs7_signed_attrib";
                  uVar10 = 0x2f4;
                  goto LAB_140cdde08;
                }
                iVar1 = FUN_140d73100(lVar7,local_88,local_b8);
                if (iVar1 != 0) {
                  iVar1 = pkcs7_signer_info_sign(lVar7);
                  if (iVar1 != 0) goto LAB_140cdddb7;
                  goto LAB_140cddb28;
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar10 = 0x2f8;
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\pkcs7\\pk7_doit.c",uVar10,"do_pkcs7_signed_attrib");
              uVar10 = 0x80021;
            }
            goto LAB_140cddb19;
          }
LAB_140cdddb7:
          iVar2 = iVar2 + 1;
          iVar1 = FUN_140b77980(lVar12);
        } while (iVar2 < iVar1);
      }
LAB_140cddec1:
      iVar2 = FUN_140b964c0(*(undefined8 *)(param_1 + 0x18));
      if (((iVar2 != 0x16) || (iVar2 = FUN_140c6fac0(param_1,2,0,0), iVar2 == 0)) &&
         ((lVar6 != 0 && ((*(byte *)(lVar6 + 0x10) & 0x10) == 0)))) {
        lVar5 = FUN_140b74700(param_2,0x401);
        if (lVar5 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\pkcs7\\pk7_doit.c",0x3a2,"PKCS7_dataFinal");
          uVar10 = 0x6b;
          goto LAB_140cddb19;
        }
        uVar4 = FUN_140b74190(lVar5,3,0,&local_a8);
        FUN_140b73010(lVar5,0x200);
        FUN_140b74190(lVar5,0x82,0,0);
        FUN_140b78e90(lVar6,local_a8,uVar4);
      }
    }
  }
  else {
    if (iVar1 == 0x17) {
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x10);
      if (lVar6 == 0) {
        lVar6 = FUN_140b90f50();
        if (lVar6 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar10 = 0x33b;
LAB_140cddb08:
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\pkcs7\\pk7_doit.c",uVar10,"PKCS7_dataFinal");
          uVar10 = 0x8000d;
          goto LAB_140cddb19;
        }
        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x10) = lVar6;
      }
      goto LAB_140cddec1;
    }
    if (iVar1 == 0x18) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x10);
      if (lVar6 == 0) {
        lVar6 = FUN_140b90f50();
        if (lVar6 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar10 = 0x32f;
          goto LAB_140cddb08;
        }
        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x10) = lVar6;
      }
      goto LAB_140cddc18;
    }
    if (iVar1 == 0x19) {
      lVar6 = FUN_140cddf90(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
      iVar2 = FUN_140b964c0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18));
      if ((iVar2 == 0x15) && (*(int *)(param_1 + 0x10) != 0)) {
        FUN_140b90e80(lVar6);
        lVar6 = 0;
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x20) = 0;
      }
      goto LAB_140cdde57;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs7\\pk7_doit.c",0x357,"PKCS7_dataFinal");
    uVar10 = 0x70;
LAB_140cddb19:
    FUN_140b91cc0(0x21,uVar10,0);
  }
LAB_140cddb28:
  FUN_140b709d0(local_98);
LAB_140cddb5c:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_e8);
}

