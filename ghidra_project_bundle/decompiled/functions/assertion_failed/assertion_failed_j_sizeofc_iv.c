/**
 * Function: assertion_failed_j_sizeofc_iv
 * Address:  140b98d40
 * Signature: undefined assertion_failed_j_sizeofc_iv(void)
 * Body size: 1077 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void assertion_failed_j_sizeofc_iv(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  longlong local_100;
  undefined1 local_f8 [48];
  ulonglong local_c8 [2];
  ulonglong local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  ulonglong local_a8 [7];
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_128;
  if ((param_1 == (undefined8 *)0x0) ||
     (puVar1 = (undefined4 *)*param_1, puVar1 == (undefined4 *)0x0)) {
LAB_140b990f6:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_lib.c",0x92,"evp_cipher_param_to_asn1_ex");
    FUN_140b91cc0(6,0x7a,0);
  }
  else {
    if (*(code **)(puVar1 + 0xe) == (code *)0x0) {
      if (((uint)puVar1[4] >> 0x18 & 1) == 0) {
        uVar11 = puVar1[4] & 0xf0007;
        if (uVar11 == 6) {
          if ((param_2 == (undefined8 *)0x0) || (param_3 == 0)) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_140c24310(param_2,*(undefined4 *)(param_3 + 0x14),param_3,
                                  *(undefined4 *)(param_3 + 0x10));
          }
          goto LAB_140b990ed;
        }
        if ((uVar11 != 7) && (uVar11 != 0x10001)) {
          if (uVar11 == 0x10002) {
            uVar12 = *(ulonglong *)(puVar1 + 0x1c);
            if (uVar12 == 0) {
              lVar7 = *(longlong *)(puVar1 + 0x18);
              if (lVar7 == 0) {
                lVar7 = FUN_140b96490(*puVar1);
              }
              uVar12 = 0;
              uVar13 = uVar12;
            }
            else {
              lVar7 = 0;
              uVar13 = (ulonglong)(uint)puVar1[0x16];
            }
            iVar4 = FUN_140bd5b10(uVar12,uVar13,lVar7,"id-smime-alg-CMS3DESwrap");
            if (iVar4 != 0) {
              FUN_140bec230(param_2,5,0);
            }
            goto LAB_140b99169;
          }
          if (uVar11 != 0x10003) {
            iVar4 = 0;
            if (param_2 != (undefined8 *)0x0) {
              local_108 = param_1 + 3;
              local_c8[0] = 0;
              local_c8[1] = local_c8[1] & 0xffffffff00000000;
              local_b8 = 0;
              uStack_b0 = 0;
              local_a8[0] = 0;
              local_a8[1] = 0;
              local_a8[2] = local_a8[2] & 0xffffffff00000000;
              local_a8[3] = 0;
              local_a8[4] = 0;
              local_a8[5] = 0;
              puVar6 = (ulonglong *)FUN_140b938b0(local_f8,&DAT_1413a59e8,&local_108,0x10);
              local_c8[0] = *puVar6;
              local_c8[1] = puVar6[1];
              local_b8 = puVar6[2];
              uStack_b0 = puVar6[3];
              local_a8[0] = puVar6[4];
              iVar4 = FUN_140bd6550(*param_1,param_1[0x16],local_c8);
              puVar8 = (undefined8 *)0x0;
              if (iVar4 != 0) {
                puVar8 = local_108;
              }
              uVar11 = FUN_140b98300(param_1);
              if (0x10 < uVar11) {
                s_d_openssl_internal_error_sn
                          ("assertion failed: j <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x4b);
              }
              iVar4 = FUN_140c24070(param_2,puVar8,uVar11);
            }
            goto LAB_140b990ed;
          }
        }
      }
      else if (*(longlong *)(puVar1 + 0x1c) != 0) {
        iVar4 = -1;
        lVar7 = 0;
        local_108 = (undefined8 *)0x0;
        puVar6 = (ulonglong *)FUN_140b93860(local_f8,"alg_id_param",0,0);
        local_c8[0] = *puVar6;
        local_c8[1] = puVar6[1];
        local_b8 = puVar6[2];
        uStack_b0 = puVar6[3];
        local_a8[0] = puVar6[4];
        puVar8 = (undefined8 *)FUN_140b93860(local_f8,"algorithm-id-params",0,0);
        local_a8[1] = *puVar8;
        local_a8[2] = puVar8[1];
        local_a8[3] = puVar8[2];
        local_a8[4] = puVar8[3];
        local_a8[5] = puVar8[4];
        puVar8 = (undefined8 *)FUN_140b93900(local_f8);
        local_a8[6] = *puVar8;
        uStack_70 = puVar8[1];
        local_68 = *(undefined4 *)(puVar8 + 2);
        uStack_64 = *(undefined4 *)((longlong)puVar8 + 0x14);
        uStack_60 = *(undefined4 *)(puVar8 + 3);
        uStack_5c = *(undefined4 *)((longlong)puVar8 + 0x1c);
        local_58 = puVar8[4];
        iVar5 = FUN_140b865a0(param_1,local_c8);
        if (iVar5 != 0) {
          iVar5 = FUN_140b95770(local_c8);
          lVar10 = 0xffffffff;
          if ((iVar5 != 0) && (lVar10 = 0xffffffff, local_a8[0] != 0)) {
            lVar10 = lVar7;
          }
          iVar5 = FUN_140b95770(local_a8 + 1);
          if ((iVar5 == 0) || (local_a8[5] == 0)) {
            if ((int)lVar10 < 0) goto LAB_140b990cd;
          }
          else {
            lVar10 = 1;
          }
          uVar12 = local_a8[lVar10 * 5];
          puVar6 = local_c8 + lVar10 * 5;
          uVar13 = *puVar6;
          local_108 = param_2;
          lVar7 = FUN_140b8d8d0(uVar12,"crypto\\evp\\evp_lib.c",0x526);
          if (lVar7 != 0) {
            local_100 = lVar7;
            puVar9 = (ulonglong *)FUN_140b93860(local_f8,uVar13,lVar7,uVar12);
            uVar13 = puVar9[1];
            *puVar6 = *puVar9;
            local_c8[lVar10 * 5 + 1] = uVar13;
            uVar2 = *(undefined4 *)((longlong)puVar9 + 0x14);
            uVar13 = puVar9[3];
            uVar3 = *(undefined4 *)((longlong)puVar9 + 0x1c);
            *(int *)(&stack0xffffffffffffff48 + lVar10 * 5) = (int)puVar9[2];
            (&uStack_b4)[lVar10 * 10] = uVar2;
            *(int *)(&uStack_b0 + lVar10 * 5) = (int)uVar13;
            *(undefined4 *)((longlong)&uStack_b0 + lVar10 * 0x28 + 4) = uVar3;
            local_a8[lVar10 * 5] = puVar9[4];
            iVar5 = FUN_140b865a0(param_1,local_c8);
            if (((iVar5 != 0) && (iVar5 = FUN_140b95770(puVar6), iVar5 != 0)) &&
               (lVar10 = FUN_140b90e10(&local_108,&local_100,uVar12 & 0xffffffff), iVar4 = -1,
               lVar10 != 0)) {
              iVar4 = 1;
            }
          }
        }
LAB_140b990cd:
        FUN_140b8d990(lVar7,"crypto\\evp\\evp_lib.c",0x537);
        goto LAB_140b990ed;
      }
    }
    else {
      iVar4 = (**(code **)(puVar1 + 0xe))();
LAB_140b990ed:
      if (iVar4 != -2) {
        if (0 < iVar4) goto LAB_140b99169;
        goto LAB_140b990f6;
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_lib.c",0x90,"evp_cipher_param_to_asn1_ex");
    FUN_140b91cc0(6,0x6b,0);
  }
LAB_140b99169:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_128);
}

