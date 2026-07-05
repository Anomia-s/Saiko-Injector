/**
 * Function: internal_error_while_performing_s_encapsulati
 * Address:  140da6240
 * Signature: undefined internal_error_while_performing_s_encapsulati(void)
 * Body size: 403 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void internal_error_while_performing_s_encapsulati
               (undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 *local_e0;
  int local_d8 [4];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x140da6253;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  local_c8 = *param_3;
  uStack_c0 = param_3[1];
  local_b8 = param_3[2];
  uStack_b0 = param_3[3];
  puVar1 = (undefined4 *)param_6[7];
  local_a8 = *puVar1;
  uStack_a4 = puVar1[1];
  uStack_a0 = puVar1[2];
  uStack_9c = puVar1[3];
  local_98 = puVar1[4];
  uStack_94 = puVar1[5];
  uStack_90 = puVar1[6];
  uStack_8c = puVar1[7];
  iVar2 = FUN_140b70ff0(param_5,param_6[5],0);
  if (iVar2 != 0) {
    local_d8[0] = 0x40;
    iVar2 = evp_digestupdate(param_5,&local_c8,0x40);
    if (iVar2 != 0) {
      uVar3 = FUN_140b76060(param_5);
      iVar2 = FUN_140b97c00(uVar3);
      if (iVar2 == 0) {
        iVar2 = assertion_failed_mdsize_evp_max_md_size(param_5,&local_88,local_d8);
        if ((iVar2 != 0) && (local_d8[0] == 0x40)) goto LAB_140da638b;
      }
      else {
        iVar2 = FUN_140b71630(param_5,&local_88,0x40);
        if (iVar2 != 0) {
LAB_140da638b:
          local_e0 = param_6;
          local_e8 = param_5;
          iVar2 = FUN_140da5770(param_1,param_3,local_68,param_4);
          if (iVar2 != 0) {
            FUN_14046e980(&local_c8,0x40);
            *param_2 = local_88;
            param_2[1] = uStack_84;
            param_2[2] = uStack_80;
            param_2[3] = uStack_7c;
            *(undefined8 *)(param_2 + 4) = local_78;
            *(undefined8 *)(param_2 + 6) = uStack_70;
            goto LAB_140da6356;
          }
        }
      }
    }
  }
  FUN_14046e980(&local_c8,0x40);
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ml_kem\\ml_kem.c",0x5b6,"encap");
  FUN_140b91cc0(0xf,0xc0103,"internal error while performing %s encapsulation",
                *(undefined8 *)*param_6);
LAB_140da6356:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_108);
}

