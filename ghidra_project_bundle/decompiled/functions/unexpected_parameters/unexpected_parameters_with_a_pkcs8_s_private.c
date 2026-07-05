/**
 * Function: unexpected_parameters_with_a_pkcs8_s_private
 * Address:  140dacab0
 * Signature: undefined unexpected_parameters_with_a_pkcs8_s_private(void)
 * Body size: 982 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
unexpected_parameters_with_a_pkcs8_s_private
          (undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  uint *puVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined8 local_res8;
  int local_68;
  int local_64;
  undefined8 *local_60;
  uint *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  
  plVar14 = (longlong *)0x0;
  plVar15 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_60 = (undefined8 *)0x0;
  local_40 = 0;
  local_50 = 0;
  local_res8 = param_1;
  puVar5 = (undefined8 *)FUN_140db6c10(param_3);
  if (puVar5 != (undefined8 *)0x0) {
    if (param_3 == 0x5b1) {
      ppuVar13 = &PTR_PTR_14131c328;
    }
    else if (param_3 == 0x5b2) {
      ppuVar13 = &PTR_PTR_14131c338;
    }
    else {
      if (param_3 != 0x5b3) {
        return (longlong *)0x0;
      }
      ppuVar13 = &PTR_PTR_14131c348;
    }
    lVar6 = FUN_140c6c200(0,&local_res8,param_2);
    if (lVar6 != 0) {
      iVar4 = FUN_140c6c2f0(0,&local_58,&local_64,&local_60,lVar6);
      plVar8 = plVar14;
      plVar9 = plVar14;
      if ((iVar4 != 0) && (iVar4 = FUN_140b964c0(*local_60), plVar9 = plVar15, iVar4 == param_3)) {
        uVar7 = FUN_140cfc320(param_4,"ml-dsa.input_formats",0);
        plVar8 = (longlong *)no_s_private_key_s_formats_are_enabled(*puVar5,*ppuVar13,"input",uVar7)
        ;
        if (plVar8 != (longlong *)0x0) {
          FUN_140bdf8f0(0,&local_68,0,local_60);
          if (local_68 == -1) {
            if (3 < local_64) {
              uVar1 = *local_58;
              lVar2 = *plVar8;
              plVar14 = plVar8;
              while (lVar2 != 0) {
                if ((longlong)local_64 == *(longlong *)(lVar2 + 8)) {
                  iVar4 = *(int *)(lVar2 + 0x10);
                  if ((iVar4 == 4) ||
                     ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18) >> ((char)iVar4 * '\b' & 0x1fU) == *(uint *)(lVar2 + 0x14))) {
                    lVar11 = *(longlong *)(lVar2 + 0x28);
                    puVar12 = (uint *)((longlong)local_58 + (4 - (longlong)iVar4));
                    if ((((lVar11 == 0) || (lVar11 == 0x20)) &&
                        ((lVar3 = *(longlong *)(lVar2 + 0x40), lVar3 == 0 || (lVar3 == puVar5[8]))))
                       && ((*(longlong *)(lVar2 + 0x50) == 0 ||
                           (*(longlong *)(lVar2 + 0x50) == puVar5[9])))) {
                      if (lVar11 != 0) {
                        puVar10 = (uint *)(*(longlong *)(lVar2 + 0x20) + (longlong)local_58);
                        if ((uint *)((longlong)puVar12 + 2) == puVar10) {
                          bVar16 = (ushort)((ushort)*puVar12 >> 8 | (ushort)*puVar12 << 8) ==
                                   *(ushort *)(lVar2 + 0x18);
                          puVar12 = (uint *)((longlong)puVar12 + 2);
                        }
                        else {
                          bVar16 = puVar12 == puVar10;
                        }
                        if (!bVar16) goto LAB_140dace38;
                        puVar12 = puVar12 + 8;
                      }
                      if (lVar3 != 0) {
                        puVar10 = (uint *)(*(longlong *)(lVar2 + 0x38) + (longlong)local_58);
                        if (puVar12 + 1 == puVar10) {
                          uVar1 = *puVar12;
                          bVar16 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8
                                   | uVar1 << 0x18) == *(uint *)(lVar2 + 0x30);
                          puVar12 = puVar12 + 1;
                        }
                        else {
                          bVar16 = puVar12 == puVar10;
                        }
                        if (!bVar16) goto LAB_140dace38;
                        puVar12 = (uint *)((longlong)puVar12 + puVar5[8]);
                      }
                      if (*(longlong *)(lVar2 + 0x50) != 0) {
                        if (puVar12 != (uint *)(*(longlong *)(lVar2 + 0x48) + (longlong)local_58))
                        goto LAB_140dace38;
                        puVar12 = (uint *)((longlong)puVar12 + puVar5[9]);
                      }
                      if ((puVar12 == (uint *)((longlong)local_58 + (longlong)local_64)) &&
                         (plVar9 = (longlong *)FUN_140d35040(param_4,param_5,param_3),
                         plVar9 != (longlong *)0x0)) {
                        lVar11 = local_40;
                        if (*(longlong *)(lVar2 + 0x28) != 0) {
                          lVar11 = *(longlong *)(lVar2 + 0x20) + (longlong)local_58;
                        }
                        if (*(longlong *)(lVar2 + 0x40) != 0) {
                          local_50 = *(longlong *)(lVar2 + 0x38) + (longlong)local_58;
                        }
                        iVar4 = FUN_140d9f230(plVar9,0,0,lVar11,0x20,local_50,puVar5[8]);
                        if (iVar4 != 0) {
                          local_48 = plVar9;
                          FUN_140b8d990(plVar8,
                                        "providers\\implementations\\encode_decode\\ml_dsa_codecs.c"
                                        ,0x104);
                          FUN_140c6c1e0(lVar6);
                          return plVar9;
                        }
                      }
                      goto LAB_140dace38;
                    }
                    break;
                  }
                }
                plVar15 = plVar14 + 2;
                plVar14 = plVar14 + 2;
                lVar2 = *plVar15;
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("providers\\implementations\\encode_decode\\ml_dsa_codecs.c",0xcf,
                         "ossl_ml_dsa_d2i_PKCS8");
              FUN_140b91cc0(0x39,0xf5,"no matching enabled %s private key input formats",*puVar5);
            }
          }
          else {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\encode_decode\\ml_dsa_codecs.c",0xb8,
                       "ossl_ml_dsa_d2i_PKCS8");
            FUN_140b91cc0(0x39,0xf9,"unexpected parameters with a PKCS#8 %s private key",*puVar5);
            plVar9 = plVar14;
          }
        }
      }
LAB_140dace38:
      FUN_140b8d990(plVar8,"providers\\implementations\\encode_decode\\ml_dsa_codecs.c",0x104);
      FUN_140c6c1e0(lVar6);
      FUN_140d9eba0(plVar9);
      return local_48;
    }
  }
  return (longlong *)0x0;
}

