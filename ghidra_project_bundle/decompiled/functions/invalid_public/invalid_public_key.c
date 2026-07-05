/**
 * Function: invalid_public_key
 * Address:  140ca5650
 * Signature: undefined invalid_public_key(void)
 * Body size: 830 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void invalid_public_key(undefined8 *param_1,void *param_2,ulonglong *param_3,undefined8 param_4,
                       ulonglong *param_5)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t _Size;
  size_t sVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  int local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  void *local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [144];
  undefined1 local_e8 [144];
  ulonglong local_58;
  
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_228;
  lVar1 = param_1[8];
  local_1e0 = 0;
  local_1d8 = param_4;
  local_1d0 = param_2;
  if (param_2 == (void *)0x0) {
    if (param_3 != (ulonglong *)0x0) {
      *param_3 = *(ulonglong *)(lVar1 + 0x28);
    }
    if (param_5 != (ulonglong *)0x0) {
      *param_5 = *(ulonglong *)(lVar1 + 0x20);
    }
    goto LAB_140ca597e;
  }
  if (*param_5 < *(ulonglong *)(lVar1 + 0x20)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\ec_kem.c",0x299,"dhkem_encap");
    pcVar10 = "*secretlen too small";
  }
  else {
    if (*(ulonglong *)(lVar1 + 0x28) <= *param_3) {
      uVar8 = param_1[6];
      puVar2 = (undefined1 *)param_1[5];
      lVar4 = FUN_140c0e170(param_1[2],param_1[3]);
      if (lVar4 == 0) {
LAB_140ca5948:
        FUN_140c0e290(lVar4);
        lVar4 = 0;
      }
      else {
        uVar5 = FUN_140b772a0(*param_1);
        iVar3 = FUN_140c0e3a0(lVar4,uVar5);
        if (iVar3 == 0) goto LAB_140ca5948;
        if ((puVar2 == (undefined1 *)0x0) || (puVar9 = puVar2, uVar8 == 0)) {
          uVar8 = *(ulonglong *)(param_1[8] + 0x38);
          if ((0x42 < uVar8) || (iVar3 = FUN_140b82e60(param_1[2],local_1c8,uVar8,0), iVar3 < 1))
          goto LAB_140ca5948;
          puVar9 = local_1c8;
        }
        local_1e8 = FUN_140c0f0b0(lVar4,puVar9,uVar8);
        if (puVar9 != puVar2) {
          FUN_14046e980(puVar9,uVar8);
        }
        if (local_1e8 < 1) goto LAB_140ca5948;
        uVar5 = FUN_140b772a0(lVar4);
        uVar6 = FUN_140b97dc0(lVar4);
        local_200 = 0;
        local_208 = 0x85;
        _Size = FUN_140c942b0(uVar5,uVar6,4,local_178);
        if (_Size != 0) {
          uVar5 = *param_1;
          uVar6 = FUN_140b772a0(uVar5);
          uVar5 = FUN_140b97dc0(uVar5);
          local_200 = 0;
          local_208 = 0x85;
          sVar7 = FUN_140c942b0(uVar6,uVar5,4,local_e8);
          if (sVar7 != 0) {
            if ((_Size == *(size_t *)(lVar1 + 0x30)) && (sVar7 == _Size)) {
              local_200 = *param_1;
              local_1f0 = local_e8;
              local_1f8 = local_178;
              local_208 = param_1[1];
              iVar3 = invalid_sender_auth_public_key(param_1,local_1d8,lVar4);
              if (iVar3 != 0) {
                memcpy(local_1d0,local_178,_Size);
                *param_3 = _Size;
                *param_5 = *(ulonglong *)(lVar1 + 0x20);
                local_1e0 = CONCAT44(local_1e0._4_4_,1);
              }
            }
            else {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("providers\\implementations\\kem\\ec_kem.c",0x2ad,"dhkem_encap");
              FUN_140b91cc0(0x39,0x9e,"Invalid public key");
            }
          }
        }
      }
      FUN_140c0e290(lVar4);
      goto LAB_140ca597e;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\ec_kem.c",0x29d,"dhkem_encap");
    pcVar10 = "*enclen too small";
  }
  FUN_140b91cc0(0x39,0x8e,pcVar10);
LAB_140ca597e:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_228);
}

