/**
 * Function: tls_construct_cert_verify
 * Address:  140bb87e0
 * Signature: undefined tls_construct_cert_verify(void)
 * Body size: 962 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls_construct_cert_verify(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108 [2];
  undefined1 local_f8 [176];
  ulonglong local_48;
  undefined8 uStack_40;
  longlong lVar9;
  
  uStack_40 = 0x140bb87ff;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  lVar9 = 0;
  lVar8 = 0;
  puVar2 = *(undefined8 **)(param_1 + 8);
  local_108[0] = 0;
  local_120 = 0;
  lVar7 = 0;
  local_118 = 0;
  local_128 = 0;
  if ((lVar1 == 0) || (*(longlong *)(param_1 + 0x3d8) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar6 = 0x145;
LAB_140bb8b4e:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",uVar6,"tls_construct_cert_verify");
    uVar6 = 0xc0103;
LAB_140bb8b67:
    FUN_140ba3290(param_1,0x50,uVar6,0);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3d8) + 8);
    if ((lVar3 == 0) || (iVar4 = FUN_140bb2550(puVar2,lVar1,local_108), iVar4 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar6 = 0x14b;
      goto LAB_140bb8b4e;
    }
    lVar7 = FUN_140b70980();
    if (lVar7 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar6 = 0x151;
      lVar8 = lVar9;
LAB_140bb888e:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",uVar6,"tls_construct_cert_verify");
      uVar6 = 0x80006;
      lVar9 = lVar8;
      goto LAB_140bb8b67;
    }
    iVar4 = tls_13_server_certificateverify(param_1,local_f8,&local_110,&local_118);
    if (iVar4 != 0) {
      if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) != 0) &&
         (iVar4 = FUN_140c22430(param_2,*(undefined2 *)(lVar1 + 0x10),2), iVar4 == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar6 = 0x15c;
        goto LAB_140bb8b4e;
      }
      lVar5 = lVar9;
      if (local_108[0] != 0) {
        lVar5 = FUN_140b97a80();
      }
      local_148 = puVar2[0x8c];
      local_138 = 0;
      local_140 = lVar3;
      iVar4 = FUN_140bd0680(lVar7,&local_120,lVar5,*puVar2);
      if (iVar4 < 1) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar6 = 0x164;
        lVar8 = lVar9;
      }
      else if ((*(int *)(lVar1 + 0x1c) == 0x390) &&
              ((iVar4 = FUN_140c29750(local_120,6), iVar4 < 1 ||
               (iVar4 = FUN_140c29810(local_120,0xffffffff), iVar4 < 1)))) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar6 = 0x16c;
        lVar8 = lVar9;
      }
      else {
        uVar6 = local_118;
        if (*(int *)(param_1 + 0x48) == 0x300) {
          iVar4 = s_digest_sign_update_s(lVar7,local_110,local_118);
          if (((iVar4 < 1) ||
              (iVar4 = FUN_140b70730(lVar7,0x1d,*(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 8),
                                     *(longlong *)(param_1 + 0x8f8) + 0x50), iVar4 < 1)) ||
             (iVar4 = s_digest_sign_final_s(lVar7,0,&local_128), iVar4 < 1)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar6 = 0x17b;
          }
          else {
            lVar8 = FUN_140b8d8d0(local_128,"ssl\\statem\\statem_lib.c",0x17e);
            if ((lVar8 != 0) && (iVar4 = s_digest_sign_final_s(lVar7,lVar8,&local_128), 0 < iVar4))
            {
LAB_140bb8aad:
              if ((*(int *)(lVar1 + 0x1c) == 0x32b) || (*(int *)(lVar1 + 0x1c) - 0x3d3U < 2)) {
                FUN_140b8f210(lVar8,0,local_128);
              }
              iVar4 = FUN_140c22660(param_2,lVar8,local_128,2);
              lVar9 = lVar8;
              if (iVar4 != 0) {
                iVar4 = ssl3_digest_cached_records(param_1,0);
                if (iVar4 != 0) {
                  FUN_140b8d990(lVar8,"ssl\\statem\\statem_lib.c",0x1ab);
                  FUN_140b709d0(lVar7);
                  goto LAB_140bb8b96;
                }
                goto LAB_140bb8b77;
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar6 = 0x1a1;
              goto LAB_140bb8b4e;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar6 = 0x181;
          }
        }
        else {
          local_148 = local_118;
          iVar4 = s_digest_sign_update_s(lVar7,0,&local_128,local_110);
          if (iVar4 < 1) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar6 = 0x18a;
          }
          else {
            lVar8 = FUN_140b8d8d0(local_128,"ssl\\statem\\statem_lib.c",0x18d);
            if (lVar8 != 0) {
              local_148 = uVar6;
              iVar4 = s_digest_sign_update_s(lVar7,lVar8,&local_128,local_110);
              if (0 < iVar4) goto LAB_140bb8aad;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar6 = 400;
          }
        }
      }
      goto LAB_140bb888e;
    }
  }
LAB_140bb8b77:
  FUN_140b8d990(lVar9,"ssl\\statem\\statem_lib.c",0x1af);
  FUN_140b709d0(lVar7);
LAB_140bb8b96:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_168);
}

