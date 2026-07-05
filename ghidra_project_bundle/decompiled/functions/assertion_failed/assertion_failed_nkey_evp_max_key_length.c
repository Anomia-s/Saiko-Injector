/**
 * Function: assertion_failed_nkey_evp_max_key_length
 * Address:  140c700b0
 * Signature: undefined assertion_failed_nkey_evp_max_key_length(void)
 * Body size: 645 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void assertion_failed_nkey_evp_max_key_length
               (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,int param_5,
               uint param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  local_c4 = 0;
  local_c8 = 0;
  local_b8 = param_4;
  local_b0 = param_3;
  local_a8 = param_1;
  iVar1 = FUN_140b97ea0();
  uVar2 = FUN_140b97eb0(param_1);
  if (0x40 < iVar1) {
    s_d_openssl_internal_error_sn
              ("assertion failed: nkey <= EVP_MAX_KEY_LENGTH","crypto\\evp\\evp_key.c",0x5a);
  }
  if (0x10 < uVar2) {
    s_d_openssl_internal_error_sn
              ("assertion failed: niv >= 0 && niv <= EVP_MAX_IV_LENGTH","crypto\\evp\\evp_key.c",
               0x5b);
  }
  if (param_4 != 0) {
    lVar5 = FUN_140b70980();
    if (lVar5 != 0) {
      iVar3 = FUN_140b70ff0(lVar5,param_2,0);
      iVar4 = 0;
      do {
        if (((iVar3 == 0) ||
            ((((local_c0 = iVar4 + 1, iVar4 != 0 &&
               (iVar4 = evp_digestupdate(lVar5,local_98,local_c8), iVar4 == 0)) ||
              (iVar4 = evp_digestupdate(lVar5,local_b8,(longlong)param_5), iVar4 == 0)) ||
             ((local_b0 != 0 && (iVar4 = evp_digestupdate(lVar5,local_b0,8), iVar4 == 0)))))) ||
           (iVar4 = assertion_failed_mdsize_evp_max_md_size(lVar5,local_98,&local_c8), iVar4 == 0))
        break;
        uVar7 = 1;
        if (1 < param_6) {
          do {
            iVar4 = FUN_140b70ff0(lVar5,param_2,0);
            if (((iVar4 == 0) || (iVar4 = evp_digestupdate(lVar5,local_98,local_c8), iVar4 == 0)) ||
               (iVar4 = assertion_failed_mdsize_evp_max_md_size(lVar5,local_98), iVar4 == 0))
            goto LAB_140c7030a;
            uVar7 = uVar7 + 1;
          } while (uVar7 < param_6);
        }
        uVar6 = 0;
        while ((iVar4 = (int)uVar6, iVar1 != 0 && (iVar4 != local_c8))) {
          if (param_7 != (undefined1 *)0x0) {
            *param_7 = local_98[uVar6];
            param_7 = param_7 + 1;
          }
          iVar1 = iVar1 + -1;
          uVar6 = (ulonglong)(iVar4 + 1);
        }
        if ((uVar2 != 0) && (iVar4 != local_c8)) {
          do {
            if ((int)uVar6 == local_c8) break;
            if (param_8 != (undefined1 *)0x0) {
              *param_8 = local_98[uVar6];
              param_8 = param_8 + 1;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        if ((iVar1 == 0) && (uVar2 == 0)) {
          local_c4 = FUN_140b97ea0(local_a8);
          break;
        }
        iVar3 = FUN_140b70ff0(lVar5,param_2,0);
        iVar4 = local_c0;
      } while( true );
    }
LAB_140c7030a:
    FUN_140b709d0(lVar5);
    FUN_14046e980(local_98,0x40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_e8);
}

