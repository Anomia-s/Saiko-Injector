/**
 * Function: explicit_s_public_key_does_not_match_private
 * Address:  140d36780
 * Signature: undefined explicit_s_public_key_does_not_match_private(void)
 * Body size: 733 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
explicit_s_public_key_does_not_match_private(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong local_res8;
  ulonglong local_res20;
  void *local_58;
  undefined8 local_50;
  longlong local_48;
  size_t local_40;
  
  local_58 = (void *)0x0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_res8 = 0;
  local_res20 = 0;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_1[8] != 0) {
    return 0;
  }
  puVar1 = (undefined8 *)*param_1;
  if (param_3 == 0) {
LAB_140d368bc:
    lVar5 = FUN_140b93540(param_2,&DAT_1413a64f0);
    if ((lVar5 != 0) && (iVar4 = FUN_140b95610(lVar5,&local_58,&local_40), iVar4 != 1)) {
      return 0;
    }
    sVar3 = local_40;
    lVar2 = local_48;
    uVar7 = local_res20;
    lVar5 = local_res8;
    if ((local_40 == 0) || (local_40 == puVar1[3])) {
      if ((local_res20 != 0) || (local_40 != 0)) {
        if (((local_40 != 0) && (local_res8 != 0)) &&
           (iVar4 = memcmp(local_58,(void *)((local_res8 - local_40) + -0x40 + local_48),local_40),
           iVar4 != 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\keymgmt\\ml_kem_kmgmt.c",0x1b8,
                     "ml_kem_key_fromdata");
          FUN_140b91cc0(0x39,0x9e,"explicit %s public key does not match private",*puVar1);
          return 0;
        }
        if (uVar7 != 0) {
          if (lVar5 == 0) {
LAB_140d369e7:
            lVar5 = FUN_140da2aa0(local_50,uVar7,param_1);
            if (lVar5 == 0) {
              return 0;
            }
            iVar4 = FUN_140da2b00(0,0,param_1);
            if (iVar4 == 0) {
              return 0;
            }
            if ((local_res8 != 0) &&
               (iVar4 = explicit_s_private_key_does_not_match_seed(local_48,param_1), iVar4 == 0)) {
              return 0;
            }
            return 1;
          }
          if ((*(byte *)(param_1 + 0xd) & 4) != 0) {
            iVar4 = private_s_key_implicit_rejection_secret_does(local_50,lVar2,param_1);
            uVar7 = local_res20;
            if (iVar4 == 0) {
              return 0;
            }
            goto LAB_140d369e7;
          }
        }
        if (lVar5 == 0) {
          uVar6 = FUN_140da2790(local_58,sVar3,param_1);
          return uVar6;
        }
LAB_140d36a3a:
        uVar6 = s_invalid_private_s_vector(lVar2,lVar5,param_1);
        return uVar6;
      }
      if (local_res8 != 0) goto LAB_140d36a3a;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\keymgmt\\ml_kem_kmgmt.c",0x1af,"ml_kem_key_fromdata");
      uVar6 = 0x80;
      goto LAB_140d36895;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar6 = 0x1a9;
  }
  else {
    lVar5 = FUN_140b93540(param_2,&DAT_1413a641c);
    if ((lVar5 != 0) && (iVar4 = FUN_140b95610(lVar5,&local_50,&local_res20), iVar4 != 1)) {
      return 0;
    }
    if ((local_res20 & 0xffffffffffffffbf) != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\keymgmt\\ml_kem_kmgmt.c",0x196,"ml_kem_key_fromdata");
      uVar6 = 0x9a;
      goto LAB_140d36895;
    }
    lVar5 = FUN_140b93540(param_2,&DAT_1413a59dc);
    if ((lVar5 != 0) && (iVar4 = FUN_140b95610(lVar5,&local_48,&local_res8), iVar4 != 1)) {
      return 0;
    }
    if ((local_res8 == 0) || (local_res8 == puVar1[1])) goto LAB_140d368bc;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar6 = 0x19e;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\keymgmt\\ml_kem_kmgmt.c",uVar6,"ml_kem_key_fromdata");
  uVar6 = 0x69;
LAB_140d36895:
  FUN_140b91cc0(0x39,uVar6,0);
  return 0;
}

