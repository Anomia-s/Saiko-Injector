/**
 * Function: evp_pkey_signature_init
 * Address:  140bffdd0
 * Signature: undefined evp_pkey_signature_init(void)
 * Body size: 1860 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int evp_pkey_signature_init(int *param_1,undefined4 *param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  char *pcVar14;
  undefined1 *puVar15;
  longlong local_res8 [2];
  
  iVar5 = 0;
  lVar8 = 0;
  uVar12 = 0;
  local_res8[0] = 0;
  if (param_1 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\signature.c",0x249,"evp_pkey_signature_init");
    FUN_140b91cc0(6,0xc0102,0);
    return -1;
  }
  FUN_140b7c180();
  *param_1 = param_3;
  if (param_2 == (undefined4 *)0x0) {
    FUN_140b932f0();
    lVar7 = *(longlong *)(param_1 + 8);
    if (lVar7 == 0) {
LAB_140c00132:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      FUN_140bfdf00(local_res8[0]);
      lVar8 = *(longlong *)(param_1 + 0x1e);
      local_res8[0] = 0;
      if (lVar8 == 0) {
LAB_140c004c5:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\signature.c",0x364,"evp_pkey_signature_init");
        uVar12 = 0x96;
LAB_140c004e7:
        FUN_140b91cc0(6,uVar12,0);
        return -2;
      }
      if (param_3 == 0x10) {
        if (*(longlong *)(lVar8 + 0x48) == 0) goto LAB_140c004c5;
        pcVar13 = *(code **)(lVar8 + 0x40);
      }
      else if (param_3 == 0x20) {
        if (*(longlong *)(lVar8 + 0x58) == 0) goto LAB_140c004c5;
        pcVar13 = *(code **)(lVar8 + 0x50);
      }
      else {
        if (param_3 != 0x40) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar12 = 0x379;
          goto LAB_140c00480;
        }
        if (*(longlong *)(lVar8 + 0x68) == 0) goto LAB_140c004c5;
        pcVar13 = *(code **)(lVar8 + 0x60);
      }
      if (pcVar13 == (code *)0x0) {
        return 1;
      }
      iVar5 = (*pcVar13)(param_1);
      if (iVar5 < 1) goto LAB_140c004a5;
LAB_140c0044e:
      iVar5 = FUN_140b7c0b0(param_1);
LAB_140c00458:
      FUN_140bfdf00(local_res8[0]);
      return iVar5;
    }
    if (*(longlong *)(param_1 + 0x22) == 0) {
      FUN_140b93470();
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar12 = 0x2ad;
      goto LAB_140bffe7b;
    }
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x22) + 0x60);
    if ((lVar10 != 0) && (lVar10 != lVar7)) {
      FUN_140b93470();
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\signature.c",0x2b7,"evp_pkey_signature_init");
      uVar12 = 0xc0103;
      goto LAB_140c00498;
    }
    lVar7 = FUN_140c07360(lVar7,0xc);
    if (lVar7 != 0) {
      iVar4 = 1;
      do {
        if (lVar8 != 0) goto LAB_140c00238;
        if (param_2 != (undefined4 *)0x0) {
          LOCK();
          piVar2 = param_2 + 8;
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 < 2) {
            FUN_140b8d990(*(undefined8 *)(param_2 + 2),"crypto\\evp\\signature.c",0x1d4);
            FUN_140bd3160(*(undefined8 *)(param_2 + 6));
            FUN_140b8d990(param_2,"crypto\\evp\\signature.c",0x1d7);
          }
        }
        FUN_140bfdf00(local_res8[0]);
        if (iVar4 == 1) {
          param_2 = (undefined4 *)
                    FUN_140bd58f0(*(undefined8 *)(param_1 + 2),0xc,lVar7,
                                  *(undefined8 *)(param_1 + 4),missing_s_newctx_or_freectx_s,
                                  FUN_140b827d0,cryptoevpsignaturec);
          if (param_2 != (undefined4 *)0x0) {
            uVar12 = *(undefined8 *)(param_2 + 6);
            goto LAB_140c001bd;
          }
        }
        else {
          if (iVar4 == 2) {
            uVar12 = FUN_140b97dc0(*(undefined8 *)(param_1 + 8));
            param_2 = (undefined4 *)
                      FUN_140bd5970(uVar12,0xc,lVar7,*(undefined8 *)(param_1 + 4),
                                    missing_s_newctx_or_freectx_s,FUN_140b827d0,cryptoevpsignaturec)
            ;
            if (param_2 == (undefined4 *)0x0) goto LAB_140c00132;
          }
          else if (param_2 == (undefined4 *)0x0) goto LAB_140c00219;
LAB_140c001bd:
          uVar11 = *(undefined8 *)(param_1 + 4);
          uVar6 = FUN_140b77290(*(undefined8 *)(param_1 + 8));
          lVar10 = FUN_140bfe4f0(uVar12,uVar6,uVar11);
          local_res8[0] = lVar10;
          if (lVar10 != 0) {
            lVar8 = FUN_140b80640(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                  local_res8,*(undefined8 *)(param_1 + 4));
          }
          if (local_res8[0] == 0) {
            FUN_140bfdf00(lVar10);
          }
        }
LAB_140c00219:
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      if (lVar8 == 0) {
        cryptoevpsignaturec(param_2);
        goto LAB_140c00132;
      }
LAB_140c00238:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      goto LAB_140c0023d;
    }
    FUN_140b93470();
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar12 = 0x2bf;
LAB_140c00480:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\signature.c",uVar12,"evp_pkey_signature_init");
    uVar12 = 0x86;
  }
  else {
    if (*(longlong *)(param_1 + 0x22) != 0) {
      uVar12 = *(undefined8 *)(param_2 + 6);
      uVar11 = *(undefined8 *)(param_1 + 4);
      uVar6 = FUN_140b77290(*(undefined8 *)(param_1 + 8));
      lVar7 = FUN_140bfe4f0(uVar12,uVar6,uVar11);
      local_res8[0] = lVar7;
      if (lVar7 != 0) {
        lVar8 = FUN_140b80640(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                              local_res8,*(undefined8 *)(param_1 + 4));
      }
      if (local_res8[0] == 0) {
        FUN_140bfdf00(lVar7);
      }
      if (lVar8 == 0) goto LAB_140c00458;
      if (*(code **)(param_2 + 0x48) != (code *)0x0) {
        plVar9 = (longlong *)(**(code **)(param_2 + 0x48))();
        lVar7 = *plVar9;
        while (lVar7 != 0) {
          iVar4 = FUN_140b7b780(param_1,lVar7);
          if (iVar4 != 0) {
            if (*plVar9 != 0) goto LAB_140bfffb7;
            break;
          }
          plVar1 = plVar9 + 1;
          plVar9 = plVar9 + 1;
          lVar7 = *plVar1;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar12 = 0x283;
LAB_140bfff4d:
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\signature.c",uVar12,"evp_pkey_signature_init");
        uVar12 = 0xe4;
        goto LAB_140c004e7;
      }
      uVar12 = FUN_140b77290(*(undefined8 *)(param_1 + 8));
      iVar4 = FUN_140bd5b10(*(undefined8 *)(param_2 + 6),*param_2,0,uVar12);
      if (iVar4 == 0) {
        uVar12 = FUN_140c07360(*(undefined8 *)(param_1 + 8),0xc);
        iVar4 = FUN_140bd5b10(*(undefined8 *)(param_2 + 6),*param_2,0,uVar12);
        if (iVar4 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar12 = 0x29d;
          goto LAB_140bfff4d;
        }
      }
LAB_140bfffb7:
      LOCK();
      param_2[8] = param_2[8] + 1;
      UNLOCK();
LAB_140c0023d:
      uVar12 = *(undefined8 *)(param_1 + 4);
      *(undefined4 **)(param_1 + 10) = param_2;
      pcVar13 = *(code **)(param_2 + 10);
      puVar15 = &DAT_1413a2ad6;
      if (*(undefined1 **)(param_2 + 4) != (undefined1 *)0x0) {
        puVar15 = *(undefined1 **)(param_2 + 4);
      }
      uVar11 = FUN_140bd3830(*(undefined8 *)(param_2 + 6));
      lVar7 = (*pcVar13)(uVar11,uVar12);
      *(longlong *)(param_1 + 0xc) = lVar7;
      if (lVar7 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar12 = 0x318;
        goto LAB_140c00480;
      }
      if (param_3 == 0x10) {
        pcVar13 = *(code **)(param_2 + 0xc);
        if (pcVar13 != (code *)0x0) {
LAB_140c003e3:
          iVar5 = (*pcVar13)(lVar7,lVar8,param_4);
          if (iVar5 < 1) {
            (**(code **)(param_2 + 0x34))(*(undefined8 *)(param_1 + 0xc));
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            goto LAB_140c004a5;
          }
          goto LAB_140c0044e;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\signature.c",799,"evp_pkey_signature_init");
        pcVar14 = "%s sign_init:%s";
      }
      else if (param_3 == 0x20) {
        pcVar13 = *(code **)(param_2 + 0x16);
        if (pcVar13 != (code *)0x0) goto LAB_140c003e3;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\signature.c",0x331,"evp_pkey_signature_init");
        pcVar14 = "%s verify_init:%s";
      }
      else if (param_3 == 0x40) {
        pcVar13 = *(code **)(param_2 + 0x20);
        if (pcVar13 != (code *)0x0) goto LAB_140c003e3;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\signature.c",0x343,"evp_pkey_signature_init");
        pcVar14 = "%s verify_recover_init:%s";
      }
      else if (param_3 == 0x4000) {
        pcVar13 = *(code **)(param_2 + 0x10);
        if (pcVar13 != (code *)0x0) goto LAB_140c003e3;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\signature.c",0x328,"evp_pkey_signature_init");
        pcVar14 = "%s sign_message_init:%s";
      }
      else {
        if (param_3 != 0x8000) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar12 = 0x34b;
          goto LAB_140c00480;
        }
        pcVar13 = *(code **)(param_2 + 0x1a);
        if (pcVar13 != (code *)0x0) goto LAB_140c003e3;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\signature.c",0x33a,"evp_pkey_signature_init");
        pcVar14 = "%s verify_message_init:%s";
      }
      FUN_140b91cc0(6,0xed,pcVar14,*(undefined8 *)(param_2 + 2),puVar15);
      iVar5 = -2;
      goto LAB_140c004a5;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar12 = 0x259;
LAB_140bffe7b:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\signature.c",uVar12,"evp_pkey_signature_init");
    uVar12 = 0x9a;
  }
LAB_140c00498:
  FUN_140b91cc0(6,uVar12,0);
LAB_140c004a5:
  FUN_140b7c180(param_1);
  *param_1 = 0;
  FUN_140bfdf00(local_res8[0]);
  return iVar5;
}

