/**
 * Function: error_encoding_s_private_key
 * Address:  140dadd90
 * Signature: undefined error_encoding_s_private_key(void)
 * Body size: 898 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * error_encoding_s_private_key(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint *puVar8;
  undefined **ppuVar9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  
  puVar3 = (undefined8 *)*param_1;
  puVar11 = (uint *)0x0;
  iVar4 = *(int *)(puVar3 + 8);
  if (iVar4 == 0x5ae) {
    ppuVar9 = &PTR_PTR_14131c9e8;
  }
  else if (iVar4 == 0x5af) {
    ppuVar9 = &PTR_PTR_14131c9f8;
  }
  else {
    if (iVar4 != 0x5b0) {
      return (uint *)0x0;
    }
    ppuVar9 = &PTR_PTR_14131ca08;
  }
  if (param_1[10] == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x141,
               "ossl_ml_kem_i2d_prvkey");
    FUN_140b91cc0(0x39,0xdd,"no %s private key data available",*(undefined8 *)*param_1);
  }
  else {
    uVar5 = FUN_140cfc320(param_3,"ml-kem.output_formats",0);
    plVar6 = (longlong *)no_s_private_key_s_formats_are_enabled(*puVar3,*ppuVar9,"output",uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar10 = *plVar6;
      puVar8 = puVar11;
      if (lVar10 != 0) {
        plVar7 = plVar6;
        do {
          if ((param_1[0xc] != 0) || (*(longlong *)(lVar10 + 0x28) == 0)) {
            if ((((lVar10 != 0) &&
                 ((*(longlong *)(lVar10 + 0x28) == 0 || (*(longlong *)(lVar10 + 0x28) == 0x40)))) &&
                ((*(longlong *)(lVar10 + 0x40) == 0 || (*(longlong *)(lVar10 + 0x40) == puVar3[1])))
                ) && ((*(longlong *)(lVar10 + 0x50) == 0 ||
                      (*(longlong *)(lVar10 + 0x50) == puVar3[3])))) {
              uVar1 = *(uint *)(lVar10 + 8);
              if (param_2 == (undefined8 *)0x0) {
LAB_140dae0bf:
                puVar11 = (uint *)(ulonglong)uVar1;
              }
              else {
                puVar8 = (uint *)FUN_140b8d8d0((longlong)(int)uVar1,
                                               "providers\\implementations\\encode_decode\\ml_kem_codecs.c"
                                               ,0x163);
                if (puVar8 != (uint *)0x0) {
                  iVar4 = *(int *)(lVar10 + 0x10);
                  if (iVar4 != 0) {
                    if (iVar4 == 2) {
                      puVar12 = (uint *)((longlong)puVar8 + 2);
                      *(ushort *)puVar8 =
                           *(ushort *)(lVar10 + 0x14) >> 8 | *(ushort *)(lVar10 + 0x14) << 8;
                      goto LAB_140dadfee;
                    }
                    puVar12 = puVar8;
                    if (iVar4 == 4) goto LAB_140dadfee;
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    uVar5 = 0x170;
LAB_140dadfae:
                    d_aplatformplatformopenssl_srccryptoerrerr_lo
                              ("providers\\implementations\\encode_decode\\ml_kem_codecs.c",uVar5,
                               "ossl_ml_kem_i2d_prvkey");
                    pcVar13 = "error encoding %s private key";
                    uVar5 = 0xc0103;
                    goto LAB_140dadec9;
                  }
                  uVar2 = *(uint *)(lVar10 + 0x14);
                  puVar12 = puVar8 + 1;
                  *puVar8 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                            uVar2 << 0x18;
LAB_140dadfee:
                  if (*(longlong *)(lVar10 + 0x28) != 0) {
                    if ((uint *)((longlong)puVar12 + 2) ==
                        (uint *)(*(longlong *)(lVar10 + 0x20) + (longlong)puVar8)) {
                      *(ushort *)puVar12 =
                           *(ushort *)(lVar10 + 0x18) >> 8 | *(ushort *)(lVar10 + 0x18) << 8;
                      puVar12 = (uint *)((longlong)puVar12 + 2);
                    }
                    if ((puVar12 != (uint *)(*(longlong *)(lVar10 + 0x20) + (longlong)puVar8)) ||
                       (iVar4 = FUN_140da2e00(puVar12,0x40,param_1), iVar4 == 0)) {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      uVar5 = 0x17f;
                      goto LAB_140dadfae;
                    }
                    puVar12 = puVar12 + 0x10;
                  }
                  if (*(longlong *)(lVar10 + 0x40) != 0) {
                    if (puVar12 + 1 == (uint *)(*(longlong *)(lVar10 + 0x38) + (longlong)puVar8)) {
                      uVar2 = *(uint *)(lVar10 + 0x30);
                      *puVar12 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                 uVar2 << 0x18;
                      puVar12 = puVar12 + 1;
                    }
                    if ((puVar12 != (uint *)(*(longlong *)(lVar10 + 0x38) + (longlong)puVar8)) ||
                       (iVar4 = FUN_140da2d10(puVar12,puVar3[1],param_1), iVar4 == 0)) {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      uVar5 = 0x18b;
                      goto LAB_140dadfae;
                    }
                    puVar12 = (uint *)((longlong)puVar12 + puVar3[1]);
                  }
                  if (*(longlong *)(lVar10 + 0x50) != 0) {
                    if ((puVar12 != (uint *)(*(longlong *)(lVar10 + 0x48) + (longlong)puVar8)) ||
                       (iVar4 = FUN_140da2cd0(puVar12,puVar3[3],param_1), iVar4 == 0)) {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      uVar5 = 0x197;
                      goto LAB_140dadfae;
                    }
                    puVar12 = (uint *)((longlong)puVar12 + puVar3[3]);
                  }
                  puVar11 = (uint *)0x0;
                  if (puVar12 == (uint *)((longlong)puVar8 + (longlong)(int)uVar1)) {
                    *param_2 = puVar8;
                    goto LAB_140dae0bf;
                  }
                }
              }
              FUN_140b8d990(plVar6,"providers\\implementations\\encode_decode\\ml_kem_codecs.c",
                            0x1a5);
              if ((int)puVar11 != 0) {
                return puVar11;
              }
              goto LAB_140dadeeb;
            }
            break;
          }
          lVar10 = plVar7[2];
          plVar7 = plVar7 + 2;
        } while (lVar10 != 0);
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x157,
                 "ossl_ml_kem_i2d_prvkey");
      pcVar13 = "no matching enabled %s private key output formats";
      uVar5 = 0xf6;
LAB_140dadec9:
      FUN_140b91cc0(0x39,uVar5,pcVar13,*puVar3);
      FUN_140b8d990(plVar6,"providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x1a5);
LAB_140dadeeb:
      FUN_140b8d990(puVar8,"providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x1a7);
      return puVar11;
    }
  }
  return (uint *)0x0;
}

