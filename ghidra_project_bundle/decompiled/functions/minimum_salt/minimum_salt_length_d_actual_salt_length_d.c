/**
 * Function: minimum_salt_length_d_actual_salt_length_d
 * Address:  140d43640
 * Signature: undefined minimum_salt_length_d_actual_salt_length_d(void)
 * Body size: 477 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int minimum_salt_length_d_actual_salt_length_d(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0x140d4365a;
  iVar3 = *(int *)(param_1 + 0xb0);
  iVar2 = -1;
  if (iVar3 == -1) {
    iVar2 = FUN_140b97b40(*(undefined8 *)(param_1 + 0x20));
    if (iVar2 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\rsa_sig.c",0x10d,"rsa_pss_compute_saltlen")
      ;
      FUN_140b91cc0(0x39,0x7a,0);
      return -1;
    }
LAB_140d43760:
    if (*(int *)(param_1 + 0xb4) <= iVar2) {
      return iVar2;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\rsa_sig.c",300,"rsa_pss_compute_saltlen");
    FUN_140b91cc0(0x39,0xac,"minimum salt length: %d, actual salt length: %d",
                  *(undefined4 *)(param_1 + 0xb4),iVar2,uVar5);
  }
  else {
    if (iVar3 == -4) {
      iVar2 = FUN_140b97b40(*(undefined8 *)(param_1 + 0x20));
      if (iVar2 < 1) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x113;
      }
      else {
LAB_140d43701:
        iVar3 = FUN_140b97b40(*(undefined8 *)(param_1 + 0x20));
        if (0 < iVar3) {
          iVar4 = FUN_140c8d0a0(*(undefined8 *)(param_1 + 0x10));
          if ((2 < iVar4) && (iVar3 <= iVar4 + -2)) {
            bVar1 = FUN_140c8d080(*(undefined8 *)(param_1 + 0x10));
            iVar3 = (iVar4 - (((bVar1 & 7) == 1) + 2)) - iVar3;
            if ((-1 < iVar2) && (iVar2 < iVar3)) goto LAB_140d43760;
            goto LAB_140d437a8;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\signature\\rsa_sig.c",0x11f,
                     "rsa_pss_compute_saltlen");
          uVar5 = 0x9e;
          goto LAB_140d437f6;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x11b;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\rsa_sig.c",uVar5,"rsa_pss_compute_saltlen")
      ;
      uVar5 = 0x7a;
    }
    else {
      if ((iVar3 == -3) || (iVar3 == -2)) goto LAB_140d43701;
LAB_140d437a8:
      iVar2 = iVar3;
      if (-1 < iVar3) goto LAB_140d43760;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\rsa_sig.c",0x129,"rsa_pss_compute_saltlen")
      ;
      uVar5 = 0xc0103;
    }
LAB_140d437f6:
    FUN_140b91cc0(0x39,uVar5,0);
  }
  return -1;
}

