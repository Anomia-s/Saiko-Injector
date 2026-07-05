/**
 * Function: asn1_d2i_read_bio
 * Address:  140c6c910
 * Signature: undefined asn1_d2i_read_bio(void)
 * Body size: 941 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong asn1_d2i_read_bio(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int local_res18 [2];
  int local_res20 [2];
  undefined1 local_48 [8];
  longlong local_40;
  
  iVar12 = 0;
  uVar8 = 8;
  lVar5 = FUN_140b8eea0();
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\a_d2i_fp.c",0x7e,"asn1_d2i_read_bio");
    FUN_140b91cc0(0xd,0x80007,0);
    return 0xffffffff;
  }
  FUN_140b932f0();
  uVar11 = 0;
  uVar10 = 0;
LAB_140c6c9a0:
  uVar9 = uVar11 - uVar10;
  if (uVar8 < uVar9) goto LAB_140c6ca07;
  uVar8 = uVar8 - uVar9;
  if ((uVar8 + uVar11 < uVar11) || (lVar6 = FUN_140b8f0b0(lVar5), lVar6 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar7 = 0x89;
LAB_140c6cbd4:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\a_d2i_fp.c",uVar7,"asn1_d2i_read_bio");
    uVar7 = 0x80007;
  }
  else {
    iVar3 = FUN_140b732c0(param_1,*(longlong *)(lVar5 + 8) + uVar11,uVar8 & 0xffffffff);
    if ((iVar3 < 0) && (uVar9 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar7 = 0x8e;
LAB_140c6cb9e:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\asn1\\a_d2i_fp.c",uVar7,"asn1_d2i_read_bio");
      uVar7 = 0x8e;
    }
    else {
      if (iVar3 < 1) goto LAB_140c6ca07;
      uVar9 = (longlong)iVar3 + uVar11;
      if (uVar11 <= uVar9) goto code_r0x000140c6c9ff;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar7 = 0x93;
LAB_140c6cc6b:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\asn1\\a_d2i_fp.c",uVar7,"asn1_d2i_read_bio");
      uVar7 = 0x9b;
    }
  }
LAB_140c6cc83:
  FUN_140b91cc0(0xd,uVar7,0);
LAB_140c6cc90:
  FUN_140b93470();
  FUN_140b8ef10(lVar5);
  return 0xffffffff;
code_r0x000140c6c9ff:
  uVar11 = uVar9;
  if (uVar8 <= (ulonglong)(longlong)iVar3) {
LAB_140c6ca07:
    lVar6 = *(longlong *)(lVar5 + 8) + uVar10;
    local_40 = lVar6;
    if (uVar11 - uVar10 == 0) goto LAB_140c6cc90;
    bVar2 = FUN_140b78ef0(&local_40,local_res18,local_res20,local_48,(int)(uVar11 - uVar10));
    if ((char)bVar2 < '\0') {
      uVar4 = FUN_140b92170();
      if ((((int)uVar4 >> 0x1f & 0x7f800000U) + 0x7fffff & uVar4) != 0x9b) goto LAB_140c6cc90;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
    }
    uVar8 = uVar10 + (longlong)((int)local_40 - (int)lVar6);
    uVar10 = uVar8;
    if ((bVar2 & 1) == 0) {
      if (((iVar12 == 0) || (local_res18[0] != 0)) || (local_res20[0] != 0)) {
        if (uVar11 - uVar8 < (ulonglong)(longlong)local_res18[0]) {
          uVar10 = (longlong)local_res18[0] + (uVar8 - uVar11);
          if ((0x7fffffff < uVar10) || (uVar9 = 0x4000, uVar11 + uVar10 < uVar11)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar7 = 199;
            goto LAB_140c6cc6b;
          }
          while (uVar1 = uVar9, uVar10 != 0) {
            uVar9 = uVar10;
            if (uVar1 < uVar10) {
              uVar9 = uVar1;
            }
            lVar6 = FUN_140b8f0b0(lVar5,uVar9 + uVar11);
            if (lVar6 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar7 = 0xd4;
              goto LAB_140c6cbd4;
            }
            uVar10 = uVar10 - uVar9;
            for (; uVar9 != 0; uVar9 = uVar9 - (longlong)iVar3) {
              iVar3 = FUN_140b732c0(param_1,*(longlong *)(lVar5 + 8) + uVar11,uVar9 & 0xffffffff);
              if (iVar3 < 1) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar7 = 0xdb;
                goto LAB_140c6cb9e;
              }
              uVar11 = uVar11 + (longlong)iVar3;
            }
            uVar9 = uVar1 * 2;
            if (0x3ffffffe < uVar1) {
              uVar9 = uVar1;
            }
          }
        }
        uVar10 = (longlong)local_res18[0] + uVar8;
        if (uVar10 < uVar8) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar7 = 0xea;
          goto LAB_140c6cc6b;
        }
      }
      else {
        iVar12 = iVar12 + -1;
      }
      if (iVar12 == 0) {
        if (uVar10 < 0x80000000) {
          *param_2 = lVar5;
          return uVar10 & 0xffffffff;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar7 = 0xf6;
        goto LAB_140c6cc6b;
      }
      uVar8 = 8;
    }
    else {
      if (iVar12 == -1) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\asn1\\a_d2i_fp.c",0xb2,"asn1_d2i_read_bio");
        uVar7 = 0x7b;
        goto LAB_140c6cc83;
      }
      iVar12 = iVar12 + 1;
      uVar8 = 8;
    }
  }
  goto LAB_140c6c9a0;
}

