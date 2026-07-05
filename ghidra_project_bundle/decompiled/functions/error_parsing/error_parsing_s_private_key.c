/**
 * Function: error_parsing_s_private_key
 * Address:  140dad5c0
 * Signature: undefined error_parsing_s_private_key(void)
 * Body size: 1047 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
error_parsing_s_private_key
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
  longlong lVar10;
  void *_Dst;
  uint *puVar11;
  uint *puVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined8 local_res8;
  int local_58;
  int local_54;
  undefined8 *local_50;
  uint *local_48;
  longlong *local_40;
  
  plVar14 = (longlong *)0x0;
  plVar15 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_50 = (undefined8 *)0x0;
  local_res8 = param_1;
  puVar5 = (undefined8 *)FUN_140da2180(param_3);
  if (puVar5 != (undefined8 *)0x0) {
    if (param_3 == 0x5ae) {
      ppuVar13 = &PTR_PTR_14131c9e8;
    }
    else if (param_3 == 0x5af) {
      ppuVar13 = &PTR_PTR_14131c9f8;
    }
    else {
      if (param_3 != 0x5b0) {
        return (longlong *)0x0;
      }
      ppuVar13 = &PTR_PTR_14131ca08;
    }
    lVar6 = FUN_140c6c200(0,&local_res8,param_2);
    if (lVar6 != 0) {
      iVar4 = FUN_140c6c2f0(0,&local_48,&local_54,&local_50,lVar6);
      plVar8 = plVar14;
      plVar9 = plVar14;
      if ((iVar4 != 0) && (iVar4 = FUN_140b964c0(*local_50), plVar9 = plVar15, iVar4 == param_3)) {
        uVar7 = FUN_140cfc320(param_4,"ml-kem.input_formats",0);
        plVar8 = (longlong *)no_s_private_key_s_formats_are_enabled(*puVar5,*ppuVar13,"input",uVar7)
        ;
        if (plVar8 != (longlong *)0x0) {
          FUN_140bdf8f0(0,&local_58,0,local_50);
          if (local_58 == -1) {
            if (3 < local_54) {
              uVar1 = *local_48;
              lVar2 = *plVar8;
              plVar14 = plVar8;
              while (lVar2 != 0) {
                if ((longlong)local_54 == *(longlong *)(lVar2 + 8)) {
                  iVar4 = *(int *)(lVar2 + 0x10);
                  if ((iVar4 == 4) ||
                     ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18) >> ((char)iVar4 * '\b' & 0x1fU) == *(uint *)(lVar2 + 0x14))) {
                    lVar10 = *(longlong *)(lVar2 + 0x28);
                    puVar12 = (uint *)((longlong)local_48 + (4 - (longlong)iVar4));
                    if ((((lVar10 == 0) || (lVar10 == 0x40)) &&
                        ((lVar3 = *(longlong *)(lVar2 + 0x40), lVar3 == 0 || (lVar3 == puVar5[1]))))
                       && ((*(longlong *)(lVar2 + 0x50) == 0 ||
                           (*(longlong *)(lVar2 + 0x50) == puVar5[3])))) {
                      if (lVar10 != 0) {
                        puVar11 = (uint *)(*(longlong *)(lVar2 + 0x20) + (longlong)local_48);
                        if ((uint *)((longlong)puVar12 + 2) == puVar11) {
                          bVar16 = (ushort)((ushort)*puVar12 >> 8 | (ushort)*puVar12 << 8) ==
                                   *(ushort *)(lVar2 + 0x18);
                          puVar12 = (uint *)((longlong)puVar12 + 2);
                        }
                        else {
                          bVar16 = puVar12 == puVar11;
                        }
                        if (!bVar16) goto LAB_140dad995;
                        puVar12 = puVar12 + 0x10;
                      }
                      if (lVar3 != 0) {
                        puVar11 = (uint *)(*(longlong *)(lVar2 + 0x38) + (longlong)local_48);
                        if (puVar12 + 1 == puVar11) {
                          uVar1 = *puVar12;
                          bVar16 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8
                                   | uVar1 << 0x18) == *(uint *)(lVar2 + 0x30);
                          puVar12 = puVar12 + 1;
                        }
                        else {
                          bVar16 = puVar12 == puVar11;
                        }
                        if (!bVar16) goto LAB_140dad995;
                        puVar12 = (uint *)((longlong)puVar12 + puVar5[1]);
                      }
                      if (*(longlong *)(lVar2 + 0x50) != 0) {
                        if (puVar12 != (uint *)(*(longlong *)(lVar2 + 0x48) + (longlong)local_48))
                        goto LAB_140dad995;
                        puVar12 = (uint *)((longlong)puVar12 + puVar5[3]);
                      }
                      if ((puVar12 != (uint *)((longlong)local_48 + (longlong)local_54)) ||
                         (plVar9 = (longlong *)FUN_140d36320(param_4,param_5,param_3),
                         plVar9 == (longlong *)0x0)) goto LAB_140dad995;
                      if ((*(longlong *)(lVar2 + 0x28) != 0) &&
                         (lVar10 = FUN_140da2aa0((longlong)local_48 + *(longlong *)(lVar2 + 0x20),
                                                 0x40,plVar9), lVar10 == 0)) {
                        d_aplatformplatformopenssl_srccryptoerrerr_lo();
                        d_aplatformplatformopenssl_srccryptoerrerr_lo
                                  ("providers\\implementations\\encode_decode\\ml_kem_codecs.c",0xfa
                                   ,"ossl_ml_kem_d2i_PKCS8");
                        FUN_140b91cc0(0x3c,0xc0103,"error storing %s private key seed",*puVar5);
                        goto LAB_140dad995;
                      }
                      if (*(longlong *)(lVar2 + 0x40) != 0) {
                        _Dst = (void *)FUN_140b8d8d0(*(longlong *)(lVar2 + 0x40),
                                                                                                          
                                                  "providers\\implementations\\encode_decode\\ml_kem_codecs.c"
                                                  ,0x101);
                        plVar9[0x16] = (longlong)_Dst;
                        if (_Dst == (void *)0x0) {
                          d_aplatformplatformopenssl_srccryptoerrerr_lo();
                          d_aplatformplatformopenssl_srccryptoerrerr_lo
                                    ("providers\\implementations\\encode_decode\\ml_kem_codecs.c",
                                     0x102,"ossl_ml_kem_d2i_PKCS8");
                          FUN_140b91cc0(0x39,0x9e,"error parsing %s private key",*puVar5);
                          goto LAB_140dad995;
                        }
                        memcpy(_Dst,(void *)((longlong)local_48 + *(longlong *)(lVar2 + 0x38)),
                               *(size_t *)(lVar2 + 0x40));
                      }
                      local_40 = plVar9;
                      FUN_140b8d990(plVar8,
                                    "providers\\implementations\\encode_decode\\ml_kem_codecs.c",
                                    0x10d);
                      FUN_140c6c1e0(lVar6);
                      return plVar9;
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
                        ("providers\\implementations\\encode_decode\\ml_kem_codecs.c",0xcc,
                         "ossl_ml_kem_d2i_PKCS8");
              FUN_140b91cc0(0x39,0xf6,"no matching enabled %s private key input formats",*puVar5);
            }
          }
          else {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\encode_decode\\ml_kem_codecs.c",0xb5,
                       "ossl_ml_kem_d2i_PKCS8");
            FUN_140b91cc0(0x39,0xf9,"unexpected parameters with a PKCS#8 %s private key",*puVar5);
            plVar9 = plVar14;
          }
        }
      }
LAB_140dad995:
      FUN_140b8d990(plVar8,"providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x10d);
      FUN_140c6c1e0(lVar6);
      FUN_140da24b0(plVar9);
      return local_40;
    }
  }
  return (longlong *)0x0;
}

