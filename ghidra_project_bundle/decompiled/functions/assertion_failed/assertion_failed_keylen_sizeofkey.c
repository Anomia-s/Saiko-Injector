/**
 * Function: assertion_failed_keylen_sizeofkey
 * Address:  140cb2d20
 * Signature: undefined assertion_failed_keylen_sizeofkey(void)
 * Body size: 908 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void assertion_failed_keylen_sizeofkey
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
               undefined8 param_9)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 *local_f0;
  uint local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8 [2];
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_118;
  puVar10 = (undefined8 *)0x0;
  local_a8 = param_8;
  local_b0 = param_9;
  puVar11 = (undefined8 *)0x0;
  local_b8 = param_3;
  local_a0 = param_2;
  lVar7 = FUN_140b76060();
  if (lVar7 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\p5_crpt2.c",0xc3,"PKCS5_v2_PBKDF2_keyivgen_ex");
    FUN_140b91cc0(6,0x83,0);
    puVar9 = puVar10;
    puVar12 = puVar10;
  }
  else {
    uVar2 = FUN_140b981e0(param_1);
    if (0x40 < uVar2) {
      s_d_openssl_internal_error_sn
                ("assertion failed: keylen <= sizeof(key)","crypto\\evp\\p5_crpt2.c",199);
    }
    uVar8 = FUN_140d00230();
    puVar9 = (undefined8 *)FUN_140bec440(uVar8,param_4);
    if (puVar9 == (undefined8 *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\p5_crpt2.c",0xce,"PKCS5_v2_PBKDF2_keyivgen_ex");
      FUN_140b91cc0(6,0x72,0);
      puVar10 = puVar11;
      puVar12 = (undefined8 *)(ulonglong)uVar2;
    }
    else {
      uVar3 = FUN_140b981e0(param_1);
      puVar12 = (undefined8 *)(ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\p5_crpt2.c",0xd4,"PKCS5_v2_PBKDF2_keyivgen_ex");
        FUN_140b91cc0(6,0x82,0);
        puVar12 = (undefined8 *)(ulonglong)uVar2;
      }
      else if ((puVar9[2] == 0) || (uVar2 = FUN_140bd8680(), uVar2 == uVar3)) {
        if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
          uVar4 = 0xa3;
        }
        else {
          uVar4 = FUN_140b964c0(*(undefined8 *)puVar9[3]);
        }
        local_f8 = 0;
        iVar5 = FUN_140c24c80(1,uVar4,0,local_c8);
        if (iVar5 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\p5_crpt2.c",0xe6,"PKCS5_v2_PBKDF2_keyivgen_ex");
          FUN_140b91cc0(6,0x7d,0);
          puVar10 = puVar11;
        }
        else {
          FUN_140b932f0();
          uVar8 = FUN_140b96490(local_c8[0]);
          puVar10 = (undefined8 *)FUN_140b71980(param_8,uVar8,local_b0);
          local_c0 = puVar10;
          if (puVar10 == (undefined8 *)0x0) {
            uVar8 = FUN_140b96490(local_c8[0]);
            puVar10 = (undefined8 *)FUN_140b999e0(uVar8);
            if (puVar10 == (undefined8 *)0x0) {
              FUN_140b93470();
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\evp\\p5_crpt2.c",0xf0,"PKCS5_v2_PBKDF2_keyivgen_ex");
              FUN_140b91cc0(6,0x7d,0);
              puVar10 = local_c0;
              goto LAB_140cb307a;
            }
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          if (*(int *)*puVar9 == 4) {
            puVar1 = *(undefined4 **)((int *)*puVar9 + 2);
            uVar8 = *(undefined8 *)(puVar1 + 2);
            uVar4 = *puVar1;
            uVar6 = FUN_140bd8680(puVar9[1]);
            local_d0 = local_b0;
            local_d8 = local_a8;
            local_e0 = local_98;
            local_f8 = CONCAT44(local_f8._4_4_,uVar6);
            local_f0 = puVar10;
            local_e8 = uVar3;
            iVar5 = FUN_140cb2a80(local_a0,local_b8,uVar8,uVar4);
            puVar10 = local_c0;
            if (iVar5 != 0) {
              local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,param_7);
              local_f8 = 0;
              FUN_140b85520(param_1,0,0,local_98);
              puVar10 = local_c0;
            }
          }
          else {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\evp\\p5_crpt2.c",0xf6,"PKCS5_v2_PBKDF2_keyivgen_ex");
            FUN_140b91cc0(6,0x7e,0);
            puVar10 = local_c0;
          }
        }
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\p5_crpt2.c",0xdc,"PKCS5_v2_PBKDF2_keyivgen_ex");
        FUN_140b91cc0(6,0x7b,0);
        puVar10 = puVar11;
      }
    }
  }
LAB_140cb307a:
  FUN_14046e980(local_98,puVar12);
  FUN_140d00210(puVar9);
  FUN_140b719e0(puVar10);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_118);
}

