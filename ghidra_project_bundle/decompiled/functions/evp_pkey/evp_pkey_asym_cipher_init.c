/**
 * Function: evp_pkey_asym_cipher_init
 * Address:  140c00b40
 * Signature: undefined evp_pkey_asym_cipher_init(void)
 * Body size: 1476 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int evp_pkey_asym_cipher_init(int *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 *puVar12;
  char *pcVar13;
  int iVar14;
  longlong local_res8;
  int local_res10;
  undefined8 local_res18;
  
  lVar6 = 0;
  iVar14 = 0;
  iVar4 = 0;
  uVar10 = 0;
  local_res8 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_1 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\asymcipher.c",0x2b,"evp_pkey_asym_cipher_init");
    FUN_140b91cc0(6,0x96,0);
    return -2;
  }
  FUN_140b7c180();
  *param_1 = param_2;
  FUN_140b932f0();
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 == 0) {
LAB_140c00d90:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    FUN_140bfdf00(local_res8);
    lVar6 = *(longlong *)(param_1 + 0x1e);
    local_res8 = 0;
    if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x98) == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\asymcipher.c",0xcb,"evp_pkey_asym_cipher_init");
      FUN_140b91cc0(6,0x96,0);
      return -2;
    }
    if (*param_1 == 0x200) {
      pcVar11 = *(code **)(lVar6 + 0x90);
    }
    else {
      if (*param_1 != 0x400) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\asymcipher.c",0xda,"evp_pkey_asym_cipher_init");
        FUN_140b91cc0(6,0x86,0);
        iVar4 = -1;
        goto LAB_140c01097;
      }
      pcVar11 = *(code **)(lVar6 + 0xa0);
    }
    if (pcVar11 == (code *)0x0) {
      return 1;
    }
    iVar4 = (*pcVar11)(param_1);
    if (0 < iVar4) goto LAB_140c010a5;
  }
  else if (*(longlong *)(param_1 + 0x22) == 0) {
    FUN_140b93470();
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\asymcipher.c",0x39,"evp_pkey_asym_cipher_init");
    FUN_140b91cc0(6,0x9a,0);
    iVar4 = iVar14;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x22) + 0x60);
    if ((lVar9 == 0) || (lVar9 == lVar5)) {
      lVar5 = FUN_140c07360(lVar5,0xd);
      if (lVar5 == 0) {
        FUN_140b93470();
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\asymcipher.c",0x4b,"evp_pkey_asym_cipher_init");
        FUN_140b91cc0(6,0x86,0);
        iVar4 = iVar14;
      }
      else {
        iVar14 = 1;
        lVar9 = 0;
        do {
          if (lVar9 != 0) goto LAB_140c00f1f;
          if (lVar6 != 0) {
            LOCK();
            piVar1 = (int *)(lVar6 + 0x20);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 < 2) {
              FUN_140b8d990(*(undefined8 *)(lVar6 + 8),"crypto\\evp\\asymcipher.c",0x1ef);
              FUN_140bd3160(*(undefined8 *)(lVar6 + 0x18));
              FUN_140b8d990(lVar6,"crypto\\evp\\asymcipher.c",0x1f2);
            }
          }
          FUN_140bfdf00(local_res8);
          if (iVar14 == 1) {
            lVar6 = FUN_140bd58f0(*(undefined8 *)(param_1 + 2),0xd,lVar5,
                                  *(undefined8 *)(param_1 + 4),FUN_140c01110,FUN_140b827d0,
                                  FUN_140c00520);
            if (lVar6 != 0) {
              uVar10 = *(undefined8 *)(lVar6 + 0x18);
              goto LAB_140c00e5c;
            }
          }
          else {
            if (iVar14 == 2) {
              uVar10 = FUN_140b97dc0(*(undefined8 *)(param_1 + 8));
              lVar6 = FUN_140bd5970(uVar10,0xd,lVar5,*(undefined8 *)(param_1 + 4),FUN_140c01110,
                                    FUN_140b827d0,FUN_140c00520);
              if (lVar6 == 0) goto LAB_140c00d90;
            }
            else if (lVar6 == 0) goto LAB_140c00eb8;
LAB_140c00e5c:
            uVar3 = *(undefined8 *)(param_1 + 4);
            uVar7 = FUN_140b77290(*(undefined8 *)(param_1 + 8));
            lVar8 = FUN_140bfe4f0(uVar10,uVar7,uVar3);
            local_res8 = lVar8;
            if (lVar8 != 0) {
              lVar9 = FUN_140b80640(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                    &local_res8,*(undefined8 *)(param_1 + 4));
            }
            if (local_res8 == 0) {
              FUN_140bfdf00(lVar8);
            }
          }
LAB_140c00eb8:
          iVar14 = iVar14 + 1;
        } while (iVar14 < 3);
        if (lVar9 == 0) {
          if (lVar6 != 0) {
            LOCK();
            piVar1 = (int *)(lVar6 + 0x20);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 < 2) {
              FUN_140b8d990(*(undefined8 *)(lVar6 + 8),"crypto\\evp\\asymcipher.c",0x1ef);
              FUN_140bd3160(*(undefined8 *)(lVar6 + 0x18));
              FUN_140b8d990(lVar6,"crypto\\evp\\asymcipher.c",0x1f2);
            }
          }
          goto LAB_140c00d90;
        }
LAB_140c00f1f:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        *(longlong *)(param_1 + 10) = lVar6;
        pcVar11 = *(code **)(lVar6 + 0x28);
        uVar10 = FUN_140bd3830(*(undefined8 *)(lVar6 + 0x18));
        lVar5 = (*pcVar11)(uVar10);
        *(longlong *)(param_1 + 0xc) = lVar5;
        if (lVar5 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo(0);
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\asymcipher.c",0x9f,"evp_pkey_asym_cipher_init");
          FUN_140b91cc0(6,0x86,0);
        }
        else {
          puVar12 = &DAT_1413a2ad6;
          if (*(undefined1 **)(lVar6 + 0x10) != (undefined1 *)0x0) {
            puVar12 = *(undefined1 **)(lVar6 + 0x10);
          }
          if (local_res10 == 0x200) {
            pcVar11 = *(code **)(lVar6 + 0x30);
            if (pcVar11 == (code *)0x0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar5);
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\evp\\asymcipher.c",0xa7,"evp_pkey_asym_cipher_init");
              pcVar13 = "%s encrypt_init:%s";
              goto LAB_140c01031;
            }
LAB_140c01050:
            iVar4 = (*pcVar11)(lVar5,lVar9,local_res18);
            if (0 < iVar4) {
              FUN_140bfdf00(local_res8);
              return 1;
            }
          }
          else if (local_res10 == 0x400) {
            pcVar11 = *(code **)(lVar6 + 0x40);
            if (pcVar11 != (code *)0x0) goto LAB_140c01050;
            d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar5);
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\evp\\asymcipher.c",0xb0,"evp_pkey_asym_cipher_init");
            pcVar13 = "%s decrypt_init:%s";
LAB_140c01031:
            FUN_140b91cc0(6,0xeb,pcVar13,*(undefined8 *)(lVar6 + 8),puVar12);
            iVar4 = -2;
          }
          else {
            d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar5);
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\evp\\asymcipher.c",0xb8,"evp_pkey_asym_cipher_init");
            FUN_140b91cc0(6,0x86,0);
          }
        }
      }
    }
    else {
      FUN_140b93470();
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\asymcipher.c",0x43,"evp_pkey_asym_cipher_init");
      FUN_140b91cc0(6,0xc0103,0);
      iVar4 = iVar14;
    }
  }
LAB_140c01097:
  FUN_140b7c180(param_1);
  *param_1 = 0;
LAB_140c010a5:
  FUN_140bfdf00(local_res8);
  return iVar4;
}

