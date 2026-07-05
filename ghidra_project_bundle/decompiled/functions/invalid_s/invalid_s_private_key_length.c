/**
 * Function: invalid_s_private_key_length
 * Address:  140d35130
 * Signature: undefined invalid_s_private_key_length(void)
 * Body size: 851 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 invalid_s_private_key_length(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Buf1;
  char *pcVar5;
  undefined8 uVar6;
  longlong local_res20;
  size_t local_48;
  longlong local_40;
  longlong local_38;
  void *local_30;
  longlong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140d3514b;
  puVar2 = (undefined8 *)FUN_140b76c30();
  local_30 = (void *)0x0;
  local_38 = 0;
  local_28 = 0;
  local_48 = 0;
  local_res20 = 0;
  local_40 = 0;
  lVar3 = FUN_140b93540(param_2,&DAT_1413a64f0);
  if ((lVar3 != 0) && (iVar1 = FUN_140b95610(lVar3,&local_30,&local_48), iVar1 == 0)) {
    return 0;
  }
  if ((local_30 != (void *)0x0) && (local_48 != puVar2[9])) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\keymgmt\\ml_dsa_kmgmt.c",0xcd,"ml_dsa_key_fromdata");
    uVar6 = *puVar2;
    pcVar5 = "Invalid %s public key length";
LAB_140d351d9:
    FUN_140b91cc0(0x39,0x69,pcVar5,uVar6);
    return 0;
  }
  if (param_3 != 0) {
    lVar3 = FUN_140b93540(param_2,&DAT_1413a641c);
    if ((lVar3 != 0) && (iVar1 = FUN_140b95610(lVar3,&local_28,&local_40), iVar1 == 0)) {
      return 0;
    }
    if ((local_28 != 0) && (local_40 != 0x20)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\keymgmt\\ml_dsa_kmgmt.c",0xda,"ml_dsa_key_fromdata");
      FUN_140b91cc0(0x39,0x9a,0);
      return 0;
    }
    lVar3 = FUN_140b93540(param_2,&DAT_1413a59dc);
    if ((lVar3 != 0) && (iVar1 = FUN_140b95610(lVar3,&local_38,&local_res20), iVar1 == 0)) {
      return 0;
    }
    if ((local_38 != 0) && (local_res20 != puVar2[8])) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\keymgmt\\ml_dsa_kmgmt.c",0xe2,"ml_dsa_key_fromdata");
      uVar6 = *puVar2;
      pcVar5 = "Invalid %s private key length";
      goto LAB_140d351d9;
    }
  }
  if (local_40 == 0) {
    if (local_48 != 0) goto LAB_140d35343;
    if (local_res20 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\keymgmt\\ml_dsa_kmgmt.c",0xea,"ml_dsa_key_fromdata");
      FUN_140b91cc0(0x39,0x80,0);
      return 0;
    }
LAB_140d3534c:
    iVar1 = s_private_key_does_not_match_its_pubkey_part(param_1,local_38,local_res20);
  }
  else {
    if ((local_res20 == 0) || (uVar4 = FUN_140d9f220(param_1), (uVar4 & 1) != 0)) {
      iVar1 = FUN_140d9f230(param_1,0,0,local_28,local_40,local_38,local_res20);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = explicit_s_private_key_does_not_match_seed(param_1);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\keymgmt\\ml_dsa_kmgmt.c",0xf4,"ml_dsa_key_fromdata")
        ;
        FUN_140b91cc0(0x39,0x79,0);
        return 0;
      }
      goto LAB_140d35367;
    }
LAB_140d35343:
    if (local_res20 != 0) goto LAB_140d3534c;
    if (local_48 == 0) goto LAB_140d35367;
    iVar1 = FUN_140d9fae0(param_1,local_30);
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_140d35367:
  if ((local_48 != 0) && (local_res20 + local_40 != 0)) {
    _Buf1 = (void *)FUN_140c0af10(param_1);
    iVar1 = memcmp(_Buf1,local_30,local_48);
    if (iVar1 != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\keymgmt\\ml_dsa_kmgmt.c",0x104,"ml_dsa_key_fromdata");
      FUN_140b91cc0(0x39,0x9e,"explicit %s public key does not match private",*puVar2);
      d_aplatformplatformopenssl_srccryptoml_dsaml(param_1);
      return 0;
    }
  }
  return 1;
}

