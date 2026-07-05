/**
 * Function: invalid_enc_public_key
 * Address:  140d51ac0
 * Signature: undefined invalid_enc_public_key(void)
 * Body size: 556 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong invalid_enc_public_key
                   (longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
                   longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_a8 [48];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  local_30 = 0x140d51add;
  lVar1 = param_1[8];
  lVar4 = 0;
  lVar2 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(ulonglong *)(lVar1 + 0x20);
    lVar4 = 1;
  }
  else if (*param_3 < *(ulonglong *)(lVar1 + 0x20)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\ecx_kem.c",0x275,"dhkem_decap");
    FUN_140b91cc0(0x39,0x8e,"*secretlen too small");
    lVar4 = 0;
  }
  else if (param_5 == *(longlong *)(lVar1 + 0x28)) {
    puVar5 = (undefined8 *)FUN_140b93860(local_a8,&DAT_1413a64f0,param_4);
    local_78 = *puVar5;
    uStack_70 = puVar5[1];
    local_68 = *(undefined4 *)(puVar5 + 2);
    uStack_64 = *(undefined4 *)((longlong)puVar5 + 0x14);
    uStack_60 = *(undefined4 *)(puVar5 + 3);
    uStack_5c = *(undefined4 *)((longlong)puVar5 + 0x1c);
    local_58 = puVar5[4];
    puVar5 = (undefined8 *)FUN_140b93900(local_a8);
    local_50 = *puVar5;
    uStack_48 = puVar5[1];
    local_40 = *(undefined4 *)(puVar5 + 2);
    uStack_3c = *(undefined4 *)((longlong)puVar5 + 0x14);
    uStack_38 = *(undefined4 *)(puVar5 + 3);
    uStack_34 = *(undefined4 *)((longlong)puVar5 + 0x1c);
    local_30 = puVar5[4];
    lVar6 = FUN_140c13030(param_1[2],*(undefined4 *)(*param_1 + 0x60),1,param_1[3]);
    lVar7 = lVar4;
    if (lVar6 != 0) {
      iVar3 = FUN_140c7fe30(lVar6,&local_78,0);
      if (iVar3 < 1) {
        FUN_140c13180(lVar6);
      }
      else {
        lVar7 = lVar6;
        if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x10) & 1) == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\kem\\ecx_kem.c",0x98,"ecx_pubkey");
          FUN_140b91cc0(0x39,0xdc,0);
          lVar4 = 0;
        }
        else if ((lVar2 + 0x14 != 0) &&
                (iVar3 = ecx_pubkey(param_1,param_2,*param_1,lVar6,*param_1,param_1[1],param_4,
                                    lVar2 + 0x14), iVar3 != 0)) {
          *param_3 = *(ulonglong *)(lVar1 + 0x20);
          lVar4 = 1;
        }
      }
    }
    FUN_140c13180(lVar7);
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\ecx_kem.c",0x279,"dhkem_decap");
    FUN_140b91cc0(0x39,0x9e,"Invalid enc public key");
    lVar4 = 0;
  }
  return lVar4;
}

