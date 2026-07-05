/**
 * Function: no_s_key_material_available
 * Address:  140dad9e0
 * Signature: undefined no_s_key_material_available(void)
 * Body size: 633 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void no_s_key_material_available(longlong param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  lVar7 = 0;
  lVar9 = 0;
  bVar5 = false;
  if ((param_1 == 0) || (param_2 == (longlong *)0x0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x1b3,
               "ossl_ml_kem_key_to_text");
    FUN_140b91cc0(0x3b,0xc0102,0);
    goto LAB_140dadbab;
  }
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[3];
  uVar4 = puVar1[1];
  if (((param_3 & 1) == 0) || ((param_2[10] == 0 && (param_2[0xc] == 0)))) {
LAB_140dadb14:
    if (param_2[8] == 0) {
      lVar8 = lVar9;
      if (!bVar5) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x1e0,
                   "ossl_ml_kem_key_to_text");
        FUN_140b91cc0(0x39,0x80,"no %s key material available",uVar2);
      }
    }
    else if ((((bVar5) ||
              (iVar6 = FUN_140c078a0(param_1,"%s Public-Key:\n",uVar2), lVar8 = lVar9, 0 < iVar6))
             && (lVar8 = FUN_140b8d8d0(*(undefined8 *)(*param_2 + 0x18),
                                       "providers\\implementations\\encode_decode\\ml_kem_codecs.c",
                                       0x1d7), lVar8 != 0)) &&
            (iVar6 = FUN_140da2cd0(lVar8,uVar3,param_2), iVar6 != 0)) {
      FUN_140c11cf0(param_1,&DAT_1413a6c0c,lVar8,uVar3);
    }
  }
  else {
    iVar6 = FUN_140c078a0(param_1,"%s Private-Key:\n",uVar2);
    if (iVar6 < 1) goto LAB_140dadbab;
    if ((param_2[0xc] == 0) ||
       ((iVar6 = FUN_140da2e00(local_88,0x40,param_2), lVar8 = lVar7, iVar6 != 0 &&
        (iVar6 = FUN_140c11cf0(param_1,"seed:",local_88,0x40), lVar8 = lVar9, iVar6 != 0)))) {
      if (param_2[10] != 0) {
        lVar7 = FUN_140b8d8d0(uVar4,"providers\\implementations\\encode_decode\\ml_kem_codecs.c",
                              0x1c7);
        if (lVar7 == 0) goto LAB_140dadbab;
        iVar6 = FUN_140da2d10(lVar7,uVar4,param_2);
        lVar8 = lVar9;
        if ((iVar6 == 0) || (iVar6 = FUN_140c11cf0(param_1,&DAT_1413a6c10,lVar7,uVar4), iVar6 == 0))
        goto LAB_140dadc00;
      }
      bVar5 = true;
      goto LAB_140dadb14;
    }
  }
LAB_140dadc00:
  FUN_140b8d990(lVar8,"providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x1e5);
  FUN_140b8d990(lVar7,"providers\\implementations\\encode_decode\\ml_kem_codecs.c",0x1e6);
LAB_140dadbab:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
}

