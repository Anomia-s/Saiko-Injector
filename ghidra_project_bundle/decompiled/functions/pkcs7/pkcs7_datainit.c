/**
 * Function: pkcs7_datainit
 * Address:  140cdd1e0
 * Signature: undefined pkcs7_datainit(void)
 * Body size: 1798 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkcs7_datainit(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  ulonglong local_d0;
  int *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140cdd1f5;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_118;
  puVar11 = (undefined8 *)0x0;
  local_e8 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  puVar12 = (undefined8 *)0x0;
  local_e0 = (undefined8 *)0x0;
  local_b8 = 0;
  local_c8 = (int *)0x0;
  local_a8 = param_1;
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\pkcs7\\pk7_doit.c",0xfc,"PKCS7_dataInit")
    ;
    FUN_140b91cc0(0x21,0x8f,0);
    goto LAB_140cdd8d6;
  }
  uVar5 = FUN_140c6fed0();
  local_b0 = FUN_140c6fee0(uVar5);
  local_a0 = FUN_140c6fef0(uVar5);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs7\\pk7_doit.c",0x10e,"PKCS7_dataInit");
    FUN_140b91cc0(0x21,0x7a,0);
    goto LAB_140cdd8d6;
  }
  iVar2 = FUN_140b964c0(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar13 = puVar11;
  puVar14 = puVar11;
  puVar16 = puVar11;
  if (iVar2 == 0x15) {
LAB_140cdd417:
    iVar2 = FUN_140b77980(puVar13);
    puVar12 = puVar11;
    if (0 < iVar2) {
      do {
        uVar6 = FUN_140b77990(puVar13,puVar11);
        iVar2 = FUN_140cde230(&local_e8,uVar6,uVar5);
        puVar12 = local_e8;
        if (iVar2 == 0) goto LAB_140cdd3a3;
        uVar10 = (int)puVar11 + 1;
        puVar11 = (undefined8 *)(ulonglong)uVar10;
        iVar2 = FUN_140b77980(puVar13);
        puVar12 = local_e8;
      } while ((int)uVar10 < iVar2);
    }
    if ((local_d0 == 0) ||
       (iVar2 = FUN_140cde230(&local_e8,local_d0,uVar5), puVar12 = local_e8, iVar2 != 0)) {
      puVar11 = puVar12;
      if (puVar16 == (undefined8 *)0x0) {
LAB_140cdd7bb:
        if (param_2 == 0) {
          iVar2 = FUN_140b964c0(*(undefined8 *)(param_1 + 0x18));
          puVar12 = puVar11;
          if ((iVar2 == 0x16) && (iVar2 = FUN_140c6fac0(param_1,2,0,0), iVar2 != 0)) {
            uVar5 = FUN_140c44020();
            param_2 = FUN_140b73040(uVar5);
          }
          else {
            piVar1 = local_c8;
            if ((local_c8 == (int *)0x0) || (*local_c8 < 1)) {
              uVar5 = FUN_140c284d0();
              param_2 = FUN_140b73040(uVar5);
              local_d8 = (undefined8 *)0x0;
              local_e0 = (undefined8 *)0x0;
              if (param_2 == 0) goto LAB_140cdd3a3;
              FUN_140b74190(param_2,0x82,0,0);
              goto LAB_140cdd86c;
            }
            uVar5 = FUN_140c284d0();
            param_2 = FUN_140b73040(uVar5);
            if (param_2 != 0) {
              FUN_140b74190(param_2,0x82,0,0);
              iVar2 = *piVar1;
              iVar4 = FUN_140b73860(param_2,*(undefined8 *)(piVar1 + 2),iVar2);
              if (iVar4 != iVar2) {
                FUN_140b745e0(param_2);
                param_2 = 0;
              }
            }
          }
          local_d8 = (undefined8 *)0x0;
          local_e0 = (undefined8 *)0x0;
          if (param_2 == 0) goto LAB_140cdd3a3;
        }
LAB_140cdd86c:
        if (puVar11 != (undefined8 *)0x0) {
          FUN_140b744f0(puVar11,param_2);
        }
        FUN_140b90e80(local_c8);
        goto LAB_140cdd8d6;
      }
      uVar5 = FUN_140d73040();
      local_d8 = (undefined8 *)FUN_140b73040(uVar5);
      if (local_d8 == (undefined8 *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\pkcs7\\pk7_doit.c",0x146,"PKCS7_dataInit");
        uVar5 = 0x80020;
        goto LAB_140cdd396;
      }
      FUN_140b74190(local_d8,0x81,0,&local_c0);
      uVar3 = FUN_140b97ea0(puVar16);
      local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,uVar3);
      iVar2 = FUN_140b97eb0(puVar16);
      uVar3 = FUN_140b97ef0(puVar16);
      uVar6 = FUN_140b96310(uVar3);
      uVar5 = local_b0;
      *puVar14 = uVar6;
      if ((iVar2 < 1) || (iVar4 = FUN_140b82f80(local_b0,local_98,(longlong)iVar2,0), 0 < iVar4)) {
        FUN_140b932f0();
        uVar6 = FUN_140b97de0(puVar16);
        local_e0 = (undefined8 *)FUN_140b84390(uVar5,uVar6,local_a0);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        local_f0 = 1;
        if (local_e0 != (undefined8 *)0x0) {
          puVar16 = local_e0;
        }
        local_f8 = (undefined1 *)0x0;
        iVar4 = FUN_140b85520(local_c0,puVar16,0,0);
        if (0 < iVar4) {
          FUN_140b843f0(local_e0);
          local_e0 = (undefined8 *)0x0;
          iVar4 = FUN_140b863f0(local_c0,local_88);
          if (0 < iVar4) {
            local_f8 = local_98;
            local_f0 = 1;
            iVar4 = FUN_140b85520(local_c0,0,0,local_88);
            if (0 < iVar4) {
              if (0 < iVar2) {
                lVar7 = puVar14[1];
                if (lVar7 == 0) {
                  lVar7 = FUN_140b90dd0();
                  puVar14[1] = lVar7;
                  if (lVar7 == 0) goto LAB_140cdd3a3;
                }
                iVar2 = FUN_140b98910(local_c0,lVar7);
                if (iVar2 < 1) {
                  FUN_140b90df0(puVar14[1]);
                  puVar14[1] = 0;
                  goto LAB_140cdd3a3;
                }
              }
              uVar5 = local_b8;
              iVar4 = 0;
              iVar2 = FUN_140b77980(local_b8);
              if (0 < iVar2) {
                do {
                  lVar7 = FUN_140b77990(uVar5,iVar4);
                  lVar9 = 0;
                  uVar5 = *(undefined8 *)(lVar7 + 0x28);
                  lVar8 = FUN_140b74cd0(*(undefined8 *)(lVar7 + 0x20));
                  if (lVar8 == 0) goto LAB_140cdd3a3;
                  uVar6 = FUN_140c6fef0(uVar5);
                  uVar5 = FUN_140c6fee0(uVar5);
                  lVar8 = FUN_140b7b2e0(uVar5,lVar8,uVar6);
                  if (lVar8 == 0) goto LAB_140cdd3a3;
                  iVar2 = FUN_140c00580(lVar8);
                  if (iVar2 < 1) {
LAB_140cdd787:
                    FUN_140b7b6a0(lVar8);
                    FUN_140b8d990(lVar9,"crypto\\pkcs7\\pk7_doit.c",0xb9);
                    goto LAB_140cdd3a3;
                  }
                  puVar15 = (undefined1 *)(longlong)(int)local_e8;
                  local_f8 = puVar15;
                  iVar2 = evp_pkey_encrypt(lVar8,0,&local_d0,local_88);
                  if (((iVar2 < 1) ||
                      (lVar9 = FUN_140b8d8d0(local_d0,"crypto\\pkcs7\\pk7_doit.c",0xab), lVar9 == 0)
                      ) || (local_f8 = puVar15,
                           iVar2 = evp_pkey_encrypt(lVar8,lVar9,&local_d0,local_88), iVar2 < 1))
                  goto LAB_140cdd787;
                  FUN_140b78e90(*(undefined8 *)(lVar7 + 0x18),lVar9,local_d0 & 0xffffffff);
                  FUN_140b7b6a0(lVar8);
                  FUN_140b8d990(0,"crypto\\pkcs7\\pk7_doit.c",0xb9);
                  uVar5 = local_b8;
                  iVar4 = iVar4 + 1;
                  iVar2 = FUN_140b77980(local_b8);
                } while (iVar4 < iVar2);
              }
              FUN_14046e980(local_88,(longlong)(int)local_e8);
              puVar11 = local_d8;
              param_1 = local_a8;
              if (puVar12 != (undefined8 *)0x0) {
                FUN_140b744f0(puVar12,local_d8);
                puVar11 = puVar12;
                param_1 = local_a8;
              }
              goto LAB_140cdd7bb;
            }
          }
        }
      }
    }
  }
  else {
    if (iVar2 == 0x16) {
      puVar13 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8);
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28);
LAB_140cdd40d:
      local_c8 = (int *)FUN_140cde100(uVar6);
      puVar14 = (undefined8 *)0x0;
      puVar16 = (undefined8 *)0x0;
      goto LAB_140cdd417;
    }
    if (iVar2 == 0x17) {
      local_b8 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      puVar16 = *(undefined8 **)(lVar7 + 0x18);
      puVar14 = *(undefined8 **)(lVar7 + 8);
      puVar13 = (undefined8 *)0x0;
      if (puVar16 != (undefined8 *)0x0) goto LAB_140cdd417;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0x129;
LAB_140cdd385:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pkcs7\\pk7_doit.c",uVar5,"PKCS7_dataInit");
      uVar5 = 0x74;
    }
    else {
      if (iVar2 == 0x18) {
        lVar7 = *(longlong *)(param_1 + 0x20);
        local_b8 = *(undefined8 *)(lVar7 + 0x30);
        puVar16 = *(undefined8 **)(*(longlong *)(lVar7 + 0x28) + 0x18);
        puVar14 = *(undefined8 **)(*(longlong *)(lVar7 + 0x28) + 8);
        puVar13 = *(undefined8 **)(lVar7 + 8);
        if (puVar16 == (undefined8 *)0x0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar5 = 0x120;
          goto LAB_140cdd385;
        }
        goto LAB_140cdd417;
      }
      if (iVar2 == 0x19) {
        local_d0 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 8);
        uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        goto LAB_140cdd40d;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pkcs7\\pk7_doit.c",0x134,"PKCS7_dataInit");
      uVar5 = 0x70;
      puVar12 = puVar11;
    }
LAB_140cdd396:
    FUN_140b91cc0(0x21,uVar5,0);
  }
LAB_140cdd3a3:
  FUN_140b90e80(local_c8);
  FUN_140b843f0(local_e0);
  FUN_140b745e0(puVar12);
  FUN_140b745e0(local_d8);
LAB_140cdd8d6:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_118);
}

