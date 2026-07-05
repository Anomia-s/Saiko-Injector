/**
 * Function: public_part_of_s_private_key_fails_to_match_p
 * Address:  140d36450
 * Signature: undefined public_part_of_s_private_key_fails_to_match_p(void)
 * Body size: 405 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void public_part_of_s_private_key_fails_to_match_p(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [4];
  undefined1 local_48 [32];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140d36463;
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  puVar1 = (undefined8 *)*param_1;
  if (((param_1[10] == 0) || (param_1[8] == 0)) || ((param_2 & 3) == 0)) goto LAB_140d365d5;
  lVar3 = FUN_140b8d8d0(puVar1[5],"providers\\implementations\\keymgmt\\ml_kem_kmgmt.c",0x69);
  if (lVar3 == 0) {
LAB_140d36579:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\keymgmt\\ml_kem_kmgmt.c",0x90,"ml_kem_pairwise_test");
    FUN_140b91cc0(0x39,0x9e,"public part of %s private key fails to match private",*puVar1);
  }
  else {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    if ((param_2 & 1) == 0) {
      local_a8 = local_68;
      local_68[0] = 0x5555555555555555;
      local_68[1] = 0x5555555555555555;
      local_68[2] = 0x5555555555555555;
      local_68[3] = 0x5555555555555555;
      local_a0 = 0x20;
      local_98 = param_1;
      iVar2 = FUN_140da2e40(lVar3,puVar1[5],local_48,0x20);
    }
    else {
      local_a8 = param_1;
      iVar2 = FUN_140da2fd0(lVar3,puVar1[5]);
    }
    if (((iVar2 != 1) ||
        (local_a8 = param_1, iVar2 = FUN_140da3180(&local_88,0x20,lVar3,puVar1[5]), iVar2 != 1)) ||
       (iVar2 = memcmp(&local_88,local_48,0x20), iVar2 != 0)) goto LAB_140d36579;
  }
  FUN_140b8d990(lVar3,"providers\\implementations\\keymgmt\\ml_kem_kmgmt.c",0x95);
LAB_140d365d5:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_c8);
}

