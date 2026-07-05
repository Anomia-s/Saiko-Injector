/**
 * Function: invalid_recipient_public_key
 * Address:  140ca59a0
 * Signature: undefined invalid_recipient_public_key(void)
 * Body size: 615 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void invalid_recipient_public_key
               (undefined8 *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
               longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 local_e8 [144];
  ulonglong local_58;
  
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_148;
  local_100 = param_5;
  lVar1 = param_1[8];
  lVar2 = *(longlong *)(lVar1 + 0x30);
  local_108 = param_4;
  local_f8 = param_2;
  if (param_2 == 0) {
    *param_3 = *(ulonglong *)(lVar1 + 0x20);
    goto LAB_140ca5bf7;
  }
  if (*param_3 < *(ulonglong *)(lVar1 + 0x20)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\ec_kem.c",0x2e2,"dhkem_decap");
    FUN_140b91cc0(0x39,0x8e,"*secretlen too small");
    goto LAB_140ca5bf7;
  }
  if (param_5 != lVar2) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\ec_kem.c",0x2e6,"dhkem_decap");
    FUN_140b91cc0(0x39,0x9e,"Invalid enc public key");
    goto LAB_140ca5bf7;
  }
  uVar7 = *param_1;
  uVar4 = FUN_140c0f090(uVar7);
  uVar5 = FUN_140b9f2f0(uVar7);
  lVar6 = FUN_140c0e170(uVar5,uVar4);
  if (lVar6 == 0) {
LAB_140ca5bca:
    FUN_140c0e290(lVar6);
    lVar6 = 0;
  }
  else {
    uVar7 = FUN_140b772a0(uVar7);
    iVar3 = FUN_140c0e3a0(lVar6,uVar7);
    if (iVar3 == 0) goto LAB_140ca5bca;
    iVar3 = FUN_140c0e7c0(lVar6,local_108,local_100,0);
    if (iVar3 == 0) goto LAB_140ca5bca;
    uVar7 = *param_1;
    uVar4 = FUN_140b772a0(uVar7);
    uVar7 = FUN_140b97dc0(uVar7);
    local_120 = 0;
    local_128 = 0x85;
    lVar8 = FUN_140c942b0(uVar4,uVar7,4,local_e8);
    if (lVar8 != 0) {
      if (lVar8 == lVar2) {
        local_128 = *param_1;
        local_110 = local_e8;
        local_118 = local_108;
        local_120 = param_1[1];
        iVar3 = invalid_sender_auth_public_key(param_1,local_f8,local_128,lVar6);
        if (iVar3 != 0) {
          *param_3 = *(ulonglong *)(lVar1 + 0x20);
        }
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\kem\\ec_kem.c",0x2f1,"dhkem_decap");
        FUN_140b91cc0(0x39,0x9e,"Invalid recipient public key");
      }
    }
  }
  FUN_140c0e290(lVar6);
LAB_140ca5bf7:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_148);
}

