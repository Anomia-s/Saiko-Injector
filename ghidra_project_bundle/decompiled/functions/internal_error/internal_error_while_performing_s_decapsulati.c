/**
 * Function: internal_error_while_performing_s_decapsulati
 * Address:  140da63f0
 * Signature: undefined internal_error_while_performing_s_decapsulati(void)
 * Body size: 648 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void internal_error_while_performing_s_decapsulati
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,longlong *param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  byte local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140da6407;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_138;
  puVar1 = (undefined8 *)*param_6;
  puVar2 = (undefined4 *)param_6[7];
  lVar7 = param_6[0xb];
  uVar3 = puVar1[5];
  local_108 = param_4;
  local_100 = param_3;
  iVar5 = FUN_140b70ff0(param_5,param_6[3],0);
  if (iVar5 != 0) {
    iVar5 = evp_digestupdate(param_5,lVar7,0x20);
    if (iVar5 != 0) {
      iVar5 = evp_digestupdate(param_5,param_2,uVar3);
      if (iVar5 != 0) {
        iVar5 = FUN_140b71630(param_5,&local_f8,0x20);
        uVar3 = local_108;
        if (iVar5 != 0) {
          FUN_140da5a70(local_d8,param_2,local_108,param_6);
          local_b8 = *puVar2;
          uStack_b4 = puVar2[1];
          uStack_b0 = puVar2[2];
          uStack_ac = puVar2[3];
          local_a8 = puVar2[4];
          uStack_a4 = puVar2[5];
          uStack_a0 = puVar2[6];
          uStack_9c = puVar2[7];
          iVar5 = FUN_140b70ff0(param_5,param_6[5],0);
          if (iVar5 != 0) {
            local_108 = CONCAT44(local_108._4_4_,0x40);
            iVar5 = evp_digestupdate(param_5,local_d8,0x40);
            if (iVar5 != 0) {
              uVar6 = FUN_140b76060(param_5);
              iVar5 = FUN_140b97c00(uVar6);
              if (iVar5 == 0) {
                iVar5 = assertion_failed_mdsize_evp_max_md_size(param_5,local_98,&local_108);
                if ((iVar5 != 0) && ((int)local_108 == 0x40)) goto LAB_140da657c;
              }
              else {
                iVar5 = FUN_140b71630(param_5,local_98,0x40);
                if (iVar5 != 0) {
LAB_140da657c:
                  uVar6 = local_100;
                  local_110 = param_6;
                  local_118 = param_5;
                  iVar5 = FUN_140da5770(local_100,local_d8,local_78,uVar3);
                  if (iVar5 != 0) {
                    iVar5 = FUN_14046e9f0(param_2,uVar6,puVar1[5]);
                    lVar7 = 0;
                    bVar4 = (char)((byte)((uint)(iVar5 + -1) >> 0x18) & ~(byte)((uint)iVar5 >> 0x18)
                                  ) >> 7;
                    uVar8 = ~(uint)bVar4;
                    do {
                      local_108 = CONCAT44(local_108._4_4_,uVar8);
                      *(byte *)((longlong)param_1 + lVar7) =
                           local_98[lVar7] & bVar4 |
                           *(byte *)((longlong)&local_f8 + lVar7) & (byte)uVar8;
                      lVar7 = lVar7 + 1;
                    } while (lVar7 < 0x20);
                    FUN_14046e980(local_d8,0x20);
                    FUN_14046e980(local_98,0x40);
                    goto LAB_140da6668;
                  }
                }
              }
            }
          }
          *param_1 = local_f8;
          param_1[1] = uStack_f4;
          param_1[2] = uStack_f0;
          param_1[3] = uStack_ec;
          param_1[4] = local_e8;
          param_1[5] = uStack_e4;
          param_1[6] = uStack_e0;
          param_1[7] = uStack_dc;
          FUN_14046e980(local_d8,0x20);
          goto LAB_140da6668;
        }
      }
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ml_kem\\ml_kem.c",0x5e5,"decap");
  FUN_140b91cc0(0xf,0xc0103,"internal error while performing %s decapsulation",*puVar1);
LAB_140da6668:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_138);
}

